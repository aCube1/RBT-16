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

const uint32_t MOVEMW_TEST_COUNT = 16;
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
};

#endif /* RBT_MOVEMW_H */