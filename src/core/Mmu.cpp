#include "core/Mmu.hpp"

#include <algorithm>
#include <utility>

using namespace rbt;

Mmu::Mmu(i32 slots) {
	assert(slots > 0 && slots <= Mmu::MAX_SLOTS);

	m_active_slots = slots;
	m_ram_data.resize(slots * Mmu::RAM_SLOT_SIZE);
}

std::expected<std::span<const u8>, Mmu::Err> Mmu::read(
	u32 addr, usize count, bool partial
) const noexcept {
	if (addr >= m_ram_data.size()) {
		return std::unexpected(Mmu::Err::InvalidAddress);
	}

	usize bytes_to_read = count;

	// If memory overflow and partial access flags is true,
	// read other bytes in valid addresses
	if (addr + count >= m_ram_data.size()) {
		bytes_to_read = (addr + count) - m_ram_data.size();

		if (!partial) {
			return std::unexpected(Mmu::Err::MemoryOverflow);
		}
	}

	return std::span(m_ram_data.cbegin() + addr, bytes_to_read);
}

std::expected<u64, Mmu::Err> Mmu::write(
	u32 addr, std::span<const u8> data, bool partial
) noexcept {
	if (addr >= m_ram_data.size()) {
		return std::unexpected(Mmu::Err::InvalidAddress);
	}

	usize bytes_to_write = data.size();

	// If memory overflow and partial access flag is true,
	// write other bytes on valid addresses
	if (addr + data.size() >= m_ram_data.size()) {
		bytes_to_write = ((i64)addr + data.size()) - m_ram_data.size();

		if (!partial) {
			return std::unexpected(Mmu::Err::MemoryOverflow);
		}
	}

	std::copy_n(data.cbegin(), bytes_to_write, m_ram_data.begin() + addr);
	return bytes_to_write;
}

std::expected<u8, Mmu::Err> Mmu::read8(u32 addr) const {
	auto data = read(addr, 1);
	if (!data) {
		return std::unexpected(data.error());
	}

	return (*data)[0];
}

std::expected<void, Mmu::Err> Mmu::write8(u32 addr, u8 byte) {
	auto data = std::span<const u8>(std::addressof(byte), 1);
	auto res = write(addr, data);

	if (!res) {
		return std::unexpected(res.error());
	}

	return {};
}

std::expected<u16, Mmu::Err> Mmu::read_be16(u32 addr) const {
	auto data = read(addr, 2);
	if (!data) {
		return std::unexpected(data.error());
	}

	u16 word = 0;
	word |= (*data)[0] << 8;
	word |= (*data)[1] << 0;

	return word;
}

std::expected<void, Mmu::Err> Mmu::write_be16(u32 addr, u16 word) {
	std::array<u8, 2> data {};
	data[0] = (word & 0xff00) >> 8;
	data[1] = (word & 0x00ff) >> 0;

	auto res = write(addr, data);
	if (!res) {
		return std::unexpected(res.error());
	}

	return {};
}

std::expected<u32, Mmu::Err> Mmu::read_be32(u32 addr) const {
	auto data = read(addr, 4);
	if (!data) {
		return std::unexpected(data.error());
	}

	u32 word = 0;
	word |= (*data)[0] << 24;
	word |= (*data)[1] << 16;
	word |= (*data)[2] << 8;
	word |= (*data)[3] << 0;

	return word;
}

std::expected<void, Mmu::Err> Mmu::write_be32(u32 addr, u32 dword) {
	std::array<u8, 4> data {};
	data[0] = (dword & 0xff00'0000) >> 24;
	data[1] = (dword & 0x00ff'0000) >> 16;
	data[2] = (dword & 0x0000'ff00) >> 8;
	data[3] = (dword & 0x0000'00ff) >> 0;

	auto res = write(addr, data);
	if (!res) {
		return std::unexpected(res.error());
	}

	return {};
}

std::expected<u32, Mmu::Err> Mmu::load(u32 addr, OperandSize size) const {
	if (size == OperandSize::None) {
		return std::unexpected(Err::InvalidOperandSize);
	}

	switch (size) {
	case OperandSize::Byte:
	case OperandSize::Word: {
		auto data = read_be16(addr);
		if (!data) {
			return std::unexpected(data.error());
		}

		return size == OperandSize::Word ? (*data) : ((*data) & 0x00ff);
	}
	case OperandSize::Long: {
		auto data = read_be32(addr);
		if (!data) {
			return std::unexpected(data.error());
		}

		return (*data);
	}
	default:
		std::unreachable();
	}
}

std::expected<void, Mmu::Err> Mmu::store(u32 addr, OperandSize size, u32 data) {
	if (size == OperandSize::None) {
		return std::unexpected(Err::InvalidOperandSize);
	}

	switch (size) {
	case OperandSize::Byte:
		data &= 0x0000'00ff;
	case OperandSize::Word:
		if (auto res = write_be16(addr, data); !res) {
			return std::unexpected(res.error());
		}

		break;
	case OperandSize::Long:
		if (auto res = write_be32(addr, data); !res) {
			return std::unexpected(res.error());
		}

		break;
	default:
		std::unreachable();
	}

	return {};
}
