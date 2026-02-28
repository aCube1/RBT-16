#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/error_codes.h"
#include "rbt/helpers.h"

enum {
	RBT_MMU_SLOT_SIZE = 512 * 1024, // 512KB per RAM chip
	RBT_MMU_SLOTS_COUNT = 8,
	RBT_MMU_EXT_SLOTS_COUNT = 4,

	RBT_MMU_RAM_SIZE = RBT_MMU_SLOT_SIZE * RBT_MMU_SLOTS_COUNT,
	RBT_MMU_ROM_SIZE = 512 * 1024, // 512KB (Kernel ROM)
	RBT_MMU_VDP_SIZE = 64 * 1024,  // 64KB  (VDP MMIO)
	RBT_MMU_APU_SIZE = 64 * 1024,  // 64KB  (Audio RAM)
	RBT_MMU_IO_SIZE = 32 * 1024,   // 32KB  (Controllers, PS/2, GPIO)
	RBT_MMU_SD_SIZE = 32 * 1024,   // 32KB  (microSD Card)
	RBT_MMU_DBG_SIZE = 64 * 1024,  // 64KB  (Reserved/Debug IO)
	RBT_MMU_EXT_SIZE = 64 * 1024,  // 64KB  (Per Expansion Card)

	RBT_MMU_RAM_ADDR = 0x00'0000,
	RBT_MMU_ROM_ADDR = 0xf0'0000,
	RBT_MMU_VDP_ADDR = 0xf8'0000,
	RBT_MMU_APU_ADDR = 0xf9'0000,
	RBT_MMU_IO_ADDR = 0xfa'0000,
	RBT_MMU_SD_ADDR = 0xfa'8000,
	RBT_MMU_DBG_ADDR = 0xfb'0000,

	RBT_MMU_EXT0_ADDR = 0xfc'0000,
	RBT_MMU_EXT1_ADDR = 0xfd'0000,
	RBT_MMU_EXT2_ADDR = 0xfe'0000,
	RBT_MMU_EXT3_ADDR = 0xff'0000,
};

typedef struct RBT_MemoryBus {
	usize ram_size;
	u8 *ram; // 0x00'0000-0x3f'ffff (4MB max)
	u8 *rom; // 0xf0'0000-0xf7'ffff (512KB)

	RBT_MMIODevice vdp;
	RBT_MMIODevice apu;
	RBT_MMIODevice io;
	RBT_MMIODevice sd;
	RBT_MMIODevice ext[RBT_MMU_EXT_SLOTS_COUNT];
} RBT_MemoryBus;

RBT_ErrorCode _bus_fetch_imm(
	RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 *out
);
