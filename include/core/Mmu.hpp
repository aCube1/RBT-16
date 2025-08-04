#ifndef _RBT_CORE_MMU_HPP
#define _RBT_CORE_MMU_HPP

#include "types.hpp"

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
	};

	Mmu(i32 slots);

	/**
	 * @brief Read range of bytes, returns a possible error and how many bytes
	 * were read.
	 *
	 * @param addr Address to begin reading
	 * @param data Slice of memory to write bytes to
	 * @param partial If true, partial readings are allowed, even if the
	 * memory overflows, the read bytes will be written to the data slice
	 *
	 * @return '.first' has the number of bytes read; '.second' has the error
	 * code if any occurs.
	 */
	std::pair<u64, Err> read(u32 addr, std::span<u8> data, bool partial = true) const;

	/**
	 * @brief Write range of bytes to the memory, returns a possible error and
	 * how many bytes were written.
	 *
	 * @param addr Address to begin writing
	 * @param data Slice of memory to read bytes from
	 * @param partial If true, partial writes are allowed, even if the
	 * memory overflows, the bytes will be written into the valid addresses
	 *
	 * @return '.first' has the number of bytes written; '.second' has the error
	 * code if any occurs.
	 */
	std::pair<u64, Err> write(u32 addr, std::span<const u8> data, bool partial = true);

	Err read8(u32 addr, u8& byte) const;
	Err write8(u32 addr, u8 byte);

	Err read_be16(u32 addr, u16& word) const;
	Err read_be32(u32 addr, u32& dword) const;
	Err write_be16(u32 addr, u16 word);
	Err write_be32(u32 addr, u32 dword);

private:
	i32 m_active_slots;
	std::vector<u8> m_ram_data;
};

} // namespace rbt

#endif
