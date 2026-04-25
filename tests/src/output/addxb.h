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

const uint32_t ADDXB_TEST_COUNT = 16;
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
};

#endif /* RBT_ADDXB_H */