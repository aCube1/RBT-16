#ifndef _RBT_UTILS_HPP
#define _RBT_UTILS_HPP

#include <type_traits>

#if defined(WIN32) || defined(_WIN32)
#	define RBT_PLATFORM_WINDOWS 1
#elif defined(__APPLE__)
#	include <TargetConditionals.h>
#	if defined(PLATFORM_OS_MAC)
#		define RBT_PLATFORM_MACOS 1
#	endif
#elif defined(__linux__) || defined(__unix__)
#	define RBT_PLATFORM_LINUX 1
#endif

#if !defined(RBT_PLATFORM_WINDOWS) && !defined(RBT_PLATFORM_LINUX) \
	&& !defined(RBT_PLATFORM_MACOS)
#	error Could not detect target platform
#endif

#define RBT_UNUSED(x) ((void)x)

namespace rbt {

template <typename T>
concept AsNumeric = std::is_arithmetic_v<T>;

}

#endif
