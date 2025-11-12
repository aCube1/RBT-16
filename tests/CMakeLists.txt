enable_testing()

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

	if(INCLUDE_DIRS)
		target_include_directories(${test} PRIVATE ${INCLUDE_DIRS})
	endif()
	target_sources(${test} PRIVATE ${TEST_SOURCES})

	target_link_libraries(
		${test}
		PRIVATE
			rbt-core
			unity::framework
	)

	add_test(RBT_TESTING ${test})
endfunction()

add_test_executable(
	effective_address
	SOURCES
		"src/cpu/effective_address.c"
)

add_test_executable(
	test_mmu
	SOURCES
		"src/cpu/test_mmu.c"
)
