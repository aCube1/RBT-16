#include "rbt/cpu/mmu.h"

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

	// MSD (microSD Card)
	if (_is_address_in_range(addr, RBT_MMU_MSD_ADDR, RBT_MMU_MSD_SIZE)) {
		*offset = addr - RBT_MMU_MSD_ADDR;
		return &bus->sdc;
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

	bus->error_code = RBT_ERR_SUCCESS;
	bus->last_error_addr = 0;

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

	bus->error_code = RBT_ERR_SUCCESS;
	bus->last_error_addr = 0;

	memset(bus->ram, 0, bus->ram_size);
}

bool rbt_bus_init(RBT_MemoryBus *bus, usize size, const u8 *rom) {
	assert(bus);

	if (size == 0 || !rom) {
		return false;
	}

	if (size > RBT_MMU_ROM_SIZE) {
		rbt_push_warn("ROM truncated: size %zu exceeds max %u", size, RBT_MMU_ROM_SIZE);
		size = RBT_MMU_ROM_SIZE;
	}
	memcpy(bus->rom, rom, size);

	return true;
}

bool rbt_bus_init_from_file(RBT_MemoryBus *bus, const char *filename) {
	assert(bus && bus->rom);
	assert(filename);

	FILE *file = fopen(filename, "rb");
	if (!file) {
		rbt_push_error(RBT_ERR_SYS_IO, "Failed to open ROM file at: %s", filename);
		return false;
	}

	u8 *rom = nullptr;

	usize size = 0;
	while (size < RBT_MMU_ROM_SIZE) {
		u8 buf[4096];
		usize bytes_read = fread(buf, 1, 4096, file);
		if (bytes_read == 0) {
			break;
		}

		u8 *tmpbuf = realloc(rom, size + bytes_read);
		if (!tmpbuf) {
			rbt_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate ROM buffer");
			fclose(file);
			return false;
		}

		rom = tmpbuf;
		memcpy(rom + size, buf, bytes_read); // Copy read bytes to new memory region
		size += bytes_read;
	}

	if (ferror(file)) {
		rbt_push_fatal(RBT_ERR_SYS_IO, "Unable to read ROM file: %s", filename);
		fclose(file);
		return false;
	}

	fclose(file);
	bool success = rbt_bus_init(bus, size, rom);

	free(rom);
	return success;
}

u64 rbt_bus_read_byte(RBT_MemoryBus *bus, u32 addr) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// RAM region
	if (bus->ram && bus->ram_size && addr < RBT_MMU_RAM_SIZE) {
		return bus->ram[addr % bus->ram_size];
	}

	// ROM region
	if (bus->rom && _is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		u32 offset = addr - RBT_MMU_ROM_ADDR;
		return bus->rom[offset];
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->read_byte) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNMAPPED;
		bus->last_error_addr = addr;
		return UINT64_MAX;
	}

	u8 byte;
	if (mmio->read_byte(mmio->device, offset, &byte)) {
		return byte;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
	bus->error_code = RBT_ERR_MEM_BUS_ERROR;
	bus->last_error_addr = addr;
	return UINT64_MAX;
}

u64 rbt_bus_read_word(RBT_MemoryBus *bus, u32 addr) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNALIGNED;
		bus->last_error_addr = addr;
		return UINT64_MAX;
	}

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && bus->ram_size && addr < RBT_MMU_RAM_SIZE) {
		u32 offset = addr % bus->ram_size;
		u32 next = (offset + 1) % bus->ram_size;
		return (bus->ram[offset] << 8) | bus->ram[next];
	}

	// ROM region
	if (bus->rom && _is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		u32 offset = addr - RBT_MMU_ROM_ADDR;
		u16 word = bus->rom[offset] << 8;
		if (offset + 1 < RBT_MMU_ROM_SIZE) {
			word |= bus->rom[offset + 1];
		}

		return word;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->read_word) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNMAPPED;
		bus->last_error_addr = addr;
		return UINT64_MAX;
	}

	u16 word;
	if (mmio->read_word(mmio->device, offset, &word)) {
		return word;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
	bus->error_code = RBT_ERR_MEM_BUS_ERROR;
	bus->last_error_addr = addr;
	return UINT64_MAX;
}

