#include "core/Memory.hpp"

#include "log.hpp"

using namespace rbt::core;

static AddressError _is_valid_address(u32 addr, usize count) {
	if ((addr & 0x01) != 0x00) {
		rbt::log::error("[RBT] | RAM > Address {:#x} is misaligned; Is not even", addr);
		return AddressError::Misaligned;
	}

	if (addr + count >= Memory::MAX_SIZE) {
		rbt::log::error(
			"[RBT] | RAM > Invalid address range: {:#x}:{:#x}", addr, addr + (count - 1)
		);
		return AddressError::Invalid;
	}

	return AddressError::None;
}

AddressError Memory::write8(u32 addr, u8 byte) {
	if (addr >= MAX_SIZE) {
		rbt::log::error("[RBT] | RAM > Invalid address: {:#x}", addr);
		return AddressError::Invalid;
	}

	m_data[addr] = byte;

	return AddressError::None;
}

AddressError Memory::write16(u32 addr, u16 word) {
	AddressError err = _is_valid_address(addr, 2);
	if (err != AddressError::None) {
		return err;
	}

	m_data[addr + 0] = (word & 0xff00) >> 8;
	m_data[addr + 1] = (word & 0x00ff);

	return AddressError::None;
}

AddressError Memory::write32(u32 addr, u32 dword) {
	AddressError err = _is_valid_address(addr, 4);
	if (err != AddressError::None) {
		return err;
	}

	m_data[addr + 0] = (dword & 0xff000000) >> 24;
	m_data[addr + 1] = (dword & 0x00ff0000) >> 16;
	m_data[addr + 2] = (dword & 0x0000ff00) >> 8;
	m_data[addr + 3] = (dword & 0x000000ff);

	return AddressError::None;
}

auto Memory::read8(u32 addr) const -> std::expected<u8, AddressError> {
	if (addr >= MAX_SIZE) {
		rbt::log::error("[RBT] | RAM > Invalid address: {:#x}", addr);
		return std::unexpected(AddressError::Invalid);
	}

	return m_data[addr];
}

auto Memory::read16(u32 addr) const -> std::expected<u16, AddressError> {
	AddressError err = _is_valid_address(addr, 2);
	if (err != AddressError::None) {
		return std::unexpected(err);
	}

	u16 word = 0;
	word |= m_data[addr + 0] << 8;
	word |= m_data[addr + 1];

	return word;
}

auto Memory::read32(u32 addr) const -> std::expected<u32, AddressError> {
	AddressError err = _is_valid_address(addr, 4);
	if (err != AddressError::None) {
		return std::unexpected(err);
	}

	u32 dword = 0;
	dword |= m_data[addr + 0] << 24;
	dword |= m_data[addr + 1] << 16;
	dword |= m_data[addr + 2] << 8;
	dword |= m_data[addr + 3];

	return dword;
}
