#include "rbt/cpu/timing.h"

#include "rbt/cpu/decode.h"
#include "rbt/cpu/effective_address.h"

// NOTE: For now, I won't encode cycle accurate fetching. Always assume
// worst case scenario when calculating cycles. There's no need to be
// accurate here, but for the future...
// TODO: Improve cycle timing accuracy.

// clang-format off
static const u8 _ea_cycles[][2] = {
	// B/W   L                      Byte/Word     Long
	{    0,  0 }, // Dn           |  0(0/0)   |  0(0/0)
	{    0,  0 }, // An           |  0(0/0)   |  0(0/0)
	{    4,  8 }, // (An)         |  4(1/0)   |  8(2/0)
	{    4,  8 }, // (An)+        |  4(1/0)   |  8(2/0)
	{    6, 10 }, // -(An)        |  6(1/0)   | 10(2/0)
	{    8, 12 }, // (d16, An)    |  8(2/0)   | 12(3/0)
	{   10, 14 }, // (d8, Xi, An) | 10(2/0)   | 14(3/0)
	{    8, 12 }, // (xxx).w      |  8(2/0)   | 12(3/0)
	{   12, 16 }, // (xxx).l      | 12(3/0)   | 16(4/0)
	{    8, 12 }, // (d16, PC)    |  8(2/0)   | 12(3/0)
	{   10, 14 }, // (d8, Xi, PC) | 10(2/0)   | 14(3/0)
	{    4,  8 }, // #imm         |  4(1/0)   |  8(2/0)
};

static const u8 _clr_cycles[][2] = {
	// B/W   L                      Byte/Word     Long
	{    4,  6 }, // Dn           |  4(1/0)   |  6(1/0)
	{    0,  0 }, // An           |   ---     |   ---
	{    8, 12 }, // (An)         |  8(1/1)   | 12(1/2)
	{    8, 12 }, // (An)+        |  8(1/1)   | 12(1/2)
	{   10, 14 }, // -(An)        | 10(1/1)   | 14(1/2)
	{   12, 16 }, // (d16, An)    | 12(2/1)   | 16(2/2)
	{   16, 20 }, // (d8, Xi, An) | 16(2/1)   | 20(2/2)
	{   12, 16 }, // (xxx).w      | 12(2/1)   | 16(2/2)
	{   16, 20 }, // (xxx).l      | 16(3/1)   | 20(3/2)
};

// clang-format on

static u8 _get_ea_cycles(RBT_AddressMode mode, RBT_OperandSize size) {
	i32 idx = 0;

	switch (mode) {
	case RBT_EA_DIRECT_DATA:		   idx = 0; break;
	case RBT_EA_DIRECT_ADDR:		   idx = 1; break;
	case RBT_EA_INDIRECT:			   idx = 2; break;
	case RBT_EA_INDIRECT_POSTINC:	   idx = 3; break;
	case RBT_EA_INDIRECT_PREDEC:	   idx = 4; break;
	case RBT_EA_INDIRECT_DISPLACEMENT: idx = 5; break;
	case RBT_EA_INDIRECT_INDEXED:	   idx = 6; break;
	case RBT_EA_ABSOLUTE_SHORT:		   idx = 7; break;
	case RBT_EA_ABSOLUTE_LONG:		   idx = 8; break;
	case RBT_EA_PC_DISPLACEMENT:	   idx = 9; break;
	case RBT_EA_PC_INDEXED:			   idx = 10; break;
	case RBT_EA_IMMEDIATE:			   idx = 11; break;
	default:						   idx = 0; break;
	}

	i32 size_idx = (size == RBT_SIZE_LONG) ? 1 : 0;
	return _ea_cycles[idx][size_idx];
}

static u8 _get_clr_cycles(RBT_AddressMode mode, RBT_OperandSize size) {
	i32 idx = 0;

	switch (mode) {
	case RBT_EA_DIRECT_DATA:		   idx = 0; break;
	case RBT_EA_DIRECT_ADDR:		   idx = 1; break;
	case RBT_EA_INDIRECT:			   idx = 2; break;
	case RBT_EA_INDIRECT_POSTINC:	   idx = 3; break;
	case RBT_EA_INDIRECT_PREDEC:	   idx = 4; break;
	case RBT_EA_INDIRECT_DISPLACEMENT: idx = 5; break;
	case RBT_EA_INDIRECT_INDEXED:	   idx = 6; break;
	case RBT_EA_ABSOLUTE_SHORT:		   idx = 7; break;
	case RBT_EA_ABSOLUTE_LONG:		   idx = 8; break;
	default:						   idx = 0; break;
	}

	i32 size_idx = (size == RBT_SIZE_LONG) ? 1 : 0;
	return _clr_cycles[idx][size_idx];
}

