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

static const SST_RamByte sbcd_initial_ram_16[] = {
		{ .addr = 0xce1100, .byte = 0x8d },
		{ .addr = 0xce1101, .byte = 0x04 },
		{ .addr = 0xce1102, .byte = 0x68 },
		{ .addr = 0xce1103, .byte = 0x67 },
		{ .addr = 0xce1104, .byte = 0xc0 },
		{ .addr = 0xce1105, .byte = 0x61 }
};

static const SST_RamByte sbcd_final_ram_16[] = {
		{ .addr = 0xce1100, .byte = 0x8d },
		{ .addr = 0xce1101, .byte = 0x04 },
		{ .addr = 0xce1102, .byte = 0x68 },
		{ .addr = 0xce1103, .byte = 0x67 },
		{ .addr = 0xce1104, .byte = 0xc0 },
		{ .addr = 0xce1105, .byte = 0x61 }
};

static const SST_Transaction sbcd_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13504772, .data = 49249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_17[] = {
		{ .addr = 0x0a0f30, .byte = 0x87 },
		{ .addr = 0x0a0f31, .byte = 0x0c },
		{ .addr = 0x0a0f32, .byte = 0x1a },
		{ .addr = 0x0a0f33, .byte = 0x73 },
		{ .addr = 0x1bf424, .byte = 0xd2 },
		{ .addr = 0x1bf425, .byte = 0xb2 },
		{ .addr = 0x1cecc8, .byte = 0xe6 },
		{ .addr = 0x1cecc9, .byte = 0x9f },
		{ .addr = 0x0a0f34, .byte = 0xdf },
		{ .addr = 0x0a0f35, .byte = 0x02 }
};

static const SST_RamByte sbcd_final_ram_17[] = {
		{ .addr = 0x0a0f30, .byte = 0x87 },
		{ .addr = 0x0a0f31, .byte = 0x0c },
		{ .addr = 0x0a0f32, .byte = 0x1a },
		{ .addr = 0x0a0f33, .byte = 0x73 },
		{ .addr = 0x1bf424, .byte = 0xd2 },
		{ .addr = 0x1bf425, .byte = 0xb2 },
		{ .addr = 0x1cecc8, .byte = 0x14 },
		{ .addr = 0x1cecc9, .byte = 0x9f },
		{ .addr = 0x0a0f34, .byte = 0xdf },
		{ .addr = 0x0a0f35, .byte = 0x02 }
};

static const SST_Transaction sbcd_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1831972, .data = 53760, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1895624, .data = 58880, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 659252, .data = 57090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1895624, .data = 5120, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_18[] = {
		{ .addr = 0xc4c1a8, .byte = 0x81 },
		{ .addr = 0xc4c1a9, .byte = 0x0c },
		{ .addr = 0xc4c1aa, .byte = 0x1c },
		{ .addr = 0xc4c1ab, .byte = 0x58 },
		{ .addr = 0xfd77bc, .byte = 0xdc },
		{ .addr = 0xfd77bd, .byte = 0xea },
		{ .addr = 0x6fcf90, .byte = 0xa8 },
		{ .addr = 0x6fcf91, .byte = 0x41 },
		{ .addr = 0xc4c1ac, .byte = 0x93 },
		{ .addr = 0xc4c1ad, .byte = 0x4b }
};

static const SST_RamByte sbcd_final_ram_18[] = {
		{ .addr = 0xc4c1a8, .byte = 0x81 },
		{ .addr = 0xc4c1a9, .byte = 0x0c },
		{ .addr = 0xc4c1aa, .byte = 0x1c },
		{ .addr = 0xc4c1ab, .byte = 0x58 },
		{ .addr = 0xfd77bc, .byte = 0xdc },
		{ .addr = 0xfd77bd, .byte = 0xea },
		{ .addr = 0x6fcf90, .byte = 0xa8 },
		{ .addr = 0x6fcf91, .byte = 0xff },
		{ .addr = 0xc4c1ac, .byte = 0x93 },
		{ .addr = 0xc4c1ad, .byte = 0x4b }
};

