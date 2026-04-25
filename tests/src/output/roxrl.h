#ifndef RBT_ROXRL_H
#define RBT_ROXRL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxrl_initial_ram_0[] = {
		{ .addr = 0xf39b80, .byte = 0xe4 },
		{ .addr = 0xf39b81, .byte = 0x91 },
		{ .addr = 0xf39b82, .byte = 0x0c },
		{ .addr = 0xf39b83, .byte = 0x21 },
		{ .addr = 0xf39b84, .byte = 0x60 },
		{ .addr = 0xf39b85, .byte = 0x78 }
};

static const SST_RamByte roxrl_final_ram_0[] = {
		{ .addr = 0xf39b80, .byte = 0xe4 },
		{ .addr = 0xf39b81, .byte = 0x91 },
		{ .addr = 0xf39b82, .byte = 0x0c },
		{ .addr = 0xf39b83, .byte = 0x21 },
		{ .addr = 0xf39b84, .byte = 0x60 },
		{ .addr = 0xf39b85, .byte = 0x78 }
};

static const SST_Transaction roxrl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15965060, .data = 24696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrl_initial_ram_1[] = {
		{ .addr = 0x80ea54, .byte = 0xe2 },
		{ .addr = 0x80ea55, .byte = 0xb5 },
		{ .addr = 0x80ea56, .byte = 0x09 },
		{ .addr = 0x80ea57, .byte = 0x9b },
		{ .addr = 0x80ea58, .byte = 0x14 },
		{ .addr = 0x80ea59, .byte = 0x29 }
};

static const SST_RamByte roxrl_final_ram_1[] = {
		{ .addr = 0x80ea54, .byte = 0xe2 },
		{ .addr = 0x80ea55, .byte = 0xb5 },
		{ .addr = 0x80ea56, .byte = 0x09 },
		{ .addr = 0x80ea57, .byte = 0x9b },
		{ .addr = 0x80ea58, .byte = 0x14 },
		{ .addr = 0x80ea59, .byte = 0x29 }
};

static const SST_Transaction roxrl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8448600, .data = 5161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte roxrl_initial_ram_2[] = {
		{ .addr = 0xdc7316, .byte = 0xea },
		{ .addr = 0xdc7317, .byte = 0xb4 },
		{ .addr = 0xdc7318, .byte = 0xac },
		{ .addr = 0xdc7319, .byte = 0xc0 },
		{ .addr = 0xdc731a, .byte = 0x4c },
		{ .addr = 0xdc731b, .byte = 0x5e }
};

static const SST_RamByte roxrl_final_ram_2[] = {
		{ .addr = 0xdc7316, .byte = 0xea },
		{ .addr = 0xdc7317, .byte = 0xb4 },
		{ .addr = 0xdc7318, .byte = 0xac },
		{ .addr = 0xdc7319, .byte = 0xc0 },
		{ .addr = 0xdc731a, .byte = 0x4c },
		{ .addr = 0xdc731b, .byte = 0x5e }
};

static const SST_Transaction roxrl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14447386, .data = 19550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte roxrl_initial_ram_3[] = {
		{ .addr = 0xab7292, .byte = 0xe6 },
		{ .addr = 0xab7293, .byte = 0x95 },
		{ .addr = 0xab7294, .byte = 0xa9 },
		{ .addr = 0xab7295, .byte = 0xe0 },
		{ .addr = 0xab7296, .byte = 0x50 },
		{ .addr = 0xab7297, .byte = 0x8b }
};

static const SST_RamByte roxrl_final_ram_3[] = {
		{ .addr = 0xab7292, .byte = 0xe6 },
		{ .addr = 0xab7293, .byte = 0x95 },
		{ .addr = 0xab7294, .byte = 0xa9 },
		{ .addr = 0xab7295, .byte = 0xe0 },
		{ .addr = 0xab7296, .byte = 0x50 },
		{ .addr = 0xab7297, .byte = 0x8b }
};

static const SST_Transaction roxrl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11235990, .data = 20619, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrl_initial_ram_4[] = {
		{ .addr = 0x2c9ef4, .byte = 0xec },
		{ .addr = 0x2c9ef5, .byte = 0xb5 },
		{ .addr = 0x2c9ef6, .byte = 0xe8 },
		{ .addr = 0x2c9ef7, .byte = 0x5e },
		{ .addr = 0x2c9ef8, .byte = 0x8d },
		{ .addr = 0x2c9ef9, .byte = 0x10 }
};

static const SST_RamByte roxrl_final_ram_4[] = {
		{ .addr = 0x2c9ef4, .byte = 0xec },
		{ .addr = 0x2c9ef5, .byte = 0xb5 },
		{ .addr = 0x2c9ef6, .byte = 0xe8 },
		{ .addr = 0x2c9ef7, .byte = 0x5e },
		{ .addr = 0x2c9ef8, .byte = 0x8d },
		{ .addr = 0x2c9ef9, .byte = 0x10 }
};

static const SST_Transaction roxrl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2924280, .data = 36112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte roxrl_initial_ram_5[] = {
		{ .addr = 0xc4c722, .byte = 0xec },
		{ .addr = 0xc4c723, .byte = 0x93 },
		{ .addr = 0xc4c724, .byte = 0x1c },
		{ .addr = 0xc4c725, .byte = 0x5f },
		{ .addr = 0xc4c726, .byte = 0x5c },
		{ .addr = 0xc4c727, .byte = 0xd4 }
};

static const SST_RamByte roxrl_final_ram_5[] = {
		{ .addr = 0xc4c722, .byte = 0xec },
		{ .addr = 0xc4c723, .byte = 0x93 },
		{ .addr = 0xc4c724, .byte = 0x1c },
		{ .addr = 0xc4c725, .byte = 0x5f },
		{ .addr = 0xc4c726, .byte = 0x5c },
		{ .addr = 0xc4c727, .byte = 0xd4 }
};

static const SST_Transaction roxrl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12896038, .data = 23764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrl_initial_ram_6[] = {
		{ .addr = 0x45b8fe, .byte = 0xe2 },
		{ .addr = 0x45b8ff, .byte = 0x92 },
		{ .addr = 0x45b900, .byte = 0xb5 },
		{ .addr = 0x45b901, .byte = 0x4d },
		{ .addr = 0x45b902, .byte = 0x3d },
		{ .addr = 0x45b903, .byte = 0x85 }
};

static const SST_RamByte roxrl_final_ram_6[] = {
		{ .addr = 0x45b8fe, .byte = 0xe2 },
		{ .addr = 0x45b8ff, .byte = 0x92 },
		{ .addr = 0x45b900, .byte = 0xb5 },
		{ .addr = 0x45b901, .byte = 0x4d },
		{ .addr = 0x45b902, .byte = 0x3d },
		{ .addr = 0x45b903, .byte = 0x85 }
};

static const SST_Transaction roxrl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4569346, .data = 15749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrl_initial_ram_7[] = {
		{ .addr = 0x7c5ef0, .byte = 0xe6 },
		{ .addr = 0x7c5ef1, .byte = 0x97 },
		{ .addr = 0x7c5ef2, .byte = 0x0a },
		{ .addr = 0x7c5ef3, .byte = 0x9b },
		{ .addr = 0x7c5ef4, .byte = 0x62 },
		{ .addr = 0x7c5ef5, .byte = 0xa5 }
};

