#ifndef RBT_MOVEMW_H
#define RBT_MOVEMW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte movemw_initial_ram_0[] = {
		{ .addr = 0x64bc0e, .byte = 0x48 },
		{ .addr = 0x64bc0f, .byte = 0xaf },
		{ .addr = 0x64bc10, .byte = 0x8a },
		{ .addr = 0x64bc11, .byte = 0x78 },
		{ .addr = 0x64bc12, .byte = 0x07 },
		{ .addr = 0x64bc13, .byte = 0x0f },
		{ .addr = 0x64bc14, .byte = 0xf7 },
		{ .addr = 0x64bc15, .byte = 0xd5 },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xac },
		{ .addr = 0x00000e, .byte = 0xa5 },
		{ .addr = 0x00000f, .byte = 0xe6 },
		{ .addr = 0xaca5e6, .byte = 0x70 },
		{ .addr = 0xaca5e7, .byte = 0x20 },
		{ .addr = 0xaca5e8, .byte = 0xa9 },
		{ .addr = 0xaca5e9, .byte = 0xd9 }
};

static const SST_RamByte movemw_final_ram_0[] = {
		{ .addr = 0x64bc0e, .byte = 0x48 },
		{ .addr = 0x64bc0f, .byte = 0xaf },
		{ .addr = 0x64bc10, .byte = 0x8a },
		{ .addr = 0x64bc11, .byte = 0x78 },
		{ .addr = 0x64bc12, .byte = 0x07 },
		{ .addr = 0x64bc13, .byte = 0x0f },
		{ .addr = 0x64bc14, .byte = 0xf7 },
		{ .addr = 0x64bc15, .byte = 0xd5 },
		{ .addr = 0x719464, .byte = 0xbc },
		{ .addr = 0x719465, .byte = 0x16 },
		{ .addr = 0x719460, .byte = 0x00 },
		{ .addr = 0x719461, .byte = 0x02 },
		{ .addr = 0x719462, .byte = 0x00 },
		{ .addr = 0x719463, .byte = 0x64 },
		{ .addr = 0x71945e, .byte = 0x48 },
		{ .addr = 0x71945f, .byte = 0xaf },
		{ .addr = 0x71945c, .byte = 0xa2 },
		{ .addr = 0x71945d, .byte = 0x31 },
		{ .addr = 0x719458, .byte = 0x48 },
		{ .addr = 0x719459, .byte = 0xa1 },
		{ .addr = 0x71945a, .byte = 0x00 },
		{ .addr = 0x71945b, .byte = 0xf1 },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xac },
		{ .addr = 0x00000e, .byte = 0xa5 },
		{ .addr = 0x00000f, .byte = 0xe6 },
		{ .addr = 0xaca5e6, .byte = 0x70 },
		{ .addr = 0xaca5e7, .byte = 0x20 },
		{ .addr = 0xaca5e8, .byte = 0xa9 },
		{ .addr = 0xaca5e9, .byte = 0xd9 }
};

static const SST_Transaction movemw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6601746, .data = 1807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6601748, .data = 63445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15835696, .data = 24647, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7443556, .data = 48150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7443552, .data = 2, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7443554, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7443550, .data = 18607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7443548, .data = 41521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7443544, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7443546, .data = 241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11314662, .data = 28704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11314664, .data = 43481, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_1[] = {
		{ .addr = 0xe1f10e, .byte = 0x48 },
		{ .addr = 0xe1f10f, .byte = 0xaf },
		{ .addr = 0xe1f110, .byte = 0xad },
		{ .addr = 0xe1f111, .byte = 0x38 },
		{ .addr = 0xe1f112, .byte = 0x50 },
		{ .addr = 0xe1f113, .byte = 0xcd },
		{ .addr = 0xe1f114, .byte = 0x93 },
		{ .addr = 0xe1f115, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0xcad604, .byte = 0x52 },
		{ .addr = 0xcad605, .byte = 0xfd },
		{ .addr = 0xcad606, .byte = 0x96 },
		{ .addr = 0xcad607, .byte = 0xac }
};

static const SST_RamByte movemw_final_ram_1[] = {
		{ .addr = 0xe1f10e, .byte = 0x48 },
		{ .addr = 0xe1f10f, .byte = 0xaf },
		{ .addr = 0xe1f110, .byte = 0xad },
		{ .addr = 0xe1f111, .byte = 0x38 },
		{ .addr = 0xe1f112, .byte = 0x50 },
		{ .addr = 0xe1f113, .byte = 0xcd },
		{ .addr = 0xe1f114, .byte = 0x93 },
		{ .addr = 0xe1f115, .byte = 0xc4 },
		{ .addr = 0xf6e0d0, .byte = 0xf1 },
		{ .addr = 0xf6e0d1, .byte = 0x16 },
		{ .addr = 0xf6e0cc, .byte = 0x02 },
		{ .addr = 0xf6e0cd, .byte = 0x0b },
		{ .addr = 0xf6e0ce, .byte = 0x00 },
		{ .addr = 0xf6e0cf, .byte = 0xe1 },
		{ .addr = 0xf6e0ca, .byte = 0x48 },
		{ .addr = 0xf6e0cb, .byte = 0xaf },
		{ .addr = 0xf6e0c8, .byte = 0xba },
		{ .addr = 0xf6e0c9, .byte = 0x59 },
		{ .addr = 0xf6e0c4, .byte = 0x48 },
		{ .addr = 0xf6e0c5, .byte = 0xa1 },
		{ .addr = 0xf6e0c6, .byte = 0x00 },
		{ .addr = 0xf6e0c7, .byte = 0xb7 },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0xcad604, .byte = 0x52 },
		{ .addr = 0xcad605, .byte = 0xfd },
		{ .addr = 0xcad606, .byte = 0x96 },
		{ .addr = 0xcad607, .byte = 0xac }
};

static const SST_Transaction movemw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14807314, .data = 20685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14807316, .data = 37828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12040792, .data = 30008, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16179408, .data = 61718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16179404, .data = 523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16179406, .data = 225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16179402, .data = 18607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16179400, .data = 47705, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16179396, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16179398, .data = 183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13293060, .data = 21245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13293062, .data = 38572, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_2[] = {
		{ .addr = 0xd199b6, .byte = 0x4c },
		{ .addr = 0xd199b7, .byte = 0xb2 },
		{ .addr = 0xd199b8, .byte = 0x9a },
		{ .addr = 0xd199b9, .byte = 0xad },
		{ .addr = 0xd199ba, .byte = 0x94 },
		{ .addr = 0xd199bb, .byte = 0xea },
		{ .addr = 0xd199bc, .byte = 0xe5 },
		{ .addr = 0xd199bd, .byte = 0x02 },
		{ .addr = 0xdbbde2, .byte = 0x88 },
		{ .addr = 0xdbbde3, .byte = 0x7c },
		{ .addr = 0xdbbde4, .byte = 0x18 },
		{ .addr = 0xdbbde5, .byte = 0x5e },
		{ .addr = 0xdbbde6, .byte = 0x1b },
		{ .addr = 0xdbbde7, .byte = 0x61 },
		{ .addr = 0xdbbde8, .byte = 0xb9 },
		{ .addr = 0xdbbde9, .byte = 0x57 },
		{ .addr = 0xdbbdea, .byte = 0x78 },
		{ .addr = 0xdbbdeb, .byte = 0xe4 },
		{ .addr = 0xdbbdec, .byte = 0xff },
		{ .addr = 0xdbbded, .byte = 0xed },
		{ .addr = 0xdbbdee, .byte = 0x8b },
		{ .addr = 0xdbbdef, .byte = 0x08 },
		{ .addr = 0xdbbdf0, .byte = 0x44 },
		{ .addr = 0xdbbdf1, .byte = 0x8a },
		{ .addr = 0xdbbdf2, .byte = 0xee },
		{ .addr = 0xdbbdf3, .byte = 0x12 },
		{ .addr = 0xdbbdf4, .byte = 0xcd },
		{ .addr = 0xdbbdf5, .byte = 0x2f },
		{ .addr = 0xd199be, .byte = 0x6e },
		{ .addr = 0xd199bf, .byte = 0x68 }
};

static const SST_RamByte movemw_final_ram_2[] = {
		{ .addr = 0xd199b6, .byte = 0x4c },
		{ .addr = 0xd199b7, .byte = 0xb2 },
		{ .addr = 0xd199b8, .byte = 0x9a },
		{ .addr = 0xd199b9, .byte = 0xad },
		{ .addr = 0xd199ba, .byte = 0x94 },
		{ .addr = 0xd199bb, .byte = 0xea },
		{ .addr = 0xd199bc, .byte = 0xe5 },
		{ .addr = 0xd199bd, .byte = 0x02 },
		{ .addr = 0xdbbde2, .byte = 0x88 },
		{ .addr = 0xdbbde3, .byte = 0x7c },
		{ .addr = 0xdbbde4, .byte = 0x18 },
		{ .addr = 0xdbbde5, .byte = 0x5e },
		{ .addr = 0xdbbde6, .byte = 0x1b },
		{ .addr = 0xdbbde7, .byte = 0x61 },
		{ .addr = 0xdbbde8, .byte = 0xb9 },
		{ .addr = 0xdbbde9, .byte = 0x57 },
		{ .addr = 0xdbbdea, .byte = 0x78 },
		{ .addr = 0xdbbdeb, .byte = 0xe4 },
		{ .addr = 0xdbbdec, .byte = 0xff },
		{ .addr = 0xdbbded, .byte = 0xed },
		{ .addr = 0xdbbdee, .byte = 0x8b },
		{ .addr = 0xdbbdef, .byte = 0x08 },
		{ .addr = 0xdbbdf0, .byte = 0x44 },
		{ .addr = 0xdbbdf1, .byte = 0x8a },
		{ .addr = 0xdbbdf2, .byte = 0xee },
		{ .addr = 0xdbbdf3, .byte = 0x12 },
		{ .addr = 0xdbbdf4, .byte = 0xcd },
		{ .addr = 0xdbbdf5, .byte = 0x2f },
		{ .addr = 0xd199be, .byte = 0x6e },
		{ .addr = 0xd199bf, .byte = 0x68 }
};

static const SST_Transaction movemw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13736378, .data = 38122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13736380, .data = 58626, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14400994, .data = 34940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14400996, .data = 6238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14400998, .data = 7009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401000, .data = 47447, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401002, .data = 30948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401004, .data = 65517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401006, .data = 35592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401008, .data = 17546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401010, .data = 60946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401012, .data = 52527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13736382, .data = 28264, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_3[] = {
		{ .addr = 0x2ebf30, .byte = 0x48 },
		{ .addr = 0x2ebf31, .byte = 0xa0 },
		{ .addr = 0x2ebf32, .byte = 0xa5 },
		{ .addr = 0x2ebf33, .byte = 0x3b },
		{ .addr = 0x2ebf34, .byte = 0x6c },
		{ .addr = 0x2ebf35, .byte = 0xd3 },
		{ .addr = 0x00000c, .byte = 0x76 },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0xbe6120, .byte = 0x10 },
		{ .addr = 0xbe6121, .byte = 0xa9 },
		{ .addr = 0xbe6122, .byte = 0x61 },
		{ .addr = 0xbe6123, .byte = 0x23 }
};

static const SST_RamByte movemw_final_ram_3[] = {
		{ .addr = 0x2ebf30, .byte = 0x48 },
		{ .addr = 0x2ebf31, .byte = 0xa0 },
		{ .addr = 0x2ebf32, .byte = 0xa5 },
		{ .addr = 0x2ebf33, .byte = 0x3b },
		{ .addr = 0x2ebf34, .byte = 0x6c },
		{ .addr = 0x2ebf35, .byte = 0xd3 },
		{ .addr = 0xd8a948, .byte = 0xbf },
		{ .addr = 0xd8a949, .byte = 0x36 },
		{ .addr = 0xd8a944, .byte = 0x04 },
		{ .addr = 0xd8a945, .byte = 0x0c },
		{ .addr = 0xd8a946, .byte = 0x00 },
		{ .addr = 0xd8a947, .byte = 0x2e },
		{ .addr = 0xd8a942, .byte = 0x48 },
		{ .addr = 0xd8a943, .byte = 0xa0 },
		{ .addr = 0xd8a940, .byte = 0x10 },
		{ .addr = 0xd8a941, .byte = 0xcd },
		{ .addr = 0xd8a93c, .byte = 0x48 },
		{ .addr = 0xd8a93d, .byte = 0xa1 },
		{ .addr = 0xd8a93e, .byte = 0x4f },
		{ .addr = 0xd8a93f, .byte = 0x85 },
		{ .addr = 0x00000c, .byte = 0x76 },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0xbe6120, .byte = 0x10 },
		{ .addr = 0xbe6121, .byte = 0xa9 },
		{ .addr = 0xbe6122, .byte = 0x61 },
		{ .addr = 0xbe6123, .byte = 0x23 }
};

static const SST_Transaction movemw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3063604, .data = 27859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8720588, .data = 9752, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14199112, .data = 48950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14199108, .data = 1036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14199110, .data = 46, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14199106, .data = 18592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14199104, .data = 4301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14199100, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14199102, .data = 20357, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 30398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12476704, .data = 4265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12476706, .data = 24867, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_4[] = {
		{ .addr = 0xf8dfb4, .byte = 0x4c },
		{ .addr = 0xf8dfb5, .byte = 0xb0 },
		{ .addr = 0xf8dfb6, .byte = 0x9d },
		{ .addr = 0xf8dfb7, .byte = 0x77 },
		{ .addr = 0xf8dfb8, .byte = 0x36 },
		{ .addr = 0xf8dfb9, .byte = 0x1f },
		{ .addr = 0xf8dfba, .byte = 0x41 },
		{ .addr = 0xf8dfbb, .byte = 0x94 },
		{ .addr = 0x00000c, .byte = 0xc9 },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0xf9 },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0xc0f92c, .byte = 0xba },
		{ .addr = 0xc0f92d, .byte = 0x61 },
		{ .addr = 0xc0f92e, .byte = 0x45 },
		{ .addr = 0xc0f92f, .byte = 0x85 }
};

static const SST_RamByte movemw_final_ram_4[] = {
		{ .addr = 0xf8dfb4, .byte = 0x4c },
		{ .addr = 0xf8dfb5, .byte = 0xb0 },
		{ .addr = 0xf8dfb6, .byte = 0x9d },
		{ .addr = 0xf8dfb7, .byte = 0x77 },
		{ .addr = 0xf8dfb8, .byte = 0x36 },
		{ .addr = 0xf8dfb9, .byte = 0x1f },
		{ .addr = 0xf8dfba, .byte = 0x41 },
		{ .addr = 0xf8dfbb, .byte = 0x94 },
		{ .addr = 0x6703ac, .byte = 0xdf },
		{ .addr = 0x6703ad, .byte = 0xbc },
		{ .addr = 0x6703a8, .byte = 0x05 },
		{ .addr = 0x6703a9, .byte = 0x1c },
		{ .addr = 0x6703aa, .byte = 0x00 },
		{ .addr = 0x6703ab, .byte = 0xf8 },
		{ .addr = 0x6703a6, .byte = 0x4c },
		{ .addr = 0x6703a7, .byte = 0xb0 },
		{ .addr = 0x6703a4, .byte = 0xc9 },
		{ .addr = 0x6703a5, .byte = 0x7b },
		{ .addr = 0x6703a0, .byte = 0x4c },
		{ .addr = 0x6703a1, .byte = 0xb1 },
		{ .addr = 0x6703a2, .byte = 0xbf },
		{ .addr = 0x6703a3, .byte = 0x21 },
		{ .addr = 0x00000c, .byte = 0xc9 },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0xf9 },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0xc0f92c, .byte = 0xba },
		{ .addr = 0xc0f92d, .byte = 0x61 },
		{ .addr = 0xc0f92e, .byte = 0x45 },
		{ .addr = 0xc0f92f, .byte = 0x85 }
};

