#include "utils/log.hpp"

#include <chrono>
#include <format>
#include <iostream>

void log::send_message(
	Level level,
	[[maybe_unused]] std::string_view file,
	[[maybe_unused]] u32 line,
	std::string_view fmt,
	std::format_args args
) {
	// Color table: https://en.wikipedia.org/wiki/ansi_escape_code
	static constexpr std::string_view _log_color[] = {
		"\x1b[32m", "\x1b[36m", "\x1b[33m", "\x1b[31m", "\x1b[91m",
	};
	static constexpr std::string_view _log_name[] = {
		"DEBUG", "INFO", "WARN", "ERROR", "FATAL",
	};

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
		"{}{}{}[{}]\x1b[0m - {}\n", time, dbg, _log_color[(i32)level],
		_log_name[(i32)level], msg
	);
}
