#include "rbt/cpu/mmu.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

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
		return nullptr;
	}
	memset(bus, 0, sizeof(RBT_MemoryBus));

	bus->ram_size = RBT_MMU_SLOT_SIZE * ram_slots;
	bus->ram = malloc(bus->ram_size);
	if (!bus->ram) {
		rbt_push_fatal(RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate RAM");
		rbt_destroy_bus(bus);
		return nullptr;
	}

	bus->rom_size = 0;
	bus->rom = nullptr;

	bus->error_code = RBT_ERR_SUCCESS;
	bus->last_error_addr = 0;

	return bus;
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

bool rbt_bus_load_rom(RBT_MemoryBus *bus, const char *filename) {
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
			goto file_error;
		}

		rom = tmpbuf;
		memcpy(rom + size, buf, bytes_read); // Copy read bytes to new memory region
		size += bytes_read;
	}

	if (ferror(file)) {
		rbt_push_fatal(RBT_ERR_SYS_IO, "Unable to read ROM file: %s", filename);
		goto file_error;
	}
	fclose(file);

	if (bus->rom) {
		free(bus->rom);
	}

	bus->rom = rom;
	bus->rom_size = size;

	if (bus->rom_size > RBT_MMU_ROM_SIZE) {
		rbt_push_warn(
			"ROM truncated: size %zu exceeds max %u", bus->rom_size, RBT_MMU_ROM_SIZE
		);
		bus->rom_size = RBT_MMU_ROM_SIZE;
	}

	return true;

file_error:
	fclose(file);

	if (rom)
		free(rom);
	return false;
}

static inline bool _is_address_in_range(u32 addr, u32 start, u32 size) {
	return addr >= start && addr < start + size;
}

