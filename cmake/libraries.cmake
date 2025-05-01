include_guard()

set(_LIBS_DIR ${CMAKE_SOURCE_DIR}/ext)

function(setup_libraries target)
	target_include_directories(
		${target} PRIVATE
			${_LIBS_DIR}
	)

	if(UNIX)
		target_link_libraries(${target} PRIVATE m ${CMAKE_DL_LIBS})
	endif()
endfunction()
