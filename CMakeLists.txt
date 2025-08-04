cmake_minimum_required(VERSION 3.24)
project(
	rbt
	VERSION 0.1.0
	LANGUAGES C CXX
)

option(WARNINGS_AS_ERRORS "Treat compiler warnings as errors." ON)
option(ENABLE_SANITIZERS "" ON)
option(BUILD_TESTS "Build unit tests" OFF)

include("cmake/base.cmake")
include("cmake/warnings.cmake")

include(CTest)
enable_testing()

set(RBT_LIBCORE ${PROJECT_NAME}-core)

add_library(${RBT_LIBCORE} STATIC)
set_default_warnings(${RBT_LIBCORE})
enable_tools(${RBT_LIBCORE})

# Enable code sanitizers
if(ASAN_SANITIZER_FLAGS)
	target_compile_options(${RBT_LIBCORE} PRIVATE ${ASAN_SANITIZER_FLAGS})
endif()

target_compile_features(
	${RBT_LIBCORE}
	PRIVATE
		cxx_std_20
)

target_sources(
	${RBT_LIBCORE}
	PRIVATE
		"src/core/Mmu.cpp"
		"src/core/EffectiveAddress.cpp"
		"src/utils/log.cpp"
)

target_include_directories(
	${RBT_LIBCORE}
	PUBLIC
		"${CMAKE_SOURCE_DIR}/include"
)

if(BUILD_TESTS)
	add_subdirectory("${CMAKE_SOURCE_DIR}/tests")
endif()