static const SST_RamByte roxrl_final_ram_7[] = {
		{ .addr = 0x7c5ef0, .byte = 0xe6 },
		{ .addr = 0x7c5ef1, .byte = 0x97 },
		{ .addr = 0x7c5ef2, .byte = 0x0a },
		{ .addr = 0x7c5ef3, .byte = 0x9b },
		{ .addr = 0x7c5ef4, .byte = 0x62 },
		{ .addr = 0x7c5ef5, .byte = 0xa5 }
};

static const SST_Transaction roxrl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8150772, .data = 25253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrl_initial_ram_8[] = {
		{ .addr = 0xb8df64, .byte = 0xe8 },
		{ .addr = 0xb8df65, .byte = 0xb6 },
		{ .addr = 0xb8df66, .byte = 0xc6 },
		{ .addr = 0xb8df67, .byte = 0x4a },
		{ .addr = 0xb8df68, .byte = 0x7d },
		{ .addr = 0xb8df69, .byte = 0x06 }
};

static const SST_RamByte roxrl_final_ram_8[] = {
		{ .addr = 0xb8df64, .byte = 0xe8 },
		{ .addr = 0xb8df65, .byte = 0xb6 },
		{ .addr = 0xb8df66, .byte = 0xc6 },
		{ .addr = 0xb8df67, .byte = 0x4a },
		{ .addr = 0xb8df68, .byte = 0x7d },
		{ .addr = 0xb8df69, .byte = 0x06 }
};

static const SST_Transaction roxrl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12115816, .data = 32006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrl_initial_ram_9[] = {
		{ .addr = 0x687d58, .byte = 0xe8 },
		{ .addr = 0x687d59, .byte = 0x96 },
		{ .addr = 0x687d5a, .byte = 0x68 },
		{ .addr = 0x687d5b, .byte = 0x9d },
		{ .addr = 0x687d5c, .byte = 0x7c },
		{ .addr = 0x687d5d, .byte = 0xc9 }
};

static const SST_RamByte roxrl_final_ram_9[] = {
		{ .addr = 0x687d58, .byte = 0xe8 },
		{ .addr = 0x687d59, .byte = 0x96 },
		{ .addr = 0x687d5a, .byte = 0x68 },
		{ .addr = 0x687d5b, .byte = 0x9d },
		{ .addr = 0x687d5c, .byte = 0x7c },
		{ .addr = 0x687d5d, .byte = 0xc9 }
};

static const SST_Transaction roxrl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6847836, .data = 31945, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxrl_initial_ram_10[] = {
		{ .addr = 0x9c2218, .byte = 0xec },
		{ .addr = 0x9c2219, .byte = 0x95 },
		{ .addr = 0x9c221a, .byte = 0xc1 },
		{ .addr = 0x9c221b, .byte = 0x34 },
		{ .addr = 0x9c221c, .byte = 0xd3 },
		{ .addr = 0x9c221d, .byte = 0xbb }
};

static const SST_RamByte roxrl_final_ram_10[] = {
		{ .addr = 0x9c2218, .byte = 0xec },
		{ .addr = 0x9c2219, .byte = 0x95 },
		{ .addr = 0x9c221a, .byte = 0xc1 },
		{ .addr = 0x9c221b, .byte = 0x34 },
		{ .addr = 0x9c221c, .byte = 0xd3 },
		{ .addr = 0x9c221d, .byte = 0xbb }
};

static const SST_Transaction roxrl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10232348, .data = 54203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrl_initial_ram_11[] = {
		{ .addr = 0xba5188, .byte = 0xee },
		{ .addr = 0xba5189, .byte = 0x97 },
		{ .addr = 0xba518a, .byte = 0x5f },
		{ .addr = 0xba518b, .byte = 0x10 },
		{ .addr = 0xba518c, .byte = 0x32 },
		{ .addr = 0xba518d, .byte = 0x18 }
};

static const SST_RamByte roxrl_final_ram_11[] = {
		{ .addr = 0xba5188, .byte = 0xee },
		{ .addr = 0xba5189, .byte = 0x97 },
		{ .addr = 0xba518a, .byte = 0x5f },
		{ .addr = 0xba518b, .byte = 0x10 },
		{ .addr = 0xba518c, .byte = 0x32 },
		{ .addr = 0xba518d, .byte = 0x18 }
};

static const SST_Transaction roxrl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12210572, .data = 12824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrl_initial_ram_12[] = {
		{ .addr = 0xb2f5d8, .byte = 0xe0 },
		{ .addr = 0xb2f5d9, .byte = 0xb6 },
		{ .addr = 0xb2f5da, .byte = 0x6a },
		{ .addr = 0xb2f5db, .byte = 0x27 },
		{ .addr = 0xb2f5dc, .byte = 0xe0 },
		{ .addr = 0xb2f5dd, .byte = 0x08 }
};

static const SST_RamByte roxrl_final_ram_12[] = {
		{ .addr = 0xb2f5d8, .byte = 0xe0 },
		{ .addr = 0xb2f5d9, .byte = 0xb6 },
		{ .addr = 0xb2f5da, .byte = 0x6a },
		{ .addr = 0xb2f5db, .byte = 0x27 },
		{ .addr = 0xb2f5dc, .byte = 0xe0 },
		{ .addr = 0xb2f5dd, .byte = 0x08 }
};

static const SST_Transaction roxrl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11728348, .data = 57352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte roxrl_initial_ram_13[] = {
		{ .addr = 0x0f6f5e, .byte = 0xe2 },
		{ .addr = 0x0f6f5f, .byte = 0xb4 },
		{ .addr = 0x0f6f60, .byte = 0xf7 },
		{ .addr = 0x0f6f61, .byte = 0x34 },
		{ .addr = 0x0f6f62, .byte = 0x85 },
		{ .addr = 0x0f6f63, .byte = 0xa9 }
};

static const SST_RamByte roxrl_final_ram_13[] = {
		{ .addr = 0x0f6f5e, .byte = 0xe2 },
		{ .addr = 0x0f6f5f, .byte = 0xb4 },
		{ .addr = 0x0f6f60, .byte = 0xf7 },
		{ .addr = 0x0f6f61, .byte = 0x34 },
		{ .addr = 0x0f6f62, .byte = 0x85 },
		{ .addr = 0x0f6f63, .byte = 0xa9 }
};

static const SST_Transaction roxrl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1011554, .data = 34217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte roxrl_initial_ram_14[] = {
		{ .addr = 0x4a44ea, .byte = 0xea },
		{ .addr = 0x4a44eb, .byte = 0x97 },
		{ .addr = 0x4a44ec, .byte = 0x77 },
		{ .addr = 0x4a44ed, .byte = 0x89 },
		{ .addr = 0x4a44ee, .byte = 0xc7 },
		{ .addr = 0x4a44ef, .byte = 0xcf }
};

static const SST_RamByte roxrl_final_ram_14[] = {
		{ .addr = 0x4a44ea, .byte = 0xea },
		{ .addr = 0x4a44eb, .byte = 0x97 },
		{ .addr = 0x4a44ec, .byte = 0x77 },
		{ .addr = 0x4a44ed, .byte = 0x89 },
		{ .addr = 0x4a44ee, .byte = 0xc7 },
		{ .addr = 0x4a44ef, .byte = 0xcf }
};

