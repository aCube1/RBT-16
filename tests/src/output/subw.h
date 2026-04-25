#ifndef RBT_SUBW_H
#define RBT_SUBW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subw_initial_ram_0[] = {
		{ .addr = 0xb31c34, .byte = 0x9f },
		{ .addr = 0xb31c35, .byte = 0x78 },
		{ .addr = 0xb31c36, .byte = 0xb7 },
		{ .addr = 0xb31c37, .byte = 0xcb },
		{ .addr = 0xb31c38, .byte = 0xd1 },
		{ .addr = 0xb31c39, .byte = 0xea },
		{ .addr = 0x00000c, .byte = 0xf4 },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0x249588, .byte = 0x24 },
		{ .addr = 0x249589, .byte = 0x21 },
		{ .addr = 0x24958a, .byte = 0xed },
		{ .addr = 0x24958b, .byte = 0xed }
};

static const SST_RamByte subw_final_ram_0[] = {
		{ .addr = 0xb31c34, .byte = 0x9f },
		{ .addr = 0xb31c35, .byte = 0x78 },
		{ .addr = 0xb31c36, .byte = 0xb7 },
		{ .addr = 0xb31c37, .byte = 0xcb },
		{ .addr = 0xb31c38, .byte = 0xd1 },
		{ .addr = 0xb31c39, .byte = 0xea },
		{ .addr = 0xff847e, .byte = 0x1c },
		{ .addr = 0xff847f, .byte = 0x38 },
		{ .addr = 0xff847a, .byte = 0x81 },
		{ .addr = 0xff847b, .byte = 0x09 },
		{ .addr = 0xff847c, .byte = 0x00 },
		{ .addr = 0xff847d, .byte = 0xb3 },
		{ .addr = 0xff8478, .byte = 0x9f },
		{ .addr = 0xff8479, .byte = 0x78 },
		{ .addr = 0xff8476, .byte = 0xb7 },
		{ .addr = 0xff8477, .byte = 0xcb },
		{ .addr = 0xff8472, .byte = 0x9f },
		{ .addr = 0xff8473, .byte = 0x71 },
		{ .addr = 0xff8474, .byte = 0xff },
		{ .addr = 0xff8475, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0xf4 },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0x249588, .byte = 0x24 },
		{ .addr = 0x249589, .byte = 0x21 },
		{ .addr = 0x24958a, .byte = 0xed },
		{ .addr = 0x24958b, .byte = 0xed }
};

static const SST_Transaction subw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11738168, .data = 53738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16758730, .data = 9065, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745598, .data = 7224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745594, .data = 33033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745596, .data = 179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745592, .data = 40824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745590, .data = 47051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745586, .data = 40817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745588, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2397576, .data = 9249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2397578, .data = 60909, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_1[] = {
		{ .addr = 0xe9812c, .byte = 0x5f },
		{ .addr = 0xe9812d, .byte = 0x45 },
		{ .addr = 0xe9812e, .byte = 0x7e },
		{ .addr = 0xe9812f, .byte = 0x86 },
		{ .addr = 0xe98130, .byte = 0x54 },
		{ .addr = 0xe98131, .byte = 0xbd }
};

static const SST_RamByte subw_final_ram_1[] = {
		{ .addr = 0xe9812c, .byte = 0x5f },
		{ .addr = 0xe9812d, .byte = 0x45 },
		{ .addr = 0xe9812e, .byte = 0x7e },
		{ .addr = 0xe9812f, .byte = 0x86 },
		{ .addr = 0xe98130, .byte = 0x54 },
		{ .addr = 0xe98131, .byte = 0xbd }
};

static const SST_Transaction subw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15302960, .data = 21693, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_2[] = {
		{ .addr = 0x4b9432, .byte = 0x53 },
		{ .addr = 0x4b9433, .byte = 0x54 },
		{ .addr = 0x4b9434, .byte = 0x81 },
		{ .addr = 0x4b9435, .byte = 0xbc },
		{ .addr = 0xa5fc94, .byte = 0x05 },
		{ .addr = 0xa5fc95, .byte = 0x6d },
		{ .addr = 0x4b9436, .byte = 0xa9 },
		{ .addr = 0x4b9437, .byte = 0x82 }
};

static const SST_RamByte subw_final_ram_2[] = {
		{ .addr = 0x4b9432, .byte = 0x53 },
		{ .addr = 0x4b9433, .byte = 0x54 },
		{ .addr = 0x4b9434, .byte = 0x81 },
		{ .addr = 0x4b9435, .byte = 0xbc },
		{ .addr = 0xa5fc94, .byte = 0x05 },
		{ .addr = 0xa5fc95, .byte = 0x6c },
		{ .addr = 0x4b9436, .byte = 0xa9 },
		{ .addr = 0x4b9437, .byte = 0x82 }
};

static const SST_Transaction subw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10878100, .data = 1389, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4953142, .data = 43394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10878100, .data = 1388, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_3[] = {
		{ .addr = 0xa92900, .byte = 0x5d },
		{ .addr = 0xa92901, .byte = 0x5b },
		{ .addr = 0xa92902, .byte = 0xff },
		{ .addr = 0xa92903, .byte = 0xae },
		{ .addr = 0xf42862, .byte = 0x4b },
		{ .addr = 0xf42863, .byte = 0x0a },
		{ .addr = 0xa92904, .byte = 0xb3 },
		{ .addr = 0xa92905, .byte = 0xda }
};

static const SST_RamByte subw_final_ram_3[] = {
		{ .addr = 0xa92900, .byte = 0x5d },
		{ .addr = 0xa92901, .byte = 0x5b },
		{ .addr = 0xa92902, .byte = 0xff },
		{ .addr = 0xa92903, .byte = 0xae },
		{ .addr = 0xf42862, .byte = 0x4b },
		{ .addr = 0xf42863, .byte = 0x04 },
		{ .addr = 0xa92904, .byte = 0xb3 },
		{ .addr = 0xa92905, .byte = 0xda }
};

