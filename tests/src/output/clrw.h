#ifndef RBT_CLRW_H
#define RBT_CLRW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte clrw_initial_ram_0[] = {
		{ .addr = 0xf93196, .byte = 0x42 },
		{ .addr = 0xf93197, .byte = 0x42 },
		{ .addr = 0xf93198, .byte = 0xe7 },
		{ .addr = 0xf93199, .byte = 0x3a },
		{ .addr = 0xf9319a, .byte = 0x5b },
		{ .addr = 0xf9319b, .byte = 0x22 }
};

static const SST_RamByte clrw_final_ram_0[] = {
		{ .addr = 0xf93196, .byte = 0x42 },
		{ .addr = 0xf93197, .byte = 0x42 },
		{ .addr = 0xf93198, .byte = 0xe7 },
		{ .addr = 0xf93199, .byte = 0x3a },
		{ .addr = 0xf9319a, .byte = 0x5b },
		{ .addr = 0xf9319b, .byte = 0x22 }
};

static const SST_Transaction clrw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16331162, .data = 23330, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_1[] = {
		{ .addr = 0x00d7b6, .byte = 0x42 },
		{ .addr = 0x00d7b7, .byte = 0x71 },
		{ .addr = 0x00d7b8, .byte = 0x5c },
		{ .addr = 0x00d7b9, .byte = 0xf6 },
		{ .addr = 0x00d7ba, .byte = 0xea },
		{ .addr = 0x00d7bb, .byte = 0x86 },
		{ .addr = 0x46d3ba, .byte = 0x7c },
		{ .addr = 0x46d3bb, .byte = 0x09 },
		{ .addr = 0x00d7bc, .byte = 0x89 },
		{ .addr = 0x00d7bd, .byte = 0xe2 }
};

static const SST_RamByte clrw_final_ram_1[] = {
		{ .addr = 0x00d7b6, .byte = 0x42 },
		{ .addr = 0x00d7b7, .byte = 0x71 },
		{ .addr = 0x00d7b8, .byte = 0x5c },
		{ .addr = 0x00d7b9, .byte = 0xf6 },
		{ .addr = 0x00d7ba, .byte = 0xea },
		{ .addr = 0x00d7bb, .byte = 0x86 },
		{ .addr = 0x46d3ba, .byte = 0x00 },
		{ .addr = 0x46d3bb, .byte = 0x00 },
		{ .addr = 0x00d7bc, .byte = 0x89 },
		{ .addr = 0x00d7bd, .byte = 0xe2 }
};

static const SST_Transaction clrw_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 55226, .data = 60038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4641722, .data = 31753, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 55228, .data = 35298, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4641722, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_2[] = {
		{ .addr = 0x3cd0d8, .byte = 0x42 },
		{ .addr = 0x3cd0d9, .byte = 0x75 },
		{ .addr = 0x3cd0da, .byte = 0x62 },
		{ .addr = 0x3cd0db, .byte = 0x20 },
		{ .addr = 0x3cd0dc, .byte = 0x9d },
		{ .addr = 0x3cd0dd, .byte = 0x2e },
		{ .addr = 0x00000c, .byte = 0x15 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0xa6 },
		{ .addr = 0x6ad5a6, .byte = 0xfa },
		{ .addr = 0x6ad5a7, .byte = 0x5b },
		{ .addr = 0x6ad5a8, .byte = 0x7d },
		{ .addr = 0x6ad5a9, .byte = 0x31 }
};

static const SST_RamByte clrw_final_ram_2[] = {
		{ .addr = 0x3cd0d8, .byte = 0x42 },
		{ .addr = 0x3cd0d9, .byte = 0x75 },
		{ .addr = 0x3cd0da, .byte = 0x62 },
		{ .addr = 0x3cd0db, .byte = 0x20 },
		{ .addr = 0x3cd0dc, .byte = 0x9d },
		{ .addr = 0x3cd0dd, .byte = 0x2e },
		{ .addr = 0xe78ec4, .byte = 0xd0 },
		{ .addr = 0xe78ec5, .byte = 0xda },
		{ .addr = 0xe78ec0, .byte = 0x85 },
		{ .addr = 0xe78ec1, .byte = 0x1d },
		{ .addr = 0xe78ec2, .byte = 0x00 },
		{ .addr = 0xe78ec3, .byte = 0x3c },
		{ .addr = 0xe78ebe, .byte = 0x42 },
		{ .addr = 0xe78ebf, .byte = 0x75 },
		{ .addr = 0xe78ebc, .byte = 0x3e },
		{ .addr = 0xe78ebd, .byte = 0xe3 },
		{ .addr = 0xe78eb8, .byte = 0x42 },
		{ .addr = 0xe78eb9, .byte = 0x71 },
		{ .addr = 0xe78eba, .byte = 0xe6 },
		{ .addr = 0xe78ebb, .byte = 0xbe },
		{ .addr = 0x00000c, .byte = 0x15 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0xa6 },
		{ .addr = 0x6ad5a6, .byte = 0xfa },
		{ .addr = 0x6ad5a7, .byte = 0x5b },
		{ .addr = 0x6ad5a8, .byte = 0x7d },
		{ .addr = 0x6ad5a9, .byte = 0x31 }
};

