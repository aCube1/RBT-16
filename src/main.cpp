#include "core/Memory.hpp"
#include "log.hpp"
#include "utils.hpp"

#include <cstdlib>

int main(int argc, char *argv[]) {
	RBT_UNUSED(argc);
	RBT_UNUSED(argv);

	rbt::core::Memory mem {};

	mem.write32(0x000032, 0xff52ff42);
	rbt::log::debug("{:#x}", mem.read8(0x000032).value());
	rbt::log::debug("{:#x}", mem.read16(0x000032).value());
	rbt::log::debug("{:#x}", mem.read32(0x000032).value());

	return EXIT_SUCCESS;
}
