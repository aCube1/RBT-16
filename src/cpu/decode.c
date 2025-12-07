#include "rbt/cpu/decode.h"

#include <assert.h>
#include <string.h>

#define _RBT_STATUS_ILLEGAL -1
#define _RBT_STATUS_OK		0
#define _RBT_STATUS_ERR		1

// Opcode field bits
#define _RBT_OP_GROUP(word)	   (rbt_bits((word), 15, 12))
#define _RBT_OP_SUBGROUP(word) (rbt_bits((word), 11, 8))

#define _RBT_OP_SIZE(word) (rbt_bits((word), 7, 6))
#define _RBT_OP_COND(word) (rbt_bits((word), 11, 8))

#define _RBT_OP_EA_MODE(word) (rbt_bits((word), 0, 2))
#define _RBT_OP_EA_REG(word)  (rbt_bits((word), 5, 3))

#define _RBT_OP_MOVE_SRC_MODE(word) _RBT_OP_EA_MODE(word)
#define _RBT_OP_MOVE_SRC_REG(word)	_RBT_OP_EA_MODE(word)
#define _RBT_OP_MOVE_DST_MODE(word) (rbt_bits((word), 8, 6))
#define _RBT_OP_MOVE_DST_REG(word)	(rbt_bits((word), 11, 9))

// Aliases
#define _RBT_OP_OPMODE(word) _RBT_OP_EA_MODE(word)
#define _RBT_OP_TYPE(word)	 _RBT_OP_EA_REG(word)
#define _RBT_OP_DREG(word)	 _RBT_OP_EA_REG(word)
#define _RBT_OP_AREG(word)	 _RBT_OP_EA_REG(word)

[[nodiscard]] static inline RBT_OperandSize _decode_size(u8 size) {
	switch (size) {
	case 0b00:
		return RBT_SIZE_BYTE;
	case 0b01:
		return RBT_SIZE_WORD;
	case 0b10:
		return RBT_SIZE_LONG;
	default:
		return RBT_SIZE_NONE;
	}
}

static u8 _ea_to_words(const RBT_EffectiveAddress *ea, u16 *words) {
	assert(ea);
	assert(words);

	switch (ea->mode) {
	case RBT_EA_INDIRECT_DISPLACEMENT:
		if (words)
			words[0] = ea->indirect_disp.disp & 0xffff;
		return 1;
	case RBT_EA_INDIRECT_INDEXED:
		if (words)
			words[0] = rbt_indexext_to_word(&ea->indirect_indexed.ix);
		return 1;
	case RBT_EA_ABSOLUTE_SHORT:
		if (words)
			words[0] = ea->absolute_short & 0xffff;
		return 1;
	case RBT_EA_ABSOLUTE_LONG:
		if (words) {
			words[0] = (ea->absolute_long >> 16) & 0xffff;
			words[1] = ea->absolute_long & 0xffff;
		}
		return 2;
	case RBT_EA_PC_DISPLACEMENT:
		if (words)
			words[0] = ea->pc_disp & 0xffff;
		return 1;
	case RBT_EA_PC_INDEXED:
		if (words)
			words[0] = rbt_indexext_to_word(&ea->pc_indexed);
		return 1;
	case RBT_EA_IMMEDIATE:
		if (words) {
			if (ea->size == RBT_SIZE_LONG) {
				words[0] = (ea->imm >> 16) & 0xffff;
				words[1] = ea->imm & 0xffff;
			} else {
				words[0] = ea->imm & 0xffff;
			}
		}

		return ea->size == RBT_SIZE_LONG ? 2 : 1;
	default:
		break;
	}

	return 0;
}