static const SST_Transaction movemw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16310200, .data = 13855, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16310202, .data = 16788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2214266, .data = 29977, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751148, .data = 57276, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751144, .data = 1308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751146, .data = 248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751142, .data = 19632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751140, .data = 51579, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751136, .data = 19633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751138, .data = 48929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12646700, .data = 47713, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12646702, .data = 17797, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_5[] = {
		{ .addr = 0xf15520, .byte = 0x4c },
		{ .addr = 0xf15521, .byte = 0xa8 },
		{ .addr = 0xf15522, .byte = 0xe6 },
		{ .addr = 0xf15523, .byte = 0xa0 },
		{ .addr = 0xf15524, .byte = 0x2c },
		{ .addr = 0xf15525, .byte = 0xcd },
		{ .addr = 0xf15526, .byte = 0x65 },
		{ .addr = 0xf15527, .byte = 0xdb },
		{ .addr = 0x17ec48, .byte = 0xd5 },
		{ .addr = 0x17ec49, .byte = 0xd9 },
		{ .addr = 0x17ec4a, .byte = 0x56 },
		{ .addr = 0x17ec4b, .byte = 0x20 },
		{ .addr = 0x17ec4c, .byte = 0xcc },
		{ .addr = 0x17ec4d, .byte = 0x5e },
		{ .addr = 0x17ec4e, .byte = 0xa4 },
		{ .addr = 0x17ec4f, .byte = 0xa7 },
		{ .addr = 0x17ec50, .byte = 0x5f },
		{ .addr = 0x17ec51, .byte = 0x1d },
		{ .addr = 0x17ec52, .byte = 0x42 },
		{ .addr = 0x17ec53, .byte = 0x91 },
		{ .addr = 0x17ec54, .byte = 0xc3 },
		{ .addr = 0x17ec55, .byte = 0x20 },
		{ .addr = 0x17ec56, .byte = 0xec },
		{ .addr = 0x17ec57, .byte = 0x46 },
		{ .addr = 0xf15528, .byte = 0x47 },
		{ .addr = 0xf15529, .byte = 0xa6 }
};

static const SST_RamByte movemw_final_ram_5[] = {
		{ .addr = 0xf15520, .byte = 0x4c },
		{ .addr = 0xf15521, .byte = 0xa8 },
		{ .addr = 0xf15522, .byte = 0xe6 },
		{ .addr = 0xf15523, .byte = 0xa0 },
		{ .addr = 0xf15524, .byte = 0x2c },
		{ .addr = 0xf15525, .byte = 0xcd },
		{ .addr = 0xf15526, .byte = 0x65 },
		{ .addr = 0xf15527, .byte = 0xdb },
		{ .addr = 0x17ec48, .byte = 0xd5 },
		{ .addr = 0x17ec49, .byte = 0xd9 },
		{ .addr = 0x17ec4a, .byte = 0x56 },
		{ .addr = 0x17ec4b, .byte = 0x20 },
		{ .addr = 0x17ec4c, .byte = 0xcc },
		{ .addr = 0x17ec4d, .byte = 0x5e },
		{ .addr = 0x17ec4e, .byte = 0xa4 },
		{ .addr = 0x17ec4f, .byte = 0xa7 },
		{ .addr = 0x17ec50, .byte = 0x5f },
		{ .addr = 0x17ec51, .byte = 0x1d },
		{ .addr = 0x17ec52, .byte = 0x42 },
		{ .addr = 0x17ec53, .byte = 0x91 },
		{ .addr = 0x17ec54, .byte = 0xc3 },
		{ .addr = 0x17ec55, .byte = 0x20 },
		{ .addr = 0x17ec56, .byte = 0xec },
		{ .addr = 0x17ec57, .byte = 0x46 },
		{ .addr = 0xf15528, .byte = 0x47 },
		{ .addr = 0xf15529, .byte = 0xa6 }
};

static const SST_Transaction movemw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15815972, .data = 11469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15815974, .data = 26075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567816, .data = 54745, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567818, .data = 22048, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567820, .data = 52318, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567822, .data = 42151, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567824, .data = 24349, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567826, .data = 17041, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567828, .data = 49952, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1567830, .data = 60486, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15815976, .data = 18342, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_6[] = {
		{ .addr = 0x63bea8, .byte = 0x4c },
		{ .addr = 0x63bea9, .byte = 0xb1 },
		{ .addr = 0x63beaa, .byte = 0x18 },
		{ .addr = 0x63beab, .byte = 0xc6 },
		{ .addr = 0x63beac, .byte = 0x2a },
		{ .addr = 0x63bead, .byte = 0x37 },
		{ .addr = 0x63beae, .byte = 0x44 },
		{ .addr = 0x63beaf, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0xd6 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x5c },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0x0e5c40, .byte = 0xd2 },
		{ .addr = 0x0e5c41, .byte = 0xed },
		{ .addr = 0x0e5c42, .byte = 0x2b },
		{ .addr = 0x0e5c43, .byte = 0x0b }
};

static const SST_RamByte movemw_final_ram_6[] = {
		{ .addr = 0x63bea8, .byte = 0x4c },
		{ .addr = 0x63bea9, .byte = 0xb1 },
		{ .addr = 0x63beaa, .byte = 0x18 },
		{ .addr = 0x63beab, .byte = 0xc6 },
		{ .addr = 0x63beac, .byte = 0x2a },
		{ .addr = 0x63bead, .byte = 0x37 },
		{ .addr = 0x63beae, .byte = 0x44 },
		{ .addr = 0x63beaf, .byte = 0xe3 },
		{ .addr = 0x726d42, .byte = 0xbe },
		{ .addr = 0x726d43, .byte = 0xb0 },
		{ .addr = 0x726d3e, .byte = 0x27 },
		{ .addr = 0x726d3f, .byte = 0x17 },
		{ .addr = 0x726d40, .byte = 0x00 },
		{ .addr = 0x726d41, .byte = 0x63 },
		{ .addr = 0x726d3c, .byte = 0x4c },
		{ .addr = 0x726d3d, .byte = 0xb1 },
		{ .addr = 0x726d3a, .byte = 0x1d },
		{ .addr = 0x726d3b, .byte = 0x75 },
		{ .addr = 0x726d36, .byte = 0x4c },
		{ .addr = 0x726d37, .byte = 0xb5 },
		{ .addr = 0x726d38, .byte = 0x0e },
		{ .addr = 0x726d39, .byte = 0xd7 },
		{ .addr = 0x00000c, .byte = 0xd6 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x5c },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0x0e5c40, .byte = 0xd2 },
		{ .addr = 0x0e5c41, .byte = 0xed },
		{ .addr = 0x0e5c42, .byte = 0x2b },
		{ .addr = 0x0e5c43, .byte = 0x0b }
};

static const SST_Transaction movemw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6536876, .data = 10807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6536878, .data = 17635, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14097780, .data = 56612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7499074, .data = 48816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7499070, .data = 10007, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7499072, .data = 99, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7499068, .data = 19633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7499066, .data = 7541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7499062, .data = 19637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7499064, .data = 3799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 23616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 941120, .data = 53997, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 941122, .data = 11019, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_7[] = {
		{ .addr = 0xd3c520, .byte = 0x4c },
		{ .addr = 0xd3c521, .byte = 0xb1 },
		{ .addr = 0xd3c522, .byte = 0x96 },
		{ .addr = 0xd3c523, .byte = 0x85 },
		{ .addr = 0xd3c524, .byte = 0xc9 },
		{ .addr = 0xd3c525, .byte = 0xe2 },
		{ .addr = 0xd3c526, .byte = 0xa9 },
		{ .addr = 0xd3c527, .byte = 0xae },
		{ .addr = 0x00000c, .byte = 0xaf },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x75 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x087582, .byte = 0x45 },
		{ .addr = 0x087583, .byte = 0x3c },
		{ .addr = 0x087584, .byte = 0x6d },
		{ .addr = 0x087585, .byte = 0x3b }
};

static const SST_RamByte movemw_final_ram_7[] = {
		{ .addr = 0xd3c520, .byte = 0x4c },
		{ .addr = 0xd3c521, .byte = 0xb1 },
		{ .addr = 0xd3c522, .byte = 0x96 },
		{ .addr = 0xd3c523, .byte = 0x85 },
		{ .addr = 0xd3c524, .byte = 0xc9 },
		{ .addr = 0xd3c525, .byte = 0xe2 },
		{ .addr = 0xd3c526, .byte = 0xa9 },
		{ .addr = 0xd3c527, .byte = 0xae },
		{ .addr = 0x81d2ea, .byte = 0xc5 },
		{ .addr = 0x81d2eb, .byte = 0x28 },
		{ .addr = 0x81d2e6, .byte = 0x87 },
		{ .addr = 0x81d2e7, .byte = 0x11 },
		{ .addr = 0x81d2e8, .byte = 0x00 },
		{ .addr = 0x81d2e9, .byte = 0xd3 },
		{ .addr = 0x81d2e4, .byte = 0x4c },
		{ .addr = 0x81d2e5, .byte = 0xb1 },
		{ .addr = 0x81d2e2, .byte = 0xf8 },
		{ .addr = 0x81d2e3, .byte = 0x65 },
		{ .addr = 0x81d2de, .byte = 0x4c },
		{ .addr = 0x81d2df, .byte = 0xb1 },
		{ .addr = 0x81d2e0, .byte = 0x62 },
		{ .addr = 0x81d2e1, .byte = 0x1e },
		{ .addr = 0x00000c, .byte = 0xaf },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x75 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x087582, .byte = 0x45 },
		{ .addr = 0x087583, .byte = 0x3c },
		{ .addr = 0x087584, .byte = 0x6d },
		{ .addr = 0x087585, .byte = 0x3b }
};

static const SST_Transaction movemw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13878564, .data = 51682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13878566, .data = 43438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2029668, .data = 27853, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8508138, .data = 50472, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8508134, .data = 34577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8508136, .data = 211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8508132, .data = 19633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8508130, .data = 63589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8508126, .data = 19633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8508128, .data = 25118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 554370, .data = 17724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 554372, .data = 27963, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_8[] = {
		{ .addr = 0x882074, .byte = 0x4c },
		{ .addr = 0x882075, .byte = 0xaf },
		{ .addr = 0x882076, .byte = 0xab },
		{ .addr = 0x882077, .byte = 0x9f },
		{ .addr = 0x882078, .byte = 0x2a },
		{ .addr = 0x882079, .byte = 0x47 },
		{ .addr = 0x88207a, .byte = 0x60 },
		{ .addr = 0x88207b, .byte = 0x7d },
		{ .addr = 0x00000c, .byte = 0x01 },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x74 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xb874fe, .byte = 0xb9 },
		{ .addr = 0xb874ff, .byte = 0xf8 },
		{ .addr = 0xb87500, .byte = 0xef },
		{ .addr = 0xb87501, .byte = 0xb0 }
};

static const SST_RamByte movemw_final_ram_8[] = {
		{ .addr = 0x882074, .byte = 0x4c },
		{ .addr = 0x882075, .byte = 0xaf },
		{ .addr = 0x882076, .byte = 0xab },
		{ .addr = 0x882077, .byte = 0x9f },
		{ .addr = 0x882078, .byte = 0x2a },
		{ .addr = 0x882079, .byte = 0x47 },
		{ .addr = 0x88207a, .byte = 0x60 },
		{ .addr = 0x88207b, .byte = 0x7d },
		{ .addr = 0xf8baa4, .byte = 0x20 },
		{ .addr = 0xf8baa5, .byte = 0x7c },
		{ .addr = 0xf8baa0, .byte = 0x01 },
		{ .addr = 0xf8baa1, .byte = 0x0a },
		{ .addr = 0xf8baa2, .byte = 0x00 },
		{ .addr = 0xf8baa3, .byte = 0x88 },
		{ .addr = 0xf8ba9e, .byte = 0x4c },
		{ .addr = 0xf8ba9f, .byte = 0xaf },
		{ .addr = 0xf8ba9c, .byte = 0x7b },
		{ .addr = 0xf8ba9d, .byte = 0xf5 },
		{ .addr = 0xf8ba98, .byte = 0x4c },
		{ .addr = 0xf8ba99, .byte = 0xb1 },
		{ .addr = 0xf8ba9a, .byte = 0x00 },
		{ .addr = 0xf8ba9b, .byte = 0xc0 },
		{ .addr = 0x00000c, .byte = 0x01 },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x74 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xb874fe, .byte = 0xb9 },
		{ .addr = 0xb874ff, .byte = 0xf8 },
		{ .addr = 0xb87500, .byte = 0xef },
		{ .addr = 0xb87501, .byte = 0xb0 }
};

static const SST_Transaction movemw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8921208, .data = 10823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8921210, .data = 24701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12614644, .data = 58560, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16300708, .data = 8316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16300704, .data = 266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16300706, .data = 136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16300702, .data = 19631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16300700, .data = 31733, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16300696, .data = 19633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16300698, .data = 192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 29950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12088574, .data = 47608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12088576, .data = 61360, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_9[] = {
		{ .addr = 0x73417e, .byte = 0x48 },
		{ .addr = 0x73417f, .byte = 0xae },
		{ .addr = 0x734180, .byte = 0x07 },
		{ .addr = 0x734181, .byte = 0x45 },
		{ .addr = 0x734182, .byte = 0xcb },
		{ .addr = 0x734183, .byte = 0x67 },
		{ .addr = 0x734184, .byte = 0x5a },
		{ .addr = 0x734185, .byte = 0xd1 },
		{ .addr = 0x00000c, .byte = 0x92 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0xf8 },
		{ .addr = 0xd452f8, .byte = 0xd1 },
		{ .addr = 0xd452f9, .byte = 0x8f },
		{ .addr = 0xd452fa, .byte = 0x9e },
		{ .addr = 0xd452fb, .byte = 0x40 }
};

static const SST_RamByte movemw_final_ram_9[] = {
		{ .addr = 0x73417e, .byte = 0x48 },
		{ .addr = 0x73417f, .byte = 0xae },
		{ .addr = 0x734180, .byte = 0x07 },
		{ .addr = 0x734181, .byte = 0x45 },
		{ .addr = 0x734182, .byte = 0xcb },
		{ .addr = 0x734183, .byte = 0x67 },
		{ .addr = 0x734184, .byte = 0x5a },
		{ .addr = 0x734185, .byte = 0xd1 },
		{ .addr = 0xa77176, .byte = 0x41 },
		{ .addr = 0xa77177, .byte = 0x86 },
		{ .addr = 0xa77172, .byte = 0x85 },
		{ .addr = 0xa77173, .byte = 0x0e },
		{ .addr = 0xa77174, .byte = 0x00 },
		{ .addr = 0xa77175, .byte = 0x73 },
		{ .addr = 0xa77170, .byte = 0x48 },
		{ .addr = 0xa77171, .byte = 0xae },
		{ .addr = 0xa7716e, .byte = 0xd4 },
		{ .addr = 0xa7716f, .byte = 0x73 },
		{ .addr = 0xa7716a, .byte = 0x48 },
		{ .addr = 0xa7716b, .byte = 0xa1 },
		{ .addr = 0xa7716c, .byte = 0xe6 },
		{ .addr = 0xa7716d, .byte = 0x57 },
		{ .addr = 0x00000c, .byte = 0x92 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0xf8 },
		{ .addr = 0xd452f8, .byte = 0xd1 },
		{ .addr = 0xd452f9, .byte = 0x8f },
		{ .addr = 0xd452fa, .byte = 0x9e },
		{ .addr = 0xd452fb, .byte = 0x40 }
};

static const SST_Transaction movemw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7553410, .data = 52071, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7553412, .data = 23249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5756018, .data = 1467, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973558, .data = 16774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973554, .data = 34062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973556, .data = 115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973552, .data = 18606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973550, .data = 54387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973546, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973548, .data = 58967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13914872, .data = 53647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13914874, .data = 40512, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_10[] = {
		{ .addr = 0x277bfe, .byte = 0x4c },
		{ .addr = 0x277bff, .byte = 0x96 },
		{ .addr = 0x277c00, .byte = 0x3e },
		{ .addr = 0x277c01, .byte = 0x0a },
		{ .addr = 0x277c02, .byte = 0x68 },
		{ .addr = 0x277c03, .byte = 0xbf },
		{ .addr = 0x00000c, .byte = 0x99 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0xe4 },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0x44e42a, .byte = 0x20 },
		{ .addr = 0x44e42b, .byte = 0xcb },
		{ .addr = 0x44e42c, .byte = 0x1c },
		{ .addr = 0x44e42d, .byte = 0x37 }
};

