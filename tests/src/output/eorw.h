#ifndef RBT_EORW_H
#define RBT_EORW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte eorw_initial_ram_0[] = {
		{ .addr = 0x3d8ebe, .byte = 0xbf },
		{ .addr = 0x3d8ebf, .byte = 0x6f },
		{ .addr = 0x3d8ec0, .byte = 0x0a },
		{ .addr = 0x3d8ec1, .byte = 0xab },
		{ .addr = 0x3d8ec2, .byte = 0x6a },
		{ .addr = 0x3d8ec3, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0x96 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0x88 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x7c88e2, .byte = 0x70 },
		{ .addr = 0x7c88e3, .byte = 0xe1 },
		{ .addr = 0x7c88e4, .byte = 0x1b },
		{ .addr = 0x7c88e5, .byte = 0xb9 }
};

static const SST_RamByte eorw_final_ram_0[] = {
		{ .addr = 0x3d8ebe, .byte = 0xbf },
		{ .addr = 0x3d8ebf, .byte = 0x6f },
		{ .addr = 0x3d8ec0, .byte = 0x0a },
		{ .addr = 0x3d8ec1, .byte = 0xab },
		{ .addr = 0x3d8ec2, .byte = 0x6a },
		{ .addr = 0x3d8ec3, .byte = 0xc4 },
		{ .addr = 0x197664, .byte = 0x8e },
		{ .addr = 0x197665, .byte = 0xc0 },
		{ .addr = 0x197660, .byte = 0x02 },
		{ .addr = 0x197661, .byte = 0x0d },
		{ .addr = 0x197662, .byte = 0x00 },
		{ .addr = 0x197663, .byte = 0x3d },
		{ .addr = 0x19765e, .byte = 0xbf },
		{ .addr = 0x19765f, .byte = 0x6f },
		{ .addr = 0x19765c, .byte = 0x79 },
		{ .addr = 0x19765d, .byte = 0x95 },
		{ .addr = 0x197658, .byte = 0xbf },
		{ .addr = 0x197659, .byte = 0x71 },
		{ .addr = 0x19765a, .byte = 0x00 },
		{ .addr = 0x19765b, .byte = 0x29 },
		{ .addr = 0x00000c, .byte = 0x96 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0x88 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x7c88e2, .byte = 0x70 },
		{ .addr = 0x7c88e3, .byte = 0xe1 },
		{ .addr = 0x7c88e4, .byte = 0x1b },
		{ .addr = 0x7c88e5, .byte = 0xb9 }
};

static const SST_Transaction eorw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4034242, .data = 27332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2718100, .data = 41046, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1668708, .data = 36544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1668704, .data = 525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1668706, .data = 61, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1668702, .data = 49007, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1668700, .data = 31125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1668696, .data = 49009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1668698, .data = 41, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 35042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8161506, .data = 28897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8161508, .data = 7097, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_1[] = {
		{ .addr = 0x4bc63e, .byte = 0xb9 },
		{ .addr = 0x4bc63f, .byte = 0x72 },
		{ .addr = 0x4bc640, .byte = 0xdb },
		{ .addr = 0x4bc641, .byte = 0x75 },
		{ .addr = 0x4bc642, .byte = 0xda },
		{ .addr = 0x4bc643, .byte = 0x46 },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x403fd0, .byte = 0x4f },
		{ .addr = 0x403fd1, .byte = 0xe5 },
		{ .addr = 0x403fd2, .byte = 0xff },
		{ .addr = 0x403fd3, .byte = 0xf5 }
};

static const SST_RamByte eorw_final_ram_1[] = {
		{ .addr = 0x4bc63e, .byte = 0xb9 },
		{ .addr = 0x4bc63f, .byte = 0x72 },
		{ .addr = 0x4bc640, .byte = 0xdb },
		{ .addr = 0x4bc641, .byte = 0x75 },
		{ .addr = 0x4bc642, .byte = 0xda },
		{ .addr = 0x4bc643, .byte = 0x46 },
		{ .addr = 0x1b0dd8, .byte = 0xc6 },
		{ .addr = 0x1b0dd9, .byte = 0x40 },
		{ .addr = 0x1b0dd4, .byte = 0x80 },
		{ .addr = 0x1b0dd5, .byte = 0x0a },
		{ .addr = 0x1b0dd6, .byte = 0x00 },
		{ .addr = 0x1b0dd7, .byte = 0x4b },
		{ .addr = 0x1b0dd2, .byte = 0xb9 },
		{ .addr = 0x1b0dd3, .byte = 0x72 },
		{ .addr = 0x1b0dd0, .byte = 0xfb },
		{ .addr = 0x1b0dd1, .byte = 0x17 },
		{ .addr = 0x1b0dcc, .byte = 0xb9 },
		{ .addr = 0x1b0dcd, .byte = 0x71 },
		{ .addr = 0x1b0dce, .byte = 0xec },
		{ .addr = 0x1b0dcf, .byte = 0x3b },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x403fd0, .byte = 0x4f },
		{ .addr = 0x403fd1, .byte = 0xe5 },
		{ .addr = 0x403fd2, .byte = 0xff },
		{ .addr = 0x403fd3, .byte = 0xf5 }
};

static const SST_Transaction eorw_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4965954, .data = 55878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3930902, .data = 17024, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1773016, .data = 50752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1773012, .data = 32778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1773014, .data = 75, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1773010, .data = 47474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1773008, .data = 64279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1773004, .data = 47473, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1773006, .data = 60475, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4210640, .data = 20453, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4210642, .data = 65525, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_2[] = {
		{ .addr = 0x829060, .byte = 0x0a },
		{ .addr = 0x829061, .byte = 0x61 },
		{ .addr = 0x829062, .byte = 0x0d },
		{ .addr = 0x829063, .byte = 0x10 },
		{ .addr = 0x829064, .byte = 0x5d },
		{ .addr = 0x829065, .byte = 0xcf },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xe494bc, .byte = 0x2a },
		{ .addr = 0xe494bd, .byte = 0x65 },
		{ .addr = 0xe494be, .byte = 0x60 },
		{ .addr = 0xe494bf, .byte = 0xb4 }
};

static const SST_RamByte eorw_final_ram_2[] = {
		{ .addr = 0x829060, .byte = 0x0a },
		{ .addr = 0x829061, .byte = 0x61 },
		{ .addr = 0x829062, .byte = 0x0d },
		{ .addr = 0x829063, .byte = 0x10 },
		{ .addr = 0x829064, .byte = 0x5d },
		{ .addr = 0x829065, .byte = 0xcf },
		{ .addr = 0xb12442, .byte = 0x90 },
		{ .addr = 0xb12443, .byte = 0x66 },
		{ .addr = 0xb1243e, .byte = 0x87 },
		{ .addr = 0xb1243f, .byte = 0x1e },
		{ .addr = 0xb12440, .byte = 0x00 },
		{ .addr = 0xb12441, .byte = 0x82 },
		{ .addr = 0xb1243c, .byte = 0x0a },
		{ .addr = 0xb1243d, .byte = 0x61 },
		{ .addr = 0xb1243a, .byte = 0xfb },
		{ .addr = 0xb1243b, .byte = 0xe7 },
		{ .addr = 0xb12436, .byte = 0x0a },
		{ .addr = 0xb12437, .byte = 0x71 },
		{ .addr = 0xb12438, .byte = 0xbf },
		{ .addr = 0xb12439, .byte = 0x88 },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xe494bc, .byte = 0x2a },
		{ .addr = 0xe494bd, .byte = 0x65 },
		{ .addr = 0xe494be, .byte = 0x60 },
		{ .addr = 0xe494bf, .byte = 0xb4 }
};

static const SST_Transaction eorw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8556644, .data = 24015, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8977382, .data = 18571, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11609154, .data = 36966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11609150, .data = 34590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11609152, .data = 130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11609148, .data = 2657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11609146, .data = 64487, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11609142, .data = 2673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11609144, .data = 49032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14980284, .data = 10853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14980286, .data = 24756, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_3[] = {
		{ .addr = 0x1ac378, .byte = 0xbd },
		{ .addr = 0x1ac379, .byte = 0x79 },
		{ .addr = 0x1ac37a, .byte = 0x0c },
		{ .addr = 0x1ac37b, .byte = 0x37 },
		{ .addr = 0x1ac37c, .byte = 0x32 },
		{ .addr = 0x1ac37d, .byte = 0x29 },
		{ .addr = 0x1ac37e, .byte = 0x8f },
		{ .addr = 0x1ac37f, .byte = 0x88 },
		{ .addr = 0x00000c, .byte = 0x1a },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x14 },
		{ .addr = 0x00000f, .byte = 0x96 },
		{ .addr = 0x081496, .byte = 0x9f },
		{ .addr = 0x081497, .byte = 0xf3 },
		{ .addr = 0x081498, .byte = 0xe5 },
		{ .addr = 0x081499, .byte = 0xe9 }
};

static const SST_RamByte eorw_final_ram_3[] = {
		{ .addr = 0x1ac378, .byte = 0xbd },
		{ .addr = 0x1ac379, .byte = 0x79 },
		{ .addr = 0x1ac37a, .byte = 0x0c },
		{ .addr = 0x1ac37b, .byte = 0x37 },
		{ .addr = 0x1ac37c, .byte = 0x32 },
		{ .addr = 0x1ac37d, .byte = 0x29 },
		{ .addr = 0x1ac37e, .byte = 0x8f },
		{ .addr = 0x1ac37f, .byte = 0x88 },
		{ .addr = 0xdb366e, .byte = 0xc3 },
		{ .addr = 0xdb366f, .byte = 0x7e },
		{ .addr = 0xdb366a, .byte = 0x03 },
		{ .addr = 0xdb366b, .byte = 0x01 },
		{ .addr = 0xdb366c, .byte = 0x00 },
		{ .addr = 0xdb366d, .byte = 0x1a },
		{ .addr = 0xdb3668, .byte = 0xbd },
		{ .addr = 0xdb3669, .byte = 0x79 },
		{ .addr = 0xdb3666, .byte = 0x32 },
		{ .addr = 0xdb3667, .byte = 0x29 },
		{ .addr = 0xdb3662, .byte = 0xbd },
		{ .addr = 0xdb3663, .byte = 0x71 },
		{ .addr = 0xdb3664, .byte = 0x0c },
		{ .addr = 0xdb3665, .byte = 0x37 },
		{ .addr = 0x00000c, .byte = 0x1a },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x14 },
		{ .addr = 0x00000f, .byte = 0x96 },
		{ .addr = 0x081496, .byte = 0x9f },
		{ .addr = 0x081497, .byte = 0xf3 },
		{ .addr = 0x081498, .byte = 0xe5 },
		{ .addr = 0x081499, .byte = 0xe9 }
};