static const SST_Transaction subw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16001122, .data = 19210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11086084, .data = 46042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16001122, .data = 19204, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_4[] = {
		{ .addr = 0x0ac2ec, .byte = 0x5d },
		{ .addr = 0x0ac2ed, .byte = 0x54 },
		{ .addr = 0x0ac2ee, .byte = 0xb8 },
		{ .addr = 0x0ac2ef, .byte = 0x14 },
		{ .addr = 0x11b27a, .byte = 0xe2 },
		{ .addr = 0x11b27b, .byte = 0x51 },
		{ .addr = 0x0ac2f0, .byte = 0x3c },
		{ .addr = 0x0ac2f1, .byte = 0xc1 }
};

static const SST_RamByte subw_final_ram_4[] = {
		{ .addr = 0x0ac2ec, .byte = 0x5d },
		{ .addr = 0x0ac2ed, .byte = 0x54 },
		{ .addr = 0x0ac2ee, .byte = 0xb8 },
		{ .addr = 0x0ac2ef, .byte = 0x14 },
		{ .addr = 0x11b27a, .byte = 0xe2 },
		{ .addr = 0x11b27b, .byte = 0x4b },
		{ .addr = 0x0ac2f0, .byte = 0x3c },
		{ .addr = 0x0ac2f1, .byte = 0xc1 }
};

static const SST_Transaction subw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159802, .data = 57937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 705264, .data = 15553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159802, .data = 57931, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_5[] = {
		{ .addr = 0x65e6c8, .byte = 0x97 },
		{ .addr = 0x65e6c9, .byte = 0x61 },
		{ .addr = 0x65e6ca, .byte = 0x2c },
		{ .addr = 0x65e6cb, .byte = 0x1c },
		{ .addr = 0x30195c, .byte = 0x35 },
		{ .addr = 0x30195d, .byte = 0x53 },
		{ .addr = 0x65e6cc, .byte = 0xcc },
		{ .addr = 0x65e6cd, .byte = 0xa3 }
};

static const SST_RamByte subw_final_ram_5[] = {
		{ .addr = 0x65e6c8, .byte = 0x97 },
		{ .addr = 0x65e6c9, .byte = 0x61 },
		{ .addr = 0x65e6ca, .byte = 0x2c },
		{ .addr = 0x65e6cb, .byte = 0x1c },
		{ .addr = 0x30195c, .byte = 0x19 },
		{ .addr = 0x30195d, .byte = 0x42 },
		{ .addr = 0x65e6cc, .byte = 0xcc },
		{ .addr = 0x65e6cd, .byte = 0xa3 }
};

static const SST_Transaction subw_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3152220, .data = 13651, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6678220, .data = 52387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3152220, .data = 6466, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_6[] = {
		{ .addr = 0x269f76, .byte = 0x5b },
		{ .addr = 0x269f77, .byte = 0x51 },
		{ .addr = 0x269f78, .byte = 0xcb },
		{ .addr = 0x269f79, .byte = 0x8a },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0xfe },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0x54fe28, .byte = 0xcc },
		{ .addr = 0x54fe29, .byte = 0x55 },
		{ .addr = 0x54fe2a, .byte = 0x01 },
		{ .addr = 0x54fe2b, .byte = 0xba }
};

static const SST_RamByte subw_final_ram_6[] = {
		{ .addr = 0x269f76, .byte = 0x5b },
		{ .addr = 0x269f77, .byte = 0x51 },
		{ .addr = 0x269f78, .byte = 0xcb },
		{ .addr = 0x269f79, .byte = 0x8a },
		{ .addr = 0x85e0e2, .byte = 0x9f },
		{ .addr = 0x85e0e3, .byte = 0x78 },
		{ .addr = 0x85e0de, .byte = 0xa4 },
		{ .addr = 0x85e0df, .byte = 0x0b },
		{ .addr = 0x85e0e0, .byte = 0x00 },
		{ .addr = 0x85e0e1, .byte = 0x26 },
		{ .addr = 0x85e0dc, .byte = 0x5b },
		{ .addr = 0x85e0dd, .byte = 0x51 },
		{ .addr = 0x85e0da, .byte = 0x44 },
		{ .addr = 0x85e0db, .byte = 0x95 },
		{ .addr = 0x85e0d6, .byte = 0x5b },
		{ .addr = 0x85e0d7, .byte = 0x55 },
		{ .addr = 0x85e0d8, .byte = 0xa9 },
		{ .addr = 0x85e0d9, .byte = 0x7b },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0xfe },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0x54fe28, .byte = 0xcc },
		{ .addr = 0x54fe29, .byte = 0x55 },
		{ .addr = 0x54fe2a, .byte = 0x01 },
		{ .addr = 0x54fe2b, .byte = 0xba }
};

static const SST_Transaction subw_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078484, .data = 14063, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8773858, .data = 40824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8773854, .data = 41995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8773856, .data = 38, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8773852, .data = 23377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8773850, .data = 17557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8773846, .data = 23381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8773848, .data = 43387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 65064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5570088, .data = 52309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5570090, .data = 442, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_7[] = {
		{ .addr = 0x3edb3e, .byte = 0x93 },
		{ .addr = 0x3edb3f, .byte = 0x78 },
		{ .addr = 0x3edb40, .byte = 0xc8 },
		{ .addr = 0x3edb41, .byte = 0x1f },
		{ .addr = 0x3edb42, .byte = 0x15 },
		{ .addr = 0x3edb43, .byte = 0x99 },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x04 },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x04dd4c, .byte = 0x61 },
		{ .addr = 0x04dd4d, .byte = 0x5e },
		{ .addr = 0x04dd4e, .byte = 0x2a },
		{ .addr = 0x04dd4f, .byte = 0x1c }
};

