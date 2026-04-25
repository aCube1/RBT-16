#ifndef RBT_ROXLW_H
#define RBT_ROXLW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxlw_initial_ram_0[] = {
		{ .addr = 0x8b1e26, .byte = 0xe5 },
		{ .addr = 0x8b1e27, .byte = 0xf2 },
		{ .addr = 0x8b1e28, .byte = 0x32 },
		{ .addr = 0x8b1e29, .byte = 0xc5 },
		{ .addr = 0x8b1e2a, .byte = 0x8c },
		{ .addr = 0x8b1e2b, .byte = 0x62 },
		{ .addr = 0x2414a8, .byte = 0x71 },
		{ .addr = 0x2414a9, .byte = 0x7f },
		{ .addr = 0x8b1e2c, .byte = 0x50 },
		{ .addr = 0x8b1e2d, .byte = 0x0b }
};

static const SST_RamByte roxlw_final_ram_0[] = {
		{ .addr = 0x8b1e26, .byte = 0xe5 },
		{ .addr = 0x8b1e27, .byte = 0xf2 },
		{ .addr = 0x8b1e28, .byte = 0x32 },
		{ .addr = 0x8b1e29, .byte = 0xc5 },
		{ .addr = 0x8b1e2a, .byte = 0x8c },
		{ .addr = 0x8b1e2b, .byte = 0x62 },
		{ .addr = 0x2414a8, .byte = 0xe2 },
		{ .addr = 0x2414a9, .byte = 0xfe },
		{ .addr = 0x8b1e2c, .byte = 0x50 },
		{ .addr = 0x8b1e2d, .byte = 0x0b }
};

static const SST_Transaction roxlw_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9117226, .data = 35938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2364584, .data = 29055, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9117228, .data = 20491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2364584, .data = 58110, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxlw_initial_ram_1[] = {
		{ .addr = 0xa43f1a, .byte = 0xe5 },
		{ .addr = 0xa43f1b, .byte = 0xe2 },
		{ .addr = 0xa43f1c, .byte = 0x60 },
		{ .addr = 0xa43f1d, .byte = 0x63 },
		{ .addr = 0xc64a5a, .byte = 0x2f },
		{ .addr = 0xc64a5b, .byte = 0x21 },
		{ .addr = 0xa43f1e, .byte = 0x5e },
		{ .addr = 0xa43f1f, .byte = 0x16 }
};

static const SST_RamByte roxlw_final_ram_1[] = {
		{ .addr = 0xa43f1a, .byte = 0xe5 },
		{ .addr = 0xa43f1b, .byte = 0xe2 },
		{ .addr = 0xa43f1c, .byte = 0x60 },
		{ .addr = 0xa43f1d, .byte = 0x63 },
		{ .addr = 0xc64a5a, .byte = 0x5e },
		{ .addr = 0xc64a5b, .byte = 0x42 },
		{ .addr = 0xa43f1e, .byte = 0x5e },
		{ .addr = 0xa43f1f, .byte = 0x16 }
};

static const SST_Transaction roxlw_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12995162, .data = 12065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10764062, .data = 24086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12995162, .data = 24130, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxlw_initial_ram_2[] = {
		{ .addr = 0x1688c6, .byte = 0xe9 },
		{ .addr = 0x1688c7, .byte = 0x73 },
		{ .addr = 0x1688c8, .byte = 0x40 },
		{ .addr = 0x1688c9, .byte = 0x11 },
		{ .addr = 0x1688ca, .byte = 0x50 },
		{ .addr = 0x1688cb, .byte = 0xe7 }
};

static const SST_RamByte roxlw_final_ram_2[] = {
		{ .addr = 0x1688c6, .byte = 0xe9 },
		{ .addr = 0x1688c7, .byte = 0x73 },
		{ .addr = 0x1688c8, .byte = 0x40 },
		{ .addr = 0x1688c9, .byte = 0x11 },
		{ .addr = 0x1688ca, .byte = 0x50 },
		{ .addr = 0x1688cb, .byte = 0xe7 }
};

static const SST_Transaction roxlw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1476810, .data = 20711, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 116 },
};

