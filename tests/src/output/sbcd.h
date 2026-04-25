#ifndef RBT_SBCD_H
#define RBT_SBCD_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte sbcd_initial_ram_0[] = {
		{ .addr = 0x007b5a, .byte = 0x85 },
		{ .addr = 0x007b5b, .byte = 0x03 },
		{ .addr = 0x007b5c, .byte = 0xe3 },
		{ .addr = 0x007b5d, .byte = 0xf8 },
		{ .addr = 0x007b5e, .byte = 0x43 },
		{ .addr = 0x007b5f, .byte = 0x5f }
};

static const SST_RamByte sbcd_final_ram_0[] = {
		{ .addr = 0x007b5a, .byte = 0x85 },
		{ .addr = 0x007b5b, .byte = 0x03 },
		{ .addr = 0x007b5c, .byte = 0xe3 },
		{ .addr = 0x007b5d, .byte = 0xf8 },
		{ .addr = 0x007b5e, .byte = 0x43 },
		{ .addr = 0x007b5f, .byte = 0x5f }
};

static const SST_Transaction sbcd_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 31582, .data = 17247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_1[] = {
		{ .addr = 0x63a20e, .byte = 0x8d },
		{ .addr = 0x63a20f, .byte = 0x01 },
		{ .addr = 0x63a210, .byte = 0x5c },
		{ .addr = 0x63a211, .byte = 0x90 },
		{ .addr = 0x63a212, .byte = 0xeb },
		{ .addr = 0x63a213, .byte = 0x8e }
};

static const SST_RamByte sbcd_final_ram_1[] = {
		{ .addr = 0x63a20e, .byte = 0x8d },
		{ .addr = 0x63a20f, .byte = 0x01 },
		{ .addr = 0x63a210, .byte = 0x5c },
		{ .addr = 0x63a211, .byte = 0x90 },
		{ .addr = 0x63a212, .byte = 0xeb },
		{ .addr = 0x63a213, .byte = 0x8e }
};

static const SST_Transaction sbcd_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6529554, .data = 60302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_2[] = {
		{ .addr = 0x4eee9a, .byte = 0x83 },
		{ .addr = 0x4eee9b, .byte = 0x09 },
		{ .addr = 0x4eee9c, .byte = 0x11 },
		{ .addr = 0x4eee9d, .byte = 0x53 },
		{ .addr = 0xdf93fc, .byte = 0xeb },
		{ .addr = 0xdf93fd, .byte = 0x58 },
		{ .addr = 0xdf93fa, .byte = 0x12 },
		{ .addr = 0xdf93fb, .byte = 0x4e },
		{ .addr = 0x4eee9e, .byte = 0x1c },
		{ .addr = 0x4eee9f, .byte = 0x89 }
};

static const SST_RamByte sbcd_final_ram_2[] = {
		{ .addr = 0x4eee9a, .byte = 0x83 },
		{ .addr = 0x4eee9b, .byte = 0x09 },
		{ .addr = 0x4eee9c, .byte = 0x11 },
		{ .addr = 0x4eee9d, .byte = 0x53 },
		{ .addr = 0xdf93fc, .byte = 0xeb },
		{ .addr = 0xdf93fd, .byte = 0x58 },
		{ .addr = 0xdf93fa, .byte = 0x12 },
		{ .addr = 0xdf93fb, .byte = 0x03 },
		{ .addr = 0x4eee9e, .byte = 0x1c },
		{ .addr = 0x4eee9f, .byte = 0x89 }
};

static const SST_Transaction sbcd_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652412, .data = 60160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652410, .data = 78, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5172894, .data = 7305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652410, .data = 3, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_3[] = {
		{ .addr = 0xddc342, .byte = 0x8d },
		{ .addr = 0xddc343, .byte = 0x06 },
		{ .addr = 0xddc344, .byte = 0xfb },
		{ .addr = 0xddc345, .byte = 0x1f },
		{ .addr = 0xddc346, .byte = 0x84 },
		{ .addr = 0xddc347, .byte = 0x12 }
};

