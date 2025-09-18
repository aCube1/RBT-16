#ifndef _RBT_CORE_MMU_HPP
#define _RBT_CORE_MMU_HPP

#include "core/common.hpp"
#include "types.hpp"

#include <expected>
#include <span>
#include <vector>

namespace rbt {

class Mmu {
public:
	static constexpr auto RAM_SLOT_SIZE = 512 * 1024;
	static constexpr auto MAX_SLOTS = 8;

	enum class Err : u8 {
		None = 0,
		InvalidAddress,
		MemoryOverflow,
		InvalidOperandSize,
	};

	Mmu(i32 slots);

	/**
	 * @brief Read range of bytes, returns a possible error and how many bytes
	 * were read.
	 *
	 * @param addr Address to begin reading
	 * @param count How many bytes to read
	 * @param partial If true, partial readings are allowed, even if the
	 * memory overflows, the read bytes will be written to the data slice
	 *
	 * @return Span view of memory region or an error if failed to read memory
	 */
	std::expected<std::span<const u8>, Err> read(
		u32 addr, usize count, bool partial = false
	) const noexcept;

	/**
	 * @brief Write range of bytes to the memory, returns a possible error and
	 * how many bytes were written.
	 *
	 * @param addr Address to begin writing
	 * @param data Memory to be written
	 * @param partial If true, partial writes are allowed, even if the
	 * memory overflows, the bytes will be written into the valid addresses
	 *
	 * @return How many bytes were written or an error if couldn't write on memory
	 */
	std::expected<usize, Err> write(
		u32 addr, std::span<const u8> data, bool partial = false
	) noexcept;

	std::expected<u8, Err> read8(u32 addr) const;
	std::expected<void, Err> write8(u32 addr, u8 byte);

	std::expected<u16, Err> read_be16(u32 addr) const;
	std::expected<void, Err> write_be16(u32 addr, u16 word);

	std::expected<u32, Err> read_be32(u32 addr) const;
	std::expected<void, Err> write_be32(u32 addr, u32 dword);

	std::expected<u32, Err> load(u32 addr, OperandSize size) const;
	std::expected<void, Err> store(u32 addr, OperandSize size, u32 data);

private:
	i32 m_active_slots;
	std::vector<u8> m_ram_data;
};

} // namespace rbt

#endif
