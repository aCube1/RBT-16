#include "Engine.hpp"
#include "log.hpp"
#include "utils.hpp"

#include <cstdlib>

int main(int argc, char *argv[]) {
	RBT_UNUSED(argc);
	RBT_UNUSED(argv);

	if (!rbt::Engine::init()) {
		rbt::log::fatal("[RBT] | Core > Failed to initialize Engine");
		return EXIT_FAILURE;
	}

	auto& engine = rbt::Engine::get();
	auto& mem = engine.memory_bus;

	mem.write32(0x000032, 0xff52ff42);
	rbt::log::debug("{:#x}", mem.read8(0x000032).value());
	rbt::log::debug("{:#x}", mem.read16(0x000032).value());
	rbt::log::debug("{:#x}", mem.read32(0x000032).value());

	rbt::Engine::terminate();
	return EXIT_SUCCESS;
}
