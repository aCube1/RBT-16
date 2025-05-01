#include "log.hpp"

#include "utils.hpp"

#include <chrono>
#include <format>
#include <iostream>

using namespace rbt;

void log::send_message(
	Level level,
	std::string_view file,
	u32 line,
	std::string_view fmt,
	std::format_args args
) {
	// Maybe unused if debug is disabled
	RBT_UNUSED(file);
	RBT_UNUSED(line);

	// Color table: https://en.wikipedia.org/wiki/ansi_escape_code
	static const char *_log_color[] = {
		"\x1b[32m", "\x1b[36m", "\x1b[33m", "\x1b[31m", "\x1b[91m",
	};
	static const char *_log_name[] = { "DEBUG", "INFO", "WARN", "ERROR", "FATAL" };

	using system_clock = std::chrono::system_clock;
	auto now = system_clock::to_time_t(system_clock::now());
	std::tm *ltime = std::localtime(&now);

	// NOTE: This works, but I wish I could fit this with C++ style
	char time[16] = {};
	time[std::strftime(time, 15, "%H:%M:%S", ltime)] = '\0';

	std::string msg = std::vformat(fmt, args);
	std::string dbg;

#if !defined(NDEBUG)
	dbg = std::format(" \x1b[90m{}:{}\x1b[0m ", file, line);
#endif

	// Output:
	//    hh:mm:ss file:line [LEVEL] - message
	std::cerr << std::format(
		"{}{}{}[{}]\x1b[0m - {}\n", time, dbg, _log_color[level], _log_name[level], msg
	);
}

void log::slog_callback(
	const char *tag,
	u32 level,
	u32 item,
	const char *msg,
	u32 line,
	const char *file,
	void *usrptr
) {
	RBT_UNUSED(usrptr);

	log::Level loglevel;
	switch (level) {
	case 0:	 loglevel = log::Level::Fatal; break;
	case 1:	 loglevel = log::Level::Error; break;
	case 2:	 loglevel = log::Level::Warn; break;
	default: loglevel = log::Level::Info; break;
	}

	std::string fmt = std::format("[{}]({})", tag, item);

	if (msg) {
		fmt += std::format(" > {}", msg);
	}

	log::send_message(loglevel, file, line, fmt, std::make_format_args());

	if (loglevel == log::Level::Fatal) {
		std::abort();
	}
}
