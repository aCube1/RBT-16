#include "opcodes.h"
#include "rbt/cpu/decode.h"
#include "rbt/cpu/mmu.h"

#include <unity.h>

enum {
	_ALIGN_PC = 2,
	_ALIGN_MNEMONIC = _ALIGN_PC + 40,
	_ALIGN_OPERATORS = _ALIGN_PC + 48,
};

static RBT_MemoryBus *_bus;

// clang-format off
static const char *_mnemonics[] = {
	"abcd", "add", "adda", "addi", "addq","addx",
	"and", "andi",
	"asl", "asr",
	"b",
	"bchg", "bclr",
	"bra",
	"bset",
	"bsr",
	"btst",
	"chk",
	"clr",
	"cmp", "cmpa", "cmpi", "cmpm",
	"db",
	"divs", "divu",
	"eor", "eori",
	"exg",
	"ext",
	"illegal",
	"jmp", "jsr",
	"lea",
	"link",
	"lsl", "lsr",
	"move", "movea", "movem", "movep", "moveq",
	"muls", "mulu",
	"nbcd",
	"neg", "negx",
	"nop",
	"not",
	"or", "ori",
	"pea",
	"reset",
	"rol", "ror", "roxl", "roxr",
	"rte", "rtr", "rts",
	"sbcd",
	"s",
	"stop",
	"sub", "suba", "subi", "subq", "subx",
	"swap",
	"tas",
	"trap", "trapv",
	"tst",
	"unlk",

	"bkpt", "movec", "moves", "rtd",

	"linea", "linef",
};

static const char *_conditions[] = {
	"f", "t", "hi", "ls",
	"cc", "cs", "ne", "eq",
	"vc", "vs", "pl", "mi",
	"ge", "lt", "gt", "le",
};

// clang-format on

static i32 _stringfy_effective_address(const RBT_EffectiveAddress *ea, char *out) {
	switch (ea->mode) {
	case RBT_EA_DIRECT_DATA:	  return sprintf(out, "%%d%u", ea->dreg);
	case RBT_EA_DIRECT_ADDR:	  return sprintf(out, "%%a%u", ea->areg);
	case RBT_EA_INDIRECT:		  return sprintf(out, "(%%a%u)", ea->indirect);
	case RBT_EA_INDIRECT_POSTINC: return sprintf(out, "(%%a%u)+", ea->indirect);
	case RBT_EA_INDIRECT_PREDEC:  return sprintf(out, "-(%%a%u)", ea->indirect);
	case RBT_EA_INDIRECT_DISPLACEMENT:
		return sprintf(out, "%i(%%a%u)", ea->indirect_disp.disp, ea->indirect_disp.areg);
	case RBT_EA_INDIRECT_INDEXED: {
		const RBT_IndirectIndexed *ix = &ea->indirect_indexed;

		char xreg = 'd';
		if (ix->ix.is_addr)
			xreg = 'a';

		char size = 'w';
		if (ix->ix.is_long)
			xreg = 'l';

		return sprintf(
			out, "%i(%%a%u, %%%c%u.%c)", ix->ix.displacement, ix->areg, xreg, ix->ix.xreg,
			size
		);
	};
	case RBT_EA_ABSOLUTE_SHORT:	 return sprintf(out, "(0x%04x).w", ea->absolute_short);
	case RBT_EA_ABSOLUTE_LONG:	 return sprintf(out, "(0x%08x).l", ea->absolute_long);
	case RBT_EA_PC_DISPLACEMENT: return sprintf(out, "%i(%%pc)", ea->pc_disp);
	case RBT_EA_PC_INDEXED:		 {
		char xreg = 'd';
		if (ea->pc_indexed.is_addr)
			xreg = 'a';

		char size = 'w';
		if (ea->pc_indexed.is_long)
			size = 'l';

		return sprintf(
			out, "%i(%%pc, %%%c%u.%c)", ea->pc_indexed.displacement, xreg,
			ea->pc_indexed.xreg, size
		);
	};
	case RBT_EA_IMMEDIATE: return sprintf(out, "#0x%x", ea->imm);
	default:			   return 0;
	}

	unreachable();
}

