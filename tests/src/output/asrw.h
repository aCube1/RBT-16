#ifndef RBT_ASRW_H
#define RBT_ASRW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte asrw_initial_ram_0[] = {
		{ .addr = 0x6cd1f0, .byte = 0xee },
		{ .addr = 0x6cd1f1, .byte = 0x67 },
		{ .addr = 0x6cd1f2, .byte = 0x1f },
		{ .addr = 0x6cd1f3, .byte = 0xb5 },
		{ .addr = 0x6cd1f4, .byte = 0x26 },
		{ .addr = 0x6cd1f5, .byte = 0xd0 }
};

static const SST_RamByte asrw_final_ram_0[] = {
		{ .addr = 0x6cd1f0, .byte = 0xee },
		{ .addr = 0x6cd1f1, .byte = 0x67 },
		{ .addr = 0x6cd1f2, .byte = 0x1f },
		{ .addr = 0x6cd1f3, .byte = 0xb5 },
		{ .addr = 0x6cd1f4, .byte = 0x26 },
		{ .addr = 0x6cd1f5, .byte = 0xd0 }
};

static const SST_Transaction asrw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7131636, .data = 9936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte asrw_initial_ram_1[] = {
		{ .addr = 0x9e3102, .byte = 0xe0 },
		{ .addr = 0x9e3103, .byte = 0xe5 },
		{ .addr = 0x9e3104, .byte = 0x31 },
		{ .addr = 0x9e3105, .byte = 0x12 },
		{ .addr = 0x00000c, .byte = 0xb7 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x6f },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x8c6fca, .byte = 0xdf },
		{ .addr = 0x8c6fcb, .byte = 0x28 },
		{ .addr = 0x8c6fcc, .byte = 0x01 },
		{ .addr = 0x8c6fcd, .byte = 0x3b }
};

static const SST_RamByte asrw_final_ram_1[] = {
		{ .addr = 0x9e3102, .byte = 0xe0 },
		{ .addr = 0x9e3103, .byte = 0xe5 },
		{ .addr = 0x9e3104, .byte = 0x31 },
		{ .addr = 0x9e3105, .byte = 0x12 },
		{ .addr = 0x56b478, .byte = 0x31 },
		{ .addr = 0x56b479, .byte = 0x06 },
		{ .addr = 0x56b474, .byte = 0x82 },
		{ .addr = 0x56b475, .byte = 0x1d },
		{ .addr = 0x56b476, .byte = 0x00 },
		{ .addr = 0x56b477, .byte = 0x9e },
		{ .addr = 0x56b472, .byte = 0xe0 },
		{ .addr = 0x56b473, .byte = 0xe5 },
		{ .addr = 0x56b470, .byte = 0x2e },
		{ .addr = 0x56b471, .byte = 0x7f },
		{ .addr = 0x56b46c, .byte = 0xe0 },
		{ .addr = 0x56b46d, .byte = 0xf1 },
		{ .addr = 0x56b46e, .byte = 0xa2 },
		{ .addr = 0x56b46f, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0xb7 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x6f },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x8c6fca, .byte = 0xdf },
		{ .addr = 0x8c6fcb, .byte = 0x28 },
		{ .addr = 0x8c6fcc, .byte = 0x01 },
		{ .addr = 0x8c6fcd, .byte = 0x3b }
};

static const SST_Transaction asrw_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1257086, .data = 47499, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5682296, .data = 12550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5682292, .data = 33309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5682294, .data = 158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5682290, .data = 57573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5682288, .data = 11903, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5682284, .data = 57585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5682286, .data = 41491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 28618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9203658, .data = 57128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9203660, .data = 315, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte asrw_initial_ram_2[] = {
		{ .addr = 0xbd49b4, .byte = 0xe0 },
		{ .addr = 0xbd49b5, .byte = 0xd9 },
		{ .addr = 0xbd49b6, .byte = 0xb5 },
		{ .addr = 0xbd49b7, .byte = 0x8e },
		{ .addr = 0x9548fe, .byte = 0xdd },
		{ .addr = 0x9548ff, .byte = 0x1a },
		{ .addr = 0xbd49b8, .byte = 0xff },
		{ .addr = 0xbd49b9, .byte = 0xad }
};

static const SST_RamByte asrw_final_ram_2[] = {
		{ .addr = 0xbd49b4, .byte = 0xe0 },
		{ .addr = 0xbd49b5, .byte = 0xd9 },
		{ .addr = 0xbd49b6, .byte = 0xb5 },
		{ .addr = 0xbd49b7, .byte = 0x8e },
		{ .addr = 0x9548fe, .byte = 0xee },
		{ .addr = 0x9548ff, .byte = 0x8d },
		{ .addr = 0xbd49b8, .byte = 0xff },
		{ .addr = 0xbd49b9, .byte = 0xad }
};