static const SST_Transaction eorw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1753980, .data = 12841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1753982, .data = 36744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3617320, .data = 62029, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366318, .data = 50046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366314, .data = 769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366316, .data = 26, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366312, .data = 48505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366310, .data = 12841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366306, .data = 48497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366308, .data = 3127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 5270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 529558, .data = 40947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 529560, .data = 58857, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_4[] = {
		{ .addr = 0xe93344, .byte = 0xb9 },
		{ .addr = 0xe93345, .byte = 0x5c },
		{ .addr = 0xe93346, .byte = 0x41 },
		{ .addr = 0xe93347, .byte = 0x11 },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x5e },
		{ .addr = 0x00000e, .byte = 0x22 },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x5e2290, .byte = 0x80 },
		{ .addr = 0x5e2291, .byte = 0xf5 },
		{ .addr = 0x5e2292, .byte = 0x94 },
		{ .addr = 0x5e2293, .byte = 0x99 }
};

static const SST_RamByte eorw_final_ram_4[] = {
		{ .addr = 0xe93344, .byte = 0xb9 },
		{ .addr = 0xe93345, .byte = 0x5c },
		{ .addr = 0xe93346, .byte = 0x41 },
		{ .addr = 0xe93347, .byte = 0x11 },
		{ .addr = 0xfe70f8, .byte = 0x33 },
		{ .addr = 0xfe70f9, .byte = 0x46 },
		{ .addr = 0xfe70f4, .byte = 0xa1 },
		{ .addr = 0xfe70f5, .byte = 0x10 },
		{ .addr = 0xfe70f6, .byte = 0x00 },
		{ .addr = 0xfe70f7, .byte = 0xe9 },
		{ .addr = 0xfe70f2, .byte = 0xb9 },
		{ .addr = 0xfe70f3, .byte = 0x5c },
		{ .addr = 0xfe70f0, .byte = 0xf0 },
		{ .addr = 0xfe70f1, .byte = 0x7d },
		{ .addr = 0xfe70ec, .byte = 0xb9 },
		{ .addr = 0xfe70ed, .byte = 0x55 },
		{ .addr = 0xfe70ee, .byte = 0x55 },
		{ .addr = 0xfe70ef, .byte = 0x6a },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x5e },
		{ .addr = 0x00000e, .byte = 0x22 },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x5e2290, .byte = 0x80 },
		{ .addr = 0x5e2291, .byte = 0xf5 },
		{ .addr = 0x5e2292, .byte = 0x94 },
		{ .addr = 0x5e2293, .byte = 0x99 }
};

static const SST_Transaction eorw_transactions_4[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7008380, .data = 21769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16675064, .data = 13126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16675060, .data = 41232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16675062, .data = 233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16675058, .data = 47452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16675056, .data = 61565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16675052, .data = 47445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16675054, .data = 21866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6169232, .data = 33013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6169234, .data = 38041, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_5[] = {
		{ .addr = 0x9f82bc, .byte = 0xb3 },
		{ .addr = 0x9f82bd, .byte = 0x45 },
		{ .addr = 0x9f82be, .byte = 0x3d },
		{ .addr = 0x9f82bf, .byte = 0x33 },
		{ .addr = 0x9f82c0, .byte = 0xa1 },
		{ .addr = 0x9f82c1, .byte = 0xb3 }
};

static const SST_RamByte eorw_final_ram_5[] = {
		{ .addr = 0x9f82bc, .byte = 0xb3 },
		{ .addr = 0x9f82bd, .byte = 0x45 },
		{ .addr = 0x9f82be, .byte = 0x3d },
		{ .addr = 0x9f82bf, .byte = 0x33 },
		{ .addr = 0x9f82c0, .byte = 0xa1 },
		{ .addr = 0x9f82c1, .byte = 0xb3 }
};

static const SST_Transaction eorw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10453696, .data = 41395, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_6[] = {
		{ .addr = 0xee3240, .byte = 0xb9 },
		{ .addr = 0xee3241, .byte = 0x5c },
		{ .addr = 0xee3242, .byte = 0x22 },
		{ .addr = 0xee3243, .byte = 0x6f },
		{ .addr = 0x087f6c, .byte = 0xa8 },
		{ .addr = 0x087f6d, .byte = 0xa7 },
		{ .addr = 0xee3244, .byte = 0xe1 },
		{ .addr = 0xee3245, .byte = 0xe6 }
};

static const SST_RamByte eorw_final_ram_6[] = {
		{ .addr = 0xee3240, .byte = 0xb9 },
		{ .addr = 0xee3241, .byte = 0x5c },
		{ .addr = 0xee3242, .byte = 0x22 },
		{ .addr = 0xee3243, .byte = 0x6f },
		{ .addr = 0x087f6c, .byte = 0x38 },
		{ .addr = 0x087f6d, .byte = 0x8a },
		{ .addr = 0xee3244, .byte = 0xe1 },
		{ .addr = 0xee3245, .byte = 0xe6 }
};

static const SST_Transaction eorw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 556908, .data = 43175, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15610436, .data = 57830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 556908, .data = 14474, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_7[] = {
		{ .addr = 0x1528a4, .byte = 0x0a },
		{ .addr = 0x1528a5, .byte = 0x52 },
		{ .addr = 0x1528a6, .byte = 0x41 },
		{ .addr = 0x1528a7, .byte = 0x0d },
		{ .addr = 0x1528a8, .byte = 0x11 },
		{ .addr = 0x1528a9, .byte = 0x19 },
		{ .addr = 0xc70020, .byte = 0xd7 },
		{ .addr = 0xc70021, .byte = 0x79 },
		{ .addr = 0x1528aa, .byte = 0x14 },
		{ .addr = 0x1528ab, .byte = 0x3f }
};

static const SST_RamByte eorw_final_ram_7[] = {
		{ .addr = 0x1528a4, .byte = 0x0a },
		{ .addr = 0x1528a5, .byte = 0x52 },
		{ .addr = 0x1528a6, .byte = 0x41 },
		{ .addr = 0x1528a7, .byte = 0x0d },
		{ .addr = 0x1528a8, .byte = 0x11 },
		{ .addr = 0x1528a9, .byte = 0x19 },
		{ .addr = 0xc70020, .byte = 0x96 },
		{ .addr = 0xc70021, .byte = 0x74 },
		{ .addr = 0x1528aa, .byte = 0x14 },
		{ .addr = 0x1528ab, .byte = 0x3f }
};

static const SST_Transaction eorw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1386664, .data = 4377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13041696, .data = 55161, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1386666, .data = 5183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13041696, .data = 38516, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_8[] = {
		{ .addr = 0xc070fe, .byte = 0xb5 },
		{ .addr = 0xc070ff, .byte = 0x70 },
		{ .addr = 0xc07100, .byte = 0xc6 },
		{ .addr = 0xc07101, .byte = 0x14 },
		{ .addr = 0xc07102, .byte = 0x9b },
		{ .addr = 0xc07103, .byte = 0xce },
		{ .addr = 0xd3fc84, .byte = 0x17 },
		{ .addr = 0xd3fc85, .byte = 0xf0 },
		{ .addr = 0xc07104, .byte = 0x74 },
		{ .addr = 0xc07105, .byte = 0x0a }
};

static const SST_RamByte eorw_final_ram_8[] = {
		{ .addr = 0xc070fe, .byte = 0xb5 },
		{ .addr = 0xc070ff, .byte = 0x70 },
		{ .addr = 0xc07100, .byte = 0xc6 },
		{ .addr = 0xc07101, .byte = 0x14 },
		{ .addr = 0xc07102, .byte = 0x9b },
		{ .addr = 0xc07103, .byte = 0xce },
		{ .addr = 0xd3fc84, .byte = 0x51 },
		{ .addr = 0xd3fc85, .byte = 0xc6 },
		{ .addr = 0xc07104, .byte = 0x74 },
		{ .addr = 0xc07105, .byte = 0x0a }
};

static const SST_Transaction eorw_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12611842, .data = 39886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13892740, .data = 6128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12611844, .data = 29706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13892740, .data = 20934, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_9[] = {
		{ .addr = 0x97a702, .byte = 0xbb },
		{ .addr = 0x97a703, .byte = 0x53 },
		{ .addr = 0x97a704, .byte = 0x16 },
		{ .addr = 0x97a705, .byte = 0x45 },
		{ .addr = 0xd04848, .byte = 0x38 },
		{ .addr = 0xd04849, .byte = 0x9b },
		{ .addr = 0x97a706, .byte = 0x00 },
		{ .addr = 0x97a707, .byte = 0x05 }
};

static const SST_RamByte eorw_final_ram_9[] = {
		{ .addr = 0x97a702, .byte = 0xbb },
		{ .addr = 0x97a703, .byte = 0x53 },
		{ .addr = 0x97a704, .byte = 0x16 },
		{ .addr = 0x97a705, .byte = 0x45 },
		{ .addr = 0xd04848, .byte = 0x30 },
		{ .addr = 0xd04849, .byte = 0x9f },
		{ .addr = 0x97a706, .byte = 0x00 },
		{ .addr = 0x97a707, .byte = 0x05 }
};

static const SST_Transaction eorw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13649992, .data = 14491, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9938694, .data = 5, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13649992, .data = 12447, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_10[] = {
		{ .addr = 0x0938ca, .byte = 0xbb },
		{ .addr = 0x0938cb, .byte = 0x72 },
		{ .addr = 0x0938cc, .byte = 0x59 },
		{ .addr = 0x0938cd, .byte = 0xcf },
		{ .addr = 0x0938ce, .byte = 0xa1 },
		{ .addr = 0x0938cf, .byte = 0xa9 },
		{ .addr = 0x2fbb2c, .byte = 0x7c },
		{ .addr = 0x2fbb2d, .byte = 0xa7 },
		{ .addr = 0x0938d0, .byte = 0x31 },
		{ .addr = 0x0938d1, .byte = 0xa4 }
};

static const SST_RamByte eorw_final_ram_10[] = {
		{ .addr = 0x0938ca, .byte = 0xbb },
		{ .addr = 0x0938cb, .byte = 0x72 },
		{ .addr = 0x0938cc, .byte = 0x59 },
		{ .addr = 0x0938cd, .byte = 0xcf },
		{ .addr = 0x0938ce, .byte = 0xa1 },
		{ .addr = 0x0938cf, .byte = 0xa9 },
		{ .addr = 0x2fbb2c, .byte = 0x6f },
		{ .addr = 0x2fbb2d, .byte = 0xba },
		{ .addr = 0x0938d0, .byte = 0x31 },
		{ .addr = 0x0938d1, .byte = 0xa4 }
};

static const SST_Transaction eorw_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 604366, .data = 41385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3128108, .data = 31911, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 604368, .data = 12708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3128108, .data = 28602, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_11[] = {
		{ .addr = 0xf2db08, .byte = 0x0a },
		{ .addr = 0xf2db09, .byte = 0x74 },
		{ .addr = 0xf2db0a, .byte = 0x4d },
		{ .addr = 0xf2db0b, .byte = 0x6a },
		{ .addr = 0xf2db0c, .byte = 0xdd },
		{ .addr = 0xf2db0d, .byte = 0x2e },
		{ .addr = 0xf2db0e, .byte = 0x68 },
		{ .addr = 0xf2db0f, .byte = 0xf6 },
		{ .addr = 0x00000c, .byte = 0x02 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0xfd },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0x6afdec, .byte = 0x5e },
		{ .addr = 0x6afded, .byte = 0x19 },
		{ .addr = 0x6afdee, .byte = 0x1b },
		{ .addr = 0x6afdef, .byte = 0xe8 }
};