static i32 _decode_movep_moves(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	// MOVEP: 0000 DDD OOO 001RRR
	//        OFFSET
	// MOVES: 0000 1110 SS MMMRRR (M68010+)
	//        ARRR d000 0000 0000
	u8 dreg = _RBT_OP_DREG(opcode);
	u8 op = _RBT_OP_OPMODE(opcode);
	u8 size = _RBT_OP_SIZE(opcode);
	u8 ea_mode = _RBT_OP_EA_MODE(opcode);
	u8 ea_reg = _RBT_OP_EA_REG(opcode);

	u32 curr_pc = instr->start_pc + 2;

	if (RBT_BIT(opcode, 8)) {
		instr->mnemonic = RBT_OP_MOVEP;
		// OP-MODE:
		//	100: word, mem->reg
		//	101: long, mem->reg
		//	110: word, reg->mem
		//	111: long, reg->mem
		instr->size = RBT_BIT(op, 0) ? RBT_SIZE_LONG : RBT_SIZE_WORD;
		instr->aux.type = RBT_OPERAND_DIR;
		instr->aux.dir = RBT_BIT(op, 1) == 1u;

		instr->src.type = RBT_OPERAND_DREG;
		instr->src.reg = dreg;

		instr->dst.type = RBT_OPERAND_INDIRECT;
		instr->dst.indirect.areg = ea_reg;
		instr->dst.indirect.disp = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return _RBT_STATUS_ERR;
		}
	} else {
		instr->mnemonic = RBT_OP_MOVES;
		instr->size = size;

		// Read raw word, decode it in runtime
		instr->src.type = RBT_OPERAND_IMM;
		instr->src.imm = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return _RBT_STATUS_ERR;
		}
		curr_pc += 2; // Skip extension word

		instr->aux.type = RBT_OPERAND_EA;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
		);
		if (curr_pc == UINT32_MAX) {
			return _RBT_STATUS_ERR;
		}

		RBT_AddressClass ea_allowed = RBT_EA_CLASS_MEM | RBT_EA_CLASS_IND
									| RBT_EA_CLASS_ABS | RBT_EA_CLASS_DSP
									| RBT_EA_CLASS_IDX;

		if ((instr->dst.ea.class & ea_allowed) != instr->dst.ea.class) {
			rbt_push_warn("Invalid address mode at: 0x%06x", instr->start_pc);
			return _RBT_STATUS_ILLEGAL;
		}
	}

	return _RBT_STATUS_OK;
}

static i32 _decode_bit(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	// Static BTST/BCHG/BCLR/BSET: 0000 1000 TT MMMRRR
	// Dynamic BTST/BCHG/BCLR/BSET: 0000 DDD1 TT MMMRRR
	u8 dreg = _RBT_OP_DREG(opcode);
	u8 type = _RBT_OP_SIZE(opcode);
	u8 ea_mode = _RBT_OP_EA_MODE(opcode);
	u8 ea_reg = _RBT_OP_EA_REG(opcode);

	u32 curr_pc = instr->start_pc + 2;

	// clang-format off
	switch (type) {
	case 0b00: instr->mnemonic = RBT_OP_BTST; break;
	case 0b01: instr->mnemonic = RBT_OP_BCHG; break;
	case 0b10: instr->mnemonic = RBT_OP_BCLR; break;
	case 0b11: instr->mnemonic = RBT_OP_BSET; break;
	}
	// clang-format on

	// Is register?
	if (RBT_BIT(opcode, 8)) {
		instr->src.type = RBT_OPERAND_DREG;
		instr->src.reg = dreg;
	} else {
		instr->src.type = RBT_OPERAND_IMM;
		instr->src.imm = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return _RBT_STATUS_ERR;
		}

		// Only low byte is used
		instr->words[instr->word_count++] = instr->src.imm & 0xff;
		curr_pc += 2;
	}

	// Dn is long only; Other modes are byte only
	instr->size = ea_mode == 0b000 ? RBT_SIZE_LONG : RBT_SIZE_BYTE;

	instr->dst.type = RBT_OPERAND_EA;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return _RBT_STATUS_ERR;
	}

	RBT_AddressClass ea_allowed = RBT_EA_CLASS_DREG | RBT_EA_CLASS_MEM | RBT_EA_CLASS_IND
								| RBT_EA_CLASS_ABS | RBT_EA_CLASS_DSP | RBT_EA_CLASS_IDX;
	if (instr->mnemonic == RBT_OP_BTST) {
		ea_allowed |= RBT_EA_CLASS_PCR;
	}

	if ((instr->dst.ea.class & ea_allowed) != instr->dst.ea.class) {
		rbt_push_warn("Invalid address mode at: 0x%06x", instr->start_pc);
		return _RBT_STATUS_ILLEGAL;
	}

	return _RBT_STATUS_OK;
}

