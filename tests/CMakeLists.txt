project(
	tests
	LANGUAGES C CXX
)

add_executable(${PROJECT_NAME})

target_compile_features(
	${PROJECT_NAME}
	PRIVATE
		cxx_std_20
)

target_sources(
	${PROJECT_NAME}
	PRIVATE
		"src/effective_address.cpp"

		"../src/emu/Mmu.cpp"
		"../src/emu/EffectiveAddress.cpp"
		"../src/utils/log.cpp"
)

target_include_directories(
	${PROJECT_NAME}
	PRIVATE
		"${CMAKE_SOURCE_DIR}/include"
)

find_package(Catch2 3 REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(${PROJECT_NAME})