static const SST_Transaction asrw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9783550, .data = 56602, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12405176, .data = 65453, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9783550, .data = 61069, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte asrw_initial_ram_3[] = {
		{ .addr = 0xd655de, .byte = 0xe0 },
		{ .addr = 0xd655df, .byte = 0xea },
		{ .addr = 0xd655e0, .byte = 0xd4 },
		{ .addr = 0xd655e1, .byte = 0xc4 },
		{ .addr = 0xd655e2, .byte = 0x22 },
		{ .addr = 0xd655e3, .byte = 0x2c },
		{ .addr = 0x00000c, .byte = 0xb8 },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x4d },
		{ .addr = 0x00000f, .byte = 0x10 },
		{ .addr = 0x084d10, .byte = 0xab },
		{ .addr = 0x084d11, .byte = 0x7c },
		{ .addr = 0x084d12, .byte = 0x67 },
		{ .addr = 0x084d13, .byte = 0xda }
};

static const SST_RamByte asrw_final_ram_3[] = {
		{ .addr = 0xd655de, .byte = 0xe0 },
		{ .addr = 0xd655df, .byte = 0xea },
		{ .addr = 0xd655e0, .byte = 0xd4 },
		{ .addr = 0xd655e1, .byte = 0xc4 },
		{ .addr = 0xd655e2, .byte = 0x22 },
		{ .addr = 0xd655e3, .byte = 0x2c },
		{ .addr = 0x724c36, .byte = 0x55 },
		{ .addr = 0x724c37, .byte = 0xe0 },
		{ .addr = 0x724c32, .byte = 0x06 },
		{ .addr = 0x724c33, .byte = 0x05 },
		{ .addr = 0x724c34, .byte = 0x00 },
		{ .addr = 0x724c35, .byte = 0xd6 },
		{ .addr = 0x724c30, .byte = 0xe0 },
		{ .addr = 0x724c31, .byte = 0xea },
		{ .addr = 0x724c2e, .byte = 0x68 },
		{ .addr = 0x724c2f, .byte = 0x17 },
		{ .addr = 0x724c2a, .byte = 0xe0 },
		{ .addr = 0x724c2b, .byte = 0xf1 },
		{ .addr = 0x724c2c, .byte = 0x6f },
		{ .addr = 0x724c2d, .byte = 0xe5 },
		{ .addr = 0x00000c, .byte = 0xb8 },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x4d },
		{ .addr = 0x00000f, .byte = 0x10 },
		{ .addr = 0x084d10, .byte = 0xab },
		{ .addr = 0x084d11, .byte = 0x7c },
		{ .addr = 0x084d12, .byte = 0x67 },
		{ .addr = 0x084d13, .byte = 0xda }
};

static const SST_Transaction asrw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14046690, .data = 8748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15034390, .data = 11502, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7490614, .data = 21984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7490610, .data = 1541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7490612, .data = 214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7490608, .data = 57578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7490606, .data = 26647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7490602, .data = 57585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7490604, .data = 28645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 19728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 544016, .data = 43900, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 544018, .data = 26586, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte asrw_initial_ram_4[] = {
		{ .addr = 0xffad12, .byte = 0xe8 },
		{ .addr = 0xffad13, .byte = 0x45 },
		{ .addr = 0xffad14, .byte = 0x82 },
		{ .addr = 0xffad15, .byte = 0x61 },
		{ .addr = 0xffad16, .byte = 0x5c },
		{ .addr = 0xffad17, .byte = 0x6d }
};

static const SST_RamByte asrw_final_ram_4[] = {
		{ .addr = 0xffad12, .byte = 0xe8 },
		{ .addr = 0xffad13, .byte = 0x45 },
		{ .addr = 0xffad14, .byte = 0x82 },
		{ .addr = 0xffad15, .byte = 0x61 },
		{ .addr = 0xffad16, .byte = 0x5c },
		{ .addr = 0xffad17, .byte = 0x6d }
};

static const SST_Transaction asrw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16755990, .data = 23661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte asrw_initial_ram_5[] = {
		{ .addr = 0x223dd6, .byte = 0xea },
		{ .addr = 0x223dd7, .byte = 0x63 },
		{ .addr = 0x223dd8, .byte = 0x19 },
		{ .addr = 0x223dd9, .byte = 0x60 },
		{ .addr = 0x223dda, .byte = 0xbe },
		{ .addr = 0x223ddb, .byte = 0x3a }
};

