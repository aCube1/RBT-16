#include "rbt/mmu.h"

#include "error.h"
#include "mmu_internal.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static inline bool _is_address_in_range(u32 addr, u32 start, u32 size) {
	return addr >= start && addr < start + size;
}

static RBT_MMIODevice *_get_mmio_handler(RBT_MemoryBus *bus, u32 addr, u32 *offset) {
	assert(bus);
	assert(offset);

	// VDP (Video Processor Unit)
	if (_is_address_in_range(addr, RBT_MMU_VDP_ADDR, RBT_MMU_VDP_SIZE)) {
		*offset = addr - RBT_MMU_VDP_ADDR;
		return &bus->vdp;
	}

	// APU (Audio Processor Unit)
	if (_is_address_in_range(addr, RBT_MMU_APU_ADDR, RBT_MMU_APU_SIZE)) {
		*offset = addr - RBT_MMU_APU_ADDR;
		return &bus->apu;
	}

	// IO (Input/Output)
	if (_is_address_in_range(addr, RBT_MMU_IO_ADDR, RBT_MMU_IO_SIZE)) {
		*offset = addr - RBT_MMU_IO_ADDR;
		return &bus->io;
	}

	// SD (microSD Card)
	if (_is_address_in_range(addr, RBT_MMU_SD_ADDR, RBT_MMU_SD_SIZE)) {
		*offset = addr - RBT_MMU_SD_ADDR;
		return &bus->sd;
	}

	// EXT (Extension Cards)
	if (_is_address_in_range(addr, RBT_MMU_EXT0_ADDR, RBT_MMU_EXT_SIZE * 4)) {
		i32 slot = (addr - RBT_MMU_EXT0_ADDR) >> 16;
		*offset = addr & 0xffff;
		return &bus->ext[slot];
	}

	return nullptr;
}

RBT_MemoryBus *rbt_create_bus(u8 ram_slots) {
	if (ram_slots == 0 || ram_slots > RBT_MMU_SLOTS_COUNT) {
		rbt_push_error(
			RBT_ERR_INVALID_ARGS, "Invalid ram slots count. Expected: >0 and <=8, got %u",
			ram_slots
		);
		return nullptr;
	}

	RBT_MemoryBus *bus = malloc(sizeof(RBT_MemoryBus));
	if (!bus) {
		rbt_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate RBT_MemoryBus");
		goto error;
	}
	memset(bus, 0, sizeof(RBT_MemoryBus));

	bus->ram_size = RBT_MMU_SLOT_SIZE * ram_slots;
	bus->ram = malloc(bus->ram_size);
	if (!bus->ram) {
		rbt_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate RAM");
		goto error;
	}

	bus->rom = malloc(RBT_MMU_ROM_SIZE * sizeof(u8));
	if (!bus->rom) {
		rbt_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate ROM memory area");
		goto error;
	}
	memset(bus->rom, 0, RBT_MMU_ROM_SIZE * sizeof(u8));

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

	switch (dev) {
	case RBT_BUSDEV_VDP:  bus->vdp = device; break;
	case RBT_BUSDEV_APU:  bus->apu = device; break;
	case RBT_BUSDEV_IO:	  bus->io = device; break;
	case RBT_BUSDEV_SD:	  bus->sd = device; break;
	case RBT_BUSDEV_EXT0: bus->ext[0] = device; break;
	case RBT_BUSDEV_EXT1: bus->ext[1] = device; break;
	case RBT_BUSDEV_EXT2: bus->ext[2] = device; break;
	case RBT_BUSDEV_EXT3: bus->ext[3] = device; break;
	default:			  unreachable();
	}
}

