#ifndef RBT_ADDXB_H
#define RBT_ADDXB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addxb_initial_ram_0[] = {
		{ .addr = 0x5c5af8, .byte = 0xd7 },
		{ .addr = 0x5c5af9, .byte = 0x02 },
		{ .addr = 0x5c5afa, .byte = 0x63 },
		{ .addr = 0x5c5afb, .byte = 0xc2 },
		{ .addr = 0x5c5afc, .byte = 0x0a },
		{ .addr = 0x5c5afd, .byte = 0x2a }
};

static const SST_RamByte addxb_final_ram_0[] = {
		{ .addr = 0x5c5af8, .byte = 0xd7 },
		{ .addr = 0x5c5af9, .byte = 0x02 },
		{ .addr = 0x5c5afa, .byte = 0x63 },
		{ .addr = 0x5c5afb, .byte = 0xc2 },
		{ .addr = 0x5c5afc, .byte = 0x0a },
		{ .addr = 0x5c5afd, .byte = 0x2a }
};

static const SST_Transaction addxb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6052604, .data = 2602, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_1[] = {
		{ .addr = 0x62845e, .byte = 0xd5 },
		{ .addr = 0x62845f, .byte = 0x0c },
		{ .addr = 0x628460, .byte = 0x2b },
		{ .addr = 0x628461, .byte = 0x32 },
		{ .addr = 0x7e1e68, .byte = 0x08 },
		{ .addr = 0x7e1e69, .byte = 0xf3 },
		{ .addr = 0x1afcfe, .byte = 0xed },
		{ .addr = 0x1afcff, .byte = 0x3b },
		{ .addr = 0x628462, .byte = 0x95 },
		{ .addr = 0x628463, .byte = 0xe4 }
};

static const SST_RamByte addxb_final_ram_1[] = {
		{ .addr = 0x62845e, .byte = 0xd5 },
		{ .addr = 0x62845f, .byte = 0x0c },
		{ .addr = 0x628460, .byte = 0x2b },
		{ .addr = 0x628461, .byte = 0x32 },
		{ .addr = 0x7e1e68, .byte = 0x08 },
		{ .addr = 0x7e1e69, .byte = 0xf3 },
		{ .addr = 0x1afcfe, .byte = 0xed },
		{ .addr = 0x1afcff, .byte = 0x43 },
		{ .addr = 0x628462, .byte = 0x95 },
		{ .addr = 0x628463, .byte = 0xe4 }
};

static const SST_Transaction addxb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8265320, .data = 2048, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1768702, .data = 59, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6456418, .data = 38372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1768702, .data = 67, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_2[] = {
		{ .addr = 0xe489f4, .byte = 0xd9 },
		{ .addr = 0xe489f5, .byte = 0x0f },
		{ .addr = 0xe489f6, .byte = 0xdc },
		{ .addr = 0xe489f7, .byte = 0x6c },
		{ .addr = 0x39b1d2, .byte = 0x64 },
		{ .addr = 0x39b1d3, .byte = 0xdc },
		{ .addr = 0x5f7e88, .byte = 0xbe },
		{ .addr = 0x5f7e89, .byte = 0xa0 },
		{ .addr = 0xe489f8, .byte = 0x7b },
		{ .addr = 0xe489f9, .byte = 0x37 }
};

static const SST_RamByte addxb_final_ram_2[] = {
		{ .addr = 0xe489f4, .byte = 0xd9 },
		{ .addr = 0xe489f5, .byte = 0x0f },
		{ .addr = 0xe489f6, .byte = 0xdc },
		{ .addr = 0xe489f7, .byte = 0x6c },
		{ .addr = 0x39b1d2, .byte = 0x64 },
		{ .addr = 0x39b1d3, .byte = 0xdc },
		{ .addr = 0x5f7e88, .byte = 0xbe },
		{ .addr = 0x5f7e89, .byte = 0x04 },
		{ .addr = 0xe489f8, .byte = 0x7b },
		{ .addr = 0xe489f9, .byte = 0x37 }
};

static const SST_Transaction addxb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3781074, .data = 25600, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6258312, .data = 160, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14977528, .data = 31543, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6258312, .data = 4, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_3[] = {
		{ .addr = 0xccf59c, .byte = 0xd9 },
		{ .addr = 0xccf59d, .byte = 0x0d },
		{ .addr = 0xccf59e, .byte = 0x49 },
		{ .addr = 0xccf59f, .byte = 0xef },
		{ .addr = 0x728066, .byte = 0x62 },
		{ .addr = 0x728067, .byte = 0x4a },
		{ .addr = 0xf18ab4, .byte = 0xdc },
		{ .addr = 0xf18ab5, .byte = 0x4e },
		{ .addr = 0xccf5a0, .byte = 0x54 },
		{ .addr = 0xccf5a1, .byte = 0x56 }
};

static const SST_RamByte addxb_final_ram_3[] = {
		{ .addr = 0xccf59c, .byte = 0xd9 },
		{ .addr = 0xccf59d, .byte = 0x0d },
		{ .addr = 0xccf59e, .byte = 0x49 },
		{ .addr = 0xccf59f, .byte = 0xef },
		{ .addr = 0x728066, .byte = 0x62 },
		{ .addr = 0x728067, .byte = 0x4a },
		{ .addr = 0xf18ab4, .byte = 0x3f },
		{ .addr = 0xf18ab5, .byte = 0x4e },
		{ .addr = 0xccf5a0, .byte = 0x54 },
		{ .addr = 0xccf5a1, .byte = 0x56 }
};

static const SST_Transaction addxb_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7503974, .data = 25088, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15829684, .data = 56320, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13432224, .data = 21590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15829684, .data = 16128, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_4[] = {
		{ .addr = 0x5e1802, .byte = 0xd7 },
		{ .addr = 0x5e1803, .byte = 0x01 },
		{ .addr = 0x5e1804, .byte = 0x36 },
		{ .addr = 0x5e1805, .byte = 0x6a },
		{ .addr = 0x5e1806, .byte = 0x2e },
		{ .addr = 0x5e1807, .byte = 0x3c }
};

static const SST_RamByte addxb_final_ram_4[] = {
		{ .addr = 0x5e1802, .byte = 0xd7 },
		{ .addr = 0x5e1803, .byte = 0x01 },
		{ .addr = 0x5e1804, .byte = 0x36 },
		{ .addr = 0x5e1805, .byte = 0x6a },
		{ .addr = 0x5e1806, .byte = 0x2e },
		{ .addr = 0x5e1807, .byte = 0x3c }
};

static const SST_Transaction addxb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6166534, .data = 11836, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_5[] = {
		{ .addr = 0x0f0c82, .byte = 0xd7 },
		{ .addr = 0x0f0c83, .byte = 0x0d },
		{ .addr = 0x0f0c84, .byte = 0xe2 },
		{ .addr = 0x0f0c85, .byte = 0x54 },
		{ .addr = 0xc509ea, .byte = 0xbc },
		{ .addr = 0xc509eb, .byte = 0x79 },
		{ .addr = 0xe5256a, .byte = 0x8b },
		{ .addr = 0xe5256b, .byte = 0xa7 },
		{ .addr = 0x0f0c86, .byte = 0x3b },
		{ .addr = 0x0f0c87, .byte = 0xde }
};

static const SST_RamByte addxb_final_ram_5[] = {
		{ .addr = 0x0f0c82, .byte = 0xd7 },
		{ .addr = 0x0f0c83, .byte = 0x0d },
		{ .addr = 0x0f0c84, .byte = 0xe2 },
		{ .addr = 0x0f0c85, .byte = 0x54 },
		{ .addr = 0xc509ea, .byte = 0xbc },
		{ .addr = 0xc509eb, .byte = 0x79 },
		{ .addr = 0xe5256a, .byte = 0x04 },
		{ .addr = 0xe5256b, .byte = 0xa7 },
		{ .addr = 0x0f0c86, .byte = 0x3b },
		{ .addr = 0x0f0c87, .byte = 0xde }
};

