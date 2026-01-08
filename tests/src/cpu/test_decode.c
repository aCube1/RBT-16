#include "rbt/cpu/decode.h"
#include "rbt/cpu/mmu.h"

#include <unity.h>

static RBT_MemoryBus *bus;
static u32 pc = 0x001000;

void setUp(void) {
	bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);
}

void tearDown(void) {
	rbt_destroy_bus(bus);
	rbt_err_flush();
}

void test_decode_static_btst(void) {
	// BTST #5, (A0)
	u16 words[] = {
		0x0810, // 0000 1000 00 010 000
		0x0005,
	};

	rbt_bus_write_word(bus, pc + 0, words[0]);
	rbt_bus_write_word(bus, pc + 2, words[1]);

	RBT_Instruction instr;
	TEST_ASSERT_EQUAL(RBT_ERR_SUCCESS, rbt_decode_instruction(bus, pc, &instr));

	TEST_ASSERT_EQUAL(RBT_OP_BTST, instr.mnemonic);
	TEST_ASSERT_EQUAL(RBT_SIZE_BYTE, instr.size);

	TEST_ASSERT_EQUAL(RBT_OPERAND_IMM, instr.src.type);
	TEST_ASSERT_EQUAL(5, instr.src.imm);

	TEST_ASSERT_EQUAL(RBT_OPERAND_EA, instr.dst.type);
	TEST_ASSERT_EQUAL(RBT_EA_INDIRECT, instr.dst.ea.mode);
	TEST_ASSERT_EQUAL(0, instr.dst.ea.indirect);

	TEST_ASSERT_EQUAL(2, instr.word_count);
	TEST_ASSERT_EQUAL_HEX16_ARRAY(words, instr.words, 2);

	pc += 4;
}

void test_decode_dynamic_bchg(void) {
	// BCHG D3, (#5, A1)
	u16 words[] = {
		0x0769, // 0000 011 1 01 101 001
		0x0005,
	};

	rbt_bus_write_word(bus, pc + 0, words[0]);
	rbt_bus_write_word(bus, pc + 2, words[1]);

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
	TEST_ASSERT_EQUAL_HEX16_ARRAY(words, instr.words, 2);

	pc += 4;
}

void test_decode_static_bset(void) {
	// BSET #5, (#9)
	u16 words[] = {
		0x08f8, // 0000 1000 11 111 000
		0x0005,
		0x0009,
	};

	rbt_bus_write_word(bus, pc + 0, words[0]);
	rbt_bus_write_word(bus, pc + 2, words[1]);
	rbt_bus_write_word(bus, pc + 4, words[2]);

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
	TEST_ASSERT_EQUAL_HEX16_ARRAY(words, instr.words, 3);

	pc += 6;
}

void test_decode_illegal_ori(void) {
	// ORI.b #0x34, A0
	u16 words[] = {
		0x0008, // 0000 0000 00 001 000
		0x0034,
	};

	rbt_bus_write_word(bus, pc + 0, words[0]);
	rbt_bus_write_word(bus, pc + 2, words[1]);

	RBT_Instruction instr;
	TEST_ASSERT_EQUAL(RBT_ERR_DECODE_ILLEGAL_EA, rbt_decode_instruction(bus, pc, &instr));

	TEST_ASSERT_EQUAL(RBT_OP_ORI, instr.mnemonic);
	TEST_ASSERT_EQUAL(RBT_SIZE_BYTE, instr.size);

	TEST_ASSERT_EQUAL(RBT_OPERAND_IMM, instr.src.type);
	TEST_ASSERT_EQUAL(RBT_OPERAND_EA, instr.dst.type);

	TEST_ASSERT_EQUAL(2, instr.word_count);
	TEST_ASSERT_EQUAL_HEX16_ARRAY(words, instr.words, 1);

	pc += 4;
}

void test_decode_andi_w(void) {
	// ANDI.w #0x9abc, (0x2442).w
	u16 words[] = {
		0x0278, // 0000 0010 01 111 000
		0x9abc,
		0x2442,
	};

	rbt_bus_write_word(bus, pc + 0, words[0]);
	rbt_bus_write_word(bus, pc + 2, words[1]);
	rbt_bus_write_word(bus, pc + 4, words[2]);

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
	TEST_ASSERT_EQUAL_HEX16_ARRAY(words, instr.words, 3);

	pc += 6;
}

int main(void) {
	UNITY_BEGIN();

	RUN_TEST(test_decode_static_btst);
	RUN_TEST(test_decode_dynamic_bchg);
	RUN_TEST(test_decode_static_bset);
	RUN_TEST(test_decode_illegal_ori);
	RUN_TEST(test_decode_andi_w);

	return UNITY_END();
}
