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

#include "rbt/cpu/bus.h"

#include "bus_internal.h"
#include "error.h"
#include "rbt/basic_types.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const u32 _ram_module_sizes[] = {
	[RBT_RAM_NONE] = 0,
	[RBT_RAM_256KB] = 256 * 1024,
	[RBT_RAM_512KB] = 512 * 1024,
	[RBT_RAM_1MB] = 1024 * 1024,
};

static inline bool _is_address_in_range(u32 addr, u32 start, u32 size) {
	return addr >= start && addr < start + size;
}

static inline u32 _get_ram_index(const RBT_MemoryBus *bus, u32 addr) {
	assert(bus->ram_slot_size[0] != 0 && "Slot 0 must be populated");

	u32 slot = addr >> 20;
	u32 subaddr = addr & 0x0f'ffff;

	// If slot is unpopulated, mirror into slot 0
	if (bus->ram_slot_size[slot] == 0) {
		slot = 0;
		subaddr = addr;
	}

	return bus->ram_slot_offset[slot] + (subaddr % bus->ram_slot_size[slot]);
}

static RBT_MMIODevice *_get_mmio_handler(RBT_MemoryBus *bus, u32 addr, u32 *offset) {
	assert(offset);

	// VDP (Video Processor Unit)
	if (_is_address_in_range(addr, _BUS_MMIO_VDP_ADDR, _BUS_MMIO_SIZE)) {
		*offset = addr - _BUS_MMIO_VDP_ADDR;
		return &bus->mmio_devices[RBT_BUSDEV_VDP];
	}

	// APU (Audio Processor Unit)
	if (_is_address_in_range(addr, _BUS_MMIO_APU_ADDR, _BUS_MMIO_SIZE)) {
		*offset = addr - _BUS_MMIO_APU_ADDR;
		return &bus->mmio_devices[RBT_BUSDEV_APU];
	}

	// IO (Input/Output)
	if (_is_address_in_range(addr, _BUS_MMIO_IO_ADDR, _BUS_MMIO_SIZE)) {
		*offset = addr - _BUS_MMIO_IO_ADDR;
		return &bus->mmio_devices[RBT_BUSDEV_IO];
	}

	// SD (microSD Card)
	if (_is_address_in_range(addr, _BUS_MMIO_SD_ADDR, _BUS_MMIO_SIZE)) {
		*offset = addr - _BUS_MMIO_SD_ADDR;
		return &bus->mmio_devices[RBT_BUSDEV_SD];
	}

	// SYS (System Control)
	if (_is_address_in_range(addr, _BUS_MMIO_SYS_ADDR, _BUS_MMIO_SIZE)) {
		*offset = addr - _BUS_MMIO_SYS_ADDR;
		return &bus->mmio_devices[RBT_BUSDEV_SYS];
	}

	// EXT (Extension Cards)
	if (_is_address_in_range(addr, _BUS_EXT0_ADDR, _BUS_EXT_SIZE * 4)) {
		i32 slot = (addr - _BUS_EXT0_ADDR) >> 16;
		*offset = addr & 0xffff;

		RBT_MMIODevice *ext = &bus->mmio_devices[RBT_BUSDEV_EXT0 + slot];
		if (!ext->device) {
			_push_error(
				RBT_ERR_MEM_BUS_ERROR, "Extension card %u isn't populated, at: 0x%06x",
				slot, addr
			);
			return nullptr;
		}
		return ext;
	}

	return nullptr;
}

[[nodiscard]] RBT_MemoryBus *rbt_create_bus(const RBT_BusConfig *cfg) {
	assert(cfg);

	if (cfg->ram_slots[0] == RBT_RAM_NONE) {
		_push_fatal(RBT_ERR_INVALID_ARGS, "RAM slot 0 must be populated");
		return nullptr;
	}

	RBT_MemoryBus *bus = malloc(sizeof(RBT_MemoryBus));
	if (!bus) {
		_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate RBT_MemoryBus");
		goto error;
	}
	memset(bus, 0, sizeof(RBT_MemoryBus));

	u32 offset = 0;
	for (i32 i = 0; i < _BUS_RAM_SLOTS_COUNT; i += 1) {
		bus->ram_slot_size[i] = _ram_module_sizes[(u32)cfg->ram_slots[i]];
		bus->ram_slot_offset[i] = offset;
		offset += bus->ram_slot_size[i];
	}

	bus->ram_size = offset;
	bus->ram = malloc(bus->ram_size);
	if (!bus->ram) {
		_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate RAM");
		goto error;
	}

	bus->rom = malloc(_BUS_ROM_SIZE);
	if (!bus->rom) {
		_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate ROM memory area");
		goto error;
	}
	memset(bus->rom, 0, _BUS_ROM_SIZE);

	return bus;

error:
	if (bus)
		rbt_destroy_bus(bus);

	return nullptr;
}

