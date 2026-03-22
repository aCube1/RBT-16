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

#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

typedef enum RBT_BusDevice {
	RBT_BUSDEV_RAM,
	RBT_BUSDEV_ROM,
	RBT_BUSDEV_VDP,
	RBT_BUSDEV_IO,
	RBT_BUSDEV_SD,
	RBT_BUSDEV_SYS,
	RBT_BUSDEV_EXT0,
	RBT_BUSDEV_EXT1,
	RBT_BUSDEV_EXT2,
	RBT_BUSDEV_EXT3,
	_RBT_BUSDEV_COUNT,
} RBT_BusDevice;

typedef enum RBT_RamModuleSize {
	RBT_RAM_NONE,
	RBT_RAM_256KB,
	RBT_RAM_512KB,
	RBT_RAM_1MB,
} RBT_RamModuleSize;

typedef RBT_ErrorCode (*RBT_IOReadByteCallback)(void *device, u32 addr, u8 *byte);
typedef RBT_ErrorCode (*RBT_IOReadWordCallback)(void *device, u32 addr, u16 *word);
typedef RBT_ErrorCode (*RBT_IOWriteByteCallback)(void *device, u32 addr, u8 byte);
typedef RBT_ErrorCode (*RBT_IOWriteWordCallback)(void *device, u32 addr, u16 word);

typedef struct RBT_IODevice {
	u32 addr;
	u32 size;

	void *device;
	RBT_IOReadByteCallback read_byte;
	RBT_IOReadWordCallback read_word;
	RBT_IOWriteByteCallback write_byte;
	RBT_IOWriteWordCallback write_word;
} RBT_IODevice;

typedef struct RBT_BusConfig {
	RBT_RamModuleSize ram_slots[4];
} RBT_BusConfig;

typedef struct RBT_MemoryBus RBT_MemoryBus;

[[nodiscard]] RBT_MemoryBus *rbt_create_bus(const RBT_BusConfig *cfg);
void rbt_destroy_bus(RBT_MemoryBus *bus);
void rbt_bus_reset(RBT_MemoryBus *bus);

void rbt_bus_attach_iodevice(
	RBT_MemoryBus *bus, RBT_BusDevice dev, const RBT_IODevice *device
);
RBT_ErrorCode rbt_bus_init(RBT_MemoryBus *bus, usize size, const u8 *rom);
RBT_ErrorCode rbt_bus_init_from_file(RBT_MemoryBus *bus, const char *filename);

RBT_ErrorCode rbt_bus_read_byte(RBT_MemoryBus *bus, u32 addr, u8 *out);
RBT_ErrorCode rbt_bus_read_word(RBT_MemoryBus *bus, u32 addr, u16 *out);
RBT_ErrorCode rbt_bus_read_long(RBT_MemoryBus *bus, u32 addr, u32 *out);

RBT_ErrorCode rbt_bus_write_byte(RBT_MemoryBus *bus, u32 addr, u8 byte);
RBT_ErrorCode rbt_bus_write_word(RBT_MemoryBus *bus, u32 addr, u16 word);
RBT_ErrorCode rbt_bus_write_long(RBT_MemoryBus *bus, u32 addr, u32 long_);

RBT_ErrorCode rbt_bus_load(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 *out);
RBT_ErrorCode rbt_bus_store(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 data);