static const SST_Transaction clrw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3985628, .data = 40238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12467938, .data = 11080, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15175364, .data = 53466, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15175360, .data = 34077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15175362, .data = 60, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15175358, .data = 17013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15175356, .data = 16099, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15175352, .data = 17009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15175354, .data = 59070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54694, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7001510, .data = 64091, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7001512, .data = 32049, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_3[] = {
		{ .addr = 0xd986b0, .byte = 0x42 },
		{ .addr = 0xd986b1, .byte = 0x75 },
		{ .addr = 0xd986b2, .byte = 0x2e },
		{ .addr = 0xd986b3, .byte = 0xc3 },
		{ .addr = 0xd986b4, .byte = 0x71 },
		{ .addr = 0xd986b5, .byte = 0x8f },
		{ .addr = 0x00000c, .byte = 0xba },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x66 },
		{ .addr = 0x00000f, .byte = 0x5e },
		{ .addr = 0x66665e, .byte = 0x6d },
		{ .addr = 0x66665f, .byte = 0x19 },
		{ .addr = 0x666660, .byte = 0x9f },
		{ .addr = 0x666661, .byte = 0xb9 }
};

static const SST_RamByte clrw_final_ram_3[] = {
		{ .addr = 0xd986b0, .byte = 0x42 },
		{ .addr = 0xd986b1, .byte = 0x75 },
		{ .addr = 0xd986b2, .byte = 0x2e },
		{ .addr = 0xd986b3, .byte = 0xc3 },
		{ .addr = 0xd986b4, .byte = 0x71 },
		{ .addr = 0xd986b5, .byte = 0x8f },
		{ .addr = 0xca6712, .byte = 0x86 },
		{ .addr = 0xca6713, .byte = 0xb2 },
		{ .addr = 0xca670e, .byte = 0xa5 },
		{ .addr = 0xca670f, .byte = 0x01 },
		{ .addr = 0xca6710, .byte = 0x00 },
		{ .addr = 0xca6711, .byte = 0xd9 },
		{ .addr = 0xca670c, .byte = 0x42 },
		{ .addr = 0xca670d, .byte = 0x75 },
		{ .addr = 0xca670a, .byte = 0xad },
		{ .addr = 0xca670b, .byte = 0x61 },
		{ .addr = 0xca6706, .byte = 0x42 },
		{ .addr = 0xca6707, .byte = 0x75 },
		{ .addr = 0xca6708, .byte = 0x6c },
		{ .addr = 0xca6709, .byte = 0x28 },
		{ .addr = 0x00000c, .byte = 0xba },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x66 },
		{ .addr = 0x00000f, .byte = 0x5e },
		{ .addr = 0x66665e, .byte = 0x6d },
		{ .addr = 0x66665f, .byte = 0x19 },
		{ .addr = 0x666660, .byte = 0x9f },
		{ .addr = 0x666661, .byte = 0xb9 }
};

static const SST_Transaction clrw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14255796, .data = 29071, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2665824, .data = 5043, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13264658, .data = 34482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13264654, .data = 42241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13264656, .data = 217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13264652, .data = 17013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13264650, .data = 44385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13264646, .data = 17013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13264648, .data = 27688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6710878, .data = 27929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6710880, .data = 40889, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_4[] = {
		{ .addr = 0xae0d84, .byte = 0x42 },
		{ .addr = 0xae0d85, .byte = 0x74 },
		{ .addr = 0xae0d86, .byte = 0x24 },
		{ .addr = 0xae0d87, .byte = 0x6a },
		{ .addr = 0xae0d88, .byte = 0x4a },
		{ .addr = 0xae0d89, .byte = 0x55 },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0x3019aa, .byte = 0x22 },
		{ .addr = 0x3019ab, .byte = 0xd9 },
		{ .addr = 0x3019ac, .byte = 0xfe },
		{ .addr = 0x3019ad, .byte = 0xf9 }
};

static const SST_RamByte clrw_final_ram_4[] = {
		{ .addr = 0xae0d84, .byte = 0x42 },
		{ .addr = 0xae0d85, .byte = 0x74 },
		{ .addr = 0xae0d86, .byte = 0x24 },
		{ .addr = 0xae0d87, .byte = 0x6a },
		{ .addr = 0xae0d88, .byte = 0x4a },
		{ .addr = 0xae0d89, .byte = 0x55 },
		{ .addr = 0x882f90, .byte = 0x0d },
		{ .addr = 0x882f91, .byte = 0x86 },
		{ .addr = 0x882f8c, .byte = 0x22 },
		{ .addr = 0x882f8d, .byte = 0x07 },
		{ .addr = 0x882f8e, .byte = 0x00 },
		{ .addr = 0x882f8f, .byte = 0xae },
		{ .addr = 0x882f8a, .byte = 0x42 },
		{ .addr = 0x882f8b, .byte = 0x74 },
		{ .addr = 0x882f88, .byte = 0x02 },
		{ .addr = 0x882f89, .byte = 0xef },
		{ .addr = 0x882f84, .byte = 0x42 },
		{ .addr = 0x882f85, .byte = 0x75 },
		{ .addr = 0x882f86, .byte = 0x1d },
		{ .addr = 0x882f87, .byte = 0x43 },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0x3019aa, .byte = 0x22 },
		{ .addr = 0x3019ab, .byte = 0xd9 },
		{ .addr = 0x3019ac, .byte = 0xfe },
		{ .addr = 0x3019ad, .byte = 0xf9 }
};

static const SST_Transaction clrw_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11406728, .data = 19029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4391662, .data = 50586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8925072, .data = 3462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8925068, .data = 8711, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8925070, .data = 174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8925066, .data = 17012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8925064, .data = 751, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8925060, .data = 17013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8925062, .data = 7491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3152298, .data = 8921, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3152300, .data = 65273, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_5[] = {
		{ .addr = 0x712dce, .byte = 0x42 },
		{ .addr = 0x712dcf, .byte = 0x65 },
		{ .addr = 0x712dd0, .byte = 0x88 },
		{ .addr = 0x712dd1, .byte = 0x6a },
		{ .addr = 0xc6e34e, .byte = 0x1d },
		{ .addr = 0xc6e34f, .byte = 0xd8 },
		{ .addr = 0x712dd2, .byte = 0xaa },
		{ .addr = 0x712dd3, .byte = 0x80 }
};

