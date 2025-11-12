#include "rbt/cpu/mmu.h"

#include <unity.h>

void setUp(void) { }
void tearDown(void) { }

void test_create_bus_invalid_slots(void) {
	TEST_ASSERT_NULL(rbt_create_bus(0));
	TEST_ASSERT_NULL(rbt_create_bus(9));
}

void test_create_bus_valid(void) {
	RBT_MemoryBus *bus = rbt_create_bus(2);
	TEST_ASSERT_NOT_NULL(bus);
	TEST_ASSERT_NOT_NULL(bus->ram);
	TEST_ASSERT_EQUAL(RBT_MMU_SLOT_SIZE * 2, bus->ram_size);
	rbt_destroy_bus(bus);
}

void test_read_write_wraparound(void) {
	RBT_MemoryBus *bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);

	u32 last_addr = RBT_MMU_SLOT_SIZE - 1;
	rbt_bus_write_byte(bus, last_addr, 0xAA);
	TEST_ASSERT_EQUAL_UINT8(0xAA, rbt_bus_read_byte(bus, last_addr));

	// Wrap around (since only one slot)
	rbt_bus_write_byte(bus, last_addr + 1, 0xBB);
	TEST_ASSERT_EQUAL_UINT8(0xBB, rbt_bus_read_byte(bus, 0));

	rbt_destroy_bus(bus);
}

void test_unaligned_word_access(void) {
	RBT_MemoryBus *bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);

	rbt_bus_read_word(bus, 1);
	TEST_ASSERT_EQUAL(RBT_ERR_MEM_UNALIGNED, bus->error_code);

	rbt_bus_write_word(bus, 3, 0xFFFF);
	TEST_ASSERT_EQUAL(RBT_ERR_MEM_UNALIGNED, bus->error_code);

	rbt_destroy_bus(bus);
}

void test_load_empty_rom(void) {
	RBT_MemoryBus *bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);

	FILE *tmp = fopen("empty.rom", "wb");
	TEST_ASSERT_NOT_NULL(tmp);
	fclose(tmp);

	TEST_ASSERT_TRUE(rbt_bus_load_rom(bus, "empty.rom"));
	TEST_ASSERT_EQUAL_UINT(0, bus->rom_size);

	remove("empty.rom");
	rbt_destroy_bus(bus);
}

int main(void) {
	UNITY_BEGIN();

	RUN_TEST(test_create_bus_invalid_slots);
	RUN_TEST(test_create_bus_valid);
	RUN_TEST(test_read_write_wraparound);
	RUN_TEST(test_unaligned_word_access);
	RUN_TEST(test_load_empty_rom);

	return UNITY_END();
}
