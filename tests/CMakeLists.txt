project(
	tests
	LANGUAGES C CXX
)

find_package(Catch2 3 REQUIRED)

include(Catch)

add_executable(${PROJECT_NAME})
set_default_warnings(${PROJECT_NAME})

if(ASAN_SANITIZER_FLAGS)
	target_compile_options(${PROJECT_NAME} PRIVATE ${ASAN_SANITIZER_FLAGS})
	target_link_options(${PROJECT_NAME} PRIVATE ${ASAN_SANITIZER_FLAGS})
endif()

target_compile_features(
	${PROJECT_NAME}
	PRIVATE
		cxx_std_23
)

target_sources(
	${PROJECT_NAME}
	PRIVATE
		"src/effective_address.cpp"
)

target_link_libraries(
	${PROJECT_NAME}
	PRIVATE
		Catch2::Catch2WithMain
		rbt-core
)

catch_discover_tests(${PROJECT_NAME})