static const SST_Transaction roxrl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4867310, .data = 51151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrl_initial_ram_15[] = {
		{ .addr = 0x6e11d6, .byte = 0xe2 },
		{ .addr = 0x6e11d7, .byte = 0xb7 },
		{ .addr = 0x6e11d8, .byte = 0xe0 },
		{ .addr = 0x6e11d9, .byte = 0x97 },
		{ .addr = 0x6e11da, .byte = 0x63 },
		{ .addr = 0x6e11db, .byte = 0x9e }
};

static const SST_RamByte roxrl_final_ram_15[] = {
		{ .addr = 0x6e11d6, .byte = 0xe2 },
		{ .addr = 0x6e11d7, .byte = 0xb7 },
		{ .addr = 0x6e11d8, .byte = 0xe0 },
		{ .addr = 0x6e11d9, .byte = 0x97 },
		{ .addr = 0x6e11da, .byte = 0x63 },
		{ .addr = 0x6e11db, .byte = 0x9e }
};

static const SST_Transaction roxrl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7213530, .data = 25502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 84 },
};

static const SST_RamByte roxrl_initial_ram_16[] = {
		{ .addr = 0x5a4bfe, .byte = 0xea },
		{ .addr = 0x5a4bff, .byte = 0x93 },
		{ .addr = 0x5a4c00, .byte = 0x2e },
		{ .addr = 0x5a4c01, .byte = 0xa7 },
		{ .addr = 0x5a4c02, .byte = 0xd9 },
		{ .addr = 0x5a4c03, .byte = 0xad }
};

static const SST_RamByte roxrl_final_ram_16[] = {
		{ .addr = 0x5a4bfe, .byte = 0xea },
		{ .addr = 0x5a4bff, .byte = 0x93 },
		{ .addr = 0x5a4c00, .byte = 0x2e },
		{ .addr = 0x5a4c01, .byte = 0xa7 },
		{ .addr = 0x5a4c02, .byte = 0xd9 },
		{ .addr = 0x5a4c03, .byte = 0xad }
};

static const SST_Transaction roxrl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5917698, .data = 55725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrl_initial_ram_17[] = {
		{ .addr = 0x6c6f4e, .byte = 0xe8 },
		{ .addr = 0x6c6f4f, .byte = 0xb2 },
		{ .addr = 0x6c6f50, .byte = 0x67 },
		{ .addr = 0x6c6f51, .byte = 0x5f },
		{ .addr = 0x6c6f52, .byte = 0xde },
		{ .addr = 0x6c6f53, .byte = 0x81 }
};

static const SST_RamByte roxrl_final_ram_17[] = {
		{ .addr = 0x6c6f4e, .byte = 0xe8 },
		{ .addr = 0x6c6f4f, .byte = 0xb2 },
		{ .addr = 0x6c6f50, .byte = 0x67 },
		{ .addr = 0x6c6f51, .byte = 0x5f },
		{ .addr = 0x6c6f52, .byte = 0xde },
		{ .addr = 0x6c6f53, .byte = 0x81 }
};

static const SST_Transaction roxrl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7106386, .data = 56961, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrl_initial_ram_18[] = {
		{ .addr = 0xb96834, .byte = 0xea },
		{ .addr = 0xb96835, .byte = 0x96 },
		{ .addr = 0xb96836, .byte = 0xa7 },
		{ .addr = 0xb96837, .byte = 0xea },
		{ .addr = 0xb96838, .byte = 0xa3 },
		{ .addr = 0xb96839, .byte = 0xa2 }
};

static const SST_RamByte roxrl_final_ram_18[] = {
		{ .addr = 0xb96834, .byte = 0xea },
		{ .addr = 0xb96835, .byte = 0x96 },
		{ .addr = 0xb96836, .byte = 0xa7 },
		{ .addr = 0xb96837, .byte = 0xea },
		{ .addr = 0xb96838, .byte = 0xa3 },
		{ .addr = 0xb96839, .byte = 0xa2 }
};

static const SST_Transaction roxrl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12150840, .data = 41890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrl_initial_ram_19[] = {
		{ .addr = 0x140b20, .byte = 0xe6 },
		{ .addr = 0x140b21, .byte = 0x92 },
		{ .addr = 0x140b22, .byte = 0x1e },
		{ .addr = 0x140b23, .byte = 0x9c },
		{ .addr = 0x140b24, .byte = 0xf6 },
		{ .addr = 0x140b25, .byte = 0x4c }
};

static const SST_RamByte roxrl_final_ram_19[] = {
		{ .addr = 0x140b20, .byte = 0xe6 },
		{ .addr = 0x140b21, .byte = 0x92 },
		{ .addr = 0x140b22, .byte = 0x1e },
		{ .addr = 0x140b23, .byte = 0x9c },
		{ .addr = 0x140b24, .byte = 0xf6 },
		{ .addr = 0x140b25, .byte = 0x4c }
};

static const SST_Transaction roxrl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1313572, .data = 63052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrl_initial_ram_20[] = {
		{ .addr = 0xd1ed5a, .byte = 0xea },
		{ .addr = 0xd1ed5b, .byte = 0x90 },
		{ .addr = 0xd1ed5c, .byte = 0xc6 },
		{ .addr = 0xd1ed5d, .byte = 0x77 },
		{ .addr = 0xd1ed5e, .byte = 0x59 },
		{ .addr = 0xd1ed5f, .byte = 0xac }
};

static const SST_RamByte roxrl_final_ram_20[] = {
		{ .addr = 0xd1ed5a, .byte = 0xea },
		{ .addr = 0xd1ed5b, .byte = 0x90 },
		{ .addr = 0xd1ed5c, .byte = 0xc6 },
		{ .addr = 0xd1ed5d, .byte = 0x77 },
		{ .addr = 0xd1ed5e, .byte = 0x59 },
		{ .addr = 0xd1ed5f, .byte = 0xac }
};

static const SST_Transaction roxrl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13757790, .data = 22956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrl_initial_ram_21[] = {
		{ .addr = 0x5d25d6, .byte = 0xee },
		{ .addr = 0x5d25d7, .byte = 0x90 },
		{ .addr = 0x5d25d8, .byte = 0x5f },
		{ .addr = 0x5d25d9, .byte = 0x24 },
		{ .addr = 0x5d25da, .byte = 0x88 },
		{ .addr = 0x5d25db, .byte = 0xf6 }
};

static const SST_RamByte roxrl_final_ram_21[] = {
		{ .addr = 0x5d25d6, .byte = 0xee },
		{ .addr = 0x5d25d7, .byte = 0x90 },
		{ .addr = 0x5d25d8, .byte = 0x5f },
		{ .addr = 0x5d25d9, .byte = 0x24 },
		{ .addr = 0x5d25da, .byte = 0x88 },
		{ .addr = 0x5d25db, .byte = 0xf6 }
};

static const SST_Transaction roxrl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6104538, .data = 35062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrl_initial_ram_22[] = {
		{ .addr = 0xeb48f8, .byte = 0xee },
		{ .addr = 0xeb48f9, .byte = 0x91 },
		{ .addr = 0xeb48fa, .byte = 0xec },
		{ .addr = 0xeb48fb, .byte = 0xff },
		{ .addr = 0xeb48fc, .byte = 0xbb },
		{ .addr = 0xeb48fd, .byte = 0x7a }
};