RBT_ErrorCode rbt_bus_init(RBT_MemoryBus *bus, usize size, const u8 *rom) {
	assert(bus);

	if (size == 0 || !rom) {
		return RBT_ERR_INVALID_ARGS;
	}

	if (size > RBT_MMU_ROM_SIZE) {
		rbt_push_warn("ROM truncated: size %zu exceeds max %u", size, RBT_MMU_ROM_SIZE);
		size = RBT_MMU_ROM_SIZE;
	}
	memcpy(bus->rom, rom, size);

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_bus_init_from_file(RBT_MemoryBus *bus, const char *filename) {
	assert(bus && bus->rom);
	assert(filename);

	FILE *file = fopen(filename, "rb");
	if (!file) {
		rbt_push_error(RBT_ERR_SYS_IO, "Failed to open ROM file at: %s", filename);
		return RBT_ERR_SYS_IO;
	}

	usize size = 0;
	while (size < RBT_MMU_ROM_SIZE) {
		u8 buf[4096];
		usize bytes_read = fread(buf, 1, 4096, file);
		if (bytes_read == 0) {
			break;
		}

		usize remaining = RBT_MMU_ROM_SIZE - size;
		if (bytes_read > remaining)
			bytes_read = remaining;

		memcpy(bus->rom + size, buf, bytes_read);
		size += bytes_read;
	}

	if (ferror(file)) {
		rbt_push_fatal(RBT_ERR_SYS_IO, "Unable to read ROM file: %s", filename);
		fclose(file);
		return RBT_ERR_SYS_IO;
	}

	fclose(file);
	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_bus_read_byte(RBT_MemoryBus *bus, u32 addr, u8 *out) {
	assert(bus);
	assert(out);

	addr &= 0xffffff;

	// RAM region
	if (bus->ram && bus->ram_size && addr < RBT_MMU_RAM_SIZE) {
		*out = bus->ram[addr % bus->ram_size];
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (bus->rom && _is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		u32 offset = addr - RBT_MMU_ROM_ADDR;
		*out = bus->rom[offset];
		return RBT_ERR_SUCCESS;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->read_byte) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	if (mmio->read_byte(mmio->device, offset, out)) {
		return RBT_ERR_SUCCESS;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
	return RBT_ERR_MEM_BUS_ERROR;
}

RBT_ErrorCode rbt_bus_read_word(RBT_MemoryBus *bus, u32 addr, u16 *out) {
	assert(bus);
	assert(out);

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 does not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_UNALIGNED;
	}

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && bus->ram_size && addr < RBT_MMU_RAM_SIZE) {
		u32 offset = addr % bus->ram_size;
		u32 next = (offset + 1) % bus->ram_size;
		*out = (bus->ram[offset] << 8) | bus->ram[next];
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (bus->rom && _is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		u32 offset = addr - RBT_MMU_ROM_ADDR;
		u16 word = bus->rom[offset] << 8;
		if (offset + 1 < RBT_MMU_ROM_SIZE) {
			word |= bus->rom[offset + 1];
		}

		*out = word;
		return RBT_ERR_SUCCESS;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->read_word) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	if (mmio->read_word(mmio->device, offset, out)) {
		return RBT_ERR_SUCCESS;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
	return RBT_ERR_MEM_BUS_ERROR;
}

RBT_ErrorCode rbt_bus_read_long(RBT_MemoryBus *bus, u32 addr, u32 *out) {
	assert(bus);
	assert(out);

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_UNALIGNED;
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

	addr &= 0xffffff;

	// RAM region (Wrap around at unused ram slots)
	if (bus->ram && addr < RBT_MMU_RAM_SIZE) {
		bus->ram[addr % bus->ram_size] = byte;
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (_is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		rbt_push_warn("Attempted write to ROM at: 0x%06x", addr);
		return RBT_ERR_MEM_READONLY;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->write_byte) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	if (!mmio->write_byte(mmio->device, offset, byte)) {
		rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_bus_write_word(RBT_MemoryBus *bus, u32 addr, u16 word) {
	assert(bus);

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 doesn't support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_UNALIGNED;
	}

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && addr < RBT_MMU_RAM_SIZE) {
		u32 offset = addr % bus->ram_size;
		u32 next = (offset + 1) % bus->ram_size;
		bus->ram[offset] = (word >> 8) & 0xff;
		bus->ram[next] = word & 0xff;
		return RBT_ERR_SUCCESS;
	}

	// ROM region
	if (_is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		rbt_push_warn("Attempted write to ROM at: 0x%06x", addr);
		return RBT_ERR_MEM_READONLY;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->write_word) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		return RBT_ERR_MEM_UNMAPPED;
	}

	if (!mmio->write_word(mmio->device, offset, word)) {
		rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
		return RBT_ERR_MEM_BUS_ERROR;
	}

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_bus_write_long(RBT_MemoryBus *bus, u32 addr, u32 long_) {
	assert(bus);

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		return RBT_ERR_MEM_UNALIGNED;
	}

	RBT_ErrorCode err = rbt_bus_write_word(bus, addr, (long_ >> 16) & 0xffff);
	if (err)
		return err;
	err = rbt_bus_write_word(bus, addr + 2, long_ & 0xffff);

	return err;
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