static const SST_RamByte clrw_final_ram_5[] = {
		{ .addr = 0x712dce, .byte = 0x42 },
		{ .addr = 0x712dcf, .byte = 0x65 },
		{ .addr = 0x712dd0, .byte = 0x88 },
		{ .addr = 0x712dd1, .byte = 0x6a },
		{ .addr = 0xc6e34e, .byte = 0x00 },
		{ .addr = 0xc6e34f, .byte = 0x00 },
		{ .addr = 0x712dd2, .byte = 0xaa },
		{ .addr = 0x712dd3, .byte = 0x80 }
};

static const SST_Transaction clrw_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13034318, .data = 7640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7417298, .data = 43648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13034318, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_6[] = {
		{ .addr = 0xdad1a2, .byte = 0x42 },
		{ .addr = 0xdad1a3, .byte = 0x46 },
		{ .addr = 0xdad1a4, .byte = 0xa2 },
		{ .addr = 0xdad1a5, .byte = 0xd8 },
		{ .addr = 0xdad1a6, .byte = 0xa0 },
		{ .addr = 0xdad1a7, .byte = 0x47 }
};

static const SST_RamByte clrw_final_ram_6[] = {
		{ .addr = 0xdad1a2, .byte = 0x42 },
		{ .addr = 0xdad1a3, .byte = 0x46 },
		{ .addr = 0xdad1a4, .byte = 0xa2 },
		{ .addr = 0xdad1a5, .byte = 0xd8 },
		{ .addr = 0xdad1a6, .byte = 0xa0 },
		{ .addr = 0xdad1a7, .byte = 0x47 }
};

static const SST_Transaction clrw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14340518, .data = 41031, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_7[] = {
		{ .addr = 0xad53fa, .byte = 0x42 },
		{ .addr = 0xad53fb, .byte = 0x64 },
		{ .addr = 0xad53fc, .byte = 0xae },
		{ .addr = 0xad53fd, .byte = 0x78 },
		{ .addr = 0xe4f2da, .byte = 0x1a },
		{ .addr = 0xe4f2db, .byte = 0x3b },
		{ .addr = 0xad53fe, .byte = 0x4b },
		{ .addr = 0xad53ff, .byte = 0xe8 }
};

static const SST_RamByte clrw_final_ram_7[] = {
		{ .addr = 0xad53fa, .byte = 0x42 },
		{ .addr = 0xad53fb, .byte = 0x64 },
		{ .addr = 0xad53fc, .byte = 0xae },
		{ .addr = 0xad53fd, .byte = 0x78 },
		{ .addr = 0xe4f2da, .byte = 0x00 },
		{ .addr = 0xe4f2db, .byte = 0x00 },
		{ .addr = 0xad53fe, .byte = 0x4b },
		{ .addr = 0xad53ff, .byte = 0xe8 }
};

static const SST_Transaction clrw_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15004378, .data = 6715, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11359230, .data = 19432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15004378, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_8[] = {
		{ .addr = 0xe3daa8, .byte = 0x42 },
		{ .addr = 0xe3daa9, .byte = 0x76 },
		{ .addr = 0xe3daaa, .byte = 0x8a },
		{ .addr = 0xe3daab, .byte = 0x62 },
		{ .addr = 0xe3daac, .byte = 0xff },
		{ .addr = 0xe3daad, .byte = 0x1a },
		{ .addr = 0xeb7636, .byte = 0x76 },
		{ .addr = 0xeb7637, .byte = 0xbb },
		{ .addr = 0xe3daae, .byte = 0x7b },
		{ .addr = 0xe3daaf, .byte = 0x8a }
};

static const SST_RamByte clrw_final_ram_8[] = {
		{ .addr = 0xe3daa8, .byte = 0x42 },
		{ .addr = 0xe3daa9, .byte = 0x76 },
		{ .addr = 0xe3daaa, .byte = 0x8a },
		{ .addr = 0xe3daab, .byte = 0x62 },
		{ .addr = 0xe3daac, .byte = 0xff },
		{ .addr = 0xe3daad, .byte = 0x1a },
		{ .addr = 0xeb7636, .byte = 0x00 },
		{ .addr = 0xeb7637, .byte = 0x00 },
		{ .addr = 0xe3daae, .byte = 0x7b },
		{ .addr = 0xe3daaf, .byte = 0x8a }
};

static const SST_Transaction clrw_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14932652, .data = 65306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15431222, .data = 30395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14932654, .data = 31626, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15431222, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_9[] = {
		{ .addr = 0x35906a, .byte = 0x42 },
		{ .addr = 0x35906b, .byte = 0x65 },
		{ .addr = 0x35906c, .byte = 0xb2 },
		{ .addr = 0x35906d, .byte = 0x46 },
		{ .addr = 0x6c0446, .byte = 0x87 },
		{ .addr = 0x6c0447, .byte = 0x9e },
		{ .addr = 0x35906e, .byte = 0x74 },
		{ .addr = 0x35906f, .byte = 0xbc }
};

static const SST_RamByte clrw_final_ram_9[] = {
		{ .addr = 0x35906a, .byte = 0x42 },
		{ .addr = 0x35906b, .byte = 0x65 },
		{ .addr = 0x35906c, .byte = 0xb2 },
		{ .addr = 0x35906d, .byte = 0x46 },
		{ .addr = 0x6c0446, .byte = 0x00 },
		{ .addr = 0x6c0447, .byte = 0x00 },
		{ .addr = 0x35906e, .byte = 0x74 },
		{ .addr = 0x35906f, .byte = 0xbc }
};