static const SST_RamByte eorw_final_ram_11[] = {
		{ .addr = 0xf2db08, .byte = 0x0a },
		{ .addr = 0xf2db09, .byte = 0x74 },
		{ .addr = 0xf2db0a, .byte = 0x4d },
		{ .addr = 0xf2db0b, .byte = 0x6a },
		{ .addr = 0xf2db0c, .byte = 0xdd },
		{ .addr = 0xf2db0d, .byte = 0x2e },
		{ .addr = 0xf2db0e, .byte = 0x68 },
		{ .addr = 0xf2db0f, .byte = 0xf6 },
		{ .addr = 0x170c7e, .byte = 0xdb },
		{ .addr = 0x170c7f, .byte = 0x0c },
		{ .addr = 0x170c7a, .byte = 0x84 },
		{ .addr = 0x170c7b, .byte = 0x1c },
		{ .addr = 0x170c7c, .byte = 0x00 },
		{ .addr = 0x170c7d, .byte = 0xf2 },
		{ .addr = 0x170c78, .byte = 0x0a },
		{ .addr = 0x170c79, .byte = 0x74 },
		{ .addr = 0x170c76, .byte = 0x76 },
		{ .addr = 0x170c77, .byte = 0xa5 },
		{ .addr = 0x170c72, .byte = 0x0a },
		{ .addr = 0x170c73, .byte = 0x71 },
		{ .addr = 0x170c74, .byte = 0xaa },
		{ .addr = 0x170c75, .byte = 0x7d },
		{ .addr = 0x00000c, .byte = 0x02 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0xfd },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0x6afdec, .byte = 0x5e },
		{ .addr = 0x6afded, .byte = 0x19 },
		{ .addr = 0x6afdee, .byte = 0x1b },
		{ .addr = 0x6afdef, .byte = 0xe8 }
};

static const SST_Transaction eorw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15915788, .data = 56622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15915790, .data = 26870, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8222372, .data = 34847, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1510526, .data = 56076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1510522, .data = 33820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1510524, .data = 242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1510520, .data = 2676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1510518, .data = 30373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1510514, .data = 2673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1510516, .data = 43645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 65004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7011820, .data = 24089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7011822, .data = 7144, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_12[] = {
		{ .addr = 0x5775f8, .byte = 0xb7 },
		{ .addr = 0x5775f9, .byte = 0x53 },
		{ .addr = 0x5775fa, .byte = 0x5e },
		{ .addr = 0x5775fb, .byte = 0x59 },
		{ .addr = 0x00000c, .byte = 0xf3 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0xb27cec, .byte = 0x51 },
		{ .addr = 0xb27ced, .byte = 0xc1 },
		{ .addr = 0xb27cee, .byte = 0xc8 },
		{ .addr = 0xb27cef, .byte = 0x4b }
};

static const SST_RamByte eorw_final_ram_12[] = {
		{ .addr = 0x5775f8, .byte = 0xb7 },
		{ .addr = 0x5775f9, .byte = 0x53 },
		{ .addr = 0x5775fa, .byte = 0x5e },
		{ .addr = 0x5775fb, .byte = 0x59 },
		{ .addr = 0xc14b56, .byte = 0x75 },
		{ .addr = 0xc14b57, .byte = 0xfa },
		{ .addr = 0xc14b52, .byte = 0xa5 },
		{ .addr = 0xc14b53, .byte = 0x07 },
		{ .addr = 0xc14b54, .byte = 0x00 },
		{ .addr = 0xc14b55, .byte = 0x57 },
		{ .addr = 0xc14b50, .byte = 0xb7 },
		{ .addr = 0xc14b51, .byte = 0x53 },
		{ .addr = 0xc14b4e, .byte = 0x09 },
		{ .addr = 0xc14b4f, .byte = 0x15 },
		{ .addr = 0xc14b4a, .byte = 0xb7 },
		{ .addr = 0xc14b4b, .byte = 0x55 },
		{ .addr = 0xc14b4c, .byte = 0x92 },
		{ .addr = 0xc14b4d, .byte = 0x57 },
		{ .addr = 0x00000c, .byte = 0xf3 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0xb27cec, .byte = 0x51 },
		{ .addr = 0xb27ced, .byte = 0xc1 },
		{ .addr = 0xb27cee, .byte = 0xc8 },
		{ .addr = 0xb27cef, .byte = 0x4b }
};

static const SST_Transaction eorw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5703956, .data = 29954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12667734, .data = 30202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12667730, .data = 42247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12667732, .data = 87, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12667728, .data = 46931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12667726, .data = 2325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12667722, .data = 46933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12667724, .data = 37463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11697388, .data = 20929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11697390, .data = 51275, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_13[] = {
		{ .addr = 0x8ec514, .byte = 0xbb },
		{ .addr = 0x8ec515, .byte = 0x61 },
		{ .addr = 0x8ec516, .byte = 0x1c },
		{ .addr = 0x8ec517, .byte = 0xdc },
		{ .addr = 0x8ae9be, .byte = 0xac },
		{ .addr = 0x8ae9bf, .byte = 0x8b },
		{ .addr = 0x8ec518, .byte = 0x08 },
		{ .addr = 0x8ec519, .byte = 0x91 }
};

static const SST_RamByte eorw_final_ram_13[] = {
		{ .addr = 0x8ec514, .byte = 0xbb },
		{ .addr = 0x8ec515, .byte = 0x61 },
		{ .addr = 0x8ec516, .byte = 0x1c },
		{ .addr = 0x8ec517, .byte = 0xdc },
		{ .addr = 0x8ae9be, .byte = 0xeb },
		{ .addr = 0x8ae9bf, .byte = 0xf8 },
		{ .addr = 0x8ec518, .byte = 0x08 },
		{ .addr = 0x8ec519, .byte = 0x91 }
};

static const SST_Transaction eorw_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9103806, .data = 44171, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9356568, .data = 2193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9103806, .data = 60408, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_14[] = {
		{ .addr = 0x704974, .byte = 0xb1 },
		{ .addr = 0x704975, .byte = 0x78 },
		{ .addr = 0x704976, .byte = 0xcc },
		{ .addr = 0x704977, .byte = 0xcf },
		{ .addr = 0x704978, .byte = 0xa4 },
		{ .addr = 0x704979, .byte = 0xa2 },
		{ .addr = 0x00000c, .byte = 0x78 },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0x6e3592, .byte = 0x4d },
		{ .addr = 0x6e3593, .byte = 0x5a },
		{ .addr = 0x6e3594, .byte = 0xdb },
		{ .addr = 0x6e3595, .byte = 0xca }
};

static const SST_RamByte eorw_final_ram_14[] = {
		{ .addr = 0x704974, .byte = 0xb1 },
		{ .addr = 0x704975, .byte = 0x78 },
		{ .addr = 0x704976, .byte = 0xcc },
		{ .addr = 0x704977, .byte = 0xcf },
		{ .addr = 0x704978, .byte = 0xa4 },
		{ .addr = 0x704979, .byte = 0xa2 },
		{ .addr = 0x8f5a86, .byte = 0x49 },
		{ .addr = 0x8f5a87, .byte = 0x78 },
		{ .addr = 0x8f5a82, .byte = 0x03 },
		{ .addr = 0x8f5a83, .byte = 0x05 },
		{ .addr = 0x8f5a84, .byte = 0x00 },
		{ .addr = 0x8f5a85, .byte = 0x70 },
		{ .addr = 0x8f5a80, .byte = 0xb1 },
		{ .addr = 0x8f5a81, .byte = 0x78 },
		{ .addr = 0x8f5a7e, .byte = 0xcc },
		{ .addr = 0x8f5a7f, .byte = 0xcf },
		{ .addr = 0x8f5a7a, .byte = 0xb1 },
		{ .addr = 0x8f5a7b, .byte = 0x71 },
		{ .addr = 0x8f5a7c, .byte = 0xff },
		{ .addr = 0x8f5a7d, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0x78 },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0x6e3592, .byte = 0x4d },
		{ .addr = 0x6e3593, .byte = 0x5a },
		{ .addr = 0x6e3594, .byte = 0xdb },
		{ .addr = 0x6e3595, .byte = 0xca }
};

static const SST_Transaction eorw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7358840, .data = 42146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16764110, .data = 58518, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9394822, .data = 18808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9394818, .data = 773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9394820, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9394816, .data = 45432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9394814, .data = 52431, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9394810, .data = 45425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9394812, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 30830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7222674, .data = 19802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7222676, .data = 56266, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_15[] = {
		{ .addr = 0xa0a876, .byte = 0xbf },
		{ .addr = 0xa0a877, .byte = 0x6e },
		{ .addr = 0xa0a878, .byte = 0x9d },
		{ .addr = 0xa0a879, .byte = 0xd2 },
		{ .addr = 0xa0a87a, .byte = 0x6c },
		{ .addr = 0xa0a87b, .byte = 0x1d },
		{ .addr = 0x00000c, .byte = 0xcf },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xec },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0xc8ecba, .byte = 0x92 },
		{ .addr = 0xc8ecbb, .byte = 0xf6 },
		{ .addr = 0xc8ecbc, .byte = 0xc5 },
		{ .addr = 0xc8ecbd, .byte = 0x27 }
};

static const SST_RamByte eorw_final_ram_15[] = {
		{ .addr = 0xa0a876, .byte = 0xbf },
		{ .addr = 0xa0a877, .byte = 0x6e },
		{ .addr = 0xa0a878, .byte = 0x9d },
		{ .addr = 0xa0a879, .byte = 0xd2 },
		{ .addr = 0xa0a87a, .byte = 0x6c },
		{ .addr = 0xa0a87b, .byte = 0x1d },
		{ .addr = 0x86cee2, .byte = 0xa8 },
		{ .addr = 0x86cee3, .byte = 0x78 },
		{ .addr = 0x86cede, .byte = 0x86 },
		{ .addr = 0x86cedf, .byte = 0x03 },
		{ .addr = 0x86cee0, .byte = 0x00 },
		{ .addr = 0x86cee1, .byte = 0xa0 },
		{ .addr = 0x86cedc, .byte = 0xbf },
		{ .addr = 0x86cedd, .byte = 0x6e },
		{ .addr = 0x86ceda, .byte = 0x10 },
		{ .addr = 0x86cedb, .byte = 0xf1 },
		{ .addr = 0x86ced6, .byte = 0xbf },
		{ .addr = 0x86ced7, .byte = 0x71 },
		{ .addr = 0x86ced8, .byte = 0xb0 },
		{ .addr = 0x86ced9, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0xcf },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xec },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0xc8ecba, .byte = 0x92 },
		{ .addr = 0xc8ecbb, .byte = 0xf6 },
		{ .addr = 0xc8ecbc, .byte = 0xc5 },
		{ .addr = 0xc8ecbd, .byte = 0x27 }
};

