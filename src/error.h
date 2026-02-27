#pragma once

#include "rbt/basic_types.h"
#include "rbt/error_codes.h"

#include <stdio.h>
#include <time.h>

#define RBT_ERR_STACK_MAX 64

#define rbt_push_info(...)                                                     \
	rbt_err_push(                                                              \
		RBT_SEVERITY_INFO, RBT_ERR_SUCCESS, __func__, __FILE_NAME__, __LINE__, \
		__VA_ARGS__                                                            \
	)
#define rbt_push_warn(...)                                                     \
	rbt_err_push(                                                              \
		RBT_SEVERITY_WARN, RBT_ERR_SUCCESS, __func__, __FILE_NAME__, __LINE__, \
		__VA_ARGS__                                                            \
	)
#define rbt_push_error(code, ...) \
	rbt_err_push(RBT_SEVERITY_ERROR, code, __func__, __FILE_NAME__, __LINE__, __VA_ARGS__)
#define rbt_push_fatal(code, ...) \
	rbt_err_push(RBT_SEVERITY_FATAL, code, __func__, __FILE_NAME__, __LINE__, __VA_ARGS__)

void rbt_err_push(
	RBT_ErrorSeverity severity,
	RBT_ErrorCode code,
	const char *func,
	const char *file,
	u32 line,
	const char *fmt,
	...
);