static const SST_Transaction clrw_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7078982, .data = 34718, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3510382, .data = 29884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7078982, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_10[] = {
		{ .addr = 0x96dcf2, .byte = 0x42 },
		{ .addr = 0x96dcf3, .byte = 0x5b },
		{ .addr = 0x96dcf4, .byte = 0xc2 },
		{ .addr = 0x96dcf5, .byte = 0x27 },
		{ .addr = 0x00000c, .byte = 0x01 },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0xf6 },
		{ .addr = 0x00000f, .byte = 0x9a },
		{ .addr = 0x34f69a, .byte = 0xad },
		{ .addr = 0x34f69b, .byte = 0x20 },
		{ .addr = 0x34f69c, .byte = 0xa6 },
		{ .addr = 0x34f69d, .byte = 0x33 }
};

static const SST_RamByte clrw_final_ram_10[] = {
		{ .addr = 0x96dcf2, .byte = 0x42 },
		{ .addr = 0x96dcf3, .byte = 0x5b },
		{ .addr = 0x96dcf4, .byte = 0xc2 },
		{ .addr = 0x96dcf5, .byte = 0x27 },
		{ .addr = 0xe5446c, .byte = 0xdc },
		{ .addr = 0xe5446d, .byte = 0xf4 },
		{ .addr = 0xe54468, .byte = 0x86 },
		{ .addr = 0xe54469, .byte = 0x13 },
		{ .addr = 0xe5446a, .byte = 0x00 },
		{ .addr = 0xe5446b, .byte = 0x96 },
		{ .addr = 0xe54466, .byte = 0x42 },
		{ .addr = 0xe54467, .byte = 0x5b },
		{ .addr = 0xe54464, .byte = 0xd7 },
		{ .addr = 0xe54465, .byte = 0x09 },
		{ .addr = 0xe54460, .byte = 0x42 },
		{ .addr = 0xe54461, .byte = 0x51 },
		{ .addr = 0xe54462, .byte = 0xb9 },
		{ .addr = 0xe54463, .byte = 0xe0 },
		{ .addr = 0x00000c, .byte = 0x01 },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0xf6 },
		{ .addr = 0x00000f, .byte = 0x9a },
		{ .addr = 0x34f69a, .byte = 0xad },
		{ .addr = 0x34f69b, .byte = 0x20 },
		{ .addr = 0x34f69c, .byte = 0xa6 },
		{ .addr = 0x34f69d, .byte = 0x33 }
};

static const SST_Transaction clrw_transactions_10[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14735112, .data = 36739, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15025260, .data = 56564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15025256, .data = 34323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15025258, .data = 150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15025254, .data = 16987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15025252, .data = 55049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15025248, .data = 16977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15025250, .data = 47584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3471002, .data = 44320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3471004, .data = 42547, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_11[] = {
		{ .addr = 0xf7b9fa, .byte = 0x42 },
		{ .addr = 0xf7b9fb, .byte = 0x54 },
		{ .addr = 0xf7b9fc, .byte = 0x40 },
		{ .addr = 0xf7b9fd, .byte = 0x9e },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0x02 },
		{ .addr = 0xea3502, .byte = 0x1e },
		{ .addr = 0xea3503, .byte = 0xc6 },
		{ .addr = 0xea3504, .byte = 0x7e },
		{ .addr = 0xea3505, .byte = 0x2d }
};

static const SST_RamByte clrw_final_ram_11[] = {
		{ .addr = 0xf7b9fa, .byte = 0x42 },
		{ .addr = 0xf7b9fb, .byte = 0x54 },
		{ .addr = 0xf7b9fc, .byte = 0x40 },
		{ .addr = 0xf7b9fd, .byte = 0x9e },
		{ .addr = 0xefb1d8, .byte = 0xb9 },
		{ .addr = 0xefb1d9, .byte = 0xfc },
		{ .addr = 0xefb1d4, .byte = 0xa3 },
		{ .addr = 0xefb1d5, .byte = 0x11 },
		{ .addr = 0xefb1d6, .byte = 0x00 },
		{ .addr = 0xefb1d7, .byte = 0xf7 },
		{ .addr = 0xefb1d2, .byte = 0x42 },
		{ .addr = 0xefb1d3, .byte = 0x54 },
		{ .addr = 0xefb1d0, .byte = 0xc7 },
		{ .addr = 0xefb1d1, .byte = 0xc3 },
		{ .addr = 0xefb1cc, .byte = 0x42 },
		{ .addr = 0xefb1cd, .byte = 0x55 },
		{ .addr = 0xefb1ce, .byte = 0x62 },
		{ .addr = 0xefb1cf, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0x02 },
		{ .addr = 0xea3502, .byte = 0x1e },
		{ .addr = 0xea3503, .byte = 0xc6 },
		{ .addr = 0xea3504, .byte = 0x7e },
		{ .addr = 0xea3505, .byte = 0x2d }
};

static const SST_Transaction clrw_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14469058, .data = 16666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15708632, .data = 47612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15708628, .data = 41745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15708630, .data = 247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15708626, .data = 16980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15708624, .data = 51139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15708620, .data = 16981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15708622, .data = 25308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15850, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15348994, .data = 7878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15348996, .data = 32301, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_12[] = {
		{ .addr = 0x591d44, .byte = 0x42 },
		{ .addr = 0x591d45, .byte = 0x58 },
		{ .addr = 0x591d46, .byte = 0xb0 },
		{ .addr = 0x591d47, .byte = 0x8a },
		{ .addr = 0x00000c, .byte = 0x72 },
		{ .addr = 0x00000d, .byte = 0x80 },
		{ .addr = 0x00000e, .byte = 0x1f },
		{ .addr = 0x00000f, .byte = 0x74 },
		{ .addr = 0x801f74, .byte = 0x63 },
		{ .addr = 0x801f75, .byte = 0x6f },
		{ .addr = 0x801f76, .byte = 0x75 },
		{ .addr = 0x801f77, .byte = 0x79 }
};