static const SST_RamByte sbcd_final_ram_3[] = {
		{ .addr = 0xddc342, .byte = 0x8d },
		{ .addr = 0xddc343, .byte = 0x06 },
		{ .addr = 0xddc344, .byte = 0xfb },
		{ .addr = 0xddc345, .byte = 0x1f },
		{ .addr = 0xddc346, .byte = 0x84 },
		{ .addr = 0xddc347, .byte = 0x12 }
};

static const SST_Transaction sbcd_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14533446, .data = 33810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_4[] = {
		{ .addr = 0x436e00, .byte = 0x85 },
		{ .addr = 0x436e01, .byte = 0x05 },
		{ .addr = 0x436e02, .byte = 0xb5 },
		{ .addr = 0x436e03, .byte = 0x7c },
		{ .addr = 0x436e04, .byte = 0xb7 },
		{ .addr = 0x436e05, .byte = 0x4b }
};

static const SST_RamByte sbcd_final_ram_4[] = {
		{ .addr = 0x436e00, .byte = 0x85 },
		{ .addr = 0x436e01, .byte = 0x05 },
		{ .addr = 0x436e02, .byte = 0xb5 },
		{ .addr = 0x436e03, .byte = 0x7c },
		{ .addr = 0x436e04, .byte = 0xb7 },
		{ .addr = 0x436e05, .byte = 0x4b }
};

static const SST_Transaction sbcd_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4419076, .data = 46923, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_5[] = {
		{ .addr = 0x82a770, .byte = 0x81 },
		{ .addr = 0x82a771, .byte = 0x0b },
		{ .addr = 0x82a772, .byte = 0x37 },
		{ .addr = 0x82a773, .byte = 0xea },
		{ .addr = 0x4b3c6e, .byte = 0x1d },
		{ .addr = 0x4b3c6f, .byte = 0x1a },
		{ .addr = 0x817862, .byte = 0x97 },
		{ .addr = 0x817863, .byte = 0x34 },
		{ .addr = 0x82a774, .byte = 0x15 },
		{ .addr = 0x82a775, .byte = 0x39 }
};

static const SST_RamByte sbcd_final_ram_5[] = {
		{ .addr = 0x82a770, .byte = 0x81 },
		{ .addr = 0x82a771, .byte = 0x0b },
		{ .addr = 0x82a772, .byte = 0x37 },
		{ .addr = 0x82a773, .byte = 0xea },
		{ .addr = 0x4b3c6e, .byte = 0x1d },
		{ .addr = 0x4b3c6f, .byte = 0x1a },
		{ .addr = 0x817862, .byte = 0x97 },
		{ .addr = 0x817863, .byte = 0x10 },
		{ .addr = 0x82a774, .byte = 0x15 },
		{ .addr = 0x82a775, .byte = 0x39 }
};

static const SST_Transaction sbcd_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4930670, .data = 7424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8484962, .data = 52, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8562548, .data = 5433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8484962, .data = 16, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_6[] = {
		{ .addr = 0xf97060, .byte = 0x8d },
		{ .addr = 0xf97061, .byte = 0x06 },
		{ .addr = 0xf97062, .byte = 0x06 },
		{ .addr = 0xf97063, .byte = 0xa8 },
		{ .addr = 0xf97064, .byte = 0x58 },
		{ .addr = 0xf97065, .byte = 0xf9 }
};

static const SST_RamByte sbcd_final_ram_6[] = {
		{ .addr = 0xf97060, .byte = 0x8d },
		{ .addr = 0xf97061, .byte = 0x06 },
		{ .addr = 0xf97062, .byte = 0x06 },
		{ .addr = 0xf97063, .byte = 0xa8 },
		{ .addr = 0xf97064, .byte = 0x58 },
		{ .addr = 0xf97065, .byte = 0xf9 }
};