static const SST_Transaction sbcd_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16611260, .data = 56320, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7327632, .data = 65, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12894636, .data = 37707, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7327632, .data = 255, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_19[] = {
		{ .addr = 0x1d261e, .byte = 0x89 },
		{ .addr = 0x1d261f, .byte = 0x08 },
		{ .addr = 0x1d2620, .byte = 0xe0 },
		{ .addr = 0x1d2621, .byte = 0x1e },
		{ .addr = 0x81550e, .byte = 0x02 },
		{ .addr = 0x81550f, .byte = 0x32 },
		{ .addr = 0xd36e12, .byte = 0x01 },
		{ .addr = 0xd36e13, .byte = 0x2a },
		{ .addr = 0x1d2622, .byte = 0x3a },
		{ .addr = 0x1d2623, .byte = 0xe4 }
};

static const SST_RamByte sbcd_final_ram_19[] = {
		{ .addr = 0x1d261e, .byte = 0x89 },
		{ .addr = 0x1d261f, .byte = 0x08 },
		{ .addr = 0x1d2620, .byte = 0xe0 },
		{ .addr = 0x1d2621, .byte = 0x1e },
		{ .addr = 0x81550e, .byte = 0x02 },
		{ .addr = 0x81550f, .byte = 0x32 },
		{ .addr = 0xd36e12, .byte = 0x01 },
		{ .addr = 0xd36e13, .byte = 0x97 },
		{ .addr = 0x1d2622, .byte = 0x3a },
		{ .addr = 0x1d2623, .byte = 0xe4 }
};

static const SST_Transaction sbcd_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8475918, .data = 50, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13856274, .data = 42, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1910306, .data = 15076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13856274, .data = 151, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_20[] = {
		{ .addr = 0x81bc5e, .byte = 0x85 },
		{ .addr = 0x81bc5f, .byte = 0x08 },
		{ .addr = 0x81bc60, .byte = 0x9e },
		{ .addr = 0x81bc61, .byte = 0xb3 },
		{ .addr = 0xda8cc0, .byte = 0x37 },
		{ .addr = 0xda8cc1, .byte = 0x5f },
		{ .addr = 0x2232aa, .byte = 0x24 },
		{ .addr = 0x2232ab, .byte = 0x1e },
		{ .addr = 0x81bc62, .byte = 0x58 },
		{ .addr = 0x81bc63, .byte = 0xe2 }
};

static const SST_RamByte sbcd_final_ram_20[] = {
		{ .addr = 0x81bc5e, .byte = 0x85 },
		{ .addr = 0x81bc5f, .byte = 0x08 },
		{ .addr = 0x81bc60, .byte = 0x9e },
		{ .addr = 0x81bc61, .byte = 0xb3 },
		{ .addr = 0xda8cc0, .byte = 0x37 },
		{ .addr = 0xda8cc1, .byte = 0x5f },
		{ .addr = 0x2232aa, .byte = 0x24 },
		{ .addr = 0x2232ab, .byte = 0x59 },
		{ .addr = 0x81bc62, .byte = 0x58 },
		{ .addr = 0x81bc63, .byte = 0xe2 }
};

static const SST_Transaction sbcd_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14322880, .data = 95, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2241194, .data = 30, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8502370, .data = 22754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2241194, .data = 89, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_21[] = {
		{ .addr = 0x76d11e, .byte = 0x8b },
		{ .addr = 0x76d11f, .byte = 0x00 },
		{ .addr = 0x76d120, .byte = 0xc9 },
		{ .addr = 0x76d121, .byte = 0x98 },
		{ .addr = 0x76d122, .byte = 0x8b },
		{ .addr = 0x76d123, .byte = 0xb7 }
};

static const SST_RamByte sbcd_final_ram_21[] = {
		{ .addr = 0x76d11e, .byte = 0x8b },
		{ .addr = 0x76d11f, .byte = 0x00 },
		{ .addr = 0x76d120, .byte = 0xc9 },
		{ .addr = 0x76d121, .byte = 0x98 },
		{ .addr = 0x76d122, .byte = 0x8b },
		{ .addr = 0x76d123, .byte = 0xb7 }
};

static const SST_Transaction sbcd_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7786786, .data = 35767, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_22[] = {
		{ .addr = 0xa92a10, .byte = 0x83 },
		{ .addr = 0xa92a11, .byte = 0x00 },
		{ .addr = 0xa92a12, .byte = 0x03 },
		{ .addr = 0xa92a13, .byte = 0x55 },
		{ .addr = 0xa92a14, .byte = 0x65 },
		{ .addr = 0xa92a15, .byte = 0x08 }
};

