#ifndef _RBT_LOG_HPP
#define _RBT_LOG_HPP

#include "types.hpp"

#include <format>
#include <source_location>
#include <string_view>

// NOTE: It's probably better to use spdlog instead of manually
// creating the logging system
namespace rbt::log {

enum Level : u8 {
	Debug,
	Info,
	Warn,
	Error,
	Fatal,
};

struct FormatWithLocation {
	std::string_view fmt;
	const char *file;
	u32 line;

	template <typename String>
	FormatWithLocation(
		const String& fmt,
		const std::source_location& loc = std::source_location::current()
	)
		: fmt { fmt }, file { loc.file_name() }, line { loc.line() } { }
};

template <typename... Args>
inline void debug(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Debug, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
inline void info(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Info, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
inline void warn(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Warn, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
inline void error(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Error, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
[[noreturn]] inline void fatal(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Fatal, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
	std::abort();
}

void send_message(
	Level level,
	std::string_view file,
	u32 line,
	std::string_view fmt,
	std::format_args args
);

void slog_callback(
	const char *tag,
	u32 level,
	u32 item,
	const char *msg,
	u32 line,
	const char *file,
	void *usrptr
);

} // namespace rbt::log

#endif