static const SST_RamByte clrw_final_ram_12[] = {
		{ .addr = 0x591d44, .byte = 0x42 },
		{ .addr = 0x591d45, .byte = 0x58 },
		{ .addr = 0x591d46, .byte = 0xb0 },
		{ .addr = 0x591d47, .byte = 0x8a },
		{ .addr = 0x7e183a, .byte = 0x1d },
		{ .addr = 0x7e183b, .byte = 0x46 },
		{ .addr = 0x7e1836, .byte = 0x22 },
		{ .addr = 0x7e1837, .byte = 0x14 },
		{ .addr = 0x7e1838, .byte = 0x00 },
		{ .addr = 0x7e1839, .byte = 0x59 },
		{ .addr = 0x7e1834, .byte = 0x42 },
		{ .addr = 0x7e1835, .byte = 0x58 },
		{ .addr = 0x7e1832, .byte = 0x7b },
		{ .addr = 0x7e1833, .byte = 0x9f },
		{ .addr = 0x7e182e, .byte = 0x42 },
		{ .addr = 0x7e182f, .byte = 0x55 },
		{ .addr = 0x7e1830, .byte = 0x70 },
		{ .addr = 0x7e1831, .byte = 0x24 },
		{ .addr = 0x00000c, .byte = 0x72 },
		{ .addr = 0x00000d, .byte = 0x80 },
		{ .addr = 0x00000e, .byte = 0x1f },
		{ .addr = 0x00000f, .byte = 0x74 },
		{ .addr = 0x801f74, .byte = 0x63 },
		{ .addr = 0x801f75, .byte = 0x6f },
		{ .addr = 0x801f76, .byte = 0x75 },
		{ .addr = 0x801f77, .byte = 0x79 }
};

static const SST_Transaction clrw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2390942, .data = 12794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8263738, .data = 7494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8263734, .data = 8724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8263736, .data = 89, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8263732, .data = 16984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8263730, .data = 31647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8263726, .data = 16981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8263728, .data = 28708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8396660, .data = 25455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8396662, .data = 30073, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_13[] = {
		{ .addr = 0x495dd0, .byte = 0x42 },
		{ .addr = 0x495dd1, .byte = 0x5f },
		{ .addr = 0x495dd2, .byte = 0xe6 },
		{ .addr = 0x495dd3, .byte = 0xab },
		{ .addr = 0x924548, .byte = 0x46 },
		{ .addr = 0x924549, .byte = 0x2d },
		{ .addr = 0x495dd4, .byte = 0xdf },
		{ .addr = 0x495dd5, .byte = 0xd1 }
};

static const SST_RamByte clrw_final_ram_13[] = {
		{ .addr = 0x495dd0, .byte = 0x42 },
		{ .addr = 0x495dd1, .byte = 0x5f },
		{ .addr = 0x495dd2, .byte = 0xe6 },
		{ .addr = 0x495dd3, .byte = 0xab },
		{ .addr = 0x924548, .byte = 0x00 },
		{ .addr = 0x924549, .byte = 0x00 },
		{ .addr = 0x495dd4, .byte = 0xdf },
		{ .addr = 0x495dd5, .byte = 0xd1 }
};

static const SST_Transaction clrw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9585992, .data = 17965, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4808148, .data = 57297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9585992, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_14[] = {
		{ .addr = 0xc96352, .byte = 0x42 },
		{ .addr = 0xc96353, .byte = 0x61 },
		{ .addr = 0xc96354, .byte = 0xf1 },
		{ .addr = 0xc96355, .byte = 0x55 },
		{ .addr = 0x00000c, .byte = 0x25 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0x86 },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0xd4867a, .byte = 0x0b },
		{ .addr = 0xd4867b, .byte = 0xa9 },
		{ .addr = 0xd4867c, .byte = 0x40 },
		{ .addr = 0xd4867d, .byte = 0xb6 }
};

static const SST_RamByte clrw_final_ram_14[] = {
		{ .addr = 0xc96352, .byte = 0x42 },
		{ .addr = 0xc96353, .byte = 0x61 },
		{ .addr = 0xc96354, .byte = 0xf1 },
		{ .addr = 0xc96355, .byte = 0x55 },
		{ .addr = 0x079f60, .byte = 0x63 },
		{ .addr = 0x079f61, .byte = 0x56 },
		{ .addr = 0x079f5c, .byte = 0x83 },
		{ .addr = 0x079f5d, .byte = 0x1c },
		{ .addr = 0x079f5e, .byte = 0x00 },
		{ .addr = 0x079f5f, .byte = 0xc9 },
		{ .addr = 0x079f5a, .byte = 0x42 },
		{ .addr = 0x079f5b, .byte = 0x61 },
		{ .addr = 0x079f58, .byte = 0x81 },
		{ .addr = 0x079f59, .byte = 0x79 },
		{ .addr = 0x079f54, .byte = 0x42 },
		{ .addr = 0x079f55, .byte = 0x71 },
		{ .addr = 0x079f56, .byte = 0xec },
		{ .addr = 0x079f57, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0x25 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0x86 },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0xd4867a, .byte = 0x0b },
		{ .addr = 0xd4867b, .byte = 0xa9 },
		{ .addr = 0xd4867c, .byte = 0x40 },
		{ .addr = 0xd4867d, .byte = 0xb6 }
};