static const SST_Transaction addxb_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12913130, .data = 121, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15017322, .data = 35584, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 986246, .data = 15326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15017322, .data = 1024, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_6[] = {
		{ .addr = 0xb70532, .byte = 0xdb },
		{ .addr = 0xb70533, .byte = 0x0b },
		{ .addr = 0xb70534, .byte = 0x72 },
		{ .addr = 0xb70535, .byte = 0x6c },
		{ .addr = 0x5ae32c, .byte = 0x93 },
		{ .addr = 0x5ae32d, .byte = 0xb7 },
		{ .addr = 0x7b1d2a, .byte = 0xa1 },
		{ .addr = 0x7b1d2b, .byte = 0x8d },
		{ .addr = 0xb70536, .byte = 0x8a },
		{ .addr = 0xb70537, .byte = 0x8d }
};

static const SST_RamByte addxb_final_ram_6[] = {
		{ .addr = 0xb70532, .byte = 0xdb },
		{ .addr = 0xb70533, .byte = 0x0b },
		{ .addr = 0xb70534, .byte = 0x72 },
		{ .addr = 0xb70535, .byte = 0x6c },
		{ .addr = 0x5ae32c, .byte = 0x93 },
		{ .addr = 0x5ae32d, .byte = 0xb7 },
		{ .addr = 0x7b1d2a, .byte = 0xa1 },
		{ .addr = 0x7b1d2b, .byte = 0x20 },
		{ .addr = 0xb70536, .byte = 0x8a },
		{ .addr = 0xb70537, .byte = 0x8d }
};

static const SST_Transaction addxb_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5956396, .data = 37632, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8068394, .data = 141, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11994422, .data = 35469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8068394, .data = 32, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_7[] = {
		{ .addr = 0x7f7254, .byte = 0xdd },
		{ .addr = 0x7f7255, .byte = 0x0d },
		{ .addr = 0x7f7256, .byte = 0xe3 },
		{ .addr = 0x7f7257, .byte = 0x51 },
		{ .addr = 0x85610c, .byte = 0x39 },
		{ .addr = 0x85610d, .byte = 0xc5 },
		{ .addr = 0x1ed602, .byte = 0x90 },
		{ .addr = 0x1ed603, .byte = 0x55 },
		{ .addr = 0x7f7258, .byte = 0xac },
		{ .addr = 0x7f7259, .byte = 0xa7 }
};

static const SST_RamByte addxb_final_ram_7[] = {
		{ .addr = 0x7f7254, .byte = 0xdd },
		{ .addr = 0x7f7255, .byte = 0x0d },
		{ .addr = 0x7f7256, .byte = 0xe3 },
		{ .addr = 0x7f7257, .byte = 0x51 },
		{ .addr = 0x85610c, .byte = 0x39 },
		{ .addr = 0x85610d, .byte = 0xc5 },
		{ .addr = 0x1ed602, .byte = 0x55 },
		{ .addr = 0x1ed603, .byte = 0x55 },
		{ .addr = 0x7f7258, .byte = 0xac },
		{ .addr = 0x7f7259, .byte = 0xa7 }
};

static const SST_Transaction addxb_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8741132, .data = 197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2020866, .data = 36864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8352344, .data = 44199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2020866, .data = 21760, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_8[] = {
		{ .addr = 0x07abbe, .byte = 0xdf },
		{ .addr = 0x07abbf, .byte = 0x0b },
		{ .addr = 0x07abc0, .byte = 0xa8 },
		{ .addr = 0x07abc1, .byte = 0x08 },
		{ .addr = 0x9cb922, .byte = 0x66 },
		{ .addr = 0x9cb923, .byte = 0x18 },
		{ .addr = 0x06b8ea, .byte = 0xc8 },
		{ .addr = 0x06b8eb, .byte = 0xe5 },
		{ .addr = 0x07abc2, .byte = 0x82 },
		{ .addr = 0x07abc3, .byte = 0x43 }
};

static const SST_RamByte addxb_final_ram_8[] = {
		{ .addr = 0x07abbe, .byte = 0xdf },
		{ .addr = 0x07abbf, .byte = 0x0b },
		{ .addr = 0x07abc0, .byte = 0xa8 },
		{ .addr = 0x07abc1, .byte = 0x08 },
		{ .addr = 0x9cb922, .byte = 0x66 },
		{ .addr = 0x9cb923, .byte = 0x18 },
		{ .addr = 0x06b8ea, .byte = 0xe1 },
		{ .addr = 0x06b8eb, .byte = 0xe5 },
		{ .addr = 0x07abc2, .byte = 0x82 },
		{ .addr = 0x07abc3, .byte = 0x43 }
};

static const SST_Transaction addxb_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10271010, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 440554, .data = 51200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 502722, .data = 33347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 440554, .data = 57600, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_9[] = {
		{ .addr = 0xb222de, .byte = 0xd1 },
		{ .addr = 0xb222df, .byte = 0x01 },
		{ .addr = 0xb222e0, .byte = 0xeb },
		{ .addr = 0xb222e1, .byte = 0xd9 },
		{ .addr = 0xb222e2, .byte = 0xac },
		{ .addr = 0xb222e3, .byte = 0xa4 }
};

static const SST_RamByte addxb_final_ram_9[] = {
		{ .addr = 0xb222de, .byte = 0xd1 },
		{ .addr = 0xb222df, .byte = 0x01 },
		{ .addr = 0xb222e0, .byte = 0xeb },
		{ .addr = 0xb222e1, .byte = 0xd9 },
		{ .addr = 0xb222e2, .byte = 0xac },
		{ .addr = 0xb222e3, .byte = 0xa4 }
};

static const SST_Transaction addxb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11674338, .data = 44196, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_10[] = {
		{ .addr = 0x699d68, .byte = 0xdb },
		{ .addr = 0x699d69, .byte = 0x03 },
		{ .addr = 0x699d6a, .byte = 0x55 },
		{ .addr = 0x699d6b, .byte = 0x3f },
		{ .addr = 0x699d6c, .byte = 0xaf },
		{ .addr = 0x699d6d, .byte = 0x27 }
};

static const SST_RamByte addxb_final_ram_10[] = {
		{ .addr = 0x699d68, .byte = 0xdb },
		{ .addr = 0x699d69, .byte = 0x03 },
		{ .addr = 0x699d6a, .byte = 0x55 },
		{ .addr = 0x699d6b, .byte = 0x3f },
		{ .addr = 0x699d6c, .byte = 0xaf },
		{ .addr = 0x699d6d, .byte = 0x27 }
};

static const SST_Transaction addxb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6921580, .data = 44839, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_11[] = {
		{ .addr = 0x7e8184, .byte = 0xd5 },
		{ .addr = 0x7e8185, .byte = 0x02 },
		{ .addr = 0x7e8186, .byte = 0x6b },
		{ .addr = 0x7e8187, .byte = 0xf4 },
		{ .addr = 0x7e8188, .byte = 0xc5 },
		{ .addr = 0x7e8189, .byte = 0x84 }
};

static const SST_RamByte addxb_final_ram_11[] = {
		{ .addr = 0x7e8184, .byte = 0xd5 },
		{ .addr = 0x7e8185, .byte = 0x02 },
		{ .addr = 0x7e8186, .byte = 0x6b },
		{ .addr = 0x7e8187, .byte = 0xf4 },
		{ .addr = 0x7e8188, .byte = 0xc5 },
		{ .addr = 0x7e8189, .byte = 0x84 }
};

static const SST_Transaction addxb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8290696, .data = 50564, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_12[] = {
		{ .addr = 0x0d8514, .byte = 0xdd },
		{ .addr = 0x0d8515, .byte = 0x04 },
		{ .addr = 0x0d8516, .byte = 0xf1 },
		{ .addr = 0x0d8517, .byte = 0xba },
		{ .addr = 0x0d8518, .byte = 0x95 },
		{ .addr = 0x0d8519, .byte = 0x9d }
};