static const SST_RamByte roxrl_final_ram_22[] = {
		{ .addr = 0xeb48f8, .byte = 0xee },
		{ .addr = 0xeb48f9, .byte = 0x91 },
		{ .addr = 0xeb48fa, .byte = 0xec },
		{ .addr = 0xeb48fb, .byte = 0xff },
		{ .addr = 0xeb48fc, .byte = 0xbb },
		{ .addr = 0xeb48fd, .byte = 0x7a }
};

static const SST_Transaction roxrl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15419644, .data = 47994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrl_initial_ram_23[] = {
		{ .addr = 0x952a08, .byte = 0xe8 },
		{ .addr = 0x952a09, .byte = 0x97 },
		{ .addr = 0x952a0a, .byte = 0x12 },
		{ .addr = 0x952a0b, .byte = 0x68 },
		{ .addr = 0x952a0c, .byte = 0x3b },
		{ .addr = 0x952a0d, .byte = 0x4c }
};

static const SST_RamByte roxrl_final_ram_23[] = {
		{ .addr = 0x952a08, .byte = 0xe8 },
		{ .addr = 0x952a09, .byte = 0x97 },
		{ .addr = 0x952a0a, .byte = 0x12 },
		{ .addr = 0x952a0b, .byte = 0x68 },
		{ .addr = 0x952a0c, .byte = 0x3b },
		{ .addr = 0x952a0d, .byte = 0x4c }
};

static const SST_Transaction roxrl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9775628, .data = 15180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxrl_initial_ram_24[] = {
		{ .addr = 0x56d348, .byte = 0xe8 },
		{ .addr = 0x56d349, .byte = 0xb7 },
		{ .addr = 0x56d34a, .byte = 0xf6 },
		{ .addr = 0x56d34b, .byte = 0x62 },
		{ .addr = 0x56d34c, .byte = 0x33 },
		{ .addr = 0x56d34d, .byte = 0x7d }
};

static const SST_RamByte roxrl_final_ram_24[] = {
		{ .addr = 0x56d348, .byte = 0xe8 },
		{ .addr = 0x56d349, .byte = 0xb7 },
		{ .addr = 0x56d34a, .byte = 0xf6 },
		{ .addr = 0x56d34b, .byte = 0x62 },
		{ .addr = 0x56d34c, .byte = 0x33 },
		{ .addr = 0x56d34d, .byte = 0x7d }
};

static const SST_Transaction roxrl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5690188, .data = 13181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

static const SST_RamByte roxrl_initial_ram_25[] = {
		{ .addr = 0x34d1d0, .byte = 0xee },
		{ .addr = 0x34d1d1, .byte = 0xb4 },
		{ .addr = 0x34d1d2, .byte = 0x24 },
		{ .addr = 0x34d1d3, .byte = 0x62 },
		{ .addr = 0x34d1d4, .byte = 0x98 },
		{ .addr = 0x34d1d5, .byte = 0x01 }
};

static const SST_RamByte roxrl_final_ram_25[] = {
		{ .addr = 0x34d1d0, .byte = 0xee },
		{ .addr = 0x34d1d1, .byte = 0xb4 },
		{ .addr = 0x34d1d2, .byte = 0x24 },
		{ .addr = 0x34d1d3, .byte = 0x62 },
		{ .addr = 0x34d1d4, .byte = 0x98 },
		{ .addr = 0x34d1d5, .byte = 0x01 }
};

static const SST_Transaction roxrl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3461588, .data = 38913, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrl_initial_ram_26[] = {
		{ .addr = 0x4b6b8a, .byte = 0xe8 },
		{ .addr = 0x4b6b8b, .byte = 0x97 },
		{ .addr = 0x4b6b8c, .byte = 0x31 },
		{ .addr = 0x4b6b8d, .byte = 0x6c },
		{ .addr = 0x4b6b8e, .byte = 0x7a },
		{ .addr = 0x4b6b8f, .byte = 0xf8 }
};

static const SST_RamByte roxrl_final_ram_26[] = {
		{ .addr = 0x4b6b8a, .byte = 0xe8 },
		{ .addr = 0x4b6b8b, .byte = 0x97 },
		{ .addr = 0x4b6b8c, .byte = 0x31 },
		{ .addr = 0x4b6b8d, .byte = 0x6c },
		{ .addr = 0x4b6b8e, .byte = 0x7a },
		{ .addr = 0x4b6b8f, .byte = 0xf8 }
};

static const SST_Transaction roxrl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4942734, .data = 31480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxrl_initial_ram_27[] = {
		{ .addr = 0xb6d776, .byte = 0xee },
		{ .addr = 0xb6d777, .byte = 0x94 },
		{ .addr = 0xb6d778, .byte = 0x3c },
		{ .addr = 0xb6d779, .byte = 0xd9 },
		{ .addr = 0xb6d77a, .byte = 0xc0 },
		{ .addr = 0xb6d77b, .byte = 0xb8 }
};

static const SST_RamByte roxrl_final_ram_27[] = {
		{ .addr = 0xb6d776, .byte = 0xee },
		{ .addr = 0xb6d777, .byte = 0x94 },
		{ .addr = 0xb6d778, .byte = 0x3c },
		{ .addr = 0xb6d779, .byte = 0xd9 },
		{ .addr = 0xb6d77a, .byte = 0xc0 },
		{ .addr = 0xb6d77b, .byte = 0xb8 }
};

static const SST_Transaction roxrl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11982714, .data = 49336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrl_initial_ram_28[] = {
		{ .addr = 0xe7f338, .byte = 0xe2 },
		{ .addr = 0xe7f339, .byte = 0xb0 },
		{ .addr = 0xe7f33a, .byte = 0x56 },
		{ .addr = 0xe7f33b, .byte = 0xc5 },
		{ .addr = 0xe7f33c, .byte = 0x63 },
		{ .addr = 0xe7f33d, .byte = 0xb9 }
};

static const SST_RamByte roxrl_final_ram_28[] = {
		{ .addr = 0xe7f338, .byte = 0xe2 },
		{ .addr = 0xe7f339, .byte = 0xb0 },
		{ .addr = 0xe7f33a, .byte = 0x56 },
		{ .addr = 0xe7f33b, .byte = 0xc5 },
		{ .addr = 0xe7f33c, .byte = 0x63 },
		{ .addr = 0xe7f33d, .byte = 0xb9 }
};

static const SST_Transaction roxrl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15201084, .data = 25529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxrl_initial_ram_29[] = {
		{ .addr = 0xd9a77e, .byte = 0xee },
		{ .addr = 0xd9a77f, .byte = 0xb3 },
		{ .addr = 0xd9a780, .byte = 0x2a },
		{ .addr = 0xd9a781, .byte = 0x10 },
		{ .addr = 0xd9a782, .byte = 0xed },
		{ .addr = 0xd9a783, .byte = 0xf2 }
};

static const SST_RamByte roxrl_final_ram_29[] = {
		{ .addr = 0xd9a77e, .byte = 0xee },
		{ .addr = 0xd9a77f, .byte = 0xb3 },
		{ .addr = 0xd9a780, .byte = 0x2a },
		{ .addr = 0xd9a781, .byte = 0x10 },
		{ .addr = 0xd9a782, .byte = 0xed },
		{ .addr = 0xd9a783, .byte = 0xf2 }
};

