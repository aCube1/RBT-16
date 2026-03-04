#pragma once

#include "rbt/basic_types.h"
#include "rbt/error_codes.h"

enum {
	RBT_ERR_STACK_MAX = 64,
};

#define _push_info(...)                                                        \
	_err_push(                                                                 \
		RBT_SEVERITY_INFO, RBT_ERR_SUCCESS, __func__, __FILE_NAME__, __LINE__, \
		__VA_ARGS__                                                            \
	)
#define _push_warn(...)                                                        \
	_err_push(                                                                 \
		RBT_SEVERITY_WARN, RBT_ERR_SUCCESS, __func__, __FILE_NAME__, __LINE__, \
		__VA_ARGS__                                                            \
	)
#define _push_error(code, ...)                                                          \
	_err_push(RBT_SEVERITY_ERROR, code, __func__, __FILE_NAME__, __LINE__, __VA_ARGS__)
#define _push_fatal(code, ...)                                                          \
	_err_push(RBT_SEVERITY_FATAL, code, __func__, __FILE_NAME__, __LINE__, __VA_ARGS__)

void _err_push(
	RBT_ErrorSeverity severity,
	RBT_ErrorCode code,
	const char *func,
	const char *file,
	u32 line,
	const char *fmt,
	...
);
