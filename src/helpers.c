#include "rbt/helpers.h"

[[nodiscard]] inline u32 rbt_truncate(RBT_OperandSize size, u32 value) {
	switch (size) {
	case RBT_SIZE_NONE:
		return 0;
	case RBT_SIZE_BYTE:
		return value & 0x000000ff;
	case RBT_SIZE_WORD:
		return value & 0x0000ffff;
	case RBT_SIZE_LONG:
		return value;
	}

	unreachable();
}

[[nodiscard]] inline u32 rbt_write_sized(RBT_OperandSize size, u32 data, u32 value) {
	switch (size) {
	case RBT_SIZE_NONE:
		return 0;
	case RBT_SIZE_BYTE:
		return (data & 0xffffff00) | (value & 0x000000ff);
	case RBT_SIZE_WORD:
		return (data & 0xffff0000) | (value & 0x0000ffff);
	case RBT_SIZE_LONG:
		return value;
	}

	unreachable();
}
