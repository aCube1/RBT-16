#pragma once

#include "basic_types.h"

typedef enum RBT_OperandSize {
	RBT_SIZE_NONE = 0,
	RBT_SIZE_BYTE = 1, // .b
	RBT_SIZE_WORD = 2, // .w
	RBT_SIZE_LONG = 4, // .l
} RBT_OperandSize;

[[nodiscard]] inline u32 rbt_truncate(RBT_OperandSize size, u32 value);
[[nodiscard]] inline u32 rbt_write_sized(RBT_OperandSize size, u32 data, u32 value);