static const SST_RamByte movemw_final_ram_10[] = {
		{ .addr = 0x277bfe, .byte = 0x4c },
		{ .addr = 0x277bff, .byte = 0x96 },
		{ .addr = 0x277c00, .byte = 0x3e },
		{ .addr = 0x277c01, .byte = 0x0a },
		{ .addr = 0x277c02, .byte = 0x68 },
		{ .addr = 0x277c03, .byte = 0xbf },
		{ .addr = 0xe99654, .byte = 0x7c },
		{ .addr = 0xe99655, .byte = 0x04 },
		{ .addr = 0xe99650, .byte = 0x83 },
		{ .addr = 0xe99651, .byte = 0x00 },
		{ .addr = 0xe99652, .byte = 0x00 },
		{ .addr = 0xe99653, .byte = 0x27 },
		{ .addr = 0xe9964e, .byte = 0x4c },
		{ .addr = 0xe9964f, .byte = 0x96 },
		{ .addr = 0xe9964c, .byte = 0x6f },
		{ .addr = 0xe9964d, .byte = 0x1b },
		{ .addr = 0xe99648, .byte = 0x4c },
		{ .addr = 0xe99649, .byte = 0x91 },
		{ .addr = 0xe9964a, .byte = 0xa0 },
		{ .addr = 0xe9964b, .byte = 0x7f },
		{ .addr = 0x00000c, .byte = 0x99 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0xe4 },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0x44e42a, .byte = 0x20 },
		{ .addr = 0x44e42b, .byte = 0xcb },
		{ .addr = 0x44e42c, .byte = 0x1c },
		{ .addr = 0x44e42d, .byte = 0x37 }
};

static const SST_Transaction movemw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2587650, .data = 26815, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8351514, .data = 56333, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15308372, .data = 31748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15308368, .data = 33536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15308370, .data = 39, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15308366, .data = 19606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15308364, .data = 28443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15308360, .data = 19601, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15308362, .data = 41087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4514858, .data = 8395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4514860, .data = 7223, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_11[] = {
		{ .addr = 0x122716, .byte = 0x4c },
		{ .addr = 0x122717, .byte = 0x92 },
		{ .addr = 0x122718, .byte = 0xbb },
		{ .addr = 0x122719, .byte = 0x17 },
		{ .addr = 0x12271a, .byte = 0x44 },
		{ .addr = 0x12271b, .byte = 0x1b },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0xd4 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0xead408, .byte = 0xc5 },
		{ .addr = 0xead409, .byte = 0x53 },
		{ .addr = 0xead40a, .byte = 0x1a },
		{ .addr = 0xead40b, .byte = 0x8d }
};

static const SST_RamByte movemw_final_ram_11[] = {
		{ .addr = 0x122716, .byte = 0x4c },
		{ .addr = 0x122717, .byte = 0x92 },
		{ .addr = 0x122718, .byte = 0xbb },
		{ .addr = 0x122719, .byte = 0x17 },
		{ .addr = 0x12271a, .byte = 0x44 },
		{ .addr = 0x12271b, .byte = 0x1b },
		{ .addr = 0x9eb106, .byte = 0x27 },
		{ .addr = 0x9eb107, .byte = 0x1c },
		{ .addr = 0x9eb102, .byte = 0x26 },
		{ .addr = 0x9eb103, .byte = 0x1c },
		{ .addr = 0x9eb104, .byte = 0x00 },
		{ .addr = 0x9eb105, .byte = 0x12 },
		{ .addr = 0x9eb100, .byte = 0x4c },
		{ .addr = 0x9eb101, .byte = 0x92 },
		{ .addr = 0x9eb0fe, .byte = 0x8a },
		{ .addr = 0x9eb0ff, .byte = 0x93 },
		{ .addr = 0x9eb0fa, .byte = 0x4c },
		{ .addr = 0x9eb0fb, .byte = 0x95 },
		{ .addr = 0x9eb0fc, .byte = 0x31 },
		{ .addr = 0x9eb0fd, .byte = 0x41 },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0xd4 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0xead408, .byte = 0xc5 },
		{ .addr = 0xead409, .byte = 0x53 },
		{ .addr = 0xead40a, .byte = 0x1a },
		{ .addr = 0xead40b, .byte = 0x8d }
};

static const SST_Transaction movemw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1189658, .data = 17435, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4295314, .data = 5973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10400006, .data = 10012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10400002, .data = 9756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10400004, .data = 18, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10400000, .data = 19602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10399998, .data = 35475, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10399994, .data = 19605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10399996, .data = 12609, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 14058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15389704, .data = 50515, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15389706, .data = 6797, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_12[] = {
		{ .addr = 0x3d30ac, .byte = 0x4c },
		{ .addr = 0x3d30ad, .byte = 0x9b },
		{ .addr = 0x3d30ae, .byte = 0x1b },
		{ .addr = 0x3d30af, .byte = 0x9d },
		{ .addr = 0x3d30b0, .byte = 0x83 },
		{ .addr = 0x3d30b1, .byte = 0x93 },
		{ .addr = 0xc02e48, .byte = 0x0a },
		{ .addr = 0xc02e49, .byte = 0x78 },
		{ .addr = 0xc02e4a, .byte = 0x7f },
		{ .addr = 0xc02e4b, .byte = 0x50 },
		{ .addr = 0xc02e4c, .byte = 0x08 },
		{ .addr = 0xc02e4d, .byte = 0x28 },
		{ .addr = 0xc02e4e, .byte = 0xe6 },
		{ .addr = 0xc02e4f, .byte = 0x57 },
		{ .addr = 0xc02e50, .byte = 0xe8 },
		{ .addr = 0xc02e51, .byte = 0xc5 },
		{ .addr = 0xc02e52, .byte = 0x0e },
		{ .addr = 0xc02e53, .byte = 0x4c },
		{ .addr = 0xc02e54, .byte = 0x11 },
		{ .addr = 0xc02e55, .byte = 0x6b },
		{ .addr = 0xc02e56, .byte = 0x66 },
		{ .addr = 0xc02e57, .byte = 0xbd },
		{ .addr = 0xc02e58, .byte = 0x42 },
		{ .addr = 0xc02e59, .byte = 0xd6 },
		{ .addr = 0xc02e5a, .byte = 0x62 },
		{ .addr = 0xc02e5b, .byte = 0x8e },
		{ .addr = 0x3d30b2, .byte = 0xca },
		{ .addr = 0x3d30b3, .byte = 0xe5 }
};

static const SST_RamByte movemw_final_ram_12[] = {
		{ .addr = 0x3d30ac, .byte = 0x4c },
		{ .addr = 0x3d30ad, .byte = 0x9b },
		{ .addr = 0x3d30ae, .byte = 0x1b },
		{ .addr = 0x3d30af, .byte = 0x9d },
		{ .addr = 0x3d30b0, .byte = 0x83 },
		{ .addr = 0x3d30b1, .byte = 0x93 },
		{ .addr = 0xc02e48, .byte = 0x0a },
		{ .addr = 0xc02e49, .byte = 0x78 },
		{ .addr = 0xc02e4a, .byte = 0x7f },
		{ .addr = 0xc02e4b, .byte = 0x50 },
		{ .addr = 0xc02e4c, .byte = 0x08 },
		{ .addr = 0xc02e4d, .byte = 0x28 },
		{ .addr = 0xc02e4e, .byte = 0xe6 },
		{ .addr = 0xc02e4f, .byte = 0x57 },
		{ .addr = 0xc02e50, .byte = 0xe8 },
		{ .addr = 0xc02e51, .byte = 0xc5 },
		{ .addr = 0xc02e52, .byte = 0x0e },
		{ .addr = 0xc02e53, .byte = 0x4c },
		{ .addr = 0xc02e54, .byte = 0x11 },
		{ .addr = 0xc02e55, .byte = 0x6b },
		{ .addr = 0xc02e56, .byte = 0x66 },
		{ .addr = 0xc02e57, .byte = 0xbd },
		{ .addr = 0xc02e58, .byte = 0x42 },
		{ .addr = 0xc02e59, .byte = 0xd6 },
		{ .addr = 0xc02e5a, .byte = 0x62 },
		{ .addr = 0xc02e5b, .byte = 0x8e },
		{ .addr = 0x3d30b2, .byte = 0xca },
		{ .addr = 0x3d30b3, .byte = 0xe5 }
};

static const SST_Transaction movemw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4010160, .data = 33683, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594760, .data = 2680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594762, .data = 32592, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594764, .data = 2088, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594766, .data = 58967, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594768, .data = 59589, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594770, .data = 3660, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594772, .data = 4459, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594774, .data = 26301, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594776, .data = 17110, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12594778, .data = 25230, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4010162, .data = 51941, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_13[] = {
		{ .addr = 0xa5f24a, .byte = 0x4c },
		{ .addr = 0xa5f24b, .byte = 0x90 },
		{ .addr = 0xa5f24c, .byte = 0x2a },
		{ .addr = 0xa5f24d, .byte = 0xdb },
		{ .addr = 0xa5f24e, .byte = 0xf7 },
		{ .addr = 0xa5f24f, .byte = 0x5f },
		{ .addr = 0x7d0928, .byte = 0x46 },
		{ .addr = 0x7d0929, .byte = 0x17 },
		{ .addr = 0x7d092a, .byte = 0xd0 },
		{ .addr = 0x7d092b, .byte = 0x27 },
		{ .addr = 0x7d092c, .byte = 0x47 },
		{ .addr = 0x7d092d, .byte = 0x01 },
		{ .addr = 0x7d092e, .byte = 0x9b },
		{ .addr = 0x7d092f, .byte = 0x96 },
		{ .addr = 0x7d0930, .byte = 0x09 },
		{ .addr = 0x7d0931, .byte = 0xdd },
		{ .addr = 0x7d0932, .byte = 0xda },
		{ .addr = 0x7d0933, .byte = 0x8b },
		{ .addr = 0x7d0934, .byte = 0xcb },
		{ .addr = 0x7d0935, .byte = 0x46 },
		{ .addr = 0x7d0936, .byte = 0x62 },
		{ .addr = 0x7d0937, .byte = 0x95 },
		{ .addr = 0x7d0938, .byte = 0xa2 },
		{ .addr = 0x7d0939, .byte = 0xc1 },
		{ .addr = 0x7d093a, .byte = 0xec },
		{ .addr = 0x7d093b, .byte = 0x94 },
		{ .addr = 0xa5f250, .byte = 0x07 },
		{ .addr = 0xa5f251, .byte = 0xbc }
};

static const SST_RamByte movemw_final_ram_13[] = {
		{ .addr = 0xa5f24a, .byte = 0x4c },
		{ .addr = 0xa5f24b, .byte = 0x90 },
		{ .addr = 0xa5f24c, .byte = 0x2a },
		{ .addr = 0xa5f24d, .byte = 0xdb },
		{ .addr = 0xa5f24e, .byte = 0xf7 },
		{ .addr = 0xa5f24f, .byte = 0x5f },
		{ .addr = 0x7d0928, .byte = 0x46 },
		{ .addr = 0x7d0929, .byte = 0x17 },
		{ .addr = 0x7d092a, .byte = 0xd0 },
		{ .addr = 0x7d092b, .byte = 0x27 },
		{ .addr = 0x7d092c, .byte = 0x47 },
		{ .addr = 0x7d092d, .byte = 0x01 },
		{ .addr = 0x7d092e, .byte = 0x9b },
		{ .addr = 0x7d092f, .byte = 0x96 },
		{ .addr = 0x7d0930, .byte = 0x09 },
		{ .addr = 0x7d0931, .byte = 0xdd },
		{ .addr = 0x7d0932, .byte = 0xda },
		{ .addr = 0x7d0933, .byte = 0x8b },
		{ .addr = 0x7d0934, .byte = 0xcb },
		{ .addr = 0x7d0935, .byte = 0x46 },
		{ .addr = 0x7d0936, .byte = 0x62 },
		{ .addr = 0x7d0937, .byte = 0x95 },
		{ .addr = 0x7d0938, .byte = 0xa2 },
		{ .addr = 0x7d0939, .byte = 0xc1 },
		{ .addr = 0x7d093a, .byte = 0xec },
		{ .addr = 0x7d093b, .byte = 0x94 },
		{ .addr = 0xa5f250, .byte = 0x07 },
		{ .addr = 0xa5f251, .byte = 0xbc }
};

static const SST_Transaction movemw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10875470, .data = 63327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194344, .data = 17943, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194346, .data = 53287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194348, .data = 18177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194350, .data = 39830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194352, .data = 2525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194354, .data = 55947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194356, .data = 52038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194358, .data = 25237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194360, .data = 41665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8194362, .data = 60564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10875472, .data = 1980, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_14[] = {
		{ .addr = 0xf6bf68, .byte = 0x4c },
		{ .addr = 0xf6bf69, .byte = 0xb9 },
		{ .addr = 0xf6bf6a, .byte = 0x81 },
		{ .addr = 0xf6bf6b, .byte = 0x3b },
		{ .addr = 0xf6bf6c, .byte = 0x5d },
		{ .addr = 0xf6bf6d, .byte = 0xf4 },
		{ .addr = 0xf6bf6e, .byte = 0x5a },
		{ .addr = 0xf6bf6f, .byte = 0x44 },
		{ .addr = 0xf6bf70, .byte = 0x22 },
		{ .addr = 0xf6bf71, .byte = 0xb3 },
		{ .addr = 0xf45a44, .byte = 0xfb },
		{ .addr = 0xf45a45, .byte = 0x82 },
		{ .addr = 0xf45a46, .byte = 0x8c },
		{ .addr = 0xf45a47, .byte = 0xdd },
		{ .addr = 0xf45a48, .byte = 0x31 },
		{ .addr = 0xf45a49, .byte = 0xc4 },
		{ .addr = 0xf45a4a, .byte = 0xe0 },
		{ .addr = 0xf45a4b, .byte = 0x49 },
		{ .addr = 0xf45a4c, .byte = 0xb1 },
		{ .addr = 0xf45a4d, .byte = 0x6d },
		{ .addr = 0xf45a4e, .byte = 0x31 },
		{ .addr = 0xf45a4f, .byte = 0x57 },
		{ .addr = 0xf45a50, .byte = 0xe7 },
		{ .addr = 0xf45a51, .byte = 0xbb },
		{ .addr = 0xf45a52, .byte = 0x03 },
		{ .addr = 0xf45a53, .byte = 0xe6 },
		{ .addr = 0xf6bf72, .byte = 0xe7 },
		{ .addr = 0xf6bf73, .byte = 0xb2 }
};

static const SST_RamByte movemw_final_ram_14[] = {
		{ .addr = 0xf6bf68, .byte = 0x4c },
		{ .addr = 0xf6bf69, .byte = 0xb9 },
		{ .addr = 0xf6bf6a, .byte = 0x81 },
		{ .addr = 0xf6bf6b, .byte = 0x3b },
		{ .addr = 0xf6bf6c, .byte = 0x5d },
		{ .addr = 0xf6bf6d, .byte = 0xf4 },
		{ .addr = 0xf6bf6e, .byte = 0x5a },
		{ .addr = 0xf6bf6f, .byte = 0x44 },
		{ .addr = 0xf6bf70, .byte = 0x22 },
		{ .addr = 0xf6bf71, .byte = 0xb3 },
		{ .addr = 0xf45a44, .byte = 0xfb },
		{ .addr = 0xf45a45, .byte = 0x82 },
		{ .addr = 0xf45a46, .byte = 0x8c },
		{ .addr = 0xf45a47, .byte = 0xdd },
		{ .addr = 0xf45a48, .byte = 0x31 },
		{ .addr = 0xf45a49, .byte = 0xc4 },
		{ .addr = 0xf45a4a, .byte = 0xe0 },
		{ .addr = 0xf45a4b, .byte = 0x49 },
		{ .addr = 0xf45a4c, .byte = 0xb1 },
		{ .addr = 0xf45a4d, .byte = 0x6d },
		{ .addr = 0xf45a4e, .byte = 0x31 },
		{ .addr = 0xf45a4f, .byte = 0x57 },
		{ .addr = 0xf45a50, .byte = 0xe7 },
		{ .addr = 0xf45a51, .byte = 0xbb },
		{ .addr = 0xf45a52, .byte = 0x03 },
		{ .addr = 0xf45a53, .byte = 0xe6 },
		{ .addr = 0xf6bf72, .byte = 0xe7 },
		{ .addr = 0xf6bf73, .byte = 0xb2 }
};

