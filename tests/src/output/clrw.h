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

static const SST_RamByte clrw_initial_ram_16[] = {
		{ .addr = 0xf11a48, .byte = 0x42 },
		{ .addr = 0xf11a49, .byte = 0x47 },
		{ .addr = 0xf11a4a, .byte = 0x1f },
		{ .addr = 0xf11a4b, .byte = 0xdd },
		{ .addr = 0xf11a4c, .byte = 0xd6 },
		{ .addr = 0xf11a4d, .byte = 0xb3 }
};

static const SST_RamByte clrw_final_ram_16[] = {
		{ .addr = 0xf11a48, .byte = 0x42 },
		{ .addr = 0xf11a49, .byte = 0x47 },
		{ .addr = 0xf11a4a, .byte = 0x1f },
		{ .addr = 0xf11a4b, .byte = 0xdd },
		{ .addr = 0xf11a4c, .byte = 0xd6 },
		{ .addr = 0xf11a4d, .byte = 0xb3 }
};

static const SST_Transaction clrw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15800908, .data = 54963, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_17[] = {
		{ .addr = 0xf9cede, .byte = 0x42 },
		{ .addr = 0xf9cedf, .byte = 0x40 },
		{ .addr = 0xf9cee0, .byte = 0x72 },
		{ .addr = 0xf9cee1, .byte = 0x8b },
		{ .addr = 0xf9cee2, .byte = 0xbd },
		{ .addr = 0xf9cee3, .byte = 0x43 }
};

static const SST_RamByte clrw_final_ram_17[] = {
		{ .addr = 0xf9cede, .byte = 0x42 },
		{ .addr = 0xf9cedf, .byte = 0x40 },
		{ .addr = 0xf9cee0, .byte = 0x72 },
		{ .addr = 0xf9cee1, .byte = 0x8b },
		{ .addr = 0xf9cee2, .byte = 0xbd },
		{ .addr = 0xf9cee3, .byte = 0x43 }
};

static const SST_Transaction clrw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16371426, .data = 48451, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_18[] = {
		{ .addr = 0xa0cbc2, .byte = 0x42 },
		{ .addr = 0xa0cbc3, .byte = 0x6b },
		{ .addr = 0xa0cbc4, .byte = 0x6b },
		{ .addr = 0xa0cbc5, .byte = 0x41 },
		{ .addr = 0xa0cbc6, .byte = 0x64 },
		{ .addr = 0xa0cbc7, .byte = 0x3a },
		{ .addr = 0x00000c, .byte = 0x07 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x57 },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0x7e5756, .byte = 0x0e },
		{ .addr = 0x7e5757, .byte = 0x55 },
		{ .addr = 0x7e5758, .byte = 0xbe },
		{ .addr = 0x7e5759, .byte = 0x9e }
};

static const SST_RamByte clrw_final_ram_18[] = {
		{ .addr = 0xa0cbc2, .byte = 0x42 },
		{ .addr = 0xa0cbc3, .byte = 0x6b },
		{ .addr = 0xa0cbc4, .byte = 0x6b },
		{ .addr = 0xa0cbc5, .byte = 0x41 },
		{ .addr = 0xa0cbc6, .byte = 0x64 },
		{ .addr = 0xa0cbc7, .byte = 0x3a },
		{ .addr = 0xa39ce2, .byte = 0xcb },
		{ .addr = 0xa39ce3, .byte = 0xc4 },
		{ .addr = 0xa39cde, .byte = 0x06 },
		{ .addr = 0xa39cdf, .byte = 0x0c },
		{ .addr = 0xa39ce0, .byte = 0x00 },
		{ .addr = 0xa39ce1, .byte = 0xa0 },
		{ .addr = 0xa39cdc, .byte = 0x42 },
		{ .addr = 0xa39cdd, .byte = 0x6b },
		{ .addr = 0xa39cda, .byte = 0x82 },
		{ .addr = 0xa39cdb, .byte = 0xe1 },
		{ .addr = 0xa39cd6, .byte = 0x42 },
		{ .addr = 0xa39cd7, .byte = 0x71 },
		{ .addr = 0xa39cd8, .byte = 0xaa },
		{ .addr = 0xa39cd9, .byte = 0x06 },
		{ .addr = 0x00000c, .byte = 0x07 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x57 },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0x7e5756, .byte = 0x0e },
		{ .addr = 0x7e5757, .byte = 0x55 },
		{ .addr = 0x7e5758, .byte = 0xbe },
		{ .addr = 0x7e5759, .byte = 0x9e }
};

static const SST_Transaction clrw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10537926, .data = 25658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 426720, .data = 12016, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10722530, .data = 52164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10722526, .data = 1548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10722528, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10722524, .data = 17003, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10722522, .data = 33505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10722518, .data = 17009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10722520, .data = 43526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 1918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8279894, .data = 3669, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8279896, .data = 48798, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_19[] = {
		{ .addr = 0xe202aa, .byte = 0x42 },
		{ .addr = 0xe202ab, .byte = 0x56 },
		{ .addr = 0xe202ac, .byte = 0xe7 },
		{ .addr = 0xe202ad, .byte = 0xf8 },
		{ .addr = 0xcabe24, .byte = 0x52 },
		{ .addr = 0xcabe25, .byte = 0xe1 },
		{ .addr = 0xe202ae, .byte = 0xe2 },
		{ .addr = 0xe202af, .byte = 0x5c }
};