u8 rbt_bus_read_byte(RBT_MemoryBus *bus, u32 addr) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// RAM region
	if (bus->ram && bus->ram_size && addr < RBT_MMU_RAM_SIZE) {
		return bus->ram[addr % bus->ram_size];
	}

	// ROM region. Memory out of ROM size is read as zeroes
	if (bus->rom && bus->rom_size
		&& _is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		u32 offset = addr - RBT_MMU_ROM_ADDR;
		return offset < bus->rom_size ? bus->rom[offset] : 0;
	}

	// VDP MMIO device
	if (_is_address_in_range(addr, RBT_MMU_VDP_ADDR, RBT_MMU_VDP_SIZE)) {
		u8 byte;
		u32 offset = addr - RBT_MMU_VDP_ADDR;
		if (bus->vdp.read_byte && bus->vdp.read_byte(bus->vdp.device, offset, &byte)) {
			return byte;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "VDP isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// APU MMIO device
	if (_is_address_in_range(addr, RBT_MMU_APU_ADDR, RBT_MMU_APU_SIZE)) {
		u8 byte;
		u32 offset = addr - RBT_MMU_APU_ADDR;
		if (bus->apu.read_byte && bus->apu.read_byte(bus->apu.device, offset, &byte)) {
			return byte;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "APU isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// IO MMIO
	if (_is_address_in_range(addr, RBT_MMU_IO_ADDR, RBT_MMU_IO_SIZE)) {
		u8 byte;
		u32 offset = addr - RBT_MMU_IO_ADDR;
		if (bus->io.read_byte && bus->io.read_byte(bus->io.device, offset, &byte)) {
			return byte;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "I/O isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus error at: 0x%06x", addr);
	bus->error_code = RBT_ERR_MEM_BUS_ERROR;
	bus->last_error_addr = addr;
	return UINT8_MAX;

error_unmapped:
	bus->error_code = RBT_ERR_MEM_UNMAPPED_MMIO;
	bus->last_error_addr = addr;
	return UINT8_MAX;
}

u16 rbt_bus_read_word(RBT_MemoryBus *bus, u32 addr) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNALIGNED;
		bus->last_error_addr = addr;
		return UINT16_MAX;
	}

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && bus->ram_size && addr < RBT_MMU_RAM_SIZE) {
		u32 offset = addr % bus->ram_size;
		u32 next = (offset + 1) % bus->ram_size;
		return (bus->ram[offset] << 8) | bus->ram[next];
	}

	// ROM region (Memory out of ROM size is read as zeroes)
	if (bus->rom && bus->rom_size
		&& _is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		u32 offset = addr - RBT_MMU_ROM_ADDR;
		if (offset + 1 < bus->rom_size) {
			return (bus->rom[offset] << 8) | bus->rom[offset + 1];
		}

		return 0;
	}

	// VDP MMIO device
	if (_is_address_in_range(addr, RBT_MMU_VDP_ADDR, RBT_MMU_VDP_SIZE)) {
		u16 word;
		u32 offset = addr - RBT_MMU_VDP_ADDR;
		if (bus->vdp.read_word && bus->vdp.read_word(bus->vdp.device, offset, &word)) {
			return word;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "VDP isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// APU MMIO device
	if (_is_address_in_range(addr, RBT_MMU_APU_ADDR, RBT_MMU_APU_SIZE)) {
		u16 word;
		u32 offset = addr - RBT_MMU_APU_ADDR;
		if (bus->apu.read_word && bus->apu.read_word(bus->apu.device, offset, &word)) {
			return word;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "APU isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// IO MMIO
	if (_is_address_in_range(addr, RBT_MMU_IO_ADDR, RBT_MMU_IO_SIZE)) {
		u16 word;
		u32 offset = addr - RBT_MMU_IO_ADDR;
		if (bus->io.read_word && bus->io.read_word(bus->io.device, offset, &word)) {
			return word;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "I/O isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus error at: 0x%06x", addr);
	bus->error_code = RBT_ERR_MEM_BUS_ERROR;
	bus->last_error_addr = addr;
	return UINT16_MAX;

error_unmapped:
	bus->error_code = RBT_ERR_MEM_UNMAPPED_MMIO;
	bus->last_error_addr = addr;
	return UINT16_MAX;
}

u32 rbt_bus_read_long(RBT_MemoryBus *bus, u32 addr) {
	assert(bus);

	// The M68000/MC68008/MC68010 do not support unaligned access
	if (addr & 1) {
		rbt_push_error(RBT_ERR_MEM_UNALIGNED, "Unaligned memory access at: 0x%06x", addr);
		bus->error_code = RBT_ERR_MEM_UNALIGNED;
		bus->last_error_addr = addr;
		return UINT32_MAX;
	}

	u16 high_word = rbt_bus_read_word(bus, addr);
	if (bus->error_code)
		return UINT32_MAX;
	u16 low_word = rbt_bus_read_word(bus, addr + 2);

	return (high_word << 16) | low_word;
}

void rbt_bus_write_byte(RBT_MemoryBus *bus, u32 addr, u8 byte) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// RAM region (Wrap around on unused ram slots)
	if (bus->ram && addr < RBT_MMU_RAM_SIZE) {
		bus->ram[addr % bus->ram_size] = byte;
		return;
	}

	// ROM region (Memory out of ROM size is read as zeroes)
	if (_is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		rbt_push_warn("Attempted write to ROM at: 0x%06x", addr);
		return;
	}

	// VDP MMIO device
	if (_is_address_in_range(addr, RBT_MMU_VDP_ADDR, RBT_MMU_VDP_SIZE)) {
		u32 offset = addr - RBT_MMU_VDP_ADDR;
		if (bus->vdp.write_byte && bus->vdp.write_byte(bus->vdp.device, offset, byte)) {
			return;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "VDP isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// APU MMIO device
	if (_is_address_in_range(addr, RBT_MMU_APU_ADDR, RBT_MMU_APU_SIZE)) {
		u32 offset = addr - RBT_MMU_APU_ADDR;
		if (bus->apu.write_byte && bus->apu.write_byte(bus->apu.device, offset, byte)) {
			return;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "APU isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// IO MMIO
	if (_is_address_in_range(addr, RBT_MMU_IO_ADDR, RBT_MMU_IO_SIZE)) {
		u32 offset = addr - RBT_MMU_IO_ADDR;
		if (bus->io.write_byte && bus->io.write_byte(bus->io.device, offset, byte)) {
			return;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "I/O isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus error at: 0x%06x", addr);
	bus->error_code = RBT_ERR_MEM_BUS_ERROR;
	bus->last_error_addr = addr;
	return;

error_unmapped:
	bus->error_code = RBT_ERR_MEM_UNMAPPED_MMIO;
	bus->last_error_addr = addr;
}

void rbt_bus_write_word(RBT_MemoryBus *bus, u32 addr, u16 word) {
	assert(bus);
	bus->error_code = RBT_ERR_SUCCESS;

	addr &= 0xffffff;

	// The M68000/MC68008/MC68010 do not support unaligned access
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

	// ROM region (Memory out of ROM size is read as zeroes)
	if (_is_address_in_range(addr, RBT_MMU_ROM_ADDR, RBT_MMU_ROM_SIZE)) {
		rbt_push_warn("Attempted write to ROM at: 0x%06x", addr);
		return;
	}

	// VDP MMIO device
	if (_is_address_in_range(addr, RBT_MMU_VDP_ADDR, RBT_MMU_VDP_SIZE)) {
		u32 offset = addr - RBT_MMU_VDP_ADDR;
		if (bus->vdp.write_word && bus->vdp.write_word(bus->vdp.device, offset, word)) {
			return;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "VDP isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// APU MMIO device
	if (_is_address_in_range(addr, RBT_MMU_APU_ADDR, RBT_MMU_APU_SIZE)) {
		u32 offset = addr - RBT_MMU_APU_ADDR;
		if (bus->apu.write_word && bus->apu.write_word(bus->apu.device, offset, word)) {
			return;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "APU isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	// IO MMIO
	if (_is_address_in_range(addr, RBT_MMU_IO_ADDR, RBT_MMU_IO_SIZE)) {
		u32 offset = addr - RBT_MMU_IO_ADDR;
		if (bus->io.write_word && bus->io.write_word(bus->io.device, offset, word)) {
			return;
		}

		rbt_push_error(RBT_ERR_MEM_UNMAPPED_MMIO, "I/O isn't mapped at: 0x%06x", addr);
		goto error_unmapped;
	}

	rbt_push_error(RBT_ERR_MEM_BUS_ERROR, "Bus error at: 0x%06x", addr);
	bus->error_code = RBT_ERR_MEM_BUS_ERROR;
	bus->last_error_addr = addr;
	return;

error_unmapped:
	bus->error_code = RBT_ERR_MEM_UNMAPPED_MMIO;
	bus->last_error_addr = addr;
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

u32 rbt_bus_load(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr) {
	switch (size) {
	case RBT_SIZE_BYTE:
		[[fallthrough]];
	case RBT_SIZE_WORD: {
		u16 word = rbt_bus_read_word(bus, addr);
		return size == RBT_SIZE_BYTE ? (word & 0xff) : word;
	}
	case RBT_SIZE_LONG:
		return rbt_bus_read_long(bus, addr);
	default:
		return 0;
	}
}

void rbt_bus_store(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 data) {
	switch (size) {
	case RBT_SIZE_BYTE:
		rbt_bus_write_byte(bus, addr, data & 0x00ff);
	case RBT_SIZE_WORD:
		rbt_bus_write_word(bus, addr, data & 0xffff);
	case RBT_SIZE_LONG:
		rbt_bus_write_long(bus, addr, data);
	default:
		break;
	}
}