static const SST_Transaction movemw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16170860, .data = 24052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16170862, .data = 23108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16170864, .data = 8883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013892, .data = 64386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013894, .data = 36061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013896, .data = 12740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013898, .data = 57417, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013900, .data = 45421, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013902, .data = 12631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013904, .data = 59323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16013906, .data = 998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16170866, .data = 59314, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_15[] = {
		{ .addr = 0x741066, .byte = 0x4c },
		{ .addr = 0x741067, .byte = 0x91 },
		{ .addr = 0x741068, .byte = 0xe9 },
		{ .addr = 0x741069, .byte = 0x99 },
		{ .addr = 0x74106a, .byte = 0x4d },
		{ .addr = 0x74106b, .byte = 0xee },
		{ .addr = 0x12c560, .byte = 0xe5 },
		{ .addr = 0x12c561, .byte = 0xc8 },
		{ .addr = 0x12c562, .byte = 0xf8 },
		{ .addr = 0x12c563, .byte = 0xbe },
		{ .addr = 0x12c564, .byte = 0xd1 },
		{ .addr = 0x12c565, .byte = 0x00 },
		{ .addr = 0x12c566, .byte = 0xff },
		{ .addr = 0x12c567, .byte = 0xcc },
		{ .addr = 0x12c568, .byte = 0x61 },
		{ .addr = 0x12c569, .byte = 0x08 },
		{ .addr = 0x12c56a, .byte = 0x4d },
		{ .addr = 0x12c56b, .byte = 0x6b },
		{ .addr = 0x12c56c, .byte = 0x73 },
		{ .addr = 0x12c56d, .byte = 0xeb },
		{ .addr = 0x12c56e, .byte = 0xfd },
		{ .addr = 0x12c56f, .byte = 0xcf },
		{ .addr = 0x12c570, .byte = 0xa9 },
		{ .addr = 0x12c571, .byte = 0x5a },
		{ .addr = 0x12c572, .byte = 0xef },
		{ .addr = 0x12c573, .byte = 0xf6 },
		{ .addr = 0x74106c, .byte = 0x53 },
		{ .addr = 0x74106d, .byte = 0x4b }
};

static const SST_RamByte movemw_final_ram_15[] = {
		{ .addr = 0x741066, .byte = 0x4c },
		{ .addr = 0x741067, .byte = 0x91 },
		{ .addr = 0x741068, .byte = 0xe9 },
		{ .addr = 0x741069, .byte = 0x99 },
		{ .addr = 0x74106a, .byte = 0x4d },
		{ .addr = 0x74106b, .byte = 0xee },
		{ .addr = 0x12c560, .byte = 0xe5 },
		{ .addr = 0x12c561, .byte = 0xc8 },
		{ .addr = 0x12c562, .byte = 0xf8 },
		{ .addr = 0x12c563, .byte = 0xbe },
		{ .addr = 0x12c564, .byte = 0xd1 },
		{ .addr = 0x12c565, .byte = 0x00 },
		{ .addr = 0x12c566, .byte = 0xff },
		{ .addr = 0x12c567, .byte = 0xcc },
		{ .addr = 0x12c568, .byte = 0x61 },
		{ .addr = 0x12c569, .byte = 0x08 },
		{ .addr = 0x12c56a, .byte = 0x4d },
		{ .addr = 0x12c56b, .byte = 0x6b },
		{ .addr = 0x12c56c, .byte = 0x73 },
		{ .addr = 0x12c56d, .byte = 0xeb },
		{ .addr = 0x12c56e, .byte = 0xfd },
		{ .addr = 0x12c56f, .byte = 0xcf },
		{ .addr = 0x12c570, .byte = 0xa9 },
		{ .addr = 0x12c571, .byte = 0x5a },
		{ .addr = 0x12c572, .byte = 0xef },
		{ .addr = 0x12c573, .byte = 0xf6 },
		{ .addr = 0x74106c, .byte = 0x53 },
		{ .addr = 0x74106d, .byte = 0x4b }
};

static const SST_Transaction movemw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7606378, .data = 19950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230176, .data = 58824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230178, .data = 63678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230180, .data = 53504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230182, .data = 65484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230184, .data = 24840, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230186, .data = 19819, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230188, .data = 29675, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230190, .data = 64975, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230192, .data = 43354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1230194, .data = 61430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7606380, .data = 21323, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_16[] = {
		{ .addr = 0x436ae8, .byte = 0x48 },
		{ .addr = 0x436ae9, .byte = 0x92 },
		{ .addr = 0x436aea, .byte = 0x71 },
		{ .addr = 0x436aeb, .byte = 0x06 },
		{ .addr = 0x436aec, .byte = 0x66 },
		{ .addr = 0x436aed, .byte = 0x5c },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0x26 },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x062680, .byte = 0xf4 },
		{ .addr = 0x062681, .byte = 0x4b },
		{ .addr = 0x062682, .byte = 0x5c },
		{ .addr = 0x062683, .byte = 0xf4 }
};

static const SST_RamByte movemw_final_ram_16[] = {
		{ .addr = 0x436ae8, .byte = 0x48 },
		{ .addr = 0x436ae9, .byte = 0x92 },
		{ .addr = 0x436aea, .byte = 0x71 },
		{ .addr = 0x436aeb, .byte = 0x06 },
		{ .addr = 0x436aec, .byte = 0x66 },
		{ .addr = 0x436aed, .byte = 0x5c },
		{ .addr = 0xec22ac, .byte = 0x6a },
		{ .addr = 0xec22ad, .byte = 0xee },
		{ .addr = 0xec22a8, .byte = 0x02 },
		{ .addr = 0xec22a9, .byte = 0x04 },
		{ .addr = 0xec22aa, .byte = 0x00 },
		{ .addr = 0xec22ab, .byte = 0x43 },
		{ .addr = 0xec22a6, .byte = 0x48 },
		{ .addr = 0xec22a7, .byte = 0x92 },
		{ .addr = 0xec22a4, .byte = 0x32 },
		{ .addr = 0xec22a5, .byte = 0x23 },
		{ .addr = 0xec22a0, .byte = 0x48 },
		{ .addr = 0xec22a1, .byte = 0x81 },
		{ .addr = 0xec22a2, .byte = 0x83 },
		{ .addr = 0xec22a3, .byte = 0x1a },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0x26 },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x062680, .byte = 0xf4 },
		{ .addr = 0x062681, .byte = 0x4b },
		{ .addr = 0x062682, .byte = 0x5c },
		{ .addr = 0x062683, .byte = 0xf4 }
};

static const SST_Transaction movemw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4418284, .data = 26204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1716770, .data = 24103, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15475372, .data = 27374, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15475368, .data = 516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15475370, .data = 67, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15475366, .data = 18578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15475364, .data = 12835, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15475360, .data = 18561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15475362, .data = 33562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 9856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 403072, .data = 62539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 403074, .data = 23796, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_17[] = {
		{ .addr = 0x35a0c0, .byte = 0x4c },
		{ .addr = 0x35a0c1, .byte = 0x92 },
		{ .addr = 0x35a0c2, .byte = 0x89 },
		{ .addr = 0x35a0c3, .byte = 0xbb },
		{ .addr = 0x35a0c4, .byte = 0x6f },
		{ .addr = 0x35a0c5, .byte = 0xee },
		{ .addr = 0x00000c, .byte = 0x80 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0xce7822, .byte = 0x01 },
		{ .addr = 0xce7823, .byte = 0x5e },
		{ .addr = 0xce7824, .byte = 0xb7 },
		{ .addr = 0xce7825, .byte = 0xac }
};

static const SST_RamByte movemw_final_ram_17[] = {
		{ .addr = 0x35a0c0, .byte = 0x4c },
		{ .addr = 0x35a0c1, .byte = 0x92 },
		{ .addr = 0x35a0c2, .byte = 0x89 },
		{ .addr = 0x35a0c3, .byte = 0xbb },
		{ .addr = 0x35a0c4, .byte = 0x6f },
		{ .addr = 0x35a0c5, .byte = 0xee },
		{ .addr = 0x10875e, .byte = 0xa0 },
		{ .addr = 0x10875f, .byte = 0xc6 },
		{ .addr = 0x10875a, .byte = 0xa0 },
		{ .addr = 0x10875b, .byte = 0x04 },
		{ .addr = 0x10875c, .byte = 0x00 },
		{ .addr = 0x10875d, .byte = 0x35 },
		{ .addr = 0x108758, .byte = 0x4c },
		{ .addr = 0x108759, .byte = 0x92 },
		{ .addr = 0x108756, .byte = 0x03 },
		{ .addr = 0x108757, .byte = 0x69 },
		{ .addr = 0x108752, .byte = 0x4c },
		{ .addr = 0x108753, .byte = 0x95 },
		{ .addr = 0x108754, .byte = 0xcf },
		{ .addr = 0x108755, .byte = 0x2d },
		{ .addr = 0x00000c, .byte = 0x80 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0xce7822, .byte = 0x01 },
		{ .addr = 0xce7823, .byte = 0x5e },
		{ .addr = 0xce7824, .byte = 0xb7 },
		{ .addr = 0xce7825, .byte = 0xac }
};

static const SST_Transaction movemw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3514564, .data = 28654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2949992, .data = 46122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083230, .data = 41158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083226, .data = 40964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083228, .data = 53, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083224, .data = 19602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083222, .data = 873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083218, .data = 19605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083220, .data = 53037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13531170, .data = 350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13531172, .data = 47020, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_18[] = {
		{ .addr = 0x7644e2, .byte = 0x4c },
		{ .addr = 0x7644e3, .byte = 0x95 },
		{ .addr = 0x7644e4, .byte = 0x41 },
		{ .addr = 0x7644e5, .byte = 0xf8 },
		{ .addr = 0x7644e6, .byte = 0x98 },
		{ .addr = 0x7644e7, .byte = 0x98 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0xc4 },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0x5cc4aa, .byte = 0xf6 },
		{ .addr = 0x5cc4ab, .byte = 0x3d },
		{ .addr = 0x5cc4ac, .byte = 0x77 },
		{ .addr = 0x5cc4ad, .byte = 0x15 }
};

static const SST_RamByte movemw_final_ram_18[] = {
		{ .addr = 0x7644e2, .byte = 0x4c },
		{ .addr = 0x7644e3, .byte = 0x95 },
		{ .addr = 0x7644e4, .byte = 0x41 },
		{ .addr = 0x7644e5, .byte = 0xf8 },
		{ .addr = 0x7644e6, .byte = 0x98 },
		{ .addr = 0x7644e7, .byte = 0x98 },
		{ .addr = 0x6dcd46, .byte = 0x44 },
		{ .addr = 0x6dcd47, .byte = 0xe8 },
		{ .addr = 0x6dcd42, .byte = 0x27 },
		{ .addr = 0x6dcd43, .byte = 0x1d },
		{ .addr = 0x6dcd44, .byte = 0x00 },
		{ .addr = 0x6dcd45, .byte = 0x76 },
		{ .addr = 0x6dcd40, .byte = 0x4c },
		{ .addr = 0x6dcd41, .byte = 0x95 },
		{ .addr = 0x6dcd3e, .byte = 0x4a },
		{ .addr = 0x6dcd3f, .byte = 0x7d },
		{ .addr = 0x6dcd3a, .byte = 0x4c },
		{ .addr = 0x6dcd3b, .byte = 0x95 },
		{ .addr = 0x6dcd3c, .byte = 0x70 },
		{ .addr = 0x6dcd3d, .byte = 0x78 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0xc4 },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0x5cc4aa, .byte = 0xf6 },
		{ .addr = 0x5cc4ab, .byte = 0x3d },
		{ .addr = 0x5cc4ac, .byte = 0x77 },
		{ .addr = 0x5cc4ad, .byte = 0x15 }
};

static const SST_Transaction movemw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7750886, .data = 39064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7883388, .data = 19125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7195974, .data = 17640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7195970, .data = 10013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7195972, .data = 118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7195968, .data = 19605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7195966, .data = 19069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7195962, .data = 19605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7195964, .data = 28792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6079658, .data = 63037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6079660, .data = 30485, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_19[] = {
		{ .addr = 0x899ff2, .byte = 0x4c },
		{ .addr = 0x899ff3, .byte = 0xb0 },
		{ .addr = 0x899ff4, .byte = 0xda },
		{ .addr = 0x899ff5, .byte = 0x93 },
		{ .addr = 0x899ff6, .byte = 0x04 },
		{ .addr = 0x899ff7, .byte = 0xae },
		{ .addr = 0x899ff8, .byte = 0x59 },
		{ .addr = 0x899ff9, .byte = 0x89 },
		{ .addr = 0xbc3002, .byte = 0x04 },
		{ .addr = 0xbc3003, .byte = 0x3e },
		{ .addr = 0xbc3004, .byte = 0x06 },
		{ .addr = 0xbc3005, .byte = 0xfa },
		{ .addr = 0xbc3006, .byte = 0x4f },
		{ .addr = 0xbc3007, .byte = 0x03 },
		{ .addr = 0xbc3008, .byte = 0x20 },
		{ .addr = 0xbc3009, .byte = 0xc2 },
		{ .addr = 0xbc300a, .byte = 0x0b },
		{ .addr = 0xbc300b, .byte = 0xa0 },
		{ .addr = 0xbc300c, .byte = 0x40 },
		{ .addr = 0xbc300d, .byte = 0xf3 },
		{ .addr = 0xbc300e, .byte = 0x18 },
		{ .addr = 0xbc300f, .byte = 0x5e },
		{ .addr = 0xbc3010, .byte = 0x7a },
		{ .addr = 0xbc3011, .byte = 0x59 },
		{ .addr = 0xbc3012, .byte = 0x2b },
		{ .addr = 0xbc3013, .byte = 0xc0 },
		{ .addr = 0xbc3014, .byte = 0x40 },
		{ .addr = 0xbc3015, .byte = 0x25 },
		{ .addr = 0x899ffa, .byte = 0x8a },
		{ .addr = 0x899ffb, .byte = 0x63 }
};

static const SST_RamByte movemw_final_ram_19[] = {
		{ .addr = 0x899ff2, .byte = 0x4c },
		{ .addr = 0x899ff3, .byte = 0xb0 },
		{ .addr = 0x899ff4, .byte = 0xda },
		{ .addr = 0x899ff5, .byte = 0x93 },
		{ .addr = 0x899ff6, .byte = 0x04 },
		{ .addr = 0x899ff7, .byte = 0xae },
		{ .addr = 0x899ff8, .byte = 0x59 },
		{ .addr = 0x899ff9, .byte = 0x89 },
		{ .addr = 0xbc3002, .byte = 0x04 },
		{ .addr = 0xbc3003, .byte = 0x3e },
		{ .addr = 0xbc3004, .byte = 0x06 },
		{ .addr = 0xbc3005, .byte = 0xfa },
		{ .addr = 0xbc3006, .byte = 0x4f },
		{ .addr = 0xbc3007, .byte = 0x03 },
		{ .addr = 0xbc3008, .byte = 0x20 },
		{ .addr = 0xbc3009, .byte = 0xc2 },
		{ .addr = 0xbc300a, .byte = 0x0b },
		{ .addr = 0xbc300b, .byte = 0xa0 },
		{ .addr = 0xbc300c, .byte = 0x40 },
		{ .addr = 0xbc300d, .byte = 0xf3 },
		{ .addr = 0xbc300e, .byte = 0x18 },
		{ .addr = 0xbc300f, .byte = 0x5e },
		{ .addr = 0xbc3010, .byte = 0x7a },
		{ .addr = 0xbc3011, .byte = 0x59 },
		{ .addr = 0xbc3012, .byte = 0x2b },
		{ .addr = 0xbc3013, .byte = 0xc0 },
		{ .addr = 0xbc3014, .byte = 0x40 },
		{ .addr = 0xbc3015, .byte = 0x25 },
		{ .addr = 0x899ffa, .byte = 0x8a },
		{ .addr = 0x899ffb, .byte = 0x63 }
};

static const SST_Transaction movemw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9019382, .data = 1198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9019384, .data = 22921, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333058, .data = 1086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333060, .data = 1786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333062, .data = 20227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333064, .data = 8386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333066, .data = 2976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333068, .data = 16627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333070, .data = 6238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333072, .data = 31321, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333074, .data = 11200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333076, .data = 16421, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9019386, .data = 35427, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_20[] = {
		{ .addr = 0x070422, .byte = 0x48 },
		{ .addr = 0x070423, .byte = 0x97 },
		{ .addr = 0x070424, .byte = 0xde },
		{ .addr = 0x070425, .byte = 0xd2 },
		{ .addr = 0x070426, .byte = 0xe6 },
		{ .addr = 0x070427, .byte = 0x9b },
		{ .addr = 0x070428, .byte = 0x25 },
		{ .addr = 0x070429, .byte = 0xf2 }
};