static const SST_RamByte clrw_final_ram_19[] = {
		{ .addr = 0xe202aa, .byte = 0x42 },
		{ .addr = 0xe202ab, .byte = 0x56 },
		{ .addr = 0xe202ac, .byte = 0xe7 },
		{ .addr = 0xe202ad, .byte = 0xf8 },
		{ .addr = 0xcabe24, .byte = 0x00 },
		{ .addr = 0xcabe25, .byte = 0x00 },
		{ .addr = 0xe202ae, .byte = 0xe2 },
		{ .addr = 0xe202af, .byte = 0x5c }
};

static const SST_Transaction clrw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286948, .data = 21217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14811822, .data = 57948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286948, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_20[] = {
		{ .addr = 0x7e8e04, .byte = 0x42 },
		{ .addr = 0x7e8e05, .byte = 0x40 },
		{ .addr = 0x7e8e06, .byte = 0x80 },
		{ .addr = 0x7e8e07, .byte = 0xd8 },
		{ .addr = 0x7e8e08, .byte = 0x34 },
		{ .addr = 0x7e8e09, .byte = 0xcf }
};

static const SST_RamByte clrw_final_ram_20[] = {
		{ .addr = 0x7e8e04, .byte = 0x42 },
		{ .addr = 0x7e8e05, .byte = 0x40 },
		{ .addr = 0x7e8e06, .byte = 0x80 },
		{ .addr = 0x7e8e07, .byte = 0xd8 },
		{ .addr = 0x7e8e08, .byte = 0x34 },
		{ .addr = 0x7e8e09, .byte = 0xcf }
};

static const SST_Transaction clrw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8293896, .data = 13519, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_21[] = {
		{ .addr = 0x156ff8, .byte = 0x42 },
		{ .addr = 0x156ff9, .byte = 0x40 },
		{ .addr = 0x156ffa, .byte = 0xa4 },
		{ .addr = 0x156ffb, .byte = 0x80 },
		{ .addr = 0x156ffc, .byte = 0xb0 },
		{ .addr = 0x156ffd, .byte = 0x7b }
};

static const SST_RamByte clrw_final_ram_21[] = {
		{ .addr = 0x156ff8, .byte = 0x42 },
		{ .addr = 0x156ff9, .byte = 0x40 },
		{ .addr = 0x156ffa, .byte = 0xa4 },
		{ .addr = 0x156ffb, .byte = 0x80 },
		{ .addr = 0x156ffc, .byte = 0xb0 },
		{ .addr = 0x156ffd, .byte = 0x7b }
};

static const SST_Transaction clrw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1404924, .data = 45179, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_22[] = {
		{ .addr = 0x122710, .byte = 0x42 },
		{ .addr = 0x122711, .byte = 0x54 },
		{ .addr = 0x122712, .byte = 0x2d },
		{ .addr = 0x122713, .byte = 0x1a },
		{ .addr = 0xdad676, .byte = 0x69 },
		{ .addr = 0xdad677, .byte = 0x75 },
		{ .addr = 0x122714, .byte = 0x74 },
		{ .addr = 0x122715, .byte = 0x02 }
};

static const SST_RamByte clrw_final_ram_22[] = {
		{ .addr = 0x122710, .byte = 0x42 },
		{ .addr = 0x122711, .byte = 0x54 },
		{ .addr = 0x122712, .byte = 0x2d },
		{ .addr = 0x122713, .byte = 0x1a },
		{ .addr = 0xdad676, .byte = 0x00 },
		{ .addr = 0xdad677, .byte = 0x00 },
		{ .addr = 0x122714, .byte = 0x74 },
		{ .addr = 0x122715, .byte = 0x02 }
};

static const SST_Transaction clrw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14341750, .data = 26997, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1189652, .data = 29698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14341750, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_23[] = {
		{ .addr = 0xa9d492, .byte = 0x42 },
		{ .addr = 0xa9d493, .byte = 0x79 },
		{ .addr = 0xa9d494, .byte = 0xca },
		{ .addr = 0xa9d495, .byte = 0xac },
		{ .addr = 0xa9d496, .byte = 0x24 },
		{ .addr = 0xa9d497, .byte = 0x30 },
		{ .addr = 0xa9d498, .byte = 0x9f },
		{ .addr = 0xa9d499, .byte = 0xb7 },
		{ .addr = 0xac2430, .byte = 0xfc },
		{ .addr = 0xac2431, .byte = 0xf4 },
		{ .addr = 0xa9d49a, .byte = 0x3a },
		{ .addr = 0xa9d49b, .byte = 0xf8 }
};