static i32 _decode_imm(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	// ORI/ANDI/SUBI/ADDI/EORI/CMPI: 0000 TTT0 SS MMMRRR
	u8 type = _RBT_OP_TYPE(opcode);
	u8 size = _RBT_OP_SIZE(opcode);
	u8 ea_mode = _RBT_OP_EA_MODE(opcode);
	u8 ea_reg = _RBT_OP_EA_REG(opcode);

	u32 curr_pc = instr->start_pc + 2;

	instr->size = _decode_size(size);
	if (instr->size == RBT_SIZE_NONE) {
		rbt_push_warn("Invalid size field for immediate op at: 0x%06x", instr->start_pc);
		return _RBT_STATUS_ILLEGAL;
	}

	// clang-format off
	switch (type) {
	case 0b0000: instr->mnemonic = RBT_OP_ORI; break;
	case 0b0010: instr->mnemonic = RBT_OP_ANDI; break;
	case 0b0100: instr->mnemonic = RBT_OP_SUBI; break;
	case 0b0110: instr->mnemonic = RBT_OP_ADDI; break;
	case 0b1010: instr->mnemonic = RBT_OP_EORI; break;
	case 0b1100: instr->mnemonic = RBT_OP_CMPI; break;
	default:
		rbt_push_warn("Unknown immediate type 0x%02x at: 0x%06x", type, instr->start_pc);
		return _RBT_STATUS_ILLEGAL;
	}
	// clang-format on

	instr->src.type = RBT_OPERAND_IMM;
	instr->src.imm = rbt_bus_load(bus, instr->size, curr_pc);
	if (bus->error_code) {
		return _RBT_STATUS_ERR;
	}

	if (instr->size == RBT_SIZE_LONG) {
		instr->words[instr->word_count++] = (instr->src.imm >> 16) & 0xffff;
		instr->words[instr->word_count++] = instr->src.imm & 0xffff;
		curr_pc += 4;
	} else {
		instr->words[instr->word_count++] = instr->src.imm & 0xffff;
		curr_pc += 2;
	}

	bool is_ccr_sr = ea_mode == 0b111 && ea_reg == 0b100;
	if (is_ccr_sr) {
		if (instr->mnemonic != RBT_OP_ORI && instr->mnemonic != RBT_OP_ANDI
			&& instr->mnemonic != RBT_OP_EORI) {
			rbt_push_warn("Illegal CCR/SR destination at: 0x%06x", instr->start_pc);
			return _RBT_STATUS_ILLEGAL;
		}

		if (size == 0b00) {
			instr->dst.type = RBT_OPERAND_CCR;
			instr->size = RBT_SIZE_BYTE;
		} else if (size == 0b01) {
			instr->dst.type = RBT_OPERAND_SR;
			instr->size = RBT_SIZE_WORD;
		} else {
			rbt_push_warn("Illegal register for at: 0x%06x", instr->start_pc);
			return _RBT_STATUS_ILLEGAL;
		}

		return _RBT_STATUS_OK;
	}

	instr->dst.type = RBT_OPERAND_EA;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return _RBT_STATUS_ERR;
	}

	RBT_AddressClass ea_allowed = RBT_EA_CLASS_DREG | RBT_EA_CLASS_MEM | RBT_EA_CLASS_IND
								| RBT_EA_CLASS_ABS | RBT_EA_CLASS_DSP | RBT_EA_CLASS_IDX;
	if (instr->mnemonic == RBT_OP_CMPI) {
		ea_allowed |= RBT_EA_CLASS_PCR;
	}

	if ((instr->dst.ea.class & ea_allowed) != instr->dst.ea.class) {
		rbt_push_warn("Invalid address mode at: 0x%06x", instr->start_pc);
		return _RBT_STATUS_ILLEGAL;
	}

	return _RBT_STATUS_OK;
}

