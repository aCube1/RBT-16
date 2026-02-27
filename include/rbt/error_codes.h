#pragma once

#include "basic_types.h"

#include <stdio.h>
#include <time.h>
#define RBT_ERR_MESSAGE_MAX 256

typedef enum RBT_ErrorCode {
	// Generic errors (0x00-0x0f)
	RBT_ERR_SUCCESS = 0,
	RBT_ERR_INVALID_ARGS = 0x01,
	RBT_ERR_INIT_FAILED = 0x02,

	// Decoding errors (0x10-0x1f)
	RBT_ERR_DECODE_ILLEGAL = 0x10,
	RBT_ERR_DECODE_INVALID_EA = 0x11,
	RBT_ERR_DECODE_ILLEGAL_EA = 0x12,

	// CPU errors (0x20-0x3f)

	// Memory errors (0x40-0x5f)
	RBT_ERR_MEM_BUS_ERROR = 0x40,
	RBT_ERR_MEM_UNALIGNED = 0x41,
	RBT_ERR_MEM_UNMAPPED = 0x42,
	RBT_ERR_MEM_READONLY = 0x43,

	// System/Platform errors (0xf0-0xff)
	RBT_ERR_SYS_OUT_OF_MEMORY = 0xf0,
	RBT_ERR_SYS_IO = 0xf1,
} RBT_ErrorCode;

typedef enum RBT_ErrorSeverity {
	RBT_SEVERITY_INFO,
	RBT_SEVERITY_WARN,
	RBT_SEVERITY_ERROR,
	RBT_SEVERITY_FATAL,
} RBT_ErrorSeverity;

typedef struct RBT_ErrorEntry {
	RBT_ErrorSeverity severity;
	RBT_ErrorCode code;
	const char *func;
	const char *file;
	u32 line;
	time_t timestamp;
	char msg[RBT_ERR_MESSAGE_MAX];
} RBT_ErrorEntry;

void rbt_err_flush(void);

const RBT_ErrorEntry *rbt_query_last_error(void);

void rbt_set_err_min_severity(RBT_ErrorSeverity min_level);
void rbt_set_err_stream(FILE *stream);