static const SST_RamByte clrw_final_ram_23[] = {
		{ .addr = 0xa9d492, .byte = 0x42 },
		{ .addr = 0xa9d493, .byte = 0x79 },
		{ .addr = 0xa9d494, .byte = 0xca },
		{ .addr = 0xa9d495, .byte = 0xac },
		{ .addr = 0xa9d496, .byte = 0x24 },
		{ .addr = 0xa9d497, .byte = 0x30 },
		{ .addr = 0xa9d498, .byte = 0x9f },
		{ .addr = 0xa9d499, .byte = 0xb7 },
		{ .addr = 0xac2430, .byte = 0x00 },
		{ .addr = 0xac2431, .byte = 0x00 },
		{ .addr = 0xa9d49a, .byte = 0x3a },
		{ .addr = 0xa9d49b, .byte = 0xf8 }
};

static const SST_Transaction clrw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11130006, .data = 9264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11130008, .data = 40887, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11281456, .data = 64756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11130010, .data = 15096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11281456, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_24[] = {
		{ .addr = 0xa2e482, .byte = 0x42 },
		{ .addr = 0xa2e483, .byte = 0x5b },
		{ .addr = 0xa2e484, .byte = 0x3f },
		{ .addr = 0xa2e485, .byte = 0xdf },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0x1c },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x8a1c76, .byte = 0x43 },
		{ .addr = 0x8a1c77, .byte = 0x5e },
		{ .addr = 0x8a1c78, .byte = 0x13 },
		{ .addr = 0x8a1c79, .byte = 0xd0 }
};

static const SST_RamByte clrw_final_ram_24[] = {
		{ .addr = 0xa2e482, .byte = 0x42 },
		{ .addr = 0xa2e483, .byte = 0x5b },
		{ .addr = 0xa2e484, .byte = 0x3f },
		{ .addr = 0xa2e485, .byte = 0xdf },
		{ .addr = 0x033506, .byte = 0xe4 },
		{ .addr = 0x033507, .byte = 0x84 },
		{ .addr = 0x033502, .byte = 0x00 },
		{ .addr = 0x033503, .byte = 0x04 },
		{ .addr = 0x033504, .byte = 0x00 },
		{ .addr = 0x033505, .byte = 0xa2 },
		{ .addr = 0x033500, .byte = 0x42 },
		{ .addr = 0x033501, .byte = 0x5b },
		{ .addr = 0x0334fe, .byte = 0xaf },
		{ .addr = 0x0334ff, .byte = 0x0d },
		{ .addr = 0x0334fa, .byte = 0x42 },
		{ .addr = 0x0334fb, .byte = 0x51 },
		{ .addr = 0x0334fc, .byte = 0xaf },
		{ .addr = 0x0334fd, .byte = 0x1b },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0x1c },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x8a1c76, .byte = 0x43 },
		{ .addr = 0x8a1c77, .byte = 0x5e },
		{ .addr = 0x8a1c78, .byte = 0x13 },
		{ .addr = 0x8a1c79, .byte = 0xd0 }
};

static const SST_Transaction clrw_transactions_24[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1814284, .data = 41549, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 210182, .data = 58500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 210178, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 210180, .data = 162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 210176, .data = 16987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 210174, .data = 44813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 210170, .data = 16977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 210172, .data = 44827, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29066, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9051254, .data = 17246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9051256, .data = 5072, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_25[] = {
		{ .addr = 0xc34a1c, .byte = 0x42 },
		{ .addr = 0xc34a1d, .byte = 0x70 },
		{ .addr = 0xc34a1e, .byte = 0x1a },
		{ .addr = 0xc34a1f, .byte = 0xda },
		{ .addr = 0xc34a20, .byte = 0xea },
		{ .addr = 0xc34a21, .byte = 0xe9 },
		{ .addr = 0x00000c, .byte = 0x92 },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xe4c612, .byte = 0x98 },
		{ .addr = 0xe4c613, .byte = 0x90 },
		{ .addr = 0xe4c614, .byte = 0xc6 },
		{ .addr = 0xe4c615, .byte = 0xf5 }
};

static const SST_RamByte clrw_final_ram_25[] = {
		{ .addr = 0xc34a1c, .byte = 0x42 },
		{ .addr = 0xc34a1d, .byte = 0x70 },
		{ .addr = 0xc34a1e, .byte = 0x1a },
		{ .addr = 0xc34a1f, .byte = 0xda },
		{ .addr = 0xc34a20, .byte = 0xea },
		{ .addr = 0xc34a21, .byte = 0xe9 },
		{ .addr = 0x9742b0, .byte = 0x4a },
		{ .addr = 0x9742b1, .byte = 0x1e },
		{ .addr = 0x9742ac, .byte = 0x27 },
		{ .addr = 0x9742ad, .byte = 0x11 },
		{ .addr = 0x9742ae, .byte = 0x00 },
		{ .addr = 0x9742af, .byte = 0xc3 },
		{ .addr = 0x9742aa, .byte = 0x42 },
		{ .addr = 0x9742ab, .byte = 0x70 },
		{ .addr = 0x9742a8, .byte = 0x80 },
		{ .addr = 0x9742a9, .byte = 0x3f },
		{ .addr = 0x9742a4, .byte = 0x42 },
		{ .addr = 0x9742a5, .byte = 0x75 },
		{ .addr = 0x9742a6, .byte = 0xd4 },
		{ .addr = 0x9742a7, .byte = 0xc0 },
		{ .addr = 0x00000c, .byte = 0x92 },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xe4c612, .byte = 0x98 },
		{ .addr = 0xe4c613, .byte = 0x90 },
		{ .addr = 0xe4c614, .byte = 0xc6 },
		{ .addr = 0xe4c615, .byte = 0xf5 }
};

