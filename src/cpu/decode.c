#include "rbt/cpu/decode.h"

#include "rbt/cpu/effective_address.h"

#include <assert.h>
#include <string.h>

// Opcode field bits
#define _OP_GROUP(word)	   (rbt_bits((word), 15, 12))
#define _OP_SUBGROUP(word) (rbt_bits((word), 11, 8))

#define _OP_SIZE(word) (rbt_bits((word), 7, 6))
#define _OP_COND(word) (rbt_bits((word), 11, 8))

#define _OP_EA_MODE(word) (rbt_bits((word), 0, 2))
#define _OP_EA_REG(word)  (rbt_bits((word), 5, 3))

#define _OP_MOVE_SRC_MODE(word) _OP_EA_MODE(word)
#define _OP_MOVE_SRC_REG(word)	_OP_EA_REG(word)
#define _OP_MOVE_DST_MODE(word) (rbt_bits((word), 8, 6))
#define _OP_MOVE_DST_REG(word)	(rbt_bits((word), 11, 9))

[[nodiscard]] static inline RBT_OperandSize _decode_size(u8 size) {
	switch (size) {
	case 0b00: return RBT_SIZE_BYTE;
	case 0b01: return RBT_SIZE_WORD;
	case 0b10: return RBT_SIZE_LONG;
	default:   return RBT_SIZE_NONE;
	}
}

[[nodiscard]] static u8 _store_operand_as_words(
	const RBT_Operand *operand, RBT_OperandSize size, u16 *words
) {
	assert(operand);

	switch (operand->type) {
	case RBT_OPERAND_EA: //
		return rbt_encode_effective_address(&operand->ea, words);
	case RBT_OPERAND_IMM:
		if (words) {
			if (size == RBT_SIZE_LONG) {
				words[0] = (operand->imm >> 16) & 0xffff;
				words[1] = operand->imm & 0xffff;
			} else {
				words[0] = operand->imm & 0xffff;
			}
		}

		return (size == RBT_SIZE_LONG) ? 2 : 1;
	case RBT_OPERAND_DISP:
		if (words)
			words[0] = operand->disp & 0xffff;
		return 1;
	case RBT_OPERAND_INDIRECT:
		if (words)
			words[0] = operand->indirect.disp & 0xffff;
		return 1;
	default: return 0;
	}

	unreachable();
}

