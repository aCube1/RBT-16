#ifndef _RBT_CORE_COMMON_HPP
#define _RBT_CORE_COMMON_HPP

#include "types.hpp"

namespace rbt {

enum class OperandSize : u8 {
	None = 0b11,
	Byte = 0b00,
	Word = 0b01,
	Long = 0b10,
};

[[nodiscard]] constexpr u8 operand_width(OperandSize size) {
	switch (size) {
	case OperandSize::None:
		return 0;
	case OperandSize::Byte:
		return 1;
	case OperandSize::Word:
		return 2;
	case OperandSize::Long:
		return 4;
	}

	std::unreachable();
}

[[nodiscard]] constexpr u8 operand_word_count(OperandSize size) {
	switch (size) {
	case OperandSize::None:
		return 0;
	case OperandSize::Byte:
	case OperandSize::Word:
		return 1;
	case OperandSize::Long:
		return 2;
	}

	std::unreachable();
}

[[nodiscard]] constexpr i32 operand_sign_extend(OperandSize size, u32 data) {
	switch (size) {
	case OperandSize::Byte:
		return static_cast<i32>(static_cast<i8>(static_cast<u8>(data)));
	case OperandSize::Word:
		return static_cast<i32>(static_cast<i16>(static_cast<u16>(data)));
	case OperandSize::Long:
	case OperandSize::None:
		return static_cast<i32>(data);
	}

	std::unreachable();
}

} // namespace rbt

#endif