static const SST_Transaction clrw_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12798496, .data = 60137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12615742, .data = 51498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9913008, .data = 18974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9913004, .data = 10001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9913006, .data = 195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9913002, .data = 17008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9913000, .data = 32831, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9912996, .data = 17013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9912998, .data = 54464, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37604, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14992914, .data = 39056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14992916, .data = 50933, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_26[] = {
		{ .addr = 0x7f5486, .byte = 0x42 },
		{ .addr = 0x7f5487, .byte = 0x70 },
		{ .addr = 0x7f5488, .byte = 0x0d },
		{ .addr = 0x7f5489, .byte = 0x33 },
		{ .addr = 0x7f548a, .byte = 0xa9 },
		{ .addr = 0x7f548b, .byte = 0x0d },
		{ .addr = 0x0849d4, .byte = 0x1c },
		{ .addr = 0x0849d5, .byte = 0xf9 },
		{ .addr = 0x7f548c, .byte = 0xc5 },
		{ .addr = 0x7f548d, .byte = 0xcc }
};

static const SST_RamByte clrw_final_ram_26[] = {
		{ .addr = 0x7f5486, .byte = 0x42 },
		{ .addr = 0x7f5487, .byte = 0x70 },
		{ .addr = 0x7f5488, .byte = 0x0d },
		{ .addr = 0x7f5489, .byte = 0x33 },
		{ .addr = 0x7f548a, .byte = 0xa9 },
		{ .addr = 0x7f548b, .byte = 0x0d },
		{ .addr = 0x0849d4, .byte = 0x00 },
		{ .addr = 0x0849d5, .byte = 0x00 },
		{ .addr = 0x7f548c, .byte = 0xc5 },
		{ .addr = 0x7f548d, .byte = 0xcc }
};

static const SST_Transaction clrw_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8344714, .data = 43277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 543188, .data = 7417, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8344716, .data = 50636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 543188, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_27[] = {
		{ .addr = 0x293a44, .byte = 0x42 },
		{ .addr = 0x293a45, .byte = 0x44 },
		{ .addr = 0x293a46, .byte = 0xa3 },
		{ .addr = 0x293a47, .byte = 0x5d },
		{ .addr = 0x293a48, .byte = 0xc3 },
		{ .addr = 0x293a49, .byte = 0xca }
};

static const SST_RamByte clrw_final_ram_27[] = {
		{ .addr = 0x293a44, .byte = 0x42 },
		{ .addr = 0x293a45, .byte = 0x44 },
		{ .addr = 0x293a46, .byte = 0xa3 },
		{ .addr = 0x293a47, .byte = 0x5d },
		{ .addr = 0x293a48, .byte = 0xc3 },
		{ .addr = 0x293a49, .byte = 0xca }
};

static const SST_Transaction clrw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2701896, .data = 50122, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_28[] = {
		{ .addr = 0xea18f8, .byte = 0x42 },
		{ .addr = 0xea18f9, .byte = 0x76 },
		{ .addr = 0xea18fa, .byte = 0x28 },
		{ .addr = 0xea18fb, .byte = 0x46 },
		{ .addr = 0xea18fc, .byte = 0xd6 },
		{ .addr = 0xea18fd, .byte = 0x99 },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xcc },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0x0ecc6e, .byte = 0x27 },
		{ .addr = 0x0ecc6f, .byte = 0x0e },
		{ .addr = 0x0ecc70, .byte = 0x26 },
		{ .addr = 0x0ecc71, .byte = 0xcc }
};

static const SST_RamByte clrw_final_ram_28[] = {
		{ .addr = 0xea18f8, .byte = 0x42 },
		{ .addr = 0xea18f9, .byte = 0x76 },
		{ .addr = 0xea18fa, .byte = 0x28 },
		{ .addr = 0xea18fb, .byte = 0x46 },
		{ .addr = 0xea18fc, .byte = 0xd6 },
		{ .addr = 0xea18fd, .byte = 0x99 },
		{ .addr = 0xf4dfe8, .byte = 0x18 },
		{ .addr = 0xf4dfe9, .byte = 0xfa },
		{ .addr = 0xf4dfe4, .byte = 0xa5 },
		{ .addr = 0xf4dfe5, .byte = 0x0b },
		{ .addr = 0xf4dfe6, .byte = 0x00 },
		{ .addr = 0xf4dfe7, .byte = 0xea },
		{ .addr = 0xf4dfe2, .byte = 0x42 },
		{ .addr = 0xf4dfe3, .byte = 0x76 },
		{ .addr = 0xf4dfe0, .byte = 0x6a },
		{ .addr = 0xf4dfe1, .byte = 0x3d },
		{ .addr = 0xf4dfdc, .byte = 0x42 },
		{ .addr = 0xf4dfdd, .byte = 0x75 },
		{ .addr = 0xf4dfde, .byte = 0xe3 },
		{ .addr = 0xf4dfdf, .byte = 0x3a },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xcc },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0x0ecc6e, .byte = 0x27 },
		{ .addr = 0x0ecc6f, .byte = 0x0e },
		{ .addr = 0x0ecc70, .byte = 0x26 },
		{ .addr = 0x0ecc71, .byte = 0xcc }
};