static const SST_RamByte roxlw_initial_ram_3[] = {
		{ .addr = 0x8ebb66, .byte = 0xe3 },
		{ .addr = 0x8ebb67, .byte = 0x55 },
		{ .addr = 0x8ebb68, .byte = 0x47 },
		{ .addr = 0x8ebb69, .byte = 0xa0 },
		{ .addr = 0x8ebb6a, .byte = 0x88 },
		{ .addr = 0x8ebb6b, .byte = 0xe6 }
};

static const SST_RamByte roxlw_final_ram_3[] = {
		{ .addr = 0x8ebb66, .byte = 0xe3 },
		{ .addr = 0x8ebb67, .byte = 0x55 },
		{ .addr = 0x8ebb68, .byte = 0x47 },
		{ .addr = 0x8ebb69, .byte = 0xa0 },
		{ .addr = 0x8ebb6a, .byte = 0x88 },
		{ .addr = 0x8ebb6b, .byte = 0xe6 }
};

static const SST_Transaction roxlw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9354090, .data = 35046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte roxlw_initial_ram_4[] = {
		{ .addr = 0xc9c758, .byte = 0xe9 },
		{ .addr = 0xc9c759, .byte = 0x57 },
		{ .addr = 0xc9c75a, .byte = 0x3d },
		{ .addr = 0xc9c75b, .byte = 0x69 },
		{ .addr = 0xc9c75c, .byte = 0x4c },
		{ .addr = 0xc9c75d, .byte = 0x4f }
};

static const SST_RamByte roxlw_final_ram_4[] = {
		{ .addr = 0xc9c758, .byte = 0xe9 },
		{ .addr = 0xc9c759, .byte = 0x57 },
		{ .addr = 0xc9c75a, .byte = 0x3d },
		{ .addr = 0xc9c75b, .byte = 0x69 },
		{ .addr = 0xc9c75c, .byte = 0x4c },
		{ .addr = 0xc9c75d, .byte = 0x4f }
};

static const SST_Transaction roxlw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13223772, .data = 19535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxlw_initial_ram_5[] = {
		{ .addr = 0xa70816, .byte = 0xef },
		{ .addr = 0xa70817, .byte = 0x72 },
		{ .addr = 0xa70818, .byte = 0xe8 },
		{ .addr = 0xa70819, .byte = 0xaa },
		{ .addr = 0xa7081a, .byte = 0xc7 },
		{ .addr = 0xa7081b, .byte = 0x92 }
};

static const SST_RamByte roxlw_final_ram_5[] = {
		{ .addr = 0xa70816, .byte = 0xef },
		{ .addr = 0xa70817, .byte = 0x72 },
		{ .addr = 0xa70818, .byte = 0xe8 },
		{ .addr = 0xa70819, .byte = 0xaa },
		{ .addr = 0xa7081a, .byte = 0xc7 },
		{ .addr = 0xa7081b, .byte = 0x92 }
};

static const SST_Transaction roxlw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10946586, .data = 51090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte roxlw_initial_ram_6[] = {
		{ .addr = 0xb95332, .byte = 0xe7 },
		{ .addr = 0xb95333, .byte = 0x74 },
		{ .addr = 0xb95334, .byte = 0xae },
		{ .addr = 0xb95335, .byte = 0x50 },
		{ .addr = 0xb95336, .byte = 0xa9 },
		{ .addr = 0xb95337, .byte = 0x4d }
};

static const SST_RamByte roxlw_final_ram_6[] = {
		{ .addr = 0xb95332, .byte = 0xe7 },
		{ .addr = 0xb95333, .byte = 0x74 },
		{ .addr = 0xb95334, .byte = 0xae },
		{ .addr = 0xb95335, .byte = 0x50 },
		{ .addr = 0xb95336, .byte = 0xa9 },
		{ .addr = 0xb95337, .byte = 0x4d }
};

static const SST_Transaction roxlw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12145462, .data = 43341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 70 },
};

static const SST_RamByte roxlw_initial_ram_7[] = {
		{ .addr = 0xdd3436, .byte = 0xe5 },
		{ .addr = 0xdd3437, .byte = 0x55 },
		{ .addr = 0xdd3438, .byte = 0xcf },
		{ .addr = 0xdd3439, .byte = 0xef },
		{ .addr = 0xdd343a, .byte = 0x99 },
		{ .addr = 0xdd343b, .byte = 0x57 }
};

