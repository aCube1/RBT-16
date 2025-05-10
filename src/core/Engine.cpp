#include "Engine.hpp"

#include <cassert>

namespace rbt {

static Engine *s_engine = nullptr;

bool Engine::init() noexcept {
	assert(!s_engine);

	try {
		s_engine = new Engine;
	} catch (...) {
		return false;
	}

	return true;
}

void Engine::terminate() {
	if (!s_engine) {
		return;
	}

	delete s_engine;
}

Engine& Engine::get() {
	assert(s_engine);
	return *s_engine;
}

} // namespace rbt

using namespace rbt;

Engine::Engine() { }