static const SST_Transaction sbcd_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16347236, .data = 22777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_7[] = {
		{ .addr = 0x2f5bb6, .byte = 0x87 },
		{ .addr = 0x2f5bb7, .byte = 0x00 },
		{ .addr = 0x2f5bb8, .byte = 0x64 },
		{ .addr = 0x2f5bb9, .byte = 0xf4 },
		{ .addr = 0x2f5bba, .byte = 0xb7 },
		{ .addr = 0x2f5bbb, .byte = 0xcb }
};

static const SST_RamByte sbcd_final_ram_7[] = {
		{ .addr = 0x2f5bb6, .byte = 0x87 },
		{ .addr = 0x2f5bb7, .byte = 0x00 },
		{ .addr = 0x2f5bb8, .byte = 0x64 },
		{ .addr = 0x2f5bb9, .byte = 0xf4 },
		{ .addr = 0x2f5bba, .byte = 0xb7 },
		{ .addr = 0x2f5bbb, .byte = 0xcb }
};

static const SST_Transaction sbcd_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3103674, .data = 47051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_8[] = {
		{ .addr = 0xe2fc34, .byte = 0x83 },
		{ .addr = 0xe2fc35, .byte = 0x08 },
		{ .addr = 0xe2fc36, .byte = 0x26 },
		{ .addr = 0xe2fc37, .byte = 0xb4 },
		{ .addr = 0xfa14e0, .byte = 0x86 },
		{ .addr = 0xfa14e1, .byte = 0xf9 },
		{ .addr = 0x7bf376, .byte = 0x7c },
		{ .addr = 0x7bf377, .byte = 0x1e },
		{ .addr = 0xe2fc38, .byte = 0x3c },
		{ .addr = 0xe2fc39, .byte = 0x31 }
};

static const SST_RamByte sbcd_final_ram_8[] = {
		{ .addr = 0xe2fc34, .byte = 0x83 },
		{ .addr = 0xe2fc35, .byte = 0x08 },
		{ .addr = 0xe2fc36, .byte = 0x26 },
		{ .addr = 0xe2fc37, .byte = 0xb4 },
		{ .addr = 0xfa14e0, .byte = 0x86 },
		{ .addr = 0xfa14e1, .byte = 0xf9 },
		{ .addr = 0x7bf376, .byte = 0x96 },
		{ .addr = 0x7bf377, .byte = 0x1e },
		{ .addr = 0xe2fc38, .byte = 0x3c },
		{ .addr = 0xe2fc39, .byte = 0x31 }
};

static const SST_Transaction sbcd_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16389344, .data = 34304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8123254, .data = 31744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14875704, .data = 15409, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8123254, .data = 38400, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_9[] = {
		{ .addr = 0x2a929a, .byte = 0x83 },
		{ .addr = 0x2a929b, .byte = 0x0e },
		{ .addr = 0x2a929c, .byte = 0xdc },
		{ .addr = 0x2a929d, .byte = 0x9a },
		{ .addr = 0x1173c0, .byte = 0x05 },
		{ .addr = 0x1173c1, .byte = 0x0f },
		{ .addr = 0xd611a6, .byte = 0x79 },
		{ .addr = 0xd611a7, .byte = 0x10 },
		{ .addr = 0x2a929e, .byte = 0x32 },
		{ .addr = 0x2a929f, .byte = 0xa0 }
};

static const SST_RamByte sbcd_final_ram_9[] = {
		{ .addr = 0x2a929a, .byte = 0x83 },
		{ .addr = 0x2a929b, .byte = 0x0e },
		{ .addr = 0x2a929c, .byte = 0xdc },
		{ .addr = 0x2a929d, .byte = 0x9a },
		{ .addr = 0x1173c0, .byte = 0x05 },
		{ .addr = 0x1173c1, .byte = 0x0f },
		{ .addr = 0xd611a6, .byte = 0x79 },
		{ .addr = 0xd611a7, .byte = 0xfa },
		{ .addr = 0x2a929e, .byte = 0x32 },
		{ .addr = 0x2a929f, .byte = 0xa0 }
};