static const SST_RamByte sbcd_final_ram_22[] = {
		{ .addr = 0xa92a10, .byte = 0x83 },
		{ .addr = 0xa92a11, .byte = 0x00 },
		{ .addr = 0xa92a12, .byte = 0x03 },
		{ .addr = 0xa92a13, .byte = 0x55 },
		{ .addr = 0xa92a14, .byte = 0x65 },
		{ .addr = 0xa92a15, .byte = 0x08 }
};

static const SST_Transaction sbcd_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11086356, .data = 25864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_23[] = {
		{ .addr = 0x6f7efc, .byte = 0x8d },
		{ .addr = 0x6f7efd, .byte = 0x05 },
		{ .addr = 0x6f7efe, .byte = 0xd5 },
		{ .addr = 0x6f7eff, .byte = 0xef },
		{ .addr = 0x6f7f00, .byte = 0xe2 },
		{ .addr = 0x6f7f01, .byte = 0xaa }
};

static const SST_RamByte sbcd_final_ram_23[] = {
		{ .addr = 0x6f7efc, .byte = 0x8d },
		{ .addr = 0x6f7efd, .byte = 0x05 },
		{ .addr = 0x6f7efe, .byte = 0xd5 },
		{ .addr = 0x6f7eff, .byte = 0xef },
		{ .addr = 0x6f7f00, .byte = 0xe2 },
		{ .addr = 0x6f7f01, .byte = 0xaa }
};

static const SST_Transaction sbcd_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7307008, .data = 58026, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_24[] = {
		{ .addr = 0xf948b0, .byte = 0x85 },
		{ .addr = 0xf948b1, .byte = 0x09 },
		{ .addr = 0xf948b2, .byte = 0x46 },
		{ .addr = 0xf948b3, .byte = 0x0c },
		{ .addr = 0xf33a10, .byte = 0x1a },
		{ .addr = 0xf33a11, .byte = 0x5e },
		{ .addr = 0x60a65a, .byte = 0x0f },
		{ .addr = 0x60a65b, .byte = 0xb9 },
		{ .addr = 0xf948b4, .byte = 0x91 },
		{ .addr = 0xf948b5, .byte = 0x61 }
};

static const SST_RamByte sbcd_final_ram_24[] = {
		{ .addr = 0xf948b0, .byte = 0x85 },
		{ .addr = 0xf948b1, .byte = 0x09 },
		{ .addr = 0xf948b2, .byte = 0x46 },
		{ .addr = 0xf948b3, .byte = 0x0c },
		{ .addr = 0xf33a10, .byte = 0x1a },
		{ .addr = 0xf33a11, .byte = 0x5e },
		{ .addr = 0x60a65a, .byte = 0x0f },
		{ .addr = 0x60a65b, .byte = 0x54 },
		{ .addr = 0xf948b4, .byte = 0x91 },
		{ .addr = 0xf948b5, .byte = 0x61 }
};

static const SST_Transaction sbcd_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15940112, .data = 94, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6334042, .data = 185, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16337076, .data = 37217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6334042, .data = 84, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_25[] = {
		{ .addr = 0xd15a34, .byte = 0x87 },
		{ .addr = 0xd15a35, .byte = 0x03 },
		{ .addr = 0xd15a36, .byte = 0x50 },
		{ .addr = 0xd15a37, .byte = 0x1a },
		{ .addr = 0xd15a38, .byte = 0x98 },
		{ .addr = 0xd15a39, .byte = 0x0f }
};

static const SST_RamByte sbcd_final_ram_25[] = {
		{ .addr = 0xd15a34, .byte = 0x87 },
		{ .addr = 0xd15a35, .byte = 0x03 },
		{ .addr = 0xd15a36, .byte = 0x50 },
		{ .addr = 0xd15a37, .byte = 0x1a },
		{ .addr = 0xd15a38, .byte = 0x98 },
		{ .addr = 0xd15a39, .byte = 0x0f }
};