static const SST_RamByte addxb_final_ram_12[] = {
		{ .addr = 0x0d8514, .byte = 0xdd },
		{ .addr = 0x0d8515, .byte = 0x04 },
		{ .addr = 0x0d8516, .byte = 0xf1 },
		{ .addr = 0x0d8517, .byte = 0xba },
		{ .addr = 0x0d8518, .byte = 0x95 },
		{ .addr = 0x0d8519, .byte = 0x9d }
};

static const SST_Transaction addxb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 886040, .data = 38301, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_13[] = {
		{ .addr = 0x9a3cc2, .byte = 0xd5 },
		{ .addr = 0x9a3cc3, .byte = 0x03 },
		{ .addr = 0x9a3cc4, .byte = 0x03 },
		{ .addr = 0x9a3cc5, .byte = 0x76 },
		{ .addr = 0x9a3cc6, .byte = 0xca },
		{ .addr = 0x9a3cc7, .byte = 0x3e }
};

static const SST_RamByte addxb_final_ram_13[] = {
		{ .addr = 0x9a3cc2, .byte = 0xd5 },
		{ .addr = 0x9a3cc3, .byte = 0x03 },
		{ .addr = 0x9a3cc4, .byte = 0x03 },
		{ .addr = 0x9a3cc5, .byte = 0x76 },
		{ .addr = 0x9a3cc6, .byte = 0xca },
		{ .addr = 0x9a3cc7, .byte = 0x3e }
};

static const SST_Transaction addxb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10108102, .data = 51774, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_14[] = {
		{ .addr = 0x565982, .byte = 0xd5 },
		{ .addr = 0x565983, .byte = 0x03 },
		{ .addr = 0x565984, .byte = 0x99 },
		{ .addr = 0x565985, .byte = 0x10 },
		{ .addr = 0x565986, .byte = 0x21 },
		{ .addr = 0x565987, .byte = 0x94 }
};

static const SST_RamByte addxb_final_ram_14[] = {
		{ .addr = 0x565982, .byte = 0xd5 },
		{ .addr = 0x565983, .byte = 0x03 },
		{ .addr = 0x565984, .byte = 0x99 },
		{ .addr = 0x565985, .byte = 0x10 },
		{ .addr = 0x565986, .byte = 0x21 },
		{ .addr = 0x565987, .byte = 0x94 }
};

static const SST_Transaction addxb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5659014, .data = 8596, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_15[] = {
		{ .addr = 0xa7ccbc, .byte = 0xdb },
		{ .addr = 0xa7ccbd, .byte = 0x01 },
		{ .addr = 0xa7ccbe, .byte = 0xfc },
		{ .addr = 0xa7ccbf, .byte = 0x6e },
		{ .addr = 0xa7ccc0, .byte = 0xc1 },
		{ .addr = 0xa7ccc1, .byte = 0x4f }
};

static const SST_RamByte addxb_final_ram_15[] = {
		{ .addr = 0xa7ccbc, .byte = 0xdb },
		{ .addr = 0xa7ccbd, .byte = 0x01 },
		{ .addr = 0xa7ccbe, .byte = 0xfc },
		{ .addr = 0xa7ccbf, .byte = 0x6e },
		{ .addr = 0xa7ccc0, .byte = 0xc1 },
		{ .addr = 0xa7ccc1, .byte = 0x4f }
};

static const SST_Transaction addxb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10996928, .data = 49487, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_16[] = {
		{ .addr = 0x0a9b02, .byte = 0xd1 },
		{ .addr = 0x0a9b03, .byte = 0x02 },
		{ .addr = 0x0a9b04, .byte = 0x8e },
		{ .addr = 0x0a9b05, .byte = 0x75 },
		{ .addr = 0x0a9b06, .byte = 0xe9 },
		{ .addr = 0x0a9b07, .byte = 0xa6 }
};

static const SST_RamByte addxb_final_ram_16[] = {
		{ .addr = 0x0a9b02, .byte = 0xd1 },
		{ .addr = 0x0a9b03, .byte = 0x02 },
		{ .addr = 0x0a9b04, .byte = 0x8e },
		{ .addr = 0x0a9b05, .byte = 0x75 },
		{ .addr = 0x0a9b06, .byte = 0xe9 },
		{ .addr = 0x0a9b07, .byte = 0xa6 }
};

static const SST_Transaction addxb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 695046, .data = 59814, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_17[] = {
		{ .addr = 0xb3b95c, .byte = 0xdd },
		{ .addr = 0xb3b95d, .byte = 0x07 },
		{ .addr = 0xb3b95e, .byte = 0x63 },
		{ .addr = 0xb3b95f, .byte = 0xf2 },
		{ .addr = 0xb3b960, .byte = 0x11 },
		{ .addr = 0xb3b961, .byte = 0x44 }
};

static const SST_RamByte addxb_final_ram_17[] = {
		{ .addr = 0xb3b95c, .byte = 0xdd },
		{ .addr = 0xb3b95d, .byte = 0x07 },
		{ .addr = 0xb3b95e, .byte = 0x63 },
		{ .addr = 0xb3b95f, .byte = 0xf2 },
		{ .addr = 0xb3b960, .byte = 0x11 },
		{ .addr = 0xb3b961, .byte = 0x44 }
};

static const SST_Transaction addxb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11778400, .data = 4420, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_18[] = {
		{ .addr = 0xe1f4d4, .byte = 0xd9 },
		{ .addr = 0xe1f4d5, .byte = 0x07 },
		{ .addr = 0xe1f4d6, .byte = 0x73 },
		{ .addr = 0xe1f4d7, .byte = 0x32 },
		{ .addr = 0xe1f4d8, .byte = 0xa8 },
		{ .addr = 0xe1f4d9, .byte = 0x08 }
};

static const SST_RamByte addxb_final_ram_18[] = {
		{ .addr = 0xe1f4d4, .byte = 0xd9 },
		{ .addr = 0xe1f4d5, .byte = 0x07 },
		{ .addr = 0xe1f4d6, .byte = 0x73 },
		{ .addr = 0xe1f4d7, .byte = 0x32 },
		{ .addr = 0xe1f4d8, .byte = 0xa8 },
		{ .addr = 0xe1f4d9, .byte = 0x08 }
};

static const SST_Transaction addxb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14808280, .data = 43016, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_19[] = {
		{ .addr = 0x7ce7d0, .byte = 0xd5 },
		{ .addr = 0x7ce7d1, .byte = 0x00 },
		{ .addr = 0x7ce7d2, .byte = 0x5f },
		{ .addr = 0x7ce7d3, .byte = 0xa9 },
		{ .addr = 0x7ce7d4, .byte = 0xc2 },
		{ .addr = 0x7ce7d5, .byte = 0x62 }
};

static const SST_RamByte addxb_final_ram_19[] = {
		{ .addr = 0x7ce7d0, .byte = 0xd5 },
		{ .addr = 0x7ce7d1, .byte = 0x00 },
		{ .addr = 0x7ce7d2, .byte = 0x5f },
		{ .addr = 0x7ce7d3, .byte = 0xa9 },
		{ .addr = 0x7ce7d4, .byte = 0xc2 },
		{ .addr = 0x7ce7d5, .byte = 0x62 }
};

static const SST_Transaction addxb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8185812, .data = 49762, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_20[] = {
		{ .addr = 0x69af48, .byte = 0xd7 },
		{ .addr = 0x69af49, .byte = 0x06 },
		{ .addr = 0x69af4a, .byte = 0xd6 },
		{ .addr = 0x69af4b, .byte = 0x0a },
		{ .addr = 0x69af4c, .byte = 0xc9 },
		{ .addr = 0x69af4d, .byte = 0xa9 }
};

static const SST_RamByte addxb_final_ram_20[] = {
		{ .addr = 0x69af48, .byte = 0xd7 },
		{ .addr = 0x69af49, .byte = 0x06 },
		{ .addr = 0x69af4a, .byte = 0xd6 },
		{ .addr = 0x69af4b, .byte = 0x0a },
		{ .addr = 0x69af4c, .byte = 0xc9 },
		{ .addr = 0x69af4d, .byte = 0xa9 }
};