static i32 _decode_group_bitmovepimm(
	RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr
) {
	u8 subgroup = _RBT_OP_SUBGROUP(opcode);

	if (subgroup == 0x0e) {
		// MOVES: 0000 1110 SS MMMRRR (M68010+)
		return _decode_movep_moves(bus, opcode, instr);
	}

	if (subgroup == 0x08) {
		// Static BTST/BCHG/BCLR/BSET: 0000 1000 TT MMMRRR
		return _decode_bit(bus, opcode, instr);
	}

	if (RBT_BIT(opcode, 8)) {
		if (_RBT_OP_EA_MODE(opcode) == 0b001) {
			// MOVEP: 0000 DDD OOO 001RRR
			return _decode_movep_moves(bus, opcode, instr);
		}

		// Dynamic BTST/BCHG/BCLR/BSET: 0000 DDD1 TT MMMRRR
		return _decode_bit(bus, opcode, instr);
	}

	// ORI/ANDI/SUBI/ADDI/EORI/CMPI: 0000 TTT0 SS MMMRRR
	return _decode_imm(bus, opcode, instr);
}

static i32 _decode_group_move(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	u32 curr_pc = instr->start_pc + 2;
	u8 group = _RBT_OP_GROUP(opcode);

	if (group == 0b0100) {
		// MOVE <- SR:  0100 0000 11 MMMRRR
		// MOVE <- CCR: 0100 0010 11 MMMRRR
		// MOVE -> CCR: 0100 0100 11 MMMRRR
		// MOVE -> SR:  0100 0110 11 MMMRRR
		// MOVE <> USP: 0100 1110 01 10dRRR
		u8 ea_mode = _RBT_OP_EA_MODE(opcode);
		u8 ea_reg = _RBT_OP_EA_REG(opcode);

		u8 subgroup = _RBT_OP_SUBGROUP(opcode);
		// clang-format off
		switch (subgroup) {
		case 0b0000: instr->mnemonic = RBT_OP_MOVE_FROM_SR; break;
		case 0b0010: instr->mnemonic = RBT_OP_MOVE_FROM_CCR; break;
		case 0b0100: instr->mnemonic = RBT_OP_MOVE_TO_SR; break;
		case 0b0110: instr->mnemonic = RBT_OP_MOVE_TO_CCR; break;
		case 0b1110: instr->mnemonic = RBT_OP_MOVE_USP; break;
		default: return _RBT_STATUS_ILLEGAL;
		}
		// clang-format on

		if (rbt_bits(opcode, 7, 6) == 0b01) {
			if (instr->mnemonic != RBT_OP_MOVE_USP)
				return _RBT_STATUS_ILLEGAL;
		} else if (rbt_bits(opcode, 7, 6) != 0b11) {
			return _RBT_STATUS_ILLEGAL;
		}

		// only MOVE USP is long
		instr->size = instr->mnemonic == RBT_OP_MOVE_USP ? RBT_SIZE_LONG : RBT_SIZE_WORD;

		if (instr->mnemonic == RBT_OP_MOVE_USP) {
			instr->dst.type = RBT_OPERAND_AREG;
			instr->dst.reg = ea_reg;
		} else {
			instr->dst.type = RBT_OPERAND_EA;
			curr_pc = rbt_decode_effective_address(
				ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
			);
			if (curr_pc == UINT32_MAX) {
				return _RBT_STATUS_ERR;
			}
		}

		// TODO: Check valid EA
	} else if (group == 0b0100) {
		// MOVEC: 0100 1110 0111 101d
		//        ARRR CCCC CCCC CCCC
		// MOVEM: 0100 1d00 1S MMMRRR
		//        REGISTER MASK
	} else if (group == 0b0111) {
		// MOVEQ: 0111 RRR0 DDDDDDDD
	} else {
		// MOVE:  00SS RRRMMM MMMRRR
		// MOVEA: 00SS RRR001 MMMRRR
		u8 ea_dst_mode = _RBT_OP_MOVE_DST_MODE(opcode);
		u8 ea_dst_reg = _RBT_OP_MOVE_DST_REG(opcode);
		u8 ea_src_mode = _RBT_OP_MOVE_SRC_MODE(opcode);
		u8 ea_src_reg = _RBT_OP_MOVE_SRC_REG(opcode);

		instr->mnemonic = (ea_dst_mode == 0b001) ? RBT_OP_MOVEA : RBT_OP_MOVE;

		instr->size = _decode_size(rbt_bits(opcode, 13, 12));
		if (instr->size == RBT_SIZE_NONE) {
			rbt_push_warn("Invalid size field for move op at: 0x%06x", instr->start_pc);
			return _RBT_STATUS_ILLEGAL;
		}

		instr->src.type = RBT_OPERAND_EA;
		curr_pc = rbt_decode_effective_address(
			ea_src_mode, ea_src_reg, instr->size, bus, curr_pc, &instr->src.ea
		);
		if (curr_pc == UINT32_MAX) {
			return _RBT_STATUS_ERR;
		}

		instr->dst.type = RBT_OPERAND_EA;
		curr_pc = rbt_decode_effective_address(
			ea_dst_mode, ea_dst_reg, instr->size, bus, curr_pc, &instr->dst.ea
		);
		if (curr_pc == UINT32_MAX) {
			return _RBT_STATUS_ERR;
		}

		if (instr->mnemonic == RBT_OP_MOVE) {
			if (instr->dst.ea.class & (RBT_EA_CLASS_IMM | RBT_EA_CLASS_PCR)) {
				rbt_push_warn("Invalid address mode at: 0x%06x", instr->start_pc);
				return _RBT_STATUS_ILLEGAL;
			}
		}

		if ((instr->src.ea.mode == RBT_EA_DIRECT_ADDR
			 || instr->dst.ea.mode == RBT_EA_DIRECT_ADDR)
			&& instr->size == RBT_SIZE_BYTE) {
			rbt_push_warn("Invalid An size destination at: 0x%06x", instr->start_pc);
			return _RBT_STATUS_ILLEGAL;
		}
	}

	return _RBT_STATUS_OK;
}