static const SST_Transaction eorw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10528890, .data = 27677, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16584944, .data = 17982, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8834786, .data = 43128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8834782, .data = 34307, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8834784, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8834780, .data = 49006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8834778, .data = 4337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8834774, .data = 49009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8834776, .data = 45309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13167802, .data = 37622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13167804, .data = 50471, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_16[] = {
		{ .addr = 0xf302e0, .byte = 0xb3 },
		{ .addr = 0xf302e1, .byte = 0x57 },
		{ .addr = 0xf302e2, .byte = 0xb2 },
		{ .addr = 0xf302e3, .byte = 0x38 },
		{ .addr = 0xb9c3ca, .byte = 0x80 },
		{ .addr = 0xb9c3cb, .byte = 0x37 },
		{ .addr = 0xf302e4, .byte = 0x6e },
		{ .addr = 0xf302e5, .byte = 0xe4 }
};

static const SST_RamByte eorw_final_ram_16[] = {
		{ .addr = 0xf302e0, .byte = 0xb3 },
		{ .addr = 0xf302e1, .byte = 0x57 },
		{ .addr = 0xf302e2, .byte = 0xb2 },
		{ .addr = 0xf302e3, .byte = 0x38 },
		{ .addr = 0xb9c3ca, .byte = 0xdf },
		{ .addr = 0xb9c3cb, .byte = 0x0f },
		{ .addr = 0xf302e4, .byte = 0x6e },
		{ .addr = 0xf302e5, .byte = 0xe4 }
};

static const SST_Transaction eorw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12174282, .data = 32823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15925988, .data = 28388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12174282, .data = 57103, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_17[] = {
		{ .addr = 0x58d3f4, .byte = 0x0a },
		{ .addr = 0x58d3f5, .byte = 0x5a },
		{ .addr = 0x58d3f6, .byte = 0x41 },
		{ .addr = 0x58d3f7, .byte = 0x81 },
		{ .addr = 0x58d3f8, .byte = 0x11 },
		{ .addr = 0x58d3f9, .byte = 0xb6 },
		{ .addr = 0x4cd77a, .byte = 0x17 },
		{ .addr = 0x4cd77b, .byte = 0x44 },
		{ .addr = 0x58d3fa, .byte = 0x99 },
		{ .addr = 0x58d3fb, .byte = 0xae }
};

static const SST_RamByte eorw_final_ram_17[] = {
		{ .addr = 0x58d3f4, .byte = 0x0a },
		{ .addr = 0x58d3f5, .byte = 0x5a },
		{ .addr = 0x58d3f6, .byte = 0x41 },
		{ .addr = 0x58d3f7, .byte = 0x81 },
		{ .addr = 0x58d3f8, .byte = 0x11 },
		{ .addr = 0x58d3f9, .byte = 0xb6 },
		{ .addr = 0x4cd77a, .byte = 0x56 },
		{ .addr = 0x4cd77b, .byte = 0xc5 },
		{ .addr = 0x58d3fa, .byte = 0x99 },
		{ .addr = 0x58d3fb, .byte = 0xae }
};

static const SST_Transaction eorw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5821432, .data = 4534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5035898, .data = 5956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5821434, .data = 39342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5035898, .data = 22213, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_18[] = {
		{ .addr = 0x995bb0, .byte = 0xb3 },
		{ .addr = 0x995bb1, .byte = 0x78 },
		{ .addr = 0x995bb2, .byte = 0x80 },
		{ .addr = 0x995bb3, .byte = 0xe4 },
		{ .addr = 0x995bb4, .byte = 0x75 },
		{ .addr = 0x995bb5, .byte = 0x03 },
		{ .addr = 0xff80e4, .byte = 0x42 },
		{ .addr = 0xff80e5, .byte = 0x8a },
		{ .addr = 0x995bb6, .byte = 0xe4 },
		{ .addr = 0x995bb7, .byte = 0x9c }
};

static const SST_RamByte eorw_final_ram_18[] = {
		{ .addr = 0x995bb0, .byte = 0xb3 },
		{ .addr = 0x995bb1, .byte = 0x78 },
		{ .addr = 0x995bb2, .byte = 0x80 },
		{ .addr = 0x995bb3, .byte = 0xe4 },
		{ .addr = 0x995bb4, .byte = 0x75 },
		{ .addr = 0x995bb5, .byte = 0x03 },
		{ .addr = 0xff80e4, .byte = 0xd3 },
		{ .addr = 0xff80e5, .byte = 0x4a },
		{ .addr = 0x995bb6, .byte = 0xe4 },
		{ .addr = 0x995bb7, .byte = 0x9c }
};

static const SST_Transaction eorw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10050484, .data = 29955, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16744676, .data = 17034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10050486, .data = 58524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16744676, .data = 54090, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_19[] = {
		{ .addr = 0xd41cba, .byte = 0xbb },
		{ .addr = 0xd41cbb, .byte = 0x42 },
		{ .addr = 0xd41cbc, .byte = 0xa1 },
		{ .addr = 0xd41cbd, .byte = 0x4d },
		{ .addr = 0xd41cbe, .byte = 0xc9 },
		{ .addr = 0xd41cbf, .byte = 0x9d }
};

static const SST_RamByte eorw_final_ram_19[] = {
		{ .addr = 0xd41cba, .byte = 0xbb },
		{ .addr = 0xd41cbb, .byte = 0x42 },
		{ .addr = 0xd41cbc, .byte = 0xa1 },
		{ .addr = 0xd41cbd, .byte = 0x4d },
		{ .addr = 0xd41cbe, .byte = 0xc9 },
		{ .addr = 0xd41cbf, .byte = 0x9d }
};

static const SST_Transaction eorw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13900990, .data = 51613, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_20[] = {
		{ .addr = 0x0fcbfa, .byte = 0xb5 },
		{ .addr = 0x0fcbfb, .byte = 0x77 },
		{ .addr = 0x0fcbfc, .byte = 0x7f },
		{ .addr = 0x0fcbfd, .byte = 0xa7 },
		{ .addr = 0x0fcbfe, .byte = 0xcf },
		{ .addr = 0x0fcbff, .byte = 0x33 },
		{ .addr = 0xd29992, .byte = 0x98 },
		{ .addr = 0xd29993, .byte = 0x88 },
		{ .addr = 0x0fcc00, .byte = 0xeb },
		{ .addr = 0x0fcc01, .byte = 0x89 }
};

static const SST_RamByte eorw_final_ram_20[] = {
		{ .addr = 0x0fcbfa, .byte = 0xb5 },
		{ .addr = 0x0fcbfb, .byte = 0x77 },
		{ .addr = 0x0fcbfc, .byte = 0x7f },
		{ .addr = 0x0fcbfd, .byte = 0xa7 },
		{ .addr = 0x0fcbfe, .byte = 0xcf },
		{ .addr = 0x0fcbff, .byte = 0x33 },
		{ .addr = 0xd29992, .byte = 0xc9 },
		{ .addr = 0xd29993, .byte = 0xb0 },
		{ .addr = 0x0fcc00, .byte = 0xeb },
		{ .addr = 0x0fcc01, .byte = 0x89 }
};

static const SST_Transaction eorw_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1035262, .data = 53043, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13801874, .data = 39048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1035264, .data = 60297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13801874, .data = 51632, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_21[] = {
		{ .addr = 0xd79c02, .byte = 0x0a },
		{ .addr = 0xd79c03, .byte = 0x45 },
		{ .addr = 0xd79c04, .byte = 0x0e },
		{ .addr = 0xd79c05, .byte = 0xbe },
		{ .addr = 0xd79c06, .byte = 0x57 },
		{ .addr = 0xd79c07, .byte = 0x8c },
		{ .addr = 0xd79c08, .byte = 0x19 },
		{ .addr = 0xd79c09, .byte = 0x1a }
};

static const SST_RamByte eorw_final_ram_21[] = {
		{ .addr = 0xd79c02, .byte = 0x0a },
		{ .addr = 0xd79c03, .byte = 0x45 },
		{ .addr = 0xd79c04, .byte = 0x0e },
		{ .addr = 0xd79c05, .byte = 0xbe },
		{ .addr = 0xd79c06, .byte = 0x57 },
		{ .addr = 0xd79c07, .byte = 0x8c },
		{ .addr = 0xd79c08, .byte = 0x19 },
		{ .addr = 0xd79c09, .byte = 0x1a }
};

static const SST_Transaction eorw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14130182, .data = 22412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14130184, .data = 6426, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_22[] = {
		{ .addr = 0x27a89e, .byte = 0xb9 },
		{ .addr = 0x27a89f, .byte = 0x59 },
		{ .addr = 0x27a8a0, .byte = 0x89 },
		{ .addr = 0x27a8a1, .byte = 0xcb },
		{ .addr = 0x565558, .byte = 0x23 },
		{ .addr = 0x565559, .byte = 0xee },
		{ .addr = 0x27a8a2, .byte = 0xcb },
		{ .addr = 0x27a8a3, .byte = 0x82 }
};

static const SST_RamByte eorw_final_ram_22[] = {
		{ .addr = 0x27a89e, .byte = 0xb9 },
		{ .addr = 0x27a89f, .byte = 0x59 },
		{ .addr = 0x27a8a0, .byte = 0x89 },
		{ .addr = 0x27a8a1, .byte = 0xcb },
		{ .addr = 0x565558, .byte = 0x38 },
		{ .addr = 0x565559, .byte = 0x8e },
		{ .addr = 0x27a8a2, .byte = 0xcb },
		{ .addr = 0x27a8a3, .byte = 0x82 }
};

static const SST_Transaction eorw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5657944, .data = 9198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2599074, .data = 52098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5657944, .data = 14478, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_23[] = {
		{ .addr = 0xe5aa4c, .byte = 0xb9 },
		{ .addr = 0xe5aa4d, .byte = 0x44 },
		{ .addr = 0xe5aa4e, .byte = 0xc1 },
		{ .addr = 0xe5aa4f, .byte = 0x7f },
		{ .addr = 0xe5aa50, .byte = 0x08 },
		{ .addr = 0xe5aa51, .byte = 0x4d }
};

static const SST_RamByte eorw_final_ram_23[] = {
		{ .addr = 0xe5aa4c, .byte = 0xb9 },
		{ .addr = 0xe5aa4d, .byte = 0x44 },
		{ .addr = 0xe5aa4e, .byte = 0xc1 },
		{ .addr = 0xe5aa4f, .byte = 0x7f },
		{ .addr = 0xe5aa50, .byte = 0x08 },
		{ .addr = 0xe5aa51, .byte = 0x4d }
};