static const SST_Transaction sbcd_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13720120, .data = 38927, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_26[] = {
		{ .addr = 0x4f8c0e, .byte = 0x81 },
		{ .addr = 0x4f8c0f, .byte = 0x0c },
		{ .addr = 0x4f8c10, .byte = 0x52 },
		{ .addr = 0x4f8c11, .byte = 0x68 },
		{ .addr = 0xdcdd1a, .byte = 0x6e },
		{ .addr = 0xdcdd1b, .byte = 0xcf },
		{ .addr = 0xd0cdae, .byte = 0x97 },
		{ .addr = 0xd0cdaf, .byte = 0x4b },
		{ .addr = 0x4f8c12, .byte = 0x00 },
		{ .addr = 0x4f8c13, .byte = 0x70 }
};

static const SST_RamByte sbcd_final_ram_26[] = {
		{ .addr = 0x4f8c0e, .byte = 0x81 },
		{ .addr = 0x4f8c0f, .byte = 0x0c },
		{ .addr = 0x4f8c10, .byte = 0x52 },
		{ .addr = 0x4f8c11, .byte = 0x68 },
		{ .addr = 0xdcdd1a, .byte = 0x6e },
		{ .addr = 0xdcdd1b, .byte = 0xcf },
		{ .addr = 0xd0cdae, .byte = 0x61 },
		{ .addr = 0xd0cdaf, .byte = 0x4b },
		{ .addr = 0x4f8c12, .byte = 0x00 },
		{ .addr = 0x4f8c13, .byte = 0x70 }
};

static const SST_Transaction sbcd_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14474522, .data = 207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13684142, .data = 38656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5213202, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13684142, .data = 24832, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_27[] = {
		{ .addr = 0x8cbc0e, .byte = 0x89 },
		{ .addr = 0x8cbc0f, .byte = 0x02 },
		{ .addr = 0x8cbc10, .byte = 0x8b },
		{ .addr = 0x8cbc11, .byte = 0x22 },
		{ .addr = 0x8cbc12, .byte = 0x69 },
		{ .addr = 0x8cbc13, .byte = 0xfa }
};

static const SST_RamByte sbcd_final_ram_27[] = {
		{ .addr = 0x8cbc0e, .byte = 0x89 },
		{ .addr = 0x8cbc0f, .byte = 0x02 },
		{ .addr = 0x8cbc10, .byte = 0x8b },
		{ .addr = 0x8cbc11, .byte = 0x22 },
		{ .addr = 0x8cbc12, .byte = 0x69 },
		{ .addr = 0x8cbc13, .byte = 0xfa }
};

static const SST_Transaction sbcd_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9223186, .data = 27130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_28[] = {
		{ .addr = 0xd4cd80, .byte = 0x87 },
		{ .addr = 0xd4cd81, .byte = 0x00 },
		{ .addr = 0xd4cd82, .byte = 0xb6 },
		{ .addr = 0xd4cd83, .byte = 0x2d },
		{ .addr = 0xd4cd84, .byte = 0x34 },
		{ .addr = 0xd4cd85, .byte = 0xcf }
};

static const SST_RamByte sbcd_final_ram_28[] = {
		{ .addr = 0xd4cd80, .byte = 0x87 },
		{ .addr = 0xd4cd81, .byte = 0x00 },
		{ .addr = 0xd4cd82, .byte = 0xb6 },
		{ .addr = 0xd4cd83, .byte = 0x2d },
		{ .addr = 0xd4cd84, .byte = 0x34 },
		{ .addr = 0xd4cd85, .byte = 0xcf }
};

static const SST_Transaction sbcd_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13946244, .data = 13519, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_29[] = {
		{ .addr = 0x394dea, .byte = 0x87 },
		{ .addr = 0x394deb, .byte = 0x00 },
		{ .addr = 0x394dec, .byte = 0x90 },
		{ .addr = 0x394ded, .byte = 0xfd },
		{ .addr = 0x394dee, .byte = 0xb3 },
		{ .addr = 0x394def, .byte = 0xd9 }
};

static const SST_RamByte sbcd_final_ram_29[] = {
		{ .addr = 0x394dea, .byte = 0x87 },
		{ .addr = 0x394deb, .byte = 0x00 },
		{ .addr = 0x394dec, .byte = 0x90 },
		{ .addr = 0x394ded, .byte = 0xfd },
		{ .addr = 0x394dee, .byte = 0xb3 },
		{ .addr = 0x394def, .byte = 0xd9 }
};