static i32 _stringfy_operand(const RBT_Operand *operand, char *out) {
	switch (operand->type) {
	case RBT_OPERAND_EA:   return _stringfy_effective_address(&operand->ea, out);
	case RBT_OPERAND_DREG: return sprintf(out, "%%d%u", operand->reg);
	case RBT_OPERAND_AREG: return sprintf(out, "%%a%u", operand->reg);
	case RBT_OPERAND_IMM:  return sprintf(out, "#0x%x", operand->imm);
	case RBT_OPERAND_DISP: return sprintf(out, "%i", operand->disp);
	case RBT_OPERAND_INDDISP:
		return sprintf(out, "(%i, %%a%u)", operand->inddisp.disp, operand->inddisp.areg);
	case RBT_OPERAND_CCR: return sprintf(out, "%%ccr");
	case RBT_OPERAND_SR:  return sprintf(out, "%%sr");
	case RBT_OPERAND_USP: return sprintf(out, "%%usp");
	default:			  return 0;
	}

	unreachable();
}

static i32 _align_text(i32 len, i32 alignment, char *out) {
	while (len < alignment) {
		out[len] = ' ';
		len += 1;
	}

	return len;
}

static void test_opcodes(void) {
	u32 pc = RBT_MMU_ROM_ADDR;

	while (true) {
		RBT_Instruction instr;
		RBT_ErrorCode err = rbt_decode_instruction(_bus, pc, &instr);

		if ((pc - RBT_MMU_ROM_ADDR) >= opcodes_data_size)
			break;

		pc += instr.len;
		char out[256] = {};

		char *size = "";
		if (instr.size == RBT_SIZE_BYTE)
			size = ".b";
		else if (instr.size == RBT_SIZE_WORD)
			size = ".w";
		else if (instr.size == RBT_SIZE_LONG)
			size = ".l";

		i32 len = 0;
		if (len != _ALIGN_PC) {
			len = _align_text(len, _ALIGN_PC, out);
			len += sprintf(&out[len], "%06x: ", instr.start_pc);

			for (i32 i = 0; i < instr.word_count; i += 1) {
				len += sprintf(&out[len], "%04x ", instr.words[i]);
			}
		}

		len = _align_text(len, _ALIGN_MNEMONIC, out);

		if (instr.mnemonic == RBT_OP_Scc || instr.mnemonic == RBT_OP_DBcc
			|| instr.mnemonic == RBT_OP_Bcc) {
			u8 cond = instr.aux.imm;
			len += sprintf(
				&out[len], "%s%s ", _mnemonics[instr.mnemonic], _conditions[cond]
			);
		} else {
			len += sprintf(&out[len], "%s%s ", _mnemonics[instr.mnemonic], size);
		}

		len = _align_text(len, _ALIGN_OPERATORS, out);
		len += _stringfy_operand(&instr.src, &out[len]);
		if (instr.src.type != RBT_OPERAND_NONE && instr.dst.type != RBT_OPERAND_NONE)
			len += sprintf(&out[len], ", ");
		len += _stringfy_operand(&instr.dst, &out[len]);

		fprintf(stdout, "%s\n", out);

		TEST_ASSERT_EQUAL(RBT_ERR_SUCCESS, err);
	}
}

void setUp(void) {
	_bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(_bus);

	TEST_ASSERT_TRUE(rbt_bus_init(_bus, opcodes_data_size, opcodes_data));
}

void tearDown(void) {
	rbt_destroy_bus(_bus);
	rbt_err_flush();
}

int main(void) {
	UNITY_BEGIN();

	RUN_TEST(test_opcodes);

	return UNITY_END();
}