static const SST_RamByte movemw_final_ram_20[] = {
		{ .addr = 0x070422, .byte = 0x48 },
		{ .addr = 0x070423, .byte = 0x97 },
		{ .addr = 0x070424, .byte = 0xde },
		{ .addr = 0x070425, .byte = 0xd2 },
		{ .addr = 0x070426, .byte = 0xe6 },
		{ .addr = 0x070427, .byte = 0x9b },
		{ .addr = 0x21b6c4, .byte = 0xff },
		{ .addr = 0x21b6c5, .byte = 0x53 },
		{ .addr = 0x21b6c6, .byte = 0x03 },
		{ .addr = 0x21b6c7, .byte = 0x7d },
		{ .addr = 0x21b6c8, .byte = 0x1f },
		{ .addr = 0x21b6c9, .byte = 0xe0 },
		{ .addr = 0x21b6ca, .byte = 0x60 },
		{ .addr = 0x21b6cb, .byte = 0x95 },
		{ .addr = 0x21b6cc, .byte = 0xf7 },
		{ .addr = 0x21b6cd, .byte = 0xb6 },
		{ .addr = 0x21b6ce, .byte = 0xcb },
		{ .addr = 0x21b6cf, .byte = 0xc5 },
		{ .addr = 0x21b6d0, .byte = 0x66 },
		{ .addr = 0x21b6d1, .byte = 0xdc },
		{ .addr = 0x21b6d2, .byte = 0xf8 },
		{ .addr = 0x21b6d3, .byte = 0x18 },
		{ .addr = 0x21b6d4, .byte = 0x5d },
		{ .addr = 0x21b6d5, .byte = 0x9f },
		{ .addr = 0x21b6d6, .byte = 0xb6 },
		{ .addr = 0x21b6d7, .byte = 0xc4 },
		{ .addr = 0x070428, .byte = 0x25 },
		{ .addr = 0x070429, .byte = 0xf2 }
};

static const SST_Transaction movemw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 459814, .data = 59035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209476, .data = 65363, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209478, .data = 893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209480, .data = 8160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209482, .data = 24725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209484, .data = 63414, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209486, .data = 52165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209488, .data = 26332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209490, .data = 63512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209492, .data = 23967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2209494, .data = 46788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 459816, .data = 9714, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_21[] = {
		{ .addr = 0xd90c2a, .byte = 0x48 },
		{ .addr = 0xd90c2b, .byte = 0xb3 },
		{ .addr = 0xd90c2c, .byte = 0x59 },
		{ .addr = 0xd90c2d, .byte = 0xfa },
		{ .addr = 0xd90c2e, .byte = 0x2e },
		{ .addr = 0xd90c2f, .byte = 0x35 },
		{ .addr = 0xd90c30, .byte = 0xc4 },
		{ .addr = 0xd90c31, .byte = 0x95 },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0x22e08c, .byte = 0x78 },
		{ .addr = 0x22e08d, .byte = 0x0d },
		{ .addr = 0x22e08e, .byte = 0x61 },
		{ .addr = 0x22e08f, .byte = 0x11 }
};

static const SST_RamByte movemw_final_ram_21[] = {
		{ .addr = 0xd90c2a, .byte = 0x48 },
		{ .addr = 0xd90c2b, .byte = 0xb3 },
		{ .addr = 0xd90c2c, .byte = 0x59 },
		{ .addr = 0xd90c2d, .byte = 0xfa },
		{ .addr = 0xd90c2e, .byte = 0x2e },
		{ .addr = 0xd90c2f, .byte = 0x35 },
		{ .addr = 0xd90c30, .byte = 0xc4 },
		{ .addr = 0xd90c31, .byte = 0x95 },
		{ .addr = 0x9db694, .byte = 0x0c },
		{ .addr = 0x9db695, .byte = 0x32 },
		{ .addr = 0x9db690, .byte = 0xa4 },
		{ .addr = 0x9db691, .byte = 0x11 },
		{ .addr = 0x9db692, .byte = 0x00 },
		{ .addr = 0x9db693, .byte = 0xd9 },
		{ .addr = 0x9db68e, .byte = 0x48 },
		{ .addr = 0x9db68f, .byte = 0xb3 },
		{ .addr = 0x9db68c, .byte = 0x41 },
		{ .addr = 0x9db68d, .byte = 0x61 },
		{ .addr = 0x9db688, .byte = 0x48 },
		{ .addr = 0x9db689, .byte = 0xa5 },
		{ .addr = 0x9db68a, .byte = 0x44 },
		{ .addr = 0x9db68b, .byte = 0x58 },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0x22e08c, .byte = 0x78 },
		{ .addr = 0x22e08d, .byte = 0x0d },
		{ .addr = 0x22e08e, .byte = 0x61 },
		{ .addr = 0x22e08f, .byte = 0x11 }
};

static const SST_Transaction movemw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14224430, .data = 11829, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14224432, .data = 50325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5783904, .data = 23485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10335892, .data = 3122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10335888, .data = 42001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10335890, .data = 217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10335886, .data = 18611, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10335884, .data = 16737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10335880, .data = 18597, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10335882, .data = 17496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2285708, .data = 30733, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2285710, .data = 24849, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_22[] = {
		{ .addr = 0x73d55c, .byte = 0x4c },
		{ .addr = 0x73d55d, .byte = 0xac },
		{ .addr = 0x73d55e, .byte = 0x9f },
		{ .addr = 0x73d55f, .byte = 0xf0 },
		{ .addr = 0x73d560, .byte = 0x44 },
		{ .addr = 0x73d561, .byte = 0xd7 },
		{ .addr = 0x73d562, .byte = 0xbb },
		{ .addr = 0x73d563, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0xb0 },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0xaf },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0x20af0a, .byte = 0xef },
		{ .addr = 0x20af0b, .byte = 0x76 },
		{ .addr = 0x20af0c, .byte = 0xf5 },
		{ .addr = 0x20af0d, .byte = 0x3a }
};

static const SST_RamByte movemw_final_ram_22[] = {
		{ .addr = 0x73d55c, .byte = 0x4c },
		{ .addr = 0x73d55d, .byte = 0xac },
		{ .addr = 0x73d55e, .byte = 0x9f },
		{ .addr = 0x73d55f, .byte = 0xf0 },
		{ .addr = 0x73d560, .byte = 0x44 },
		{ .addr = 0x73d561, .byte = 0xd7 },
		{ .addr = 0x73d562, .byte = 0xbb },
		{ .addr = 0x73d563, .byte = 0x09 },
		{ .addr = 0x203502, .byte = 0xd5 },
		{ .addr = 0x203503, .byte = 0x64 },
		{ .addr = 0x2034fe, .byte = 0x03 },
		{ .addr = 0x2034ff, .byte = 0x1f },
		{ .addr = 0x203500, .byte = 0x00 },
		{ .addr = 0x203501, .byte = 0x73 },
		{ .addr = 0x2034fc, .byte = 0x4c },
		{ .addr = 0x2034fd, .byte = 0xac },
		{ .addr = 0x2034fa, .byte = 0xf7 },
		{ .addr = 0x2034fb, .byte = 0x47 },
		{ .addr = 0x2034f6, .byte = 0x4c },
		{ .addr = 0x2034f7, .byte = 0xb1 },
		{ .addr = 0x2034f8, .byte = 0x7b },
		{ .addr = 0x2034f9, .byte = 0x3f },
		{ .addr = 0x00000c, .byte = 0xb0 },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0xaf },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0x20af0a, .byte = 0xef },
		{ .addr = 0x20af0b, .byte = 0x76 },
		{ .addr = 0x20af0c, .byte = 0xf5 },
		{ .addr = 0x20af0d, .byte = 0x3a }
};

static const SST_Transaction movemw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7591264, .data = 17623, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7591266, .data = 47881, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4192070, .data = 54294, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2110722, .data = 54628, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2110718, .data = 799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2110720, .data = 115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2110716, .data = 19628, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2110714, .data = 63303, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2110710, .data = 19633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2110712, .data = 31551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2141962, .data = 61302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2141964, .data = 62778, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_23[] = {
		{ .addr = 0x7ceab6, .byte = 0x4c },
		{ .addr = 0x7ceab7, .byte = 0xb7 },
		{ .addr = 0x7ceab8, .byte = 0x89 },
		{ .addr = 0x7ceab9, .byte = 0xa5 },
		{ .addr = 0x7ceaba, .byte = 0xcd },
		{ .addr = 0x7ceabb, .byte = 0x93 },
		{ .addr = 0x7ceabc, .byte = 0xf3 },
		{ .addr = 0x7ceabd, .byte = 0x10 },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0xbe32ae, .byte = 0xbc },
		{ .addr = 0xbe32af, .byte = 0x3b },
		{ .addr = 0xbe32b0, .byte = 0x82 },
		{ .addr = 0xbe32b1, .byte = 0x9f }
};

static const SST_RamByte movemw_final_ram_23[] = {
		{ .addr = 0x7ceab6, .byte = 0x4c },
		{ .addr = 0x7ceab7, .byte = 0xb7 },
		{ .addr = 0x7ceab8, .byte = 0x89 },
		{ .addr = 0x7ceab9, .byte = 0xa5 },
		{ .addr = 0x7ceaba, .byte = 0xcd },
		{ .addr = 0x7ceabb, .byte = 0x93 },
		{ .addr = 0x7ceabc, .byte = 0xf3 },
		{ .addr = 0x7ceabd, .byte = 0x10 },
		{ .addr = 0x0eea1c, .byte = 0xea },
		{ .addr = 0x0eea1d, .byte = 0xbe },
		{ .addr = 0x0eea18, .byte = 0x07 },
		{ .addr = 0x0eea19, .byte = 0x03 },
		{ .addr = 0x0eea1a, .byte = 0x00 },
		{ .addr = 0x0eea1b, .byte = 0x7c },
		{ .addr = 0x0eea16, .byte = 0x4c },
		{ .addr = 0x0eea17, .byte = 0xb7 },
		{ .addr = 0x0eea14, .byte = 0xb9 },
		{ .addr = 0x0eea15, .byte = 0xa1 },
		{ .addr = 0x0eea10, .byte = 0x4c },
		{ .addr = 0x0eea11, .byte = 0xb1 },
		{ .addr = 0x0eea12, .byte = 0x81 },
		{ .addr = 0x0eea13, .byte = 0x52 },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0xbe32ae, .byte = 0xbc },
		{ .addr = 0xbe32af, .byte = 0x3b },
		{ .addr = 0xbe32b0, .byte = 0x82 },
		{ .addr = 0xbe32b1, .byte = 0x9f }
};

static const SST_Transaction movemw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8186554, .data = 52627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8186556, .data = 62224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5421472, .data = 25170, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 977436, .data = 60094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 977432, .data = 1795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 977434, .data = 124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 977430, .data = 19639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 977428, .data = 47521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 977424, .data = 19633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 977426, .data = 33106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8894, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12464814, .data = 48187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12464816, .data = 33439, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_24[] = {
		{ .addr = 0x807424, .byte = 0x4c },
		{ .addr = 0x807425, .byte = 0x9a },
		{ .addr = 0x807426, .byte = 0xde },
		{ .addr = 0x807427, .byte = 0xfd },
		{ .addr = 0x807428, .byte = 0x20 },
		{ .addr = 0x807429, .byte = 0x0b },
		{ .addr = 0xbb68e4, .byte = 0x5b },
		{ .addr = 0xbb68e5, .byte = 0xe3 },
		{ .addr = 0xbb68e6, .byte = 0x42 },
		{ .addr = 0xbb68e7, .byte = 0x8f },
		{ .addr = 0xbb68e8, .byte = 0xb3 },
		{ .addr = 0xbb68e9, .byte = 0xd5 },
		{ .addr = 0xbb68ea, .byte = 0xf0 },
		{ .addr = 0xbb68eb, .byte = 0xb3 },
		{ .addr = 0xbb68ec, .byte = 0x99 },
		{ .addr = 0xbb68ed, .byte = 0xf2 },
		{ .addr = 0xbb68ee, .byte = 0x0a },
		{ .addr = 0xbb68ef, .byte = 0xe6 },
		{ .addr = 0xbb68f0, .byte = 0xaf },
		{ .addr = 0xbb68f1, .byte = 0x9a },
		{ .addr = 0xbb68f2, .byte = 0x5e },
		{ .addr = 0xbb68f3, .byte = 0x47 },
		{ .addr = 0xbb68f4, .byte = 0x1d },
		{ .addr = 0xbb68f5, .byte = 0xcf },
		{ .addr = 0xbb68f6, .byte = 0x16 },
		{ .addr = 0xbb68f7, .byte = 0x46 },
		{ .addr = 0xbb68f8, .byte = 0xc0 },
		{ .addr = 0xbb68f9, .byte = 0x28 },
		{ .addr = 0xbb68fa, .byte = 0x9b },
		{ .addr = 0xbb68fb, .byte = 0x29 },
		{ .addr = 0xbb68fc, .byte = 0x04 },
		{ .addr = 0xbb68fd, .byte = 0xe9 },
		{ .addr = 0xbb68fe, .byte = 0xe5 },
		{ .addr = 0xbb68ff, .byte = 0xf2 },
		{ .addr = 0x80742a, .byte = 0xf8 },
		{ .addr = 0x80742b, .byte = 0xee }
};

static const SST_RamByte movemw_final_ram_24[] = {
		{ .addr = 0x807424, .byte = 0x4c },
		{ .addr = 0x807425, .byte = 0x9a },
		{ .addr = 0x807426, .byte = 0xde },
		{ .addr = 0x807427, .byte = 0xfd },
		{ .addr = 0x807428, .byte = 0x20 },
		{ .addr = 0x807429, .byte = 0x0b },
		{ .addr = 0xbb68e4, .byte = 0x5b },
		{ .addr = 0xbb68e5, .byte = 0xe3 },
		{ .addr = 0xbb68e6, .byte = 0x42 },
		{ .addr = 0xbb68e7, .byte = 0x8f },
		{ .addr = 0xbb68e8, .byte = 0xb3 },
		{ .addr = 0xbb68e9, .byte = 0xd5 },
		{ .addr = 0xbb68ea, .byte = 0xf0 },
		{ .addr = 0xbb68eb, .byte = 0xb3 },
		{ .addr = 0xbb68ec, .byte = 0x99 },
		{ .addr = 0xbb68ed, .byte = 0xf2 },
		{ .addr = 0xbb68ee, .byte = 0x0a },
		{ .addr = 0xbb68ef, .byte = 0xe6 },
		{ .addr = 0xbb68f0, .byte = 0xaf },
		{ .addr = 0xbb68f1, .byte = 0x9a },
		{ .addr = 0xbb68f2, .byte = 0x5e },
		{ .addr = 0xbb68f3, .byte = 0x47 },
		{ .addr = 0xbb68f4, .byte = 0x1d },
		{ .addr = 0xbb68f5, .byte = 0xcf },
		{ .addr = 0xbb68f6, .byte = 0x16 },
		{ .addr = 0xbb68f7, .byte = 0x46 },
		{ .addr = 0xbb68f8, .byte = 0xc0 },
		{ .addr = 0xbb68f9, .byte = 0x28 },
		{ .addr = 0xbb68fa, .byte = 0x9b },
		{ .addr = 0xbb68fb, .byte = 0x29 },
		{ .addr = 0xbb68fc, .byte = 0x04 },
		{ .addr = 0xbb68fd, .byte = 0xe9 },
		{ .addr = 0xbb68fe, .byte = 0xe5 },
		{ .addr = 0xbb68ff, .byte = 0xf2 },
		{ .addr = 0x80742a, .byte = 0xf8 },
		{ .addr = 0x80742b, .byte = 0xee }
};

static const SST_Transaction movemw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8418344, .data = 8203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282084, .data = 23523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282086, .data = 17039, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282088, .data = 46037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282090, .data = 61619, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282092, .data = 39410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282094, .data = 2790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282096, .data = 44954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282098, .data = 24135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282100, .data = 7631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282102, .data = 5702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282104, .data = 49192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282106, .data = 39721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282108, .data = 1257, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12282110, .data = 58866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8418346, .data = 63726, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_25[] = {
		{ .addr = 0x4b786a, .byte = 0x4c },
		{ .addr = 0x4b786b, .byte = 0x94 },
		{ .addr = 0x4b786c, .byte = 0x3a },
		{ .addr = 0x4b786d, .byte = 0xe0 },
		{ .addr = 0x4b786e, .byte = 0xe0 },
		{ .addr = 0x4b786f, .byte = 0xa3 },
		{ .addr = 0x8ee10a, .byte = 0x2d },
		{ .addr = 0x8ee10b, .byte = 0xe9 },
		{ .addr = 0x8ee10c, .byte = 0x8e },
		{ .addr = 0x8ee10d, .byte = 0xc1 },
		{ .addr = 0x8ee10e, .byte = 0x82 },
		{ .addr = 0x8ee10f, .byte = 0x78 },
		{ .addr = 0x8ee110, .byte = 0x52 },
		{ .addr = 0x8ee111, .byte = 0x0a },
		{ .addr = 0x8ee112, .byte = 0x1b },
		{ .addr = 0x8ee113, .byte = 0x14 },
		{ .addr = 0x8ee114, .byte = 0xff },
		{ .addr = 0x8ee115, .byte = 0xc2 },
		{ .addr = 0x8ee116, .byte = 0x61 },
		{ .addr = 0x8ee117, .byte = 0x3e },
		{ .addr = 0x8ee118, .byte = 0x54 },
		{ .addr = 0x8ee119, .byte = 0x29 },
		{ .addr = 0x4b7870, .byte = 0x39 },
		{ .addr = 0x4b7871, .byte = 0xed }
};