static const SST_RamByte roxlw_final_ram_7[] = {
		{ .addr = 0xdd3436, .byte = 0xe5 },
		{ .addr = 0xdd3437, .byte = 0x55 },
		{ .addr = 0xdd3438, .byte = 0xcf },
		{ .addr = 0xdd3439, .byte = 0xef },
		{ .addr = 0xdd343a, .byte = 0x99 },
		{ .addr = 0xdd343b, .byte = 0x57 }
};

static const SST_Transaction roxlw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14496826, .data = 39255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxlw_initial_ram_8[] = {
		{ .addr = 0x1f2698, .byte = 0xeb },
		{ .addr = 0x1f2699, .byte = 0x70 },
		{ .addr = 0x1f269a, .byte = 0x45 },
		{ .addr = 0x1f269b, .byte = 0x61 },
		{ .addr = 0x1f269c, .byte = 0xd0 },
		{ .addr = 0x1f269d, .byte = 0x6c }
};

static const SST_RamByte roxlw_final_ram_8[] = {
		{ .addr = 0x1f2698, .byte = 0xeb },
		{ .addr = 0x1f2699, .byte = 0x70 },
		{ .addr = 0x1f269a, .byte = 0x45 },
		{ .addr = 0x1f269b, .byte = 0x61 },
		{ .addr = 0x1f269c, .byte = 0xd0 },
		{ .addr = 0x1f269d, .byte = 0x6c }
};

static const SST_Transaction roxlw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2041500, .data = 53356, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte roxlw_initial_ram_9[] = {
		{ .addr = 0x29cdfe, .byte = 0xe7 },
		{ .addr = 0x29cdff, .byte = 0x76 },
		{ .addr = 0x29ce00, .byte = 0xb8 },
		{ .addr = 0x29ce01, .byte = 0x06 },
		{ .addr = 0x29ce02, .byte = 0x01 },
		{ .addr = 0x29ce03, .byte = 0x06 }
};

static const SST_RamByte roxlw_final_ram_9[] = {
		{ .addr = 0x29cdfe, .byte = 0xe7 },
		{ .addr = 0x29cdff, .byte = 0x76 },
		{ .addr = 0x29ce00, .byte = 0xb8 },
		{ .addr = 0x29ce01, .byte = 0x06 },
		{ .addr = 0x29ce02, .byte = 0x01 },
		{ .addr = 0x29ce03, .byte = 0x06 }
};

static const SST_Transaction roxlw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2739714, .data = 262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 112 },
};

static const SST_RamByte roxlw_initial_ram_10[] = {
		{ .addr = 0x4f6a64, .byte = 0xe7 },
		{ .addr = 0x4f6a65, .byte = 0x73 },
		{ .addr = 0x4f6a66, .byte = 0x19 },
		{ .addr = 0x4f6a67, .byte = 0xce },
		{ .addr = 0x4f6a68, .byte = 0x44 },
		{ .addr = 0x4f6a69, .byte = 0x42 }
};

static const SST_RamByte roxlw_final_ram_10[] = {
		{ .addr = 0x4f6a64, .byte = 0xe7 },
		{ .addr = 0x4f6a65, .byte = 0x73 },
		{ .addr = 0x4f6a66, .byte = 0x19 },
		{ .addr = 0x4f6a67, .byte = 0xce },
		{ .addr = 0x4f6a68, .byte = 0x44 },
		{ .addr = 0x4f6a69, .byte = 0x42 }
};

static const SST_Transaction roxlw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5204584, .data = 17474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 100 },
};

static const SST_RamByte roxlw_initial_ram_11[] = {
		{ .addr = 0x6969de, .byte = 0xe5 },
		{ .addr = 0x6969df, .byte = 0xe2 },
		{ .addr = 0x6969e0, .byte = 0x35 },
		{ .addr = 0x6969e1, .byte = 0xb8 },
		{ .addr = 0x9eb828, .byte = 0x1e },
		{ .addr = 0x9eb829, .byte = 0xe8 },
		{ .addr = 0x6969e2, .byte = 0x38 },
		{ .addr = 0x6969e3, .byte = 0x03 }
};