bool rbt_decode_instruction(RBT_MemoryBus *bus, u32 pc, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	memset(instr, 0, sizeof(RBT_Instruction));

	u16 opcode = rbt_bus_read_word(bus, pc);
	if (bus->error_code) {
		rbt_push_error(
			RBT_ERR_DECODE_ILLEGAL_OPCODE, "Failed to fetch instruction at: 0x%06x", pc
		);
		return false;
	}

	instr->start_pc = pc;

	u8 group = _RBT_OP_GROUP(opcode);

	i32 result = 0;
	switch (group) {
	case RBT_OPGROUP_BITMOVEPIMM:
		result = _decode_group_bitmovepimm(bus, opcode, instr);
		break;
	case RBT_OPGROUP_MOVEBYTE:
	case RBT_OPGROUP_MOVELONG:
	case RBT_OPGROUP_MOVEWORD:
		result = _decode_group_move(bus, opcode, instr);
		break;
	}

	// Opcode isn't illegal neither legal, some error had occurred
	if (result == _RBT_STATUS_ERR) {
		return false;
	}

	// Opcode is illegal
	if (result == _RBT_STATUS_ILLEGAL) {
		memset(instr, 0, sizeof(RBT_Instruction));

		instr->start_pc = pc;
		instr->words[0] = opcode;
		instr->word_count = 1;
		instr->mnemonic = RBT_OP_ILLEGAL;
		instr->size = RBT_SIZE_NONE;
	}

	// Store instruction words
	instr->words[0] = opcode;
	instr->word_count = 1;

	instr->word_count += _ea_to_words(&instr->src.ea, &instr->words[instr->word_count]);
	instr->word_count += _ea_to_words(&instr->dst.ea, &instr->words[instr->word_count]);
	instr->word_count += _ea_to_words(&instr->aux.ea, &instr->words[instr->word_count]);

	instr->len = instr->word_count * 2;
	return true;
}