static RBT_ErrorCode _decode_bit(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	// Static BTST/BCHG/BCLR/BSET: 0000 1000 TT MMMRRR [B.L]
	// Dynamic BTST/BCHG/BCLR/BSET: 0000 DDD1 TT MMMRRR [B.L]
	u8 dreg = rbt_bits(opcode, 11, 9);
	u8 type = _OP_SIZE(opcode);
	u8 ea_mode = _OP_EA_MODE(opcode);
	u8 ea_reg = _OP_EA_REG(opcode);

	switch (type) {
	case 0b00: instr->mnemonic = RBT_OP_BTST; break;
	case 0b01: instr->mnemonic = RBT_OP_BCHG; break;
	case 0b10: instr->mnemonic = RBT_OP_BCLR; break;
	case 0b11: instr->mnemonic = RBT_OP_BSET; break;
	}

	// Register operands are 32-bits, and memory operands are 8-bits
	instr->size = (ea_mode == 0b000) ? RBT_SIZE_LONG : RBT_SIZE_BYTE;

	// Is dynamic?
	if (RBT_BIT(opcode, 8)) {
		instr->src.type = RBT_OPERAND_DREG;
		instr->src.reg = dreg;
	} else {
		instr->src.type = RBT_OPERAND_IMM;
		instr->src.imm = rbt_bus_read_word(bus, curr_pc) & 0xff;
		if (bus->error_code) {
			return bus->error_code;
		}

		curr_pc += 2; // Skip word
	}

	instr->dst.type = RBT_OPERAND_EA;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	// EA invalid: An | PC-relative(if not BTST)
	u16 invalid_ea = RBT_EA_DIRECT_ADDR;
	if (instr->mnemonic != RBT_OP_BTST)
		invalid_ea |= RBT_EA_GROUP_PCR;

	if ((instr->dst.ea.mode & invalid_ea) != 0u) {
		rbt_push_warn("BIT: Illegal address mode at: 0x%06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL_EA;
	}

	return RBT_ERR_SUCCESS;
}

static i32 _decode_imm(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	// ORI/ANDI/SUBI/ADDI/EORI/CMPI: 0000 TTT0 SS MMMRRR [BWL]
	u8 type = rbt_bits(opcode, 11, 9);
	u8 size = _OP_SIZE(opcode);
	u8 ea_mode = _OP_EA_MODE(opcode);
	u8 ea_reg = _OP_EA_REG(opcode);

	instr->size = _decode_size(size);
	if (instr->size == RBT_SIZE_NONE) {
		rbt_push_warn("Invalid operand size at: 0x%06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL;
	}

	switch (type) {
	case 0b000: instr->mnemonic = RBT_OP_ORI; break;
	case 0b001: instr->mnemonic = RBT_OP_ANDI; break;
	case 0b010: instr->mnemonic = RBT_OP_SUBI; break;
	case 0b011: instr->mnemonic = RBT_OP_ADDI; break;
	case 0b101: instr->mnemonic = RBT_OP_EORI; break;
	case 0b110: instr->mnemonic = RBT_OP_CMPI; break;
	default:
		rbt_push_warn("Unknown immediate type 0x%02x at: 0x%06x", type, instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL;
	}

	instr->src.type = RBT_OPERAND_IMM;
	instr->src.imm = rbt_bus_load(bus, instr->size, curr_pc);
	if (bus->error_code) {
		return bus->error_code;
	}

	// Skip out immediate words
	curr_pc += (instr->size == RBT_SIZE_LONG) ? 4 : 2;

	// Is destination CCR/SR?
	if (ea_mode == 0b111 && ea_reg == 0b100) {
		if (instr->mnemonic != RBT_OP_ORI && instr->mnemonic != RBT_OP_ANDI
			&& instr->mnemonic != RBT_OP_EORI) {
			rbt_push_warn("IMM: Illegal CCR/SR destination at: 0x%06x", instr->start_pc);
			return RBT_ERR_DECODE_ILLEGAL;
		}

		if (instr->size == RBT_SIZE_LONG || instr->size == RBT_SIZE_NONE) {
			rbt_push_warn("IMM: Illegal implied register at: 0x%06x", instr->start_pc);
			return RBT_ERR_DECODE_ILLEGAL;
		}

		instr->dst.type = (instr->size == RBT_SIZE_BYTE) ? RBT_OPERAND_CCR
														 : RBT_OPERAND_SR;
		return RBT_ERR_SUCCESS;
	}

	instr->dst.type = RBT_OPERAND_EA;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	// EA invalid: An, #imm, PC-relative(if not CMPI)
	u16 ea_invalid = RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE;
	if (instr->mnemonic != RBT_OP_CMPI)
		ea_invalid |= RBT_EA_GROUP_PCR;

	if ((instr->dst.ea.mode & ea_invalid) != 0u) {
		rbt_push_warn("IMM: Illegal address mode at: 0x%06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL_EA;
	}

	return RBT_ERR_SUCCESS;
}

static i32 _decode_moves_movep(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	u8 ea_mode = _OP_EA_MODE(opcode);
	u8 ea_reg = _OP_EA_REG(opcode);

	// Is MOVEP?
	if (RBT_BIT(opcode, 8)) {
		// MOVEP: 0000 DDD1 OO 001RRR [.WL]
		//        OFFSET
		if (ea_mode != 0b001) {
			rbt_push_warn("MOVEP: Invalid encoding at: 0x%06x", instr->start_pc);
			return RBT_ERR_DECODE_ILLEGAL;
		}
		instr->mnemonic = RBT_OP_MOVEP;

		u16 disp = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return bus->error_code;
		}

		// OP-MODE:
		//	100: word, mem->reg
		//	101: long, mem->reg
		//	110: word, mem<-reg
		//	111: long, mem<-reg
		u8 op = rbt_bits(opcode, 7, 6);
		instr->size = RBT_BIT(op, 0);
		instr->aux.type = RBT_OPERAND_DIR;
		instr->aux.dir = RBT_BIT(op, 1) == 1u;

		instr->src.type = RBT_OPERAND_DREG;
		instr->src.reg = rbt_bits(opcode, 11, 9);

		instr->dst.type = RBT_OPERAND_INDIRECT;
		instr->dst.indirect.areg = ea_reg;
		instr->dst.indirect.disp = rbt_sign_extend(RBT_SIZE_WORD, disp);

		curr_pc += 2;
	} else {
		// MOVES: 0000 1110 SS MMMRRR [BWL] (M68010+)
		//        ARRR d000 0000 0000
		if (rbt_bits(opcode, 11, 9) != 0b111) {
			rbt_push_warn("MOVES: Invalid encoding at: 0x%06x", instr->start_pc);
			return RBT_ERR_DECODE_ILLEGAL;
		}
		instr->size = _OP_SIZE(opcode);

		// Read raw word, decode it later
		instr->aux.type = RBT_OPERAND_IMM;
		instr->aux.imm = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return bus->error_code;
		}
		curr_pc += 2;

		instr->dst.type = RBT_OPERAND_EA;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
		);
		if (curr_pc == UINT32_MAX) {
			return RBT_ERR_DECODE_INVALID_EA;
		}

		// EA invalid: Dn, An, #imm, PC-relative
		u16 ea_invalid = RBT_EA_DIRECT_DATA | RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE
					   | RBT_EA_GROUP_PCR;
		if ((instr->dst.ea.mode & ea_invalid) != 0u) {
			rbt_push_warn("MOVES: Illegal address mode at: 0x%06x", instr->start_pc);
			return RBT_ERR_DECODE_ILLEGAL_EA;
		}
	}

	return RBT_ERR_SUCCESS;
}

static i32 _decode_move_movea(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	// MOVE:  00SS RRRMMM MMMRRR [BWL]
	// MOVEA: 00SS RRR001 MMMRRR [.WL]
	u8 ea_src_mode = _OP_MOVE_SRC_MODE(opcode);
	u8 ea_src_reg = _OP_MOVE_SRC_REG(opcode);
	u8 ea_dst_mode = _OP_MOVE_DST_MODE(opcode);
	u8 ea_dst_reg = _OP_MOVE_DST_REG(opcode);

	// MOVEA is literally just MOVE with An as EA destination
	instr->mnemonic = (ea_dst_mode == 0b001) ? RBT_OP_MOVEA : RBT_OP_MOVE;

	// Which size?
	switch (rbt_bits(opcode, 13, 12)) {
	case 0b01: instr->size = RBT_SIZE_BYTE; break;
	case 0b11: instr->size = RBT_SIZE_WORD; break;
	case 0b10: instr->size = RBT_SIZE_LONG; break;
	default:
		rbt_push_warn("MOVE: Invalid operand size at: 0x%06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL;
	}

	instr->src.type = RBT_OPERAND_EA;
	curr_pc = rbt_decode_effective_address(
		ea_src_mode, ea_src_reg, instr->size, bus, curr_pc, &instr->src.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	instr->dst.type = RBT_OPERAND_EA;
	curr_pc = rbt_decode_effective_address(
		ea_dst_mode, ea_dst_reg, instr->size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	if (instr->mnemonic == RBT_OP_MOVE) {
		// EA invalid: #imm, PC-relative
		if (instr->dst.ea.mode & (RBT_EA_IMMEDIATE | RBT_EA_GROUP_PCR)) {
			rbt_push_warn(
				"MOVE: An and PC-relative modes are not allowed, at: 0x%06x",
				instr->start_pc
			);
			return RBT_ERR_DECODE_ILLEGAL_EA;
		}
	}

	// An is Word/Long only
	if (instr->dst.ea.mode == RBT_EA_DIRECT_ADDR
		|| instr->src.ea.mode == RBT_EA_DIRECT_ADDR) {
		if (instr->size == RBT_SIZE_BYTE) {
			rbt_push_warn(
				"MOVE/MOVEA: Invalid size operand on an An register, at: 0x%06x",
				instr->start_pc
			);
			return RBT_ERR_DECODE_ILLEGAL_EA;
		}
	}

	return RBT_ERR_SUCCESS;
}

static i32 _decode_move_reg(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	// MOVE fr SR:  0100 000 011 MMMRRR [.W.]
	// MOVE fr CCR: 0100 001 011 MMMRRR [.W.]
	// MOVE to CCR: 0100 010 011 MMMRRR [.W.]
	// MOVE to SR:  0100 011 011 MMMRRR [.W.]
	if (rbt_bits(opcode, 8, 6) != 0b011) {
		rbt_push_warn(
			"MOVE <> SR/CCR: Invalid register encoding at: 0x%06x", instr->start_pc
		);
		return RBT_ERR_DECODE_ILLEGAL;
	}

	u8 ea_mode = _OP_EA_MODE(opcode);
	u8 ea_reg = _OP_EA_REG(opcode);

	switch (rbt_bits(opcode, 11, 9)) {
	case 0b000: instr->mnemonic = RBT_OP_MOVE_FR_SR; break;
	case 0b001: instr->mnemonic = RBT_OP_MOVE_FR_CCR; break;
	case 0b010: instr->mnemonic = RBT_OP_MOVE_TO_CCR; break;
	case 0b011: instr->mnemonic = RBT_OP_MOVE_TO_SR; break;
	default:
		rbt_push_warn("MOVE <> SR/CCR: Unknown register at: 0x%06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL;
	}
	instr->size = RBT_SIZE_WORD;

	instr->aux.type = RBT_OPERAND_EA;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->aux.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	// EA invalid: An, [#imm, PC-relative](if from CCR/SR)
	u16 ea_invalid = RBT_EA_DIRECT_ADDR;
	if (instr->mnemonic == RBT_OP_MOVE_FR_CCR || instr->mnemonic == RBT_OP_MOVE_FR_SR) {
		ea_invalid |= RBT_EA_CLASS_PCR | RBT_EA_CLASS_IMM;
	}

		);
	}
}

RBT_ErrorCode rbt_decode_instruction(RBT_MemoryBus *bus, u32 pc, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	memset(instr, 0, sizeof(RBT_Instruction));
	instr->start_pc = pc& 0xff'ffff; instr->word_count = 1;
	instr->words[0] = rbt_bus_read_word(bus, instr->start_pc);
	if (bus->error_code) {
		rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Failed to fetch instruction word");
		return bus->error_code;
	}

	RBT_ErrorCode status = RBT_ERR_SUCCESS;

	u16 opcode = instr->words[0];
	RBT_OpGroup group = _OP_GROUP(opcode);
	switch (group) {
	case RBT_OPGROUP_BITMOVEPIMM: {
		u16 opcode = instr->words[0];
		u8 subgroup = _OP_SUBGROUP(opcode);

		if (subgroup == 0x0e) {
			// MOVES: 0000 1110 SS MMMRRR [BWL] (M68010+)
			status = _decode_moves_movep(instr, bus);
			break;
		}

		if (subgroup == 0x08) {
			// Static BTST/BCHG/BCLR/BSET: 0000 1000 TT MMMRRR [B.L]
			status = _decode_bit(instr, bus);
			break;
		}

		if (RBT_BIT(opcode, 8)) {
			// We can check here, since An is an invalid EA mode in next opcodes
			if (_OP_EA_MODE(opcode) == 0b001) {
				// MOVEP: 0000 DDD1 OO 001RRR [.WL]
				status = _decode_moves_movep(instr, bus);
				break;
			}

			// Dynamic BTST/BCHG/BCLR/BSET: 0000 DDD1 TT MMMRRR [B.L]
			status = _decode_bit(instr, bus);
			break;
		}

		// ORI/ANDI/SUBI/ADDI/EORI/CMPI: 0000 TTT0 SS MMMRRR [BWL]
		status = _decode_imm(instr, bus);
	} break;
	case RBT_OPGROUP_MOVEBYTE:
	case RBT_OPGROUP_MOVELONG:
	case RBT_OPGROUP_MOVEWORD: {
		status = _decode_move_movea(instr, bus);
	} break;
	case RBT_OPGROUP_ADDQSUBQ: break;
	case RBT_OPGROUP_BRANCH:   break;
	case RBT_OPGROUP_MOVEQ:	   break;
	case RBT_OPGROUP_ORDIV:	   break;
	case RBT_OPGROUP_SUBSUBX:  break;
	case RBT_OPGROUP_LINEA:
		instr->mnemonic = RBT_OP_LINEA;
		instr->size = RBT_SIZE_NONE;
		break;
	case RBT_OPGROUP_CMPEOR:  break;
	case RBT_OPGROUP_ANDMUL:  break;
	case RBT_OPGROUP_ADDADDX: break;
	case RBT_OPGROUP_SHIFT:	  break;
	case RBT_OPGROUP_LINEF:
		instr->mnemonic = RBT_OP_LINEF;
		instr->size = RBT_SIZE_NONE;
		break;
	}

	instr->word_count += _store_operand_as_words(
		&instr->aux, instr->size, &instr->words[instr->word_count]
	);
	instr->word_count += _store_operand_as_words(
		&instr->src, instr->size, &instr->words[instr->word_count]
	);
	instr->word_count += _store_operand_as_words(
		&instr->dst, instr->size, &instr->words[instr->word_count]
	);

	instr->len = instr->word_count * 2; // length is stored as bytes
	return status;
}
