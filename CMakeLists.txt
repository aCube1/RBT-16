cmake_minimum_required(VERSION 3.21)
project(
	rbt16
	VERSION 0.1.0
	LANGUAGES CXX
)

include("cmake/base.cmake")
include("cmake/libraries.cmake")
include("cmake/warnings.cmake")

add_executable(${PROJECT_NAME})

target_compile_features(
	${PROJECT_NAME} PRIVATE
		cxx_std_23
)

target_sources(
	${PROJECT_NAME} PRIVATE
		"src/log.cpp"
		"src/main.cpp"
)

target_include_directories(
	${PROJECT_NAME} PRIVATE
		${CMAKE_SOURCE_DIR}/include
)

target_compile_definitions(
	${PROJECT_NAME} PRIVATE
		$<$<CXX_COMPILER_ID:GNU>:RBT_COMPILER_GCC>
		$<$<CXX_COMPILER_ID:Clang>:RBT_COMPILER_CLANG>
)

setup_libraries(${PROJECT_NAME})
set_default_warnings(${PROJECT_NAME})

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
	# Enable CCACHE.
	find_program(CCACHE_PROGRAM ccache)
	if(CCACHE_PROGRAM)
		message(STATUS "CCache found!")

		set_target_properties(
			${PROJECT_NAME}
			PROPERTIES
				CMAKE_C_COMPILER_LAUNCHER "${CCACHE_PROGRAM}"
				CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}"
		)
	endif()

	# Use address sanitizer flags.
	message(STATUS "Enabling sanitizers...")
	set(SANITIZER_FLAGS -fno-omit-frame-pointer)
	if (APPLE)
		set(SANITIZER_FLAGS ${SANITIZER_FLAGS} -fsanitize=address,undefined)
	else()
		set(SANITIZER_FLAGS ${SANITIZER_FLAGS} -fsanitize=address,undefined,leak)
	endif()
	target_compile_options(${PROJECT_NAME} PRIVATE "${SANITIZER_FLAGS}")
	target_link_options(${PROJECT_NAME} PRIVATE "${SANITIZER_FLAGS}")
endif()
