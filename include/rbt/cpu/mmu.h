#pragma once

#include "rbt/basic_types.h"
#include "rbt/error.h"

enum {
	RBT_MMU_SLOT_SIZE = 512 * 1024, // 512KB per RAM chip
	RBT_MMU_SLOTS_COUNT = 8,

	RBT_MMU_RAM_SIZE = RBT_MMU_SLOT_SIZE * RBT_MMU_SLOTS_COUNT,
	RBT_MMU_ROM_SIZE = 512 * 1024, // 0xf0'0000-0xf7'ffff
	RBT_MMU_VDP_SIZE = 64 * 1024,  // 0xf8'0000-0xf8'ffff
	RBT_MMU_APU_SIZE = 64 * 1024,  // 0xf9'0000-0xf9'ffff
	RBT_MMU_IO_SIZE = 64 * 1024,   // 0xfa'0000-0xfa'ffff

	RBT_MMU_RAM_ADDR = 0x000000,
	RBT_MMU_ROM_ADDR = 0xf00000,
	RBT_MMU_VDP_ADDR = 0xf80000,
	RBT_MMU_APU_ADDR = 0xf90000,
	RBT_MMU_IO_ADDR = 0xfa0000,
};

typedef bool (*RBT_MMIOReadByteCallback)(void *device, u32 addr, u8 *byte);
typedef bool (*RBT_MMIOReadWordCallback)(void *device, u32 addr, u16 *word);
typedef bool (*RBT_MMIOWriteByteCallback)(void *device, u32 addr, u8 byte);
typedef bool (*RBT_MMIOWriteWordCallback)(void *device, u32 addr, u16 word);

typedef struct RBT_MMIODevice {
	void *device;
	RBT_MMIOReadByteCallback read_byte;
	RBT_MMIOReadWordCallback read_word;
	RBT_MMIOWriteByteCallback write_byte;
	RBT_MMIOWriteWordCallback write_word;
} RBT_MMIODevice;

typedef struct RBT_MemoryBus {
	u8 *ram; // 0x00'0000-0x3f'ffff (4MB max)
	usize ram_size;

	u8 *rom; // 0xf0'0000-0xf7'ffff (512KB)
	usize rom_size;

	RBT_MMIODevice vdp;
	RBT_MMIODevice apu;
	RBT_MMIODevice io;

	RBT_ErrorCode error_code;
	u32 last_error_addr;
} RBT_MemoryBus;

RBT_MemoryBus *rbt_create_bus(u8 ram_slots);
void rbt_destroy_bus(RBT_MemoryBus *bus);

void rbt_bus_reset(RBT_MemoryBus *bus);
bool rbt_bus_load_rom(RBT_MemoryBus *bus, const char *filename);

u8 rbt_bus_read_byte(RBT_MemoryBus *bus, u32 addr);
u16 rbt_bus_read_word(RBT_MemoryBus *bus, u32 addr);
u32 rbt_bus_read_long(RBT_MemoryBus *bus, u32 addr);

void rbt_bus_write_byte(RBT_MemoryBus *bus, u32 addr, u8 byte);
void rbt_bus_write_word(RBT_MemoryBus *bus, u32 addr, u16 word);
void rbt_bus_write_long(RBT_MemoryBus *bus, u32 addr, u32 long_);
