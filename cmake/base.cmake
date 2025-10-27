include_guard()

# Generate compile_commands.json for tooling that uses it.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set CMAKE modules path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/modules")

# Set output directory layout.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Ensure a CMAKE_BUILD_TYPE is set.
if(NOT CMAKE_BUILD_TYPE)
	message(STATUS "No build type specified. Defaulting to Debug.")
	set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type." FORCE)
endif()

# Create a list of valid CMAKE_BUILD_TYPES for cmake-gui and ccmake.
set_property(
	CACHE
		CMAKE_BUILD_TYPE
	PROPERTY
		STRINGS
			"Debug"
			"Release"
			"RelWithDebInfo"
			"MinSizeRel"
)

if(ENABLE_SANITIZERS AND (CMAKE_BUILD_TYPE STREQUAL "Debug"))
	set(_SANITIZER_FLAGS -fno-omit-frame-pointer)

	if (APPLE)
		list(APPEND ${_SANITIZER_FLAGS} -fsanitize=address,undefined)
	else()
		list(APPEND ${_SANITIZER_FLAGS} -fsanitize=address,undefined,leak)
	endif()

	set(
		ASAN_SANITIZER_FLAGS ${_SANITIZER_FLAGS}
		CACHE INTERNAL "Common sanitizer flags"
	)
endif()

function(enable_tools target)
	# Enable CCACHE.
	find_program(CCACHE_PROGRAM ccache)
	if(CCACHE_PROGRAM)
		message(STATUS "CCache found!")

		set_target_properties(
			${target}
			PROPERTIES
				CMAKE_C_COMPILER_LAUNCHER "${CCACHE_PROGRAM}"
				CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}"
		)
	endif()
endfunction()