static const SST_RamByte roxlw_final_ram_11[] = {
		{ .addr = 0x6969de, .byte = 0xe5 },
		{ .addr = 0x6969df, .byte = 0xe2 },
		{ .addr = 0x6969e0, .byte = 0x35 },
		{ .addr = 0x6969e1, .byte = 0xb8 },
		{ .addr = 0x9eb828, .byte = 0x3d },
		{ .addr = 0x9eb829, .byte = 0xd0 },
		{ .addr = 0x6969e2, .byte = 0x38 },
		{ .addr = 0x6969e3, .byte = 0x03 }
};

static const SST_Transaction roxlw_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10401832, .data = 7912, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6908386, .data = 14339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10401832, .data = 15824, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxlw_initial_ram_12[] = {
		{ .addr = 0x1d1b4a, .byte = 0xe5 },
		{ .addr = 0x1d1b4b, .byte = 0xd8 },
		{ .addr = 0x1d1b4c, .byte = 0x80 },
		{ .addr = 0x1d1b4d, .byte = 0x84 },
		{ .addr = 0x00000c, .byte = 0x41 },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0xfd },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x84fd42, .byte = 0xfe },
		{ .addr = 0x84fd43, .byte = 0x2c },
		{ .addr = 0x84fd44, .byte = 0xcb },
		{ .addr = 0x84fd45, .byte = 0xf4 }
};

static const SST_RamByte roxlw_final_ram_12[] = {
		{ .addr = 0x1d1b4a, .byte = 0xe5 },
		{ .addr = 0x1d1b4b, .byte = 0xd8 },
		{ .addr = 0x1d1b4c, .byte = 0x80 },
		{ .addr = 0x1d1b4d, .byte = 0x84 },
		{ .addr = 0xeb1d3c, .byte = 0x1b },
		{ .addr = 0xeb1d3d, .byte = 0x4c },
		{ .addr = 0xeb1d38, .byte = 0x26 },
		{ .addr = 0xeb1d39, .byte = 0x0f },
		{ .addr = 0xeb1d3a, .byte = 0x00 },
		{ .addr = 0xeb1d3b, .byte = 0x1d },
		{ .addr = 0xeb1d36, .byte = 0xe5 },
		{ .addr = 0xeb1d37, .byte = 0xd8 },
		{ .addr = 0xeb1d34, .byte = 0xc7 },
		{ .addr = 0xeb1d35, .byte = 0x3d },
		{ .addr = 0xeb1d30, .byte = 0xe5 },
		{ .addr = 0xeb1d31, .byte = 0xd5 },
		{ .addr = 0xeb1d32, .byte = 0x45 },
		{ .addr = 0xeb1d33, .byte = 0x87 },
		{ .addr = 0x00000c, .byte = 0x41 },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0xfd },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x84fd42, .byte = 0xfe },
		{ .addr = 0x84fd43, .byte = 0x2c },
		{ .addr = 0x84fd44, .byte = 0xcb },
		{ .addr = 0x84fd45, .byte = 0xf4 }
};

static const SST_Transaction roxlw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8898364, .data = 14613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15408444, .data = 6988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15408440, .data = 9743, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15408442, .data = 29, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15408438, .data = 58840, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15408436, .data = 51005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15408432, .data = 58837, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15408434, .data = 17799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 64834, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8715586, .data = 65068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8715588, .data = 52212, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxlw_initial_ram_13[] = {
		{ .addr = 0xfb894e, .byte = 0xe3 },
		{ .addr = 0xfb894f, .byte = 0x75 },
		{ .addr = 0xfb8950, .byte = 0x86 },
		{ .addr = 0xfb8951, .byte = 0x2e },
		{ .addr = 0xfb8952, .byte = 0xce },
		{ .addr = 0xfb8953, .byte = 0x37 }
};

static const SST_RamByte roxlw_final_ram_13[] = {
		{ .addr = 0xfb894e, .byte = 0xe3 },
		{ .addr = 0xfb894f, .byte = 0x75 },
		{ .addr = 0xfb8950, .byte = 0x86 },
		{ .addr = 0xfb8951, .byte = 0x2e },
		{ .addr = 0xfb8952, .byte = 0xce },
		{ .addr = 0xfb8953, .byte = 0x37 }
};