static const SST_Transaction roxrl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14264194, .data = 60914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 126 },
};

static const SST_RamByte roxrl_initial_ram_30[] = {
		{ .addr = 0x651c60, .byte = 0xe4 },
		{ .addr = 0x651c61, .byte = 0xb4 },
		{ .addr = 0x651c62, .byte = 0x9a },
		{ .addr = 0x651c63, .byte = 0x03 },
		{ .addr = 0x651c64, .byte = 0x50 },
		{ .addr = 0x651c65, .byte = 0xc4 }
};

static const SST_RamByte roxrl_final_ram_30[] = {
		{ .addr = 0x651c60, .byte = 0xe4 },
		{ .addr = 0x651c61, .byte = 0xb4 },
		{ .addr = 0x651c62, .byte = 0x9a },
		{ .addr = 0x651c63, .byte = 0x03 },
		{ .addr = 0x651c64, .byte = 0x50 },
		{ .addr = 0x651c65, .byte = 0xc4 }
};

static const SST_Transaction roxrl_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6626404, .data = 20676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte roxrl_initial_ram_31[] = {
		{ .addr = 0xd95086, .byte = 0xee },
		{ .addr = 0xd95087, .byte = 0xb3 },
		{ .addr = 0xd95088, .byte = 0x01 },
		{ .addr = 0xd95089, .byte = 0xbc },
		{ .addr = 0xd9508a, .byte = 0x62 },
		{ .addr = 0xd9508b, .byte = 0x2f }
};

static const SST_RamByte roxrl_final_ram_31[] = {
		{ .addr = 0xd95086, .byte = 0xee },
		{ .addr = 0xd95087, .byte = 0xb3 },
		{ .addr = 0xd95088, .byte = 0x01 },
		{ .addr = 0xd95089, .byte = 0xbc },
		{ .addr = 0xd9508a, .byte = 0x62 },
		{ .addr = 0xd9508b, .byte = 0x2f }
};

