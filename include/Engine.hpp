#ifndef _RBT_ENGINE_HPP
#define _RBT_ENGINE_HPP

#include "core/MemoryBus.hpp"

namespace rbt {

class Engine final {
public:
	static bool init() noexcept;
	static void terminate();
	static Engine& get();

	Engine();

	Engine(const Engine&) = delete;
	Engine& operator=(const Engine&) = delete;

	core::MemoryBus memory_bus;
};

} // namespace rbt

#endif