static const SST_Transaction roxlw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16484690, .data = 52791, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 34 },
};

static const SST_RamByte roxlw_initial_ram_14[] = {
		{ .addr = 0x23213e, .byte = 0xe5 },
		{ .addr = 0x23213f, .byte = 0xde },
		{ .addr = 0x232140, .byte = 0x52 },
		{ .addr = 0x232141, .byte = 0x4d },
		{ .addr = 0xd95944, .byte = 0xcf },
		{ .addr = 0xd95945, .byte = 0x7f },
		{ .addr = 0x232142, .byte = 0xfb },
		{ .addr = 0x232143, .byte = 0xac }
};

static const SST_RamByte roxlw_final_ram_14[] = {
		{ .addr = 0x23213e, .byte = 0xe5 },
		{ .addr = 0x23213f, .byte = 0xde },
		{ .addr = 0x232140, .byte = 0x52 },
		{ .addr = 0x232141, .byte = 0x4d },
		{ .addr = 0xd95944, .byte = 0x9e },
		{ .addr = 0xd95945, .byte = 0xfe },
		{ .addr = 0x232142, .byte = 0xfb },
		{ .addr = 0x232143, .byte = 0xac }
};

static const SST_Transaction roxlw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14244164, .data = 53119, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2302274, .data = 64428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14244164, .data = 40702, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxlw_initial_ram_15[] = {
		{ .addr = 0xee5f22, .byte = 0xe7 },
		{ .addr = 0xee5f23, .byte = 0x77 },
		{ .addr = 0xee5f24, .byte = 0x3d },
		{ .addr = 0xee5f25, .byte = 0x36 },
		{ .addr = 0xee5f26, .byte = 0x5a },
		{ .addr = 0xee5f27, .byte = 0x47 }
};

static const SST_RamByte roxlw_final_ram_15[] = {
		{ .addr = 0xee5f22, .byte = 0xe7 },
		{ .addr = 0xee5f23, .byte = 0x77 },
		{ .addr = 0xee5f24, .byte = 0x3d },
		{ .addr = 0xee5f25, .byte = 0x36 },
		{ .addr = 0xee5f26, .byte = 0x5a },
		{ .addr = 0xee5f27, .byte = 0x47 }
};

static const SST_Transaction roxlw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15621926, .data = 23111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 102 },
};

