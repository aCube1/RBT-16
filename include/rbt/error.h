#pragma once

#include "rbt/basic_types.h"

#include <stdio.h>
#include <time.h>

#define RBT_ERR_STACK_MAX	64
#define RBT_ERR_MESSAGE_MAX 256

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

typedef enum RBT_ErrorSeverity {
	RBT_SEVERITY_INFO,
	RBT_SEVERITY_WARN,
	RBT_SEVERITY_ERROR,
	RBT_SEVERITY_FATAL,
} RBT_ErrorSeverity;

typedef enum RBT_ErrorCode {
	// Generic errors (0x00-0x0f)
	RBT_ERR_SUCCESS = 0,
	RBT_ERR_INVALID_ARGS = 0x01,

	// Decoding errors (0x10-0x1f)
	RBT_ERR_DECODE_ILLEGAL = 0x10,
	RBT_ERR_DECODE_INVALID_EA = 0x11,
	RBT_ERR_DECODE_ILLEGAL_EA = 0x12,

	// CPU errors (0x20-0x3f)

	// Memory errors (0x40-0x5f)
	RBT_ERR_MEM_BUS_ERROR = 0x40,
	RBT_ERR_MEM_UNALIGNED = 0x41,
	RBT_ERR_MEM_UNMAPPED_MMIO = 0x42,

	// System/Platform errors (0xf0-0xff)
	RBT_ERR_SYS_OUT_OF_MEMORY = 0xf0,
	RBT_ERR_SYS_IO = 0xf1,
} RBT_ErrorCode;

typedef struct RBT_ErrorEntry {
	RBT_ErrorSeverity severity;
	RBT_ErrorCode code;
	const char *func;
	const char *file;
	u32 line;
	time_t timestamp;
	char msg[RBT_ERR_MESSAGE_MAX];
} RBT_ErrorEntry;

void rbt_err_push(
	RBT_ErrorSeverity severity,
	RBT_ErrorCode code,
	const char *func,
	const char *file,
	u32 line,
	const char *fmt,
	...
);
void rbt_err_flush(void);

void rbt_set_err_stream(FILE *stream);
const RBT_ErrorEntry *rbt_query_last_error(void);
