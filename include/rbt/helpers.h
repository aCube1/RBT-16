#pragma once

#include "rbt/basic_types.h"
#include "rbt/error.h"

#include <assert.h>

#define RBT_BIT(v, bit) (((v) >> (bit)) & 1u)

typedef enum RBT_OperandSize {
	RBT_SIZE_BYTE = 1, // .b
	RBT_SIZE_WORD = 2, // .w
	RBT_SIZE_LONG = 4, // .l
	RBT_SIZE_NONE = 0,
} RBT_OperandSize;

[[nodiscard]] static inline u32 rbt_bits(u32 v, u8 hi, u8 lo) {
	assert((hi >= lo) && "rbt_bits: High bit cannot be lower than low bit!");

	u32 width = (hi - lo) + 1; // find how many bits we gonna use
	u32 mask = (width >= 32) ? 0xffffffffu : ((1u << width) - 1u);

	return (v >> lo) & mask;
}

[[nodiscard]] static inline u32 rbt_truncate(RBT_OperandSize size, u32 value) {
	switch (size) {
	case RBT_SIZE_BYTE: return value & 0x000000ff;
	case RBT_SIZE_WORD: return value & 0x0000ffff;
	case RBT_SIZE_LONG: return value;
	case RBT_SIZE_NONE:
		rbt_push_error(RBT_ERR_INVALID_ARGS, "Cannot truncate value size");
		return 0;
	}

	unreachable();
}

[[nodiscard]] static inline u32 rbt_store_sized(
	RBT_OperandSize size, u32 data, u32 value
) {
	switch (size) {
	case RBT_SIZE_BYTE: return (data & 0xffffff00) | (value & 0x000000ff);
	case RBT_SIZE_WORD: return (data & 0xffff0000) | (value & 0x0000ffff);
	case RBT_SIZE_LONG: return value;
	case RBT_SIZE_NONE:
		rbt_push_error(RBT_ERR_INVALID_ARGS, "Cannot store without size");
		return 0;
	}

	unreachable();
}

[[nodiscard]] static inline i32 rbt_sign_extend(RBT_OperandSize from, u32 value) {
	switch (from) {
	case RBT_SIZE_BYTE: return (i8)(value & 0xff);
	case RBT_SIZE_WORD: return (i16)(value & 0xffff);
	case RBT_SIZE_LONG: return value;
	case RBT_SIZE_NONE:
		rbt_push_error(RBT_ERR_INVALID_ARGS, "Cannot sign extend without size");
		return 0;
	}

	unreachable();
}