static const SST_Transaction sbcd_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1143744, .data = 15, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14029222, .data = 16, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2790046, .data = 12960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14029222, .data = 250, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_10[] = {
		{ .addr = 0x93f42a, .byte = 0x8b },
		{ .addr = 0x93f42b, .byte = 0x03 },
		{ .addr = 0x93f42c, .byte = 0x71 },
		{ .addr = 0x93f42d, .byte = 0x04 },
		{ .addr = 0x93f42e, .byte = 0xe5 },
		{ .addr = 0x93f42f, .byte = 0x4c }
};

static const SST_RamByte sbcd_final_ram_10[] = {
		{ .addr = 0x93f42a, .byte = 0x8b },
		{ .addr = 0x93f42b, .byte = 0x03 },
		{ .addr = 0x93f42c, .byte = 0x71 },
		{ .addr = 0x93f42d, .byte = 0x04 },
		{ .addr = 0x93f42e, .byte = 0xe5 },
		{ .addr = 0x93f42f, .byte = 0x4c }
};

static const SST_Transaction sbcd_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9696302, .data = 58700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_11[] = {
		{ .addr = 0x04304e, .byte = 0x89 },
		{ .addr = 0x04304f, .byte = 0x00 },
		{ .addr = 0x043050, .byte = 0x68 },
		{ .addr = 0x043051, .byte = 0xe4 },
		{ .addr = 0x043052, .byte = 0x4e },
		{ .addr = 0x043053, .byte = 0x5d }
};

static const SST_RamByte sbcd_final_ram_11[] = {
		{ .addr = 0x04304e, .byte = 0x89 },
		{ .addr = 0x04304f, .byte = 0x00 },
		{ .addr = 0x043050, .byte = 0x68 },
		{ .addr = 0x043051, .byte = 0xe4 },
		{ .addr = 0x043052, .byte = 0x4e },
		{ .addr = 0x043053, .byte = 0x5d }
};

static const SST_Transaction sbcd_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 274514, .data = 20061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_12[] = {
		{ .addr = 0x0ce620, .byte = 0x8d },
		{ .addr = 0x0ce621, .byte = 0x04 },
		{ .addr = 0x0ce622, .byte = 0xf2 },
		{ .addr = 0x0ce623, .byte = 0x29 },
		{ .addr = 0x0ce624, .byte = 0x24 },
		{ .addr = 0x0ce625, .byte = 0x4e }
};

static const SST_RamByte sbcd_final_ram_12[] = {
		{ .addr = 0x0ce620, .byte = 0x8d },
		{ .addr = 0x0ce621, .byte = 0x04 },
		{ .addr = 0x0ce622, .byte = 0xf2 },
		{ .addr = 0x0ce623, .byte = 0x29 },
		{ .addr = 0x0ce624, .byte = 0x24 },
		{ .addr = 0x0ce625, .byte = 0x4e }
};

static const SST_Transaction sbcd_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 845348, .data = 9294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_13[] = {
		{ .addr = 0xe2d2e6, .byte = 0x8b },
		{ .addr = 0xe2d2e7, .byte = 0x01 },
		{ .addr = 0xe2d2e8, .byte = 0xb9 },
		{ .addr = 0xe2d2e9, .byte = 0x23 },
		{ .addr = 0xe2d2ea, .byte = 0x93 },
		{ .addr = 0xe2d2eb, .byte = 0x52 }
};

static const SST_RamByte sbcd_final_ram_13[] = {
		{ .addr = 0xe2d2e6, .byte = 0x8b },
		{ .addr = 0xe2d2e7, .byte = 0x01 },
		{ .addr = 0xe2d2e8, .byte = 0xb9 },
		{ .addr = 0xe2d2e9, .byte = 0x23 },
		{ .addr = 0xe2d2ea, .byte = 0x93 },
		{ .addr = 0xe2d2eb, .byte = 0x52 }
};

static const SST_Transaction sbcd_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14865130, .data = 37714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_14[] = {
		{ .addr = 0x017002, .byte = 0x87 },
		{ .addr = 0x017003, .byte = 0x03 },
		{ .addr = 0x017004, .byte = 0xbb },
		{ .addr = 0x017005, .byte = 0x5f },
		{ .addr = 0x017006, .byte = 0x28 },
		{ .addr = 0x017007, .byte = 0x45 }
};