static const SST_Transaction eorw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15051344, .data = 2125, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_24[] = {
		{ .addr = 0x7668ae, .byte = 0x0a },
		{ .addr = 0x7668af, .byte = 0x46 },
		{ .addr = 0x7668b0, .byte = 0x5f },
		{ .addr = 0x7668b1, .byte = 0x3e },
		{ .addr = 0x7668b2, .byte = 0x15 },
		{ .addr = 0x7668b3, .byte = 0x8f },
		{ .addr = 0x7668b4, .byte = 0x0f },
		{ .addr = 0x7668b5, .byte = 0xd6 }
};

static const SST_RamByte eorw_final_ram_24[] = {
		{ .addr = 0x7668ae, .byte = 0x0a },
		{ .addr = 0x7668af, .byte = 0x46 },
		{ .addr = 0x7668b0, .byte = 0x5f },
		{ .addr = 0x7668b1, .byte = 0x3e },
		{ .addr = 0x7668b2, .byte = 0x15 },
		{ .addr = 0x7668b3, .byte = 0x8f },
		{ .addr = 0x7668b4, .byte = 0x0f },
		{ .addr = 0x7668b5, .byte = 0xd6 }
};

static const SST_Transaction eorw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7760050, .data = 5519, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7760052, .data = 4054, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_25[] = {
		{ .addr = 0x7bcf24, .byte = 0xb3 },
		{ .addr = 0x7bcf25, .byte = 0x75 },
		{ .addr = 0x7bcf26, .byte = 0x45 },
		{ .addr = 0x7bcf27, .byte = 0xc5 },
		{ .addr = 0x7bcf28, .byte = 0x34 },
		{ .addr = 0x7bcf29, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0xe0 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0xea97ec, .byte = 0xb1 },
		{ .addr = 0xea97ed, .byte = 0xbb },
		{ .addr = 0xea97ee, .byte = 0x0a },
		{ .addr = 0xea97ef, .byte = 0x36 }
};

static const SST_RamByte eorw_final_ram_25[] = {
		{ .addr = 0x7bcf24, .byte = 0xb3 },
		{ .addr = 0x7bcf25, .byte = 0x75 },
		{ .addr = 0x7bcf26, .byte = 0x45 },
		{ .addr = 0x7bcf27, .byte = 0xc5 },
		{ .addr = 0x7bcf28, .byte = 0x34 },
		{ .addr = 0x7bcf29, .byte = 0x2a },
		{ .addr = 0x34ef48, .byte = 0xcf },
		{ .addr = 0x34ef49, .byte = 0x26 },
		{ .addr = 0x34ef44, .byte = 0x06 },
		{ .addr = 0x34ef45, .byte = 0x1e },
		{ .addr = 0x34ef46, .byte = 0x00 },
		{ .addr = 0x34ef47, .byte = 0x7b },
		{ .addr = 0x34ef42, .byte = 0xb3 },
		{ .addr = 0x34ef43, .byte = 0x75 },
		{ .addr = 0x34ef40, .byte = 0x37 },
		{ .addr = 0x34ef41, .byte = 0x95 },
		{ .addr = 0x34ef3c, .byte = 0xb3 },
		{ .addr = 0x34ef3d, .byte = 0x71 },
		{ .addr = 0x34ef3e, .byte = 0xbf },
		{ .addr = 0x34ef3f, .byte = 0x96 },
		{ .addr = 0x00000c, .byte = 0xe0 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0xea97ec, .byte = 0xb1 },
		{ .addr = 0xea97ed, .byte = 0xbb },
		{ .addr = 0xea97ee, .byte = 0x0a },
		{ .addr = 0xea97ef, .byte = 0x36 }
};

static const SST_Transaction eorw_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8113960, .data = 13354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9844628, .data = 60458, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3469128, .data = 53030, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3469124, .data = 1566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3469126, .data = 123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3469122, .data = 45941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3469120, .data = 14229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3469116, .data = 45937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3469118, .data = 49046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15374316, .data = 45499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15374318, .data = 2614, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_26[] = {
		{ .addr = 0x4a6b6c, .byte = 0xb7 },
		{ .addr = 0x4a6b6d, .byte = 0x55 },
		{ .addr = 0x4a6b6e, .byte = 0x27 },
		{ .addr = 0x4a6b6f, .byte = 0x9c },
		{ .addr = 0x00000c, .byte = 0x1d },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xef },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x06efe8, .byte = 0xe3 },
		{ .addr = 0x06efe9, .byte = 0x21 },
		{ .addr = 0x06efea, .byte = 0xa9 },
		{ .addr = 0x06efeb, .byte = 0x17 }
};

static const SST_RamByte eorw_final_ram_26[] = {
		{ .addr = 0x4a6b6c, .byte = 0xb7 },
		{ .addr = 0x4a6b6d, .byte = 0x55 },
		{ .addr = 0x4a6b6e, .byte = 0x27 },
		{ .addr = 0x4a6b6f, .byte = 0x9c },
		{ .addr = 0x24c984, .byte = 0x6b },
		{ .addr = 0x24c985, .byte = 0x6e },
		{ .addr = 0x24c980, .byte = 0xa1 },
		{ .addr = 0x24c981, .byte = 0x15 },
		{ .addr = 0x24c982, .byte = 0x00 },
		{ .addr = 0x24c983, .byte = 0x4a },
		{ .addr = 0x24c97e, .byte = 0xb7 },
		{ .addr = 0x24c97f, .byte = 0x55 },
		{ .addr = 0x24c97c, .byte = 0x12 },
		{ .addr = 0x24c97d, .byte = 0x81 },
		{ .addr = 0x24c978, .byte = 0xb7 },
		{ .addr = 0x24c979, .byte = 0x55 },
		{ .addr = 0x24c97a, .byte = 0xd5 },
		{ .addr = 0x24c97b, .byte = 0x82 },
		{ .addr = 0x00000c, .byte = 0x1d },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xef },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x06efe8, .byte = 0xe3 },
		{ .addr = 0x06efe9, .byte = 0x21 },
		{ .addr = 0x06efea, .byte = 0xa9 },
		{ .addr = 0x06efeb, .byte = 0x17 }
};

static const SST_Transaction eorw_transactions_26[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8524416, .data = 35109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2410884, .data = 27502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2410880, .data = 41237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2410882, .data = 74, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2410878, .data = 46933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2410876, .data = 4737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2410872, .data = 46933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2410874, .data = 54658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61416, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 454632, .data = 58145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 454634, .data = 43287, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_27[] = {
		{ .addr = 0x86cb40, .byte = 0xb1 },
		{ .addr = 0x86cb41, .byte = 0x65 },
		{ .addr = 0x86cb42, .byte = 0x55 },
		{ .addr = 0x86cb43, .byte = 0x5d },
		{ .addr = 0x335874, .byte = 0xdd },
		{ .addr = 0x335875, .byte = 0xf7 },
		{ .addr = 0x86cb44, .byte = 0xfb },
		{ .addr = 0x86cb45, .byte = 0xe8 }
};

static const SST_RamByte eorw_final_ram_27[] = {
		{ .addr = 0x86cb40, .byte = 0xb1 },
		{ .addr = 0x86cb41, .byte = 0x65 },
		{ .addr = 0x86cb42, .byte = 0x55 },
		{ .addr = 0x86cb43, .byte = 0x5d },
		{ .addr = 0x335874, .byte = 0x54 },
		{ .addr = 0x335875, .byte = 0x5d },
		{ .addr = 0x86cb44, .byte = 0xfb },
		{ .addr = 0x86cb45, .byte = 0xe8 }
};

static const SST_Transaction eorw_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3364980, .data = 56823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8833860, .data = 64488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3364980, .data = 21597, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_28[] = {
		{ .addr = 0x7ec592, .byte = 0xbb },
		{ .addr = 0x7ec593, .byte = 0x5b },
		{ .addr = 0x7ec594, .byte = 0xd6 },
		{ .addr = 0x7ec595, .byte = 0xb6 },
		{ .addr = 0x900014, .byte = 0x95 },
		{ .addr = 0x900015, .byte = 0xbd },
		{ .addr = 0x7ec596, .byte = 0x01 },
		{ .addr = 0x7ec597, .byte = 0xca }
};

static const SST_RamByte eorw_final_ram_28[] = {
		{ .addr = 0x7ec592, .byte = 0xbb },
		{ .addr = 0x7ec593, .byte = 0x5b },
		{ .addr = 0x7ec594, .byte = 0xd6 },
		{ .addr = 0x7ec595, .byte = 0xb6 },
		{ .addr = 0x900014, .byte = 0xa5 },
		{ .addr = 0x900015, .byte = 0xa1 },
		{ .addr = 0x7ec596, .byte = 0x01 },
		{ .addr = 0x7ec597, .byte = 0xca }
};

static const SST_Transaction eorw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9437204, .data = 38333, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8308118, .data = 458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9437204, .data = 42401, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_29[] = {
		{ .addr = 0x305fcc, .byte = 0xbf },
		{ .addr = 0x305fcd, .byte = 0x60 },
		{ .addr = 0x305fce, .byte = 0x57 },
		{ .addr = 0x305fcf, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0x25 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xc1 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0xc8c104, .byte = 0x88 },
		{ .addr = 0xc8c105, .byte = 0xd1 },
		{ .addr = 0xc8c106, .byte = 0x1f },
		{ .addr = 0xc8c107, .byte = 0xe3 }
};

static const SST_RamByte eorw_final_ram_29[] = {
		{ .addr = 0x305fcc, .byte = 0xbf },
		{ .addr = 0x305fcd, .byte = 0x60 },
		{ .addr = 0x305fce, .byte = 0x57 },
		{ .addr = 0x305fcf, .byte = 0x09 },
		{ .addr = 0x8dad76, .byte = 0x5f },
		{ .addr = 0x8dad77, .byte = 0xd0 },
		{ .addr = 0x8dad72, .byte = 0x27 },
		{ .addr = 0x8dad73, .byte = 0x07 },
		{ .addr = 0x8dad74, .byte = 0x00 },
		{ .addr = 0x8dad75, .byte = 0x30 },
		{ .addr = 0x8dad70, .byte = 0xbf },
		{ .addr = 0x8dad71, .byte = 0x60 },
		{ .addr = 0x8dad6e, .byte = 0x2a },
		{ .addr = 0x8dad6f, .byte = 0x21 },
		{ .addr = 0x8dad6a, .byte = 0xbf },
		{ .addr = 0x8dad6b, .byte = 0x75 },
		{ .addr = 0x8dad6c, .byte = 0xcc },
		{ .addr = 0x8dad6d, .byte = 0x70 },
		{ .addr = 0x00000c, .byte = 0x25 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xc1 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0xc8c104, .byte = 0x88 },
		{ .addr = 0xc8c105, .byte = 0xd1 },
		{ .addr = 0xc8c106, .byte = 0x1f },
		{ .addr = 0xc8c107, .byte = 0xe3 }
};

static const SST_Transaction eorw_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7350816, .data = 34702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9284982, .data = 24528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9284978, .data = 9991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9284980, .data = 48, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9284976, .data = 48992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9284974, .data = 10785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9284970, .data = 49013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9284972, .data = 52336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13156612, .data = 35025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13156614, .data = 8163, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_30[] = {
		{ .addr = 0xcb4b2c, .byte = 0x0a },
		{ .addr = 0xcb4b2d, .byte = 0x79 },
		{ .addr = 0xcb4b2e, .byte = 0x2d },
		{ .addr = 0xcb4b2f, .byte = 0xef },
		{ .addr = 0xcb4b30, .byte = 0x25 },
		{ .addr = 0xcb4b31, .byte = 0xe5 },
		{ .addr = 0xcb4b32, .byte = 0x7d },
		{ .addr = 0xcb4b33, .byte = 0x52 },
		{ .addr = 0xcb4b34, .byte = 0x54 },
		{ .addr = 0xcb4b35, .byte = 0x35 },
		{ .addr = 0xe57d52, .byte = 0x1d },
		{ .addr = 0xe57d53, .byte = 0x7d },
		{ .addr = 0xcb4b36, .byte = 0xcb },
		{ .addr = 0xcb4b37, .byte = 0x6e }
};

static const SST_RamByte eorw_final_ram_30[] = {
		{ .addr = 0xcb4b2c, .byte = 0x0a },
		{ .addr = 0xcb4b2d, .byte = 0x79 },
		{ .addr = 0xcb4b2e, .byte = 0x2d },
		{ .addr = 0xcb4b2f, .byte = 0xef },
		{ .addr = 0xcb4b30, .byte = 0x25 },
		{ .addr = 0xcb4b31, .byte = 0xe5 },
		{ .addr = 0xcb4b32, .byte = 0x7d },
		{ .addr = 0xcb4b33, .byte = 0x52 },
		{ .addr = 0xcb4b34, .byte = 0x54 },
		{ .addr = 0xcb4b35, .byte = 0x35 },
		{ .addr = 0xe57d52, .byte = 0x30 },
		{ .addr = 0xe57d53, .byte = 0x92 },
		{ .addr = 0xcb4b36, .byte = 0xcb },
		{ .addr = 0xcb4b37, .byte = 0x6e }
};

static const SST_Transaction eorw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13323056, .data = 9701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13323058, .data = 32082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13323060, .data = 21557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15039826, .data = 7549, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13323062, .data = 52078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15039826, .data = 12434, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorw_initial_ram_31[] = {
		{ .addr = 0x9e7616, .byte = 0xb5 },
		{ .addr = 0x9e7617, .byte = 0x5a },
		{ .addr = 0x9e7618, .byte = 0xb1 },
		{ .addr = 0x9e7619, .byte = 0x60 },
		{ .addr = 0x00000c, .byte = 0x2e },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x52940e, .byte = 0x38 },
		{ .addr = 0x52940f, .byte = 0xa2 },
		{ .addr = 0x529410, .byte = 0x84 },
		{ .addr = 0x529411, .byte = 0xfc }
};