static const SST_RamByte subw_final_ram_7[] = {
		{ .addr = 0x3edb3e, .byte = 0x93 },
		{ .addr = 0x3edb3f, .byte = 0x78 },
		{ .addr = 0x3edb40, .byte = 0xc8 },
		{ .addr = 0x3edb41, .byte = 0x1f },
		{ .addr = 0x3edb42, .byte = 0x15 },
		{ .addr = 0x3edb43, .byte = 0x99 },
		{ .addr = 0xfee930, .byte = 0xdb },
		{ .addr = 0xfee931, .byte = 0x42 },
		{ .addr = 0xfee92c, .byte = 0x02 },
		{ .addr = 0xfee92d, .byte = 0x13 },
		{ .addr = 0xfee92e, .byte = 0x00 },
		{ .addr = 0xfee92f, .byte = 0x3e },
		{ .addr = 0xfee92a, .byte = 0x93 },
		{ .addr = 0xfee92b, .byte = 0x78 },
		{ .addr = 0xfee928, .byte = 0xc8 },
		{ .addr = 0xfee929, .byte = 0x1f },
		{ .addr = 0xfee924, .byte = 0x93 },
		{ .addr = 0xfee925, .byte = 0x71 },
		{ .addr = 0xfee926, .byte = 0xff },
		{ .addr = 0xfee927, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x04 },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x04dd4c, .byte = 0x61 },
		{ .addr = 0x04dd4d, .byte = 0x5e },
		{ .addr = 0x04dd4e, .byte = 0x2a },
		{ .addr = 0x04dd4f, .byte = 0x1c }
};

static const SST_Transaction subw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4119362, .data = 5529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16762910, .data = 14804, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16705840, .data = 56130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16705836, .data = 531, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16705838, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16705834, .data = 37752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16705832, .data = 51231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16705828, .data = 37745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16705830, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 318796, .data = 24926, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 318798, .data = 10780, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_8[] = {
		{ .addr = 0x4fc928, .byte = 0x9d },
		{ .addr = 0x4fc929, .byte = 0x79 },
		{ .addr = 0x4fc92a, .byte = 0x2a },
		{ .addr = 0x4fc92b, .byte = 0x49 },
		{ .addr = 0x4fc92c, .byte = 0x69 },
		{ .addr = 0x4fc92d, .byte = 0x24 },
		{ .addr = 0x4fc92e, .byte = 0x9d },
		{ .addr = 0x4fc92f, .byte = 0x17 },
		{ .addr = 0x496924, .byte = 0xa7 },
		{ .addr = 0x496925, .byte = 0xb3 },
		{ .addr = 0x4fc930, .byte = 0xa7 },
		{ .addr = 0x4fc931, .byte = 0xf9 }
};

static const SST_RamByte subw_final_ram_8[] = {
		{ .addr = 0x4fc928, .byte = 0x9d },
		{ .addr = 0x4fc929, .byte = 0x79 },
		{ .addr = 0x4fc92a, .byte = 0x2a },
		{ .addr = 0x4fc92b, .byte = 0x49 },
		{ .addr = 0x4fc92c, .byte = 0x69 },
		{ .addr = 0x4fc92d, .byte = 0x24 },
		{ .addr = 0x4fc92e, .byte = 0x9d },
		{ .addr = 0x4fc92f, .byte = 0x17 },
		{ .addr = 0x496924, .byte = 0xfd },
		{ .addr = 0x496925, .byte = 0x5b },
		{ .addr = 0x4fc930, .byte = 0xa7 },
		{ .addr = 0x4fc931, .byte = 0xf9 }
};

static const SST_Transaction subw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5228844, .data = 26916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5228846, .data = 40215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4811044, .data = 42931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5228848, .data = 43001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4811044, .data = 64859, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_9[] = {
		{ .addr = 0x6dcd56, .byte = 0x98 },
		{ .addr = 0x6dcd57, .byte = 0x53 },
		{ .addr = 0x6dcd58, .byte = 0xc2 },
		{ .addr = 0x6dcd59, .byte = 0x26 },
		{ .addr = 0xac700c, .byte = 0x62 },
		{ .addr = 0xac700d, .byte = 0x4f },
		{ .addr = 0x6dcd5a, .byte = 0x5e },
		{ .addr = 0x6dcd5b, .byte = 0x7b }
};

static const SST_RamByte subw_final_ram_9[] = {
		{ .addr = 0x6dcd56, .byte = 0x98 },
		{ .addr = 0x6dcd57, .byte = 0x53 },
		{ .addr = 0x6dcd58, .byte = 0xc2 },
		{ .addr = 0x6dcd59, .byte = 0x26 },
		{ .addr = 0xac700c, .byte = 0x62 },
		{ .addr = 0xac700d, .byte = 0x4f },
		{ .addr = 0x6dcd5a, .byte = 0x5e },
		{ .addr = 0x6dcd5b, .byte = 0x7b }
};

static const SST_Transaction subw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11300876, .data = 25167, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7195994, .data = 24187, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_10[] = {
		{ .addr = 0x4a4e90, .byte = 0x04 },
		{ .addr = 0x4a4e91, .byte = 0x60 },
		{ .addr = 0x4a4e92, .byte = 0x77 },
		{ .addr = 0x4a4e93, .byte = 0x9a },
		{ .addr = 0x4a4e94, .byte = 0xf1 },
		{ .addr = 0x4a4e95, .byte = 0x48 },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xee4752, .byte = 0x93 },
		{ .addr = 0xee4753, .byte = 0xb4 },
		{ .addr = 0xee4754, .byte = 0x73 },
		{ .addr = 0xee4755, .byte = 0x15 }
};