static const SST_Transaction addxb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6926156, .data = 51625, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_21[] = {
		{ .addr = 0xe254ac, .byte = 0xd7 },
		{ .addr = 0xe254ad, .byte = 0x0b },
		{ .addr = 0xe254ae, .byte = 0xbd },
		{ .addr = 0xe254af, .byte = 0xd6 },
		{ .addr = 0x8ddec8, .byte = 0x5e },
		{ .addr = 0x8ddec9, .byte = 0x4a },
		{ .addr = 0xe254b0, .byte = 0x0c },
		{ .addr = 0xe254b1, .byte = 0x01 }
};

static const SST_RamByte addxb_final_ram_21[] = {
		{ .addr = 0xe254ac, .byte = 0xd7 },
		{ .addr = 0xe254ad, .byte = 0x0b },
		{ .addr = 0xe254ae, .byte = 0xbd },
		{ .addr = 0xe254af, .byte = 0xd6 },
		{ .addr = 0x8ddec8, .byte = 0xa8 },
		{ .addr = 0x8ddec9, .byte = 0x4a },
		{ .addr = 0xe254b0, .byte = 0x0c },
		{ .addr = 0xe254b1, .byte = 0x01 }
};

static const SST_Transaction addxb_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9297608, .data = 74, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9297608, .data = 24064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14832816, .data = 3073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9297608, .data = 43008, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_22[] = {
		{ .addr = 0x68b3ba, .byte = 0xdd },
		{ .addr = 0x68b3bb, .byte = 0x00 },
		{ .addr = 0x68b3bc, .byte = 0x37 },
		{ .addr = 0x68b3bd, .byte = 0x27 },
		{ .addr = 0x68b3be, .byte = 0xc3 },
		{ .addr = 0x68b3bf, .byte = 0x62 }
};

static const SST_RamByte addxb_final_ram_22[] = {
		{ .addr = 0x68b3ba, .byte = 0xdd },
		{ .addr = 0x68b3bb, .byte = 0x00 },
		{ .addr = 0x68b3bc, .byte = 0x37 },
		{ .addr = 0x68b3bd, .byte = 0x27 },
		{ .addr = 0x68b3be, .byte = 0xc3 },
		{ .addr = 0x68b3bf, .byte = 0x62 }
};

static const SST_Transaction addxb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6861758, .data = 50018, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_23[] = {
		{ .addr = 0x4e18d6, .byte = 0xd3 },
		{ .addr = 0x4e18d7, .byte = 0x03 },
		{ .addr = 0x4e18d8, .byte = 0xcb },
		{ .addr = 0x4e18d9, .byte = 0xe9 },
		{ .addr = 0x4e18da, .byte = 0xfe },
		{ .addr = 0x4e18db, .byte = 0x25 }
};

static const SST_RamByte addxb_final_ram_23[] = {
		{ .addr = 0x4e18d6, .byte = 0xd3 },
		{ .addr = 0x4e18d7, .byte = 0x03 },
		{ .addr = 0x4e18d8, .byte = 0xcb },
		{ .addr = 0x4e18d9, .byte = 0xe9 },
		{ .addr = 0x4e18da, .byte = 0xfe },
		{ .addr = 0x4e18db, .byte = 0x25 }
};

static const SST_Transaction addxb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5118170, .data = 65061, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_24[] = {
		{ .addr = 0x7a3cfa, .byte = 0xdb },
		{ .addr = 0x7a3cfb, .byte = 0x07 },
		{ .addr = 0x7a3cfc, .byte = 0x9d },
		{ .addr = 0x7a3cfd, .byte = 0x4c },
		{ .addr = 0x7a3cfe, .byte = 0x93 },
		{ .addr = 0x7a3cff, .byte = 0x25 }
};

static const SST_RamByte addxb_final_ram_24[] = {
		{ .addr = 0x7a3cfa, .byte = 0xdb },
		{ .addr = 0x7a3cfb, .byte = 0x07 },
		{ .addr = 0x7a3cfc, .byte = 0x9d },
		{ .addr = 0x7a3cfd, .byte = 0x4c },
		{ .addr = 0x7a3cfe, .byte = 0x93 },
		{ .addr = 0x7a3cff, .byte = 0x25 }
};

static const SST_Transaction addxb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8011006, .data = 37669, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_25[] = {
		{ .addr = 0x7ec348, .byte = 0xd3 },
		{ .addr = 0x7ec349, .byte = 0x09 },
		{ .addr = 0x7ec34a, .byte = 0xae },
		{ .addr = 0x7ec34b, .byte = 0xf6 },
		{ .addr = 0xc94854, .byte = 0x41 },
		{ .addr = 0xc94855, .byte = 0xf7 },
		{ .addr = 0xc94852, .byte = 0xca },
		{ .addr = 0xc94853, .byte = 0x99 },
		{ .addr = 0x7ec34c, .byte = 0x9c },
		{ .addr = 0x7ec34d, .byte = 0xc3 }
};

static const SST_RamByte addxb_final_ram_25[] = {
		{ .addr = 0x7ec348, .byte = 0xd3 },
		{ .addr = 0x7ec349, .byte = 0x09 },
		{ .addr = 0x7ec34a, .byte = 0xae },
		{ .addr = 0x7ec34b, .byte = 0xf6 },
		{ .addr = 0xc94854, .byte = 0x41 },
		{ .addr = 0xc94855, .byte = 0xf7 },
		{ .addr = 0xc94852, .byte = 0xca },
		{ .addr = 0xc94853, .byte = 0xdb },
		{ .addr = 0x7ec34c, .byte = 0x9c },
		{ .addr = 0x7ec34d, .byte = 0xc3 }
};

static const SST_Transaction addxb_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13191252, .data = 16640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13191250, .data = 153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8307532, .data = 40131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13191250, .data = 219, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_26[] = {
		{ .addr = 0x457fc0, .byte = 0xd3 },
		{ .addr = 0x457fc1, .byte = 0x01 },
		{ .addr = 0x457fc2, .byte = 0xae },
		{ .addr = 0x457fc3, .byte = 0x1c },
		{ .addr = 0x457fc4, .byte = 0xfd },
		{ .addr = 0x457fc5, .byte = 0xc2 }
};

static const SST_RamByte addxb_final_ram_26[] = {
		{ .addr = 0x457fc0, .byte = 0xd3 },
		{ .addr = 0x457fc1, .byte = 0x01 },
		{ .addr = 0x457fc2, .byte = 0xae },
		{ .addr = 0x457fc3, .byte = 0x1c },
		{ .addr = 0x457fc4, .byte = 0xfd },
		{ .addr = 0x457fc5, .byte = 0xc2 }
};

static const SST_Transaction addxb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4554692, .data = 64962, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_27[] = {
		{ .addr = 0x369740, .byte = 0xd7 },
		{ .addr = 0x369741, .byte = 0x0b },
		{ .addr = 0x369742, .byte = 0xbf },
		{ .addr = 0x369743, .byte = 0x34 },
		{ .addr = 0xb89544, .byte = 0xe7 },
		{ .addr = 0xb89545, .byte = 0x7f },
		{ .addr = 0x369744, .byte = 0x51 },
		{ .addr = 0x369745, .byte = 0xf3 }
};

static const SST_RamByte addxb_final_ram_27[] = {
		{ .addr = 0x369740, .byte = 0xd7 },
		{ .addr = 0x369741, .byte = 0x0b },
		{ .addr = 0x369742, .byte = 0xbf },
		{ .addr = 0x369743, .byte = 0x34 },
		{ .addr = 0xb89544, .byte = 0x66 },
		{ .addr = 0xb89545, .byte = 0x7f },
		{ .addr = 0x369744, .byte = 0x51 },
		{ .addr = 0x369745, .byte = 0xf3 }
};