static const SST_RamByte movemw_final_ram_25[] = {
		{ .addr = 0x4b786a, .byte = 0x4c },
		{ .addr = 0x4b786b, .byte = 0x94 },
		{ .addr = 0x4b786c, .byte = 0x3a },
		{ .addr = 0x4b786d, .byte = 0xe0 },
		{ .addr = 0x4b786e, .byte = 0xe0 },
		{ .addr = 0x4b786f, .byte = 0xa3 },
		{ .addr = 0x8ee10a, .byte = 0x2d },
		{ .addr = 0x8ee10b, .byte = 0xe9 },
		{ .addr = 0x8ee10c, .byte = 0x8e },
		{ .addr = 0x8ee10d, .byte = 0xc1 },
		{ .addr = 0x8ee10e, .byte = 0x82 },
		{ .addr = 0x8ee10f, .byte = 0x78 },
		{ .addr = 0x8ee110, .byte = 0x52 },
		{ .addr = 0x8ee111, .byte = 0x0a },
		{ .addr = 0x8ee112, .byte = 0x1b },
		{ .addr = 0x8ee113, .byte = 0x14 },
		{ .addr = 0x8ee114, .byte = 0xff },
		{ .addr = 0x8ee115, .byte = 0xc2 },
		{ .addr = 0x8ee116, .byte = 0x61 },
		{ .addr = 0x8ee117, .byte = 0x3e },
		{ .addr = 0x8ee118, .byte = 0x54 },
		{ .addr = 0x8ee119, .byte = 0x29 },
		{ .addr = 0x4b7870, .byte = 0x39 },
		{ .addr = 0x4b7871, .byte = 0xed }
};

static const SST_Transaction movemw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4946030, .data = 57507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363722, .data = 11753, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363724, .data = 36545, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363726, .data = 33400, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363728, .data = 21002, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363730, .data = 6932, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363732, .data = 65474, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363734, .data = 24894, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9363736, .data = 21545, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4946032, .data = 14829, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_26[] = {
		{ .addr = 0xf0cd56, .byte = 0x48 },
		{ .addr = 0xf0cd57, .byte = 0xb4 },
		{ .addr = 0xf0cd58, .byte = 0xfa },
		{ .addr = 0xf0cd59, .byte = 0x65 },
		{ .addr = 0xf0cd5a, .byte = 0x05 },
		{ .addr = 0xf0cd5b, .byte = 0xe1 },
		{ .addr = 0xf0cd5c, .byte = 0xd9 },
		{ .addr = 0xf0cd5d, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0x52 },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x5d },
		{ .addr = 0x00000f, .byte = 0xb0 },
		{ .addr = 0x8e5db0, .byte = 0xea },
		{ .addr = 0x8e5db1, .byte = 0x3a },
		{ .addr = 0x8e5db2, .byte = 0x66 },
		{ .addr = 0x8e5db3, .byte = 0x13 }
};

static const SST_RamByte movemw_final_ram_26[] = {
		{ .addr = 0xf0cd56, .byte = 0x48 },
		{ .addr = 0xf0cd57, .byte = 0xb4 },
		{ .addr = 0xf0cd58, .byte = 0xfa },
		{ .addr = 0xf0cd59, .byte = 0x65 },
		{ .addr = 0xf0cd5a, .byte = 0x05 },
		{ .addr = 0xf0cd5b, .byte = 0xe1 },
		{ .addr = 0xf0cd5c, .byte = 0xd9 },
		{ .addr = 0xf0cd5d, .byte = 0x5e },
		{ .addr = 0xcd0970, .byte = 0xcd },
		{ .addr = 0xcd0971, .byte = 0x5e },
		{ .addr = 0xcd096c, .byte = 0x04 },
		{ .addr = 0xcd096d, .byte = 0x12 },
		{ .addr = 0xcd096e, .byte = 0x00 },
		{ .addr = 0xcd096f, .byte = 0xf0 },
		{ .addr = 0xcd096a, .byte = 0x48 },
		{ .addr = 0xcd096b, .byte = 0xb4 },
		{ .addr = 0xcd0968, .byte = 0x5e },
		{ .addr = 0xcd0969, .byte = 0xc1 },
		{ .addr = 0xcd0964, .byte = 0x48 },
		{ .addr = 0xcd0965, .byte = 0xa1 },
		{ .addr = 0xcd0966, .byte = 0xbc },
		{ .addr = 0xcd0967, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0x52 },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x5d },
		{ .addr = 0x00000f, .byte = 0xb0 },
		{ .addr = 0x8e5db0, .byte = 0xea },
		{ .addr = 0x8e5db1, .byte = 0x3a },
		{ .addr = 0x8e5db2, .byte = 0x66 },
		{ .addr = 0x8e5db3, .byte = 0x13 }
};

static const SST_Transaction movemw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15781210, .data = 1505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15781212, .data = 55646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6577856, .data = 43098, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13437296, .data = 52574, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13437292, .data = 1042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13437294, .data = 240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13437290, .data = 18612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13437288, .data = 24257, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13437284, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13437286, .data = 48228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 23984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9330096, .data = 59962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9330098, .data = 26131, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_27[] = {
		{ .addr = 0x20294e, .byte = 0x48 },
		{ .addr = 0x20294f, .byte = 0xac },
		{ .addr = 0x202950, .byte = 0x3c },
		{ .addr = 0x202951, .byte = 0x2d },
		{ .addr = 0x202952, .byte = 0x23 },
		{ .addr = 0x202953, .byte = 0xb2 },
		{ .addr = 0x202954, .byte = 0x4d },
		{ .addr = 0x202955, .byte = 0x0f },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x5c },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0x705c94, .byte = 0x41 },
		{ .addr = 0x705c95, .byte = 0x66 },
		{ .addr = 0x705c96, .byte = 0x61 },
		{ .addr = 0x705c97, .byte = 0x4c }
};

static const SST_RamByte movemw_final_ram_27[] = {
		{ .addr = 0x20294e, .byte = 0x48 },
		{ .addr = 0x20294f, .byte = 0xac },
		{ .addr = 0x202950, .byte = 0x3c },
		{ .addr = 0x202951, .byte = 0x2d },
		{ .addr = 0x202952, .byte = 0x23 },
		{ .addr = 0x202953, .byte = 0xb2 },
		{ .addr = 0x202954, .byte = 0x4d },
		{ .addr = 0x202955, .byte = 0x0f },
		{ .addr = 0xa4d2a0, .byte = 0x29 },
		{ .addr = 0xa4d2a1, .byte = 0x56 },
		{ .addr = 0xa4d29c, .byte = 0x84 },
		{ .addr = 0xa4d29d, .byte = 0x1b },
		{ .addr = 0xa4d29e, .byte = 0x00 },
		{ .addr = 0xa4d29f, .byte = 0x20 },
		{ .addr = 0xa4d29a, .byte = 0x48 },
		{ .addr = 0xa4d29b, .byte = 0xac },
		{ .addr = 0xa4d298, .byte = 0xc4 },
		{ .addr = 0xa4d299, .byte = 0x8b },
		{ .addr = 0xa4d294, .byte = 0x48 },
		{ .addr = 0xa4d295, .byte = 0xa1 },
		{ .addr = 0xa4d296, .byte = 0xc6 },
		{ .addr = 0xa4d297, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x5c },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0x705c94, .byte = 0x41 },
		{ .addr = 0x705c95, .byte = 0x66 },
		{ .addr = 0x705c96, .byte = 0x61 },
		{ .addr = 0x705c97, .byte = 0x4c }
};

static const SST_Transaction movemw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2107730, .data = 9138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2107732, .data = 19727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16106634, .data = 57097, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10801824, .data = 10582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10801820, .data = 33819, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10801822, .data = 32, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10801818, .data = 18604, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10801816, .data = 50315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10801812, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10801814, .data = 50933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 23700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7363732, .data = 16742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7363734, .data = 24908, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_28[] = {
		{ .addr = 0x626b24, .byte = 0x4c },
		{ .addr = 0x626b25, .byte = 0x91 },
		{ .addr = 0x626b26, .byte = 0xf4 },
		{ .addr = 0x626b27, .byte = 0xda },
		{ .addr = 0x626b28, .byte = 0x91 },
		{ .addr = 0x626b29, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xa2 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0xc8a25c, .byte = 0xcd },
		{ .addr = 0xc8a25d, .byte = 0xc2 },
		{ .addr = 0xc8a25e, .byte = 0x18 },
		{ .addr = 0xc8a25f, .byte = 0x80 }
};

static const SST_RamByte movemw_final_ram_28[] = {
		{ .addr = 0x626b24, .byte = 0x4c },
		{ .addr = 0x626b25, .byte = 0x91 },
		{ .addr = 0x626b26, .byte = 0xf4 },
		{ .addr = 0x626b27, .byte = 0xda },
		{ .addr = 0x626b28, .byte = 0x91 },
		{ .addr = 0x626b29, .byte = 0x2a },
		{ .addr = 0x2fc0ae, .byte = 0x6b },
		{ .addr = 0x2fc0af, .byte = 0x2a },
		{ .addr = 0x2fc0aa, .byte = 0x22 },
		{ .addr = 0x2fc0ab, .byte = 0x16 },
		{ .addr = 0x2fc0ac, .byte = 0x00 },
		{ .addr = 0x2fc0ad, .byte = 0x62 },
		{ .addr = 0x2fc0a8, .byte = 0x4c },
		{ .addr = 0x2fc0a9, .byte = 0x91 },
		{ .addr = 0x2fc0a6, .byte = 0xd7 },
		{ .addr = 0x2fc0a7, .byte = 0x69 },
		{ .addr = 0x2fc0a2, .byte = 0x4c },
		{ .addr = 0x2fc0a3, .byte = 0x95 },
		{ .addr = 0x2fc0a4, .byte = 0xb4 },
		{ .addr = 0x2fc0a5, .byte = 0x49 },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xa2 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0xc8a25c, .byte = 0xcd },
		{ .addr = 0xc8a25d, .byte = 0xc2 },
		{ .addr = 0xc8a25e, .byte = 0x18 },
		{ .addr = 0xc8a25f, .byte = 0x80 }
};

static const SST_Transaction movemw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6449960, .data = 37162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4839272, .data = 45549, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3129518, .data = 27434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3129514, .data = 8726, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3129516, .data = 98, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3129512, .data = 19601, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3129510, .data = 55145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3129506, .data = 19605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3129508, .data = 46153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13148764, .data = 52674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13148766, .data = 6272, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_29[] = {
		{ .addr = 0xb8cd0c, .byte = 0x4c },
		{ .addr = 0xb8cd0d, .byte = 0x95 },
		{ .addr = 0xb8cd0e, .byte = 0x81 },
		{ .addr = 0xb8cd0f, .byte = 0xe2 },
		{ .addr = 0xb8cd10, .byte = 0xc3 },
		{ .addr = 0xb8cd11, .byte = 0xfe },
		{ .addr = 0xd2a890, .byte = 0xbd },
		{ .addr = 0xd2a891, .byte = 0x95 },
		{ .addr = 0xd2a892, .byte = 0x3a },
		{ .addr = 0xd2a893, .byte = 0xa0 },
		{ .addr = 0xd2a894, .byte = 0x72 },
		{ .addr = 0xd2a895, .byte = 0x9f },
		{ .addr = 0xd2a896, .byte = 0x5c },
		{ .addr = 0xd2a897, .byte = 0xb6 },
		{ .addr = 0xd2a898, .byte = 0xe3 },
		{ .addr = 0xd2a899, .byte = 0xba },
		{ .addr = 0xd2a89a, .byte = 0xb0 },
		{ .addr = 0xd2a89b, .byte = 0x29 },
		{ .addr = 0xd2a89c, .byte = 0x34 },
		{ .addr = 0xd2a89d, .byte = 0x51 },
		{ .addr = 0xb8cd12, .byte = 0x12 },
		{ .addr = 0xb8cd13, .byte = 0xd2 }
};

static const SST_RamByte movemw_final_ram_29[] = {
		{ .addr = 0xb8cd0c, .byte = 0x4c },
		{ .addr = 0xb8cd0d, .byte = 0x95 },
		{ .addr = 0xb8cd0e, .byte = 0x81 },
		{ .addr = 0xb8cd0f, .byte = 0xe2 },
		{ .addr = 0xb8cd10, .byte = 0xc3 },
		{ .addr = 0xb8cd11, .byte = 0xfe },
		{ .addr = 0xd2a890, .byte = 0xbd },
		{ .addr = 0xd2a891, .byte = 0x95 },
		{ .addr = 0xd2a892, .byte = 0x3a },
		{ .addr = 0xd2a893, .byte = 0xa0 },
		{ .addr = 0xd2a894, .byte = 0x72 },
		{ .addr = 0xd2a895, .byte = 0x9f },
		{ .addr = 0xd2a896, .byte = 0x5c },
		{ .addr = 0xd2a897, .byte = 0xb6 },
		{ .addr = 0xd2a898, .byte = 0xe3 },
		{ .addr = 0xd2a899, .byte = 0xba },
		{ .addr = 0xd2a89a, .byte = 0xb0 },
		{ .addr = 0xd2a89b, .byte = 0x29 },
		{ .addr = 0xd2a89c, .byte = 0x34 },
		{ .addr = 0xd2a89d, .byte = 0x51 },
		{ .addr = 0xb8cd12, .byte = 0x12 },
		{ .addr = 0xb8cd13, .byte = 0xd2 }
};

static const SST_Transaction movemw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12111120, .data = 50174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13805712, .data = 48533, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13805714, .data = 15008, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13805716, .data = 29343, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13805718, .data = 23734, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13805720, .data = 58298, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13805722, .data = 45097, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13805724, .data = 13393, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12111122, .data = 4818, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_30[] = {
		{ .addr = 0x9631a0, .byte = 0x48 },
		{ .addr = 0x9631a1, .byte = 0xb6 },
		{ .addr = 0x9631a2, .byte = 0x55 },
		{ .addr = 0x9631a3, .byte = 0xdb },
		{ .addr = 0x9631a4, .byte = 0x6f },
		{ .addr = 0x9631a5, .byte = 0x9e },
		{ .addr = 0x9631a6, .byte = 0x01 },
		{ .addr = 0x9631a7, .byte = 0x7f },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0x26 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0x1626fe, .byte = 0x2a },
		{ .addr = 0x1626ff, .byte = 0xf1 },
		{ .addr = 0x162700, .byte = 0x51 },
		{ .addr = 0x162701, .byte = 0x2b }
};

static const SST_RamByte movemw_final_ram_30[] = {
		{ .addr = 0x9631a0, .byte = 0x48 },
		{ .addr = 0x9631a1, .byte = 0xb6 },
		{ .addr = 0x9631a2, .byte = 0x55 },
		{ .addr = 0x9631a3, .byte = 0xdb },
		{ .addr = 0x9631a4, .byte = 0x6f },
		{ .addr = 0x9631a5, .byte = 0x9e },
		{ .addr = 0x9631a6, .byte = 0x01 },
		{ .addr = 0x9631a7, .byte = 0x7f },
		{ .addr = 0x5c13c8, .byte = 0x31 },
		{ .addr = 0x5c13c9, .byte = 0xa8 },
		{ .addr = 0x5c13c4, .byte = 0x82 },
		{ .addr = 0x5c13c5, .byte = 0x0b },
		{ .addr = 0x5c13c6, .byte = 0x00 },
		{ .addr = 0x5c13c7, .byte = 0x96 },
		{ .addr = 0x5c13c2, .byte = 0x48 },
		{ .addr = 0x5c13c3, .byte = 0xb6 },
		{ .addr = 0x5c13c0, .byte = 0x7a },
		{ .addr = 0x5c13c1, .byte = 0xa3 },
		{ .addr = 0x5c13bc, .byte = 0x48 },
		{ .addr = 0x5c13bd, .byte = 0xa1 },
		{ .addr = 0x5c13be, .byte = 0xb0 },
		{ .addr = 0x5c13bf, .byte = 0xea },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0x26 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0x1626fe, .byte = 0x2a },
		{ .addr = 0x1626ff, .byte = 0xf1 },
		{ .addr = 0x162700, .byte = 0x51 },
		{ .addr = 0x162701, .byte = 0x2b }
};

