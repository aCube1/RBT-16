#include "rbt/cpu/effective_address.h"
#include "rbt/cpu/mmu.h"

#include <unity.h>

static RBT_MemoryBus *bus;

void setUp(void) {
	bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);
}

void tearDown(void) {
	rbt_destroy_bus(bus);
}

void test_indexext_from_word_invalid_scale(void) {
	RBT_IndexExtension ix = { 0 };
	u16 ext = 0b0000001100000000; // scale bits set (10–9)
	TEST_ASSERT_FALSE(rbt_indexext_from_word(ext, &ix));
	TEST_ASSERT_EQUAL(RBT_ERR_DECODE_INVALID_EA, rbt_query_last_error()->code);
}

void test_indexext_from_word_sign_and_fields(void) {
	RBT_IndexExtension ix = { 0 };
	u16 ext = 0b1001100000001010; // A=1, REG=001, W/L=1, disp=0x0A
	TEST_ASSERT_TRUE(rbt_indexext_from_word(ext, &ix));
	TEST_ASSERT_TRUE(ix.is_addr);
	TEST_ASSERT_TRUE(ix.is_long);
	TEST_ASSERT_EQUAL(1, ix.xreg);
	TEST_ASSERT_EQUAL_INT8(0x0A, ix.displacement);
}

void test_indexext_to_word_roundtrip(void) {
	RBT_IndexExtension ix = {
		.is_addr = true, .is_long = true, .xreg = 3, .scale = 0, .displacement = -5
	};
	u16 word = rbt_indexext_to_word(&ix);

	RBT_IndexExtension decoded = { 0 };
	TEST_ASSERT_TRUE(rbt_indexext_from_word(word, &decoded));
	TEST_ASSERT_EQUAL(ix.is_addr, decoded.is_addr);
	TEST_ASSERT_EQUAL(ix.is_long, decoded.is_long);
	TEST_ASSERT_EQUAL(ix.xreg, decoded.xreg);
	TEST_ASSERT_EQUAL_INT8(ix.displacement, decoded.displacement);
}

void test_decode_absolute_short_sign_extend(void) {
	u32 pc = 0x1000;
	u16 word = 0xff00; // should sign extend to negative
	rbt_bus_write_word(bus, pc, word);

	RBT_EffectiveAddress ea = { 0 };
	TEST_ASSERT_EQUAL(
		pc + 2, rbt_decode_effective_address(0b111, 0b000, RBT_SIZE_WORD, bus, pc, &ea)
	);
	TEST_ASSERT_EQUAL(RBT_EA_ABSOLUTE_SHORT, ea.mode);
	TEST_ASSERT_EQUAL_INT32((int32_t)(int16_t)0xff00, ea.absolute_short);
}

void test_decode_immediate_long(void) {
	u32 pc = 0x2000;
	u32 imm = 0xdeadbeef;
	rbt_bus_write_long(bus, pc, imm);

	RBT_EffectiveAddress ea = { 0 };
	TEST_ASSERT_EQUAL(
		pc + 4, rbt_decode_effective_address(0b111, 0b100, RBT_SIZE_LONG, bus, pc, &ea)
	);
	TEST_ASSERT_EQUAL(RBT_EA_IMMEDIATE, ea.mode);
	TEST_ASSERT_EQUAL_UINT32(imm, ea.imm);
}

void test_decode_invalid_mode(void) {
	RBT_EffectiveAddress ea = { 0 };
	TEST_ASSERT_EQUAL(
		UINT32_MAX, rbt_decode_effective_address(0b111, 0b111, RBT_SIZE_WORD, bus, 0, &ea)
	);
	TEST_ASSERT_EQUAL(RBT_ERR_DECODE_INVALID_EA, rbt_query_last_error()->code);
}

int main(void) {
	UNITY_BEGIN();

	RUN_TEST(test_indexext_from_word_invalid_scale);
	RUN_TEST(test_indexext_from_word_sign_and_fields);
	RUN_TEST(test_indexext_to_word_roundtrip);
	RUN_TEST(test_decode_absolute_short_sign_extend);
	RUN_TEST(test_decode_immediate_long);
	RUN_TEST(test_decode_invalid_mode);

	return UNITY_END();
}
