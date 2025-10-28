#pragma once

#include "rbt/basic_types.h"

#if !defined(__FILE_NAME__)
#	define __FILE_NAME__ "<unknown>"
#endif

#define log_debug(...) log_message(LOG_DEBUG, __FILE_NAME__, __LINE__, __VA_ARGS__)
#define log_info(...)  log_message(LOG_INFO, __FILE_NAME__, __LINE__, __VA_ARGS__)
#define log_warn(...)  log_message(LOG_WARN, __FILE_NAME__, __LINE__, __VA_ARGS__)
#define log_error(...) log_message(LOG_ERROR, __FILE_NAME__, __LINE__, __VA_ARGS__)
#define log_fatal(...) log_message(LOG_FATAL, __FILE_NAME__, __LINE__, __VA_ARGS__)

enum {
	LOG_DEBUG = 0,
	LOG_INFO,
	LOG_WARN,
	LOG_ERROR,
	LOG_FATAL,
};

void log_message(int level, const char *file, i32 line, const char *msg, ...);
