include_guard()

set(_LIBS_DIR ${CMAKE_SOURCE_DIR}/ext)

function(setup_libraries target)
	target_include_directories(
		${target} PRIVATE
			"${_LIBS_DIR}"
	)

	set(SOL2_LUA_VERSION "5.4.4")
	set(SOL2_BUILD_LUA TRUE)
	option(SOL2_ENABLE_INSTALL "" OFF)
	add_subdirectory("${_LIBS_DIR}/sol2")

	target_link_libraries(
		${target} PRIVATE
			sol2::sol2
	)

	if(UNIX)
		target_link_libraries(${target} PRIVATE m ${CMAKE_DL_LIBS})
	endif()
endfunction()
