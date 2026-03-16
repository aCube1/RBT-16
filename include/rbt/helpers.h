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

#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/types.h"

#if defined(__GNUC__) || defined(__clang__)
#	define rbt_bswap_u16(x) __builtin_bswap16((x))
#	define rbt_bswap_u32(x) __builtin_bswap32((x))
#	define rbt_bswap_u64(x) __builtin_bswap64((x))
#elif defined(_MSC_VER)
#	include <stdlib.h>
#	define rbt_bswap_u16(x) _byteswap_ushort((x))
#	define rbt_bswap_u32(x) _byteswap_ulong((x))
#	define rbt_bswap_u64(x) _byteswap_uint64((x))
#endif

#define RBT_BIT(v, bit) (((v) >> (bit)) & 1u)

[[nodiscard]] u32 rbt_bits(u32 v, i32 hi, i32 lo);
[[nodiscard]] u32 rbt_truncate(RBT_OperandSize size, u32 value);
[[nodiscard]] u32 rbt_store_sized(RBT_OperandSize size, u32 data, u32 value);
[[nodiscard]] i32 rbt_sign_extend(RBT_OperandSize from, u32 value);