const uint32_t ROXLW_TEST_COUNT = 16;
static const SST_TestCase roxlw[] = {
	{
		.name = "000 ROXL.w (d8, A2, Xn) e5f2",
		.initial = {
			.regs = {
				2260854261, 341931546, 4203190097, 1774206491, 2532021109, 3422268167, 1197923652, 1256044278, 3905986971, 1208596659, 2938361544, 2566779843, 2038703801, 3313804409, 2021619634, 12746910, 6791436, 33804, 9117226
			},
			.prefetch0 = 58866,
			.prefetch1 = 12997,
			.ram = roxlw_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2260854261, 341931546, 4203190097, 1774206491, 2532021109, 3422268167, 1197923652, 1256044278, 3905986971, 1208596659, 2938361544, 2566779843, 2038703801, 3313804409, 2021619634, 12746910, 6791436, 33800, 9117230
			},
			.prefetch0 = 35938,
			.prefetch1 = 20491,
			.ram = roxlw_final_ram_0,
			.ram_len = 10,
		},
		.transactions = roxlw_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 ROXL.w -(A2) e5e2",
		.initial = {
			.regs = {
				645988813, 1571608588, 2191444256, 368935504, 129372299, 3096218309, 1907321284, 2792335, 2709073105, 3829716267, 851855964, 3197827555, 2599895189, 4100162451, 421619148, 9966736, 4390224, 40961, 10764062
			},
			.prefetch0 = 58850,
			.prefetch1 = 24675,
			.ram = roxlw_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				645988813, 1571608588, 2191444256, 368935504, 129372299, 3096218309, 1907321284, 2792335, 2709073105, 3829716267, 851855962, 3197827555, 2599895189, 4100162451, 421619148, 9966736, 4390224, 40960, 10764064
			},
			.prefetch0 = 24675,
			.prefetch1 = 24086,
			.ram = roxlw_final_ram_1,
			.ram_len = 8,
		},
		.transactions = roxlw_transactions_1,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "002 ROXL.w D4, D3 e973",
		.initial = {
			.regs = {
				3364198566, 1764192253, 2143607511, 2235477144, 3615454457, 3740414098, 961921501, 3735322104, 1225175148, 2342578595, 92620798, 2304515234, 2855257381, 3532396595, 120171471, 12118492, 10912588, 34571, 1476810
			},
			.prefetch0 = 59763,
			.prefetch1 = 16401,
			.ram = roxlw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3364198566, 1764192253, 2143607511, 2235442709, 3615454457, 3740414098, 961921501, 3735322104, 1225175148, 2342578595, 92620798, 2304515234, 2855257381, 3532396595, 120171471, 12118492, 10912588, 34577, 1476812
			},
			.prefetch0 = 16401,
			.prefetch1 = 20711,
			.ram = roxlw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_2,
		.transactions_len = 2,
		.lenght = 120,
	},
	{
		.name = "003 ROXL.w 1, D5 e355",
		.initial = {
			.regs = {
				375419557, 367206774, 2674005588, 2647231320, 1050295217, 4032888213, 677071932, 3343013795, 1741062124, 3893281119, 3656113379, 1632689057, 3746893253, 3740736142, 2121709922, 12701074, 4177692, 32786, 9354090
			},
			.prefetch0 = 58197,
			.prefetch1 = 18336,
			.ram = roxlw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				375419557, 367206774, 2674005588, 2647231320, 1050295217, 4032887595, 677071932, 3343013795, 1741062124, 3893281119, 3656113379, 1632689057, 3746893253, 3740736142, 2121709922, 12701074, 4177692, 32793, 9354092
			},
			.prefetch0 = 18336,
			.prefetch1 = 35046,
			.ram = roxlw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_3,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "004 ROXL.w 4, D7 e957",
		.initial = {
			.regs = {
				1645116280, 305286549, 4093222136, 3975693892, 3612422162, 1339120908, 2257256773, 1491685356, 2664364315, 2711552613, 1485216254, 2698705950, 3784950983, 2504018036, 707143393, 13378656, 2243694, 9218, 13223772
			},
			.prefetch0 = 59735,
			.prefetch1 = 15721,
			.ram = roxlw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1645116280, 305286549, 4093222136, 3975693892, 3612422162, 1339120908, 2257256773, 1491730114, 2664364315, 2711552613, 1485216254, 2698705950, 3784950983, 2504018036, 707143393, 13378656, 2243694, 9224, 13223774
			},
			.prefetch0 = 15721,
			.prefetch1 = 19535,
			.ram = roxlw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_4,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "005 ROXL.w D7, D2 ef72",
		.initial = {
			.regs = {
				3622423450, 246256213, 2072680703, 548911163, 3266303417, 3379905272, 2337099027, 2682035573, 2131348841, 1979786585, 715360581, 359293615, 1380615556, 1809468053, 466269472, 4840814, 3738520, 34571, 10946586
			},
			.prefetch0 = 61298,
			.prefetch1 = 59562,
			.ram = roxlw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3622423450, 246256213, 2072667133, 548911163, 3266303417, 3379905272, 2337099027, 2682035573, 2131348841, 1979786585, 715360581, 359293615, 1380615556, 1809468053, 466269472, 4840814, 3738520, 34560, 10946588
			},
			.prefetch0 = 59562,
			.prefetch1 = 51090,
			.ram = roxlw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_5,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "006 ROXL.w D3, D4 e774",
		.initial = {
			.regs = {
				777428213, 439466668, 2700755553, 1092544162, 3887743169, 1638674434, 645879846, 3566941002, 3829089796, 2874885153, 863387017, 1093246044, 2557554031, 3250578497, 4224925956, 4118550, 12655140, 9755, 12145462
			},
			.prefetch0 = 59252,
			.prefetch1 = 44624,
			.ram = roxlw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				777428213, 439466668, 2700755553, 1092544162, 3887743169, 1638674434, 645879846, 3566941002, 3829089796, 2874885153, 863387017, 1093246044, 2557554031, 3250578497, 4224925956, 4118550, 12655140, 9745, 12145464
			},
			.prefetch0 = 44624,
			.prefetch1 = 43341,
			.ram = roxlw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_6,
		.transactions_len = 2,
		.lenght = 74,
	},
	{
		.name = "007 ROXL.w 2, D5 e555",
		.initial = {
			.regs = {
				3128811557, 1363634123, 3818033963, 1749268521, 3560678810, 2991589739, 312810495, 4065844071, 3451458213, 524110465, 612394826, 620263660, 4196754925, 1025417089, 767507025, 8768022, 1655646, 33550, 14496826
			},
			.prefetch0 = 58709,
			.prefetch1 = 53231,
			.ram = roxlw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3128811557, 1363634123, 3818033963, 1749268521, 3560678810, 2991596972, 312810495, 4065844071, 3451458213, 524110465, 612394826, 620263660, 4196754925, 1025417089, 767507025, 8768022, 1655646, 33536, 14496828
			},
			.prefetch0 = 53231,
			.prefetch1 = 39255,
			.ram = roxlw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_7,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "008 ROXL.w D5, D0 eb70",
		.initial = {
			.regs = {
				3853271067, 1138780708, 2167877294, 3763930330, 3586117388, 1468366308, 2698098861, 938315476, 2992327468, 839483492, 3565656043, 2373436303, 2518093770, 2294909863, 3611709299, 38176, 4981030, 794, 2041500
			},
			.prefetch0 = 60272,
			.prefetch1 = 17761,
			.ram = roxlw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3853254766, 1138780708, 2167877294, 3763930330, 3586117388, 1468366308, 2698098861, 938315476, 2992327468, 839483492, 3565656043, 2373436303, 2518093770, 2294909863, 3611709299, 38176, 4981030, 785, 2041502
			},
			.prefetch0 = 17761,
			.prefetch1 = 53356,
			.ram = roxlw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_8,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "009 ROXL.w D3, D6 e776",
		.initial = {
			.regs = {
				3339912535, 3651506047, 4172404370, 2405212215, 1436769775, 3357226539, 435551275, 2246305260, 1249398856, 4242388230, 4036694213, 2271394177, 1775154685, 3370697487, 3173017767, 2344646, 1098306, 10010, 2739714
			},
			.prefetch0 = 59254,
			.prefetch1 = 47110,
			.ram = roxlw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3339912535, 3651506047, 4172404370, 2405212215, 1436769775, 3357226539, 435536575, 2246305260, 1249398856, 4242388230, 4036694213, 2271394177, 1775154685, 3370697487, 3173017767, 2344646, 1098306, 10009, 2739716
			},
			.prefetch0 = 47110,
			.prefetch1 = 262,
			.ram = roxlw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_9,
		.transactions_len = 2,
		.lenght = 116,
	},
	{
		.name = "010 ROXL.w D3, D3 e773",
		.initial = {
			.regs = {
				1672970853, 2087237951, 576772143, 1001881585, 993570018, 1560575662, 2908943579, 241373700, 196888690, 1527379911, 4230407147, 572988249, 2887034826, 538857220, 1770355391, 4073142, 11393614, 9237, 5204584
			},
			.prefetch0 = 59251,
			.prefetch1 = 6606,
			.ram = roxlw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1672970853, 2087237951, 576772143, 1001906172, 993570018, 1560575662, 2908943579, 241373700, 196888690, 1527379911, 4230407147, 572988249, 2887034826, 538857220, 1770355391, 4073142, 11393614, 9224, 5204586
			},
			.prefetch0 = 6606,
			.prefetch1 = 17474,
			.ram = roxlw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_10,
		.transactions_len = 2,
		.lenght = 104,
	},
	{
		.name = "011 ROXL.w -(A2) e5e2",
		.initial = {
			.regs = {
				2579614297, 2351457243, 3750927777, 416732562, 88935088, 50479170, 2896909240, 1094428840, 2715686217, 694777089, 3684612138, 2168104501, 4246819941, 4092763382, 533115930, 696520, 2860002, 34313, 6908386
			},
			.prefetch0 = 58850,
			.prefetch1 = 13752,
			.ram = roxlw_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2579614297, 2351457243, 3750927777, 416732562, 88935088, 50479170, 2896909240, 1094428840, 2715686217, 694777089, 3684612136, 2168104501, 4246819941, 4092763382, 533115930, 696520, 2860002, 34304, 6908388
			},
			.prefetch0 = 13752,
			.prefetch1 = 14339,
			.ram = roxlw_final_ram_11,
			.ram_len = 8,
		},
		.transactions = roxlw_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 ROXL.w (A0)+ e5d8",
		.initial = {
			.regs = {
				2036234196, 1946775818, 3268878062, 1025373633, 1658933542, 2680586694, 4222033548, 2663437468, 1166526269, 2993224425, 4066525902, 3541603450, 2052186368, 769868048, 72468630, 11033790, 15408446, 9743, 1907534
			},
			.prefetch0 = 58840,
			.prefetch1 = 32900,
			.ram = roxlw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2036234196, 1946775818, 3268878062, 1025373633, 1658933542, 2680586694, 4222033548, 2663437468, 1166526271, 2993224425, 4066525902, 3541603450, 2052186368, 769868048, 72468630, 11033790, 15408432, 9743, 1099234630
			},
			.prefetch0 = 65068,
			.prefetch1 = 52212,
			.ram = roxlw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = roxlw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 ROXL.w D1, D5 e375",
		.initial = {
			.regs = {
				1332904020, 1513009296, 2778286623, 3457741741, 3249433703, 1331529312, 3693603428, 1550823591, 1758485334, 2691745091, 3551197651, 918174729, 3191725463, 3732749045, 4055213267, 13940648, 5525544, 40972, 16484690
			},
			.prefetch0 = 58229,
			.prefetch1 = 34350,
			.ram = roxlw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1332904020, 1513009296, 2778286623, 3457741741, 3249433703, 1331512112, 3693603428, 1550823591, 1758485334, 2691745091, 3551197651, 918174729, 3191725463, 3732749045, 4055213267, 13940648, 5525544, 40960, 16484692
			},
			.prefetch0 = 34350,
			.prefetch1 = 52791,
			.ram = roxlw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_13,
		.transactions_len = 2,
		.lenght = 38,
	},
	{
		.name = "014 ROXL.w (A6)+ e5de",
		.initial = {
			.regs = {
				1852080054, 4092754595, 77495529, 2268602082, 2377659033, 3305009221, 2303402388, 3142968735, 45778391, 850649117, 1090407681, 3667957036, 1353424209, 2731212174, 4225325380, 3481072, 16214708, 771, 2302274
			},
			.prefetch0 = 58846,
			.prefetch1 = 21069,
			.ram = roxlw_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1852080054, 4092754595, 77495529, 2268602082, 2377659033, 3305009221, 2303402388, 3142968735, 45778391, 850649117, 1090407681, 3667957036, 1353424209, 2731212174, 4225325382, 3481072, 16214708, 793, 2302276
			},
			.prefetch0 = 21069,
			.prefetch1 = 64428,
			.ram = roxlw_final_ram_14,
			.ram_len = 8,
		},
		.transactions = roxlw_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 ROXL.w D3, D7 e777",
		.initial = {
			.regs = {
				1230771305, 507151705, 3895253793, 712985970, 643402216, 2950669443, 2344765695, 698459681, 2900417597, 2496541591, 1757278635, 460001260, 546679947, 1106971214, 276303033, 11945740, 2440550, 33815, 15621926
			},
			.prefetch0 = 59255,
			.prefetch1 = 15670,
			.ram = roxlw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1230771305, 507151705, 3895253793, 712985970, 643402216, 2950669443, 2344765695, 698471184, 2900417597, 2496541591, 1757278635, 460001260, 546679947, 1106971214, 276303033, 11945740, 2440550, 33817, 15621928
			},
			.prefetch0 = 15670,
			.prefetch1 = 23111,
			.ram = roxlw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxlw_transactions_15,
		.transactions_len = 2,
		.lenght = 106,
	},
};

#endif /* RBT_ROXLW_H */