static const SST_Transaction clrw_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10322296, .data = 2986, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 499552, .data = 25430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 499548, .data = 33564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 499550, .data = 201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 499546, .data = 16993, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 499544, .data = 33145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 499540, .data = 17009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 499542, .data = 60573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9684, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 34426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13928058, .data = 2985, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13928060, .data = 16566, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_15[] = {
		{ .addr = 0x242912, .byte = 0x42 },
		{ .addr = 0x242913, .byte = 0x62 },
		{ .addr = 0x242914, .byte = 0x86 },
		{ .addr = 0x242915, .byte = 0x9f },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x70957a, .byte = 0x5c },
		{ .addr = 0x70957b, .byte = 0x2a },
		{ .addr = 0x70957c, .byte = 0xc0 },
		{ .addr = 0x70957d, .byte = 0x81 }
};

static const SST_RamByte clrw_final_ram_15[] = {
		{ .addr = 0x242912, .byte = 0x42 },
		{ .addr = 0x242913, .byte = 0x62 },
		{ .addr = 0x242914, .byte = 0x86 },
		{ .addr = 0x242915, .byte = 0x9f },
		{ .addr = 0x43a7a4, .byte = 0x29 },
		{ .addr = 0x43a7a5, .byte = 0x16 },
		{ .addr = 0x43a7a0, .byte = 0x07 },
		{ .addr = 0x43a7a1, .byte = 0x01 },
		{ .addr = 0x43a7a2, .byte = 0x00 },
		{ .addr = 0x43a7a3, .byte = 0x24 },
		{ .addr = 0x43a79e, .byte = 0x42 },
		{ .addr = 0x43a79f, .byte = 0x62 },
		{ .addr = 0x43a79c, .byte = 0xac },
		{ .addr = 0x43a79d, .byte = 0x5f },
		{ .addr = 0x43a798, .byte = 0x42 },
		{ .addr = 0x43a799, .byte = 0x71 },
		{ .addr = 0x43a79a, .byte = 0xef },
		{ .addr = 0x43a79b, .byte = 0xf6 },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x70957a, .byte = 0x5c },
		{ .addr = 0x70957b, .byte = 0x2a },
		{ .addr = 0x70957c, .byte = 0xc0 },
		{ .addr = 0x70957d, .byte = 0x81 }
};