static const SST_RamByte asrw_final_ram_5[] = {
		{ .addr = 0x223dd6, .byte = 0xea },
		{ .addr = 0x223dd7, .byte = 0x63 },
		{ .addr = 0x223dd8, .byte = 0x19 },
		{ .addr = 0x223dd9, .byte = 0x60 },
		{ .addr = 0x223dda, .byte = 0xbe },
		{ .addr = 0x223ddb, .byte = 0x3a }
};

static const SST_Transaction asrw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2244058, .data = 48698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte asrw_initial_ram_6[] = {
		{ .addr = 0x9ccfa2, .byte = 0xe4 },
		{ .addr = 0x9ccfa3, .byte = 0x45 },
		{ .addr = 0x9ccfa4, .byte = 0x71 },
		{ .addr = 0x9ccfa5, .byte = 0x46 },
		{ .addr = 0x9ccfa6, .byte = 0x8f },
		{ .addr = 0x9ccfa7, .byte = 0x88 }
};

static const SST_RamByte asrw_final_ram_6[] = {
		{ .addr = 0x9ccfa2, .byte = 0xe4 },
		{ .addr = 0x9ccfa3, .byte = 0x45 },
		{ .addr = 0x9ccfa4, .byte = 0x71 },
		{ .addr = 0x9ccfa5, .byte = 0x46 },
		{ .addr = 0x9ccfa6, .byte = 0x8f },
		{ .addr = 0x9ccfa7, .byte = 0x88 }
};

static const SST_Transaction asrw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10276774, .data = 36744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asrw_initial_ram_7[] = {
		{ .addr = 0x83adf2, .byte = 0xe4 },
		{ .addr = 0x83adf3, .byte = 0x65 },
		{ .addr = 0x83adf4, .byte = 0x1d },
		{ .addr = 0x83adf5, .byte = 0x9b },
		{ .addr = 0x83adf6, .byte = 0x72 },
		{ .addr = 0x83adf7, .byte = 0xe5 }
};

static const SST_RamByte asrw_final_ram_7[] = {
		{ .addr = 0x83adf2, .byte = 0xe4 },
		{ .addr = 0x83adf3, .byte = 0x65 },
		{ .addr = 0x83adf4, .byte = 0x1d },
		{ .addr = 0x83adf5, .byte = 0x9b },
		{ .addr = 0x83adf6, .byte = 0x72 },
		{ .addr = 0x83adf7, .byte = 0xe5 }
};

static const SST_Transaction asrw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8629750, .data = 29413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 38 },
};

static const SST_RamByte asrw_initial_ram_8[] = {
		{ .addr = 0xebc20c, .byte = 0xe0 },
		{ .addr = 0xebc20d, .byte = 0xd0 },
		{ .addr = 0xebc20e, .byte = 0xa3 },
		{ .addr = 0xebc20f, .byte = 0xc5 },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0x37 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0xcc3798, .byte = 0x8b },
		{ .addr = 0xcc3799, .byte = 0xc4 },
		{ .addr = 0xcc379a, .byte = 0xea },
		{ .addr = 0xcc379b, .byte = 0x46 }
};

static const SST_RamByte asrw_final_ram_8[] = {
		{ .addr = 0xebc20c, .byte = 0xe0 },
		{ .addr = 0xebc20d, .byte = 0xd0 },
		{ .addr = 0xebc20e, .byte = 0xa3 },
		{ .addr = 0xebc20f, .byte = 0xc5 },
		{ .addr = 0x711ec8, .byte = 0xc2 },
		{ .addr = 0x711ec9, .byte = 0x0e },
		{ .addr = 0x711ec4, .byte = 0xa5 },
		{ .addr = 0x711ec5, .byte = 0x10 },
		{ .addr = 0x711ec6, .byte = 0x00 },
		{ .addr = 0x711ec7, .byte = 0xeb },
		{ .addr = 0x711ec2, .byte = 0xe0 },
		{ .addr = 0x711ec3, .byte = 0xd0 },
		{ .addr = 0x711ec0, .byte = 0x64 },
		{ .addr = 0x711ec1, .byte = 0x83 },
		{ .addr = 0x711ebc, .byte = 0xe0 },
		{ .addr = 0x711ebd, .byte = 0xd5 },
		{ .addr = 0x711ebe, .byte = 0x2e },
		{ .addr = 0x711ebf, .byte = 0x71 },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0x37 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0xcc3798, .byte = 0x8b },
		{ .addr = 0xcc3799, .byte = 0xc4 },
		{ .addr = 0xcc379a, .byte = 0xea },
		{ .addr = 0xcc379b, .byte = 0x46 }
};

