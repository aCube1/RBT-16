#include "rbt/cpu/decode.h"

#include <assert.h>
#include <string.h>

#define STATUS_ILLEGAL -1
#define STATUS_OK	   0
#define STATUS_ERR	   1

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
	case RBT_INDIRECT_DISPLACEMENT:
		words[0] = ea->indirect_disp.disp & 0xffff;
		return 1;
	case RBT_INDIRECT_INDEXED:
		words[0] = rbt_indexext_to_word(&ea->indirect_indexed.ix);
		return 1;
	case RBT_ABSOLUTE_SHORT:
		words[0] = ea->absolute_short & 0xffff;
		return 1;
	case RBT_ABSOLUTE_LONG:
		words[0] = (ea->absolute_long >> 16) & 0xffff;
		words[1] = ea->absolute_long & 0xffff;
		return 2;
	case RBT_PC_DISPLACEMENT:
		words[0] = ea->pc_disp & 0xffff;
		return 1;
	case RBT_PC_INDEXED:
		words[0] = rbt_indexext_to_word(&ea->pc_indexed);
		return 1;
	case RBT_IMMEDIATE:
		if (ea->size == RBT_SIZE_LONG) {
			words[0] = (ea->imm >> 16) & 0xffff;
			words[1] = ea->imm & 0xffff;
		} else {
			words[0] = ea->imm & 0xffff;
		}

		return ea->size == RBT_SIZE_LONG ? 2 : 1;
	default:
		break;
	}

	return 0;
}

static i32 _decode_move(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	(void)bus;
	(void)opcode;
	(void)instr;
	return STATUS_OK;
}

static i32 _decode_bit(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	// Static BTST/BCHG/BCLR/BSET: 0000 1000 TT MMMRRR
	// Dynamic BTST/BCHG/BCLR/BSET: 0000 DDD1 TT MMMRRR
	u8 dreg = (opcode >> 9) & 0x07;
	u8 bit_8 = (opcode >> 8) & 0x01;
	u8 type = (opcode >> 6) & 0x03;
	u8 ea_mode = (opcode >> 3) & 0x07;
	u8 ea_reg = (opcode >> 0) & 0x07;

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
	if (bit_8) {
		instr->src.type = RBT_OPERAND_DREG;
		instr->src.reg = dreg;
	} else {
		instr->src.type = RBT_OPERAND_IMM;
		instr->src.imm = rbt_bus_read_word(bus, curr_pc);
		if (bus->error_code) {
			return STATUS_ERR;
		}

		// Only low byte is used
		instr->words[instr->word_count++] = instr->src.imm & 0xff;
		curr_pc += 2;
	}

	// Dn is long only; Other modes is byte only
	instr->size = ea_mode == 0b000 ? RBT_SIZE_LONG : RBT_SIZE_BYTE;

	instr->dst.type = RBT_OPERAND_EA;
	bool success = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
	);
	if (!success) {
		return STATUS_ERR;
	}

	switch (instr->dst.ea.mode) {
	case RBT_DIRECT_ADDR:
		rbt_push_warn("Mode 'An' isn't allowed at: 0x%06x", instr->start_pc);
		return STATUS_ILLEGAL;
	case RBT_PC_DISPLACEMENT:
	case RBT_PC_INDEXED:
		if (instr->mnemonic == RBT_OP_BTST) {
			break; // Only BTST have PC-relative modes
		}

		rbt_push_warn(
			"Modes: '(d16,PC)/(d8,Xi,PC)' are not allowed at: 0x%06x", instr->start_pc
		);
		return STATUS_ILLEGAL;
	case RBT_IMMEDIATE:
		rbt_push_warn("Immediate destination not allowed at: 0x%06x", instr->start_pc);
		return STATUS_ILLEGAL;
	default:
		break;
	}

	u8 ea_word_count = _ea_to_words(&instr->dst.ea, &instr->words[instr->word_count]);
	instr->word_count += ea_word_count;

	return STATUS_OK;
}

