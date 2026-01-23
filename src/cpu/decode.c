#include "rbt/cpu/decode.h"

#include "rbt/cpu/effective_address.h"

#include <assert.h>
#include <string.h>

// Opcode field bits
#define _OP_GROUP(word)	   (rbt_bits((word), 15, 12))
#define _OP_SUBGROUP(word) (rbt_bits((word), 11, 8))

#define _OP_SIZE(word) (rbt_bits((word), 7, 6))
#define _OP_COND(word) (rbt_bits((word), 11, 8))

#define _OP_EA_MODE(word) (rbt_bits((word), 5, 3))
#define _OP_EA_REG(word)  (rbt_bits((word), 2, 0))

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
	case RBT_OPERAND_EA: {
		const RBT_EffectiveAddress *ea = &operand->ea;

		switch (ea->mode) {
		case RBT_EA_INDIRECT_DISPLACEMENT:
			words[0] = ea->indirect_disp.disp & 0xffff;
			return 1;
		case RBT_EA_INDIRECT_INDEXED:
			words[0] = rbt_indexext_to_word(&ea->indirect_indexed.ix);
			return 1;
		case RBT_EA_ABSOLUTE_SHORT: //
			words[0] = ea->absolute_short & 0xffff;
			return 1;
		case RBT_EA_ABSOLUTE_LONG:
			words[0] = (ea->absolute_long >> 16) & 0xffff;
			words[1] = ea->absolute_long & 0xffff;
			return 2;
		case RBT_EA_PC_DISPLACEMENT: //
			words[0] = ea->pc_disp & 0xffff;
			return 1;
		case RBT_EA_PC_INDEXED:
			words[0] = rbt_indexext_to_word(&ea->pc_indexed);
			return 1;
		case RBT_EA_IMMEDIATE:
			if (operand->size == RBT_SIZE_LONG) {
				words[0] = (ea->imm >> 16) & 0xffff;
				words[1] = ea->imm & 0xffff;
				return 2;
			}

			words[0] = ea->imm & 0xffff;
			return (size == RBT_SIZE_NONE) ? 0 : 1;
		default: return 0;
		}
	}
	case RBT_OPERAND_IMM:
		if (operand->size == RBT_SIZE_LONG) {
			words[0] = (operand->imm >> 16) & 0xffff;
			words[1] = operand->imm & 0xffff;
			return 2;
		}

		words[0] = operand->imm & 0xffff;
		return (operand->size == RBT_SIZE_NONE) ? 0 : 1;
	case RBT_OPERAND_DISP: //
		words[0] = operand->disp & 0xffff;
		return 1;
	case RBT_OPERAND_INDDISP: //
		words[0] = operand->inddisp.disp & 0xffff;
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

	// Is dynamic?
	// Dn operand is long-size, and memory operands are byte-size
	if (RBT_BIT(opcode, 8)) {
		instr->size = RBT_SIZE_LONG;
		instr->src.type = RBT_OPERAND_DREG;
		instr->src.size = instr->size;
		instr->src.reg = dreg;
	} else {
		instr->size = RBT_SIZE_BYTE;
		instr->src.type = RBT_OPERAND_IMM;
		instr->src.size = instr->size;
		instr->src.imm = rbt_bus_read_word(bus, curr_pc) & 0xff;
		if (bus->error_code) {
			return bus->error_code;
		}

		curr_pc += 2; // Skip word
	}

	instr->dst.type = RBT_OPERAND_EA;
	instr->dst.size = RBT_SIZE_NONE;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->dst.size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	// EA invalid: An | PC-relative(if not BTST)
	u16 invalid_ea = RBT_EA_DIRECT_ADDR;
	if (instr->mnemonic != RBT_OP_BTST)
		invalid_ea |= RBT_EA_GROUP_PCR;

	if ((instr->dst.ea.mode & invalid_ea) != 0u) {
		rbt_push_warn(
			"BIT: Dest EA(An|PC-relative) isn't allowed, at: 0x%06x", instr->start_pc
		);
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
	instr->src.size = instr->size;
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

		instr->dst.type = RBT_OPERAND_SR;
		if (instr->size == RBT_SIZE_BYTE)
			instr->dst.type = RBT_OPERAND_CCR;

		return RBT_ERR_SUCCESS;
	}

	instr->dst.type = RBT_OPERAND_EA;
	instr->dst.size = instr->size;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->dst.size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	// EA invalid: An, #imm, PC-relative(if not CMPI)
	u16 ea_invalid = RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE;
	if (instr->mnemonic != RBT_OP_CMPI)
		ea_invalid |= RBT_EA_GROUP_PCR;

	if ((instr->dst.ea.mode & ea_invalid) != 0u) {
		rbt_push_warn(
			"IMM: Dest EA(An|#imm|PC-relative) isn't allowed, at: 0x%06x", instr->start_pc
		);
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
		//	110: word, reg->mem
		//	111: long, reg->mem
		u8 op = rbt_bits(opcode, 7, 6);
		instr->size = RBT_BIT(op, 0) ? RBT_SIZE_LONG : RBT_SIZE_WORD;
		instr->aux.type = RBT_OPERAND_DIR;
		instr->aux.dir = RBT_BIT(op, 1) == 1u;

		instr->src.type = RBT_OPERAND_DREG;
		instr->src.reg = rbt_bits(opcode, 11, 9);

		instr->dst.type = RBT_OPERAND_INDDISP;
		instr->dst.inddisp.areg = ea_reg;
		instr->dst.inddisp.disp = rbt_sign_extend(RBT_SIZE_WORD, disp);

		curr_pc += 2;
	} else {
		// MOVES: 0000 1110 SS MMMRRR [BWL] (M68010+)
		//        ARRR d000 0000 0000
		if (rbt_bits(opcode, 11, 9) != 0b111) {
			rbt_push_warn("MOVES: Invalid encoding at: 0x%06x", instr->start_pc);
			return RBT_ERR_DECODE_ILLEGAL;
		}
		instr->mnemonic = RBT_OP_MOVES;
		instr->size = _decode_size(_OP_SIZE(opcode));
		if (instr->size == RBT_SIZE_NONE) {
			rbt_push_warn("Invalid operand size at: 0x%06x", instr->start_pc);
			return RBT_ERR_DECODE_ILLEGAL;
		}

		u16 ext = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return bus->error_code;
		}
		curr_pc += 2;

		// Store extension word as auxiliar
		instr->aux.type = RBT_OPERAND_IMM;
		instr->aux.size = RBT_SIZE_WORD;
		instr->aux.imm = RBT_OPERAND_IMM;

		// 0: mem->reg; 1: reg->mem
		const RBT_EffectiveAddress *target_ea;
		if (RBT_BIT(ext, 11)) {
			target_ea = &instr->dst.ea;

			instr->src.type = RBT_BIT(ext, 15) ? RBT_OPERAND_AREG : RBT_OPERAND_DREG;
			instr->src.reg = rbt_bits(ext, 14, 12);

			instr->dst.type = RBT_OPERAND_EA;
			instr->dst.size = instr->size;
			curr_pc = rbt_decode_effective_address(
				ea_mode, ea_reg, instr->dst.size, bus, curr_pc, &instr->dst.ea
			);
			if (curr_pc == UINT32_MAX) {
				return RBT_ERR_DECODE_INVALID_EA;
			}
		} else {
			target_ea = &instr->src.ea;
			instr->src.type = RBT_OPERAND_EA;
			instr->src.size = instr->size;
			curr_pc = rbt_decode_effective_address(
				ea_mode, ea_reg, instr->src.size, bus, curr_pc, &instr->src.ea
			);
			if (curr_pc == UINT32_MAX) {
				return RBT_ERR_DECODE_INVALID_EA;
			}

			instr->dst.type = RBT_BIT(ext, 15) ? RBT_OPERAND_AREG : RBT_OPERAND_DREG;
			instr->dst.reg = rbt_bits(ext, 14, 12);
		}

		// EA invalid: Dn, An, #imm, PC-relative
		u16 ea_invalid = RBT_EA_DIRECT_DATA | RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE
					   | RBT_EA_GROUP_PCR;
		if ((target_ea->mode & ea_invalid) != 0u) {
			rbt_push_warn(
				"MOVES: Target EA(Dn|An|#imm|PC-relative) isn't allowed, at: 0x%06x",
				instr->start_pc
			);
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

	if (instr->mnemonic == RBT_OP_MOVEA && instr->size == RBT_SIZE_BYTE) {
		rbt_push_warn("MOVEA: Cannot be byte-sized, at: 0x%06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL_EA;
	}

	instr->src.type = RBT_OPERAND_EA;
	instr->src.size = instr->size;
	curr_pc = rbt_decode_effective_address(
		ea_src_mode, ea_src_reg, instr->src.size, bus, curr_pc, &instr->src.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	instr->dst.type = RBT_OPERAND_EA;
	instr->dst.size = instr->size;
	curr_pc = rbt_decode_effective_address(
		ea_dst_mode, ea_dst_reg, instr->dst.size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	if (instr->mnemonic == RBT_OP_MOVE) {
		// EA invalid: An, #imm, PC-relative
		u16 ea_invalid = RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE | RBT_EA_GROUP_PCR;
		if ((instr->dst.ea.mode & ea_invalid) != 0u) {
			rbt_push_warn(
				"MOVE: Source EA(An|#imm|PC-relative) isn't allowed, at: 0x%06x",
				instr->start_pc
			);
			return RBT_ERR_DECODE_ILLEGAL_EA;
		}
	}

	// An is Word/Long only
	if (instr->src.ea.mode == RBT_EA_DIRECT_ADDR && instr->size == RBT_SIZE_BYTE) {
		rbt_push_warn(
			"MOVE/MOVEA: Source EA(An) cannot be byte-sized, at: 0x%06x", instr->start_pc
		);
		return RBT_ERR_DECODE_ILLEGAL_EA;
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

	instr->mnemonic = RBT_OP_MOVE;
	instr->size = RBT_SIZE_WORD;

	switch (rbt_bits(opcode, 11, 9)) {
	case 0b000: instr->src.type = RBT_OPERAND_SR; break;  // FROM SR
	case 0b001: instr->src.type = RBT_OPERAND_CCR; break; // FROM CCR
	case 0b010: instr->dst.type = RBT_OPERAND_CCR; break; // TO CCR
	case 0b011: instr->dst.type = RBT_OPERAND_SR; break;  // TO SR
	default:
		rbt_push_warn("MOVE <> SR/CCR: Unknown register at: 0x%06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL;
	}

	if (instr->src.type == RBT_OPERAND_NONE) {
		instr->src.type = RBT_OPERAND_EA;
		instr->src.size = instr->size;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->src.size, bus, curr_pc, &instr->src.ea
		);
	} else {
		instr->dst.type = RBT_OPERAND_EA;
		instr->dst.size = instr->size;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->src.size, bus, curr_pc, &instr->dst.ea
		);
	}

	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	// EA invalid: An, [#imm, PC-relative](if from CCR/SR)
	u16 ea_invalid;
	RBT_EffectiveAddress *ea;
	if (instr->src.type == RBT_OPERAND_EA) {
		ea = &instr->src.ea;
		ea_invalid = RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE | RBT_EA_GROUP_PCR;
	} else {
		ea = &instr->dst.ea;
		ea_invalid = RBT_EA_DIRECT_ADDR;
	}

	if ((ea->mode & ea_invalid) != 0u) {
		rbt_push_warn(
			"MOVE <> SR/CCR: Target EA(An|#imm|PC-relative) isn't allowed , at: 0x%06x",
			instr->start_pc
		);
		return RBT_ERR_DECODE_ILLEGAL_EA;
	}

	return RBT_ERR_SUCCESS;
}

static i32 _decode_negx_clr_not(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	// NEGX: 0100 0000 SS MMMRRR [BWL]
	// NEG:  0100 0100 SS MMMRRR [BWL]
	// CLR:  0100 0010 SS MMMRRR [BWL]
	// NOT:  0100 0110 SS MMMRRR [BWL]
	u8 subgroup = _OP_SUBGROUP(opcode);
	u8 size = _OP_SIZE(opcode);
	u8 ea_mode = _OP_EA_MODE(opcode);
	u8 ea_reg = _OP_EA_REG(opcode);

	switch (subgroup) {
	case 0b0000: instr->mnemonic = RBT_OP_NEGX; break;
	case 0b0100: instr->mnemonic = RBT_OP_NEG; break;
	case 0b0010: instr->mnemonic = RBT_OP_CLR; break;
	case 0b0110: instr->mnemonic = RBT_OP_NOT; break;
	default:
		rbt_push_warn("MISC: Unknown opcode encoding at: %06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL;
	}

	instr->size = _decode_size(size);
	instr->dst.type = RBT_OPERAND_EA;
	instr->dst.size = instr->size;
	curr_pc = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->dst.size, bus, curr_pc, &instr->dst.ea
	);
	if (curr_pc == UINT32_MAX) {
		return RBT_ERR_DECODE_INVALID_EA;
	}

	// EA invalid: An, PC-relative, #imm
	u16 ea_invalid = RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE | RBT_EA_GROUP_PCR;
	if ((instr->dst.ea.mode & ea_invalid) != 0u) {
		rbt_push_warn(
			"MISC: Dest EA(An|#imm|PC-relative) isn't allowed, at: 0x%06x",
			instr->start_pc
		);
		return RBT_ERR_DECODE_ILLEGAL_EA;
	}

	return RBT_ERR_SUCCESS;
}

static i32 _decode_ext_nbcd_swap_pea(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	// EXT:  0100 100 ooo 000DDD [.WL]
	// NBCD: 0100 100 000 MMMRRR [B..]
	// SWAP: 0100 100 001 000RRR [.W.]
	// PEA:  0100 100 001 MMMRRR [..L]
	u8 op = rbt_bits(opcode, 8, 6);
	u8 ea_mode = _OP_EA_MODE(opcode);
	u8 ea_reg = _OP_EA_REG(opcode);

	if (RBT_BIT(op, 1)) {
		instr->mnemonic = RBT_OP_EXT;
		instr->size = RBT_BIT(opcode, 6) ? RBT_SIZE_WORD : RBT_SIZE_LONG;

		instr->aux.type = RBT_OPERAND_DREG;
		instr->aux.reg = ea_reg;

		return RBT_ERR_SUCCESS;
	}

	if (op != 0b000 && op != 0b001) {
		rbt_push_warn("MISC: Unknown opcode encoding at: %06x", instr->start_pc);
		return RBT_ERR_DECODE_ILLEGAL;
	}

	if (op == 0b000) {
		instr->mnemonic = RBT_OP_NBCD;
		instr->size = RBT_SIZE_BYTE;

		instr->dst.type = RBT_OPERAND_EA;
		instr->dst.size = instr->size;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->dst.size, bus, curr_pc, &instr->dst.ea
		);
		if (curr_pc == UINT32_MAX) {
			return RBT_ERR_DECODE_INVALID_EA;
		}

		// EA invalid: An, #imm, PC-relative
		u16 ea_invalid = RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE | RBT_EA_GROUP_PCR;
		if ((instr->dst.ea.mode & ea_invalid) != 0u) {
			rbt_push_warn(
				"NBCD: Dest EA(An|#imm|PC-relative) isn't allowed, at: 0x%06x",
				instr->start_pc
			);
			return RBT_ERR_DECODE_ILLEGAL_EA;
		}
	}

	if (op == 0b001) {
		if (ea_mode == 0b000) {
			instr->mnemonic = RBT_OP_SWAP;
			instr->size = RBT_SIZE_WORD;

			instr->dst.type = RBT_OPERAND_DREG;
			instr->dst.reg = ea_reg;
			return RBT_ERR_SUCCESS;
		}

		instr->mnemonic = RBT_OP_PEA;
		instr->size = RBT_SIZE_LONG;

		instr->src.type = RBT_OPERAND_EA;
		instr->src.size = instr->size;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->src.size, bus, curr_pc, &instr->src.ea
		);
		if (curr_pc == UINT32_MAX) {
			return RBT_ERR_DECODE_INVALID_EA;
		}

		// EA invalid: Dn, An, #imm, PC-relative, (An)+, -(An)
		u16 ea_invalid = RBT_EA_DIRECT_DATA | RBT_EA_DIRECT_ADDR | RBT_EA_GROUP_PCR
					   | RBT_EA_GROUP_REL;

		if ((instr->src.ea.mode & ea_invalid) != 0u) {
			rbt_push_warn(
				"PEA: Dest EA(Dn|An|(An)+|-(An)|#imm|PC-relative) isn't allowed, at: "
				"0x%06x",
				instr->start_pc
			);
			return RBT_ERR_DECODE_ILLEGAL_EA;
		}
	}

	return RBT_ERR_SUCCESS;
}

static i32 _decode_misc(RBT_Instruction *instr, RBT_MemoryBus *bus) {
	u16 opcode = instr->words[0];
	u32 curr_pc = instr->start_pc + 2;

	// JMP:   0100 1110 11 MMMRRR [...]
	// JSR:   0100 1110 10 MMMRRR [...]
	if (RBT_BIT(opcode, 7)) {
		u8 ea_mode = _OP_EA_MODE(opcode);
		u8 ea_reg = _OP_EA_REG(opcode);

		instr->mnemonic = RBT_BIT(opcode, 6) ? RBT_OP_JMP : RBT_OP_JSR;
		instr->size = RBT_SIZE_NONE;

		instr->dst.type = RBT_OPERAND_EA;
		instr->dst.size = instr->size;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->dst.size, bus, curr_pc, &instr->dst.ea
		);
		if (curr_pc == UINT32_MAX) {
			return RBT_ERR_DECODE_INVALID_EA;
		}

		// EA invalid: Dn, An, #imm, (An)+, -(An)
		u16 ea_invalid = RBT_EA_DIRECT_DATA | RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE
					   | RBT_EA_GROUP_REL;
		if ((instr->dst.ea.mode & ea_invalid) != 0u) {
			rbt_push_warn(
				"JMP/JSR: Dest EA(Dn|An|#imm|(An)+|-(An)) isn't allowed, at: 0x%06x",
				instr->start_pc
			);
			return RBT_ERR_DECODE_ILLEGAL_EA;
		}

		return RBT_ERR_SUCCESS;
	}

	// TRAP:  0100 1110 0100 VVVV [...]
	if (rbt_bits(opcode, 7, 4) == 0b0100) {
		instr->mnemonic = RBT_OP_TRAP;
		instr->size = RBT_SIZE_NONE;

		instr->aux.type = RBT_OPERAND_IMM;
		instr->aux.size = RBT_SIZE_BYTE;
		instr->aux.imm = rbt_bits(opcode, 3, 0);
		return RBT_ERR_SUCCESS;
	}

	// UNLK:  0100 1110 0101 1RRR [...]
	// LINK:  0100 1110 0101 0RRR [.W.]
	//        Offset
	if (rbt_bits(opcode, 7, 4) == 0b0101) {
		instr->mnemonic = RBT_BIT(opcode, 3) ? RBT_OP_UNLK : RBT_OP_LINK;
		if (instr->mnemonic == RBT_OP_LINK)
			instr->size = RBT_SIZE_WORD;

		instr->aux.type = RBT_OPERAND_AREG;
		instr->aux.reg = rbt_bits(opcode, 2, 0);

		return RBT_ERR_SUCCESS;
	}

	// MOVE to USP: 0100 1110 0110 0RRR [..L]
	// MOVE fr USP: 0100 1110 0110 1RRR [..L]
	if (rbt_bits(opcode, 11, 4) == 0xe6) {
		instr->mnemonic = RBT_OP_MOVE;
		instr->size = RBT_SIZE_LONG;

		if (RBT_BIT(opcode, 3) == 0) {
			instr->src.type = RBT_OPERAND_AREG;
			instr->src.reg = rbt_bits(opcode, 2, 0);

			instr->dst.type = RBT_OPERAND_USP;
		} else {
			instr->src.type = RBT_OPERAND_USP;

			instr->dst.type = RBT_OPERAND_AREG;
			instr->dst.reg = rbt_bits(opcode, 2, 0);
		}

		return RBT_ERR_SUCCESS;
	}

	// MOVEC: 0100 1110 0111 101d [..L] (M68010+)
	//        ARRR CTRL_REGISTER
	if (rbt_bits(opcode, 7, 1) == 0x3d) {
		u16 data = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return bus->error_code;
		}

		instr->mnemonic = RBT_OP_MOVEC;
		instr->size = RBT_SIZE_LONG;

		instr->aux.type = RBT_OPERAND_DIR;
		instr->aux.dir = RBT_BIT(opcode, 0); // 0: Rc->Rn; 1: Rn->Rc

		instr->src.type = RBT_OPERAND_IMM;
		instr->src.size = RBT_SIZE_WORD;
		instr->src.imm = data;
		return RBT_ERR_SUCCESS;
	}

	// RESET: 0100 1110 0111 0000 [...]
	// NOP:   0100 1110 0111 0001 [...]
	// STOP:  0100 1110 0111 0010 [...]
	//        Immediate
	// RTE:   0100 1110 0111 0011 [...]
	// RTD:   0100 1110 0111 0100 [...] (M68010+)
	//        Offset
	// RTS:   0100 1110 0111 0101 [...]
	// TRAPV: 0100 1110 0111 0110 [...]
	// RTR:   0100 1110 0111 0111 [...]
	switch (rbt_bits(opcode, 3, 0)) {
	case 0b000: instr->mnemonic = RBT_OP_RESET; break;
	case 0b001: instr->mnemonic = RBT_OP_NOP; break;
	case 0b010: instr->mnemonic = RBT_OP_STOP; break;
	case 0b011: instr->mnemonic = RBT_OP_RTE; break;
	case 0b100: instr->mnemonic = RBT_OP_RTD; break;
	case 0b101: instr->mnemonic = RBT_OP_RTS; break;
	case 0b110: instr->mnemonic = RBT_OP_TRAPV; break;
	case 0b111: instr->mnemonic = RBT_OP_RTR; break;
	default:	unreachable();
	}

	if (instr->mnemonic == RBT_OP_STOP) {
		instr->aux.type = RBT_OPERAND_IMM;
		instr->aux.size = RBT_SIZE_WORD;
		instr->aux.imm = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return bus->error_code;
		}
	}

	if (instr->mnemonic == RBT_OP_RTD) {
		u16 disp = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return bus->error_code;
		}

		instr->aux.type = RBT_OPERAND_DISP;
		instr->aux.size = RBT_SIZE_WORD;
		instr->aux.disp = rbt_sign_extend(RBT_SIZE_WORD, disp);
	}

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_decode_instruction(RBT_MemoryBus *bus, u32 pc, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	memset(instr, 0, sizeof(RBT_Instruction));
	instr->start_pc = pc & 0xff'ffff;
	instr->word_count = 1;
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
	case RBT_OPGROUP_MISC: {
		// MOVE fr SR:  0100 000 011 MMMRRR [.W.]
		// MOVE fr CCR: 0100 001 011 MMMRRR [.W.]
		// MOVE to CCR: 0100 010 011 MMMRRR [.W.]
		// MOVE to SR:  0100 011 011 MMMRRR [.W.]
		if (rbt_bits(opcode, 8, 6) == 0b011 || rbt_bits(opcode, 11, 4) == 0xe6) {
			status = _decode_move_reg(instr, bus);
			break;
		}

		u8 subgroup = _OP_SUBGROUP(opcode);
		if (!RBT_BIT(subgroup, 8)) {
			// We can check here, since An is an invalid EA mode in next opcodes
			if (_OP_EA_MODE(opcode) == 0b001) {
				// BKPT: 0100 1000 01 001NNN [...] (M68010+)
				instr->mnemonic = RBT_OP_BKPT;
				instr->size = RBT_SIZE_NONE;
				instr->aux.type = RBT_OPERAND_IMM;
				instr->aux.size = RBT_SIZE_BYTE;
				instr->aux.imm = rbt_bits(opcode, 2, 0);
				break;
			}

			// NEGX/CLR/NEG/NOT: 0100 TTT0 SS MMMRRR [BWL]
			status = _decode_negx_clr_not(instr, bus);
			break;
		}

		// EXT:  0100 100 ooo 000DDD [.WL]
		// NBCD: 0100 100 000 MMMRRR [B..]
		// SWAP: 0100 100 001 000RRR [.W.]
		// PEA:  0100 100 001 MMMRRR [..L]
		if (rbt_bits(opcode, 11, 9) == 0b100) {
			status = _decode_ext_nbcd_swap_pea(instr, bus);
			break;
		}

		// ILLEGAL: 0100 1010 1111 1100 [...]
		// TAS:     0100 1010 11 MMMRRR [B..]
		// TST:     0100 1010 SS MMMRRR [BWL]
		if (_OP_SUBGROUP(opcode) == 0b1010) {
			if (rbt_bits(opcode, 7, 0) == 0xfc) {
				instr->mnemonic = RBT_OP_ILLEGAL; // >:3c
				instr->size = RBT_SIZE_NONE;
				break;
			}

			u8 size = _OP_SIZE(opcode);
			u8 ea_mode = _OP_EA_MODE(opcode);
			u8 ea_reg = _OP_EA_REG(opcode);
			if (size == 0b11) {
				instr->mnemonic = RBT_OP_TAS;
				instr->size = RBT_SIZE_BYTE;
			} else {
				instr->mnemonic = RBT_OP_TST;
				instr->size = _decode_size(size);
			}

			instr->dst.type = RBT_OPERAND_EA;
			instr->dst.size = instr->size;
			u32 new_pc = rbt_decode_effective_address(
				ea_mode, ea_reg, instr->dst.size, bus, instr->start_pc + 2, &instr->dst.ea
			);
			if (new_pc == UINT32_MAX) {
				status = RBT_ERR_DECODE_INVALID_EA;
				break;
			}

			// EA invalid: Dn, An, #imm, PC-relative(only TST)
			u16 ea_invalid = RBT_EA_DIRECT_DATA | RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE;
			if (instr->mnemonic == RBT_OP_TAS)
				ea_invalid |= RBT_EA_GROUP_PCR;

			if ((instr->dst.ea.mode & ea_invalid) != 0u) {
				rbt_push_warn(
					"TAS/TST: Dest EA(Dn|An|#imm|PC-relative) isn't allowed, at: 0x%06x",
					instr->start_pc
				);
				status = RBT_ERR_DECODE_ILLEGAL_EA;
			}

			break;
		}

		// TRAP:     0100 1110 0100 VVVV [...]
		// UNLK:     0100 1110 0101 1RRR [...]
		// LINK:     0100 1110 0101 0RRR [.W.]
		//           Offset
		// MOVE USP: 0100 1110 0110 dRRR [..L]
		// RESET:    0100 1110 0111 0000 [...]
		// NOP:      0100 1110 0111 0001 [...]
		// STOP:     0100 1110 0111 0010 [...]
		//           Immediate
		// RTE:      0100 1110 0111 0011 [...]
		// RTD:      0100 1110 0111 0100 [...] (M68010+)
		//           Offset
		// RTS:      0100 1110 0111 0101 [...]
		// TRAPV:    0100 1110 0111 0110 [...]
		// RTR:      0100 1110 0111 0111 [...]
		// MOVEC:    0100 1110 0111 101d [..L] (M68010+)
		//           ARRR CTRL_REGISTER
		// JSR:      0100 1110 10 MMMRRR [...]
		// JMP:      0100 1110 11 MMMRRR [...]
		if (_OP_SUBGROUP(opcode) == 0b1110) {
			status = _decode_misc(instr, bus);
			break;
		}

		// LEA:   0100 AAA 111 MMMRRR [..L]
		// CHK:   0100 DDD 110 MMMRRR [.W.]
		if (RBT_BIT(opcode, 8)) {
			if (_OP_SIZE(opcode) != 0b11 && _OP_SIZE(opcode) != 0b10) {
				rbt_push_warn("LEA/CHK: Illegal encoding at: %06x", instr->start_pc);
				status = RBT_ERR_DECODE_ILLEGAL;
				break;
			}

			u32 curr_pc = instr->start_pc + 2;
			u8 ea_mode = _OP_EA_MODE(opcode);
			u8 ea_reg = _OP_EA_REG(opcode);

			instr->mnemonic = RBT_BIT(opcode, 6) ? RBT_OP_LEA : RBT_OP_CHK;
			if (instr->mnemonic == RBT_OP_LEA)
				instr->size = RBT_SIZE_LONG;
			else
				instr->size = RBT_SIZE_WORD;

			instr->src.type = RBT_OPERAND_EA;
			instr->src.size = instr->size;
			curr_pc = rbt_decode_effective_address(
				ea_mode, ea_reg, instr->src.size, bus, curr_pc, &instr->src.ea
			);
			if (curr_pc == UINT32_MAX) {
				status = RBT_ERR_DECODE_INVALID_EA;
				break;
			}

			// EA invalid: An, [Dn, (An)+, -(An), #imm](Only LEA)
			u16 ea_invalid = RBT_EA_DIRECT_ADDR;
			if (instr->mnemonic == RBT_OP_LEA)
				ea_invalid |= RBT_EA_DIRECT_DATA | RBT_EA_IMMEDIATE | RBT_EA_GROUP_REL;

			if ((instr->src.ea.mode & ea_invalid) != 0u) {
				rbt_push_warn(
					"LEA/CHK: Dest EA(An|Dn|(An)+|-(An)|#imm) isn't allowed , at: "
					"0x%06x",
					instr->start_pc
				);
				status = RBT_ERR_DECODE_ILLEGAL_EA;
			}

			break;
		}

		// MOVEM: 0100 1d00 1s MMMRRR [.WL]
		//        Register List Mask
		u32 curr_pc = instr->start_pc + 2;
		u8 ea_mode = _OP_EA_MODE(opcode);
		u8 ea_reg = _OP_EA_REG(opcode);

		instr->mnemonic = RBT_OP_MOVEM;
		instr->size = RBT_BIT(opcode, 6) ? RBT_SIZE_LONG : RBT_SIZE_WORD;

		instr->aux.type = RBT_OPERAND_DIR;
		instr->aux.dir = RBT_BIT(opcode, 10) == 1u; // 0: reg->mem; 1: mem->reg

		instr->src.type = RBT_OPERAND_IMM;
		instr->src.size = RBT_SIZE_WORD;
		instr->src.imm = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			status = bus->error_code;
			break;
		}
		curr_pc += 2; // Skip auxiliar extension word

		instr->src.type = RBT_OPERAND_EA;
		instr->src.size = instr->size;
		curr_pc = rbt_decode_effective_address(
			ea_mode, ea_reg, instr->src.size, bus, curr_pc, &instr->src.ea
		);
		if (curr_pc == UINT32_MAX) {
			status = RBT_ERR_DECODE_INVALID_EA;
			break;
		}

		// If reg->mem: EA invalid: Dn, An, (An)+, PC-relative, #imm
		// If mem->reg: EA invalid: Dn, An, -(An), #imm
		u16 ea_invalid = RBT_EA_DIRECT_DATA | RBT_EA_DIRECT_ADDR | RBT_EA_IMMEDIATE;
		if (!instr->aux.dir) {
			ea_invalid |= RBT_EA_INDIRECT_POSTINC | RBT_EA_GROUP_PCR;
		} else {
			ea_invalid |= RBT_EA_INDIRECT_PREDEC;
		}

		if ((instr->src.ea.mode & ea_invalid) != 0u) {
			rbt_push_warn(
				"LEA/CHK: Source EA(Dn|An|(An)+|PC-relative|#imm) isn't allowed, at: "
				"0x%06x",
				instr->start_pc
			);
		}
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