u16 rbt_calculate_timing(const RBT_Instruction *instr) {
	assert(instr);

	bool is_long = instr->size == RBT_SIZE_LONG;

	u16 cycles = 0;
	bool should_add_ea = false;
	switch (instr->mnemonic) {
	case RBT_OP_ADD:
	case RBT_OP_SUB:
		if (instr->src.type == RBT_OPERAND_EA) {
			// op <ea>,Dn
			// B/W: 4(1/0)+ | L: 6(1/0)+
			cycles = !is_long ? 4 : 6;
		} else {
			// op Dn,<ea>
			// B/W: 8(1/1)+ | L: 12(1/2)+
			cycles = !is_long ? 8 : 12;
		}
		should_add_ea = true;
		break;
	case RBT_OP_ADDA:
	case RBT_OP_SUBA:
		// op <ea>,An
		// B/W: 8(1/0)+ | L: 6(1/0)+
		cycles = !is_long ? 8 : 6;
		should_add_ea = true;
		break;
	case RBT_OP_AND:
	case RBT_OP_OR:
		if (instr->src.type == RBT_OPERAND_EA) {
			// op <ea>,Dn
			// B/W: 4(1/0)+ | L: 6(1/0)+
			cycles = !is_long ? 4 : 6;
		} else {
			// op Dn,<ea>
			// B/W: 8(1/1)+ | L: 12(1/2)+
			cycles = !is_long ? 8 : 12;
		}
		should_add_ea = true;
		break;
	case RBT_OP_CMP:
		// CMP <ea>,Dn
		// B/W: 4(1/0)+ | L: 6(1/0)+
		cycles = !is_long ? 4 : 6;
		should_add_ea = true;
		break;
	case RBT_OP_CMPA:
		// CMPA <ea>,An
		// B/W/L: 6(1/0)+
		cycles = 6;
		should_add_ea = true;
		break;
	case RBT_OP_EOR:
		if (instr->dst.ea.mode == RBT_EA_DIRECT_DATA) {
			// EOR Dn,Dn
			// B/W: 4(1/0)+ | L: 6(1/0)+
			cycles = !is_long ? 4 : 6;
		} else {
			// EOR Dn,<ea>
			// B/W: 8(1/1)+ | L: 12(1/2)+
			cycles = !is_long ? 8 : 12;
		}
		should_add_ea = true;
		break;
	case RBT_OP_DIVS:
		// DIVS <ea>,Dn
		// W: 122(1/0)+ | worst-case/maximum value
		cycles = 122;
		should_add_ea = true;
		break;
	case RBT_OP_DIVU:
		// DIVU <ea>,Dn
		// W: 108(1/0)+ | worst-case/maximum value
		cycles = 108;
		should_add_ea = true;
		break;
	case RBT_OP_MULS:
		// MULS <ea>,Dn
		// W: 42(1/0)+ | worst-case/maximum value
		cycles = 42;
		should_add_ea = true;
		break;
	case RBT_OP_MULU:
		// MULU <ea>,Dn
		// W: 40(1/0)+ | worst-case/maximum value
		cycles = 40;
		should_add_ea = true;
		break;
	case RBT_OP_ANDI:
	case RBT_OP_EORI:
	case RBT_OP_ORI:
		if (instr->dst.type == RBT_OPERAND_CCR || instr->dst.type == RBT_OPERAND_SR) {
			// op #,SR
			// op #,CCR
			// W: 16(2/0)
			cycles = 16;
			break;
		}
		[[fallthrough]];
	case RBT_OP_ADDI:
	case RBT_OP_SUBI:
		if (instr->dst.ea.mode == RBT_EA_DIRECT_DATA) {
			// op #,Dn
			// B/W: 8(2/0) | L: 14(3/0)
			cycles = !is_long ? 8 : 14;
		} else {
			// op #,<ea>
			// B/W: 12(2/1)+ | L: 20(3/2)+
			cycles = !is_long ? 12 : 20;
			should_add_ea = true;
		}
		break;
	case RBT_OP_ADDQ:
	case RBT_OP_SUBQ:
		if (instr->dst.ea.mode == RBT_EA_DIRECT_DATA
			|| instr->dst.ea.mode == RBT_EA_DIRECT_ADDR) {
			// op #,Dn
			//   B/W: 4(1/0) | L: 8(1/0)
			// op #,An
			//   W: 4(1/0) | L: 8(1/1)
			cycles = !is_long ? 4 : 8;
		} else {
			// op #,<ea>
			// B/W: 8(1/2)+ | L: 12(1/2)+
			cycles = !is_long ? 8 : 12;
			should_add_ea = true;
		}
		break;
	case RBT_OP_CMPI:
		// CMPI #,Dn
		//   B/W: 8(2/0) | L: 12(3/0)
		// CMPI #,<ea>
		//   B/W: 8(2/0)+ | L: 12(3/0)+
		cycles = !is_long ? 8 : 12;
		should_add_ea = true;
		break;
	case RBT_OP_MOVEQ:
		// MOVEQ #,Dn
		// L: 4(1/0)
		cycles = 4;
		break;
	case RBT_OP_NEG:
	case RBT_OP_NEGX:
	case RBT_OP_NOT:
		if ((instr->dst.ea.mode & RBT_EA_GROUP_REG) != 0u) {
			// op Dn
			// B/W: 4(1/0) | L: 6(1/0)
			cycles = !is_long ? 4 : 6;
		} else {
			// op <ea>
			// B/W: 8(1/1)+ | L: 12(1/2)+
			cycles = !is_long ? 8 : 12;
			should_add_ea = true;
		}
		break;
	case RBT_OP_CLR:
		// op <ea>
		cycles = _get_clr_cycles(instr->dst.ea.mode, instr->dst.size);
		break;
	}

	if (should_add_ea) {
		if (instr->src.type == RBT_OPERAND_EA) {
			cycles += _get_ea_cycles(instr->src.ea.mode, instr->src.size);
		}

		if (instr->dst.type == RBT_OPERAND_EA) {
			cycles += _get_ea_cycles(instr->dst.ea.mode, instr->dst.size);
		}
	}

	return cycles;
}