static const SST_Transaction asrw_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7431298, .data = 9315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413448, .data = 49678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413444, .data = 42256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413446, .data = 235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413442, .data = 57552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413440, .data = 25731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413436, .data = 57557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413438, .data = 11889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13383576, .data = 35780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13383578, .data = 59974, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte asrw_initial_ram_9[] = {
		{ .addr = 0x70f8d4, .byte = 0xe0 },
		{ .addr = 0x70f8d5, .byte = 0x40 },
		{ .addr = 0x70f8d6, .byte = 0x30 },
		{ .addr = 0x70f8d7, .byte = 0x65 },
		{ .addr = 0x70f8d8, .byte = 0x45 },
		{ .addr = 0x70f8d9, .byte = 0xeb }
};

static const SST_RamByte asrw_final_ram_9[] = {
		{ .addr = 0x70f8d4, .byte = 0xe0 },
		{ .addr = 0x70f8d5, .byte = 0x40 },
		{ .addr = 0x70f8d6, .byte = 0x30 },
		{ .addr = 0x70f8d7, .byte = 0x65 },
		{ .addr = 0x70f8d8, .byte = 0x45 },
		{ .addr = 0x70f8d9, .byte = 0xeb }
};

static const SST_Transaction asrw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7403736, .data = 17899, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte asrw_initial_ram_10[] = {
		{ .addr = 0x4ce78a, .byte = 0xe0 },
		{ .addr = 0x4ce78b, .byte = 0xf5 },
		{ .addr = 0x4ce78c, .byte = 0x5e },
		{ .addr = 0x4ce78d, .byte = 0x39 },
		{ .addr = 0x4ce78e, .byte = 0x50 },
		{ .addr = 0x4ce78f, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0x55 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x3e55ea, .byte = 0x3d },
		{ .addr = 0x3e55eb, .byte = 0x49 },
		{ .addr = 0x3e55ec, .byte = 0x81 },
		{ .addr = 0x3e55ed, .byte = 0x89 }
};

static const SST_RamByte asrw_final_ram_10[] = {
		{ .addr = 0x4ce78a, .byte = 0xe0 },
		{ .addr = 0x4ce78b, .byte = 0xf5 },
		{ .addr = 0x4ce78c, .byte = 0x5e },
		{ .addr = 0x4ce78d, .byte = 0x39 },
		{ .addr = 0x4ce78e, .byte = 0x50 },
		{ .addr = 0x4ce78f, .byte = 0x00 },
		{ .addr = 0xb450cc, .byte = 0xe7 },
		{ .addr = 0xb450cd, .byte = 0x8c },
		{ .addr = 0xb450c8, .byte = 0x27 },
		{ .addr = 0xb450c9, .byte = 0x0f },
		{ .addr = 0xb450ca, .byte = 0x00 },
		{ .addr = 0xb450cb, .byte = 0x4c },
		{ .addr = 0xb450c6, .byte = 0xe0 },
		{ .addr = 0xb450c7, .byte = 0xf5 },
		{ .addr = 0xb450c4, .byte = 0xa8 },
		{ .addr = 0xb450c5, .byte = 0xff },
		{ .addr = 0xb450c0, .byte = 0xe0 },
		{ .addr = 0xb450c1, .byte = 0xf5 },
		{ .addr = 0xb450c2, .byte = 0xb3 },
		{ .addr = 0xb450c3, .byte = 0xde },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0x55 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x3e55ea, .byte = 0x3d },
		{ .addr = 0x3e55eb, .byte = 0x49 },
		{ .addr = 0x3e55ec, .byte = 0x81 },
		{ .addr = 0x3e55ed, .byte = 0x89 }
};

static const SST_Transaction asrw_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5040014, .data = 20480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14592254, .data = 34505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11817164, .data = 59276, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11817160, .data = 9999, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11817162, .data = 76, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11817158, .data = 57589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11817156, .data = 43263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11817152, .data = 57589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11817154, .data = 46046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4085226, .data = 15689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4085228, .data = 33161, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte asrw_initial_ram_11[] = {
		{ .addr = 0xb335fc, .byte = 0xe8 },
		{ .addr = 0xb335fd, .byte = 0x60 },
		{ .addr = 0xb335fe, .byte = 0x09 },
		{ .addr = 0xb335ff, .byte = 0x11 },
		{ .addr = 0xb33600, .byte = 0xc3 },
		{ .addr = 0xb33601, .byte = 0x87 }
};