void rbt_destroy_bus(RBT_MemoryBus *bus) {
	if (!bus)
		return;

	if (bus->ram)
		free(bus->ram);
	if (bus->rom)
		free(bus->rom);

	free(bus);
}

void rbt_bus_reset(RBT_MemoryBus *bus) {
	if (!bus)
		return;

	memset(bus->ram, 0, bus->ram_size);
}

void rbt_attach_bus_mmio(RBT_MemoryBus *bus, RBT_BusDevice dev, RBT_MMIODevice device) {
	assert(bus);
	bus->mmio_devices[dev] = device;
}

RBT_ErrorCode rbt_bus_init(RBT_MemoryBus *bus, usize size, const u8 *rom) {
	assert(bus);

	if (size == 0 || !rom) {
		return RBT_ERR_INVALID_ARGS;
	}

	if (size > _BUS_ROM_SIZE) {
		_push_warn("ROM truncated: size %zu exceeds max %u", size, _BUS_ROM_SIZE);
		size = _BUS_ROM_SIZE;
	}
	memcpy(bus->rom, rom, size);

	// Mirror vector table into RAM
	usize vec_table_size = 1024; // 256 vectors * 4 bytes
	memcpy(bus->ram, bus->rom, vec_table_size);

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_bus_init_from_file(RBT_MemoryBus *bus, const char *filename) {
	assert(bus && bus->rom);
	assert(filename);

	FILE *file = fopen(filename, "rb");
	if (!file) {
		_push_error(RBT_ERR_SYS_IO, "Failed to open ROM file at: %s", filename);
		return RBT_ERR_SYS_IO;
	}

	usize size = 0;
	while (size < _BUS_ROM_SIZE) {
		u8 buf[4096];
		usize bytes_read = fread(buf, 1, 4096, file);
		if (bytes_read == 0) {
			break;
		}

		usize remaining = _BUS_ROM_SIZE - size;
		if (bytes_read > remaining)
			bytes_read = remaining;

		memcpy(bus->rom + size, buf, bytes_read);
		size += bytes_read;
	}

	if (ferror(file)) {
		_push_fatal(RBT_ERR_SYS_IO, "Unable to read ROM file: %s", filename);
		fclose(file);
		return RBT_ERR_SYS_IO;
	}

	fclose(file);

	// Mirror vector table into RAM
	usize vec_table_size = 1024; // 256 vectors * 4 bytes
	memcpy(bus->ram, bus->rom, vec_table_size);

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_bus_read_byte(RBT_MemoryBus *bus, u32 addr, u8 *out) {
	assert(bus);
	assert(out);

	addr &= 0x00ffffff;

	if (_is_address_in_range(addr, _BUS_RESERVED_DTACK_ADDR, _BUS_RESERVED_DTACK_SIZE)) {
		return RBT_ERR_SUCCESS;
	}

	if (_is_address_in_range(addr, _BUS_RESERVED_BERR_ADDR, _BUS_RESERVED_BERR_SIZE)) {
		_push_error(
			RBT_ERR_MEM_BUS_ERROR, "Tried to access invalid address at: 0x%06x", addr
		);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	// RAM region
	if (bus->ram && bus->ram_size && addr < _BUS_RAM_SIZE) {
		*out = bus->ram[_get_ram_index(bus, addr)];
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (bus->rom && _is_address_in_range(addr, _BUS_ROM_ADDR, _BUS_ROM_SIZE * 2)) {
		u32 offset = (addr - _BUS_ROM_ADDR) % _BUS_ROM_SIZE;
		*out = bus->rom[offset];
		return RBT_ERR_SUCCESS;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->read_byte) {
		const RBT_ErrorEntry *last = rbt_query_last_error();
		if (last && last->code == RBT_ERR_MEM_BUS_ERROR)
			return RBT_ERR_MEM_BUS_ERROR;

		_push_warn("Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	return mmio->read_byte(mmio->device, offset, out);
}

RBT_ErrorCode rbt_bus_read_word(RBT_MemoryBus *bus, u32 addr, u16 *out) {
	assert(bus);
	assert(out);

	addr &= 0x00ffffff;

	if (_is_address_in_range(addr, _BUS_RESERVED_DTACK_ADDR, _BUS_RESERVED_DTACK_SIZE)) {
		return RBT_ERR_SUCCESS;
	}

	if (_is_address_in_range(addr, _BUS_RESERVED_BERR_ADDR, _BUS_RESERVED_BERR_SIZE)) {
		_push_error(
			RBT_ERR_MEM_BUS_ERROR, "Tried to access invalid address at: 0x%06x", addr
		);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	// The M68000/MC68008/MC68010 does not support unaligned access
	if (addr & 1) {
		_push_warn("Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_ADDR_ERROR;
	}

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && bus->ram_size && addr < _BUS_RAM_SIZE) {
		u32 offset = _get_ram_index(bus, addr);
		u32 next = _get_ram_index(bus, addr + 1);
		*out = (bus->ram[offset] << 8) | bus->ram[next];
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (bus->rom && _is_address_in_range(addr, _BUS_ROM_ADDR, _BUS_ROM_SIZE * 2)) {
		u32 offset = (addr - _BUS_ROM_ADDR) % _BUS_ROM_SIZE;

		u16 word = bus->rom[offset] << 8;
		if (offset + 1 < _BUS_ROM_SIZE) {
			word |= bus->rom[offset + 1];
		}

		*out = word;
		return RBT_ERR_SUCCESS;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->read_word) {
		const RBT_ErrorEntry *last = rbt_query_last_error();
		if (last && last->code == RBT_ERR_MEM_BUS_ERROR)
			return RBT_ERR_MEM_BUS_ERROR;

		_push_warn("Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	return mmio->read_word(mmio->device, offset, out);
}

RBT_ErrorCode rbt_bus_read_long(RBT_MemoryBus *bus, u32 addr, u32 *out) {
	assert(bus);
	assert(out);

	addr &= 0x00ffffff;

	if (_is_address_in_range(addr, _BUS_RESERVED_DTACK_ADDR, _BUS_RESERVED_DTACK_SIZE)) {
		return RBT_ERR_SUCCESS;
	}

	if (_is_address_in_range(addr, _BUS_RESERVED_BERR_ADDR, _BUS_RESERVED_BERR_SIZE)) {
		_push_error(
			RBT_ERR_MEM_BUS_ERROR, "Tried to access invalid address at: 0x%06x", addr
		);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		_push_warn("Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_ADDR_ERROR;
	}

	u16 high_word;
	u16 low_word;

	RBT_ErrorCode err = rbt_bus_read_word(bus, addr, &high_word);
	if (err)
		return err;

	err = rbt_bus_read_word(bus, addr + 2, &low_word);
	if (err)
		return err;

	*out = ((u32)high_word << 16) | low_word;
	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_bus_write_byte(RBT_MemoryBus *bus, u32 addr, u8 byte) {
	assert(bus);

	addr &= 0x00ffffff;

	if (_is_address_in_range(addr, _BUS_RESERVED_DTACK_ADDR, _BUS_RESERVED_DTACK_SIZE)) {
		return RBT_ERR_SUCCESS;
	}

	if (_is_address_in_range(addr, _BUS_RESERVED_BERR_ADDR, _BUS_RESERVED_BERR_SIZE)) {
		_push_error(
			RBT_ERR_MEM_BUS_ERROR, "Tried to access invalid address at: 0x%06x", addr
		);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	// RAM region (Wrap around at unused ram slots)
	if (bus->ram && addr < _BUS_RAM_SIZE) {
		bus->ram[_get_ram_index(bus, addr)] = byte;
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (_is_address_in_range(addr, _BUS_ROM_ADDR, _BUS_ROM_SIZE * 2)) {
		_push_warn("Write attempt on ROM at: 0x%06x", addr);
		return RBT_ERR_MEM_READONLY;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->write_byte) {
		const RBT_ErrorEntry *last = rbt_query_last_error();
		if (last && last->code == RBT_ERR_MEM_BUS_ERROR)
			return RBT_ERR_MEM_BUS_ERROR;

		_push_warn("Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	return mmio->write_byte(mmio->device, offset, byte);
}

RBT_ErrorCode rbt_bus_write_word(RBT_MemoryBus *bus, u32 addr, u16 word) {
	assert(bus);

	addr &= 0x00ffffff;

	if (_is_address_in_range(addr, _BUS_RESERVED_DTACK_ADDR, _BUS_RESERVED_DTACK_SIZE)) {
		return RBT_ERR_SUCCESS;
	}

	if (_is_address_in_range(addr, _BUS_RESERVED_BERR_ADDR, _BUS_RESERVED_BERR_SIZE)) {
		_push_error(
			RBT_ERR_MEM_BUS_ERROR, "Tried to access invalid address at: 0x%06x", addr
		);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	// The M68000/MC68008/MC68010 doesn't support unaligned access
	if (addr & 1) {
		_push_warn("Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_ADDR_ERROR;
	}

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && addr < _BUS_RAM_SIZE) {
		u32 offset = _get_ram_index(bus, addr);
		u32 next = _get_ram_index(bus, addr + 1);
		bus->ram[offset] = (word >> 8) & 0xff;
		bus->ram[next] = word & 0xff;
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (_is_address_in_range(addr, _BUS_ROM_ADDR, _BUS_ROM_SIZE * 2)) {
		_push_warn("Write attempt on ROM at: 0x%06x", addr);
		return RBT_ERR_MEM_READONLY;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->write_word) {
		const RBT_ErrorEntry *last = rbt_query_last_error();
		if (last && last->code == RBT_ERR_MEM_BUS_ERROR)
			return RBT_ERR_MEM_BUS_ERROR;

		_push_warn("Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	return mmio->write_word(mmio->device, offset, word);
}

RBT_ErrorCode rbt_bus_write_long(RBT_MemoryBus *bus, u32 addr, u32 long_) {
	assert(bus);

	addr &= 0x00ffffff;

	if (_is_address_in_range(addr, _BUS_RESERVED_DTACK_ADDR, _BUS_RESERVED_DTACK_SIZE)) {
		return RBT_ERR_SUCCESS;
	}

	if (_is_address_in_range(addr, _BUS_RESERVED_BERR_ADDR, _BUS_RESERVED_BERR_SIZE)) {
		_push_error(
			RBT_ERR_MEM_BUS_ERROR, "Tried to access invalid address at: 0x%06x", addr
		);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		_push_warn("Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_ADDR_ERROR;
	}

	RBT_ErrorCode err = rbt_bus_write_word(bus, addr, (long_ >> 16) & 0xffff);
	if (err)
		return err;

	return rbt_bus_write_word(bus, addr + 2, long_ & 0xffff);
}

RBT_ErrorCode rbt_bus_load(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 *out) {
	RBT_ErrorCode err;

	switch (size) {
	case RBT_SIZE_BYTE: {
		u8 byte;
		err = rbt_bus_read_byte(bus, addr, &byte);
		if (!err)
			*out = byte;
		return err;
	};
	case RBT_SIZE_WORD: {
		u16 word;
		err = rbt_bus_read_word(bus, addr, &word);
		if (!err)
			*out = word;
		return err;
	};
	case RBT_SIZE_LONG: return rbt_bus_read_long(bus, addr, out);
	default:			return RBT_ERR_INVALID_ARGS;
	}

	unreachable();
}

RBT_ErrorCode rbt_bus_store(
	RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 data
) {
	switch (size) {
	case RBT_SIZE_BYTE: return rbt_bus_write_byte(bus, addr, data & 0x00ff);
	case RBT_SIZE_WORD: return rbt_bus_write_word(bus, addr, data & 0xffff);
	case RBT_SIZE_LONG: return rbt_bus_write_long(bus, addr, data);
	default:			return RBT_ERR_INVALID_ARGS;
	}

	unreachable();
}

RBT_ErrorCode _bus_fetch_imm(
	RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 *out
) {
	switch (size) {
	case RBT_SIZE_BYTE:
	case RBT_SIZE_WORD: {
		u16 word;
		RBT_ErrorCode err = rbt_bus_read_word(bus, addr, &word);
		*out = size == RBT_SIZE_BYTE ? (word & 0xff) : word;
		return err;
	}
	case RBT_SIZE_LONG: return rbt_bus_read_long(bus, addr, out);
	default:			return RBT_ERR_INVALID_ARGS;
	}

	unreachable();
}