static const SST_RamByte subw_final_ram_10[] = {
		{ .addr = 0x4a4e90, .byte = 0x04 },
		{ .addr = 0x4a4e91, .byte = 0x60 },
		{ .addr = 0x4a4e92, .byte = 0x77 },
		{ .addr = 0x4a4e93, .byte = 0x9a },
		{ .addr = 0x4a4e94, .byte = 0xf1 },
		{ .addr = 0x4a4e95, .byte = 0x48 },
		{ .addr = 0xe9ac12, .byte = 0x4e },
		{ .addr = 0xe9ac13, .byte = 0x96 },
		{ .addr = 0xe9ac0e, .byte = 0x25 },
		{ .addr = 0xe9ac0f, .byte = 0x10 },
		{ .addr = 0xe9ac10, .byte = 0x00 },
		{ .addr = 0xe9ac11, .byte = 0x4a },
		{ .addr = 0xe9ac0c, .byte = 0x04 },
		{ .addr = 0xe9ac0d, .byte = 0x60 },
		{ .addr = 0xe9ac0a, .byte = 0x44 },
		{ .addr = 0xe9ac0b, .byte = 0xdb },
		{ .addr = 0xe9ac06, .byte = 0x04 },
		{ .addr = 0xe9ac07, .byte = 0x75 },
		{ .addr = 0xe9ac08, .byte = 0x02 },
		{ .addr = 0xe9ac09, .byte = 0xe0 },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xee4752, .byte = 0x93 },
		{ .addr = 0xee4753, .byte = 0xb4 },
		{ .addr = 0xee4754, .byte = 0x73 },
		{ .addr = 0xee4755, .byte = 0x15 }
};

static const SST_Transaction subw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4869780, .data = 61768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14697690, .data = 54807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15313938, .data = 20118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15313934, .data = 9488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15313936, .data = 74, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15313932, .data = 1120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15313930, .data = 17627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15313926, .data = 1141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15313928, .data = 736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18258, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15615826, .data = 37812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15615828, .data = 29461, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_11[] = {
		{ .addr = 0xa5a1ae, .byte = 0x90 },
		{ .addr = 0xa5a1af, .byte = 0x62 },
		{ .addr = 0xa5a1b0, .byte = 0x82 },
		{ .addr = 0xa5a1b1, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0x4d },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0x86 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x5486d0, .byte = 0x3e },
		{ .addr = 0x5486d1, .byte = 0x08 },
		{ .addr = 0x5486d2, .byte = 0x24 },
		{ .addr = 0x5486d3, .byte = 0x5a }
};

static const SST_RamByte subw_final_ram_11[] = {
		{ .addr = 0xa5a1ae, .byte = 0x90 },
		{ .addr = 0xa5a1af, .byte = 0x62 },
		{ .addr = 0xa5a1b0, .byte = 0x82 },
		{ .addr = 0xa5a1b1, .byte = 0x3e },
		{ .addr = 0x636c76, .byte = 0xa1 },
		{ .addr = 0x636c77, .byte = 0xb2 },
		{ .addr = 0x636c72, .byte = 0xa1 },
		{ .addr = 0x636c73, .byte = 0x04 },
		{ .addr = 0x636c74, .byte = 0x00 },
		{ .addr = 0x636c75, .byte = 0xa5 },
		{ .addr = 0x636c70, .byte = 0x90 },
		{ .addr = 0x636c71, .byte = 0x62 },
		{ .addr = 0x636c6e, .byte = 0x72 },
		{ .addr = 0x636c6f, .byte = 0x75 },
		{ .addr = 0x636c6a, .byte = 0x90 },
		{ .addr = 0x636c6b, .byte = 0x75 },
		{ .addr = 0x636c6c, .byte = 0x9d },
		{ .addr = 0x636c6d, .byte = 0xb8 },
		{ .addr = 0x00000c, .byte = 0x4d },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0x86 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x5486d0, .byte = 0x3e },
		{ .addr = 0x5486d1, .byte = 0x08 },
		{ .addr = 0x5486d2, .byte = 0x24 },
		{ .addr = 0x5486d3, .byte = 0x5a }
};

static const SST_Transaction subw_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087924, .data = 37842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6515830, .data = 41394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6515826, .data = 41220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6515828, .data = 165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6515824, .data = 36962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6515822, .data = 29301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6515818, .data = 36981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6515820, .data = 40376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 34512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5539536, .data = 15880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5539538, .data = 9306, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_12[] = {
		{ .addr = 0x288a28, .byte = 0x90 },
		{ .addr = 0x288a29, .byte = 0x6c },
		{ .addr = 0x288a2a, .byte = 0x13 },
		{ .addr = 0x288a2b, .byte = 0xf1 },
		{ .addr = 0x288a2c, .byte = 0x1d },
		{ .addr = 0x288a2d, .byte = 0x56 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x54 },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0x76540c, .byte = 0x4d },
		{ .addr = 0x76540d, .byte = 0xa2 },
		{ .addr = 0x76540e, .byte = 0x59 },
		{ .addr = 0x76540f, .byte = 0x27 }
};

