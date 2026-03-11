#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/error_codes.h"
#include "rbt/helpers.h"

enum {
	_MMU_SLOT_SIZE = 512 * 1024, // 512KB per RAM chip
	_MMU_SLOTS_COUNT = 8,
	_MMU_EXT_SLOTS_COUNT = 4,

	_MMU_RAM_SIZE = _MMU_SLOT_SIZE * _MMU_SLOTS_COUNT,
	_MMU_ROM_SIZE = 512 * 1024,	 // 512KB (Kernel ROM)
	_MMU_EXT_SIZE = 64 * 1024,	 // 64KB  (Per Expansion Card)
	_MMU_MMIO_REGION_SIZE = 256, // Each MMIO region is 256-bytes wide

	_MMU_RAM_ADDR = 0x00'0000,
	_MMU_ROM_ADDR = 0xf0'0000,

	_MMU_MMIO_VDP_ADDR = 0xfa'0000,
	_MMU_MMIO_APU_ADDR = 0xfa'0100,
	_MMU_MMIO_IO_ADDR = 0xfa'0200,
	_MMU_MMIO_SD_ADDR = 0xfa'0300,
	_MMU_MMIO_DBG_ADDR = 0xfa'0400,

	_MMU_EXT0_ADDR = 0xfc'0000,
	_MMU_EXT1_ADDR = 0xfd'0000,
	_MMU_EXT2_ADDR = 0xfe'0000,
	_MMU_EXT3_ADDR = 0xff'0000,

	// Utility
	_MMU_RESERVED_BERR_ADDR = 0x40'0000,
	_MMU_RESERVED_DTACK_ADDR = 0xf8'0000,
	_MMU_RESERVED_BERR_SIZE = 11 * (1024 * 1024), // ~11MB is reserved and triggers BERR
	_MMU_RESERVED_DTACK_SIZE = 3 * (64 * 1024),	  // 192KB is reserved and does nothing
};

typedef struct RBT_MemoryBus {
	usize ram_size;
	u8 *ram; // 0x00'0000-0x3f'ffff (4MB max)
	u8 *rom; // 0xf0'0000-0xf7'ffff (512KB)

	RBT_MMIODevice vdp;
	RBT_MMIODevice apu;
	RBT_MMIODevice io;
	RBT_MMIODevice sd;
	RBT_MMIODevice ext[_MMU_EXT_SLOTS_COUNT];
} RBT_MemoryBus;

RBT_ErrorCode _bus_fetch_imm(
	RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 *out
);