static const SST_Transaction sbcd_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3755502, .data = 46041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte sbcd_initial_ram_30[] = {
		{ .addr = 0x49ab8a, .byte = 0x8f },
		{ .addr = 0x49ab8b, .byte = 0x0e },
		{ .addr = 0x49ab8c, .byte = 0x6b },
		{ .addr = 0x49ab8d, .byte = 0xc4 },
		{ .addr = 0x823af6, .byte = 0xfb },
		{ .addr = 0x823af7, .byte = 0xed },
		{ .addr = 0xba5484, .byte = 0x50 },
		{ .addr = 0xba5485, .byte = 0x43 },
		{ .addr = 0x49ab8e, .byte = 0xfa },
		{ .addr = 0x49ab8f, .byte = 0x76 }
};

static const SST_RamByte sbcd_final_ram_30[] = {
		{ .addr = 0x49ab8a, .byte = 0x8f },
		{ .addr = 0x49ab8b, .byte = 0x0e },
		{ .addr = 0x49ab8c, .byte = 0x6b },
		{ .addr = 0x49ab8d, .byte = 0xc4 },
		{ .addr = 0x823af6, .byte = 0xfb },
		{ .addr = 0x823af7, .byte = 0xed },
		{ .addr = 0xba5484, .byte = 0xfc },
		{ .addr = 0xba5485, .byte = 0x43 },
		{ .addr = 0x49ab8e, .byte = 0xfa },
		{ .addr = 0x49ab8f, .byte = 0x76 }
};

static const SST_Transaction sbcd_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8534774, .data = 237, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12211332, .data = 20480, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4828046, .data = 64118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12211332, .data = 64512, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte sbcd_initial_ram_31[] = {
		{ .addr = 0xbe2de4, .byte = 0x81 },
		{ .addr = 0xbe2de5, .byte = 0x0d },
		{ .addr = 0xbe2de6, .byte = 0x1f },
		{ .addr = 0xbe2de7, .byte = 0x73 },
		{ .addr = 0x5b8936, .byte = 0x0b },
		{ .addr = 0x5b8937, .byte = 0x4f },
		{ .addr = 0x0d8a1e, .byte = 0x31 },
		{ .addr = 0x0d8a1f, .byte = 0x27 },
		{ .addr = 0xbe2de8, .byte = 0x52 },
		{ .addr = 0xbe2de9, .byte = 0x35 }
};

static const SST_RamByte sbcd_final_ram_31[] = {
		{ .addr = 0xbe2de4, .byte = 0x81 },
		{ .addr = 0xbe2de5, .byte = 0x0d },
		{ .addr = 0xbe2de6, .byte = 0x1f },
		{ .addr = 0xbe2de7, .byte = 0x73 },
		{ .addr = 0x5b8936, .byte = 0x0b },
		{ .addr = 0x5b8937, .byte = 0x4f },
		{ .addr = 0x0d8a1e, .byte = 0x1f },
		{ .addr = 0x0d8a1f, .byte = 0x27 },
		{ .addr = 0xbe2de8, .byte = 0x52 },
		{ .addr = 0xbe2de9, .byte = 0x35 }
};