static const SST_RamByte subw_final_ram_12[] = {
		{ .addr = 0x288a28, .byte = 0x90 },
		{ .addr = 0x288a29, .byte = 0x6c },
		{ .addr = 0x288a2a, .byte = 0x13 },
		{ .addr = 0x288a2b, .byte = 0xf1 },
		{ .addr = 0x288a2c, .byte = 0x1d },
		{ .addr = 0x288a2d, .byte = 0x56 },
		{ .addr = 0x841ebe, .byte = 0x8a },
		{ .addr = 0x841ebf, .byte = 0x2a },
		{ .addr = 0x841eba, .byte = 0x24 },
		{ .addr = 0x841ebb, .byte = 0x06 },
		{ .addr = 0x841ebc, .byte = 0x00 },
		{ .addr = 0x841ebd, .byte = 0x28 },
		{ .addr = 0x841eb8, .byte = 0x90 },
		{ .addr = 0x841eb9, .byte = 0x6c },
		{ .addr = 0x841eb6, .byte = 0xb5 },
		{ .addr = 0x841eb7, .byte = 0xe3 },
		{ .addr = 0x841eb2, .byte = 0x90 },
		{ .addr = 0x841eb3, .byte = 0x75 },
		{ .addr = 0x841eb4, .byte = 0xdd },
		{ .addr = 0x841eb5, .byte = 0x06 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x54 },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0x76540c, .byte = 0x4d },
		{ .addr = 0x76540d, .byte = 0xa2 },
		{ .addr = 0x76540e, .byte = 0x59 },
		{ .addr = 0x76540f, .byte = 0x27 }
};

static const SST_Transaction subw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2656812, .data = 7510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 439778, .data = 11096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8658622, .data = 35370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8658618, .data = 9222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8658620, .data = 40, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8658616, .data = 36972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8658614, .data = 46563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8658610, .data = 36981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8658612, .data = 56582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4726, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7754764, .data = 19874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7754766, .data = 22823, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_13[] = {
		{ .addr = 0xe7b306, .byte = 0x9c },
		{ .addr = 0xe7b307, .byte = 0x6c },
		{ .addr = 0xe7b308, .byte = 0x39 },
		{ .addr = 0xe7b309, .byte = 0x22 },
		{ .addr = 0xe7b30a, .byte = 0xe9 },
		{ .addr = 0xe7b30b, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0x52 },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0xf0 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x00f022, .byte = 0xb4 },
		{ .addr = 0x00f023, .byte = 0x44 },
		{ .addr = 0x00f024, .byte = 0x93 },
		{ .addr = 0x00f025, .byte = 0x8e }
};

static const SST_RamByte subw_final_ram_13[] = {
		{ .addr = 0xe7b306, .byte = 0x9c },
		{ .addr = 0xe7b307, .byte = 0x6c },
		{ .addr = 0xe7b308, .byte = 0x39 },
		{ .addr = 0xe7b309, .byte = 0x22 },
		{ .addr = 0xe7b30a, .byte = 0xe9 },
		{ .addr = 0xe7b30b, .byte = 0x53 },
		{ .addr = 0xe02c88, .byte = 0xb3 },
		{ .addr = 0xe02c89, .byte = 0x08 },
		{ .addr = 0xe02c84, .byte = 0x86 },
		{ .addr = 0xe02c85, .byte = 0x1a },
		{ .addr = 0xe02c86, .byte = 0x00 },
		{ .addr = 0xe02c87, .byte = 0xe7 },
		{ .addr = 0xe02c82, .byte = 0x9c },
		{ .addr = 0xe02c83, .byte = 0x6c },
		{ .addr = 0xe02c80, .byte = 0x0a },
		{ .addr = 0xe02c81, .byte = 0x57 },
		{ .addr = 0xe02c7c, .byte = 0x9c },
		{ .addr = 0xe02c7d, .byte = 0x71 },
		{ .addr = 0xe02c7e, .byte = 0x55 },
		{ .addr = 0xe02c7f, .byte = 0xc9 },
		{ .addr = 0x00000c, .byte = 0x52 },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0xf0 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x00f022, .byte = 0xb4 },
		{ .addr = 0x00f023, .byte = 0x44 },
		{ .addr = 0x00f024, .byte = 0x93 },
		{ .addr = 0x00f025, .byte = 0x8e }
};

static const SST_Transaction subw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15184650, .data = 59731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13175382, .data = 14901, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14691464, .data = 45832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14691460, .data = 34330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14691462, .data = 231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14691458, .data = 40044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14691456, .data = 2647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14691452, .data = 40049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14691454, .data = 21961, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 61474, .data = 46148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 61476, .data = 37774, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_14[] = {
		{ .addr = 0x932116, .byte = 0x57 },
		{ .addr = 0x932117, .byte = 0x72 },
		{ .addr = 0x932118, .byte = 0x66 },
		{ .addr = 0x932119, .byte = 0xe6 },
		{ .addr = 0x93211a, .byte = 0x77 },
		{ .addr = 0x93211b, .byte = 0xc3 },
		{ .addr = 0x9626e8, .byte = 0x5a },
		{ .addr = 0x9626e9, .byte = 0x28 },
		{ .addr = 0x93211c, .byte = 0xda },
		{ .addr = 0x93211d, .byte = 0x75 }
};

static const SST_RamByte subw_final_ram_14[] = {
		{ .addr = 0x932116, .byte = 0x57 },
		{ .addr = 0x932117, .byte = 0x72 },
		{ .addr = 0x932118, .byte = 0x66 },
		{ .addr = 0x932119, .byte = 0xe6 },
		{ .addr = 0x93211a, .byte = 0x77 },
		{ .addr = 0x93211b, .byte = 0xc3 },
		{ .addr = 0x9626e8, .byte = 0x5a },
		{ .addr = 0x9626e9, .byte = 0x25 },
		{ .addr = 0x93211c, .byte = 0xda },
		{ .addr = 0x93211d, .byte = 0x75 }
};

