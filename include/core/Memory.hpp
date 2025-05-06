#ifndef _RBT_CORE_MEMORY_HPP
#define _RBT_CORE_MEMORY_HPP

#include "types.hpp"

#include <array>
#include <expected>

namespace rbt::core {

enum class AddressError : u8 {
	None = 0,
	Invalid,
	Misaligned,
};

// NOTE:To match the Motorola 68000, the read/write of multi-byte
// uses the Big-Endian order; Write Most Significant byte  first:
//	Big Endian: 0x5402 -> 54 02
//	Lil Endian: 0x5402 -> 02 54

class Memory {
public:
	static constexpr u32 MAX_SIZE = 4 * 1024 * 1024; // Max Size: 4MB

	Memory() = default;

	AddressError write8(u32 addr, u8 byte);
	AddressError write16(u32 addr, u16 word);
	AddressError write32(u32 addr, u32 dword);

	auto read8(u32 addr) const -> std::expected<u8, AddressError>;
	auto read16(u32 addr) const -> std::expected<u16, AddressError>;
	auto read32(u32 addr) const -> std::expected<u32, AddressError>;

private:
	std::array<u8, MAX_SIZE> m_data;
};

} // namespace rbt::core

#endif