static const SST_Transaction roxrl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14241930, .data = 25135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_TestCase roxrl[] = {
	{
		.name = "000 ROXR.l 2, D1 e491",
		.initial = {
			.regs = {
				1626499950, 147021276, 1251612528, 1479115659, 2737996838, 2942975442, 1416156362, 3304479545, 2914351705, 3084561235, 1112006070, 2808150222, 1688000459, 2420340494, 654370242, 8418114, 5936636, 42251, 15965060
			},
			.prefetch0 = 58513,
			.prefetch1 = 3105,
			.ram = roxrl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1626499950, 36755319, 1251612528, 1479115659, 2737996838, 2942975442, 1416156362, 3304479545, 2914351705, 3084561235, 1112006070, 2808150222, 1688000459, 2420340494, 654370242, 8418114, 5936636, 42240, 15965062
			},
			.prefetch0 = 3105,
			.prefetch1 = 24696,
			.ram = roxrl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_0,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "001 ROXR.l D1, D5 e2b5",
		.initial = {
			.regs = {
				991317220, 2540418238, 806542493, 1900923686, 3395170519, 2849484149, 3229454956, 2263872114, 3988497409, 2628620864, 273855156, 304092709, 1903195361, 4034219102, 1537799079, 2728376, 2767172, 796, 8448600
			},
			.prefetch0 = 58037,
			.prefetch1 = 2459,
			.ram = roxrl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				991317220, 2540418238, 806542493, 1900923686, 3395170519, 2642073437, 3229454956, 2263872114, 3988497409, 2628620864, 273855156, 304092709, 1903195361, 4034219102, 1537799079, 2728376, 2767172, 776, 8448602
			},
			.prefetch0 = 2459,
			.prefetch1 = 5161,
			.ram = roxrl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_1,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "002 ROXR.l D5, D4 eab4",
		.initial = {
			.regs = {
				1956651829, 1452232921, 1973087049, 1852802191, 669307841, 3372800648, 584690886, 750598935, 3258242505, 3655155190, 2969830042, 2701260213, 923357171, 2256733873, 1769255746, 3429018, 16193880, 33801, 14447386
			},
			.prefetch0 = 60084,
			.prefetch1 = 44224,
			.ram = roxrl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1956651829, 1452232921, 1973087049, 1852802191, 2183652563, 3372800648, 584690886, 750598935, 3258242505, 3655155190, 2969830042, 2701260213, 923357171, 2256733873, 1769255746, 3429018, 16193880, 33817, 14447388
			},
			.prefetch0 = 44224,
			.prefetch1 = 19550,
			.ram = roxrl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_2,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "003 ROXR.l 3, D5 e695",
		.initial = {
			.regs = {
				3536969588, 3068269873, 1065836660, 2144791292, 2686733231, 3194510898, 3264465207, 342005572, 3818978065, 1999967666, 2039526591, 1400482842, 2030866605, 3332487239, 4035071842, 7012298, 7444880, 42496, 11235990
			},
			.prefetch0 = 59029,
			.prefetch1 = 43488,
			.ram = roxrl_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3536969588, 3068269873, 1065836660, 2144791292, 2686733231, 2546797510, 3264465207, 342005572, 3818978065, 1999967666, 2039526591, 1400482842, 2030866605, 3332487239, 4035071842, 7012298, 7444880, 42504, 11235992
			},
			.prefetch0 = 43488,
			.prefetch1 = 20619,
			.ram = roxrl_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_3,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "004 ROXR.l D6, D5 ecb5",
		.initial = {
			.regs = {
				1813091928, 2531297574, 1205638769, 1594108697, 3731589164, 3697979180, 3900937711, 1846421788, 3678290394, 2618857878, 4113478430, 793999268, 47954736, 1438112284, 2785806087, 11863764, 3307366, 8719, 2924280
			},
			.prefetch0 = 60597,
			.prefetch1 = 59486,
			.ram = roxrl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1813091928, 2531297574, 1205638769, 1594108697, 3731589164, 2036560298, 3900937711, 1846421788, 3678290394, 2618857878, 4113478430, 793999268, 47954736, 1438112284, 2785806087, 11863764, 3307366, 8721, 2924282
			},
			.prefetch0 = 59486,
			.prefetch1 = 36112,
			.ram = roxrl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_4,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "005 ROXR.l 6, D3 ec93",
		.initial = {
			.regs = {
				1655888437, 2629401214, 432246676, 3860498709, 1811881323, 1544536467, 2371354815, 2599937137, 1619681863, 119359961, 4274837479, 2299146970, 1963799473, 2451071703, 1204591049, 16242948, 14113398, 1540, 12896038
			},
			.prefetch0 = 60563,
			.prefetch1 = 7263,
			.ram = roxrl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1655888437, 2629401214, 432246676, 2878892580, 1811881323, 1544536467, 2371354815, 2599937137, 1619681863, 119359961, 4274837479, 2299146970, 1963799473, 2451071703, 1204591049, 16242948, 14113398, 1544, 12896040
			},
			.prefetch0 = 7263,
			.prefetch1 = 23764,
			.ram = roxrl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_5,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "006 ROXR.l 1, D2 e292",
		.initial = {
			.regs = {
				4117829999, 355449578, 569942580, 2335896185, 1232605764, 3485882107, 4263617545, 3336259691, 62760212, 1493696914, 3459108405, 2493053843, 2435191856, 1919575104, 3060895317, 15738264, 7463830, 42001, 4569346
			},
			.prefetch0 = 58002,
			.prefetch1 = 46413,
			.ram = roxrl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4117829999, 355449578, 2432454938, 2335896185, 1232605764, 3485882107, 4263617545, 3336259691, 62760212, 1493696914, 3459108405, 2493053843, 2435191856, 1919575104, 3060895317, 15738264, 7463830, 41992, 4569348
			},
			.prefetch0 = 46413,
			.prefetch1 = 15749,
			.ram = roxrl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_6,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "007 ROXR.l 3, D7 e697",
		.initial = {
			.regs = {
				4063602759, 89547651, 1375671943, 1169322347, 2599727435, 643066539, 188025064, 116053820, 1369408471, 415796924, 1613664805, 3096889471, 888901941, 2183372670, 976514829, 3547346, 9472830, 41757, 8150772
			},
			.prefetch0 = 59031,
			.prefetch1 = 2715,
			.ram = roxrl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4063602759, 89547651, 1375671943, 1169322347, 2599727435, 643066539, 188025064, 551377639, 1369408471, 415796924, 1613664805, 3096889471, 888901941, 2183372670, 976514829, 3547346, 9472830, 41745, 8150774
			},
			.prefetch0 = 2715,
			.prefetch1 = 25253,
			.ram = roxrl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_7,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "008 ROXR.l D4, D6 e8b6",
		.initial = {
			.regs = {
				4110494472, 1654203957, 3653488378, 3774089110, 3904184705, 3433940762, 4197096086, 369994971, 962292034, 2343035524, 1654002303, 781371929, 3264891412, 3292408287, 3890856905, 10091884, 2728242, 9997, 12115816
			},
			.prefetch0 = 59574,
			.prefetch1 = 50762,
			.ram = roxrl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4110494472, 1654203957, 3653488378, 3774089110, 3904184705, 3433940762, 2098548043, 369994971, 962292034, 2343035524, 1654002303, 781371929, 3264891412, 3292408287, 3890856905, 10091884, 2728242, 9984, 12115818
			},
			.prefetch0 = 50762,
			.prefetch1 = 32006,
			.ram = roxrl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_8,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "009 ROXR.l 4, D6 e896",
		.initial = {
			.regs = {
				3370192385, 1759545762, 1116520699, 2896025745, 2131262242, 3242267612, 2524054442, 511949087, 353926145, 1647939068, 196867871, 124831637, 1620769871, 897072847, 3117761056, 11740014, 10001584, 769, 6847836
			},
			.prefetch0 = 59542,
			.prefetch1 = 26781,
			.ram = roxrl_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3370192385, 1759545762, 1116520699, 2896025745, 2131262242, 3242267612, 1231495226, 511949087, 353926145, 1647939068, 196867871, 124831637, 1620769871, 897072847, 3117761056, 11740014, 10001584, 785, 6847838
			},
			.prefetch0 = 26781,
			.prefetch1 = 31945,
			.ram = roxrl_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_9,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "010 ROXR.l 6, D5 ec95",
		.initial = {
			.regs = {
				3668007481, 3154366283, 2250273247, 538572587, 3734173615, 246355737, 748226990, 926410510, 2858702319, 1381824269, 1777867190, 1592274694, 694434159, 2655446099, 2314544639, 13356178, 13225182, 33050, 10232348
			},
			.prefetch0 = 60565,
			.prefetch1 = 49460,
			.ram = roxrl_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3668007481, 3154366283, 2250273247, 538572587, 3734173615, 3426401372, 748226990, 926410510, 2858702319, 1381824269, 1777867190, 1592274694, 694434159, 2655446099, 2314544639, 13356178, 13225182, 33032, 10232350
			},
			.prefetch0 = 49460,
			.prefetch1 = 54203,
			.ram = roxrl_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_10,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "011 ROXR.l 7, D7 ee97",
		.initial = {
			.regs = {
				167825545, 2794421278, 552908411, 3576081173, 2984943620, 1393054592, 784741630, 1561272542, 2389757753, 3363776594, 2951918156, 3952918527, 4111093997, 679110858, 3671777702, 14393030, 8538216, 42496, 12210572
			},
			.prefetch0 = 61079,
			.prefetch1 = 24336,
			.ram = roxrl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				167825545, 2794421278, 552908411, 3576081173, 2984943620, 1393054592, 784741630, 2025463361, 2389757753, 3363776594, 2951918156, 3952918527, 4111093997, 679110858, 3671777702, 14393030, 8538216, 42513, 12210574
			},
			.prefetch0 = 24336,
			.prefetch1 = 12824,
			.ram = roxrl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_11,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "012 ROXR.l D0, D6 e0b6",
		.initial = {
			.regs = {
				4036930903, 3220824792, 3510905316, 984871424, 2937259082, 2490938048, 1475616941, 898471021, 3257819292, 421016185, 1860837826, 2284800071, 3285469316, 3684180578, 3034705890, 10142072, 3677086, 41226, 11728348
			},
			.prefetch0 = 57526,
			.prefetch1 = 27175,
			.ram = roxrl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4036930903, 3220824792, 3510905316, 984871424, 2937259082, 2490938048, 3498226863, 898471021, 3257819292, 421016185, 1860837826, 2284800071, 3285469316, 3684180578, 3034705890, 10142072, 3677086, 41241, 11728350
			},
			.prefetch0 = 27175,
			.prefetch1 = 57352,
			.ram = roxrl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_12,
		.transactions_len = 2,
		.lenght = 54,
	},
	{
		.name = "013 ROXR.l D1, D4 e2b4",
		.initial = {
			.regs = {
				710392794, 3781496803, 3558201406, 1781940415, 951669797, 718809129, 1463961073, 2188457621, 3290719267, 3241002651, 809651169, 1740229751, 612918724, 3171830012, 1333231027, 9206496, 5268146, 8, 1011554
			},
			.prefetch0 = 58036,
			.prefetch1 = 63284,
			.ram = roxrl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				710392794, 3781496803, 3558201406, 1781940415, 2385401097, 718809129, 1463961073, 2188457621, 3290719267, 3241002651, 809651169, 1740229751, 612918724, 3171830012, 1333231027, 9206496, 5268146, 8, 1011556
			},
			.prefetch0 = 63284,
			.prefetch1 = 34217,
			.ram = roxrl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_13,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "014 ROXR.l 5, D7 ea97",
		.initial = {
			.regs = {
				3069810650, 3610221899, 3301490355, 1750791016, 3949414552, 491489648, 113861611, 1709607806, 1687086112, 739294933, 2666656122, 3292582488, 904948662, 2656833321, 3942484076, 8224988, 5005452, 789, 4867310
			},
			.prefetch0 = 60055,
			.prefetch1 = 30601,
			.ram = roxrl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3069810650, 3610221899, 3301490355, 1750791016, 3949414552, 491489648, 113861611, 3945739355, 1687086112, 739294933, 2666656122, 3292582488, 904948662, 2656833321, 3942484076, 8224988, 5005452, 793, 4867312
			},
			.prefetch0 = 30601,
			.prefetch1 = 51151,
			.ram = roxrl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_14,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "015 ROXR.l D1, D7 e2b7",
		.initial = {
			.regs = {
				753964023, 1174823784, 2459167893, 3139255744, 2218546389, 4266586163, 1992962204, 950092747, 652530008, 2023447674, 3038366776, 1865491022, 1344201065, 1321139225, 2332625842, 560866, 6227050, 41489, 7213530
			},
			.prefetch0 = 58039,
			.prefetch1 = 57495,
			.ram = roxrl_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				753964023, 1174823784, 2459167893, 3139255744, 2218546389, 4266586163, 1992962204, 779174535, 652530008, 2023447674, 3038366776, 1865491022, 1344201065, 1321139225, 2332625842, 560866, 6227050, 41489, 7213532
			},
			.prefetch0 = 57495,
			.prefetch1 = 25502,
			.ram = roxrl_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_15,
		.transactions_len = 2,
		.lenght = 88,
	},
	{
		.name = "016 ROXR.l 5, D3 ea93",
		.initial = {
			.regs = {
				1813230043, 2582392609, 3444397965, 614297341, 864408462, 2526271392, 3522359295, 1841010375, 2880067407, 3166798, 1323240227, 3795979742, 3314559871, 1113574394, 3524656594, 10418760, 14022244, 33295, 5917698
			},
			.prefetch0 = 60051,
			.prefetch1 = 11943,
			.ram = roxrl_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1813230043, 2582392609, 3444397965, 3508857719, 864408462, 2526271392, 3522359295, 1841010375, 2880067407, 3166798, 1323240227, 3795979742, 3314559871, 1113574394, 3524656594, 10418760, 14022244, 33305, 5917700
			},
			.prefetch0 = 11943,
			.prefetch1 = 55725,
			.ram = roxrl_final_ram_16,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_16,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "017 ROXR.l D4, D2 e8b2",
		.initial = {
			.regs = {
				3151801159, 1515477363, 958700957, 426752993, 3673430341, 512464134, 3793786217, 3071204486, 1961350219, 2104761347, 1091571018, 3509021047, 92110517, 2126154799, 226489310, 11470940, 11494162, 8974, 7106386
			},
			.prefetch0 = 59570,
			.prefetch1 = 26463,
			.ram = roxrl_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3151801159, 1515477363, 3519620332, 426752993, 3673430341, 512464134, 3793786217, 3071204486, 1961350219, 2104761347, 1091571018, 3509021047, 92110517, 2126154799, 226489310, 11470940, 11494162, 8985, 7106388
			},
			.prefetch0 = 26463,
			.prefetch1 = 56961,
			.ram = roxrl_final_ram_17,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_17,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "018 ROXR.l 5, D6 ea96",
		.initial = {
			.regs = {
				1633511960, 1945829203, 3523129406, 2227981072, 745598983, 2528264153, 2152600377, 661801527, 4237899631, 57494751, 1444322787, 2636252149, 494784095, 1424800604, 1990364355, 11970494, 15698324, 1559, 12150840
			},
			.prefetch0 = 60054,
			.prefetch1 = 42986,
			.ram = roxrl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1633511960, 1945829203, 3523129406, 2227981072, 745598983, 2528264153, 2617405593, 661801527, 4237899631, 57494751, 1444322787, 2636252149, 494784095, 1424800604, 1990364355, 11970494, 15698324, 1561, 12150842
			},
			.prefetch0 = 42986,
			.prefetch1 = 41890,
			.ram = roxrl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_18,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "019 ROXR.l 3, D2 e692",
		.initial = {
			.regs = {
				2088205040, 2307139948, 447036191, 3233176044, 270140272, 2911778798, 615617799, 2047424495, 2471650528, 4164177541, 1974261520, 2271325109, 1542414246, 4135109747, 174121396, 1659214, 11812290, 8735, 1313572
			},
			.prefetch0 = 59026,
			.prefetch1 = 7836,
			.ram = roxrl_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2088205040, 2307139948, 3813975907, 3233176044, 270140272, 2911778798, 615617799, 2047424495, 2471650528, 4164177541, 1974261520, 2271325109, 1542414246, 4135109747, 174121396, 1659214, 11812290, 8729, 1313574
			},
			.prefetch0 = 7836,
			.prefetch1 = 63052,
			.ram = roxrl_final_ram_19,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_19,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "020 ROXR.l 5, D0 ea90",
		.initial = {
			.regs = {
				857953100, 3875901353, 3129958258, 2869670194, 3332453635, 2911830385, 3260985825, 3917246369, 2110859654, 4013958134, 2430826216, 3175235225, 2859025488, 439500844, 2505242819, 6470570, 8444580, 40962, 13757790
			},
			.prefetch0 = 60048,
			.prefetch1 = 50807,
			.ram = roxrl_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3248036506, 3875901353, 3129958258, 2869670194, 3332453635, 2911830385, 3260985825, 3917246369, 2110859654, 4013958134, 2430826216, 3175235225, 2859025488, 439500844, 2505242819, 6470570, 8444580, 40968, 13757792
			},
			.prefetch0 = 50807,
			.prefetch1 = 22956,
			.ram = roxrl_final_ram_20,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_20,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "021 ROXR.l 7, D0 ee90",
		.initial = {
			.regs = {
				3560021218, 446933137, 2764129638, 690945109, 2468932743, 2609929318, 291901790, 16478111, 4163758388, 3276297368, 3803268105, 3571256911, 3498399737, 1575922174, 3361487268, 14498166, 172414, 262, 6104538
			},
			.prefetch0 = 61072,
			.prefetch1 = 24356,
			.ram = roxrl_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2309514041, 446933137, 2764129638, 690945109, 2468932743, 2609929318, 291901790, 16478111, 4163758388, 3276297368, 3803268105, 3571256911, 3498399737, 1575922174, 3361487268, 14498166, 172414, 281, 6104540
			},
			.prefetch0 = 24356,
			.prefetch1 = 35062,
			.ram = roxrl_final_ram_21,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_21,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "022 ROXR.l 7, D1 ee91",
		.initial = {
			.regs = {
				1222140163, 1192091409, 3781822535, 822826355, 1557410969, 2543948162, 1721294301, 1164317747, 4113977001, 2258442334, 2472316515, 1240697982, 3450193365, 1928548030, 1630742647, 10355648, 286706, 34061, 15419644
			},
			.prefetch0 = 61073,
			.prefetch1 = 60671,
			.ram = roxrl_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1222140163, 1150163902, 3781822535, 822826355, 1557410969, 2543948162, 1721294301, 1164317747, 4113977001, 2258442334, 2472316515, 1240697982, 3450193365, 1928548030, 1630742647, 10355648, 286706, 34048, 15419646
			},
			.prefetch0 = 60671,
			.prefetch1 = 47994,
			.ram = roxrl_final_ram_22,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_22,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "023 ROXR.l 4, D7 e897",
		.initial = {
			.regs = {
				4090879198, 3763116159, 2090995723, 3955541661, 1170992080, 530615515, 4224099461, 1888324208, 3902024498, 115039003, 1425757812, 2706461256, 1464032001, 3067287373, 3123883022, 16170108, 9815040, 9478, 9775628
			},
			.prefetch0 = 59543,
			.prefetch1 = 4712,
			.ram = roxrl_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4090879198, 3763116159, 2090995723, 3955541661, 1170992080, 530615515, 4224099461, 118020263, 3902024498, 115039003, 1425757812, 2706461256, 1464032001, 3067287373, 3123883022, 16170108, 9815040, 9472, 9775630
			},
			.prefetch0 = 4712,
			.prefetch1 = 15180,
			.ram = roxrl_final_ram_23,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_23,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "024 ROXR.l D4, D7 e8b7",
		.initial = {
			.regs = {
				1904301867, 3955417202, 1407288132, 194958933, 330928187, 2813267571, 480462280, 58655224, 3157986103, 2205415944, 4189639192, 1846129185, 4258324128, 1053480992, 1774988542, 8354596, 2579392, 8478, 5690188
			},
			.prefetch0 = 59575,
			.prefetch1 = 63074,
			.ram = roxrl_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1904301867, 3955417202, 1407288132, 194958933, 330928187, 2813267571, 480462280, 3212901440, 3157986103, 2205415944, 4189639192, 1846129185, 4258324128, 1053480992, 1774988542, 8354596, 2579392, 8473, 5690190
			},
			.prefetch0 = 63074,
			.prefetch1 = 13181,
			.ram = roxrl_final_ram_24,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_24,
		.transactions_len = 2,
		.lenght = 126,
	},
	{
		.name = "025 ROXR.l D7, D4 eeb4",
		.initial = {
			.regs = {
				3248152768, 3612783913, 708708644, 3367077357, 3357685835, 3577580311, 3348257235, 2752814022, 1222255945, 3252382234, 638221805, 1519020244, 4055120013, 1542346190, 1504037612, 13987298, 5375692, 9996, 3461588
			},
			.prefetch0 = 61108,
			.prefetch1 = 9314,
			.ram = roxrl_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3248152768, 3612783913, 708708644, 3367077357, 1528858849, 3577580311, 3348257235, 2752814022, 1222255945, 3252382234, 638221805, 1519020244, 4055120013, 1542346190, 1504037612, 13987298, 5375692, 9984, 3461590
			},
			.prefetch0 = 9314,
			.prefetch1 = 38913,
			.ram = roxrl_final_ram_25,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_25,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "026 ROXR.l 4, D7 e897",
		.initial = {
			.regs = {
				29181668, 4091871692, 4024526461, 1057230612, 2206166745, 2601566305, 20726952, 3069595407, 262169639, 4025374925, 26575759, 262318571, 2873151824, 1061309543, 269347130, 2685358, 7403132, 34069, 4942734
			},
			.prefetch0 = 59543,
			.prefetch1 = 12652,
			.ram = roxrl_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				29181668, 4091871692, 4024526461, 1057230612, 2206166745, 2601566305, 20726952, 4218381552, 262169639, 4025374925, 26575759, 262318571, 2873151824, 1061309543, 269347130, 2685358, 7403132, 34073, 4942736
			},
			.prefetch0 = 12652,
			.prefetch1 = 31480,
			.ram = roxrl_final_ram_26,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_26,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "027 ROXR.l 7, D4 ee94",
		.initial = {
			.regs = {
				1846573817, 676985241, 2413493010, 3547934532, 1634504304, 1500283755, 1591958585, 2143955018, 3598700610, 674900589, 333529373, 1463593694, 4156506541, 3316704586, 2641935019, 12494192, 3164066, 8969, 11982714
			},
			.prefetch0 = 61076,
			.prefetch1 = 15577,
			.ram = roxrl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1846573817, 676985241, 2413493010, 3547934532, 3233995036, 1500283755, 1591958585, 2143955018, 3598700610, 674900589, 333529373, 1463593694, 4156506541, 3316704586, 2641935019, 12494192, 3164066, 8985, 11982716
			},
			.prefetch0 = 15577,
			.prefetch1 = 49336,
			.ram = roxrl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_27,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "028 ROXR.l D1, D0 e2b0",
		.initial = {
			.regs = {
				4072295950, 1410064580, 3996605133, 893208012, 2967847977, 3234790718, 3693776172, 3935388735, 4249905720, 2048738668, 966357087, 1203983192, 3912749375, 2388830464, 1974061428, 9538908, 13603818, 9997, 15201084
			},
			.prefetch0 = 58032,
			.prefetch1 = 22213,
			.ram = roxrl_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3475743968, 1410064580, 3996605133, 893208012, 2967847977, 3234790718, 3693776172, 3935388735, 4249905720, 2048738668, 966357087, 1203983192, 3912749375, 2388830464, 1974061428, 9538908, 13603818, 10009, 15201086
			},
			.prefetch0 = 22213,
			.prefetch1 = 25529,
			.ram = roxrl_final_ram_28,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_28,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "029 ROXR.l D7, D3 eeb3",
		.initial = {
			.regs = {
				60942351, 4265260042, 1856522998, 1645537215, 3243265566, 1774496224, 2958934948, 741516029, 348408923, 126398284, 871639794, 47470806, 3599990742, 530078736, 1556622633, 11958514, 4410914, 33309, 14264194
			},
			.prefetch0 = 61107,
			.prefetch1 = 10768,
			.ram = roxrl_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				60942351, 4265260042, 1856522998, 1117583350, 3243265566, 1774496224, 2958934948, 741516029, 348408923, 126398284, 871639794, 47470806, 3599990742, 530078736, 1556622633, 11958514, 4410914, 33280, 14264196
			},
			.prefetch0 = 10768,
			.prefetch1 = 60914,
			.ram = roxrl_final_ram_29,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_29,
		.transactions_len = 2,
		.lenght = 130,
	},
	{
		.name = "030 ROXR.l D2, D4 e4b4",
		.initial = {
			.regs = {
				223924478, 2809103163, 1260940323, 3116075824, 3575613933, 1861570389, 3575922120, 3231166527, 3040020564, 4275244412, 3449033401, 2301015273, 776015738, 1026775000, 103958899, 1474998, 12135256, 41738, 6626404
			},
			.prefetch0 = 58548,
			.prefetch1 = 39427,
			.ram = roxrl_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				223924478, 2809103163, 1260940323, 3116075824, 3041387131, 1861570389, 3575922120, 3231166527, 3040020564, 4275244412, 3449033401, 2301015273, 776015738, 1026775000, 103958899, 1474998, 12135256, 41736, 6626406
			},
			.prefetch0 = 39427,
			.prefetch1 = 20676,
			.ram = roxrl_final_ram_30,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_30,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "031 ROXR.l D7, D3 eeb3",
		.initial = {
			.regs = {
				812240436, 2816695269, 754289329, 3838481586, 574472134, 1661374655, 989218071, 2348512675, 3247302818, 3966187914, 2219653526, 172141128, 817099605, 3996044411, 3250633434, 15472742, 10427424, 9489, 14241930
			},
			.prefetch0 = 61107,
			.prefetch1 = 444,
			.ram = roxrl_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				812240436, 2816695269, 754289329, 2033362220, 574472134, 1661374655, 989218071, 2348512675, 3247302818, 3966187914, 2219653526, 172141128, 817099605, 3996044411, 3250633434, 15472742, 10427424, 9489, 14241932
			},
			.prefetch0 = 444,
			.prefetch1 = 25135,
			.ram = roxrl_final_ram_31,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_31,
		.transactions_len = 2,
		.lenght = 78,
	},
};

#endif /* RBT_ROXRL_H */