static const SST_Transaction addxb_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12096836, .data = 127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12096836, .data = 59136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3577668, .data = 20979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12096836, .data = 26112, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_28[] = {
		{ .addr = 0x011768, .byte = 0xdd },
		{ .addr = 0x011769, .byte = 0x0a },
		{ .addr = 0x01176a, .byte = 0xc8 },
		{ .addr = 0x01176b, .byte = 0x93 },
		{ .addr = 0x386996, .byte = 0x14 },
		{ .addr = 0x386997, .byte = 0xe6 },
		{ .addr = 0x6a6ce0, .byte = 0x0f },
		{ .addr = 0x6a6ce1, .byte = 0xeb },
		{ .addr = 0x01176c, .byte = 0xc2 },
		{ .addr = 0x01176d, .byte = 0x9d }
};

static const SST_RamByte addxb_final_ram_28[] = {
		{ .addr = 0x011768, .byte = 0xdd },
		{ .addr = 0x011769, .byte = 0x0a },
		{ .addr = 0x01176a, .byte = 0xc8 },
		{ .addr = 0x01176b, .byte = 0x93 },
		{ .addr = 0x386996, .byte = 0x14 },
		{ .addr = 0x386997, .byte = 0xe6 },
		{ .addr = 0x6a6ce0, .byte = 0x0f },
		{ .addr = 0x6a6ce1, .byte = 0x00 },
		{ .addr = 0x01176c, .byte = 0xc2 },
		{ .addr = 0x01176d, .byte = 0x9d }
};

static const SST_Transaction addxb_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3697046, .data = 5120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6974688, .data = 235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 71532, .data = 49821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6974688, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_29[] = {
		{ .addr = 0x4ad7cc, .byte = 0xd3 },
		{ .addr = 0x4ad7cd, .byte = 0x0e },
		{ .addr = 0x4ad7ce, .byte = 0xcf },
		{ .addr = 0x4ad7cf, .byte = 0xe0 },
		{ .addr = 0xcf7864, .byte = 0xe4 },
		{ .addr = 0xcf7865, .byte = 0x44 },
		{ .addr = 0xf0d334, .byte = 0x0d },
		{ .addr = 0xf0d335, .byte = 0xb6 },
		{ .addr = 0x4ad7d0, .byte = 0x03 },
		{ .addr = 0x4ad7d1, .byte = 0xd4 }
};

static const SST_RamByte addxb_final_ram_29[] = {
		{ .addr = 0x4ad7cc, .byte = 0xd3 },
		{ .addr = 0x4ad7cd, .byte = 0x0e },
		{ .addr = 0x4ad7ce, .byte = 0xcf },
		{ .addr = 0x4ad7cf, .byte = 0xe0 },
		{ .addr = 0xcf7864, .byte = 0xe4 },
		{ .addr = 0xcf7865, .byte = 0x44 },
		{ .addr = 0xf0d334, .byte = 0x0d },
		{ .addr = 0xf0d335, .byte = 0x9b },
		{ .addr = 0x4ad7d0, .byte = 0x03 },
		{ .addr = 0x4ad7d1, .byte = 0xd4 }
};

static const SST_Transaction addxb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13596772, .data = 58368, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15782708, .data = 182, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4904912, .data = 980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15782708, .data = 155, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_30[] = {
		{ .addr = 0x200110, .byte = 0xdb },
		{ .addr = 0x200111, .byte = 0x0b },
		{ .addr = 0x200112, .byte = 0xa1 },
		{ .addr = 0x200113, .byte = 0x6f },
		{ .addr = 0xf30c94, .byte = 0x7e },
		{ .addr = 0xf30c95, .byte = 0x56 },
		{ .addr = 0xc3a2d8, .byte = 0x1b },
		{ .addr = 0xc3a2d9, .byte = 0x46 },
		{ .addr = 0x200114, .byte = 0x3a },
		{ .addr = 0x200115, .byte = 0x97 }
};

static const SST_RamByte addxb_final_ram_30[] = {
		{ .addr = 0x200110, .byte = 0xdb },
		{ .addr = 0x200111, .byte = 0x0b },
		{ .addr = 0x200112, .byte = 0xa1 },
		{ .addr = 0x200113, .byte = 0x6f },
		{ .addr = 0xf30c94, .byte = 0x7e },
		{ .addr = 0xf30c95, .byte = 0x56 },
		{ .addr = 0xc3a2d8, .byte = 0x1b },
		{ .addr = 0xc3a2d9, .byte = 0x9c },
		{ .addr = 0x200114, .byte = 0x3a },
		{ .addr = 0x200115, .byte = 0x97 }
};

static const SST_Transaction addxb_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15928468, .data = 86, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12821208, .data = 70, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2097428, .data = 14999, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12821208, .data = 156, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxb_initial_ram_31[] = {
		{ .addr = 0x61abc0, .byte = 0xdd },
		{ .addr = 0x61abc1, .byte = 0x0a },
		{ .addr = 0x61abc2, .byte = 0xbf },
		{ .addr = 0x61abc3, .byte = 0x58 },
		{ .addr = 0xb2a908, .byte = 0x9b },
		{ .addr = 0xb2a909, .byte = 0x79 },
		{ .addr = 0xdbfe6c, .byte = 0x97 },
		{ .addr = 0xdbfe6d, .byte = 0x57 },
		{ .addr = 0x61abc4, .byte = 0x13 },
		{ .addr = 0x61abc5, .byte = 0x68 }
};

static const SST_RamByte addxb_final_ram_31[] = {
		{ .addr = 0x61abc0, .byte = 0xdd },
		{ .addr = 0x61abc1, .byte = 0x0a },
		{ .addr = 0x61abc2, .byte = 0xbf },
		{ .addr = 0x61abc3, .byte = 0x58 },
		{ .addr = 0xb2a908, .byte = 0x9b },
		{ .addr = 0xb2a909, .byte = 0x79 },
		{ .addr = 0xdbfe6c, .byte = 0x11 },
		{ .addr = 0xdbfe6d, .byte = 0x57 },
		{ .addr = 0x61abc4, .byte = 0x13 },
		{ .addr = 0x61abc5, .byte = 0x68 }
};