static const SST_Transaction clrw_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15341820, .data = 54937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3828284, .data = 15362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16048104, .data = 6394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16048100, .data = 42251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16048102, .data = 234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16048098, .data = 17014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16048096, .data = 27197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16048092, .data = 17013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16048094, .data = 58170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54030, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 969838, .data = 9998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 969840, .data = 9932, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_29[] = {
		{ .addr = 0xd76e40, .byte = 0x42 },
		{ .addr = 0xd76e41, .byte = 0x76 },
		{ .addr = 0xd76e42, .byte = 0x52 },
		{ .addr = 0xd76e43, .byte = 0x3e },
		{ .addr = 0xd76e44, .byte = 0x41 },
		{ .addr = 0xd76e45, .byte = 0x12 },
		{ .addr = 0x77c93a, .byte = 0x68 },
		{ .addr = 0x77c93b, .byte = 0x30 },
		{ .addr = 0xd76e46, .byte = 0x54 },
		{ .addr = 0xd76e47, .byte = 0x66 }
};

static const SST_RamByte clrw_final_ram_29[] = {
		{ .addr = 0xd76e40, .byte = 0x42 },
		{ .addr = 0xd76e41, .byte = 0x76 },
		{ .addr = 0xd76e42, .byte = 0x52 },
		{ .addr = 0xd76e43, .byte = 0x3e },
		{ .addr = 0xd76e44, .byte = 0x41 },
		{ .addr = 0xd76e45, .byte = 0x12 },
		{ .addr = 0x77c93a, .byte = 0x00 },
		{ .addr = 0x77c93b, .byte = 0x00 },
		{ .addr = 0xd76e46, .byte = 0x54 },
		{ .addr = 0xd76e47, .byte = 0x66 }
};

static const SST_Transaction clrw_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14118468, .data = 16658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7850298, .data = 26672, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14118470, .data = 21606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7850298, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_30[] = {
		{ .addr = 0x6d0e4e, .byte = 0x42 },
		{ .addr = 0x6d0e4f, .byte = 0x73 },
		{ .addr = 0x6d0e50, .byte = 0x77 },
		{ .addr = 0x6d0e51, .byte = 0x3d },
		{ .addr = 0x6d0e52, .byte = 0xcf },
		{ .addr = 0x6d0e53, .byte = 0x80 },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0x53 },
		{ .addr = 0x00000f, .byte = 0x2e },
		{ .addr = 0x34532e, .byte = 0x53 },
		{ .addr = 0x34532f, .byte = 0xff },
		{ .addr = 0x345330, .byte = 0xb5 },
		{ .addr = 0x345331, .byte = 0x89 }
};

static const SST_RamByte clrw_final_ram_30[] = {
		{ .addr = 0x6d0e4e, .byte = 0x42 },
		{ .addr = 0x6d0e4f, .byte = 0x73 },
		{ .addr = 0x6d0e50, .byte = 0x77 },
		{ .addr = 0x6d0e51, .byte = 0x3d },
		{ .addr = 0x6d0e52, .byte = 0xcf },
		{ .addr = 0x6d0e53, .byte = 0x80 },
		{ .addr = 0x325636, .byte = 0x0e },
		{ .addr = 0x325637, .byte = 0x50 },
		{ .addr = 0x325632, .byte = 0xa7 },
		{ .addr = 0x325633, .byte = 0x18 },
		{ .addr = 0x325634, .byte = 0x00 },
		{ .addr = 0x325635, .byte = 0x6d },
		{ .addr = 0x325630, .byte = 0x42 },
		{ .addr = 0x325631, .byte = 0x73 },
		{ .addr = 0x32562e, .byte = 0xad },
		{ .addr = 0x32562f, .byte = 0x03 },
		{ .addr = 0x32562a, .byte = 0x42 },
		{ .addr = 0x32562b, .byte = 0x75 },
		{ .addr = 0x32562c, .byte = 0x93 },
		{ .addr = 0x32562d, .byte = 0x21 },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0x53 },
		{ .addr = 0x00000f, .byte = 0x2e },
		{ .addr = 0x34532e, .byte = 0x53 },
		{ .addr = 0x34532f, .byte = 0xff },
		{ .addr = 0x345330, .byte = 0xb5 },
		{ .addr = 0x345331, .byte = 0x89 }
};

static const SST_Transaction clrw_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7147090, .data = 53120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2206978, .data = 37549, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3298870, .data = 3664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3298866, .data = 42776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3298868, .data = 109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3298864, .data = 17011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3298862, .data = 44291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3298858, .data = 17013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3298860, .data = 37665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3429166, .data = 21503, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3429168, .data = 46473, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrw_initial_ram_31[] = {
		{ .addr = 0x7feaea, .byte = 0x42 },
		{ .addr = 0x7feaeb, .byte = 0x65 },
		{ .addr = 0x7feaec, .byte = 0xa5 },
		{ .addr = 0x7feaed, .byte = 0x13 },
		{ .addr = 0xbf711e, .byte = 0x61 },
		{ .addr = 0xbf711f, .byte = 0x6b },
		{ .addr = 0x7feaee, .byte = 0x18 },
		{ .addr = 0x7feaef, .byte = 0x87 }
};

