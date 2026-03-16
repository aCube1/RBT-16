// RBT-16 - Fantasy Retro-Computer Inspired by the Amiga 500 and Atari ST.
// Copyright (C) 2026  aCube
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, see
// <https://www.gnu.org/licenses/>.

#include "cpu/mmu_internal.h"
#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/error_codes.h"
#include "unity_internals.h"

#include <stdio.h>
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
	TEST_ASSERT_EQUAL(_MMU_SLOT_SIZE * 2, bus->ram_size);
	rbt_destroy_bus(bus);
}

void test_read_write_wraparound(void) {
	RBT_MemoryBus *bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);

	u32 last_addr = _MMU_SLOT_SIZE - 1;
	rbt_bus_write_byte(bus, last_addr, 0xAA);
	u8 byte;
	TEST_ASSERT_TRUE(rbt_bus_read_byte(bus, last_addr, &byte));
	TEST_ASSERT_EQUAL_UINT8(0xAA, byte);

	// Wrap around (since only one slot)
	rbt_bus_write_byte(bus, last_addr + 1, 0xBB);

	TEST_ASSERT_TRUE(rbt_bus_read_byte(bus, last_addr, &byte));
	TEST_ASSERT_EQUAL_UINT8(0xBB, byte);

	rbt_destroy_bus(bus);
}

void test_unaligned_word_access(void) {
	RBT_MemoryBus *bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);

	u16 dummy = 0xffff;
	TEST_ASSERT_EQUAL(RBT_ERR_MEM_UNALIGNED, rbt_bus_read_word(bus, 1, &dummy));
	TEST_ASSERT_EQUAL(RBT_ERR_MEM_UNALIGNED, rbt_bus_write_word(bus, 3, dummy));

	rbt_destroy_bus(bus);
}

void test_load_empty_rom(void) {
	RBT_MemoryBus *bus = rbt_create_bus(1);
	TEST_ASSERT_NOT_NULL(bus);

	FILE *tmp = fopen("empty.rom", "wb");
	TEST_ASSERT_NOT_NULL(tmp);
	fclose(tmp);

	TEST_ASSERT_FALSE(rbt_bus_init_from_file(bus, "empty.rom"));
	TEST_ASSERT_NOT_NULL(bus->rom);

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