static const SST_Transaction addxb_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11708680, .data = 121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14417516, .data = 38656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6400964, .data = 4968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14417516, .data = 4352, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase addxb[] = {
	{
		.name = "000 ADDX.b D2, D3 d702",
		.initial = {
			.regs = {
				44548103, 261823688, 2324915324, 4058951795, 1544780998, 104217652, 2555894768, 1341936939, 230480667, 3437772131, 3037520413, 2374507427, 2278188298, 4056559490, 2377918318, 9835192, 12857820, 34311, 6052604
			},
			.prefetch0 = 55042,
			.prefetch1 = 25538,
			.ram = addxb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				44548103, 261823688, 2324915324, 4058951919, 1544780998, 104217652, 2555894768, 1341936939, 230480667, 3437772131, 3037520413, 2374507427, 2278188298, 4056559490, 2377918318, 9835192, 12857820, 34314, 6052606
			},
			.prefetch0 = 25538,
			.prefetch1 = 2602,
			.ram = addxb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 ADDX.b -(A4), -(A2) d50c",
		.initial = {
			.regs = {
				862026754, 2342926092, 2181246551, 2789726933, 2002585555, 827409454, 4275583063, 3450259253, 2153992199, 3034914198, 2300247296, 1747144140, 561913449, 4291197452, 4100107629, 12401050, 7631848, 1293, 6456418
			},
			.prefetch0 = 54540,
			.prefetch1 = 11058,
			.ram = addxb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				862026754, 2342926092, 2181246551, 2789726933, 2002585555, 827409454, 4275583063, 3450259253, 2153992199, 3034914198, 2300247295, 1747144140, 561913448, 4291197452, 4100107629, 12401050, 7631848, 1280, 6456420
			},
			.prefetch0 = 11058,
			.prefetch1 = 38372,
			.ram = addxb_final_ram_1,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 ADDX.b -(A7), -(A4) d90f",
		.initial = {
			.regs = {
				3513121348, 1640549800, 915978905, 2548423942, 710783224, 2264073777, 986596264, 1155552352, 2037700857, 3631845020, 4029052148, 1965727227, 341802634, 1640939943, 821313016, 3781076, 7372440, 33282, 14977528
			},
			.prefetch0 = 55567,
			.prefetch1 = 56428,
			.ram = addxb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3513121348, 1640549800, 915978905, 2548423942, 710783224, 2264073777, 986596264, 1155552352, 2037700857, 3631845020, 4029052148, 1965727227, 341802633, 1640939943, 821313016, 3781074, 7372440, 33297, 14977530
			},
			.prefetch0 = 56428,
			.prefetch1 = 31543,
			.ram = addxb_final_ram_2,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 ADDX.b -(A5), -(A4) d90d",
		.initial = {
			.regs = {
				1243108182, 830285891, 692501246, 2392199083, 2829803153, 1114776813, 1881996987, 1213986476, 1366573909, 575133590, 139948504, 3967028426, 3790703285, 2272428135, 9649698, 3602072, 14895686, 785, 13432224
			},
			.prefetch0 = 55565,
			.prefetch1 = 18927,
			.ram = addxb_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1243108182, 830285891, 692501246, 2392199083, 2829803153, 1114776813, 1881996987, 1213986476, 1366573909, 575133590, 139948504, 3967028426, 3790703284, 2272428134, 9649698, 3602072, 14895686, 785, 13432226
			},
			.prefetch0 = 18927,
			.prefetch1 = 21590,
			.ram = addxb_final_ram_3,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_3,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "004 ADDX.b D1, D3 d701",
		.initial = {
			.regs = {
				3918195408, 2597325249, 4116923565, 2728563426, 3519941233, 3587273908, 3876229729, 414427113, 777702893, 196650537, 592891850, 22696576, 3188211982, 610708166, 2582378821, 1428176, 8949038, 32774, 6166534
			},
			.prefetch0 = 55041,
			.prefetch1 = 13930,
			.ram = addxb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3918195408, 2597325249, 4116923565, 2728563363, 3519941233, 3587273908, 3876229729, 414427113, 777702893, 196650537, 592891850, 22696576, 3188211982, 610708166, 2582378821, 1428176, 8949038, 32793, 6166536
			},
			.prefetch0 = 13930,
			.prefetch1 = 11836,
			.ram = addxb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 ADDX.b -(A5), -(A3) d70d",
		.initial = {
			.regs = {
				3031163651, 387762227, 462829951, 3262136858, 81848921, 966539534, 3629397909, 2314803508, 3818775663, 3391215134, 1657882769, 4158989675, 82366136, 969214444, 349283905, 9637532, 7643444, 32774, 986246
			},
			.prefetch0 = 55053,
			.prefetch1 = 57940,
			.ram = addxb_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3031163651, 387762227, 462829951, 3262136858, 81848921, 966539534, 3629397909, 2314803508, 3818775663, 3391215134, 1657882769, 4158989674, 82366136, 969214443, 349283905, 9637532, 7643444, 32785, 986248
			},
			.prefetch0 = 57940,
			.prefetch1 = 15326,
			.ram = addxb_final_ram_5,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 ADDX.b -(A3), -(A5) db0b",
		.initial = {
			.regs = {
				4038300795, 525088644, 3113479031, 1141575223, 2975114187, 866254936, 364228739, 1816727073, 2156811568, 2793507006, 4282749337, 3327845165, 1447985603, 3615169836, 60419657, 6013284, 16224710, 1291, 11994422
			},
			.prefetch0 = 56075,
			.prefetch1 = 29292,
			.ram = addxb_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4038300795, 525088644, 3113479031, 1141575223, 2975114187, 866254936, 364228739, 1816727073, 2156811568, 2793507006, 4282749337, 3327845164, 1447985603, 3615169835, 60419657, 6013284, 16224710, 1299, 11994424
			},
			.prefetch0 = 29292,
			.prefetch1 = 35469,
			.ram = addxb_final_ram_6,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_6,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "007 ADDX.b -(A5), -(A6) dd0d",
		.initial = {
			.regs = {
				3127774410, 2286870491, 2680577420, 3324365241, 335586965, 4241153961, 3190097004, 2888270321, 3909066747, 233008020, 3162325820, 187187092, 938460021, 3951386894, 4095661571, 7807876, 11225138, 9484, 8352344
			},
			.prefetch0 = 56589,
			.prefetch1 = 58193,
			.ram = addxb_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3127774410, 2286870491, 2680577420, 3324365241, 335586965, 4241153961, 3190097004, 2888270321, 3909066747, 233008020, 3162325820, 187187092, 938460021, 3951386893, 4095661570, 7807876, 11225138, 9491, 8352346
			},
			.prefetch0 = 58193,
			.prefetch1 = 44199,
			.ram = addxb_final_ram_7,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_7,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "008 ADDX.b -(A3), -(A7) df0b",
		.initial = {
			.regs = {
				2374414886, 2404056781, 2200964080, 4216097854, 1519605989, 2219076972, 3152853932, 374215646, 2817980328, 1845903122, 3969164667, 446478628, 3656282448, 4269654142, 306659881, 14194952, 440556, 8211, 502722
			},
			.prefetch0 = 57099,
			.prefetch1 = 43016,
			.ram = addxb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2374414886, 2404056781, 2200964080, 4216097854, 1519605989, 2219076972, 3152853932, 374215646, 2817980328, 1845903122, 3969164667, 446478627, 3656282448, 4269654142, 306659881, 14194952, 440554, 8200, 502724
			},
			.prefetch0 = 43016,
			.prefetch1 = 33347,
			.ram = addxb_final_ram_8,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 ADDX.b D1, D0 d101",
		.initial = {
			.regs = {
				2650851602, 3185341576, 2332306608, 2724586768, 3323489624, 1042397059, 2414150800, 1738707114, 964558335, 19336178, 973533609, 705572817, 2166050337, 501048007, 254565603, 16087868, 10898056, 9740, 11674338
			},
			.prefetch0 = 53505,
			.prefetch1 = 60377,
			.ram = addxb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2650851738, 3185341576, 2332306608, 2724586768, 3323489624, 1042397059, 2414150800, 1738707114, 964558335, 19336178, 973533609, 705572817, 2166050337, 501048007, 254565603, 16087868, 10898056, 9736, 11674340
			},
			.prefetch0 = 60377,
			.prefetch1 = 44196,
			.ram = addxb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 ADDX.b D3, D5 db03",
		.initial = {
			.regs = {
				3001438596, 3663929372, 1749952378, 1517505564, 2985218520, 1066930230, 2370320881, 2456844363, 1995919079, 3755324843, 2990984741, 3847830532, 2534513403, 3469031034, 1141709680, 7780380, 1608728, 42774, 6921580
			},
			.prefetch0 = 56067,
			.prefetch1 = 21823,
			.ram = addxb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3001438596, 3663929372, 1749952378, 1517505564, 2985218520, 1066930259, 2370320881, 2456844363, 1995919079, 3755324843, 2990984741, 3847830532, 2534513403, 3469031034, 1141709680, 7780380, 1608728, 42752, 6921582
			},
			.prefetch0 = 21823,
			.prefetch1 = 44839,
			.ram = addxb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 ADDX.b D2, D2 d502",
		.initial = {
			.regs = {
				3403655634, 2017118081, 2659853163, 1299703642, 854846528, 2007503525, 223750439, 1775541339, 391561428, 3151298405, 2766299090, 2958357528, 3822783550, 151366522, 2037675515, 2523080, 9421620, 34326, 8290696
			},
			.prefetch0 = 54530,
			.prefetch1 = 27636,
			.ram = addxb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3403655634, 2017118081, 2659853271, 1299703642, 854846528, 2007503525, 223750439, 1775541339, 391561428, 3151298405, 2766299090, 2958357528, 3822783550, 151366522, 2037675515, 2523080, 9421620, 34314, 8290698
			},
			.prefetch0 = 27636,
			.prefetch1 = 50564,
			.ram = addxb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 ADDX.b D4, D6 dd04",
		.initial = {
			.regs = {
				3886447801, 1408623721, 1334061046, 2833590258, 1408588808, 901455078, 180253699, 1656515480, 332648608, 3653636031, 2558831201, 1150187029, 2765398957, 126448662, 65910485, 11945030, 4952158, 34580, 886040
			},
			.prefetch0 = 56580,
			.prefetch1 = 61882,
			.ram = addxb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3886447801, 1408623721, 1334061046, 2833590258, 1408588808, 901455078, 180253708, 1656515480, 332648608, 3653636031, 2558831201, 1150187029, 2765398957, 126448662, 65910485, 11945030, 4952158, 34560, 886042
			},
			.prefetch0 = 61882,
			.prefetch1 = 38301,
			.ram = addxb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 ADDX.b D3, D2 d503",
		.initial = {
			.regs = {
				2955984821, 711266190, 4148331504, 813046240, 2093735086, 3382029650, 338840774, 618577969, 977272465, 3703940304, 3562154898, 821713665, 3513635332, 2135562284, 2861336365, 6423640, 11696278, 22, 10108102
			},
			.prefetch0 = 54531,
			.prefetch1 = 886,
			.ram = addxb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2955984821, 711266190, 4148331473, 813046240, 2093735086, 3382029650, 338840774, 618577969, 977272465, 3703940304, 3562154898, 821713665, 3513635332, 2135562284, 2861336365, 6423640, 11696278, 25, 10108104
			},
			.prefetch0 = 886,
			.prefetch1 = 51774,
			.ram = addxb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 ADDX.b D3, D2 d503",
		.initial = {
			.regs = {
				3659661527, 2706457539, 3629954142, 169110842, 2693080818, 2110767089, 3084782478, 155524210, 3371742459, 489584811, 4214681761, 1072268657, 1671066032, 1361877247, 2918866842, 7881554, 4537916, 34324, 5659014
			},
			.prefetch0 = 54531,
			.prefetch1 = 39184,
			.ram = addxb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3659661527, 2706457539, 3629954201, 169110842, 2693080818, 2110767089, 3084782478, 155524210, 3371742459, 489584811, 4214681761, 1072268657, 1671066032, 1361877247, 2918866842, 7881554, 4537916, 34314, 5659016
			},
			.prefetch0 = 39184,
			.prefetch1 = 8596,
			.ram = addxb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 ADDX.b D1, D5 db01",
		.initial = {
			.regs = {
				246995039, 1084105513, 217997557, 1760886656, 3313205120, 1824787233, 2384947328, 2847954311, 215146957, 3671967585, 4233381258, 3378378617, 4255824452, 1380160645, 601716748, 5114386, 12868142, 40960, 10996928
			},
			.prefetch0 = 56065,
			.prefetch1 = 64622,
			.ram = addxb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				246995039, 1084105513, 217997557, 1760886656, 3313205120, 1824787274, 2384947328, 2847954311, 215146957, 3671967585, 4233381258, 3378378617, 4255824452, 1380160645, 601716748, 5114386, 12868142, 40960, 10996930
			},
			.prefetch0 = 64622,
			.prefetch1 = 49487,
			.ram = addxb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "016 ADDX.b D2, D0 d102",
		.initial = {
			.regs = {
				3313158701, 1414130761, 93309232, 2486799687, 3622494145, 2114609430, 2424245993, 904443472, 3652457898, 623700736, 3051184597, 2870095380, 3506619236, 987969372, 2417073465, 11019562, 3057686, 1543, 695046
			},
			.prefetch0 = 53506,
			.prefetch1 = 36469,
			.ram = addxb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3313158749, 1414130761, 93309232, 2486799687, 3622494145, 2114609430, 2424245993, 904443472, 3652457898, 623700736, 3051184597, 2870095380, 3506619236, 987969372, 2417073465, 11019562, 3057686, 1536, 695048
			},
			.prefetch0 = 36469,
			.prefetch1 = 59814,
			.ram = addxb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 ADDX.b D7, D6 dd07",
		.initial = {
			.regs = {
				1769119439, 978242585, 4182979841, 848005358, 3309909036, 2513713423, 43116663, 100423862, 3801074217, 3901814838, 1984726231, 2223314855, 3485825305, 3493295078, 314756264, 13032922, 10868006, 33551, 11778400
			},
			.prefetch0 = 56583,
			.prefetch1 = 25586,
			.ram = addxb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1769119439, 978242585, 4182979841, 848005358, 3309909036, 2513713423, 43116589, 100423862, 3801074217, 3901814838, 1984726231, 2223314855, 3485825305, 3493295078, 314756264, 13032922, 10868006, 33553, 11778402
			},
			.prefetch0 = 25586,
			.prefetch1 = 4420,
			.ram = addxb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 ADDX.b D7, D4 d907",
		.initial = {
			.regs = {
				2253185247, 2386951256, 3267083357, 3889350336, 3287147861, 4238295501, 3260328184, 1901266707, 484833570, 1154450560, 2491717804, 2487921134, 4207107871, 3245370526, 4093389485, 6362638, 11472242, 40975, 14808280
			},
			.prefetch0 = 55559,
			.prefetch1 = 29490,
			.ram = addxb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2253185247, 2386951256, 3267083357, 3889350336, 3287147880, 4238295501, 3260328184, 1901266707, 484833570, 1154450560, 2491717804, 2487921134, 4207107871, 3245370526, 4093389485, 6362638, 11472242, 40960, 14808282
			},
			.prefetch0 = 29490,
			.prefetch1 = 43016,
			.ram = addxb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 ADDX.b D0, D2 d500",
		.initial = {
			.regs = {
				4179020017, 2805528295, 3366220075, 1343793923, 2393238082, 1844469906, 6451087, 498561606, 2386186061, 3336375, 1771057150, 136319174, 2482668913, 1201778278, 4134118330, 1712140, 6933860, 534, 8185812
			},
			.prefetch0 = 54528,
			.prefetch1 = 24489,
			.ram = addxb_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4179020017, 2805528295, 3366220061, 1343793923, 2393238082, 1844469906, 6451087, 498561606, 2386186061, 3336375, 1771057150, 136319174, 2482668913, 1201778278, 4134118330, 1712140, 6933860, 529, 8185814
			},
			.prefetch0 = 24489,
			.prefetch1 = 49762,
			.ram = addxb_final_ram_19,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 ADDX.b D6, D3 d706",
		.initial = {
			.regs = {
				2159752213, 3241166837, 2493275791, 205366774, 1957946469, 3728972883, 2306128605, 2368394548, 3865203814, 2629105448, 1696306025, 1873839363, 75824179, 3435765135, 2420207830, 8473502, 8466058, 790, 6926156
			},
			.prefetch0 = 55046,
			.prefetch1 = 54794,
			.ram = addxb_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2159752213, 3241166837, 2493275791, 205366740, 1957946469, 3728972883, 2306128605, 2368394548, 3865203814, 2629105448, 1696306025, 1873839363, 75824179, 3435765135, 2420207830, 8473502, 8466058, 793, 6926158
			},
			.prefetch0 = 54794,
			.prefetch1 = 51625,
			.ram = addxb_final_ram_20,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_20,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "021 ADDX.b -(A3), -(A3) d70b",
		.initial = {
			.regs = {
				2051703076, 3159152160, 1339710541, 2915512727, 3233361637, 31973379, 2162435317, 1988966031, 2122385814, 3479081395, 2538421508, 1183702730, 2653899842, 3548084255, 2571767915, 6376904, 14179250, 9728, 14832816
			},
			.prefetch0 = 55051,
			.prefetch1 = 48598,
			.ram = addxb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2051703076, 3159152160, 1339710541, 2915512727, 3233361637, 31973379, 2162435317, 1988966031, 2122385814, 3479081395, 2538421508, 1183702728, 2653899842, 3548084255, 2571767915, 6376904, 14179250, 9738, 14832818
			},
			.prefetch0 = 48598,
			.prefetch1 = 3073,
			.ram = addxb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = addxb_transactions_21,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "022 ADDX.b D0, D6 dd00",
		.initial = {
			.regs = {
				3727517028, 494719691, 1451131013, 1783990005, 1726151830, 2357095905, 3328653171, 170250597, 2208573485, 3109835339, 1686062420, 4072518802, 2923436153, 3408963958, 2343524753, 16228292, 15052258, 9985, 6861758
			},
			.prefetch0 = 56576,
			.prefetch1 = 14119,
			.ram = addxb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3727517028, 494719691, 1451131013, 1783990005, 1726151830, 2357095905, 3328653271, 170250597, 2208573485, 3109835339, 1686062420, 4072518802, 2923436153, 3408963958, 2343524753, 16228292, 15052258, 9994, 6861760
			},
			.prefetch0 = 14119,
			.prefetch1 = 50018,
			.ram = addxb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 ADDX.b D3, D1 d303",
		.initial = {
			.regs = {
				2021139368, 1064836431, 2021048707, 481741193, 600440093, 3950150755, 374568466, 3394557718, 2980358815, 2461598796, 2153505087, 3372639614, 314886779, 1459136611, 964984076, 12671256, 5714504, 33815, 5118170
			},
			.prefetch0 = 54019,
			.prefetch1 = 52201,
			.ram = addxb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2021139368, 1064836569, 2021048707, 481741193, 600440093, 3950150755, 374568466, 3394557718, 2980358815, 2461598796, 2153505087, 3372639614, 314886779, 1459136611, 964984076, 12671256, 5714504, 33800, 5118172
			},
			.prefetch0 = 52201,
			.prefetch1 = 65061,
			.ram = addxb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 ADDX.b D7, D5 db07",
		.initial = {
			.regs = {
				3119141446, 2606876594, 1127252188, 2831784196, 1980057587, 508386005, 353623010, 814395431, 393463778, 2753075879, 4010665709, 3396481327, 3114343935, 1939415835, 3597988305, 9889388, 1343146, 34309, 8011006
			},
			.prefetch0 = 56071,
			.prefetch1 = 40268,
			.ram = addxb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3119141446, 2606876594, 1127252188, 2831784196, 1980057587, 508386044, 353623010, 814395431, 393463778, 2753075879, 4010665709, 3396481327, 3114343935, 1939415835, 3597988305, 9889388, 1343146, 34312, 8011008
			},
			.prefetch0 = 40268,
			.prefetch1 = 37669,
			.ram = addxb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 ADDX.b -(A1), -(A1) d309",
		.initial = {
			.regs = {
				3730557218, 2753707303, 3010901360, 247642211, 3296787498, 3623736078, 3754537143, 2173485858, 2611027152, 1623803989, 2954301646, 2655284188, 331237395, 2193464367, 3220812505, 3458834, 7094198, 8223, 8307532
			},
			.prefetch0 = 54025,
			.prefetch1 = 44790,
			.ram = addxb_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3730557218, 2753707303, 3010901360, 247642211, 3296787498, 3623736078, 3754537143, 2173485858, 2611027152, 1623803987, 2954301646, 2655284188, 331237395, 2193464367, 3220812505, 3458834, 7094198, 8200, 8307534
			},
			.prefetch0 = 44790,
			.prefetch1 = 40131,
			.ram = addxb_final_ram_25,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_25,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "026 ADDX.b D1, D1 d301",
		.initial = {
			.regs = {
				4052611618, 175537130, 1841049382, 3474945611, 2186682595, 2734616436, 2568662128, 940024204, 2573270873, 4293203796, 3412044474, 2398236489, 1329979820, 722668045, 2230865704, 15096296, 14336140, 1807, 4554692
			},
			.prefetch0 = 54017,
			.prefetch1 = 44572,
			.ram = addxb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4052611618, 175537108, 1841049382, 3474945611, 2186682595, 2734616436, 2568662128, 940024204, 2573270873, 4293203796, 3412044474, 2398236489, 1329979820, 722668045, 2230865704, 15096296, 14336140, 1817, 4554694
			},
			.prefetch0 = 44572,
			.prefetch1 = 64962,
			.ram = addxb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = addxb_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 ADDX.b -(A3), -(A3) d70b",
		.initial = {
			.regs = {
				1525516608, 614241165, 1223799629, 2003727334, 491641048, 1237458257, 3206962527, 3446100016, 2676610412, 3474353100, 2164790531, 3703084358, 792221173, 2287195690, 3742717376, 794102, 2471718, 9484, 3577668
			},
			.prefetch0 = 55051,
			.prefetch1 = 48948,
			.ram = addxb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1525516608, 614241165, 1223799629, 2003727334, 491641048, 1237458257, 3206962527, 3446100016, 2676610412, 3474353100, 2164790531, 3703084356, 792221173, 2287195690, 3742717376, 794102, 2471718, 9489, 3577670
			},
			.prefetch0 = 48948,
			.prefetch1 = 20979,
			.ram = addxb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = addxb_transactions_27,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "028 ADDX.b -(A2), -(A6) dd0a",
		.initial = {
			.regs = {
				4018405450, 880809142, 2533299115, 1537503446, 493219821, 4127651679, 3130326220, 134615792, 1921575936, 2311449677, 607676823, 4168763309, 3256598739, 2435118118, 4033506530, 15933346, 11969794, 42776, 71532
			},
			.prefetch0 = 56586,
			.prefetch1 = 51347,
			.ram = addxb_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4018405450, 880809142, 2533299115, 1537503446, 493219821, 4127651679, 3130326220, 134615792, 1921575936, 2311449677, 607676822, 4168763309, 3256598739, 2435118118, 4033506529, 15933346, 11969794, 42769, 71534
			},
			.prefetch0 = 51347,
			.prefetch1 = 49821,
			.ram = addxb_final_ram_28,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_28,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "029 ADDX.b -(A6), -(A1) d30e",
		.initial = {
			.regs = {
				2582309409, 4182369761, 3346273676, 3949491519, 2811456105, 4149386329, 1608427377, 4161645482, 3951355233, 569430838, 2618504783, 1228355704, 2169136752, 3559360157, 3050272869, 14207584, 6074772, 788, 4904912
			},
			.prefetch0 = 54030,
			.prefetch1 = 53216,
			.ram = addxb_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2582309409, 4182369761, 3346273676, 3949491519, 2811456105, 4149386329, 1608427377, 4161645482, 3951355233, 569430837, 2618504783, 1228355704, 2169136752, 3559360157, 3050272868, 14207584, 6074772, 793, 4904914
			},
			.prefetch0 = 53216,
			.prefetch1 = 980,
			.ram = addxb_final_ram_29,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_29,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "030 ADDX.b -(A3), -(A5) db0b",
		.initial = {
			.regs = {
				3876661176, 4152879406, 1175174953, 181183696, 3573015454, 2214790443, 388213323, 3611342849, 2412025285, 2819404238, 1333147223, 4008905878, 3497214348, 4140016346, 1386567716, 9253326, 4854564, 8960, 2097428
			},
			.prefetch0 = 56075,
			.prefetch1 = 41327,
			.ram = addxb_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3876661176, 4152879406, 1175174953, 181183696, 3573015454, 2214790443, 388213323, 3611342849, 2412025285, 2819404238, 1333147223, 4008905877, 3497214348, 4140016345, 1386567716, 9253326, 4854564, 8970, 2097430
			},
			.prefetch0 = 41327,
			.prefetch1 = 14999,
			.ram = addxb_final_ram_30,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_30,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "031 ADDX.b -(A2), -(A6) dd0a",
		.initial = {
			.regs = {
				116688095, 2000060842, 3408676935, 875830455, 1182496866, 1025582712, 3286297269, 1912154726, 1642522486, 4017087813, 2259855626, 133720026, 3421939207, 2764900760, 3772513901, 13702034, 9038418, 42772, 6400964
			},
			.prefetch0 = 56586,
			.prefetch1 = 48984,
			.ram = addxb_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				116688095, 2000060842, 3408676935, 875830455, 1182496866, 1025582712, 3286297269, 1912154726, 1642522486, 4017087813, 2259855625, 133720026, 3421939207, 2764900760, 3772513900, 13702034, 9038418, 42769, 6400966
			},
			.prefetch0 = 48984,
			.prefetch1 = 4968,
			.ram = addxb_final_ram_31,
			.ram_len = 10,
		},
		.transactions = addxb_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_ADDXB_H */