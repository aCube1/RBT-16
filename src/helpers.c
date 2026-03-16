// RBT-16 - Fantasy Retro-Computer Inspired by the Amiga 500 and Atari ST.
// Copyright (C) 2026  aCube
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, see
// <https://www.gnu.org/licenses/>.

#include "rbt/helpers.h"

#include "error.h"
#include "rbt/basic_types.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

#include <assert.h>

[[nodiscard]] u32 rbt_bits(u32 v, i32 hi, i32 lo) {
	assert((hi >= lo) && "rbt_bits: High bit cannot be lower than low bit!");

	u32 width = (hi - lo) + 1; // find how many bits we gonna use
	u32 mask = (width >= 32) ? 0xffffffffu : ((1u << width) - 1u);

	return (v >> lo) & mask;
}

[[nodiscard]] u32 rbt_truncate(RBT_OperandSize size, u32 value) {
	switch (size) {
	case RBT_SIZE_BYTE: return value & 0x000000ff;
	case RBT_SIZE_WORD: return value & 0x0000ffff;
	case RBT_SIZE_LONG: return value;
	case RBT_SIZE_NONE:
		_push_error(RBT_ERR_INVALID_ARGS, "Cannot truncate value size");
		return 0;
	}

	unreachable();
}

[[nodiscard]] u32 rbt_store_sized(RBT_OperandSize size, u32 data, u32 value) {
	switch (size) {
	case RBT_SIZE_BYTE: return (data & 0xffffff00) | (value & 0x000000ff);
	case RBT_SIZE_WORD: return (data & 0xffff0000) | (value & 0x0000ffff);
	case RBT_SIZE_LONG: return value;
	case RBT_SIZE_NONE:
		_push_error(RBT_ERR_INVALID_ARGS, "Cannot store without size");
		return 0;
	}

	unreachable();
}

[[nodiscard]] i32 rbt_sign_extend(RBT_OperandSize from, u32 value) {
	switch (from) {
	case RBT_SIZE_BYTE: return (i8)(value & 0xff);
	case RBT_SIZE_WORD: return (i16)(value & 0xffff);
	case RBT_SIZE_LONG: return value;
	case RBT_SIZE_NONE:
		_push_error(RBT_ERR_INVALID_ARGS, "Cannot sign extend without size");
		return 0;
	}

	unreachable();
}
