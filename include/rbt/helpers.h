#pragma once

#include "rbt/basic_types.h"

#include <assert.h>

#if defined(__GNUC__) || defined(__clang__)
#	define rbt_bswap_u16(x) __builtin_bswap16((x))
#	define rbt_bswap_u32(x) __builtin_bswap32((x))
#	define rbt_bswap_u64(x) __buildin_bswap64((x))
#elif defined(_MSC_VER)
#	include <stdlib.h>
#	define rbt_bswap_u16(x) _byteswap_ushort((x))
#	define rbt_bswap_u32(x) _byteswap_ulong((x))
#	define rbt_bswap_u64(x) _byteswap_uint64((x))
#endif

#define RBT_BIT(v, bit) (((v) >> (bit)) & 1u)

typedef enum RBT_OperandSize {
	RBT_SIZE_BYTE = 1, // .b
	RBT_SIZE_WORD = 2, // .w
	RBT_SIZE_LONG = 4, // .l
	RBT_SIZE_NONE = 0,
} RBT_OperandSize;

[[nodiscard]] u32 rbt_bits(u32 v, i32 hi, i32 lo);
[[nodiscard]] u32 rbt_truncate(RBT_OperandSize size, u32 value);
[[nodiscard]] u32 rbt_store_sized(RBT_OperandSize size, u32 data, u32 value);
[[nodiscard]] i32 rbt_sign_extend(RBT_OperandSize from, u32 value);