static const SST_RamByte eorw_final_ram_31[] = {
		{ .addr = 0x9e7616, .byte = 0xb5 },
		{ .addr = 0x9e7617, .byte = 0x5a },
		{ .addr = 0x9e7618, .byte = 0xb1 },
		{ .addr = 0x9e7619, .byte = 0x60 },
		{ .addr = 0x11b0e4, .byte = 0x76 },
		{ .addr = 0x11b0e5, .byte = 0x18 },
		{ .addr = 0x11b0e0, .byte = 0x05 },
		{ .addr = 0x11b0e1, .byte = 0x07 },
		{ .addr = 0x11b0e2, .byte = 0x00 },
		{ .addr = 0x11b0e3, .byte = 0x9e },
		{ .addr = 0x11b0de, .byte = 0xb5 },
		{ .addr = 0x11b0df, .byte = 0x5a },
		{ .addr = 0x11b0dc, .byte = 0x72 },
		{ .addr = 0x11b0dd, .byte = 0x07 },
		{ .addr = 0x11b0d8, .byte = 0xb5 },
		{ .addr = 0x11b0d9, .byte = 0x51 },
		{ .addr = 0x11b0da, .byte = 0xad },
		{ .addr = 0x11b0db, .byte = 0x7a },
		{ .addr = 0x00000c, .byte = 0x2e },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x52940e, .byte = 0x38 },
		{ .addr = 0x52940f, .byte = 0xa2 },
		{ .addr = 0x529410, .byte = 0x84 },
		{ .addr = 0x529411, .byte = 0xfc }
};