static const SST_RamByte clrw_final_ram_31[] = {
		{ .addr = 0x7feaea, .byte = 0x42 },
		{ .addr = 0x7feaeb, .byte = 0x65 },
		{ .addr = 0x7feaec, .byte = 0xa5 },
		{ .addr = 0x7feaed, .byte = 0x13 },
		{ .addr = 0xbf711e, .byte = 0x00 },
		{ .addr = 0xbf711f, .byte = 0x00 },
		{ .addr = 0x7feaee, .byte = 0x18 },
		{ .addr = 0x7feaef, .byte = 0x87 }
};

static const SST_Transaction clrw_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12546334, .data = 24939, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8383214, .data = 6279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12546334, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 CLR.w D7 4247",
		.initial = {
			.regs = {
				2371229079, 316792031, 3799724880, 888618395, 3388749885, 4161042698, 3540012117, 2298836862, 1372326114, 206836130, 2733509874, 1749593440, 1084515899, 4294049278, 1473769838, 4359504, 2988682, 34581, 15800908
			},
			.prefetch0 = 16967,
			.prefetch1 = 8157,
			.ram = clrw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2371229079, 316792031, 3799724880, 888618395, 3388749885, 4161042698, 3540012117, 2298806272, 1372326114, 206836130, 2733509874, 1749593440, 1084515899, 4294049278, 1473769838, 4359504, 2988682, 34580, 15800910
			},
			.prefetch0 = 8157,
			.prefetch1 = 54963,
			.ram = clrw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = clrw_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 CLR.w D0 4240",
		.initial = {
			.regs = {
				3591898735, 497412730, 4196932300, 2072306055, 2865704405, 582728654, 2105357270, 821781333, 1878834674, 852605518, 802156051, 976966174, 2835728880, 2055872215, 61858637, 11641502, 15785122, 32797, 16371426
			},
			.prefetch0 = 16960,
			.prefetch1 = 29323,
			.ram = clrw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3591897088, 497412730, 4196932300, 2072306055, 2865704405, 582728654, 2105357270, 821781333, 1878834674, 852605518, 802156051, 976966174, 2835728880, 2055872215, 61858637, 11641502, 15785122, 32788, 16371428
			},
			.prefetch0 = 29323,
			.prefetch1 = 48451,
			.ram = clrw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = clrw_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 CLR.w (d16, A3) 426b",
		.initial = {
			.regs = {
				3124505192, 1728168801, 3585586242, 2865963265, 1650720841, 3474511122, 1302565408, 347769568, 604926734, 740221894, 2395692976, 2852525984, 2833908989, 3152725031, 1351631720, 12993440, 10722532, 1548, 10537926
			},
			.prefetch0 = 17003,
			.prefetch1 = 27457,
			.ram = clrw_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3124505192, 1728168801, 3585586242, 2865963265, 1650720841, 3474511122, 1302565408, 347769568, 604926734, 740221894, 2395692976, 2852525984, 2833908989, 3152725031, 1351631720, 12993440, 10722518, 9740, 125720410
			},
			.prefetch0 = 3669,
			.prefetch1 = 48798,
			.ram = clrw_final_ram_18,
			.ram_len = 28,
		},
		.transactions = clrw_transactions_18,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "019 CLR.w (A6) 4256",
		.initial = {
			.regs = {
				2032943347, 2157231704, 1898209906, 4009242130, 2692099545, 1999370787, 124607583, 2418975392, 274429694, 3862772203, 3975721696, 1828547578, 2218144303, 3398791429, 1925889572, 2267694, 6487040, 40971, 14811822
			},
			.prefetch0 = 16982,
			.prefetch1 = 59384,
			.ram = clrw_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2032943347, 2157231704, 1898209906, 4009242130, 2692099545, 1999370787, 124607583, 2418975392, 274429694, 3862772203, 3975721696, 1828547578, 2218144303, 3398791429, 1925889572, 2267694, 6487040, 40964, 14811824
			},
			.prefetch0 = 59384,
			.prefetch1 = 57948,
			.ram = clrw_final_ram_19,
			.ram_len = 8,
		},
		.transactions = clrw_transactions_19,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "020 CLR.w D0 4240",
		.initial = {
			.regs = {
				140661, 3538983626, 3744461765, 2646376620, 3420803148, 2023989766, 2795568143, 594014204, 3093242574, 2624933587, 2068731866, 414863087, 1639160056, 3048882927, 4272268105, 16730382, 8429076, 8455, 8293896
			},
			.prefetch0 = 16960,
			.prefetch1 = 32984,
			.ram = clrw_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				131072, 3538983626, 3744461765, 2646376620, 3420803148, 2023989766, 2795568143, 594014204, 3093242574, 2624933587, 2068731866, 414863087, 1639160056, 3048882927, 4272268105, 16730382, 8429076, 8452, 8293898
			},
			.prefetch0 = 32984,
			.prefetch1 = 13519,
			.ram = clrw_final_ram_20,
			.ram_len = 6,
		},
		.transactions = clrw_transactions_20,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "021 CLR.w D0 4240",
		.initial = {
			.regs = {
				2616245373, 2588891672, 1316367929, 2349585620, 1774142874, 3627530563, 4124086933, 1952706299, 512745738, 197930202, 380294648, 3886285673, 2453210867, 818333488, 3308387999, 14505774, 15715244, 9233, 1404924
			},
			.prefetch0 = 16960,
			.prefetch1 = 42112,
			.ram = clrw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2616197120, 2588891672, 1316367929, 2349585620, 1774142874, 3627530563, 4124086933, 1952706299, 512745738, 197930202, 380294648, 3886285673, 2453210867, 818333488, 3308387999, 14505774, 15715244, 9236, 1404926
			},
			.prefetch0 = 42112,
			.prefetch1 = 45179,
			.ram = clrw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = clrw_transactions_21,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "022 CLR.w (A4) 4254",
		.initial = {
			.regs = {
				4162785033, 3368225593, 4039174970, 1428565169, 4167464258, 2480824673, 3969354349, 2208614589, 3749356143, 2925331070, 2332366208, 3897199608, 4208645750, 1498214763, 1021024267, 7758370, 5759074, 41216, 1189652
			},
			.prefetch0 = 16980,
			.prefetch1 = 11546,
			.ram = clrw_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4162785033, 3368225593, 4039174970, 1428565169, 4167464258, 2480824673, 3969354349, 2208614589, 3749356143, 2925331070, 2332366208, 3897199608, 4208645750, 1498214763, 1021024267, 7758370, 5759074, 41220, 1189654
			},
			.prefetch0 = 11546,
			.prefetch1 = 29698,
			.ram = clrw_final_ram_22,
			.ram_len = 8,
		},
		.transactions = clrw_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 CLR.w (xxx).l 4279",
		.initial = {
			.regs = {
				3166553282, 2024204306, 3584852838, 1353304650, 1100805005, 3817801221, 1903931230, 686942545, 1663192871, 918762370, 930341331, 1140028121, 1188840719, 3768345484, 3047311526, 6769640, 8928996, 9227, 11130006
			},
			.prefetch0 = 17017,
			.prefetch1 = 51884,
			.ram = clrw_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3166553282, 2024204306, 3584852838, 1353304650, 1100805005, 3817801221, 1903931230, 686942545, 1663192871, 918762370, 930341331, 1140028121, 1188840719, 3768345484, 3047311526, 6769640, 8928996, 9220, 11130012
			},
			.prefetch0 = 40887,
			.prefetch1 = 15096,
			.ram = clrw_final_ram_23,
			.ram_len = 12,
		},
		.transactions = clrw_transactions_23,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "024 CLR.w (A3)+ 425b",
		.initial = {
			.regs = {
				3701689978, 2119492672, 2700188787, 772610799, 2211838688, 2906319239, 345986812, 2531359246, 1437310074, 132290891, 64845189, 2937827085, 4170820451, 515765210, 1032671812, 4348170, 210184, 4, 10675334
			},
			.prefetch0 = 16987,
			.prefetch1 = 16351,
			.ram = clrw_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3701689978, 2119492672, 2700188787, 772610799, 2211838688, 2906319239, 345986812, 2531359246, 1437310074, 132290891, 64845189, 2937827087, 4170820451, 515765210, 1032671812, 4348170, 210170, 8196, 1904876666
			},
			.prefetch0 = 17246,
			.prefetch1 = 5072,
			.ram = clrw_final_ram_24,
			.ram_len = 26,
		},
		.transactions = clrw_transactions_24,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "025 CLR.w (d8, A0, Xn) 4270",
		.initial = {
			.regs = {
				4150817178, 2327260251, 4032855096, 465845372, 1927463713, 1136032255, 2072670516, 2099662336, 1242125322, 311442907, 2697038593, 2831996515, 1826010876, 239241790, 188532259, 6071958, 9913010, 10001, 12798496
			},
			.prefetch0 = 17008,
			.prefetch1 = 6874,
			.ram = clrw_initial_ram_25,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4150817178, 2327260251, 4032855096, 465845372, 1927463713, 1136032255, 2072670516, 2099662336, 1242125322, 311442907, 2697038593, 2831996515, 1826010876, 239241790, 188532259, 6071958, 9912996, 10001, 2464466454
			},
			.prefetch0 = 39056,
			.prefetch1 = 50933,
			.ram = clrw_final_ram_25,
			.ram_len = 28,
		},
		.transactions = clrw_transactions_25,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "026 CLR.w (d8, A0, Xn) 4270",
		.initial = {
			.regs = {
				736725314, 2186707983, 4177452735, 1489951377, 488970615, 1895040168, 1503857442, 3771858564, 2501820511, 4005890189, 2521844378, 3108945981, 68912089, 3305145973, 3082230891, 13283408, 3011336, 33311, 8344714
			},
			.prefetch0 = 17008,
			.prefetch1 = 3379,
			.ram = clrw_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				736725314, 2186707983, 4177452735, 1489951377, 488970615, 1895040168, 1503857442, 3771858564, 2501820511, 4005890189, 2521844378, 3108945981, 68912089, 3305145973, 3082230891, 13283408, 3011336, 33300, 8344718
			},
			.prefetch0 = 43277,
			.prefetch1 = 50636,
			.ram = clrw_final_ram_26,
			.ram_len = 10,
		},
		.transactions = clrw_transactions_26,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "027 CLR.w D4 4244",
		.initial = {
			.regs = {
				1852947322, 572255902, 368434099, 3729356374, 2395145074, 1941387534, 540217652, 704645340, 277429752, 213646084, 776587998, 3101026911, 3969969160, 3228219537, 3145379195, 5132900, 2979138, 8969, 2701896
			},
			.prefetch0 = 16964,
			.prefetch1 = 41821,
			.ram = clrw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1852947322, 572255902, 368434099, 3729356374, 2395144192, 1941387534, 540217652, 704645340, 277429752, 213646084, 776587998, 3101026911, 3969969160, 3228219537, 3145379195, 5132900, 2979138, 8964, 2701898
			},
			.prefetch0 = 41821,
			.prefetch1 = 50122,
			.ram = clrw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = clrw_transactions_27,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "028 CLR.w (d8, A6, Xn) 4276",
		.initial = {
			.regs = {
				3331463495, 3221173383, 572706744, 962009718, 1232233268, 3240757718, 654708451, 3521620840, 4056030915, 3902417834, 3508358157, 2108605428, 2579861421, 858968474, 3239549503, 7533042, 16048106, 42251, 15341820
			},
			.prefetch0 = 17014,
			.prefetch1 = 10310,
			.ram = clrw_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3331463495, 3221173383, 572706744, 962009718, 1232233268, 3240757718, 654708451, 3521620840, 4056030915, 3902417834, 3508358157, 2108605428, 2579861421, 858968474, 3239549503, 7533042, 16048092, 9483, 3540962418
			},
			.prefetch0 = 9998,
			.prefetch1 = 9932,
			.ram = clrw_final_ram_28,
			.ram_len = 28,
		},
		.transactions = clrw_transactions_28,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "029 CLR.w (d8, A6, Xn) 4276",
		.initial = {
			.regs = {
				409238196, 1671115868, 544962284, 1494126742, 2254141591, 4160837510, 2927353041, 3172722244, 2054176946, 4121391314, 3830714161, 3656807308, 4205907237, 2363328656, 3682038134, 13157440, 5908694, 33035, 14118468
			},
			.prefetch0 = 17014,
			.prefetch1 = 21054,
			.ram = clrw_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				409238196, 1671115868, 544962284, 1494126742, 2254141591, 4160837510, 2927353041, 3172722244, 2054176946, 4121391314, 3830714161, 3656807308, 4205907237, 2363328656, 3682038134, 13157440, 5908694, 33028, 14118472
			},
			.prefetch0 = 16658,
			.prefetch1 = 21606,
			.ram = clrw_final_ram_29,
			.ram_len = 10,
		},
		.transactions = clrw_transactions_29,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "030 CLR.w (d8, A3, Xn) 4273",
		.initial = {
			.regs = {
				2447206840, 1683500840, 2401366200, 3592147278, 3950145416, 640763994, 1905666327, 1480494169, 3074304689, 452176206, 1617084702, 2468487277, 2700331246, 3583570305, 718440966, 6368632, 3298872, 42776, 7147090
			},
			.prefetch0 = 17011,
			.prefetch1 = 30525,
			.ram = clrw_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2447206840, 1683500840, 2401366200, 3592147278, 3950145416, 640763994, 1905666327, 1480494169, 3074304689, 452176206, 1617084702, 2468487277, 2700331246, 3583570305, 718440966, 6368632, 3298858, 10008, 590631730
			},
			.prefetch0 = 21503,
			.prefetch1 = 46473,
			.ram = clrw_final_ram_30,
			.ram_len = 28,
		},
		.transactions = clrw_transactions_30,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "031 CLR.w -(A5) 4265",
		.initial = {
			.regs = {
				3749051261, 3689052417, 3694397191, 3536711350, 3532856875, 1276011870, 886942762, 1738339724, 3008780509, 650647543, 981302014, 934345859, 1617855405, 1556050208, 388054831, 7097996, 3073092, 9735, 8383214
			},
			.prefetch0 = 16997,
			.prefetch1 = 42259,
			.ram = clrw_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3749051261, 3689052417, 3694397191, 3536711350, 3532856875, 1276011870, 886942762, 1738339724, 3008780509, 650647543, 981302014, 934345859, 1617855405, 1556050206, 388054831, 7097996, 3073092, 9732, 8383216
			},
			.prefetch0 = 42259,
			.prefetch1 = 6279,
			.ram = clrw_final_ram_31,
			.ram_len = 8,
		},
		.transactions = clrw_transactions_31,
		.transactions_len = 4,
		.lenght = 14,
	},
};

#endif /* RBT_CLRW_H */