static const SST_RamByte asrw_final_ram_11[] = {
		{ .addr = 0xb335fc, .byte = 0xe8 },
		{ .addr = 0xb335fd, .byte = 0x60 },
		{ .addr = 0xb335fe, .byte = 0x09 },
		{ .addr = 0xb335ff, .byte = 0x11 },
		{ .addr = 0xb33600, .byte = 0xc3 },
		{ .addr = 0xb33601, .byte = 0x87 }
};

static const SST_Transaction asrw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11744768, .data = 50055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte asrw_initial_ram_12[] = {
		{ .addr = 0xc8118a, .byte = 0xe8 },
		{ .addr = 0xc8118b, .byte = 0x63 },
		{ .addr = 0xc8118c, .byte = 0xa6 },
		{ .addr = 0xc8118d, .byte = 0x89 },
		{ .addr = 0xc8118e, .byte = 0xd8 },
		{ .addr = 0xc8118f, .byte = 0x05 }
};

static const SST_RamByte asrw_final_ram_12[] = {
		{ .addr = 0xc8118a, .byte = 0xe8 },
		{ .addr = 0xc8118b, .byte = 0x63 },
		{ .addr = 0xc8118c, .byte = 0xa6 },
		{ .addr = 0xc8118d, .byte = 0x89 },
		{ .addr = 0xc8118e, .byte = 0xd8 },
		{ .addr = 0xc8118f, .byte = 0x05 }
};

static const SST_Transaction asrw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13111694, .data = 55301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte asrw_initial_ram_13[] = {
		{ .addr = 0x408e20, .byte = 0xec },
		{ .addr = 0x408e21, .byte = 0x41 },
		{ .addr = 0x408e22, .byte = 0xe4 },
		{ .addr = 0x408e23, .byte = 0x77 },
		{ .addr = 0x408e24, .byte = 0xd3 },
		{ .addr = 0x408e25, .byte = 0xf7 }
};

static const SST_RamByte asrw_final_ram_13[] = {
		{ .addr = 0x408e20, .byte = 0xec },
		{ .addr = 0x408e21, .byte = 0x41 },
		{ .addr = 0x408e22, .byte = 0xe4 },
		{ .addr = 0x408e23, .byte = 0x77 },
		{ .addr = 0x408e24, .byte = 0xd3 },
		{ .addr = 0x408e25, .byte = 0xf7 }
};

static const SST_Transaction asrw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4230692, .data = 54263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asrw_initial_ram_14[] = {
		{ .addr = 0xbfbbf6, .byte = 0xe8 },
		{ .addr = 0xbfbbf7, .byte = 0x67 },
		{ .addr = 0xbfbbf8, .byte = 0xeb },
		{ .addr = 0xbfbbf9, .byte = 0x27 },
		{ .addr = 0xbfbbfa, .byte = 0x84 },
		{ .addr = 0xbfbbfb, .byte = 0x54 }
};

static const SST_RamByte asrw_final_ram_14[] = {
		{ .addr = 0xbfbbf6, .byte = 0xe8 },
		{ .addr = 0xbfbbf7, .byte = 0x67 },
		{ .addr = 0xbfbbf8, .byte = 0xeb },
		{ .addr = 0xbfbbf9, .byte = 0x27 },
		{ .addr = 0xbfbbfa, .byte = 0x84 },
		{ .addr = 0xbfbbfb, .byte = 0x54 }
};

static const SST_Transaction asrw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12565498, .data = 33876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte asrw_initial_ram_15[] = {
		{ .addr = 0x0119e8, .byte = 0xee },
		{ .addr = 0x0119e9, .byte = 0x43 },
		{ .addr = 0x0119ea, .byte = 0xf8 },
		{ .addr = 0x0119eb, .byte = 0x5a },
		{ .addr = 0x0119ec, .byte = 0x57 },
		{ .addr = 0x0119ed, .byte = 0x09 }
};

static const SST_RamByte asrw_final_ram_15[] = {
		{ .addr = 0x0119e8, .byte = 0xee },
		{ .addr = 0x0119e9, .byte = 0x43 },
		{ .addr = 0x0119ea, .byte = 0xf8 },
		{ .addr = 0x0119eb, .byte = 0x5a },
		{ .addr = 0x0119ec, .byte = 0x57 },
		{ .addr = 0x0119ed, .byte = 0x09 }
};

static const SST_Transaction asrw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 72172, .data = 22281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