static const SST_Transaction sbcd_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5998902, .data = 2816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 887326, .data = 12544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12463592, .data = 21045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 887326, .data = 7936, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 SBCD D4, D6 8d04",
		.initial = {
			.regs = {
				82991075, 2573456758, 4001422937, 1193555402, 3636005028, 4148222931, 515262259, 549774369, 595937268, 1418680965, 500172362, 3395986420, 100811399, 1298069801, 321249104, 10513238, 13484386, 33793, 13504772
			},
			.prefetch0 = 36100,
			.prefetch1 = 26727,
			.ram = sbcd_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				82991075, 2573456758, 4001422937, 1193555402, 3636005028, 4148222931, 515262249, 549774369, 595937268, 1418680965, 500172362, 3395986420, 100811399, 1298069801, 321249104, 10513238, 13484386, 33811, 13504774
			},
			.prefetch0 = 26727,
			.prefetch1 = 49249,
			.ram = sbcd_final_ram_16,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_16,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "017 SBCD -(A4), -(A3) 870c",
		.initial = {
			.regs = {
				3221833895, 2593642246, 2832031471, 2852112675, 109104651, 3549625776, 4037235242, 4239713956, 665241298, 2675430006, 1878965245, 3256675529, 1058796581, 3851737539, 277033877, 12951596, 8657930, 33295, 659252
			},
			.prefetch0 = 34572,
			.prefetch1 = 6771,
			.ram = sbcd_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3221833895, 2593642246, 2832031471, 2852112675, 109104651, 3549625776, 4037235242, 4239713956, 665241298, 2675430006, 1878965245, 3256675528, 1058796580, 3851737539, 277033877, 12951596, 8657930, 33280, 659254
			},
			.prefetch0 = 6771,
			.prefetch1 = 57090,
			.ram = sbcd_final_ram_17,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_17,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "018 SBCD -(A4), -(A0) 810c",
		.initial = {
			.regs = {
				1193707345, 2200827242, 2569466187, 4034645250, 96921938, 3358665721, 63193414, 3532768046, 376426386, 4207803578, 693044610, 2332723804, 3791484861, 2355591087, 272666084, 9959732, 5578428, 33036, 12894636
			},
			.prefetch0 = 33036,
			.prefetch1 = 7256,
			.ram = sbcd_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1193707345, 2200827242, 2569466187, 4034645250, 96921938, 3358665721, 63193414, 3532768046, 376426385, 4207803578, 693044610, 2332723804, 3791484860, 2355591087, 272666084, 9959732, 5578428, 33049, 12894638
			},
			.prefetch0 = 7256,
			.prefetch1 = 37707,
			.ram = sbcd_final_ram_18,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_18,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "019 SBCD -(A0), -(A4) 8908",
		.initial = {
			.regs = {
				250256010, 1521131889, 3201637626, 2799005769, 1672131796, 1450047552, 2010449035, 4015017987, 880891152, 3005293199, 1066648098, 859068398, 819162644, 1886204002, 728992690, 16653092, 7180826, 34072, 1910306
			},
			.prefetch0 = 35080,
			.prefetch1 = 57374,
			.ram = sbcd_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				250256010, 1521131889, 3201637626, 2799005769, 1672131796, 1450047552, 2010449035, 4015017987, 880891151, 3005293199, 1066648098, 859068398, 819162643, 1886204002, 728992690, 16653092, 7180826, 34073, 1910308
			},
			.prefetch0 = 57374,
			.prefetch1 = 15076,
			.ram = sbcd_final_ram_19,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_19,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "020 SBCD -(A0), -(A2) 8508",
		.initial = {
			.regs = {
				175280953, 2035483847, 569822702, 593530646, 1617047518, 4262004240, 202289743, 674738115, 2396687554, 938481456, 3307352748, 4263612288, 631833504, 564723256, 3079552851, 258104, 10856208, 34312, 8502370
			},
			.prefetch0 = 34056,
			.prefetch1 = 40627,
			.ram = sbcd_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				175280953, 2035483847, 569822702, 593530646, 1617047518, 4262004240, 202289743, 674738115, 2396687553, 938481456, 3307352747, 4263612288, 631833504, 564723256, 3079552851, 258104, 10856208, 34323, 8502372
			},
			.prefetch0 = 40627,
			.prefetch1 = 22754,
			.ram = sbcd_final_ram_20,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_20,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "021 SBCD D0, D5 8b00",
		.initial = {
			.regs = {
				1179012633, 3680895986, 2007717904, 416863933, 3085239870, 2967018162, 2890031164, 1091277221, 423943919, 166485231, 2043257842, 3828699856, 38232057, 363292898, 3445296948, 4706910, 6000104, 9245, 7786786
			},
			.prefetch0 = 35584,
			.prefetch1 = 51608,
			.ram = sbcd_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1179012633, 3680895986, 2007717904, 416863933, 3085239870, 2967018130, 2890031164, 1091277221, 423943919, 166485231, 2043257842, 3828699856, 38232057, 363292898, 3445296948, 4706910, 6000104, 9224, 7786788
			},
			.prefetch0 = 51608,
			.prefetch1 = 35767,
			.ram = sbcd_final_ram_21,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_21,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "022 SBCD D0, D1 8300",
		.initial = {
			.regs = {
				247383508, 3650565796, 4244109476, 751515317, 1033312050, 3124916394, 2014299450, 2530829887, 2545985839, 95771795, 2756096870, 2185029736, 2316145698, 1623970386, 653802489, 9116924, 11249818, 9989, 11086356
			},
			.prefetch0 = 33536,
			.prefetch1 = 853,
			.ram = sbcd_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				247383508, 3650565744, 4244109476, 751515317, 1033312050, 3124916394, 2014299450, 2530829887, 2545985839, 95771795, 2756096870, 2185029736, 2316145698, 1623970386, 653802489, 9116924, 11249818, 10003, 11086358
			},
			.prefetch0 = 853,
			.prefetch1 = 25864,
			.ram = sbcd_final_ram_22,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_22,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "023 SBCD D5, D6 8d05",
		.initial = {
			.regs = {
				1988469406, 4195761498, 2535798460, 3387746014, 3888638365, 75594515, 4004686399, 569538350, 1883867751, 2345631556, 217669403, 3187812556, 3122038506, 2955048793, 726715327, 6090114, 2432048, 1302, 7307008
			},
			.prefetch0 = 36101,
			.prefetch1 = 54767,
			.ram = sbcd_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1988469406, 4195761498, 2535798460, 3387746014, 3888638365, 75594515, 4004686379, 569538350, 1883867751, 2345631556, 217669403, 3187812556, 3122038506, 2955048793, 726715327, 6090114, 2432048, 1280, 7307010
			},
			.prefetch0 = 54767,
			.prefetch1 = 58026,
			.ram = sbcd_final_ram_23,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_23,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "024 SBCD -(A1), -(A2) 8509",
		.initial = {
			.regs = {
				2551516377, 2564299095, 1552105478, 23697090, 2458158474, 485110387, 1936221457, 354806660, 1426273201, 1844656658, 4217415260, 1924250398, 3411642957, 1711616250, 308602675, 5859326, 2035778, 1555, 16337076
			},
			.prefetch0 = 34057,
			.prefetch1 = 17932,
			.ram = sbcd_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2551516377, 2564299095, 1552105478, 23697090, 2458158474, 485110387, 1936221457, 354806660, 1426273201, 1844656657, 4217415259, 1924250398, 3411642957, 1711616250, 308602675, 5859326, 2035778, 1536, 16337078
			},
			.prefetch0 = 17932,
			.prefetch1 = 37217,
			.ram = sbcd_final_ram_24,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 SBCD D3, D3 8703",
		.initial = {
			.regs = {
				1638335471, 1094745483, 1831732668, 2423566072, 4264783231, 933166946, 2643488482, 1561508126, 204490505, 3674444222, 1359587096, 2049802147, 1486439322, 2122234773, 3475770333, 14149428, 12377034, 42766, 13720120
			},
			.prefetch0 = 34563,
			.prefetch1 = 20506,
			.ram = sbcd_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1638335471, 1094745483, 1831732668, 2423565824, 4264783231, 933166946, 2643488482, 1561508126, 204490505, 3674444222, 1359587096, 2049802147, 1486439322, 2122234773, 3475770333, 14149428, 12377034, 42756, 13720122
			},
			.prefetch0 = 20506,
			.prefetch1 = 38927,
			.ram = sbcd_final_ram_25,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_25,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "026 SBCD -(A4), -(A0) 810c",
		.initial = {
			.regs = {
				1151310318, 1888048177, 2395779847, 3966661529, 1447891339, 3618653001, 2621507480, 4048230208, 282119599, 2066936458, 2842253241, 1275052818, 1272765724, 1382772806, 1487073407, 12939626, 11856496, 8473, 5213202
			},
			.prefetch0 = 33036,
			.prefetch1 = 21096,
			.ram = sbcd_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1151310318, 1888048177, 2395779847, 3966661529, 1447891339, 3618653001, 2621507480, 4048230208, 282119598, 2066936458, 2842253241, 1275052818, 1272765723, 1382772806, 1487073407, 12939626, 11856496, 8467, 5213204
			},
			.prefetch0 = 21096,
			.prefetch1 = 112,
			.ram = sbcd_final_ram_26,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_26,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "027 SBCD D2, D4 8902",
		.initial = {
			.regs = {
				422869201, 3256277522, 1363108828, 4258464481, 2812680877, 2421010806, 1726110819, 2115918366, 4052342663, 2033028483, 3747687068, 726158228, 767321113, 3940473820, 179096775, 2977562, 702230, 33546, 9223186
			},
			.prefetch0 = 35074,
			.prefetch1 = 35618,
			.ram = sbcd_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				422869201, 3256277522, 1363108828, 4258464481, 2812680817, 2421010806, 1726110819, 2115918366, 4052342663, 2033028483, 3747687068, 726158228, 767321113, 3940473820, 179096775, 2977562, 702230, 33555, 9223188
			},
			.prefetch0 = 35618,
			.prefetch1 = 27130,
			.ram = sbcd_final_ram_27,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_27,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "028 SBCD D0, D3 8700",
		.initial = {
			.regs = {
				4019307048, 1568812415, 2015092287, 682684747, 3517440381, 3307891937, 1753936225, 2823587493, 3661791213, 2847297345, 800114780, 2830494726, 3190084977, 2335804167, 138964260, 9651660, 12127898, 8986, 13946244
			},
			.prefetch0 = 34560,
			.prefetch1 = 46637,
			.ram = sbcd_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4019307048, 1568812415, 2015092287, 682684706, 3517440381, 3307891937, 1753936225, 2823587493, 3661791213, 2847297345, 800114780, 2830494726, 3190084977, 2335804167, 138964260, 9651660, 12127898, 8960, 13946246
			},
			.prefetch0 = 46637,
			.prefetch1 = 13519,
			.ram = sbcd_final_ram_28,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_28,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "029 SBCD D0, D3 8700",
		.initial = {
			.regs = {
				1477395610, 2430500201, 2368951160, 4055724970, 2679745764, 838011796, 3854453744, 3729655500, 2054544022, 3193554434, 937704720, 1166011284, 2575182139, 151631615, 1993238494, 6461220, 1395636, 1546, 3755502
			},
			.prefetch0 = 34560,
			.prefetch1 = 37117,
			.ram = sbcd_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1477395610, 2430500201, 2368951160, 4055724816, 2679745764, 838011796, 3854453744, 3729655500, 2054544022, 3193554434, 937704720, 1166011284, 2575182139, 151631615, 1993238494, 6461220, 1395636, 1536, 3755504
			},
			.prefetch0 = 37117,
			.prefetch1 = 46041,
			.ram = sbcd_final_ram_29,
			.ram_len = 6,
		},
		.transactions = sbcd_transactions_29,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "030 SBCD -(A6), -(A7) 8f0e",
		.initial = {
			.regs = {
				2473822724, 822022871, 1127508834, 106426620, 1615654901, 1285786760, 324032500, 3833776529, 126835802, 1476251415, 1901052978, 185485691, 1990171828, 682182865, 1451375352, 12211334, 9511190, 33565, 4828046
			},
			.prefetch0 = 36622,
			.prefetch1 = 27588,
			.ram = sbcd_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2473822724, 822022871, 1127508834, 106426620, 1615654901, 1285786760, 324032500, 3833776529, 126835802, 1476251415, 1901052978, 185485691, 1990171828, 682182865, 1451375351, 12211332, 9511190, 33561, 4828048
			},
			.prefetch0 = 27588,
			.prefetch1 = 64118,
			.ram = sbcd_final_ram_30,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_30,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "031 SBCD -(A5), -(A0) 810d",
		.initial = {
			.regs = {
				4163091727, 2254872795, 2380319918, 4199589138, 412068313, 1791061388, 3974359315, 267292394, 1208846879, 483009194, 1363192571, 2747202562, 272754333, 2640021815, 1306745744, 4373534, 10709272, 10007, 12463592
			},
			.prefetch0 = 33037,
			.prefetch1 = 8051,
			.ram = sbcd_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4163091727, 2254872795, 2380319918, 4199589138, 412068313, 1791061388, 3974359315, 267292394, 1208846878, 483009194, 1363192571, 2747202562, 272754333, 2640021814, 1306745744, 4373534, 10709272, 9984, 12463594
			},
			.prefetch0 = 8051,
			.prefetch1 = 21045,
			.ram = sbcd_final_ram_31,
			.ram_len = 10,
		},
		.transactions = sbcd_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_SBCD_H */