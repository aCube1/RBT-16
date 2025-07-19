#ifndef _RBT_UTILS_LOG_HPP
#define _RBT_UTILS_LOG_HPP

#include "types.hpp"

#include <cassert>
#include <format>
#include <source_location>
#include <string_view>

namespace log {

enum class Level : u8 {
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
	constexpr FormatWithLocation(
		const String& fmt,
		const std::source_location& loc = std::source_location::current()
	)
		: fmt { fmt }, file { loc.file_name() }, line { loc.line() } { }
};

template <typename... Args>
constexpr void debug(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Debug, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
constexpr void info(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Info, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
constexpr void warn(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Warn, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
constexpr void error(FormatWithLocation fmt, Args&&...args) {
	send_message(
		Level::Error, fmt.file, fmt.line, fmt.fmt, std::make_format_args(args...)
	);
}

template <typename... Args>
[[noreturn]] constexpr void fatal(FormatWithLocation fmt, Args&&...args) {
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

} // namespace log

#endif