const uint32_t ASRW_TEST_COUNT = 16;
static const SST_TestCase asrw[] = {
	{
		.name = "000 ASR.w D7, D7 ee67",
		.initial = {
			.regs = {
				2140892700, 2465781122, 3992243120, 1827657398, 2728141166, 384994615, 1441370795, 3538539163, 3279986970, 1101559859, 845518070, 1390080585, 1491296396, 2114812570, 2889532608, 1434316, 14536022, 42002, 7131636
			},
			.prefetch0 = 61031,
			.prefetch1 = 8117,
			.ram = asrw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2140892700, 2465781122, 3992243120, 1827657398, 2728141166, 384994615, 1441370795, 3538550783, 3279986970, 1101559859, 845518070, 1390080585, 1491296396, 2114812570, 2889532608, 1434316, 14536022, 42009, 7131638
			},
			.prefetch0 = 8117,
			.prefetch1 = 9936,
			.ram = asrw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_0,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "001 ASR.w -(A5) e0e5",
		.initial = {
			.regs = {
				2884250776, 1253332469, 184791644, 610112149, 36931270, 2770747075, 2068505622, 2251783055, 431328489, 1714063567, 1092159307, 2387236600, 586871257, 2719166081, 348121508, 13506926, 5682298, 33309, 10367238
			},
			.prefetch0 = 57573,
			.prefetch1 = 12562,
			.ram = asrw_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2884250776, 1253332469, 184791644, 610112149, 36931270, 2770747075, 2068505622, 2251783055, 431328489, 1714063567, 1092159307, 2387236600, 586871257, 2719166079, 348121508, 13506926, 5682284, 8733, 3079434190
			},
			.prefetch0 = 57128,
			.prefetch1 = 315,
			.ram = asrw_final_ram_1,
			.ram_len = 26,
		},
		.transactions = asrw_transactions_1,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "002 ASR.w (A1)+ e0d9",
		.initial = {
			.regs = {
				2374568740, 1425912514, 1760245985, 2920100209, 649615497, 738531091, 323591614, 2508279825, 2041037792, 2291484926, 2497367528, 3353603257, 1382074414, 2236975319, 1286003635, 12376298, 5259260, 780, 12405176
			},
			.prefetch0 = 57561,
			.prefetch1 = 46478,
			.ram = asrw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2374568740, 1425912514, 1760245985, 2920100209, 649615497, 738531091, 323591614, 2508279825, 2041037792, 2291484928, 2497367528, 3353603257, 1382074414, 2236975319, 1286003635, 12376298, 5259260, 776, 12405178
			},
			.prefetch0 = 46478,
			.prefetch1 = 65453,
			.ram = asrw_final_ram_2,
			.ram_len = 8,
		},
		.transactions = asrw_transactions_2,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "003 ASR.w (d16, A2) e0ea",
		.initial = {
			.regs = {
				933389448, 3567261037, 1820043135, 762541742, 832840840, 2564116996, 1298361488, 4228665476, 2867067514, 3314526250, 1877316435, 3097781170, 2074008155, 965600840, 2980261157, 12982044, 7490616, 1541, 14046690
			},
			.prefetch0 = 57578,
			.prefetch1 = 54468,
			.ram = asrw_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				933389448, 3567261037, 1820043135, 762541742, 832840840, 2564116996, 1298361488, 4228665476, 2867067514, 3314526250, 1877316435, 3097781170, 2074008155, 965600840, 2980261157, 12982044, 7490602, 9733, 3087551764
			},
			.prefetch0 = 43900,
			.prefetch1 = 26586,
			.ram = asrw_final_ram_3,
			.ram_len = 28,
		},
		.transactions = asrw_transactions_3,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "004 ASR.w 4, D5 e845",
		.initial = {
			.regs = {
				3479964568, 3809126325, 647409223, 3769929299, 3771619388, 713266762, 2788053304, 2017152313, 1879940008, 2447046066, 502228128, 2351837740, 862494390, 987930492, 1887183724, 13717528, 12523306, 42767, 16755990
			},
			.prefetch0 = 59461,
			.prefetch1 = 33377,
			.ram = asrw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3479964568, 3809126325, 647409223, 3769929299, 3771619388, 713292132, 2788053304, 2017152313, 1879940008, 2447046066, 502228128, 2351837740, 862494390, 987930492, 1887183724, 13717528, 12523306, 42777, 16755992
			},
			.prefetch0 = 33377,
			.prefetch1 = 23661,
			.ram = asrw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_4,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "005 ASR.w D5, D3 ea63",
		.initial = {
			.regs = {
				2676707446, 2992862885, 2962678242, 1131360842, 1132488956, 4085628592, 2299857435, 225917803, 2294539351, 715847624, 3890339135, 2651289664, 3987188057, 3748790162, 3278107997, 13875260, 5945822, 34305, 2244058
			},
			.prefetch0 = 60003,
			.prefetch1 = 6496,
			.ram = asrw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2676707446, 2992862885, 2962678242, 1131347968, 1132488956, 4085628592, 2299857435, 225917803, 2294539351, 715847624, 3890339135, 2651289664, 3987188057, 3748790162, 3278107997, 13875260, 5945822, 34308, 2244060
			},
			.prefetch0 = 6496,
			.prefetch1 = 48698,
			.ram = asrw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_5,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "006 ASR.w 2, D5 e445",
		.initial = {
			.regs = {
				3328068398, 3964285979, 1509980596, 2300739280, 2570334942, 174558830, 723956097, 3823473856, 627395295, 920139937, 974910677, 2569945063, 2722650383, 215528245, 4186210478, 1304852, 12254198, 41996, 10276774
			},
			.prefetch0 = 58437,
			.prefetch1 = 28998,
			.ram = asrw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3328068398, 3964285979, 1509980596, 2300739280, 2570334942, 174580635, 723956097, 3823473856, 627395295, 920139937, 974910677, 2569945063, 2722650383, 215528245, 4186210478, 1304852, 12254198, 42009, 10276776
			},
			.prefetch0 = 28998,
			.prefetch1 = 36744,
			.ram = asrw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_6,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "007 ASR.w D2, D5 e465",
		.initial = {
			.regs = {
				3973371083, 3325829483, 2682781714, 2885201931, 2716456465, 2753266199, 2136497404, 1189934537, 2847313450, 2638223524, 2900567694, 1499748308, 3444248291, 3826580080, 3696486792, 1110534, 4314760, 1806, 8629750
			},
			.prefetch0 = 58469,
			.prefetch1 = 7579,
			.ram = asrw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3973371083, 3325829483, 2682781714, 2885201931, 2716456465, 2753298431, 2136497404, 1189934537, 2847313450, 2638223524, 2900567694, 1499748308, 3444248291, 3826580080, 3696486792, 1110534, 4314760, 1817, 8629752
			},
			.prefetch0 = 7579,
			.prefetch1 = 29413,
			.ram = asrw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_7,
		.transactions_len = 2,
		.lenght = 42,
	},
	{
		.name = "008 ASR.w (A0) e0d0",
		.initial = {
			.regs = {
				3324804298, 2955021329, 2936025478, 2969969410, 4261503262, 3537851623, 3046392699, 42920129, 779183235, 4224621971, 586767513, 506557244, 1894444867, 3113027127, 1665320983, 2225504, 7413450, 42256, 15450640
			},
			.prefetch0 = 57552,
			.prefetch1 = 41925,
			.ram = asrw_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3324804298, 2955021329, 2936025478, 2969969410, 4261503262, 3537851623, 3046392699, 42920129, 779183235, 4224621971, 586767513, 506557244, 1894444867, 3113027127, 1665320983, 2225504, 7413436, 9488, 1942763420
			},
			.prefetch0 = 35780,
			.prefetch1 = 59974,
			.ram = asrw_final_ram_8,
			.ram_len = 26,
		},
		.transactions = asrw_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 ASR.w 8, D0 e040",
		.initial = {
			.regs = {
				775604603, 2471594184, 3893458875, 502784558, 180665174, 1751384469, 1145517578, 2859069659, 317503333, 3046147204, 2159939053, 3961399220, 3743082487, 2123974536, 3256632575, 2388692, 5190840, 1814, 7403736
			},
			.prefetch0 = 57408,
			.prefetch1 = 12389,
			.ram = asrw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				775618505, 2471594184, 3893458875, 502784558, 180665174, 1751384469, 1145517578, 2859069659, 317503333, 3046147204, 2159939053, 3961399220, 3743082487, 2123974536, 3256632575, 2388692, 5190840, 1800, 7403738
			},
			.prefetch0 = 12389,
			.prefetch1 = 17899,
			.ram = asrw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_9,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "010 ASR.w (d8, A5, Xn) e0f5",
		.initial = {
			.regs = {
				2614264243, 599700229, 2820932683, 1720382642, 1946124715, 2409319891, 753143378, 1134458469, 1657817802, 3396608471, 2763101948, 3734463740, 3678680858, 608393971, 596360378, 15163570, 11817166, 9999, 5040014
			},
			.prefetch0 = 57589,
			.prefetch1 = 24121,
			.ram = asrw_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2614264243, 599700229, 2820932683, 1720382642, 1946124715, 2409319891, 753143378, 1134458469, 1657817802, 3396608471, 2763101948, 3734463740, 3678680858, 608393971, 596360378, 15163570, 11817152, 9999, 1027495406
			},
			.prefetch0 = 15689,
			.prefetch1 = 33161,
			.ram = asrw_final_ram_10,
			.ram_len = 28,
		},
		.transactions = asrw_transactions_10,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "011 ASR.w D4, D0 e860",
		.initial = {
			.regs = {
				4291877447, 253191688, 45700570, 2296878175, 3042352471, 2061586030, 2109353580, 1587043151, 3977259285, 817787608, 70761225, 2412577756, 424180232, 683566500, 3961790747, 12451706, 6372288, 42244, 11744768
			},
			.prefetch0 = 59488,
			.prefetch1 = 2321,
			.ram = asrw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4291887103, 253191688, 45700570, 2296878175, 3042352471, 2061586030, 2109353580, 1587043151, 3977259285, 817787608, 70761225, 2412577756, 424180232, 683566500, 3961790747, 12451706, 6372288, 42265, 11744770
			},
			.prefetch0 = 2321,
			.prefetch1 = 50055,
			.ram = asrw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_11,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "012 ASR.w D4, D3 e863",
		.initial = {
			.regs = {
				1881526442, 4084319968, 1434636572, 3706114068, 2937457494, 623321193, 3757614512, 328153304, 481779943, 3862687183, 4288417645, 1873923465, 562921457, 1044670410, 322309458, 11927262, 16397780, 8729, 13111694
			},
			.prefetch0 = 59491,
			.prefetch1 = 42633,
			.ram = asrw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1881526442, 4084319968, 1434636572, 3706126335, 2937457494, 623321193, 3757614512, 328153304, 481779943, 3862687183, 4288417645, 1873923465, 562921457, 1044670410, 322309458, 11927262, 16397780, 8729, 13111696
			},
			.prefetch0 = 42633,
			.prefetch1 = 55301,
			.ram = asrw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_12,
		.transactions_len = 2,
		.lenght = 50,
	},
	{
		.name = "013 ASR.w 6, D1 ec41",
		.initial = {
			.regs = {
				1081282467, 4233829933, 398242883, 4111533014, 1858643982, 4196180238, 693745594, 4062812160, 927114007, 3697551737, 946094456, 1061195095, 1970288570, 2051433472, 2526958174, 14741686, 13071602, 770, 4230692
			},
			.prefetch0 = 60481,
			.prefetch1 = 58487,
			.ram = asrw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1081282467, 4233822328, 398242883, 4111533014, 1858643982, 4196180238, 693745594, 4062812160, 927114007, 3697551737, 946094456, 1061195095, 1970288570, 2051433472, 2526958174, 14741686, 13071602, 785, 4230694
			},
			.prefetch0 = 58487,
			.prefetch1 = 54263,
			.ram = asrw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_13,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "014 ASR.w D4, D7 e867",
		.initial = {
			.regs = {
				1580502734, 409597829, 3128072399, 2093063218, 1130838487, 2650553921, 2267224874, 3575534794, 3471228371, 2205952606, 465423428, 128795056, 1897412859, 2434790658, 2912863665, 3490964, 12641274, 32773, 12565498
			},
			.prefetch0 = 59495,
			.prefetch1 = 60199,
			.ram = asrw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1580502734, 409597829, 3128072399, 2093063218, 1130838487, 2650553921, 2267224874, 3575513088, 3471228371, 2205952606, 465423428, 128795056, 1897412859, 2434790658, 2912863665, 3490964, 12641274, 32772, 12565500
			},
			.prefetch0 = 60199,
			.prefetch1 = 33876,
			.ram = asrw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_14,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "015 ASR.w 7, D3 ee43",
		.initial = {
			.regs = {
				608446364, 848655129, 3725428557, 735207258, 1445330800, 313251854, 462399016, 3570125097, 108606398, 1209637425, 1948223256, 48459852, 4277246593, 1776083802, 4073984595, 3151558, 6139318, 8990, 72172
			},
			.prefetch0 = 60995,
			.prefetch1 = 63578,
			.ram = asrw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				608446364, 848655129, 3725428557, 735183038, 1445330800, 313251854, 462399016, 3570125097, 108606398, 1209637425, 1948223256, 48459852, 4277246593, 1776083802, 4073984595, 3151558, 6139318, 8977, 72174
			},
			.prefetch0 = 63578,
			.prefetch1 = 22281,
			.ram = asrw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = asrw_transactions_15,
		.transactions_len = 2,
		.lenght = 20,
	},
};

#endif /* RBT_ASRW_H */