static const SST_Transaction clrw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16165982, .data = 18770, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4433828, .data = 10518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4433824, .data = 1793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4433826, .data = 36, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4433822, .data = 16994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4433820, .data = 44127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4433816, .data = 17009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4433818, .data = 61430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7378298, .data = 23594, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7378300, .data = 49281, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t CLRW_TEST_COUNT = 16;
static const SST_TestCase clrw[] = {
	{
		.name = "000 CLR.w D2 4242",
		.initial = {
			.regs = {
				247709150, 2989687714, 1271176990, 3510861373, 1462957905, 1214298931, 898893479, 3629596489, 986890596, 546202386, 1239535990, 3840628796, 322801797, 3892186327, 2538260593, 5263440, 1684324, 33286, 16331162
			},
			.prefetch0 = 16962,
			.prefetch1 = 59194,
			.ram = clrw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				247709150, 2989687714, 1271136256, 3510861373, 1462957905, 1214298931, 898893479, 3629596489, 986890596, 546202386, 1239535990, 3840628796, 322801797, 3892186327, 2538260593, 5263440, 1684324, 33284, 16331164
			},
			.prefetch0 = 59194,
			.prefetch1 = 23330,
			.ram = clrw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = clrw_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 CLR.w (d8, A1, Xn) 4271",
		.initial = {
			.regs = {
				2319125736, 4015215561, 589302654, 1360133550, 118924707, 1336065283, 2855053443, 2462409306, 856771365, 1856247489, 1315224120, 602293427, 3091350685, 2906768284, 1883799766, 12205786, 2412636, 34069, 55226
			},
			.prefetch0 = 17009,
			.prefetch1 = 23798,
			.ram = clrw_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2319125736, 4015215561, 589302654, 1360133550, 118924707, 1336065283, 2855053443, 2462409306, 856771365, 1856247489, 1315224120, 602293427, 3091350685, 2906768284, 1883799766, 12205786, 2412636, 34068, 55230
			},
			.prefetch0 = 60038,
			.prefetch1 = 35298,
			.ram = clrw_final_ram_1,
			.ram_len = 10,
		},
		.transactions = clrw_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 CLR.w (d8, A5, Xn) 4275",
		.initial = {
			.regs = {
				72502183, 3824670164, 1224016230, 3615297687, 4047040831, 2709632904, 51946486, 1603886174, 2871565602, 3824646709, 3987801893, 2398286479, 3056865650, 3871251149, 2164701249, 12774420, 15175366, 34077, 3985628
			},
			.prefetch0 = 17013,
			.prefetch1 = 25120,
			.ram = clrw_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				72502183, 3824670164, 1224016230, 3615297687, 4047040831, 2709632904, 51946486, 1603886174, 2871565602, 3824646709, 3987801893, 2398286479, 3056865650, 3871251149, 2164701249, 12774420, 15175352, 9501, 359323050
			},
			.prefetch0 = 64091,
			.prefetch1 = 32049,
			.ram = clrw_final_ram_2,
			.ram_len = 28,
		},
		.transactions = clrw_transactions_2,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "003 CLR.w (d8, A5, Xn) 4275",
		.initial = {
			.regs = {
				3123515219, 804243105, 2600236781, 737439915, 3913956972, 1650325312, 1801697270, 2790588919, 3523574455, 3993591255, 2858364669, 75601355, 3013649002, 3509335729, 2554253097, 956548, 13264660, 42241, 14255796
			},
			.prefetch0 = 17013,
			.prefetch1 = 11971,
			.ram = clrw_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3123515219, 804243105, 2600236781, 737439915, 3913956972, 1650325312, 1801697270, 2790588919, 3523574455, 3993591255, 2858364669, 75601355, 3013649002, 3509335729, 2554253097, 956548, 13264646, 9473, 3127273058
			},
			.prefetch0 = 27929,
			.prefetch1 = 40889,
			.ram = clrw_final_ram_3,
			.ram_len = 28,
		},
		.transactions = clrw_transactions_3,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "004 CLR.w (d8, A4, Xn) 4274",
		.initial = {
			.regs = {
				368638884, 1604784732, 304183323, 1154094957, 216931265, 3892511947, 2025959117, 317003213, 499720277, 3375140894, 3835398387, 3425208766, 490900074, 3219683185, 965968661, 7906338, 8925074, 8711, 11406728
			},
			.prefetch0 = 17012,
			.prefetch1 = 9322,
			.ram = clrw_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				368638884, 1604784732, 304183323, 1154094957, 216931265, 3892511947, 2025959117, 317003213, 499720277, 3375140894, 3835398387, 3425208766, 490900074, 3219683185, 965968661, 7906338, 8925060, 8711, 2687506862
			},
			.prefetch0 = 8921,
			.prefetch1 = 65273,
			.ram = clrw_final_ram_4,
			.ram_len = 28,
		},
		.transactions = clrw_transactions_4,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "005 CLR.w -(A5) 4265",
		.initial = {
			.regs = {
				2657837817, 1524061826, 3529932998, 2430036143, 3899588257, 1397013153, 3078489559, 138711491, 49695959, 534191680, 2043677950, 1230999935, 3816917963, 315024208, 1209571354, 13882372, 10485198, 10012, 7417298
			},
			.prefetch0 = 16997,
			.prefetch1 = 34922,
			.ram = clrw_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2657837817, 1524061826, 3529932998, 2430036143, 3899588257, 1397013153, 3078489559, 138711491, 49695959, 534191680, 2043677950, 1230999935, 3816917963, 315024206, 1209571354, 13882372, 10485198, 10004, 7417300
			},
			.prefetch0 = 34922,
			.prefetch1 = 43648,
			.ram = clrw_final_ram_5,
			.ram_len = 8,
		},
		.transactions = clrw_transactions_5,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "006 CLR.w D6 4246",
		.initial = {
			.regs = {
				3967272214, 504175115, 330374006, 3923410217, 3281425157, 3770974293, 4055656421, 2970699991, 3814120658, 1255610688, 833967756, 2155300372, 512152171, 181035501, 4185033915, 16424614, 4002450, 1564, 14340518
			},
			.prefetch0 = 16966,
			.prefetch1 = 41688,
			.ram = clrw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3967272214, 504175115, 330374006, 3923410217, 3281425157, 3770974293, 4055629824, 2970699991, 3814120658, 1255610688, 833967756, 2155300372, 512152171, 181035501, 4185033915, 16424614, 4002450, 1556, 14340520
			},
			.prefetch0 = 41688,
			.prefetch1 = 41031,
			.ram = clrw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = clrw_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 CLR.w -(A4) 4264",
		.initial = {
			.regs = {
				4138625552, 2218734258, 293259703, 2697017015, 2458057315, 1833146735, 1351823084, 2806465736, 1751688764, 565924410, 679150609, 1940371197, 1826943708, 723076615, 2507583527, 9407016, 8343960, 33544, 11359230
			},
			.prefetch0 = 16996,
			.prefetch1 = 44664,
			.ram = clrw_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4138625552, 2218734258, 293259703, 2697017015, 2458057315, 1833146735, 1351823084, 2806465736, 1751688764, 565924410, 679150609, 1940371197, 1826943706, 723076615, 2507583527, 9407016, 8343960, 33540, 11359232
			},
			.prefetch0 = 44664,
			.prefetch1 = 19432,
			.ram = clrw_final_ram_7,
			.ram_len = 8,
		},
		.transactions = clrw_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 CLR.w (d8, A6, Xn) 4276",
		.initial = {
			.regs = {
				3836869492, 3250309154, 1820424818, 3121927546, 3036371646, 3567235172, 1802933330, 1219677332, 3272133386, 3516259771, 747344884, 2733117813, 2322131835, 1183359916, 2632100554, 289004, 13460420, 40980, 14932652
			},
			.prefetch0 = 17014,
			.prefetch1 = 35426,
			.ram = clrw_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3836869492, 3250309154, 1820424818, 3121927546, 3036371646, 3567235172, 1802933330, 1219677332, 3272133386, 3516259771, 747344884, 2733117813, 2322131835, 1183359916, 2632100554, 289004, 13460420, 40980, 14932656
			},
			.prefetch0 = 65306,
			.prefetch1 = 31626,
			.ram = clrw_final_ram_8,
			.ram_len = 10,
		},
		.transactions = clrw_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 CLR.w -(A5) 4265",
		.initial = {
			.regs = {
				3512183890, 1043147831, 811335930, 3342326167, 2527730417, 519092691, 947524732, 195952565, 761662999, 1955356618, 3041087635, 4068373269, 792268788, 1164706888, 3066587179, 8271148, 1519158, 34318, 3510382
			},
			.prefetch0 = 16997,
			.prefetch1 = 45638,
			.ram = clrw_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3512183890, 1043147831, 811335930, 3342326167, 2527730417, 519092691, 947524732, 195952565, 761662999, 1955356618, 3041087635, 4068373269, 792268788, 1164706886, 3066587179, 8271148, 1519158, 34308, 3510384
			},
			.prefetch0 = 45638,
			.prefetch1 = 29884,
			.ram = clrw_final_ram_9,
			.ram_len = 8,
		},
		.transactions = clrw_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 CLR.w (A3)+ 425b",
		.initial = {
			.regs = {
				407370225, 832308676, 2993087029, 1045506623, 2877726587, 3662013148, 3219243905, 1140797564, 2706777625, 2065850868, 3789349354, 3118520073, 2672348999, 3783759333, 1935668605, 13832186, 15025262, 34323, 9886966
			},
			.prefetch0 = 16987,
			.prefetch1 = 49703,
			.ram = clrw_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				407370225, 832308676, 2993087029, 1045506623, 2877726587, 3662013148, 3219243905, 1140797564, 2706777625, 2065850868, 3789349354, 3118520075, 2672348999, 3783759333, 1935668605, 13832186, 15025248, 9747, 20248222
			},
			.prefetch0 = 44320,
			.prefetch1 = 42547,
			.ram = clrw_final_ram_10,
			.ram_len = 26,
		},
		.transactions = clrw_transactions_10,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "011 CLR.w (A4) 4254",
		.initial = {
			.regs = {
				461206468, 3425117734, 974206191, 3382857781, 4221452719, 1054849192, 3904613469, 2248924031, 1994099414, 93076683, 895240572, 3902406149, 1658636227, 1846155368, 2338504197, 90964, 15708634, 41745, 16235006
			},
			.prefetch0 = 16980,
			.prefetch1 = 16542,
			.ram = clrw_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				461206468, 3425117734, 974206191, 3382857781, 4221452719, 1054849192, 3904613469, 2248924031, 1994099414, 93076683, 895240572, 3902406149, 1658636227, 1846155368, 2338504197, 90964, 15708620, 8977, 1038759174
			},
			.prefetch0 = 7878,
			.prefetch1 = 32301,
			.ram = clrw_final_ram_11,
			.ram_len = 26,
		},
		.transactions = clrw_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 CLR.w (A0)+ 4258",
		.initial = {
			.regs = {
				3660014303, 564247979, 1935117699, 988286947, 2958235631, 2683509377, 4039606944, 1964209509, 1881439135, 2683959917, 2692039473, 2185651416, 4057265283, 2123989412, 435125146, 10193160, 8263740, 8724, 5840200
			},
			.prefetch0 = 16984,
			.prefetch1 = 45194,
			.ram = clrw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3660014303, 564247979, 1935117699, 988286947, 2958235631, 2683509377, 4039606944, 1964209509, 1881439137, 2683959917, 2692039473, 2185651416, 4057265283, 2123989412, 435125146, 10193160, 8263726, 8724, 1920999288
			},
			.prefetch0 = 25455,
			.prefetch1 = 30073,
			.ram = clrw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = clrw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 CLR.w (A7)+ 425f",
		.initial = {
			.regs = {
				232562194, 1396985099, 301037103, 1659904357, 3359372437, 4214971592, 3548997341, 2274301457, 1824660253, 2250465384, 4121781918, 3341054764, 1465077738, 3057701619, 1889201605, 14217288, 9585992, 9227, 4808148
			},
			.prefetch0 = 16991,
			.prefetch1 = 59051,
			.ram = clrw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				232562194, 1396985099, 301037103, 1659904357, 3359372437, 4214971592, 3548997341, 2274301457, 1824660253, 2250465384, 4121781918, 3341054764, 1465077738, 3057701619, 1889201605, 14217288, 9585994, 9220, 4808150
			},
			.prefetch0 = 59051,
			.prefetch1 = 57297,
			.ram = clrw_final_ram_13,
			.ram_len = 8,
		},
		.transactions = clrw_transactions_13,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "014 CLR.w -(A1) 4261",
		.initial = {
			.regs = {
				2531427720, 2080480253, 51156064, 3883263993, 4117317356, 2794998000, 389099796, 387219458, 1219660075, 3969745275, 1220001776, 1966784312, 1246139544, 1426890938, 932507230, 9457366, 499554, 33564, 13198166
			},
			.prefetch0 = 16993,
			.prefetch1 = 61781,
			.ram = clrw_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2531427720, 2080480253, 51156064, 3883263993, 4117317356, 2794998000, 389099796, 387219458, 1219660075, 3969745273, 1220001776, 1966784312, 1246139544, 1426890938, 932507230, 9457366, 499540, 8988, 634685054
			},
			.prefetch0 = 2985,
			.prefetch1 = 16566,
			.ram = clrw_final_ram_14,
			.ram_len = 26,
		},
		.transactions = clrw_transactions_14,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "015 CLR.w -(A2) 4262",
		.initial = {
			.regs = {
				3773204695, 4033344143, 2546114021, 3288473294, 2231460312, 617122820, 1868870724, 2828013927, 2614193078, 636903843, 4025920609, 2791435075, 3838914304, 1266858330, 3101427802, 6494278, 4433830, 1793, 2369814
			},
			.prefetch0 = 16994,
			.prefetch1 = 34463,
			.ram = clrw_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3773204695, 4033344143, 2546114021, 3288473294, 2231460312, 617122820, 1868870724, 2828013927, 2614193078, 636903843, 4025920607, 2791435075, 3838914304, 1266858330, 3101427802, 6494278, 4433816, 9985, 208704894
			},
			.prefetch0 = 23594,
			.prefetch1 = 49281,
			.ram = clrw_final_ram_15,
			.ram_len = 26,
		},
		.transactions = clrw_transactions_15,
		.transactions_len = 15,
		.lenght = 60,
	},
};

#endif /* RBT_CLRW_H */