static const SST_Transaction subw_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9642266, .data = 30659, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9840360, .data = 23080, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9642268, .data = 55925, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9840360, .data = 23077, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subw_initial_ram_15[] = {
		{ .addr = 0xb76f32, .byte = 0x92 },
		{ .addr = 0xb76f33, .byte = 0x75 },
		{ .addr = 0xb76f34, .byte = 0xe1 },
		{ .addr = 0xb76f35, .byte = 0x8f },
		{ .addr = 0xb76f36, .byte = 0x02 },
		{ .addr = 0xb76f37, .byte = 0x7e },
		{ .addr = 0x00000c, .byte = 0xb0 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x6632dc, .byte = 0x4b },
		{ .addr = 0x6632dd, .byte = 0x2d },
		{ .addr = 0x6632de, .byte = 0x9a },
		{ .addr = 0x6632df, .byte = 0x7f }
};

static const SST_RamByte subw_final_ram_15[] = {
		{ .addr = 0xb76f32, .byte = 0x92 },
		{ .addr = 0xb76f33, .byte = 0x75 },
		{ .addr = 0xb76f34, .byte = 0xe1 },
		{ .addr = 0xb76f35, .byte = 0x8f },
		{ .addr = 0xb76f36, .byte = 0x02 },
		{ .addr = 0xb76f37, .byte = 0x7e },
		{ .addr = 0x5d9690, .byte = 0x6f },
		{ .addr = 0x5d9691, .byte = 0x34 },
		{ .addr = 0x5d968c, .byte = 0xa2 },
		{ .addr = 0x5d968d, .byte = 0x06 },
		{ .addr = 0x5d968e, .byte = 0x00 },
		{ .addr = 0x5d968f, .byte = 0xb7 },
		{ .addr = 0x5d968a, .byte = 0x92 },
		{ .addr = 0x5d968b, .byte = 0x75 },
		{ .addr = 0x5d9688, .byte = 0x4c },
		{ .addr = 0x5d9689, .byte = 0xc1 },
		{ .addr = 0x5d9684, .byte = 0x92 },
		{ .addr = 0x5d9685, .byte = 0x75 },
		{ .addr = 0x5d9686, .byte = 0x9e },
		{ .addr = 0x5d9687, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xb0 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x6632dc, .byte = 0x4b },
		{ .addr = 0x6632dd, .byte = 0x2d },
		{ .addr = 0x6632de, .byte = 0x9a },
		{ .addr = 0x6632df, .byte = 0x7f }
};