static const SST_RamByte sbcd_final_ram_14[] = {
		{ .addr = 0x017002, .byte = 0x87 },
		{ .addr = 0x017003, .byte = 0x03 },
		{ .addr = 0x017004, .byte = 0xbb },
		{ .addr = 0x017005, .byte = 0x5f },
		{ .addr = 0x017006, .byte = 0x28 },
		{ .addr = 0x017007, .byte = 0x45 }
};

static const SST_Transaction sbcd_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 94214, .data = 10309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_15[] = {
		{ .addr = 0xaa6700, .byte = 0x87 },
		{ .addr = 0xaa6701, .byte = 0x08 },
		{ .addr = 0xaa6702, .byte = 0xc6 },
		{ .addr = 0xaa6703, .byte = 0x86 },
		{ .addr = 0x603cf0, .byte = 0xb0 },
		{ .addr = 0x603cf1, .byte = 0xb2 },
		{ .addr = 0x53e15a, .byte = 0x6f },
		{ .addr = 0x53e15b, .byte = 0x96 },
		{ .addr = 0xaa6704, .byte = 0xaa },
		{ .addr = 0xaa6705, .byte = 0xc5 }
};

static const SST_RamByte sbcd_final_ram_15[] = {
		{ .addr = 0xaa6700, .byte = 0x87 },
		{ .addr = 0xaa6701, .byte = 0x08 },
		{ .addr = 0xaa6702, .byte = 0xc6 },
		{ .addr = 0xaa6703, .byte = 0x86 },
		{ .addr = 0x603cf0, .byte = 0xb0 },
		{ .addr = 0x603cf1, .byte = 0xb2 },
		{ .addr = 0x53e15a, .byte = 0x5f },
		{ .addr = 0x53e15b, .byte = 0x96 },
		{ .addr = 0xaa6704, .byte = 0xaa },
		{ .addr = 0xaa6705, .byte = 0xc5 }
};