static const SST_Transaction movemw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9843108, .data = 28574, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9843110, .data = 383, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15366818, .data = 35609, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6034376, .data = 12712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6034372, .data = 33291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6034374, .data = 150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6034370, .data = 18614, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6034368, .data = 31395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6034364, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6034366, .data = 45290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 9982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1451774, .data = 10993, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1451776, .data = 20779, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movemw_initial_ram_31[] = {
		{ .addr = 0x5d646a, .byte = 0x48 },
		{ .addr = 0x5d646b, .byte = 0xae },
		{ .addr = 0x5d646c, .byte = 0x86 },
		{ .addr = 0x5d646d, .byte = 0x72 },
		{ .addr = 0x5d646e, .byte = 0x4b },
		{ .addr = 0x5d646f, .byte = 0x13 },
		{ .addr = 0x5d6470, .byte = 0xa6 },
		{ .addr = 0x5d6471, .byte = 0xdd },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0xd1 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x8ad1f0, .byte = 0x8d },
		{ .addr = 0x8ad1f1, .byte = 0x67 },
		{ .addr = 0x8ad1f2, .byte = 0x5f },
		{ .addr = 0x8ad1f3, .byte = 0xa9 }
};

static const SST_RamByte movemw_final_ram_31[] = {
		{ .addr = 0x5d646a, .byte = 0x48 },
		{ .addr = 0x5d646b, .byte = 0xae },
		{ .addr = 0x5d646c, .byte = 0x86 },
		{ .addr = 0x5d646d, .byte = 0x72 },
		{ .addr = 0x5d646e, .byte = 0x4b },
		{ .addr = 0x5d646f, .byte = 0x13 },
		{ .addr = 0x5d6470, .byte = 0xa6 },
		{ .addr = 0x5d6471, .byte = 0xdd },
		{ .addr = 0x2abff2, .byte = 0x64 },
		{ .addr = 0x2abff3, .byte = 0x72 },
		{ .addr = 0x2abfee, .byte = 0x03 },
		{ .addr = 0x2abfef, .byte = 0x0b },
		{ .addr = 0x2abff0, .byte = 0x00 },
		{ .addr = 0x2abff1, .byte = 0x5d },
		{ .addr = 0x2abfec, .byte = 0x48 },
		{ .addr = 0x2abfed, .byte = 0xae },
		{ .addr = 0x2abfea, .byte = 0xfa },
		{ .addr = 0x2abfeb, .byte = 0xdb },
		{ .addr = 0x2abfe6, .byte = 0x48 },
		{ .addr = 0x2abfe7, .byte = 0xa1 },
		{ .addr = 0x2abfe8, .byte = 0xea },
		{ .addr = 0x2abfe9, .byte = 0xa5 },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0xd1 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x8ad1f0, .byte = 0x8d },
		{ .addr = 0x8ad1f1, .byte = 0x67 },
		{ .addr = 0x8ad1f2, .byte = 0x5f },
		{ .addr = 0x8ad1f3, .byte = 0xa9 }
};