static const SST_Transaction subw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12021558, .data = 638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 19648, .data = 33252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6133392, .data = 28468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6133388, .data = 41478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6133390, .data = 183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6133386, .data = 37493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6133384, .data = 19649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6133380, .data = 37493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6133382, .data = 40448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6697692, .data = 19245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6697694, .data = 39551, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t SUBW_TEST_COUNT = 16;
static const SST_TestCase subw[] = {
	{
		.name = "000 SUB.w D7, (xxx).w 9f78",
		.initial = {
			.regs = {
				778189525, 3625107800, 2162281962, 3042322923, 602243132, 131004613, 1295821721, 2828723018, 2402517068, 1417749771, 3823487136, 1208433966, 355320110, 4050864189, 844697989, 14659424, 16745600, 33033, 11738168
			},
			.prefetch0 = 40824,
			.prefetch1 = 47051,
			.ram = subw_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				778189525, 3625107800, 2162281962, 3042322923, 602243132, 131004613, 1295821721, 2828723018, 2402517068, 1417749771, 3823487136, 1208433966, 355320110, 4050864189, 844697989, 14659424, 16745586, 8457, 4096038284
			},
			.prefetch0 = 9249,
			.prefetch1 = 60909,
			.ram = subw_final_ram_0,
			.ram_len = 28,
		},
		.transactions = subw_transactions_0,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "001 SUB.w 7, D5 5f45",
		.initial = {
			.regs = {
				2119332632, 4234872393, 2672373334, 2764724144, 365162105, 3675552603, 2729398510, 2609950995, 2745708745, 2433937228, 3180607223, 3808226230, 3713213029, 3492578498, 613601061, 5394232, 67270, 1308, 15302960
			},
			.prefetch0 = 24389,
			.prefetch1 = 32390,
			.ram = subw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2119332632, 4234872393, 2672373334, 2764724144, 365162105, 3675552596, 2729398510, 2609950995, 2745708745, 2433937228, 3180607223, 3808226230, 3713213029, 3492578498, 613601061, 5394232, 67270, 1280, 15302962
			},
			.prefetch0 = 32390,
			.prefetch1 = 21693,
			.ram = subw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = subw_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 SUB.w 1, (A4) 5354",
		.initial = {
			.regs = {
				2252222202, 420358955, 3489205162, 3511237431, 2751769787, 492257197, 3861949029, 3637289262, 3234381187, 833798731, 1504458933, 1317760760, 2661678228, 4044872608, 133609577, 6790634, 12676792, 41732, 4953142
			},
			.prefetch0 = 21332,
			.prefetch1 = 33212,
			.ram = subw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2252222202, 420358955, 3489205162, 3511237431, 2751769787, 492257197, 3861949029, 3637289262, 3234381187, 833798731, 1504458933, 1317760760, 2661678228, 4044872608, 133609577, 6790634, 12676792, 41728, 4953144
			},
			.prefetch0 = 33212,
			.prefetch1 = 43394,
			.ram = subw_final_ram_2,
			.ram_len = 8,
		},
		.transactions = subw_transactions_2,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "003 SUB.w 6, (A3)+ 5d5b",
		.initial = {
			.regs = {
				3447088358, 2119903668, 415152638, 2390783270, 26240017, 1662792089, 3569970623, 2921866213, 155066396, 1361787001, 2892641616, 1039411298, 3488027075, 3698633296, 2176685134, 5074814, 8104870, 40991, 11086084
			},
			.prefetch0 = 23899,
			.prefetch1 = 65454,
			.ram = subw_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3447088358, 2119903668, 415152638, 2390783270, 26240017, 1662792089, 3569970623, 2921866213, 155066396, 1361787001, 2892641616, 1039411300, 3488027075, 3698633296, 2176685134, 5074814, 8104870, 40960, 11086086
			},
			.prefetch0 = 65454,
			.prefetch1 = 46042,
			.ram = subw_final_ram_3,
			.ram_len = 8,
		},
		.transactions = subw_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 SUB.w 6, (A4) 5d54",
		.initial = {
			.regs = {
				2467623099, 3060814028, 1032683574, 942629794, 3023380503, 4075727639, 2270653148, 1090665338, 1780511313, 3586971793, 913349997, 3213478821, 2651959930, 745699289, 1540226817, 6717188, 8835420, 9477, 705264
			},
			.prefetch0 = 23892,
			.prefetch1 = 47124,
			.ram = subw_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2467623099, 3060814028, 1032683574, 942629794, 3023380503, 4075727639, 2270653148, 1090665338, 1780511313, 3586971793, 913349997, 3213478821, 2651959930, 745699289, 1540226817, 6717188, 8835420, 9480, 705266
			},
			.prefetch0 = 47124,
			.prefetch1 = 15553,
			.ram = subw_final_ram_4,
			.ram_len = 8,
		},
		.transactions = subw_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 SUB.w D3, -(A1) 9761",
		.initial = {
			.regs = {
				900449381, 830323965, 3592710640, 3383827473, 3348461261, 4125061490, 830547489, 479237946, 72869170, 909121886, 266069374, 515344233, 3232822687, 169989603, 3790532766, 8375358, 14915592, 792, 6678220
			},
			.prefetch0 = 38753,
			.prefetch1 = 11292,
			.ram = subw_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				900449381, 830323965, 3592710640, 3383827473, 3348461261, 4125061490, 830547489, 479237946, 72869170, 909121884, 266069374, 515344233, 3232822687, 169989603, 3790532766, 8375358, 14915592, 768, 6678222
			},
			.prefetch0 = 11292,
			.prefetch1 = 52387,
			.ram = subw_final_ram_5,
			.ram_len = 8,
		},
		.transactions = subw_transactions_5,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "006 SUB.w 5, (A1) 5b51",
		.initial = {
			.regs = {
				1310572482, 1411128561, 157022708, 1817621960, 482167623, 1255401691, 153849223, 4225154063, 2771816185, 2843427989, 842886414, 2408586498, 1987793507, 928374433, 101293291, 16315314, 8773860, 41995, 2531194
			},
			.prefetch0 = 23377,
			.prefetch1 = 52106,
			.ram = subw_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1310572482, 1411128561, 157022708, 1817621960, 482167623, 1255401691, 153849223, 4225154063, 2771816185, 2843427989, 842886414, 2408586498, 1987793507, 928374433, 101293291, 16315314, 8773846, 9227, 1263861292
			},
			.prefetch0 = 52309,
			.prefetch1 = 442,
			.ram = subw_final_ram_6,
			.ram_len = 26,
		},
		.transactions = subw_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 SUB.w D1, (xxx).w 9378",
		.initial = {
			.regs = {
				1270854220, 628193711, 1202797977, 1409411344, 2387982959, 3866847707, 890740624, 4077524713, 722605499, 506971979, 1553960392, 1699475788, 1232444208, 1024595920, 338059225, 14918352, 16705842, 531, 4119362
			},
			.prefetch0 = 37752,
			.prefetch1 = 51231,
			.ram = subw_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1270854220, 628193711, 1202797977, 1409411344, 2387982959, 3866847707, 890740624, 4077524713, 722605499, 506971979, 1553960392, 1699475788, 1232444208, 1024595920, 338059225, 14918352, 16705828, 8723, 2282020176
			},
			.prefetch0 = 24926,
			.prefetch1 = 10780,
			.ram = subw_final_ram_7,
			.ram_len = 28,
		},
		.transactions = subw_transactions_7,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "008 SUB.w D6, (xxx).l 9d79",
		.initial = {
			.regs = {
				458065280, 435688488, 2254921238, 3887600043, 311814133, 2484889273, 373926488, 29016723, 750350813, 3043004507, 4263457210, 507857343, 4039161607, 1858780381, 1574129474, 9684482, 14653656, 8712, 5228844
			},
			.prefetch0 = 40313,
			.prefetch1 = 10825,
			.ram = subw_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				458065280, 435688488, 2254921238, 3887600043, 311814133, 2484889273, 373926488, 29016723, 750350813, 3043004507, 4263457210, 507857343, 4039161607, 1858780381, 1574129474, 9684482, 14653656, 8729, 5228850
			},
			.prefetch0 = 40215,
			.prefetch1 = 43001,
			.ram = subw_final_ram_8,
			.ram_len = 12,
		},
		.transactions = subw_transactions_8,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "009 SUB.w (A3), D4 9853",
		.initial = {
			.regs = {
				2550643600, 3093024074, 895824463, 1601633475, 3805180135, 4285435105, 148911659, 1649131003, 1596953156, 2918299228, 2774138526, 4037832716, 1540921085, 3051257783, 75244548, 6391382, 11227514, 532, 7195994
			},
			.prefetch0 = 38995,
			.prefetch1 = 49702,
			.ram = subw_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2550643600, 3093024074, 895824463, 1601633475, 3805154968, 4285435105, 148911659, 1649131003, 1596953156, 2918299228, 2774138526, 4037832716, 1540921085, 3051257783, 75244548, 6391382, 11227514, 512, 7195996
			},
			.prefetch0 = 49702,
			.prefetch1 = 24187,
			.ram = subw_final_ram_9,
			.ram_len = 8,
		},
		.transactions = subw_transactions_9,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "010 SUB.w #, -(A0) 0460",
		.initial = {
			.regs = {
				1635941584, 948664161, 568003031, 3532266364, 1699152484, 3349675334, 1598704743, 2131880433, 48252125, 1785034558, 3739635888, 3995865316, 4177015411, 1818028338, 2870959507, 4723326, 15313940, 9488, 4869780
			},
			.prefetch0 = 1120,
			.prefetch1 = 30618,
			.ram = subw_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1635941584, 948664161, 568003031, 3532266364, 1699152484, 3349675334, 1598704743, 2131880433, 48252123, 1785034558, 3739635888, 3995865316, 4177015411, 1818028338, 2870959507, 4723326, 15313926, 9488, 3555608406
			},
			.prefetch0 = 37812,
			.prefetch1 = 29461,
			.ram = subw_final_ram_10,
			.ram_len = 28,
		},
		.transactions = subw_transactions_10,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "011 SUB.w -(A2), D0 9062",
		.initial = {
			.regs = {
				1881793195, 1622325178, 2145366059, 3331583124, 1331454754, 1214392797, 1558074161, 1912984439, 3545615262, 406926393, 2646110839, 838662960, 4105626812, 243020636, 2972673602, 16053032, 6515832, 41220, 10854834
			},
			.prefetch0 = 36962,
			.prefetch1 = 33342,
			.ram = subw_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1881793195, 1622325178, 2145366059, 3331583124, 1331454754, 1214392797, 1558074161, 1912984439, 3545615262, 406926393, 2646110837, 838662960, 4105626812, 243020636, 2972673602, 16053032, 6515818, 8452, 1297385172
			},
			.prefetch0 = 15880,
			.prefetch1 = 9306,
			.ram = subw_final_ram_11,
			.ram_len = 26,
		},
		.transactions = subw_transactions_11,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "012 SUB.w (d16, A4), D0 906c",
		.initial = {
			.regs = {
				3049181754, 165979240, 3782413699, 2776789254, 2438828341, 1874925077, 1872397668, 743578627, 902613954, 2829058557, 2571078252, 625749041, 3708199410, 1907905825, 2558520637, 11784704, 8658624, 9222, 2656812
			},
			.prefetch0 = 36972,
			.prefetch1 = 5105,
			.ram = subw_initial_ram_12,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3049181754, 165979240, 3782413699, 2776789254, 2438828341, 1874925077, 1872397668, 743578627, 902613954, 2829058557, 2571078252, 625749041, 3708199410, 1907905825, 2558520637, 11784704, 8658610, 9222, 309744656
			},
			.prefetch0 = 19874,
			.prefetch1 = 22823,
			.ram = subw_final_ram_12,
			.ram_len = 28,
		},
		.transactions = subw_transactions_12,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "013 SUB.w (d16, A4), D6 9c6c",
		.initial = {
			.regs = {
				3836899672, 3937708268, 2710320483, 64160358, 804454616, 1500216063, 3397064328, 3849292799, 3327094043, 107898483, 3931192803, 2943007355, 1439224117, 204339420, 277674753, 13334110, 14691466, 34330, 15184650
			},
			.prefetch0 = 40044,
			.prefetch1 = 14626,
			.ram = subw_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3836899672, 3937708268, 2710320483, 64160358, 804454616, 1500216063, 3397064328, 3849292799, 3327094043, 107898483, 3931192803, 2943007355, 1439224117, 204339420, 277674753, 13334110, 14691452, 9754, 1375793190
			},
			.prefetch0 = 46148,
			.prefetch1 = 37774,
			.ram = subw_final_ram_13,
			.ram_len = 28,
		},
		.transactions = subw_transactions_13,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "014 SUB.w 3, (d8, A2, Xn) 5772",
		.initial = {
			.regs = {
				2794106992, 1492482238, 357832175, 237785802, 1104713740, 4132116898, 504573557, 223096073, 2764006535, 4212775926, 1872099469, 728328324, 3573367848, 1267505870, 3394458501, 7335278, 4047320, 42756, 9642266
			},
			.prefetch0 = 22386,
			.prefetch1 = 26342,
			.ram = subw_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2794106992, 1492482238, 357832175, 237785802, 1104713740, 4132116898, 504573557, 223096073, 2764006535, 4212775926, 1872099469, 728328324, 3573367848, 1267505870, 3394458501, 7335278, 4047320, 42752, 9642270
			},
			.prefetch0 = 30659,
			.prefetch1 = 55925,
			.ram = subw_final_ram_14,
			.ram_len = 10,
		},
		.transactions = subw_transactions_14,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "015 SUB.w (d8, A5, Xn), D1 9275",
		.initial = {
			.regs = {
				3701861282, 1811249383, 477519253, 1237218081, 2057468347, 2684521398, 979160991, 587839009, 1038284712, 4266564800, 482213930, 4031262574, 3169626009, 2650789403, 1963357975, 11764170, 6133394, 41478, 12021558
			},
			.prefetch0 = 37493,
			.prefetch1 = 57743,
			.ram = subw_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3701861282, 1811249383, 477519253, 1237218081, 2057468347, 2684521398, 979160991, 587839009, 1038284712, 4266564800, 482213930, 4031262574, 3169626009, 2650789403, 1963357975, 11764170, 6133380, 8710, 2959487712
			},
			.prefetch0 = 19245,
			.prefetch1 = 39551,
			.ram = subw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = subw_transactions_15,
		.transactions_len = 16,
		.lenght = 64,
	},
};

#endif /* RBT_SUBW_H */