static const SST_Transaction sbcd_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6307056, .data = 45056, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5497178, .data = 28416, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11167492, .data = 43717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5497178, .data = 24320, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t SBCD_TEST_COUNT = 16;
static const SST_TestCase sbcd[] = {
	{
		.name = "000 SBCD D3, D2 8503",
		.initial = {
			.regs = {
				342845124, 3682155058, 3735029516, 1772217720, 3884121916, 1824997711, 3565947305, 3664225138, 3204852313, 1979966899, 3701895049, 4177683308, 2185839221, 3082295344, 1673787648, 14868614, 4445112, 8479, 31582
			},
			.prefetch0 = 34051,
			.prefetch1 = 58360,
			.ram = sbcd_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				342845124, 3682155058, 3735029555, 1772217720, 3884121916, 1824997711, 3565947305, 3664225138, 3204852313, 1979966899, 3701895049, 4177683308, 2185839221, 3082295344, 1673787648, 14868614, 4445112, 8467, 31584
			},
			.prefetch0 = 58360,
			.prefetch1 = 17247,
			.ram = sbcd_final_ram_0,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_0,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "001 SBCD D1, D6 8d01",
		.initial = {
			.regs = {
				3924186771, 2496497880, 3817890417, 3958224697, 1374135719, 2761769269, 145644811, 2443767298, 3686041788, 912988910, 2082642837, 3570648265, 1968027328, 1785095375, 1405566635, 13064752, 13090668, 41731, 6529554
			},
			.prefetch0 = 36097,
			.prefetch1 = 23696,
			.ram = sbcd_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3924186771, 2496497880, 3817890417, 3958224697, 1374135719, 2761769269, 145645011, 2443767298, 3686041788, 912988910, 2082642837, 3570648265, 1968027328, 1785095375, 1405566635, 13064752, 13090668, 41753, 6529556
			},
			.prefetch0 = 23696,
			.prefetch1 = 60302,
			.ram = sbcd_final_ram_1,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_1,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "002 SBCD -(A1), -(A1) 8309",
		.initial = {
			.regs = {
				194373642, 2472291297, 1874196140, 2844133041, 3018880914, 3564160520, 1770229844, 402478850, 3345811210, 2581566461, 485295068, 3467267660, 2691528884, 1895026452, 2163834668, 3865700, 7147014, 41221, 5172894
			},
			.prefetch0 = 33545,
			.prefetch1 = 4435,
			.ram = sbcd_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				194373642, 2472291297, 1874196140, 2844133041, 3018880914, 3564160520, 1770229844, 402478850, 3345811210, 2581566459, 485295068, 3467267660, 2691528884, 1895026452, 2163834668, 3865700, 7147014, 41233, 5172896
			},
			.prefetch0 = 4435,
			.prefetch1 = 7305,
			.ram = sbcd_final_ram_2,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 SBCD D6, D6 8d06",
		.initial = {
			.regs = {
				2098166968, 1628945558, 334707586, 2786388040, 1985610817, 3898992344, 2314931880, 1869881008, 3671403792, 555656910, 3863757937, 2083042984, 1471077963, 335202929, 4041739897, 16134644, 2111596, 9477, 14533446
			},
			.prefetch0 = 36102,
			.prefetch1 = 64287,
			.ram = sbcd_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2098166968, 1628945558, 334707586, 2786388040, 1985610817, 3898992344, 2314931712, 1869881008, 3671403792, 555656910, 3863757937, 2083042984, 1471077963, 335202929, 4041739897, 16134644, 2111596, 9476, 14533448
			},
			.prefetch0 = 64287,
			.prefetch1 = 33810,
			.ram = sbcd_final_ram_3,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_3,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "004 SBCD D5, D2 8505",
		.initial = {
			.regs = {
				2368613540, 3209449644, 1155034787, 283117879, 2040533372, 2540530620, 513166788, 4192278989, 4287738725, 2483328190, 2247265438, 3387239148, 2559795131, 2122396493, 3275543901, 4652202, 4968356, 33537, 4419076
			},
			.prefetch0 = 34053,
			.prefetch1 = 46460,
			.ram = sbcd_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2368613540, 3209449644, 1155034753, 283117879, 2040533372, 2540530620, 513166788, 4192278989, 4287738725, 2483328190, 2247265438, 3387239148, 2559795131, 2122396493, 3275543901, 4652202, 4968356, 33561, 4419078
			},
			.prefetch0 = 46460,
			.prefetch1 = 46923,
			.ram = sbcd_final_ram_4,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_4,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "005 SBCD -(A3), -(A0) 810b",
		.initial = {
			.regs = {
				3883600834, 2631228016, 3438352581, 2761408546, 3574312250, 3018343352, 2054264132, 250110836, 92371044, 379615199, 3043184752, 1699429487, 762623450, 98458489, 970010507, 13458636, 11677822, 9242, 8562548
			},
			.prefetch0 = 33035,
			.prefetch1 = 14314,
			.ram = sbcd_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3883600834, 2631228016, 3438352581, 2761408546, 3574312250, 3018343352, 2054264132, 250110836, 92371043, 379615199, 3043184752, 1699429486, 762623450, 98458489, 970010507, 13458636, 11677822, 9216, 8562550
			},
			.prefetch0 = 14314,
			.prefetch1 = 5433,
			.ram = sbcd_final_ram_5,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 SBCD D6, D6 8d06",
		.initial = {
			.regs = {
				1284401062, 95775674, 1795073614, 312224839, 3355666998, 3280140427, 1679534527, 3166655532, 3993992934, 1673992115, 1534904508, 3682229128, 2845621440, 3471082833, 2255063988, 4754156, 4865216, 3, 16347236
			},
			.prefetch0 = 36102,
			.prefetch1 = 1704,
			.ram = sbcd_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1284401062, 95775674, 1795073614, 312224839, 3355666998, 3280140427, 1679534336, 3166655532, 3993992934, 1673992115, 1534904508, 3682229128, 2845621440, 3471082833, 2255063988, 4754156, 4865216, 0, 16347238
			},
			.prefetch0 = 1704,
			.prefetch1 = 22777,
			.ram = sbcd_final_ram_6,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_6,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "007 SBCD D0, D3 8700",
		.initial = {
			.regs = {
				1772571185, 3597268673, 2818128026, 1453150224, 1001257930, 1374617483, 372710972, 2189801816, 2600295745, 1823340297, 4089477968, 680979752, 1174532516, 3245297833, 656864722, 15962066, 16068684, 9498, 3103674
			},
			.prefetch0 = 34560,
			.prefetch1 = 25844,
			.ram = sbcd_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1772571185, 3597268673, 2818128026, 1453150328, 1001257930, 1374617483, 372710972, 2189801816, 2600295745, 1823340297, 4089477968, 680979752, 1174532516, 3245297833, 656864722, 15962066, 16068684, 9491, 3103676
			},
			.prefetch0 = 25844,
			.prefetch1 = 47051,
			.ram = sbcd_final_ram_7,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_7,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "008 SBCD -(A0), -(A1) 8308",
		.initial = {
			.regs = {
				3803993751, 1401144548, 63364752, 660466194, 3881160860, 1603055001, 1906541000, 1371673197, 1559893217, 2038166391, 2285087532, 1158046908, 22653082, 1872869411, 643046153, 10686788, 2122228, 41228, 14875704
			},
			.prefetch0 = 33544,
			.prefetch1 = 9908,
			.ram = sbcd_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3803993751, 1401144548, 63364752, 660466194, 3881160860, 1603055001, 1906541000, 1371673197, 1559893216, 2038166390, 2285087532, 1158046908, 22653082, 1872869411, 643046153, 10686788, 2122228, 41241, 14875706
			},
			.prefetch0 = 9908,
			.prefetch1 = 15409,
			.ram = sbcd_final_ram_8,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 SBCD -(A6), -(A1) 830e",
		.initial = {
			.regs = {
				1415280188, 2504567909, 3582444071, 2020468456, 3910405431, 2871636864, 966407129, 729377216, 1033051266, 467014056, 616150854, 4196724885, 1728505835, 2618165006, 2467394498, 13451548, 709870, 33311, 2790046
			},
			.prefetch0 = 33550,
			.prefetch1 = 56474,
			.ram = sbcd_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1415280188, 2504567909, 3582444071, 2020468456, 3910405431, 2871636864, 966407129, 729377216, 1033051266, 467014055, 616150854, 4196724885, 1728505835, 2618165006, 2467394497, 13451548, 709870, 33305, 2790048
			},
			.prefetch0 = 56474,
			.prefetch1 = 12960,
			.ram = sbcd_final_ram_9,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_9,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "010 SBCD D3, D5 8b03",
		.initial = {
			.regs = {
				809344324, 199803961, 2723662373, 1672149284, 3490548798, 3072794809, 749976685, 1806941288, 3477463732, 2584573695, 3207614201, 2456522548, 1377011461, 1927821320, 1159656907, 3574212, 10634092, 33556, 9696302
			},
			.prefetch0 = 35587,
			.prefetch1 = 28932,
			.ram = sbcd_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				809344324, 199803961, 2723662373, 1672149284, 3490548798, 3072794772, 749976685, 1806941288, 3477463732, 2584573695, 3207614201, 2456522548, 1377011461, 1927821320, 1159656907, 3574212, 10634092, 33544, 9696304
			},
			.prefetch0 = 28932,
			.prefetch1 = 58700,
			.ram = sbcd_final_ram_10,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_10,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "011 SBCD D0, D4 8900",
		.initial = {
			.regs = {
				2210289145, 4224223098, 822226084, 221214377, 4053647320, 2360287160, 2815482717, 2297160945, 2388177311, 1593522111, 3102233786, 1674593619, 543278990, 2245036241, 583561132, 16414548, 4483930, 42012, 274514
			},
			.prefetch0 = 35072,
			.prefetch1 = 26852,
			.ram = sbcd_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2210289145, 4224223098, 822226084, 221214377, 4053647224, 2360287160, 2815482717, 2297160945, 2388177311, 1593522111, 3102233786, 1674593619, 543278990, 2245036241, 583561132, 16414548, 4483930, 42003, 274516
			},
			.prefetch0 = 26852,
			.prefetch1 = 20061,
			.ram = sbcd_final_ram_11,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_11,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "012 SBCD D4, D6 8d04",
		.initial = {
			.regs = {
				1958956, 3302564277, 2554965033, 3314284261, 3623856665, 1933368335, 3836892142, 2919859420, 1169770736, 1542381903, 1016980715, 1598246522, 1568753433, 1774509191, 1830145732, 5665546, 7157254, 33550, 845348
			},
			.prefetch0 = 36100,
			.prefetch1 = 61993,
			.ram = sbcd_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1958956, 3302564277, 2554965033, 3314284261, 3623856665, 1933368335, 3836892117, 2919859420, 1169770736, 1542381903, 1016980715, 1598246522, 1568753433, 1774509191, 1830145732, 5665546, 7157254, 33544, 845350
			},
			.prefetch0 = 61993,
			.prefetch1 = 9294,
			.ram = sbcd_final_ram_12,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_12,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "013 SBCD D1, D5 8b01",
		.initial = {
			.regs = {
				2223994485, 2247730177, 2560437495, 1138918893, 3810036538, 1692613338, 3910249990, 667591183, 1932432879, 3721224893, 1351965255, 2571065711, 3391551445, 381877810, 4070244222, 14189412, 8967442, 9995, 14865130
			},
			.prefetch0 = 35585,
			.prefetch1 = 47395,
			.ram = sbcd_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2223994485, 2247730177, 2560437495, 1138918893, 3810036538, 1692613337, 3910249990, 667591183, 1932432879, 3721224893, 1351965255, 2571065711, 3391551445, 381877810, 4070244222, 14189412, 8967442, 9992, 14865132
			},
			.prefetch0 = 47395,
			.prefetch1 = 37714,
			.ram = sbcd_final_ram_13,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_13,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "014 SBCD D3, D3 8703",
		.initial = {
			.regs = {
				2163636209, 3732093919, 2710499923, 1553574657, 3203982652, 3210013127, 3156460208, 1295909778, 1978043893, 2527806026, 3851594881, 1687940478, 357132401, 2149800783, 2022488549, 10287654, 15300154, 1815, 94214
			},
			.prefetch0 = 34563,
			.prefetch1 = 47967,
			.ram = sbcd_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2163636209, 3732093919, 2710499923, 1553574809, 3203982652, 3210013127, 3156460208, 1295909778, 1978043893, 2527806026, 3851594881, 1687940478, 357132401, 2149800783, 2022488549, 10287654, 15300154, 1817, 94216
			},
			.prefetch0 = 47967,
			.prefetch1 = 10309,
			.ram = sbcd_final_ram_14,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_14,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "015 SBCD -(A0), -(A3) 8708",
		.initial = {
			.regs = {
				3127523555, 18870437, 265932111, 3214372697, 1046752431, 3889596525, 1580051456, 2577882814, 1751137521, 2456761479, 3696936372, 2991841627, 2495526328, 3849585055, 4140409203, 9746048, 8923720, 34055, 11167492
			},
			.prefetch0 = 34568,
			.prefetch1 = 50822,
			.ram = sbcd_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3127523555, 18870437, 265932111, 3214372697, 1046752431, 3889596525, 1580051456, 2577882814, 1751137520, 2456761479, 3696936372, 2991841626, 2495526328, 3849585055, 4140409203, 9746048, 8923720, 34067, 11167494
			},
			.prefetch0 = 50822,
			.prefetch1 = 43717,
			.ram = sbcd_final_ram_15,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_SBCD_H */