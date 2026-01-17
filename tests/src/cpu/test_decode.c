#include "rbt/cpu/decode.h"
#include "rbt/cpu/mmu.h"

#include <unity.h>

static RBT_MemoryBus *bus;
static u32 pc = RBT_MMU_ROM_ADDR;

// clang-format off
static u8 rom[] = {
	// BTST #5, (A0)
	0x08, 0x10,	// 0000 1000 00 010 000
	0x00, 0x05,

	// BCHG D3, (#5, A1)
	0x07, 0x69, // 0000 011 1 01 101 001
	0x00, 0x05,

	// BSET #5, (A9)
	0x08, 0xf8, // 0000 1000 11 111 000
	0x00, 0x05,
	0x00, 0x09,

	// ANDI.w #0x9abc, (0x2442).w
    0x02, 0x78, // 0000 0010 01 111 000
    0x9a, 0xbc,
    0x24, 0x42,
};
// clang-format on

static u16 rom_words[] = {
	0x0810, 0x0005,

	0x0769, 0x0005,

	0x08f8, 0x0005, 0x0009,

	0x0278, 0x9abc, 0x2442,
};

void setUp(void) {
	bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);

	rbt_bus_init(bus, sizeof(rom) / sizeof(rom[0]), rom);
}

void tearDown(void) {
	rbt_destroy_bus(bus);
	rbt_err_flush();
}

void test_decode_static_btst(void) {
	RBT_Instruction instr;
	TEST_ASSERT_EQUAL(RBT_ERR_SUCCESS, rbt_decode_instruction(bus, pc, &instr));

	TEST_ASSERT_EQUAL(RBT_OP_BTST, instr.mnemonic);
	TEST_ASSERT_EQUAL(RBT_SIZE_BYTE, instr.size);

	TEST_ASSERT_EQUAL(RBT_OPERAND_IMM, instr.src.type);
	TEST_ASSERT_EQUAL(5, instr.src.imm);

	TEST_ASSERT_EQUAL(RBT_OPERAND_EA, instr.dst.type);
	TEST_ASSERT_EQUAL(RBT_EA_INDIRECT, instr.dst.ea.mode);
	TEST_ASSERT_EQUAL(0, instr.dst.ea.indirect);

	for (int i = 0; i < 2; i += 1) {
		rbt_push_info("0x%04x", instr.words[i]);
	}

	TEST_ASSERT_EQUAL(2, instr.word_count);
	TEST_ASSERT_EQUAL_HEX16_ARRAY(
		&rom_words[(pc - RBT_MMU_ROM_ADDR) / 2], instr.words, 2
	);

	pc += 4;
}

void test_decode_dynamic_bchg(void) {
	RBT_Instruction instr;
	TEST_ASSERT_EQUAL(RBT_ERR_SUCCESS, rbt_decode_instruction(bus, pc, &instr));

	TEST_ASSERT_EQUAL(RBT_OP_BCHG, instr.mnemonic);
	TEST_ASSERT_EQUAL(RBT_SIZE_BYTE, instr.size);

	TEST_ASSERT_EQUAL(RBT_OPERAND_DREG, instr.src.type);
	TEST_ASSERT_EQUAL(3, instr.src.reg);

	TEST_ASSERT_EQUAL(RBT_OPERAND_EA, instr.dst.type);
	TEST_ASSERT_EQUAL(RBT_EA_INDIRECT_DISPLACEMENT, instr.dst.ea.mode);
	TEST_ASSERT_EQUAL(5, instr.dst.ea.indirect_disp.disp);
	TEST_ASSERT_EQUAL(1, instr.dst.ea.indirect_disp.areg);

	TEST_ASSERT_EQUAL(2, instr.word_count);
	TEST_ASSERT_EQUAL_HEX16_ARRAY(
		&rom_words[(pc - RBT_MMU_ROM_ADDR) / 2], instr.words, 2
	);

	pc += 4;
}

void test_decode_static_bset(void) {
	RBT_Instruction instr;
	TEST_ASSERT_EQUAL(RBT_ERR_SUCCESS, rbt_decode_instruction(bus, pc, &instr));

	TEST_ASSERT_EQUAL(RBT_OP_BSET, instr.mnemonic);
	TEST_ASSERT_EQUAL(RBT_SIZE_BYTE, instr.size);

	TEST_ASSERT_EQUAL(RBT_OPERAND_IMM, instr.src.type);
	TEST_ASSERT_EQUAL(5, instr.src.imm);

	TEST_ASSERT_EQUAL(RBT_OPERAND_EA, instr.dst.type);
	TEST_ASSERT_EQUAL(RBT_EA_ABSOLUTE_SHORT, instr.dst.ea.mode);
	TEST_ASSERT_EQUAL(9, instr.dst.ea.absolute_short);

	TEST_ASSERT_EQUAL(3, instr.word_count);
	TEST_ASSERT_EQUAL_HEX16_ARRAY(
		&rom_words[(pc - RBT_MMU_ROM_ADDR) / 2], instr.words, 3
	);

	pc += 6;
}

void test_decode_andi_w(void) {
	RBT_Instruction instr;
	TEST_ASSERT_EQUAL(RBT_ERR_SUCCESS, rbt_decode_instruction(bus, pc, &instr));

	TEST_ASSERT_EQUAL(RBT_OP_ANDI, instr.mnemonic);
	TEST_ASSERT_EQUAL(RBT_SIZE_WORD, instr.size);

	TEST_ASSERT_EQUAL(RBT_OPERAND_IMM, instr.src.type);
	TEST_ASSERT_EQUAL(0x9abc, instr.src.imm);

	TEST_ASSERT_EQUAL(RBT_OPERAND_EA, instr.dst.type);
	TEST_ASSERT_EQUAL(RBT_EA_ABSOLUTE_SHORT, instr.dst.ea.mode);
	TEST_ASSERT_EQUAL(0x2442, instr.dst.ea.absolute_short);

	TEST_ASSERT_EQUAL(3, instr.word_count);
	TEST_ASSERT_EQUAL_HEX16_ARRAY(
		&rom_words[(pc - RBT_MMU_ROM_ADDR) / 2], instr.words, 3
	);

	pc += 6;
}

int main(void) {
	UNITY_BEGIN();

	RUN_TEST(test_decode_static_btst);
	RUN_TEST(test_decode_dynamic_bchg);
	RUN_TEST(test_decode_static_bset);
	RUN_TEST(test_decode_andi_w);

	return UNITY_END();
}
