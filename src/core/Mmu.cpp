#include "core/Mmu.hpp"

#include <cassert>

using namespace rbt;

Mmu::Mmu(i32 slots) {
	assert(slots > 0 && slots <= Mmu::MAX_SLOTS);

	m_active_slots = slots;
	m_ram_data.resize(slots * Mmu::RAM_SLOT_SIZE);
}

std::pair<u64, Mmu::Err> Mmu::read(u32 addr, std::span<u8> data, bool partial) const {
	if (addr >= m_ram_data.size()) {
		return std::make_pair(0, Mmu::Err::InvalidAddress);
	}

	i64 bytes_to_read = data.size();
	auto err = Mmu::Err::None;

	// If memory overflow and partial access flags is true,
	// read other bytes in valid addresses
	if (addr + data.size() >= m_ram_data.size()) {
		bytes_to_read = ((i64)addr + data.size()) - m_ram_data.size();
		if (!partial) {
			return std::make_pair(0, Mmu::Err::MemoryOverflow);
		}

		err = Mmu::Err::MemoryOverflow;
	}

	for (i64 i = 0; i < bytes_to_read; ++i) {
		data[i] = m_ram_data[addr + i];
	}

	return std::make_pair(bytes_to_read, err);
}

std::pair<u64, Mmu::Err> Mmu::write(u32 addr, std::span<const u8> data, bool partial) {
	if (addr >= m_ram_data.size()) {
		return std::make_pair(0, Mmu::Err::InvalidAddress);
	}

	i64 bytes_to_write = data.size();
	auto err = Mmu::Err::None;

	// If memory overflow and partial access flag is true,
	// write other bytes on valid addresses
	if (addr + data.size() >= m_ram_data.size()) {
		bytes_to_write = ((i64)addr + data.size()) - m_ram_data.size();
		if (!partial) {
			return std::make_pair(0, Mmu::Err::MemoryOverflow);
		}

		err = Mmu::Err::MemoryOverflow;
	}

	for (i64 i = 0; i < bytes_to_write; ++i) {
		m_ram_data[addr + i] = data[i];
	}

	return std::make_pair(bytes_to_write, err);
}

Mmu::Err Mmu::read8(u32 addr, u8& byte) const {
	auto data = std::span<u8>(std::addressof(byte), 1);
	return read(addr, data).second;
}

Mmu::Err Mmu::write8(u32 addr, u8 byte) {
	auto data = std::span<const u8>(std::addressof(byte), 1);
	return write(addr, data).second;
}

Mmu::Err Mmu::read_be16(u32 addr, u16& word) const {
	std::array<u8, 2> data {};

	auto err = read(addr, data, false);
	if (err.first == 2) {
		word = data[0] << 8;
		word |= data[1];
	}

	return err.second;
}

Mmu::Err Mmu::read_be32(u32 addr, u32& dword) const {
	std::array<u8, 4> data {};

	auto err = read(addr, data, false);
	if (err.first == 4) {
		dword = data[0] << 24;
		dword |= data[1] << 16;
		dword |= data[2] << 8;
		dword |= data[3] << 0;
	}

	return err.second;
}

Mmu::Err Mmu::write_be16(u32 addr, u16 word) {
	std::array<u8, 2> data {};
	data[0] = (word & 0xff00) >> 8;
	data[1] = (word & 0x00ff) >> 0;

	return write(addr, data, false).second;
}

Mmu::Err Mmu::write_be32(u32 addr, u32 dword) {
	std::array<u8, 4> data {};
	data[0] = (dword & 0xff00'0000) >> 24;
	data[1] = (dword & 0x00ff'0000) >> 16;
	data[2] = (dword & 0x0000'ff00) >> 8;
	data[3] = (dword & 0x0000'00ff) >> 0;

	return write(addr, data, false).second;
}
