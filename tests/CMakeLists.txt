enable_testing()

find_package(Python3 REQUIRED COMPONENTS Interpreter)

set(SST_INPUT_DIR "${CMAKE_SOURCE_DIR}/tests/SingleStepTests/v1/"
	CACHE PATH "Directory with .json.bin files")
set(SST_GEN_DIR "${CMAKE_BINARY_DIR}/generated/sst"
	CACHE PATH "Generated SST root dir")
set(SST_OUTPUT_DIR "${SST_GEN_DIR}/output"
	CACHE PATH "Generated SST opcode headers dir")
set(SST_ALL_FILE "${SST_GEN_DIR}/sst_all.h"
	CACHE FILEPATH "Generate forwarded SST header")
set(SST_MAX_TESTS ""
	CACHE STRING "Optional --max-tests for decode.py (empty=all)")

file(GLOB SST_INPUT_FILES CONFIGURE_DEPENDS "${SST_INPUT_DIR}/*.json.bin")

set(_sst_stamp "${SST_GEN_DIR}/.stamp")
set(_sst_decode_py "${CMAKE_SOURCE_DIR}/tests/scripts/decode.py")
set(_sst_generate_all_py "${CMAKE_SOURCE_DIR}/tests/scripts/generate_all.py")

set(_sst_decode_cmd
	${Python3_EXECUTABLE} ${_sst_decode_py} -o ${SST_OUTPUT_DIR} ${SST_INPUT_DIR})

if(NOT SST_MAX_TESTS STREQUAL "")
	list(APPEND _sst_cmd --max-tests ${SST_MAX_TESTS})
endif()

add_custom_command(
	OUTPUT "${_sst_stamp}"
	COMMAND ${CMAKE_COMMAND} -E make_directory "${SST_OUTPUT_DIR}"
	COMMAND ${_sst_decode_cmd}
	COMMAND	${Python3_EXECUTABLE}
		${_sst_generate_all_py} -o ${SST_ALL_FILE} ${SST_OUTPUT_DIR}
	COMMAND ${CMAKE_COMMAND} -E touch "${_sst_stamp}"
	DEPENDS
		"${_sst_decode_py}"
		"${_sst_generate_all_py}"
		"${SST_INPUT_DIR}"
	COMMENT "Generating SST headers into ${SST_OUTPUT_DIR} + sst_all.h"
	VERBATIM
)
add_custom_target(generate_sst DEPENDS "${_sst_stamp}")

include(FetchContent)
FetchContent_Declare(
	unity
	GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
	GIT_TAG        v2.6.1
)
FetchContent_MakeAvailable(unity)

include("../cmake/base.cmake")
include("../cmake/warnings.cmake")

function(add_test_executable test)
	cmake_parse_arguments(
		PARSE_ARGV 1 TEST
		""
		""
		"SOURCES;INCLUDE_DIRS"
	)

	if(NOT TEST_SOURCES OR TEST_SOURCES STREQUAL "")
		message(WARNING "Not sources for test target ${test}")
	endif()

	add_executable(${test})
	set_default_warnings(${test})
	enable_tools(${test})

	target_compile_features(${test} PRIVATE c_std_23)

	if(TEST_INCLUDE_DIRS)
		target_include_directories(${test} PRIVATE ${TEST_INCLUDE_DIRS})
	endif()
	target_include_directories(${test} PRIVATE "../src")

	target_sources(${test} PRIVATE ${TEST_SOURCES})

	# Enable code sanitizers
	if(ENABLE_SANITIZERS)
		target_compile_options(${test} PRIVATE ${ASAN_SANITIZER_FLAGS})
		target_link_options(${test} PRIVATE ${ASAN_SANITIZER_FLAGS})
	endif()

	target_link_libraries(
		${test}
		PRIVATE
			rbt-core
			unity::framework
	)

	add_test(RBT_TESTING ${test})
endfunction()

add_test_executable(
	test_ea
	SOURCES
		"src/cpu/test_ea.c"
)

add_test_executable(
	test_bus
	SOURCES
		"src/cpu/test_bus.c"
)

add_test_executable(
	test_decode
	SOURCES
		"src/cpu/test_decode.c"
)

add_test_executable(
	test_opcodes
	SOURCES
		"src/cpu/test_opcodes.c"
	INCLUDE_DIRS
		"src/"
)

add_test_executable(
	test_execution
	SOURCES
		"src/cpu/test_execution.c"
	INCLUDE_DIRS
		"src/"
		"${SST_OUTPUT_DIR}"
)
add_dependencies(test_execution generate_sst)
