#include "emu/MMU.hpp"
#include "types.hpp"
#include "utils/log.hpp"

int main(int argc, char *argv[]) {
	_UNUSED(argc);
	_UNUSED(argv);

	emu::MMU mmu { 1 };
	mmu.write_be_word(0x1000, 0x2042);

	std::array<u8, 2> data { 0x64, 0x69 };
	auto res = mmu.write(0x1002, data);
	log::debug("{}", res.first);

	u16 word;
	mmu.read_be_word(0x1000, word);
	log::debug("{:#x}", word);

	res = mmu.read(0x1000, data);
	log::debug("{} | {:#x} {:#x}", res.first, data[0], data[1]);

	res = mmu.read(0x1002, data);
	log::debug("{} | {:#x} {:#x}", res.first, data[0], data[1]);
}