static const SST_Transaction eorw_transactions_31[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8024582, .data = 7065, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159396, .data = 30232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159392, .data = 1287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159394, .data = 158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159390, .data = 46426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159388, .data = 29191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159384, .data = 46417, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159386, .data = 44410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 11858, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37902, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5411854, .data = 14498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5411856, .data = 34044, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase eorw[] = {
	{
		.name = "000 EOR.w D7, (d16, A7) bf6f",
		.initial = {
			.regs = {
				3609744020, 3243748271, 831628684, 3294858570, 1071185854, 3478528025, 3099394745, 3061239256, 3164450235, 93867188, 28156141, 1247932394, 2342496308, 3240447034, 180936924, 2715370, 1668710, 525, 4034242
			},
			.prefetch0 = 49007,
			.prefetch1 = 2731,
			.ram = eorw_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3609744020, 3243748271, 831628684, 3294858570, 1071185854, 3478528025, 3099394745, 3061239256, 3164450235, 93867188, 28156141, 1247932394, 2342496308, 3240447034, 180936924, 2715370, 1668696, 8717, 2524743910
			},
			.prefetch0 = 28897,
			.prefetch1 = 7097,
			.ram = eorw_final_ram_0,
			.ram_len = 28,
		},
		.transactions = eorw_transactions_0,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "001 EOR.w D4, (d8, A2, Xn) b972",
		.initial = {
			.regs = {
				3310316011, 2036078925, 320064577, 4162665259, 3178674156, 2345115109, 2275224798, 1241321344, 1846764340, 4200465160, 1396099136, 2668784708, 1512677982, 2567254626, 3383416605, 5818936, 1773018, 32778, 4965954
			},
			.prefetch0 = 47474,
			.prefetch1 = 56181,
			.ram = eorw_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3310316011, 2036078925, 320064577, 4162665259, 3178674156, 2345115109, 2275224798, 1241321344, 1846764340, 4200465160, 1396099136, 2668784708, 1512677982, 2567254626, 3383416605, 5818936, 1773004, 8202, 4114628564
			},
			.prefetch0 = 20453,
			.prefetch1 = 65525,
			.ram = eorw_final_ram_1,
			.ram_len = 28,
		},
		.transactions = eorw_transactions_1,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "002 EOR.w #, -(A1) 0a61",
		.initial = {
			.regs = {
				1866848645, 1846095943, 2135046082, 1219033731, 4134566548, 1298347751, 2063705273, 2778734909, 178242239, 3213425641, 4209981221, 2446580533, 2551995502, 1459120785, 3161601958, 9805504, 11609156, 34590, 8556644
			},
			.prefetch0 = 2657,
			.prefetch1 = 3344,
			.ram = eorw_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1866848645, 1846095943, 2135046082, 1219033731, 4134566548, 1298347751, 2063705273, 2778734909, 178242239, 3213425639, 4209981221, 2446580533, 2551995502, 1459120785, 3161601958, 9805504, 11609142, 10014, 467965120
			},
			.prefetch0 = 10853,
			.prefetch1 = 24756,
			.ram = eorw_final_ram_2,
			.ram_len = 28,
		},
		.transactions = eorw_transactions_2,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "003 EOR.w D6, (xxx).l bd79",
		.initial = {
			.regs = {
				2608255467, 3550810847, 235924404, 2256937495, 562843728, 3025196034, 2000825647, 2851536900, 1960116482, 1499306147, 2359994690, 982069596, 1031666662, 3459434455, 2765423298, 7078512, 14366320, 769, 1753980
			},
			.prefetch0 = 48505,
			.prefetch1 = 3127,
			.ram = eorw_initial_ram_3,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2608255467, 3550810847, 235924404, 2256937495, 562843728, 3025196034, 2000825647, 2851536900, 1960116482, 1499306147, 2359994690, 982069596, 1031666662, 3459434455, 2765423298, 7078512, 14366306, 8961, 436737178
			},
			.prefetch0 = 40947,
			.prefetch1 = 58857,
			.ram = eorw_final_ram_3,
			.ram_len = 30,
		},
		.transactions = eorw_transactions_3,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "004 EOR.w D4, (A4)+ b95c",
		.initial = {
			.regs = {
				2839204890, 3495884410, 477249245, 3365528316, 3442747990, 1306590631, 1669818455, 539371868, 632359503, 3690910632, 2065338335, 3736067373, 1433071741, 975256514, 1303196725, 4649392, 16675066, 41232, 15283016
			},
			.prefetch0 = 47452,
			.prefetch1 = 16657,
			.ram = eorw_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2839204890, 3495884410, 477249245, 3365528316, 3442747990, 1306590631, 1669818455, 539371868, 632359503, 3690910632, 2065338335, 3736067373, 1433071743, 975256514, 1303196725, 4649392, 16675052, 8464, 4116587156
			},
			.prefetch0 = 33013,
			.prefetch1 = 38041,
			.ram = eorw_final_ram_4,
			.ram_len = 26,
		},
		.transactions = eorw_transactions_4,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "005 EOR.w D1, D5 b345",
		.initial = {
			.regs = {
				4257401680, 1468524952, 3036191103, 179058678, 686185525, 285812573, 1944037133, 3574808147, 4020626656, 4116450717, 949154631, 3068378292, 1723332333, 1941474069, 3594380001, 2942194, 10195026, 1558, 10453696
			},
			.prefetch0 = 45893,
			.prefetch1 = 15667,
			.ram = eorw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4257401680, 1468524952, 3036191103, 179058678, 686185525, 285855429, 1944037133, 3574808147, 4020626656, 4116450717, 949154631, 3068378292, 1723332333, 1941474069, 3594380001, 2942194, 10195026, 1560, 10453698
			},
			.prefetch0 = 15667,
			.prefetch1 = 41395,
			.ram = eorw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = eorw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 EOR.w D4, (A4)+ b95c",
		.initial = {
			.regs = {
				57088758, 730835587, 2965392989, 3362497239, 1301319725, 2075794060, 2930009807, 405629650, 2371912716, 3089524936, 427344775, 3780785497, 2215149420, 3370010000, 1310350239, 3068070, 3287218, 34061, 15610436
			},
			.prefetch0 = 47452,
			.prefetch1 = 8815,
			.ram = eorw_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				57088758, 730835587, 2965392989, 3362497239, 1301319725, 2075794060, 2930009807, 405629650, 2371912716, 3089524936, 427344775, 3780785497, 2215149422, 3370010000, 1310350239, 3068070, 3287218, 34048, 15610438
			},
			.prefetch0 = 8815,
			.prefetch1 = 57830,
			.ram = eorw_final_ram_6,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 EOR.w #, (A2) 0a52",
		.initial = {
			.regs = {
				2548340297, 716052618, 1387559151, 3257231370, 70440919, 1812331305, 1503931810, 3828987894, 3004658460, 1210304587, 1271332896, 2167177515, 2212865581, 3610905282, 3924974259, 3063824, 16727836, 1563, 1386664
			},
			.prefetch0 = 2642,
			.prefetch1 = 16653,
			.ram = eorw_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2548340297, 716052618, 1387559151, 3257231370, 70440919, 1812331305, 1503931810, 3828987894, 3004658460, 1210304587, 1271332896, 2167177515, 2212865581, 3610905282, 3924974259, 3063824, 16727836, 1560, 1386668
			},
			.prefetch0 = 4377,
			.prefetch1 = 5183,
			.ram = eorw_final_ram_7,
			.ram_len = 10,
		},
		.transactions = eorw_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 EOR.w D2, (d8, A0, Xn) b570",
		.initial = {
			.regs = {
				687932320, 2419220051, 1672758838, 33868633, 1206506459, 405422960, 3851034056, 2415404570, 1540596732, 3462741662, 3154322630, 477222670, 3208271988, 923187486, 2710669911, 12500928, 7799468, 9493, 12611842
			},
			.prefetch0 = 46448,
			.prefetch1 = 50708,
			.ram = eorw_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				687932320, 2419220051, 1672758838, 33868633, 1206506459, 405422960, 3851034056, 2415404570, 1540596732, 3462741662, 3154322630, 477222670, 3208271988, 923187486, 2710669911, 12500928, 7799468, 9488, 12611846
			},
			.prefetch0 = 39886,
			.prefetch1 = 29706,
			.ram = eorw_final_ram_8,
			.ram_len = 10,
		},
		.transactions = eorw_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 EOR.w D5, (A3) bb53",
		.initial = {
			.regs = {
				74828333, 2180773414, 3463272967, 433293221, 1739042142, 3465611268, 3932446143, 1954903198, 1372329314, 3259412501, 1121845509, 2999994440, 4063511246, 1814743956, 122939964, 5032128, 11860824, 32792, 9938694
			},
			.prefetch0 = 47955,
			.prefetch1 = 5701,
			.ram = eorw_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				74828333, 2180773414, 3463272967, 433293221, 1739042142, 3465611268, 3932446143, 1954903198, 1372329314, 3259412501, 1121845509, 2999994440, 4063511246, 1814743956, 122939964, 5032128, 11860824, 32784, 9938696
			},
			.prefetch0 = 5701,
			.prefetch1 = 5,
			.ram = eorw_final_ram_9,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 EOR.w D5, (d8, A2, Xn) bb72",
		.initial = {
			.regs = {
				1605002958, 677556051, 2770485762, 2596162516, 2745142945, 357438237, 1431353137, 399832726, 4248319362, 4031021502, 65120320, 2103105970, 1462607434, 720996133, 2174975328, 9570732, 12364810, 41732, 604366
			},
			.prefetch0 = 47986,
			.prefetch1 = 22991,
			.ram = eorw_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1605002958, 677556051, 2770485762, 2596162516, 2745142945, 357438237, 1431353137, 399832726, 4248319362, 4031021502, 65120320, 2103105970, 1462607434, 720996133, 2174975328, 9570732, 12364810, 41728, 604370
			},
			.prefetch0 = 41385,
			.prefetch1 = 12708,
			.ram = eorw_final_ram_10,
			.ram_len = 10,
		},
		.transactions = eorw_transactions_10,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "011 EOR.w #, (d8, A4, Xn) 0a74",
		.initial = {
			.regs = {
				331270261, 4115281840, 94674960, 3857102860, 2292040828, 2235886543, 258827306, 2822566200, 3645215024, 3899965343, 2221182293, 200006320, 2419558253, 440790794, 1894930157, 14829554, 1510528, 33820, 15915788
			},
			.prefetch0 = 2676,
			.prefetch1 = 19818,
			.ram = eorw_initial_ram_11,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				331270261, 4115281840, 94674960, 3857102860, 2292040828, 2235886543, 258827306, 2822566200, 3645215024, 3899965343, 2221182293, 200006320, 2419558253, 440790794, 1894930157, 14829554, 1510514, 9244, 40566256
			},
			.prefetch0 = 24089,
			.prefetch1 = 7144,
			.ram = eorw_final_ram_11,
			.ram_len = 30,
		},
		.transactions = eorw_transactions_11,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "012 EOR.w D3, (A3) b753",
		.initial = {
			.regs = {
				675173389, 2077162642, 2664468241, 224476978, 53162677, 3640339819, 3013660554, 1839200284, 2541316160, 1790208164, 3408997983, 2455177493, 2038257220, 3176502421, 3380952650, 3664232, 12667736, 42247, 5731836
			},
			.prefetch0 = 46931,
			.prefetch1 = 24153,
			.ram = eorw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				675173389, 2077162642, 2664468241, 224476978, 53162677, 3640339819, 3013660554, 1839200284, 2541316160, 1790208164, 3408997983, 2455177493, 2038257220, 3176502421, 3380952650, 3664232, 12667722, 9479, 4088560880
			},
			.prefetch0 = 20929,
			.prefetch1 = 51275,
			.ram = eorw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = eorw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 EOR.w D5, -(A1) bb61",
		.initial = {
			.regs = {
				103049391, 3380454980, 4104825008, 3561253694, 3175005066, 375998323, 3669903268, 3750790867, 3682144076, 344648128, 1321564095, 1088686003, 4092471396, 2960009529, 608181940, 14304658, 8945440, 33537, 9356568
			},
			.prefetch0 = 47969,
			.prefetch1 = 7388,
			.ram = eorw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				103049391, 3380454980, 4104825008, 3561253694, 3175005066, 375998323, 3669903268, 3750790867, 3682144076, 344648126, 1321564095, 1088686003, 4092471396, 2960009529, 608181940, 14304658, 8945440, 33544, 9356570
			},
			.prefetch0 = 7388,
			.prefetch1 = 2193,
			.ram = eorw_final_ram_13,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_13,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "014 EOR.w D0, (xxx).w b178",
		.initial = {
			.regs = {
				4248309578, 2383818769, 250047858, 1045539847, 3019443110, 2753549710, 65949537, 1613661350, 23111633, 3573755009, 350835421, 1280255364, 4145510230, 836253817, 302484840, 11047798, 9394824, 773, 7358840
			},
			.prefetch0 = 45432,
			.prefetch1 = 52431,
			.ram = eorw_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4248309578, 2383818769, 250047858, 1045539847, 3019443110, 2753549710, 65949537, 1613661350, 23111633, 3573755009, 350835421, 1280255364, 4145510230, 836253817, 302484840, 11047798, 9394810, 8965, 2020488598
			},
			.prefetch0 = 19802,
			.prefetch1 = 56266,
			.ram = eorw_final_ram_14,
			.ram_len = 28,
		},
		.transactions = eorw_transactions_14,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "015 EOR.w D7, (d16, A6) bf6e",
		.initial = {
			.regs = {
				1509111288, 891644290, 3889757016, 3534733037, 882329355, 4144458451, 952225439, 1535837605, 2763528786, 298169777, 4122006151, 3690777820, 2998934292, 3126242251, 2969400095, 13935818, 8834788, 34307, 10528890
			},
			.prefetch0 = 49006,
			.prefetch1 = 40402,
			.ram = eorw_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1509111288, 891644290, 3889757016, 3534733037, 882329355, 4144458451, 952225439, 1535837605, 2763528786, 298169777, 4122006151, 3690777820, 2998934292, 3126242251, 2969400095, 13935818, 8834774, 9731, 3486051518
			},
			.prefetch0 = 37622,
			.prefetch1 = 50471,
			.ram = eorw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = eorw_transactions_15,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "016 EOR.w D1, (A7) b357",
		.initial = {
			.regs = {
				2729374487, 360210232, 437628662, 1456441381, 3982577291, 2590764469, 557142287, 703922475, 1306058618, 1960730590, 190417176, 3174382754, 2528127379, 1695787391, 133654356, 12567214, 12174282, 42497, 15925988
			},
			.prefetch0 = 45911,
			.prefetch1 = 45624,
			.ram = eorw_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2729374487, 360210232, 437628662, 1456441381, 3982577291, 2590764469, 557142287, 703922475, 1306058618, 1960730590, 190417176, 3174382754, 2528127379, 1695787391, 133654356, 12567214, 12174282, 42504, 15925990
			},
			.prefetch0 = 45624,
			.prefetch1 = 28388,
			.ram = eorw_final_ram_16,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_16,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "017 EOR.w #, (A2)+ 0a5a",
		.initial = {
			.regs = {
				1679021833, 4279335139, 2923308482, 247115943, 395273718, 2208998370, 1341401940, 1495588513, 1009116042, 1752671251, 1498208122, 823425604, 3964045620, 1966438144, 4113026521, 10402644, 3421732, 42261, 5821432
			},
			.prefetch0 = 2650,
			.prefetch1 = 16769,
			.ram = eorw_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1679021833, 4279335139, 2923308482, 247115943, 395273718, 2208998370, 1341401940, 1495588513, 1009116042, 1752671251, 1498208124, 823425604, 3964045620, 1966438144, 4113026521, 10402644, 3421732, 42256, 5821436
			},
			.prefetch0 = 4534,
			.prefetch1 = 39342,
			.ram = eorw_final_ram_17,
			.ram_len = 10,
		},
		.transactions = eorw_transactions_17,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "018 EOR.w D1, (xxx).w b378",
		.initial = {
			.regs = {
				4277389870, 154898880, 1869826786, 3667711599, 3370007666, 574975094, 4142775002, 862002340, 1936373936, 3599665009, 3635415428, 3360680480, 1131507123, 68366921, 1042754561, 8033276, 9967114, 9244, 10050484
			},
			.prefetch0 = 45944,
			.prefetch1 = 32996,
			.ram = eorw_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4277389870, 154898880, 1869826786, 3667711599, 3370007666, 574975094, 4142775002, 862002340, 1936373936, 3599665009, 3635415428, 3360680480, 1131507123, 68366921, 1042754561, 8033276, 9967114, 9240, 10050488
			},
			.prefetch0 = 29955,
			.prefetch1 = 58524,
			.ram = eorw_final_ram_18,
			.ram_len = 10,
		},
		.transactions = eorw_transactions_18,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "019 EOR.w D5, D2 bb42",
		.initial = {
			.regs = {
				635203349, 3626695710, 3011044965, 1994189016, 4067667661, 3469514112, 439803500, 1426882540, 2077138680, 2582466816, 2013969669, 1184203861, 3638784040, 2287444740, 4236273140, 77676, 16548608, 33807, 13900990
			},
			.prefetch0 = 47938,
			.prefetch1 = 41293,
			.ram = eorw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				635203349, 3626695710, 3011015653, 1994189016, 4067667661, 3469514112, 439803500, 1426882540, 2077138680, 2582466816, 2013969669, 1184203861, 3638784040, 2287444740, 4236273140, 77676, 16548608, 33792, 13900992
			},
			.prefetch0 = 41293,
			.prefetch1 = 51613,
			.ram = eorw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = eorw_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 EOR.w D2, (d8, A7, Xn) b577",
		.initial = {
			.regs = {
				3457393691, 3776286975, 951865656, 647430423, 3034050919, 3659507675, 379728208, 648939739, 1671515410, 3534922677, 1442491838, 357310571, 1749573345, 505878685, 6049650, 10719768, 2396432, 8719, 1035262
			},
			.prefetch0 = 46455,
			.prefetch1 = 32679,
			.ram = eorw_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3457393691, 3776286975, 951865656, 647430423, 3034050919, 3659507675, 379728208, 648939739, 1671515410, 3534922677, 1442491838, 357310571, 1749573345, 505878685, 6049650, 10719768, 2396432, 8712, 1035266
			},
			.prefetch0 = 53043,
			.prefetch1 = 60297,
			.ram = eorw_final_ram_20,
			.ram_len = 10,
		},
		.transactions = eorw_transactions_20,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "021 EOR.w #, D5 0a45",
		.initial = {
			.regs = {
				79227267, 2857228559, 1942195126, 3407162547, 750172262, 2105844164, 3358517080, 1777312297, 1326831732, 1558712164, 1647931226, 453241940, 4033620693, 43006848, 346363573, 9967706, 972938, 9479, 14130182
			},
			.prefetch0 = 2629,
			.prefetch1 = 3774,
			.ram = eorw_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				79227267, 2857228559, 1942195126, 3407162547, 750172262, 2105847674, 3358517080, 1777312297, 1326831732, 1558712164, 1647931226, 453241940, 4033620693, 43006848, 346363573, 9967706, 972938, 9480, 14130186
			},
			.prefetch0 = 22412,
			.prefetch1 = 6426,
			.ram = eorw_final_ram_21,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_21,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "022 EOR.w D4, (A1)+ b959",
		.initial = {
			.regs = {
				1422471190, 2668172471, 1245801692, 4047724088, 352852832, 1428803916, 808248753, 325314174, 1702392646, 542528856, 3132961179, 1004785571, 3231496774, 3588265920, 1037259464, 7527194, 14346656, 8713, 2599074
			},
			.prefetch0 = 47449,
			.prefetch1 = 35275,
			.ram = eorw_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1422471190, 2668172471, 1245801692, 4047724088, 352852832, 1428803916, 808248753, 325314174, 1702392646, 542528858, 3132961179, 1004785571, 3231496774, 3588265920, 1037259464, 7527194, 14346656, 8704, 2599076
			},
			.prefetch0 = 35275,
			.prefetch1 = 52098,
			.ram = eorw_final_ram_22,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 EOR.w D4, D4 b944",
		.initial = {
			.regs = {
				3888081543, 454232016, 4172039571, 3088038188, 3433030325, 4170591144, 2860268882, 3755604165, 25420268, 4032148572, 102768086, 935457394, 2808046658, 3605746482, 505005634, 192768, 5709442, 41243, 15051344
			},
			.prefetch0 = 47428,
			.prefetch1 = 49535,
			.ram = eorw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3888081543, 454232016, 4172039571, 3088038188, 3432972288, 4170591144, 2860268882, 3755604165, 25420268, 4032148572, 102768086, 935457394, 2808046658, 3605746482, 505005634, 192768, 5709442, 41236, 15051346
			},
			.prefetch0 = 49535,
			.prefetch1 = 2125,
			.ram = eorw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = eorw_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 EOR.w #, D6 0a46",
		.initial = {
			.regs = {
				4032697927, 4007041358, 2044001730, 3549354092, 3650788263, 3032506765, 2882825858, 2142516790, 1854961813, 1395393341, 1468775707, 118822585, 734676525, 2044539808, 4143142413, 14829060, 9803266, 1556, 7760050
			},
			.prefetch0 = 2630,
			.prefetch1 = 24382,
			.ram = eorw_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4032697927, 4007041358, 2044001730, 3549354092, 3650788263, 3032506765, 2882810300, 2142516790, 1854961813, 1395393341, 1468775707, 118822585, 734676525, 2044539808, 4143142413, 14829060, 9803266, 1552, 7760054
			},
			.prefetch0 = 5519,
			.prefetch1 = 4054,
			.ram = eorw_final_ram_24,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_24,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "025 EOR.w D1, (d8, A5, Xn) b375",
		.initial = {
			.regs = {
				253850, 3439532284, 2563937210, 2586583437, 3856714443, 2736877555, 753551638, 3388611636, 4031008865, 2842749189, 219773012, 3998705335, 3945863132, 3214306565, 3353763336, 16385952, 3469130, 1566, 8113960
			},
			.prefetch0 = 45941,
			.prefetch1 = 17861,
			.ram = eorw_initial_ram_25,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				253850, 3439532284, 2563937210, 2586583437, 3856714443, 2736877555, 753551638, 3388611636, 4031008865, 2842749189, 219773012, 3998705335, 3945863132, 3214306565, 3353763336, 16385952, 3469116, 9758, 3773470704
			},
			.prefetch0 = 45499,
			.prefetch1 = 2614,
			.ram = eorw_final_ram_25,
			.ram_len = 28,
		},
		.transactions = eorw_transactions_25,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "026 EOR.w D3, (A5) b755",
		.initial = {
			.regs = {
				3394394663, 3928505581, 2876458484, 3101266159, 1711277899, 4004779636, 3059267911, 1824915636, 123042077, 1508503104, 733368424, 2658126569, 3050021601, 3582071425, 3081742201, 8684384, 2410886, 41237, 4877168
			},
			.prefetch0 = 46933,
			.prefetch1 = 10140,
			.ram = eorw_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3394394663, 3928505581, 2876458484, 3101266159, 1711277899, 4004779636, 3059267911, 1824915636, 123042077, 1508503104, 733368424, 2658126569, 3050021601, 3582071425, 3081742201, 8684384, 2410872, 8469, 486993900
			},
			.prefetch0 = 58145,
			.prefetch1 = 43287,
			.ram = eorw_final_ram_26,
			.ram_len = 26,
		},
		.transactions = eorw_transactions_26,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "027 EOR.w D0, -(A5) b165",
		.initial = {
			.regs = {
				3096152490, 2036154725, 2148534360, 3395830014, 4052974713, 2364239698, 1844498304, 2431205876, 2815710389, 2648160095, 1068689089, 449730218, 3974760960, 2100516982, 3938412709, 870878, 11725088, 8712, 8833860
			},
			.prefetch0 = 45413,
			.prefetch1 = 21853,
			.ram = eorw_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3096152490, 2036154725, 2148534360, 3395830014, 4052974713, 2364239698, 1844498304, 2431205876, 2815710389, 2648160095, 1068689089, 449730218, 3974760960, 2100516980, 3938412709, 870878, 11725088, 8704, 8833862
			},
			.prefetch0 = 21853,
			.prefetch1 = 64488,
			.ram = eorw_final_ram_27,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_27,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "028 EOR.w D5, (A3)+ bb5b",
		.initial = {
			.regs = {
				2587012444, 4074100085, 2267607431, 3184369781, 67416685, 329855004, 907499668, 1991136045, 3680981219, 2575139151, 2537340384, 412090388, 91919571, 1493550813, 639568745, 9765484, 13134238, 795, 8308118
			},
			.prefetch0 = 47963,
			.prefetch1 = 54966,
			.ram = eorw_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2587012444, 4074100085, 2267607431, 3184369781, 67416685, 329855004, 907499668, 1991136045, 3680981219, 2575139151, 2537340384, 412090390, 91919571, 1493550813, 639568745, 9765484, 13134238, 792, 8308120
			},
			.prefetch0 = 54966,
			.prefetch1 = 458,
			.ram = eorw_final_ram_28,
			.ram_len = 8,
		},
		.transactions = eorw_transactions_28,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "029 EOR.w D7, -(A0) bf60",
		.initial = {
			.regs = {
				4255993130, 1492170975, 596811735, 2145412354, 2040988695, 2373098107, 3315647679, 3071790554, 3429902883, 622066119, 3871449398, 3450988028, 581527855, 3724391255, 1437335969, 8335350, 9284984, 9991, 3170256
			},
			.prefetch0 = 48992,
			.prefetch1 = 22281,
			.ram = eorw_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4255993130, 1492170975, 596811735, 2145412354, 2040988695, 2373098107, 3315647679, 3071790554, 3429902881, 622066119, 3871449398, 3450988028, 581527855, 3724391255, 1437335969, 8335350, 9284970, 9991, 633913608
			},
			.prefetch0 = 35025,
			.prefetch1 = 8163,
			.ram = eorw_final_ram_29,
			.ram_len = 26,
		},
		.transactions = eorw_transactions_29,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "030 EOR.w #, (xxx).l 0a79",
		.initial = {
			.regs = {
				1414620574, 810395745, 938286957, 4211807609, 1899180706, 3932203961, 7025282, 3645195206, 4255865752, 2262994352, 1932686122, 3573428100, 1849299005, 373831543, 2800357080, 10048020, 11432156, 34051, 13323056
			},
			.prefetch0 = 2681,
			.prefetch1 = 11759,
			.ram = eorw_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1414620574, 810395745, 938286957, 4211807609, 1899180706, 3932203961, 7025282, 3645195206, 4255865752, 2262994352, 1932686122, 3573428100, 1849299005, 373831543, 2800357080, 10048020, 11432156, 34048, 13323064
			},
			.prefetch0 = 21557,
			.prefetch1 = 52078,
			.ram = eorw_final_ram_30,
			.ram_len = 14,
		},
		.transactions = eorw_transactions_30,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "031 EOR.w D2, (A2)+ b55a",
		.initial = {
			.regs = {
				1030577011, 2849551591, 3947901039, 4025350830, 699951655, 3399843263, 864335243, 3102778789, 3725485504, 1610959584, 2910482951, 1230695759, 886140086, 4230449978, 3865628766, 13643418, 1159398, 1287, 10384922
			},
			.prefetch0 = 46426,
			.prefetch1 = 45408,
			.ram = eorw_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1030577011, 2849551591, 3947901039, 4025350830, 699951655, 3399843263, 864335243, 3102778789, 3725485504, 1610959584, 2910482953, 1230695759, 886140086, 4230449978, 3865628766, 13643418, 1159384, 9479, 777163794
			},
			.prefetch0 = 14498,
			.prefetch1 = 34044,
			.ram = eorw_final_ram_31,
			.ram_len = 26,
		},
		.transactions = eorw_transactions_31,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_EORW_H */