u64 rbt_bus_read_long(RBT_MemoryBus *bus, u32 addr) {
	assert(bus);

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNALIGNED;
		bus->last_error_addr = addr;
		return UINT64_MAX;
	}

	u16 high_word = rbt_bus_read_word(bus, addr);
	if (bus->error_code)
		return UINT64_MAX;
	u16 low_word = rbt_bus_read_word(bus, addr + 2);
	if (bus->error_code)
		return UINT64_MAX;

	return ((u32)high_word << 16) | low_word;
}

void rbt_bus_write_byte(RBT_MemoryBus *bus, u32 addr, u8 byte) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// RAM region (Wrap around at unused ram slots)
	if (bus->ram && addr < RBT_MMU_RAM_SIZE) {
		bus->ram[addr % bus->ram_size] = byte;
		return;
	}

	// ROM region
	if (_is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		rbt_push_warn("Attempted write to ROM at: 0x%06x", addr);
		return;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->write_byte) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNMAPPED;
		bus->last_error_addr = addr;
		return;
	}

	if (!mmio->write_byte(mmio->device, offset, byte)) {
		rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_BUS_ERROR;
		bus->last_error_addr = addr;
	}
}

void rbt_bus_write_word(RBT_MemoryBus *bus, u32 addr, u16 word) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 doesn't support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNALIGNED;
		bus->last_error_addr = addr;
		return;
	}

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && addr < RBT_MMU_RAM_SIZE) {
		u32 offset = addr % bus->ram_size;
		u32 next = (offset + 1) % bus->ram_size;
		bus->ram[offset] = (word >> 8) & 0xff;
		bus->ram[next] = word & 0xff;
		return;
	}

	// ROM region
	if (_is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		rbt_push_warn("Attempted write to ROM at: 0x%06x", addr);
		return;
	}

	u32 offset;
	RBT_MMIODevice *mmio = _get_mmio_handler(bus, addr, &offset);
	if (!mmio || !mmio->write_word) {
		rbt_push_error(RBT_ERR_MEM_UNMAPPED, "Memory isn't mapped at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNMAPPED;
		bus->last_error_addr = addr;
		return;
	}

	if (!mmio->write_word(mmio->device, offset, word)) {
		rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus fault at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_BUS_ERROR;
		bus->last_error_addr = addr;
	}
}

void rbt_bus_write_long(RBT_MemoryBus *bus, u32 addr, u32 long_) {
	assert(bus);

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNALIGNED;
		bus->last_error_addr = addr;
		return;
	}

	rbt_bus_write_word(bus, addr, (long_ >> 16) & 0xffff);
	if (bus->error_code)
		return;
	rbt_bus_write_word(bus, addr + 2, long_ & 0xffff);
}

u64 rbt_bus_load(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr) {
	switch (size) {
	case RBT_SIZE_BYTE: return rbt_bus_read_byte(bus, addr);
	case RBT_SIZE_WORD: return rbt_bus_read_word(bus, addr);
	case RBT_SIZE_LONG: return rbt_bus_read_long(bus, addr);
	default:			return 0;
	}
}

void rbt_bus_store(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 data) {
	switch (size) {
	case RBT_SIZE_BYTE: rbt_bus_write_byte(bus, addr, data & 0x00ff); break;
	case RBT_SIZE_WORD: rbt_bus_write_word(bus, addr, data & 0xffff); break;
	case RBT_SIZE_LONG: rbt_bus_write_long(bus, addr, data); break;
	default: //
		break;
	}
}

u64 rbt_bus_fetch_imm(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr) {
	switch (size) {
	case RBT_SIZE_BYTE:
	case RBT_SIZE_WORD: {
		u16 word = rbt_bus_read_word(bus, addr);
		return size == RBT_SIZE_BYTE ? (word & 0xff) : word;
	}
	case RBT_SIZE_LONG: //
		return rbt_bus_read_long(bus, addr);
	default: //
		return 0;
	}
}