static const SST_Transaction movemw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6120558, .data = 19219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6120560, .data = 42717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10877658, .data = 26483, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801650, .data = 25714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801646, .data = 779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801648, .data = 93, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801644, .data = 18606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801642, .data = 64219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801638, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801640, .data = 60069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 53744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9097712, .data = 36199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9097714, .data = 24489, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase movemw[] = {
	{
		.name = "000 MOVEM.w #, (d16, A7) 48af",
		.initial = {
			.regs = {
				2516854248, 1224448443, 2738172433, 749428807, 51877730, 1992372080, 3018445573, 714955254, 415175827, 788158023, 3093381556, 2582546957, 143558775, 2086406636, 1268185199, 15833890, 7443558, 2, 6601746
			},
			.prefetch0 = 18607,
			.prefetch1 = 35448,
			.ram = movemw_initial_ram_0,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2516854248, 1224448443, 2738172433, 749428807, 51877730, 1992372080, 3018445573, 714955254, 415175827, 788158023, 3093381556, 2582546957, 143558775, 2086406636, 1268185199, 15833890, 7443544, 8194, 1353491946
			},
			.prefetch0 = 28704,
			.prefetch1 = 43481,
			.ram = movemw_final_ram_0,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_0,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "001 MOVEM.w #, (d16, A7) 48af",
		.initial = {
			.regs = {
				3679621211, 1111232474, 71345753, 522351928, 2118864408, 1968189360, 2646956211, 2639932096, 2264105827, 4196771049, 446447401, 280506932, 3784058475, 2697755073, 251565472, 12020108, 16179410, 523, 14807314
			},
			.prefetch0 = 18607,
			.prefetch1 = 44344,
			.ram = movemw_initial_ram_1,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3679621211, 1111232474, 71345753, 522351928, 2118864408, 1968189360, 2646956211, 2639932096, 2264105827, 4196771049, 446447401, 280506932, 3784058475, 2697755073, 251565472, 12020108, 16179396, 8715, 2781533704
			},
			.prefetch0 = 21245,
			.prefetch1 = 38572,
			.ram = movemw_final_ram_1,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_1,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "002 MOVEM.w (d8, A2, Xn), # 4cb2",
		.initial = {
			.regs = {
				2106205061, 3995260757, 1530310365, 4114391960, 2360575518, 4123367915, 1339779050, 3000074271, 2961113596, 646028355, 3319538101, 3160422352, 623104686, 4242173278, 937983776, 4220130, 15955762, 8715, 13736378
			},
			.prefetch0 = 19634,
			.prefetch1 = 39597,
			.ram = movemw_initial_ram_2,
			.ram_len = 30,
		},
		.final = {
			.regs = {
				4294936700, 3995260757, 6238, 7009, 2360575518, 4294949207, 1339779050, 30948, 2961113596, 4294967277, 3319538101, 4294937352, 17546, 4242173278, 937983776, 4220130, 4294962706, 8715, 13736384
			},
			.prefetch0 = 58626,
			.prefetch1 = 28264,
			.ram = movemw_final_ram_2,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_2,
		.transactions_len = 14,
		.lenght = 54,
	},
	{
		.name = "003 MOVEM.w #, -(A0) 48a0",
		.initial = {
			.regs = {
				505459576, 4201819311, 1891262838, 1294520852, 1324776984, 2817996424, 1821607405, 2131919032, 1334120655, 356127657, 1922664479, 3004125639, 4028699015, 737105306, 24969823, 11019800, 14199114, 1036, 3063604
			},
			.prefetch0 = 18592,
			.prefetch1 = 42299,
			.ram = movemw_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				505459576, 4201819311, 1891262838, 1294520852, 1324776984, 2817996424, 1821607405, 2131919032, 1334120655, 356127657, 1922664479, 3004125639, 4028699015, 737105306, 24969823, 11019800, 14199100, 9228, 1992188196
			},
			.prefetch0 = 4265,
			.prefetch1 = 24867,
			.ram = movemw_final_ram_3,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_3,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "004 MOVEM.w (d8, A0, Xn), # 4cb0",
		.initial = {
			.regs = {
				326805893, 3030987066, 1500552813, 2051605460, 1683113196, 1901534630, 1793815536, 4289960976, 3206661512, 1769793281, 2146462595, 37347299, 375249852, 620552845, 995256975, 7364524, 6751150, 1308, 16310200
			},
			.prefetch0 = 19632,
			.prefetch1 = 40311,
			.ram = movemw_initial_ram_4,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				326805893, 3030987066, 1500552813, 2051605460, 1683113196, 1901534630, 1793815536, 4289960976, 3206661512, 1769793281, 2146462595, 37347299, 375249852, 620552845, 995256975, 7364524, 6751136, 9500, 3384867120
			},
			.prefetch0 = 47713,
			.prefetch1 = 17797,
			.ram = movemw_final_ram_4,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_4,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "005 MOVEM.w (d16, A0), # 4ca8",
		.initial = {
			.regs = {
				3942419330, 2697014318, 4214704401, 3570430209, 1483007924, 9864476, 1575681991, 2277116335, 2316812155, 908562820, 184634173, 3921431357, 2024395305, 3495882367, 3621401598, 5026700, 10759906, 1309, 15815972
			},
			.prefetch0 = 19624,
			.prefetch1 = 59040,
			.ram = movemw_initial_ram_5,
			.ram_len = 26,
		},
		.final = {
			.regs = {
				3942419330, 2697014318, 4214704401, 3570430209, 1483007924, 4294956505, 1575681991, 22048, 2316812155, 4294954078, 4294943911, 3921431357, 2024395305, 24349, 17041, 4294951712, 10759906, 1309, 15815978
			},
			.prefetch0 = 26075,
			.prefetch1 = 18342,
			.ram = movemw_final_ram_5,
			.ram_len = 26,
		},
		.transactions = movemw_transactions_5,
		.transactions_len = 11,
		.lenght = 44,
	},
	{
		.name = "006 MOVEM.w (d8, A1, Xn), # 4cb1",
		.initial = {
			.regs = {
				997274438, 2933677456, 1289554549, 1803613133, 1608492805, 1167750440, 3874968684, 824999208, 2671193461, 3254391497, 2633143069, 2463296182, 3278089733, 3568268935, 48545494, 15871914, 7499076, 10007, 6536876
			},
			.prefetch0 = 19633,
			.prefetch1 = 6342,
			.ram = movemw_initial_ram_6,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				997274438, 2933677456, 1289554549, 1803613133, 1608492805, 1167750440, 3874968684, 824999208, 2671193461, 3254391497, 2633143069, 2463296182, 3278089733, 3568268935, 48545494, 15871914, 7499062, 10007, 3591265348
			},
			.prefetch0 = 53997,
			.prefetch1 = 11019,
			.ram = movemw_final_ram_6,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_6,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "007 MOVEM.w (d8, A1, Xn), # 4cb1",
		.initial = {
			.regs = {
				3812476812, 566515811, 3238475242, 3454127883, 456643607, 2461904589, 3637951008, 2697018648, 4282364111, 138540652, 176424689, 821537162, 1507656215, 2888453781, 3637988532, 13374160, 8508140, 34577, 13878564
			},
			.prefetch0 = 19633,
			.prefetch1 = 38533,
			.ram = movemw_initial_ram_7,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3812476812, 566515811, 3238475242, 3454127883, 456643607, 2461904589, 3637951008, 2697018648, 4282364111, 138540652, 176424689, 821537162, 1507656215, 2888453781, 3637988532, 13374160, 8508126, 10001, 2936567174
			},
			.prefetch0 = 17724,
			.prefetch1 = 27963,
			.ram = movemw_final_ram_7,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_7,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "008 MOVEM.w (d16, A7), # 4caf",
		.initial = {
			.regs = {
				2281373670, 567361470, 30501208, 973237808, 4171284229, 2304371494, 110800390, 1201339022, 3905266632, 788416002, 796616478, 497697383, 2412571217, 3569861183, 4109389819, 12603822, 16300710, 266, 8921208
			},
			.prefetch0 = 19631,
			.prefetch1 = 43935,
			.ram = movemw_initial_ram_8,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2281373670, 567361470, 30501208, 973237808, 4171284229, 2304371494, 110800390, 1201339022, 3905266632, 788416002, 796616478, 497697383, 2412571217, 3569861183, 4109389819, 12603822, 16300696, 8458, 28865794
			},
			.prefetch0 = 47608,
			.prefetch1 = 61360,
			.ram = movemw_final_ram_8,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_8,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "009 MOVEM.w #, (d16, A6) 48ae",
		.initial = {
			.regs = {
				1803683259, 3221463916, 962454883, 1811776365, 2875330644, 3611623117, 199776128, 124532593, 1270290500, 4151564807, 1521424528, 3370939331, 3648551325, 3647999783, 3864529164, 2459760, 10973560, 34062, 7553410
			},
			.prefetch0 = 18606,
			.prefetch1 = 1861,
			.ram = movemw_initial_ram_9,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1803683259, 3221463916, 962454883, 1811776365, 2875330644, 3611623117, 199776128, 124532593, 1270290500, 4151564807, 1521424528, 3370939331, 3648551325, 3647999783, 3864529164, 2459760, 10973546, 9486, 2463388412
			},
			.prefetch0 = 53647,
			.prefetch1 = 40512,
			.ram = movemw_final_ram_9,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_9,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "010 MOVEM.w (A6), # 4c96",
		.initial = {
			.regs = {
				1700785783, 3348267262, 3603120173, 2763604415, 2029846832, 978288085, 1900433817, 2218294002, 3016634650, 2329717358, 4294716373, 2959333845, 2079435304, 2992109255, 2692706075, 12492132, 15308374, 33536, 2587650
			},
			.prefetch0 = 19606,
			.prefetch1 = 15882,
			.ram = movemw_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1700785783, 3348267262, 3603120173, 2763604415, 2029846832, 978288085, 1900433817, 2218294002, 3016634650, 2329717358, 4294716373, 2959333845, 2079435304, 2992109255, 2692706075, 12492132, 15308360, 8960, 2571428910
			},
			.prefetch0 = 8395,
			.prefetch1 = 7223,
			.ram = movemw_final_ram_10,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_10,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "011 MOVEM.w (A2), # 4c92",
		.initial = {
			.regs = {
				1777239216, 1590578673, 3810151618, 357821899, 1704142574, 1959366586, 3305386157, 465732243, 832226932, 2015274888, 826378899, 3985419585, 2522680749, 1255386326, 2673612142, 9279250, 10400008, 9756, 1189658
			},
			.prefetch0 = 19602,
			.prefetch1 = 47895,
			.ram = movemw_initial_ram_11,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1777239216, 1590578673, 3810151618, 357821899, 1704142574, 1959366586, 3305386157, 465732243, 832226932, 2015274888, 826378899, 3985419585, 2522680749, 1255386326, 2673612142, 9279250, 10399994, 9756, 921359372
			},
			.prefetch0 = 50515,
			.prefetch1 = 6797,
			.ram = movemw_final_ram_11,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_11,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "012 MOVEM.w (A3)+, # 4c9b",
		.initial = {
			.regs = {
				1902158231, 852470410, 1618849714, 1949895469, 2616346035, 3586928317, 297361984, 1435794699, 1128667395, 1652168862, 101891379, 3217043016, 2058127606, 2465973131, 2293938221, 8038298, 8361934, 34573, 4010160
			},
			.prefetch0 = 19611,
			.prefetch1 = 7069,
			.ram = movemw_initial_ram_12,
			.ram_len = 28,
		},
		.final = {
			.regs = {
				2680, 852470410, 32592, 2088, 4294960727, 3586928317, 297361984, 4294961349, 3660, 4459, 101891379, 3217043034, 17110, 2465973131, 2293938221, 8038298, 8361934, 34573, 4010164
			},
			.prefetch0 = 33683,
			.prefetch1 = 51941,
			.ram = movemw_final_ram_12,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_12,
		.transactions_len = 12,
		.lenght = 48,
	},
	{
		.name = "013 MOVEM.w (A0), # 4c90",
		.initial = {
			.regs = {
				2458143224, 3832784758, 1022154417, 2716444329, 1358153198, 3613441557, 2208487878, 3101181260, 4252829992, 608674106, 3716872256, 3426697410, 4010879986, 2216736101, 2364501658, 16598358, 7901254, 9228, 10875470
			},
			.prefetch0 = 19600,
			.prefetch1 = 10971,
			.ram = movemw_initial_ram_13,
			.ram_len = 28,
		},
		.final = {
			.regs = {
				17943, 4294955047, 1022154417, 18177, 4294941590, 3613441557, 2525, 4294957707, 4252829992, 4294953798, 3716872256, 25237, 4010879986, 4294943425, 2364501658, 16598358, 7901254, 9228, 10875474
			},
			.prefetch0 = 63327,
			.prefetch1 = 1980,
			.ram = movemw_final_ram_13,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_13,
		.transactions_len = 12,
		.lenght = 48,
	},
	{
		.name = "014 MOVEM.w (xxx).l, # 4cb9",
		.initial = {
			.regs = {
				3692842957, 3091886353, 1012056505, 2103047908, 3389795018, 2246756278, 2207655309, 2910344338, 3403497294, 4127726039, 1164533590, 1270745290, 1240779214, 1314618207, 3827032243, 8123768, 8886942, 8220, 16170860
			},
			.prefetch0 = 19641,
			.prefetch1 = 33083,
			.ram = movemw_initial_ram_14,
			.ram_len = 28,
		},
		.final = {
			.regs = {
				4294966146, 4294937821, 1012056505, 12740, 4294959177, 4294947181, 2207655309, 2910344338, 12631, 4127726039, 1164533590, 1270745290, 1240779214, 1314618207, 3827032243, 8123768, 4294961083, 8220, 16170868
			},
			.prefetch0 = 8883,
			.prefetch1 = 59314,
			.ram = movemw_final_ram_14,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_14,
		.transactions_len = 12,
		.lenght = 48,
	},
	{
		.name = "015 MOVEM.w (A1), # 4c91",
		.initial = {
			.regs = {
				2559216684, 279781868, 4285534165, 347702301, 777023825, 3884662509, 410287076, 3147375203, 2755012165, 4195534176, 1817805855, 3457775729, 161441503, 445275512, 3252876631, 5528290, 15780026, 42765, 7606378
			},
			.prefetch0 = 19601,
			.prefetch1 = 59801,
			.ram = movemw_initial_ram_15,
			.ram_len = 28,
		},
		.final = {
			.regs = {
				4294960584, 279781868, 4285534165, 4294965438, 4294955264, 3884662509, 410287076, 4294967244, 24840, 4195534176, 1817805855, 19819, 161441503, 29675, 4294966735, 5528290, 4294945114, 42765, 7606382
			},
			.prefetch0 = 19950,
			.prefetch1 = 21323,
			.ram = movemw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_15,
		.transactions_len = 12,
		.lenght = 48,
	},
	{
		.name = "016 MOVEM.w #, (A2) 4892",
		.initial = {
			.regs = {
				2531383420, 2740739623, 391057461, 3281462430, 3586501263, 625227577, 2927586627, 1803263022, 4204911381, 4050250167, 2199532067, 1907138690, 2463950680, 424512071, 3911054531, 9809414, 15475374, 516, 4418284
			},
			.prefetch0 = 18578,
			.prefetch1 = 28934,
			.ram = movemw_initial_ram_16,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2531383420, 2740739623, 391057461, 3281462430, 3586501263, 625227577, 2927586627, 1803263022, 4204911381, 4050250167, 2199532067, 1907138690, 2463950680, 424512071, 3911054531, 9809414, 15475360, 8708, 570828420
			},
			.prefetch0 = 62539,
			.prefetch1 = 23796,
			.ram = movemw_final_ram_16,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_16,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "017 MOVEM.w (A2), # 4c92",
		.initial = {
			.regs = {
				4150445729, 4222663465, 718558400, 706166106, 1273069200, 3026581563, 3502544517, 2682058683, 178133879, 3694775979, 3475833705, 3064824450, 2419035507, 1924912759, 3752183191, 10460822, 1083232, 40964, 3514564
			},
			.prefetch0 = 19602,
			.prefetch1 = 35259,
			.ram = movemw_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4150445729, 4222663465, 718558400, 706166106, 1273069200, 3026581563, 3502544517, 2682058683, 178133879, 3694775979, 3475833705, 3064824450, 2419035507, 1924912759, 3752183191, 10460822, 1083218, 8196, 2161014822
			},
			.prefetch0 = 350,
			.prefetch1 = 47020,
			.ram = movemw_final_ram_17,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_17,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "018 MOVEM.w (A5), # 4c95",
		.initial = {
			.regs = {
				1978907544, 291239369, 3719815674, 2667278855, 1006799816, 1963646145, 3023837631, 3907809528, 3444353786, 3686282405, 549309229, 3143224910, 3589247741, 1886931581, 2305160460, 7409756, 7195976, 10013, 7750886
			},
			.prefetch0 = 19605,
			.prefetch1 = 16888,
			.ram = movemw_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1978907544, 291239369, 3719815674, 2667278855, 1006799816, 1963646145, 3023837631, 3907809528, 3444353786, 3686282405, 549309229, 3143224910, 3589247741, 1886931581, 2305160460, 7409756, 7195962, 10013, 4250715310
			},
			.prefetch0 = 63037,
			.prefetch1 = 30485,
			.ram = movemw_final_ram_18,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_18,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "019 MOVEM.w (d8, A0, Xn), # 4cb0",
		.initial = {
			.regs = {
				1286525136, 2771946297, 287847048, 1574373761, 2340947566, 551658460, 1886586241, 3548270964, 834428804, 3193457852, 1856164254, 754567860, 1061286122, 1155009025, 993026986, 10935410, 10928586, 41487, 9019382
			},
			.prefetch0 = 19632,
			.prefetch1 = 55955,
			.ram = movemw_initial_ram_19,
			.ram_len = 30,
		},
		.final = {
			.regs = {
				1086, 1786, 287847048, 1574373761, 20227, 551658460, 1886586241, 8386, 834428804, 2976, 1856164254, 16627, 6238, 1155009025, 31321, 10935410, 11200, 41487, 9019388
			},
			.prefetch0 = 22921,
			.prefetch1 = 35427,
			.ram = movemw_final_ram_19,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_19,
		.transactions_len = 14,
		.lenght = 54,
	},
	{
		.name = "020 MOVEM.w #, (A7) 4897",
		.initial = {
			.regs = {
				63722178, 3533176659, 389138241, 817932486, 3995599741, 2358288386, 3782418400, 34758805, 3855842448, 2603939766, 913034181, 1664732, 3870291992, 4041380953, 2082954655, 12357606, 2209476, 40971, 459814
			},
			.prefetch0 = 18583,
			.prefetch1 = 57042,
			.ram = movemw_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				63722178, 3533176659, 389138241, 817932486, 3995599741, 2358288386, 3782418400, 34758805, 3855842448, 2603939766, 913034181, 1664732, 3870291992, 4041380953, 2082954655, 12357606, 2209476, 40971, 459818
			},
			.prefetch0 = 59035,
			.prefetch1 = 9714,
			.ram = movemw_final_ram_20,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_20,
		.transactions_len = 12,
		.lenght = 48,
	},
	{
		.name = "021 MOVEM.w #, (d8, A3, Xn) 48b3",
		.initial = {
			.regs = {
				916780949, 3476183997, 136081038, 2627583503, 18339844, 388771174, 1567506692, 985638112, 716099174, 3211326574, 3684721900, 1010553502, 1521994219, 1847733012, 1574861038, 2156216, 10335894, 42001, 14224430
			},
			.prefetch0 = 18611,
			.prefetch1 = 23034,
			.ram = movemw_initial_ram_21,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				916780949, 3476183997, 136081038, 2627583503, 18339844, 388771174, 1567506692, 985638112, 716099174, 3211326574, 3684721900, 1010553502, 1521994219, 1847733012, 1574861038, 2156216, 10335880, 9233, 2166546576
			},
			.prefetch0 = 30733,
			.prefetch1 = 24849,
			.ram = movemw_final_ram_21,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_21,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "022 MOVEM.w (d16, A4), # 4cac",
		.initial = {
			.regs = {
				1446435826, 253182506, 262508813, 1921599381, 2582944529, 492145188, 2732675775, 3307138691, 1755582264, 1091038231, 4034838071, 1685916016, 2067772016, 1109921389, 2947739709, 825874, 2110724, 799, 7591264
			},
			.prefetch0 = 19628,
			.prefetch1 = 40944,
			.ram = movemw_initial_ram_22,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1446435826, 253182506, 262508813, 1921599381, 2582944529, 492145188, 2732675775, 3307138691, 1755582264, 1091038231, 4034838071, 1685916016, 2067772016, 1109921389, 2947739709, 825874, 2110710, 8991, 2954931982
			},
			.prefetch0 = 61302,
			.prefetch1 = 62778,
			.ram = movemw_final_ram_22,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_22,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "023 MOVEM.w (d8, A7, Xn), # 4cb7",
		.initial = {
			.regs = {
				2436901567, 2624416818, 1506890285, 1227216796, 4089681243, 275843124, 4262958966, 851302583, 3870993937, 2673237561, 2447417658, 3003923392, 2163804444, 3429358737, 3021848502, 5878002, 977438, 1795, 8186554
			},
			.prefetch0 = 19639,
			.prefetch1 = 35237,
			.ram = movemw_initial_ram_23,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2436901567, 2624416818, 1506890285, 1227216796, 4089681243, 275843124, 4262958966, 851302583, 3870993937, 2673237561, 2447417658, 3003923392, 2163804444, 3429358737, 3021848502, 5878002, 977424, 9987, 582890162
			},
			.prefetch0 = 48187,
			.prefetch1 = 33439,
			.ram = movemw_final_ram_23,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_23,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "024 MOVEM.w (A2)+, # 4c9a",
		.initial = {
			.regs = {
				4190549086, 2996333914, 3390447185, 1277707058, 1369994523, 2048599585, 966409885, 448450024, 1481741113, 2835931746, 1371236580, 3082677799, 713598990, 2202065396, 558605762, 5708866, 14423388, 10004, 8418344
			},
			.prefetch0 = 19610,
			.prefetch1 = 57085,
			.ram = movemw_initial_ram_24,
			.ram_len = 36,
		},
		.final = {
			.regs = {
				23523, 2996333914, 17039, 4294947797, 4294963379, 4294941170, 2790, 4294946714, 1481741113, 24135, 1371236606, 5702, 4294950952, 2202065396, 4294941481, 5708866, 1257, 10004, 8418348
			},
			.prefetch0 = 8203,
			.prefetch1 = 63726,
			.ram = movemw_final_ram_24,
			.ram_len = 36,
		},
		.transactions = movemw_transactions_24,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "025 MOVEM.w (A4), # 4c94",
		.initial = {
			.regs = {
				4137761568, 2675203502, 2712530293, 1237796945, 1552060674, 1361667398, 4235197877, 1999653748, 3129502039, 3706113597, 2872569404, 1314561859, 1569644810, 2564992248, 1031323193, 7425138, 2904118, 284, 4946030
			},
			.prefetch0 = 19604,
			.prefetch1 = 15072,
			.ram = movemw_initial_ram_25,
			.ram_len = 24,
		},
		.final = {
			.regs = {
				4137761568, 2675203502, 2712530293, 1237796945, 1552060674, 11753, 4294938305, 4294935160, 3129502039, 21002, 2872569404, 6932, 4294967234, 24894, 1031323193, 7425138, 2904118, 284, 4946034
			},
			.prefetch0 = 57507,
			.prefetch1 = 14829,
			.ram = movemw_final_ram_25,
			.ram_len = 24,
		},
		.transactions = movemw_transactions_25,
		.transactions_len = 10,
		.lenght = 40,
	},
	{
		.name = "026 MOVEM.w #, (d8, A4, Xn) 48b4",
		.initial = {
			.regs = {
				176531546, 1958432000, 4042449070, 2277956589, 2931236399, 807128550, 1067748391, 3573049950, 915481597, 628292554, 880239166, 3647306625, 3160716934, 1919512265, 480239893, 3399114, 13437298, 1042, 15781210
			},
			.prefetch0 = 18612,
			.prefetch1 = 64101,
			.ram = movemw_initial_ram_26,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				176531546, 1958432000, 4042449070, 2277956589, 2931236399, 807128550, 1067748391, 3573049950, 915481597, 628292554, 880239166, 3647306625, 3160716934, 1919512265, 480239893, 3399114, 13437284, 9234, 1385061812
			},
			.prefetch0 = 59962,
			.prefetch1 = 26131,
			.ram = movemw_final_ram_26,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_26,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "027 MOVEM.w #, (d16, A4) 48ac",
		.initial = {
			.regs = {
				2867781385, 2631005531, 2155364912, 3137484462, 2244215913, 2007946726, 2657364192, 2730903681, 980060033, 997095459, 3995501748, 1911439409, 3337986265, 1381689952, 3059159338, 11586928, 10801826, 33819, 2107730
			},
			.prefetch0 = 18604,
			.prefetch1 = 15405,
			.ram = movemw_initial_ram_27,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2867781385, 2631005531, 2155364912, 3137484462, 2244215913, 2007946726, 2657364192, 2730903681, 980060033, 997095459, 3995501748, 1911439409, 3337986265, 1381689952, 3059159338, 11586928, 10801812, 9243, 2926599320
			},
			.prefetch0 = 16742,
			.prefetch1 = 24908,
			.ram = movemw_final_ram_27,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_27,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "028 MOVEM.w (A1), # 4c91",
		.initial = {
			.regs = {
				726935489, 2297432425, 2539024715, 729213241, 1964619293, 1717787905, 84303011, 420932124, 3672717069, 3024738153, 1489159110, 2410002774, 12103900, 3590255759, 1841570501, 7550682, 3129520, 8726, 6449960
			},
			.prefetch0 = 19601,
			.prefetch1 = 62682,
			.ram = movemw_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				726935489, 2297432425, 2539024715, 729213241, 1964619293, 1717787905, 84303011, 420932124, 3672717069, 3024738153, 1489159110, 2410002774, 12103900, 3590255759, 1841570501, 7550682, 3129506, 8726, 197698144
			},
			.prefetch0 = 52674,
			.prefetch1 = 6272,
			.ram = movemw_final_ram_28,
			.ram_len = 28,
		},
		.transactions = movemw_transactions_28,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "029 MOVEM.w (A5), # 4c95",
		.initial = {
			.regs = {
				2754813260, 4113383609, 767039872, 457291818, 1348124697, 2774305965, 1754742051, 3246983588, 3308506286, 1220070305, 3975136499, 2898655686, 1614102445, 1221765264, 1141774336, 2085262, 12394024, 275, 12111120
			},
			.prefetch0 = 19605,
			.prefetch1 = 33250,
			.ram = movemw_initial_ram_29,
			.ram_len = 22,
		},
		.final = {
			.regs = {
				2754813260, 4294950293, 767039872, 457291818, 1348124697, 15008, 29343, 23734, 4294960058, 1220070305, 3975136499, 2898655686, 1614102445, 1221765264, 1141774336, 4294946857, 12394024, 275, 12111124
			},
			.prefetch0 = 50174,
			.prefetch1 = 4818,
			.ram = movemw_final_ram_29,
			.ram_len = 22,
		},
		.transactions = movemw_transactions_29,
		.transactions_len = 9,
		.lenght = 36,
	},
	{
		.name = "030 MOVEM.w #, (d8, A6, Xn) 48b6",
		.initial = {
			.regs = {
				1537051417, 2591445681, 2187720556, 2642527113, 2946596422, 1693205279, 3204477054, 759542909, 4227182260, 3339384179, 1826506845, 1982264163, 724013057, 2290722837, 4058647175, 3508110, 6034378, 33291, 9843108
			},
			.prefetch0 = 18614,
			.prefetch1 = 21979,
			.ram = movemw_initial_ram_30,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1537051417, 2591445681, 2187720556, 2642527113, 2946596422, 1693205279, 3204477054, 759542909, 4227182260, 3339384179, 1826506845, 1982264163, 724013057, 2290722837, 4058647175, 3508110, 6034364, 8715, 1679173378
			},
			.prefetch0 = 10993,
			.prefetch1 = 20779,
			.ram = movemw_final_ram_30,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_30,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "031 MOVEM.w #, (d16, A6) 48ae",
		.initial = {
			.regs = {
				826858711, 210790259, 2355502777, 2167863065, 2271204892, 75939943, 1781971894, 3413258211, 2923616292, 1538204598, 1957272920, 2571745492, 1338796253, 4136907435, 3936726984, 1617104, 2801652, 779, 6120558
			},
			.prefetch0 = 18606,
			.prefetch1 = 34418,
			.ram = movemw_initial_ram_31,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				826858711, 210790259, 2355502777, 2167863065, 2271204892, 75939943, 1781971894, 3413258211, 2923616292, 1538204598, 1957272920, 2571745492, 1338796253, 4136907435, 3936726984, 1617104, 2801638, 8971, 898290164
			},
			.prefetch0 = 36199,
			.prefetch1 = 24489,
			.ram = movemw_final_ram_31,
			.ram_len = 30,
		},
		.transactions = movemw_transactions_31,
		.transactions_len = 16,
		.lenght = 66,
	},
};

#endif /* RBT_MOVEMW_H */