static i32 _decode_imm(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	assert(bus);
	assert(instr);

	u8 type = (opcode >> 8) & 0x0f;
	u8 size = (opcode >> 6) & 0x03;
	u8 ea_mode = (opcode >> 3) & 0x07;
	u8 ea_reg = (opcode >> 0) & 0x07;

	u32 curr_pc = instr->start_pc + 2;

	instr->size = _decode_size(size);
	if (instr->size == RBT_SIZE_NONE) {
		rbt_push_warn("Invalid size field for immediate op at: 0x%06x", instr->start_pc);
		return STATUS_ILLEGAL;
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
		return STATUS_ILLEGAL;
	}
	// clang-format on

	instr->src.type = RBT_OPERAND_IMM;
	instr->src.imm = rbt_bus_load(bus, instr->size, curr_pc);
	if (bus->error_code) {
		return STATUS_ERR;
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
			return STATUS_ILLEGAL;
		}

		if (size == 0b00) {
			instr->dst.type = RBT_OPERAND_CCR;
			instr->size = RBT_SIZE_BYTE;
		} else if (size == 0b01) {
			instr->dst.type = RBT_OPERAND_SR;
			instr->size = RBT_SIZE_WORD;
		} else {
			rbt_push_warn("Illegal register for at: 0x%06x", instr->start_pc);
			return STATUS_ILLEGAL;
		}

		return STATUS_OK;
	}

	instr->dst.type = RBT_OPERAND_EA;
	bool success = rbt_decode_effective_address(
		ea_mode, ea_reg, instr->size, bus, curr_pc, &instr->dst.ea
	);
	if (!success) {
		return STATUS_ERR;
	}

	switch (instr->dst.ea.mode) {
	case RBT_DIRECT_ADDR:
		rbt_push_warn(
			"Mode 'An' isn't allowed for immediate op at: 0x%06x", instr->start_pc
		);
		return STATUS_ILLEGAL;
	case RBT_PC_DISPLACEMENT:
	case RBT_PC_INDEXED:
		if (instr->mnemonic == RBT_OP_CMPI) {
			break; // Only CMPI have PC-relative modes
		}

		rbt_push_warn(
			"Modes: '(d16,PC)/(d8,Xi,PC)' are not allowed for immediate op at: 0x%06x",
			instr->start_pc
		);
		return STATUS_ILLEGAL;
	case RBT_IMMEDIATE:
		rbt_push_warn("Immediate destination not allowed at: 0x%06x", instr->start_pc);
		return STATUS_ILLEGAL;
	default:
		break;
	}

	u8 ea_word_count = _ea_to_words(&instr->dst.ea, &instr->words[instr->word_count]);
	instr->word_count += ea_word_count;

	return STATUS_OK;
}

static i32 _decode_group_0000(RBT_MemoryBus *bus, u16 opcode, RBT_Instruction *instr) {
	u8 bits_8_11 = (opcode >> 8) & 0x0f;
	u8 bit_8 = (opcode >> 8) & 0x01;
	u8 ea_mode = (opcode >> 3) & 0x07;

	if (bits_8_11 == 0x0e) {
		// MOVES: 0000 1110 SS MMMRRR (M68010+)
		return _decode_move(bus, opcode, instr);
	}

	if (bits_8_11 == 0x08) {
		// Static BTST/BCHG/BCLR/BSET: 0000 1000 TT MMMRRR
		return _decode_bit(bus, opcode, instr);
	}

	if (bit_8) {
		if (ea_mode == 0b001) {
			// MOVEP: 0000 DDD1 MM 001 RRR
			return _decode_move(bus, opcode, instr);
		}

		// Dynamic BTST/BCHG/BCLR/BSET: 0000 DDD1 TT MMMRRR
		return _decode_bit(bus, opcode, instr);
	}

	// ORI/ANDI/SUBI/ADDI/EORI/CMPI: 0000 TTT0 SS MMMRRR
	return _decode_imm(bus, opcode, instr);
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
	instr->words[0] = opcode;
	instr->word_count = 1;

	u8 group = (opcode >> 12) & 0x0f;

	i32 result = 0;
	switch (group) {
	case RBT_OPGROUP_BITMOVEPIMM:
		result = _decode_group_0000(bus, opcode, instr);
		break;
	case RBT_OPGROUP_MOVEBYTE:
	case RBT_OPGROUP_MOVELONG:
	case RBT_OPGROUP_MOVEWORD:
		result = _decode_move(bus, opcode, instr);
		break;
	}

	// Opcode isn't illegal neither legal, some error had occurred
	if (result == STATUS_ERR) {
		return false;
	}

	// Opcode is illegal
	if (result == STATUS_ILLEGAL) {
		memset(instr, 0, sizeof(RBT_Instruction));

		instr->start_pc = pc;
		instr->words[0] = opcode;
		instr->word_count = 1;
		instr->mnemonic = RBT_OP_ILLEGAL;
		instr->size = RBT_SIZE_NONE;
	}

	instr->len = instr->word_count * 2;
	return true;
}
