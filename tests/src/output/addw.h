#ifndef RBT_ADDW_H
#define RBT_ADDW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addw_initial_ram_0[] = {
		{ .addr = 0x71734e, .byte = 0x52 },
		{ .addr = 0x71734f, .byte = 0x44 },
		{ .addr = 0x717350, .byte = 0x3f },
		{ .addr = 0x717351, .byte = 0x46 },
		{ .addr = 0x717352, .byte = 0xe6 },
		{ .addr = 0x717353, .byte = 0x5e }
};

static const SST_RamByte addw_final_ram_0[] = {
		{ .addr = 0x71734e, .byte = 0x52 },
		{ .addr = 0x71734f, .byte = 0x44 },
		{ .addr = 0x717350, .byte = 0x3f },
		{ .addr = 0x717351, .byte = 0x46 },
		{ .addr = 0x717352, .byte = 0xe6 },
		{ .addr = 0x717353, .byte = 0x5e }
};

static const SST_Transaction addw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7435090, .data = 58974, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_1[] = {
		{ .addr = 0xfd108e, .byte = 0x56 },
		{ .addr = 0xfd108f, .byte = 0x50 },
		{ .addr = 0xfd1090, .byte = 0x91 },
		{ .addr = 0xfd1091, .byte = 0x2b },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0x8e2f5c, .byte = 0xca },
		{ .addr = 0x8e2f5d, .byte = 0xbb },
		{ .addr = 0x8e2f5e, .byte = 0x8a },
		{ .addr = 0x8e2f5f, .byte = 0xb8 }
};

static const SST_RamByte addw_final_ram_1[] = {
		{ .addr = 0xfd108e, .byte = 0x56 },
		{ .addr = 0xfd108f, .byte = 0x50 },
		{ .addr = 0xfd1090, .byte = 0x91 },
		{ .addr = 0xfd1091, .byte = 0x2b },
		{ .addr = 0xacb06c, .byte = 0x10 },
		{ .addr = 0xacb06d, .byte = 0x90 },
		{ .addr = 0xacb068, .byte = 0x20 },
		{ .addr = 0xacb069, .byte = 0x13 },
		{ .addr = 0xacb06a, .byte = 0x00 },
		{ .addr = 0xacb06b, .byte = 0xfd },
		{ .addr = 0xacb066, .byte = 0x56 },
		{ .addr = 0xacb067, .byte = 0x50 },
		{ .addr = 0xacb064, .byte = 0xb7 },
		{ .addr = 0xacb065, .byte = 0x51 },
		{ .addr = 0xacb060, .byte = 0x56 },
		{ .addr = 0xacb061, .byte = 0x55 },
		{ .addr = 0xacb062, .byte = 0x83 },
		{ .addr = 0xacb063, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0x8e2f5c, .byte = 0xca },
		{ .addr = 0x8e2f5d, .byte = 0xbb },
		{ .addr = 0x8e2f5e, .byte = 0x8a },
		{ .addr = 0x8e2f5f, .byte = 0xb8 }
};

static const SST_Transaction addw_transactions_1[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14923600, .data = 55800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11317356, .data = 4240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11317352, .data = 8211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11317354, .data = 253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11317350, .data = 22096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11317348, .data = 46929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11317344, .data = 22101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11317346, .data = 33763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9318236, .data = 51899, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9318238, .data = 35512, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_2[] = {
		{ .addr = 0x8cebf4, .byte = 0xda },
		{ .addr = 0x8cebf5, .byte = 0x78 },
		{ .addr = 0x8cebf6, .byte = 0xb1 },
		{ .addr = 0x8cebf7, .byte = 0x73 },
		{ .addr = 0x8cebf8, .byte = 0xb9 },
		{ .addr = 0x8cebf9, .byte = 0x06 },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xd2f712, .byte = 0x87 },
		{ .addr = 0xd2f713, .byte = 0x45 },
		{ .addr = 0xd2f714, .byte = 0x4a },
		{ .addr = 0xd2f715, .byte = 0x5c }
};

static const SST_RamByte addw_final_ram_2[] = {
		{ .addr = 0x8cebf4, .byte = 0xda },
		{ .addr = 0x8cebf5, .byte = 0x78 },
		{ .addr = 0x8cebf6, .byte = 0xb1 },
		{ .addr = 0x8cebf7, .byte = 0x73 },
		{ .addr = 0x8cebf8, .byte = 0xb9 },
		{ .addr = 0x8cebf9, .byte = 0x06 },
		{ .addr = 0x1b5810, .byte = 0xeb },
		{ .addr = 0x1b5811, .byte = 0xf8 },
		{ .addr = 0x1b580c, .byte = 0x84 },
		{ .addr = 0x1b580d, .byte = 0x0a },
		{ .addr = 0x1b580e, .byte = 0x00 },
		{ .addr = 0x1b580f, .byte = 0x8c },
		{ .addr = 0x1b580a, .byte = 0xda },
		{ .addr = 0x1b580b, .byte = 0x78 },
		{ .addr = 0x1b5808, .byte = 0xb1 },
		{ .addr = 0x1b5809, .byte = 0x73 },
		{ .addr = 0x1b5804, .byte = 0xda },
		{ .addr = 0x1b5805, .byte = 0x71 },
		{ .addr = 0x1b5806, .byte = 0xff },
		{ .addr = 0x1b5807, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xd2f712, .byte = 0x87 },
		{ .addr = 0xd2f713, .byte = 0x45 },
		{ .addr = 0xd2f714, .byte = 0x4a },
		{ .addr = 0xd2f715, .byte = 0x5c }
};

static const SST_Transaction addw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9235448, .data = 47366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16757106, .data = 13649, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1792016, .data = 60408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1792012, .data = 33802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1792014, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1792010, .data = 55928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1792008, .data = 45427, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1792004, .data = 55921, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1792006, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13825810, .data = 34629, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13825812, .data = 19036, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_3[] = {
		{ .addr = 0xfb08c2, .byte = 0xd2 },
		{ .addr = 0xfb08c3, .byte = 0x63 },
		{ .addr = 0xfb08c4, .byte = 0x8b },
		{ .addr = 0xfb08c5, .byte = 0xe0 },
		{ .addr = 0x00000c, .byte = 0x52 },
		{ .addr = 0x00000d, .byte = 0x2a },
		{ .addr = 0x00000e, .byte = 0x30 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x2a3022, .byte = 0xb6 },
		{ .addr = 0x2a3023, .byte = 0x12 },
		{ .addr = 0x2a3024, .byte = 0xab },
		{ .addr = 0x2a3025, .byte = 0xe8 }
};

static const SST_RamByte addw_final_ram_3[] = {
		{ .addr = 0xfb08c2, .byte = 0xd2 },
		{ .addr = 0xfb08c3, .byte = 0x63 },
		{ .addr = 0xfb08c4, .byte = 0x8b },
		{ .addr = 0xfb08c5, .byte = 0xe0 },
		{ .addr = 0x532814, .byte = 0x08 },
		{ .addr = 0x532815, .byte = 0xc6 },
		{ .addr = 0x532810, .byte = 0x84 },
		{ .addr = 0x532811, .byte = 0x15 },
		{ .addr = 0x532812, .byte = 0x00 },
		{ .addr = 0x532813, .byte = 0xfb },
		{ .addr = 0x53280e, .byte = 0xd2 },
		{ .addr = 0x53280f, .byte = 0x63 },
		{ .addr = 0x53280c, .byte = 0x9a },
		{ .addr = 0x53280d, .byte = 0x37 },
		{ .addr = 0x532808, .byte = 0xd2 },
		{ .addr = 0x532809, .byte = 0x71 },
		{ .addr = 0x53280a, .byte = 0xea },
		{ .addr = 0x53280b, .byte = 0x1d },
		{ .addr = 0x00000c, .byte = 0x52 },
		{ .addr = 0x00000d, .byte = 0x2a },
		{ .addr = 0x00000e, .byte = 0x30 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x2a3022, .byte = 0xb6 },
		{ .addr = 0x2a3023, .byte = 0x12 },
		{ .addr = 0x2a3024, .byte = 0xab },
		{ .addr = 0x2a3025, .byte = 0xe8 }
};

static const SST_Transaction addw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1940022, .data = 32658, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5449748, .data = 2246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5449744, .data = 33813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5449746, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5449742, .data = 53859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5449740, .data = 39479, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5449736, .data = 53873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5449738, .data = 59933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12322, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2764834, .data = 46610, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2764836, .data = 44008, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_4[] = {
		{ .addr = 0xc67734, .byte = 0xd0 },
		{ .addr = 0xc67735, .byte = 0x6c },
		{ .addr = 0xc67736, .byte = 0x1b },
		{ .addr = 0xc67737, .byte = 0xb5 },
		{ .addr = 0xc67738, .byte = 0x02 },
		{ .addr = 0xc67739, .byte = 0xfb },
		{ .addr = 0xda991e, .byte = 0xe4 },
		{ .addr = 0xda991f, .byte = 0xd4 },
		{ .addr = 0xc6773a, .byte = 0xe5 },
		{ .addr = 0xc6773b, .byte = 0x78 }
};

static const SST_RamByte addw_final_ram_4[] = {
		{ .addr = 0xc67734, .byte = 0xd0 },
		{ .addr = 0xc67735, .byte = 0x6c },
		{ .addr = 0xc67736, .byte = 0x1b },
		{ .addr = 0xc67737, .byte = 0xb5 },
		{ .addr = 0xc67738, .byte = 0x02 },
		{ .addr = 0xc67739, .byte = 0xfb },
		{ .addr = 0xda991e, .byte = 0xe4 },
		{ .addr = 0xda991f, .byte = 0xd4 },
		{ .addr = 0xc6773a, .byte = 0xe5 },
		{ .addr = 0xc6773b, .byte = 0x78 }
};

static const SST_Transaction addw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13006648, .data = 763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14326046, .data = 58580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13006650, .data = 58744, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_5[] = {
		{ .addr = 0xa941e0, .byte = 0xdc },
		{ .addr = 0xa941e1, .byte = 0x4f },
		{ .addr = 0xa941e2, .byte = 0xc0 },
		{ .addr = 0xa941e3, .byte = 0xbb },
		{ .addr = 0xa941e4, .byte = 0xef },
		{ .addr = 0xa941e5, .byte = 0x31 }
};

static const SST_RamByte addw_final_ram_5[] = {
		{ .addr = 0xa941e0, .byte = 0xdc },
		{ .addr = 0xa941e1, .byte = 0x4f },
		{ .addr = 0xa941e2, .byte = 0xc0 },
		{ .addr = 0xa941e3, .byte = 0xbb },
		{ .addr = 0xa941e4, .byte = 0xef },
		{ .addr = 0xa941e5, .byte = 0x31 }
};

static const SST_Transaction addw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11092452, .data = 61233, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_6[] = {
		{ .addr = 0xd264a4, .byte = 0xd7 },
		{ .addr = 0xd264a5, .byte = 0x6c },
		{ .addr = 0xd264a6, .byte = 0xfc },
		{ .addr = 0xd264a7, .byte = 0xd8 },
		{ .addr = 0xd264a8, .byte = 0x0b },
		{ .addr = 0xd264a9, .byte = 0x79 },
		{ .addr = 0x00000c, .byte = 0xd0 },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x4a },
		{ .addr = 0xf8614a, .byte = 0x40 },
		{ .addr = 0xf8614b, .byte = 0x74 },
		{ .addr = 0xf8614c, .byte = 0x2c },
		{ .addr = 0xf8614d, .byte = 0x6e }
};

static const SST_RamByte addw_final_ram_6[] = {
		{ .addr = 0xd264a4, .byte = 0xd7 },
		{ .addr = 0xd264a5, .byte = 0x6c },
		{ .addr = 0xd264a6, .byte = 0xfc },
		{ .addr = 0xd264a7, .byte = 0xd8 },
		{ .addr = 0xd264a8, .byte = 0x0b },
		{ .addr = 0xd264a9, .byte = 0x79 },
		{ .addr = 0x98ca54, .byte = 0x64 },
		{ .addr = 0x98ca55, .byte = 0xa6 },
		{ .addr = 0x98ca50, .byte = 0x82 },
		{ .addr = 0x98ca51, .byte = 0x13 },
		{ .addr = 0x98ca52, .byte = 0x00 },
		{ .addr = 0x98ca53, .byte = 0xd2 },
		{ .addr = 0x98ca4e, .byte = 0xd7 },
		{ .addr = 0x98ca4f, .byte = 0x6c },
		{ .addr = 0x98ca4c, .byte = 0xa4 },
		{ .addr = 0x98ca4d, .byte = 0x45 },
		{ .addr = 0x98ca48, .byte = 0xd7 },
		{ .addr = 0x98ca49, .byte = 0x71 },
		{ .addr = 0x98ca4a, .byte = 0xf1 },
		{ .addr = 0x98ca4b, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0xd0 },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x4a },
		{ .addr = 0xf8614a, .byte = 0x40 },
		{ .addr = 0xf8614b, .byte = 0x74 },
		{ .addr = 0xf8614c, .byte = 0x2c },
		{ .addr = 0xf8614d, .byte = 0x6e }
};

static const SST_Transaction addw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13788328, .data = 2937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9937988, .data = 19683, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10013268, .data = 25766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10013264, .data = 33299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10013266, .data = 210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10013262, .data = 55148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10013260, .data = 42053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10013256, .data = 55153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10013258, .data = 61847, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16277834, .data = 16500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16277836, .data = 11374, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_7[] = {
		{ .addr = 0x66b320, .byte = 0x58 },
		{ .addr = 0x66b321, .byte = 0x64 },
		{ .addr = 0x66b322, .byte = 0x89 },
		{ .addr = 0x66b323, .byte = 0x85 },
		{ .addr = 0x4bd2e8, .byte = 0x86 },
		{ .addr = 0x4bd2e9, .byte = 0xa6 },
		{ .addr = 0x66b324, .byte = 0xbc },
		{ .addr = 0x66b325, .byte = 0xa6 }
};

static const SST_RamByte addw_final_ram_7[] = {
		{ .addr = 0x66b320, .byte = 0x58 },
		{ .addr = 0x66b321, .byte = 0x64 },
		{ .addr = 0x66b322, .byte = 0x89 },
		{ .addr = 0x66b323, .byte = 0x85 },
		{ .addr = 0x4bd2e8, .byte = 0x86 },
		{ .addr = 0x4bd2e9, .byte = 0xaa },
		{ .addr = 0x66b324, .byte = 0xbc },
		{ .addr = 0x66b325, .byte = 0xa6 }
};

static const SST_Transaction addw_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4969192, .data = 34470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6730532, .data = 48294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4969192, .data = 34474, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_8[] = {
		{ .addr = 0xc85b9e, .byte = 0x5c },
		{ .addr = 0xc85b9f, .byte = 0x4e },
		{ .addr = 0xc85ba0, .byte = 0x28 },
		{ .addr = 0xc85ba1, .byte = 0xb5 },
		{ .addr = 0xc85ba2, .byte = 0xe1 },
		{ .addr = 0xc85ba3, .byte = 0xc8 }
};

static const SST_RamByte addw_final_ram_8[] = {
		{ .addr = 0xc85b9e, .byte = 0x5c },
		{ .addr = 0xc85b9f, .byte = 0x4e },
		{ .addr = 0xc85ba0, .byte = 0x28 },
		{ .addr = 0xc85ba1, .byte = 0xb5 },
		{ .addr = 0xc85ba2, .byte = 0xe1 },
		{ .addr = 0xc85ba3, .byte = 0xc8 }
};

static const SST_Transaction addw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13130658, .data = 57800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addw_initial_ram_9[] = {
		{ .addr = 0xe36906, .byte = 0xdf },
		{ .addr = 0xe36907, .byte = 0x76 },
		{ .addr = 0xe36908, .byte = 0x7b },
		{ .addr = 0xe36909, .byte = 0x5c },
		{ .addr = 0xe3690a, .byte = 0xa0 },
		{ .addr = 0xe3690b, .byte = 0x37 },
		{ .addr = 0x187838, .byte = 0xa2 },
		{ .addr = 0x187839, .byte = 0xe8 },
		{ .addr = 0xe3690c, .byte = 0x83 },
		{ .addr = 0xe3690d, .byte = 0xac }
};

static const SST_RamByte addw_final_ram_9[] = {
		{ .addr = 0xe36906, .byte = 0xdf },
		{ .addr = 0xe36907, .byte = 0x76 },
		{ .addr = 0xe36908, .byte = 0x7b },
		{ .addr = 0xe36909, .byte = 0x5c },
		{ .addr = 0xe3690a, .byte = 0xa0 },
		{ .addr = 0xe3690b, .byte = 0x37 },
		{ .addr = 0x187838, .byte = 0xc5 },
		{ .addr = 0x187839, .byte = 0x6c },
		{ .addr = 0xe3690c, .byte = 0x83 },
		{ .addr = 0xe3690d, .byte = 0xac }
};

static const SST_Transaction addw_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14903562, .data = 41015, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1603640, .data = 41704, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14903564, .data = 33708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1603640, .data = 50540, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_10[] = {
		{ .addr = 0x9fbf40, .byte = 0xdc },
		{ .addr = 0x9fbf41, .byte = 0x44 },
		{ .addr = 0x9fbf42, .byte = 0xed },
		{ .addr = 0x9fbf43, .byte = 0x80 },
		{ .addr = 0x9fbf44, .byte = 0x25 },
		{ .addr = 0x9fbf45, .byte = 0x4d }
};

static const SST_RamByte addw_final_ram_10[] = {
		{ .addr = 0x9fbf40, .byte = 0xdc },
		{ .addr = 0x9fbf41, .byte = 0x44 },
		{ .addr = 0x9fbf42, .byte = 0xed },
		{ .addr = 0x9fbf43, .byte = 0x80 },
		{ .addr = 0x9fbf44, .byte = 0x25 },
		{ .addr = 0x9fbf45, .byte = 0x4d }
};

static const SST_Transaction addw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10469188, .data = 9549, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_11[] = {
		{ .addr = 0x967f2c, .byte = 0xd5 },
		{ .addr = 0x967f2d, .byte = 0x5e },
		{ .addr = 0x967f2e, .byte = 0xb8 },
		{ .addr = 0x967f2f, .byte = 0xf1 },
		{ .addr = 0x00000c, .byte = 0x04 },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0xf0047e, .byte = 0xa5 },
		{ .addr = 0xf0047f, .byte = 0xe6 },
		{ .addr = 0xf00480, .byte = 0x68 },
		{ .addr = 0xf00481, .byte = 0x79 }
};

static const SST_RamByte addw_final_ram_11[] = {
		{ .addr = 0x967f2c, .byte = 0xd5 },
		{ .addr = 0x967f2d, .byte = 0x5e },
		{ .addr = 0x967f2e, .byte = 0xb8 },
		{ .addr = 0x967f2f, .byte = 0xf1 },
		{ .addr = 0x711e84, .byte = 0x7f },
		{ .addr = 0x711e85, .byte = 0x2e },
		{ .addr = 0x711e80, .byte = 0x07 },
		{ .addr = 0x711e81, .byte = 0x0f },
		{ .addr = 0x711e82, .byte = 0x00 },
		{ .addr = 0x711e83, .byte = 0x96 },
		{ .addr = 0x711e7e, .byte = 0xd5 },
		{ .addr = 0x711e7f, .byte = 0x5e },
		{ .addr = 0x711e7c, .byte = 0x4b },
		{ .addr = 0x711e7d, .byte = 0xbb },
		{ .addr = 0x711e78, .byte = 0xd5 },
		{ .addr = 0x711e79, .byte = 0x51 },
		{ .addr = 0x711e7a, .byte = 0xd8 },
		{ .addr = 0x711e7b, .byte = 0x48 },
		{ .addr = 0x00000c, .byte = 0x04 },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0xf0047e, .byte = 0xa5 },
		{ .addr = 0xf0047f, .byte = 0xe6 },
		{ .addr = 0xf00480, .byte = 0x68 },
		{ .addr = 0xf00481, .byte = 0x79 }
};

static const SST_Transaction addw_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4737978, .data = 53672, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413380, .data = 32558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413376, .data = 1807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413378, .data = 150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413374, .data = 54622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413372, .data = 19387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413368, .data = 54609, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7413370, .data = 55368, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 1264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15729790, .data = 42470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15729792, .data = 26745, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_12[] = {
		{ .addr = 0x3645e4, .byte = 0x54 },
		{ .addr = 0x3645e5, .byte = 0x58 },
		{ .addr = 0x3645e6, .byte = 0xd9 },
		{ .addr = 0x3645e7, .byte = 0x1a },
		{ .addr = 0x9448f6, .byte = 0x2c },
		{ .addr = 0x9448f7, .byte = 0xc2 },
		{ .addr = 0x3645e8, .byte = 0xb2 },
		{ .addr = 0x3645e9, .byte = 0xc1 }
};

static const SST_RamByte addw_final_ram_12[] = {
		{ .addr = 0x3645e4, .byte = 0x54 },
		{ .addr = 0x3645e5, .byte = 0x58 },
		{ .addr = 0x3645e6, .byte = 0xd9 },
		{ .addr = 0x3645e7, .byte = 0x1a },
		{ .addr = 0x9448f6, .byte = 0x2c },
		{ .addr = 0x9448f7, .byte = 0xc4 },
		{ .addr = 0x3645e8, .byte = 0xb2 },
		{ .addr = 0x3645e9, .byte = 0xc1 }
};

static const SST_Transaction addw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9718006, .data = 11458, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3556840, .data = 45761, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9718006, .data = 11460, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_13[] = {
		{ .addr = 0xa57cbc, .byte = 0xd2 },
		{ .addr = 0xa57cbd, .byte = 0x4b },
		{ .addr = 0xa57cbe, .byte = 0x07 },
		{ .addr = 0xa57cbf, .byte = 0xe5 },
		{ .addr = 0xa57cc0, .byte = 0x07 },
		{ .addr = 0xa57cc1, .byte = 0x8f }
};

static const SST_RamByte addw_final_ram_13[] = {
		{ .addr = 0xa57cbc, .byte = 0xd2 },
		{ .addr = 0xa57cbd, .byte = 0x4b },
		{ .addr = 0xa57cbe, .byte = 0x07 },
		{ .addr = 0xa57cbf, .byte = 0xe5 },
		{ .addr = 0xa57cc0, .byte = 0x07 },
		{ .addr = 0xa57cc1, .byte = 0x8f }
};

static const SST_Transaction addw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10845376, .data = 1935, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_14[] = {
		{ .addr = 0x31fce2, .byte = 0xd3 },
		{ .addr = 0x31fce3, .byte = 0x74 },
		{ .addr = 0x31fce4, .byte = 0xa0 },
		{ .addr = 0x31fce5, .byte = 0x0d },
		{ .addr = 0x31fce6, .byte = 0x82 },
		{ .addr = 0x31fce7, .byte = 0xcc },
		{ .addr = 0x00000c, .byte = 0x7d },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x5e },
		{ .addr = 0x6ebc5e, .byte = 0x03 },
		{ .addr = 0x6ebc5f, .byte = 0xd5 },
		{ .addr = 0x6ebc60, .byte = 0xb7 },
		{ .addr = 0x6ebc61, .byte = 0x3f }
};

static const SST_RamByte addw_final_ram_14[] = {
		{ .addr = 0x31fce2, .byte = 0xd3 },
		{ .addr = 0x31fce3, .byte = 0x74 },
		{ .addr = 0x31fce4, .byte = 0xa0 },
		{ .addr = 0x31fce5, .byte = 0x0d },
		{ .addr = 0x31fce6, .byte = 0x82 },
		{ .addr = 0x31fce7, .byte = 0xcc },
		{ .addr = 0xfca144, .byte = 0xfc },
		{ .addr = 0xfca145, .byte = 0xe4 },
		{ .addr = 0xfca140, .byte = 0xa3 },
		{ .addr = 0xfca141, .byte = 0x16 },
		{ .addr = 0xfca142, .byte = 0x00 },
		{ .addr = 0xfca143, .byte = 0x31 },
		{ .addr = 0xfca13e, .byte = 0xd3 },
		{ .addr = 0xfca13f, .byte = 0x74 },
		{ .addr = 0xfca13c, .byte = 0xb8 },
		{ .addr = 0xfca13d, .byte = 0x75 },
		{ .addr = 0xfca138, .byte = 0xd3 },
		{ .addr = 0xfca139, .byte = 0x75 },
		{ .addr = 0xfca13a, .byte = 0xd5 },
		{ .addr = 0xfca13b, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0x7d },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x5e },
		{ .addr = 0x6ebc5e, .byte = 0x03 },
		{ .addr = 0x6ebc5f, .byte = 0xd5 },
		{ .addr = 0x6ebc60, .byte = 0xb7 },
		{ .addr = 0x6ebc61, .byte = 0x3f }
};

static const SST_Transaction addw_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3276006, .data = 33484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12892276, .data = 52159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16556356, .data = 64740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16556352, .data = 41750, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16556354, .data = 49, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16556350, .data = 54132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16556348, .data = 47221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16556344, .data = 54133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16556346, .data = 54724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7257182, .data = 981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7257184, .data = 46911, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_15[] = {
		{ .addr = 0x134bdc, .byte = 0xda },
		{ .addr = 0x134bdd, .byte = 0x6f },
		{ .addr = 0x134bde, .byte = 0x2d },
		{ .addr = 0x134bdf, .byte = 0x38 },
		{ .addr = 0x134be0, .byte = 0xc5 },
		{ .addr = 0x134be1, .byte = 0xff },
		{ .addr = 0x79058a, .byte = 0x89 },
		{ .addr = 0x79058b, .byte = 0x8f },
		{ .addr = 0x134be2, .byte = 0xc8 },
		{ .addr = 0x134be3, .byte = 0x3e }
};

static const SST_RamByte addw_final_ram_15[] = {
		{ .addr = 0x134bdc, .byte = 0xda },
		{ .addr = 0x134bdd, .byte = 0x6f },
		{ .addr = 0x134bde, .byte = 0x2d },
		{ .addr = 0x134bdf, .byte = 0x38 },
		{ .addr = 0x134be0, .byte = 0xc5 },
		{ .addr = 0x134be1, .byte = 0xff },
		{ .addr = 0x79058a, .byte = 0x89 },
		{ .addr = 0x79058b, .byte = 0x8f },
		{ .addr = 0x134be2, .byte = 0xc8 },
		{ .addr = 0x134be3, .byte = 0x3e }
};

static const SST_Transaction addw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1264608, .data = 50687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7931274, .data = 35215, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1264610, .data = 51262, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_16[] = {
		{ .addr = 0x84d112, .byte = 0x06 },
		{ .addr = 0x84d113, .byte = 0x6d },
		{ .addr = 0x84d114, .byte = 0xa0 },
		{ .addr = 0x84d115, .byte = 0x59 },
		{ .addr = 0x84d116, .byte = 0x33 },
		{ .addr = 0x84d117, .byte = 0xdb },
		{ .addr = 0x84d118, .byte = 0x8f },
		{ .addr = 0x84d119, .byte = 0x10 },
		{ .addr = 0x00000c, .byte = 0x9b },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0xed },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xe2ed12, .byte = 0xcf },
		{ .addr = 0xe2ed13, .byte = 0x23 },
		{ .addr = 0xe2ed14, .byte = 0x03 },
		{ .addr = 0xe2ed15, .byte = 0x60 }
};

static const SST_RamByte addw_final_ram_16[] = {
		{ .addr = 0x84d112, .byte = 0x06 },
		{ .addr = 0x84d113, .byte = 0x6d },
		{ .addr = 0x84d114, .byte = 0xa0 },
		{ .addr = 0x84d115, .byte = 0x59 },
		{ .addr = 0x84d116, .byte = 0x33 },
		{ .addr = 0x84d117, .byte = 0xdb },
		{ .addr = 0x84d118, .byte = 0x8f },
		{ .addr = 0x84d119, .byte = 0x10 },
		{ .addr = 0x0afbec, .byte = 0xd1 },
		{ .addr = 0x0afbed, .byte = 0x16 },
		{ .addr = 0x0afbe8, .byte = 0xa5 },
		{ .addr = 0x0afbe9, .byte = 0x09 },
		{ .addr = 0x0afbea, .byte = 0x00 },
		{ .addr = 0x0afbeb, .byte = 0x84 },
		{ .addr = 0x0afbe6, .byte = 0x06 },
		{ .addr = 0x0afbe7, .byte = 0x6d },
		{ .addr = 0x0afbe4, .byte = 0x06 },
		{ .addr = 0x0afbe5, .byte = 0xf9 },
		{ .addr = 0x0afbe0, .byte = 0x06 },
		{ .addr = 0x0afbe1, .byte = 0x75 },
		{ .addr = 0x0afbe2, .byte = 0xac },
		{ .addr = 0x0afbe3, .byte = 0xd1 },
		{ .addr = 0x00000c, .byte = 0x9b },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0xed },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xe2ed12, .byte = 0xcf },
		{ .addr = 0xe2ed13, .byte = 0x23 },
		{ .addr = 0xe2ed14, .byte = 0x03 },
		{ .addr = 0xe2ed15, .byte = 0x60 }
};

static const SST_Transaction addw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8704278, .data = 13275, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8704280, .data = 36624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13698808, .data = 61116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 719852, .data = 53526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 719848, .data = 42249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 719850, .data = 132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 719846, .data = 1645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 719844, .data = 1785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 719840, .data = 1653, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 719842, .data = 44241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60690, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14871826, .data = 53027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14871828, .data = 864, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_17[] = {
		{ .addr = 0x6c3452, .byte = 0x50 },
		{ .addr = 0x6c3453, .byte = 0x54 },
		{ .addr = 0x6c3454, .byte = 0x38 },
		{ .addr = 0x6c3455, .byte = 0x48 },
		{ .addr = 0xb1299e, .byte = 0xed },
		{ .addr = 0xb1299f, .byte = 0x01 },
		{ .addr = 0x6c3456, .byte = 0xaf },
		{ .addr = 0x6c3457, .byte = 0x39 }
};

static const SST_RamByte addw_final_ram_17[] = {
		{ .addr = 0x6c3452, .byte = 0x50 },
		{ .addr = 0x6c3453, .byte = 0x54 },
		{ .addr = 0x6c3454, .byte = 0x38 },
		{ .addr = 0x6c3455, .byte = 0x48 },
		{ .addr = 0xb1299e, .byte = 0xed },
		{ .addr = 0xb1299f, .byte = 0x09 },
		{ .addr = 0x6c3456, .byte = 0xaf },
		{ .addr = 0x6c3457, .byte = 0x39 }
};

static const SST_Transaction addw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11610526, .data = 60673, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7091286, .data = 44857, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11610526, .data = 60681, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_18[] = {
		{ .addr = 0xa3b4a4, .byte = 0xdb },
		{ .addr = 0xa3b4a5, .byte = 0x73 },
		{ .addr = 0xa3b4a6, .byte = 0xb3 },
		{ .addr = 0xa3b4a7, .byte = 0xba },
		{ .addr = 0xa3b4a8, .byte = 0xf4 },
		{ .addr = 0xa3b4a9, .byte = 0x28 },
		{ .addr = 0x670484, .byte = 0xdc },
		{ .addr = 0x670485, .byte = 0x2a },
		{ .addr = 0xa3b4aa, .byte = 0x0b },
		{ .addr = 0xa3b4ab, .byte = 0x15 }
};

static const SST_RamByte addw_final_ram_18[] = {
		{ .addr = 0xa3b4a4, .byte = 0xdb },
		{ .addr = 0xa3b4a5, .byte = 0x73 },
		{ .addr = 0xa3b4a6, .byte = 0xb3 },
		{ .addr = 0xa3b4a7, .byte = 0xba },
		{ .addr = 0xa3b4a8, .byte = 0xf4 },
		{ .addr = 0xa3b4a9, .byte = 0x28 },
		{ .addr = 0x670484, .byte = 0x88 },
		{ .addr = 0x670485, .byte = 0xd2 },
		{ .addr = 0xa3b4aa, .byte = 0x0b },
		{ .addr = 0xa3b4ab, .byte = 0x15 }
};

static const SST_Transaction addw_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10728616, .data = 62504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751364, .data = 56362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10728618, .data = 2837, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6751364, .data = 35026, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_19[] = {
		{ .addr = 0x32b794, .byte = 0x5a },
		{ .addr = 0x32b795, .byte = 0x74 },
		{ .addr = 0x32b796, .byte = 0xe3 },
		{ .addr = 0x32b797, .byte = 0x8b },
		{ .addr = 0x32b798, .byte = 0x6c },
		{ .addr = 0x32b799, .byte = 0xd9 },
		{ .addr = 0x00000c, .byte = 0xe4 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0x87 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xd08794, .byte = 0xb8 },
		{ .addr = 0xd08795, .byte = 0x09 },
		{ .addr = 0xd08796, .byte = 0xc1 },
		{ .addr = 0xd08797, .byte = 0x42 }
};

static const SST_RamByte addw_final_ram_19[] = {
		{ .addr = 0x32b794, .byte = 0x5a },
		{ .addr = 0x32b795, .byte = 0x74 },
		{ .addr = 0x32b796, .byte = 0xe3 },
		{ .addr = 0x32b797, .byte = 0x8b },
		{ .addr = 0x32b798, .byte = 0x6c },
		{ .addr = 0x32b799, .byte = 0xd9 },
		{ .addr = 0x3760aa, .byte = 0xb7 },
		{ .addr = 0x3760ab, .byte = 0x96 },
		{ .addr = 0x3760a6, .byte = 0x22 },
		{ .addr = 0x3760a7, .byte = 0x0b },
		{ .addr = 0x3760a8, .byte = 0x00 },
		{ .addr = 0x3760a9, .byte = 0x32 },
		{ .addr = 0x3760a4, .byte = 0x5a },
		{ .addr = 0x3760a5, .byte = 0x74 },
		{ .addr = 0x3760a2, .byte = 0x34 },
		{ .addr = 0x3760a3, .byte = 0xdf },
		{ .addr = 0x37609e, .byte = 0x5a },
		{ .addr = 0x37609f, .byte = 0x75 },
		{ .addr = 0x3760a0, .byte = 0x83 },
		{ .addr = 0x3760a1, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0xe4 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0x87 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xd08794, .byte = 0xb8 },
		{ .addr = 0xd08795, .byte = 0x09 },
		{ .addr = 0xd08796, .byte = 0xc1 },
		{ .addr = 0xd08797, .byte = 0x42 }
};

static const SST_Transaction addw_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3323800, .data = 27865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16069854, .data = 69, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629226, .data = 46998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629222, .data = 8715, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629224, .data = 50, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629220, .data = 23156, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629218, .data = 13535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629214, .data = 23157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629216, .data = 33781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 34708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13666196, .data = 47113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13666198, .data = 49474, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_20[] = {
		{ .addr = 0xee655e, .byte = 0xd8 },
		{ .addr = 0xee655f, .byte = 0x73 },
		{ .addr = 0xee6560, .byte = 0xb0 },
		{ .addr = 0xee6561, .byte = 0x3a },
		{ .addr = 0xee6562, .byte = 0x6c },
		{ .addr = 0xee6563, .byte = 0x78 },
		{ .addr = 0xaa8cb0, .byte = 0xfb },
		{ .addr = 0xaa8cb1, .byte = 0x7b },
		{ .addr = 0xee6564, .byte = 0x4f },
		{ .addr = 0xee6565, .byte = 0x86 }
};

static const SST_RamByte addw_final_ram_20[] = {
		{ .addr = 0xee655e, .byte = 0xd8 },
		{ .addr = 0xee655f, .byte = 0x73 },
		{ .addr = 0xee6560, .byte = 0xb0 },
		{ .addr = 0xee6561, .byte = 0x3a },
		{ .addr = 0xee6562, .byte = 0x6c },
		{ .addr = 0xee6563, .byte = 0x78 },
		{ .addr = 0xaa8cb0, .byte = 0xfb },
		{ .addr = 0xaa8cb1, .byte = 0x7b },
		{ .addr = 0xee6564, .byte = 0x4f },
		{ .addr = 0xee6565, .byte = 0x86 }
};

static const SST_Transaction addw_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15623522, .data = 27768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11177136, .data = 64379, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15623524, .data = 20358, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_21[] = {
		{ .addr = 0x4f3cb8, .byte = 0xdd },
		{ .addr = 0x4f3cb9, .byte = 0x52 },
		{ .addr = 0x4f3cba, .byte = 0x8b },
		{ .addr = 0x4f3cbb, .byte = 0xa6 },
		{ .addr = 0xf68e5c, .byte = 0xbc },
		{ .addr = 0xf68e5d, .byte = 0xf6 },
		{ .addr = 0x4f3cbc, .byte = 0x60 },
		{ .addr = 0x4f3cbd, .byte = 0x8e }
};

static const SST_RamByte addw_final_ram_21[] = {
		{ .addr = 0x4f3cb8, .byte = 0xdd },
		{ .addr = 0x4f3cb9, .byte = 0x52 },
		{ .addr = 0x4f3cba, .byte = 0x8b },
		{ .addr = 0x4f3cbb, .byte = 0xa6 },
		{ .addr = 0xf68e5c, .byte = 0x50 },
		{ .addr = 0xf68e5d, .byte = 0xbc },
		{ .addr = 0x4f3cbc, .byte = 0x60 },
		{ .addr = 0x4f3cbd, .byte = 0x8e }
};

static const SST_Transaction addw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16158300, .data = 48374, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5192892, .data = 24718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16158300, .data = 20668, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_22[] = {
		{ .addr = 0x815b50, .byte = 0xd8 },
		{ .addr = 0x815b51, .byte = 0x43 },
		{ .addr = 0x815b52, .byte = 0x5c },
		{ .addr = 0x815b53, .byte = 0x49 },
		{ .addr = 0x815b54, .byte = 0xea },
		{ .addr = 0x815b55, .byte = 0x8f }
};

static const SST_RamByte addw_final_ram_22[] = {
		{ .addr = 0x815b50, .byte = 0xd8 },
		{ .addr = 0x815b51, .byte = 0x43 },
		{ .addr = 0x815b52, .byte = 0x5c },
		{ .addr = 0x815b53, .byte = 0x49 },
		{ .addr = 0x815b54, .byte = 0xea },
		{ .addr = 0x815b55, .byte = 0x8f }
};

static const SST_Transaction addw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8477524, .data = 60047, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_23[] = {
		{ .addr = 0x699c68, .byte = 0xdb },
		{ .addr = 0x699c69, .byte = 0x66 },
		{ .addr = 0x699c6a, .byte = 0x13 },
		{ .addr = 0x699c6b, .byte = 0xcf },
		{ .addr = 0x0016a0, .byte = 0xb0 },
		{ .addr = 0x0016a1, .byte = 0x89 },
		{ .addr = 0x699c6c, .byte = 0x28 },
		{ .addr = 0x699c6d, .byte = 0xbb }
};

static const SST_RamByte addw_final_ram_23[] = {
		{ .addr = 0x699c68, .byte = 0xdb },
		{ .addr = 0x699c69, .byte = 0x66 },
		{ .addr = 0x699c6a, .byte = 0x13 },
		{ .addr = 0x699c6b, .byte = 0xcf },
		{ .addr = 0x0016a0, .byte = 0xa0 },
		{ .addr = 0x0016a1, .byte = 0x66 },
		{ .addr = 0x699c6c, .byte = 0x28 },
		{ .addr = 0x699c6d, .byte = 0xbb }
};

static const SST_Transaction addw_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5792, .data = 45193, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6921324, .data = 10427, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5792, .data = 41062, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_24[] = {
		{ .addr = 0x76e720, .byte = 0x54 },
		{ .addr = 0x76e721, .byte = 0x4c },
		{ .addr = 0x76e722, .byte = 0xd4 },
		{ .addr = 0x76e723, .byte = 0x25 },
		{ .addr = 0x76e724, .byte = 0x08 },
		{ .addr = 0x76e725, .byte = 0x27 }
};

static const SST_RamByte addw_final_ram_24[] = {
		{ .addr = 0x76e720, .byte = 0x54 },
		{ .addr = 0x76e721, .byte = 0x4c },
		{ .addr = 0x76e722, .byte = 0xd4 },
		{ .addr = 0x76e723, .byte = 0x25 },
		{ .addr = 0x76e724, .byte = 0x08 },
		{ .addr = 0x76e725, .byte = 0x27 }
};

static const SST_Transaction addw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7792420, .data = 2087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addw_initial_ram_25[] = {
		{ .addr = 0x922efa, .byte = 0x58 },
		{ .addr = 0x922efb, .byte = 0x62 },
		{ .addr = 0x922efc, .byte = 0x60 },
		{ .addr = 0x922efd, .byte = 0x9b },
		{ .addr = 0x213d6a, .byte = 0x90 },
		{ .addr = 0x213d6b, .byte = 0xcc },
		{ .addr = 0x922efe, .byte = 0x12 },
		{ .addr = 0x922eff, .byte = 0x2b }
};

static const SST_RamByte addw_final_ram_25[] = {
		{ .addr = 0x922efa, .byte = 0x58 },
		{ .addr = 0x922efb, .byte = 0x62 },
		{ .addr = 0x922efc, .byte = 0x60 },
		{ .addr = 0x922efd, .byte = 0x9b },
		{ .addr = 0x213d6a, .byte = 0x90 },
		{ .addr = 0x213d6b, .byte = 0xd0 },
		{ .addr = 0x922efe, .byte = 0x12 },
		{ .addr = 0x922eff, .byte = 0x2b }
};

static const SST_Transaction addw_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2178410, .data = 37068, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9580286, .data = 4651, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2178410, .data = 37072, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_26[] = {
		{ .addr = 0x6ba2a6, .byte = 0xd2 },
		{ .addr = 0x6ba2a7, .byte = 0x64 },
		{ .addr = 0x6ba2a8, .byte = 0x0b },
		{ .addr = 0x6ba2a9, .byte = 0x51 },
		{ .addr = 0x1088fe, .byte = 0x24 },
		{ .addr = 0x1088ff, .byte = 0xdf },
		{ .addr = 0x6ba2aa, .byte = 0xb7 },
		{ .addr = 0x6ba2ab, .byte = 0xe1 }
};

static const SST_RamByte addw_final_ram_26[] = {
		{ .addr = 0x6ba2a6, .byte = 0xd2 },
		{ .addr = 0x6ba2a7, .byte = 0x64 },
		{ .addr = 0x6ba2a8, .byte = 0x0b },
		{ .addr = 0x6ba2a9, .byte = 0x51 },
		{ .addr = 0x1088fe, .byte = 0x24 },
		{ .addr = 0x1088ff, .byte = 0xdf },
		{ .addr = 0x6ba2aa, .byte = 0xb7 },
		{ .addr = 0x6ba2ab, .byte = 0xe1 }
};

static const SST_Transaction addw_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1083646, .data = 9439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7053994, .data = 47073, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_27[] = {
		{ .addr = 0xd2e494, .byte = 0x06 },
		{ .addr = 0xd2e495, .byte = 0x5b },
		{ .addr = 0xd2e496, .byte = 0x22 },
		{ .addr = 0xd2e497, .byte = 0x09 },
		{ .addr = 0xd2e498, .byte = 0x3b },
		{ .addr = 0xd2e499, .byte = 0x39 },
		{ .addr = 0x7d1002, .byte = 0x2e },
		{ .addr = 0x7d1003, .byte = 0xf9 },
		{ .addr = 0xd2e49a, .byte = 0x29 },
		{ .addr = 0xd2e49b, .byte = 0xe7 }
};

static const SST_RamByte addw_final_ram_27[] = {
		{ .addr = 0xd2e494, .byte = 0x06 },
		{ .addr = 0xd2e495, .byte = 0x5b },
		{ .addr = 0xd2e496, .byte = 0x22 },
		{ .addr = 0xd2e497, .byte = 0x09 },
		{ .addr = 0xd2e498, .byte = 0x3b },
		{ .addr = 0xd2e499, .byte = 0x39 },
		{ .addr = 0x7d1002, .byte = 0x51 },
		{ .addr = 0x7d1003, .byte = 0x02 },
		{ .addr = 0xd2e49a, .byte = 0x29 },
		{ .addr = 0xd2e49b, .byte = 0xe7 }
};

static const SST_Transaction addw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13821080, .data = 15161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8196098, .data = 12025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13821082, .data = 10727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8196098, .data = 20738, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_28[] = {
		{ .addr = 0xfcfe74, .byte = 0x5c },
		{ .addr = 0xfcfe75, .byte = 0x74 },
		{ .addr = 0xfcfe76, .byte = 0x6d },
		{ .addr = 0xfcfe77, .byte = 0xb0 },
		{ .addr = 0xfcfe78, .byte = 0xc9 },
		{ .addr = 0xfcfe79, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0x17 },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0xa8173e, .byte = 0x06 },
		{ .addr = 0xa8173f, .byte = 0x9b },
		{ .addr = 0xa81740, .byte = 0x87 },
		{ .addr = 0xa81741, .byte = 0xa5 }
};

static const SST_RamByte addw_final_ram_28[] = {
		{ .addr = 0xfcfe74, .byte = 0x5c },
		{ .addr = 0xfcfe75, .byte = 0x74 },
		{ .addr = 0xfcfe76, .byte = 0x6d },
		{ .addr = 0xfcfe77, .byte = 0xb0 },
		{ .addr = 0xfcfe78, .byte = 0xc9 },
		{ .addr = 0xfcfe79, .byte = 0x3e },
		{ .addr = 0xecca70, .byte = 0xfe },
		{ .addr = 0xecca71, .byte = 0x76 },
		{ .addr = 0xecca6c, .byte = 0x80 },
		{ .addr = 0xecca6d, .byte = 0x09 },
		{ .addr = 0xecca6e, .byte = 0x00 },
		{ .addr = 0xecca6f, .byte = 0xfc },
		{ .addr = 0xecca6a, .byte = 0x5c },
		{ .addr = 0xecca6b, .byte = 0x74 },
		{ .addr = 0xecca68, .byte = 0xa2 },
		{ .addr = 0xecca69, .byte = 0x0d },
		{ .addr = 0xecca64, .byte = 0x5c },
		{ .addr = 0xecca65, .byte = 0x71 },
		{ .addr = 0xecca66, .byte = 0x59 },
		{ .addr = 0xecca67, .byte = 0xf3 },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0x17 },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0xa8173e, .byte = 0x06 },
		{ .addr = 0xa8173f, .byte = 0x9b },
		{ .addr = 0xa81740, .byte = 0x87 },
		{ .addr = 0xa81741, .byte = 0xa5 }
};

static const SST_Transaction addw_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16580216, .data = 51518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15966732, .data = 10413, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15518320, .data = 65142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15518316, .data = 32777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15518318, .data = 252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15518314, .data = 23668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15518312, .data = 41485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15518308, .data = 23665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15518310, .data = 23027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 5950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11015998, .data = 1691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11016000, .data = 34725, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_29[] = {
		{ .addr = 0xb22574, .byte = 0xde },
		{ .addr = 0xb22575, .byte = 0x63 },
		{ .addr = 0xb22576, .byte = 0xf5 },
		{ .addr = 0xb22577, .byte = 0x09 },
		{ .addr = 0xf6ff5e, .byte = 0xba },
		{ .addr = 0xf6ff5f, .byte = 0x4a },
		{ .addr = 0xb22578, .byte = 0xc5 },
		{ .addr = 0xb22579, .byte = 0x98 }
};

static const SST_RamByte addw_final_ram_29[] = {
		{ .addr = 0xb22574, .byte = 0xde },
		{ .addr = 0xb22575, .byte = 0x63 },
		{ .addr = 0xb22576, .byte = 0xf5 },
		{ .addr = 0xb22577, .byte = 0x09 },
		{ .addr = 0xf6ff5e, .byte = 0xba },
		{ .addr = 0xf6ff5f, .byte = 0x4a },
		{ .addr = 0xb22578, .byte = 0xc5 },
		{ .addr = 0xb22579, .byte = 0x98 }
};

static const SST_Transaction addw_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16187230, .data = 47690, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11675000, .data = 50584, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_30[] = {
		{ .addr = 0x0f4652, .byte = 0x5e },
		{ .addr = 0x0f4653, .byte = 0x67 },
		{ .addr = 0x0f4654, .byte = 0x3f },
		{ .addr = 0x0f4655, .byte = 0xe1 },
		{ .addr = 0xcaad6a, .byte = 0x3d },
		{ .addr = 0xcaad6b, .byte = 0x31 },
		{ .addr = 0x0f4656, .byte = 0x7a },
		{ .addr = 0x0f4657, .byte = 0xed }
};

static const SST_RamByte addw_final_ram_30[] = {
		{ .addr = 0x0f4652, .byte = 0x5e },
		{ .addr = 0x0f4653, .byte = 0x67 },
		{ .addr = 0x0f4654, .byte = 0x3f },
		{ .addr = 0x0f4655, .byte = 0xe1 },
		{ .addr = 0xcaad6a, .byte = 0x3d },
		{ .addr = 0xcaad6b, .byte = 0x38 },
		{ .addr = 0x0f4656, .byte = 0x7a },
		{ .addr = 0x0f4657, .byte = 0xed }
};

static const SST_Transaction addw_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13282666, .data = 15665, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1001046, .data = 31469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13282666, .data = 15672, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addw_initial_ram_31[] = {
		{ .addr = 0x25e8c6, .byte = 0xdf },
		{ .addr = 0x25e8c7, .byte = 0x56 },
		{ .addr = 0x25e8c8, .byte = 0xdd },
		{ .addr = 0x25e8c9, .byte = 0xe2 },
		{ .addr = 0x00000c, .byte = 0x3a },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x6e3254, .byte = 0xe0 },
		{ .addr = 0x6e3255, .byte = 0xe5 },
		{ .addr = 0x6e3256, .byte = 0x3e },
		{ .addr = 0x6e3257, .byte = 0xee }
};

static const SST_RamByte addw_final_ram_31[] = {
		{ .addr = 0x25e8c6, .byte = 0xdf },
		{ .addr = 0x25e8c7, .byte = 0x56 },
		{ .addr = 0x25e8c8, .byte = 0xdd },
		{ .addr = 0x25e8c9, .byte = 0xe2 },
		{ .addr = 0x1985b6, .byte = 0xe8 },
		{ .addr = 0x1985b7, .byte = 0xc8 },
		{ .addr = 0x1985b2, .byte = 0x86 },
		{ .addr = 0x1985b3, .byte = 0x01 },
		{ .addr = 0x1985b4, .byte = 0x00 },
		{ .addr = 0x1985b5, .byte = 0x25 },
		{ .addr = 0x1985b0, .byte = 0xdf },
		{ .addr = 0x1985b1, .byte = 0x56 },
		{ .addr = 0x1985ae, .byte = 0xca },
		{ .addr = 0x1985af, .byte = 0x69 },
		{ .addr = 0x1985aa, .byte = 0xdf },
		{ .addr = 0x1985ab, .byte = 0x51 },
		{ .addr = 0x1985ac, .byte = 0x97 },
		{ .addr = 0x1985ad, .byte = 0xd3 },
		{ .addr = 0x00000c, .byte = 0x3a },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x6e3254, .byte = 0xe0 },
		{ .addr = 0x6e3255, .byte = 0xe5 },
		{ .addr = 0x6e3256, .byte = 0x3e },
		{ .addr = 0x6e3257, .byte = 0xee }
};

static const SST_Transaction addw_transactions_31[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13879912, .data = 59946, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1672630, .data = 59592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1672626, .data = 34305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1672628, .data = 37, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1672624, .data = 57174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1672622, .data = 51817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1672618, .data = 57169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1672620, .data = 38867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 14958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7221844, .data = 57573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7221846, .data = 16110, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase addw[] = {
	{
		.name = "000 ADD.w 1, D4 5244",
		.initial = {
			.regs = {
				430770453, 2802729725, 2039179676, 3255779504, 2270003432, 2019469770, 479886605, 491753643, 1909699865, 1739743613, 1028431515, 1544913034, 526166023, 4208995751, 1362253081, 796552, 16059558, 41752, 7435090
			},
			.prefetch0 = 21060,
			.prefetch1 = 16198,
			.ram = addw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				430770453, 2802729725, 2039179676, 3255779504, 2270003433, 2019469770, 479886605, 491753643, 1909699865, 1739743613, 1028431515, 1544913034, 526166023, 4208995751, 1362253081, 796552, 16059558, 41736, 7435092
			},
			.prefetch0 = 16198,
			.prefetch1 = 58974,
			.ram = addw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = addw_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 ADD.w 3, (A0) 5650",
		.initial = {
			.regs = {
				1286712021, 4172415840, 1280159243, 1798906196, 3519259881, 654652103, 3161744368, 4081759305, 2212738897, 3177480862, 174598900, 511230103, 1497937023, 466326125, 346404064, 14144530, 11317358, 8211, 16584850
			},
			.prefetch0 = 22096,
			.prefetch1 = 37163,
			.ram = addw_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1286712021, 4172415840, 1280159243, 1798906196, 3519259881, 654652103, 3161744368, 4081759305, 2212738897, 3177480862, 174598900, 511230103, 1497937023, 466326125, 346404064, 14144530, 11317344, 8211, 579743584
			},
			.prefetch0 = 51899,
			.prefetch1 = 35512,
			.ram = addw_final_ram_1,
			.ram_len = 26,
		},
		.transactions = addw_transactions_1,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "002 ADD.w (xxx).w, D5 da78",
		.initial = {
			.regs = {
				3920948106, 1927503720, 2694769333, 1724138065, 1154301958, 3703247502, 998425380, 600222768, 2788290172, 864077407, 3034279792, 276953370, 2163842654, 760450438, 3348333659, 11850214, 1792018, 33802, 9235448
			},
			.prefetch0 = 55928,
			.prefetch1 = 45427,
			.ram = addw_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3920948106, 1927503720, 2694769333, 1724138065, 1154301958, 3703247502, 998425380, 600222768, 2788290172, 864077407, 3034279792, 276953370, 2163842654, 760450438, 3348333659, 11850214, 1792004, 9226, 1607661334
			},
			.prefetch0 = 34629,
			.prefetch1 = 19036,
			.ram = addw_final_ram_2,
			.ram_len = 28,
		},
		.transactions = addw_transactions_2,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "003 ADD.w -(A3), D1 d263",
		.initial = {
			.regs = {
				1294073689, 1305745775, 2764691344, 2985092242, 2524031197, 442999709, 3489116934, 4017564314, 2088369155, 698796807, 2997494143, 3927808569, 3274547179, 2811217504, 1498462552, 12514882, 5449750, 33813, 16451782
			},
			.prefetch0 = 53859,
			.prefetch1 = 35808,
			.ram = addw_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1294073689, 1305745775, 2764691344, 2985092242, 2524031197, 442999709, 3489116934, 4017564314, 2088369155, 698796807, 2997494143, 3927808567, 3274547179, 2811217504, 1498462552, 12514882, 5449736, 9237, 1378496550
			},
			.prefetch0 = 46610,
			.prefetch1 = 44008,
			.ram = addw_final_ram_3,
			.ram_len = 26,
		},
		.transactions = addw_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 ADD.w (d16, A4), D0 d06c",
		.initial = {
			.regs = {
				1955302260, 3152469229, 3090227136, 3955217490, 1226623351, 2682448729, 2682218035, 2878364256, 1377773839, 2280527509, 4090674903, 3918397088, 937065833, 2108199791, 3001794624, 9227812, 6772722, 9742, 13006648
			},
			.prefetch0 = 53356,
			.prefetch1 = 7093,
			.ram = addw_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1955295304, 3152469229, 3090227136, 3955217490, 1226623351, 2682448729, 2682218035, 2878364256, 1377773839, 2280527509, 4090674903, 3918397088, 937065833, 2108199791, 3001794624, 9227812, 6772722, 9747, 13006652
			},
			.prefetch0 = 763,
			.prefetch1 = 58744,
			.ram = addw_final_ram_4,
			.ram_len = 10,
		},
		.transactions = addw_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 ADD.w A7, D6 dc4f",
		.initial = {
			.regs = {
				3400935993, 1717563226, 204201762, 196183171, 2236224109, 934596799, 2194108996, 150056423, 3030029283, 528407535, 3293549339, 478034141, 2838929510, 3900346704, 31173441, 11881432, 1298554, 8192, 11092452
			},
			.prefetch0 = 56399,
			.prefetch1 = 49339,
			.ram = addw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3400935993, 1717563226, 204201762, 196183171, 2236224109, 934596799, 2194096830, 150056423, 3030029283, 528407535, 3293549339, 478034141, 2838929510, 3900346704, 31173441, 11881432, 1298554, 8209, 11092454
			},
			.prefetch0 = 49339,
			.prefetch1 = 61233,
			.ram = addw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = addw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 ADD.w D3, (d16, A4) d76c",
		.initial = {
			.regs = {
				3852376316, 3119221334, 2089687167, 3648650832, 3294098660, 609370722, 3485630270, 1934282402, 2462300348, 417614730, 2499114128, 343050216, 4053247853, 682415714, 1484670233, 13487078, 10013270, 33299, 13788328
			},
			.prefetch0 = 55148,
			.prefetch1 = 64728,
			.ram = addw_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3852376316, 3119221334, 2089687167, 3648650832, 3294098660, 609370722, 3485630270, 1934282402, 2462300348, 417614730, 2499114128, 343050216, 4053247853, 682415714, 1484670233, 13487078, 10013256, 8723, 3505938766
			},
			.prefetch0 = 16500,
			.prefetch1 = 11374,
			.ram = addw_final_ram_6,
			.ram_len = 28,
		},
		.transactions = addw_transactions_6,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "007 ADD.w 4, -(A4) 5864",
		.initial = {
			.regs = {
				644944060, 2645653392, 3668166701, 2055799856, 1830572255, 2823562431, 3940776759, 3215476337, 1811153914, 2412452950, 3728781080, 1445685955, 1917571818, 884359584, 2697053630, 10777080, 15914776, 8192, 6730532
			},
			.prefetch0 = 22628,
			.prefetch1 = 35205,
			.ram = addw_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				644944060, 2645653392, 3668166701, 2055799856, 1830572255, 2823562431, 3940776759, 3215476337, 1811153914, 2412452950, 3728781080, 1445685955, 1917571816, 884359584, 2697053630, 10777080, 15914776, 8200, 6730534
			},
			.prefetch0 = 35205,
			.prefetch1 = 48294,
			.ram = addw_final_ram_7,
			.ram_len = 8,
		},
		.transactions = addw_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 ADD.w 6, A6 5c4e",
		.initial = {
			.regs = {
				488818943, 342970832, 3293447610, 1009668007, 2037179464, 3842729277, 523569351, 2187295082, 1023139074, 3579319649, 3447585235, 1532473622, 2793051164, 1031879606, 4117085422, 4733428, 1182488, 1544, 13130658
			},
			.prefetch0 = 23630,
			.prefetch1 = 10421,
			.ram = addw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				488818943, 342970832, 3293447610, 1009668007, 2037179464, 3842729277, 523569351, 2187295082, 1023139074, 3579319649, 3447585235, 1532473622, 2793051164, 1031879606, 4117085428, 4733428, 1182488, 1544, 13130660
			},
			.prefetch0 = 10421,
			.prefetch1 = 57800,
			.ram = addw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = addw_transactions_8,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "009 ADD.w D7, (d8, A6, Xn) df76",
		.initial = {
			.regs = {
				4048370820, 4098680208, 1705607798, 698340504, 1404841610, 1265802952, 2748676922, 3622511236, 3841218354, 3219614734, 1837147653, 3900580454, 2603553614, 1770538445, 2670548312, 275082, 5485146, 538, 14903562
			},
			.prefetch0 = 57206,
			.prefetch1 = 31580,
			.ram = addw_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4048370820, 4098680208, 1705607798, 698340504, 1404841610, 1265802952, 2748676922, 3622511236, 3841218354, 3219614734, 1837147653, 3900580454, 2603553614, 1770538445, 2670548312, 275082, 5485146, 520, 14903566
			},
			.prefetch0 = 41015,
			.prefetch1 = 33708,
			.ram = addw_final_ram_9,
			.ram_len = 10,
		},
		.transactions = addw_transactions_9,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "010 ADD.w D4, D6 dc44",
		.initial = {
			.regs = {
				2354766177, 3763624242, 1229297710, 1605715268, 378634992, 4257377555, 1202500239, 311808309, 2715408571, 1610925750, 2846874437, 332860622, 2146908506, 1657600161, 4173305433, 670878, 3149010, 10006, 10469188
			},
			.prefetch0 = 56388,
			.prefetch1 = 60800,
			.ram = addw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2354766177, 3763624242, 1229297710, 1605715268, 378634992, 4257377555, 1202468223, 311808309, 2715408571, 1610925750, 2846874437, 332860622, 2146908506, 1657600161, 4173305433, 670878, 3149010, 10003, 10469190
			},
			.prefetch0 = 60800,
			.prefetch1 = 9549,
			.ram = addw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = addw_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 ADD.w D2, (A6)+ d55e",
		.initial = {
			.regs = {
				1699387211, 3362519986, 4198029244, 3176299854, 686676891, 1997882378, 3322208610, 296607048, 2413923948, 2164810581, 2833882598, 506319358, 1002594413, 1910239463, 3628616635, 6205850, 7413382, 1807, 9862960
			},
			.prefetch0 = 54622,
			.prefetch1 = 47345,
			.ram = addw_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1699387211, 3362519986, 4198029244, 3176299854, 686676891, 1997882378, 3322208610, 296607048, 2413923948, 2164810581, 2833882598, 506319358, 1002594413, 1910239463, 3628616637, 6205850, 7413368, 9999, 82838658
			},
			.prefetch0 = 42470,
			.prefetch1 = 26745,
			.ram = addw_final_ram_11,
			.ram_len = 26,
		},
		.transactions = addw_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 ADD.w 2, (A0)+ 5458",
		.initial = {
			.regs = {
				4054480410, 1779960912, 2067021400, 3366951749, 4023816934, 4232845181, 4228664718, 2672206687, 2895399158, 2114536073, 4084076518, 1320664058, 3895637923, 179481454, 1971782208, 5005434, 16136272, 514, 3556840
			},
			.prefetch0 = 21592,
			.prefetch1 = 55578,
			.ram = addw_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4054480410, 1779960912, 2067021400, 3366951749, 4023816934, 4232845181, 4228664718, 2672206687, 2895399160, 2114536073, 4084076518, 1320664058, 3895637923, 179481454, 1971782208, 5005434, 16136272, 512, 3556842
			},
			.prefetch0 = 55578,
			.prefetch1 = 45761,
			.ram = addw_final_ram_12,
			.ram_len = 8,
		},
		.transactions = addw_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 ADD.w A3, D1 d24b",
		.initial = {
			.regs = {
				4088589349, 3691015436, 2619775829, 1604868448, 198441793, 569597010, 2320633782, 2203227576, 133263730, 2896468026, 3151301860, 278139593, 3721021895, 666834890, 1661337793, 13049900, 11751954, 1055, 10845376
			},
			.prefetch0 = 53835,
			.prefetch1 = 2021,
			.ram = addw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4088589349, 3691020245, 2619775829, 1604868448, 198441793, 569597010, 2320633782, 2203227576, 133263730, 2896468026, 3151301860, 278139593, 3721021895, 666834890, 1661337793, 13049900, 11751954, 1024, 10845378
			},
			.prefetch0 = 2021,
			.prefetch1 = 1935,
			.ram = addw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = addw_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 ADD.w D1, (d8, A4, Xn) d374",
		.initial = {
			.regs = {
				766771999, 3507178594, 3020430250, 1505733976, 1622611520, 1022786140, 604915292, 3703079759, 1419675409, 3138881207, 199250759, 2383329164, 3586417953, 2212316736, 3028220608, 5776070, 16556358, 41750, 3276006
			},
			.prefetch0 = 54132,
			.prefetch1 = 40973,
			.ram = addw_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				766771999, 3507178594, 3020430250, 1505733976, 1622611520, 1022786140, 604915292, 3703079759, 1419675409, 3138881207, 199250759, 2383329164, 3586417953, 2212316736, 3028220608, 5776070, 16556344, 8982, 2104409186
			},
			.prefetch0 = 981,
			.prefetch1 = 46911,
			.ram = addw_final_ram_14,
			.ram_len = 28,
		},
		.transactions = addw_transactions_14,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "015 ADD.w (d16, A7), D5 da6f",
		.initial = {
			.regs = {
				1740214818, 2713736277, 1074939385, 1633919902, 2690995393, 950561367, 487757421, 1017416286, 2177666964, 1614278938, 1329619103, 931159400, 3594136039, 3630152235, 4202289440, 7919698, 7911208, 33294, 1264608
			},
			.prefetch0 = 55919,
			.prefetch1 = 11576,
			.ram = addw_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1740214818, 2713736277, 1074939385, 1633919902, 2690995393, 950596582, 487757421, 1017416286, 2177666964, 1614278938, 1329619103, 931159400, 3594136039, 3630152235, 4202289440, 7919698, 7911208, 33288, 1264612
			},
			.prefetch0 = 50687,
			.prefetch1 = 51262,
			.ram = addw_final_ram_15,
			.ram_len = 10,
		},
		.transactions = addw_transactions_15,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "016 ADD.w #, (d16, A5) 066d",
		.initial = {
			.regs = {
				651448440, 3094375847, 2786596976, 855498087, 1236599770, 3117096304, 4274832686, 1564934049, 1411718313, 3501641445, 1403843490, 3791521787, 3165963670, 2899366686, 3082700533, 6023512, 719854, 42249, 8704278
			},
			.prefetch0 = 1645,
			.prefetch1 = 41049,
			.ram = addw_initial_ram_16,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				651448440, 3094375847, 2786596976, 855498087, 1236599770, 3117096304, 4274832686, 1564934049, 1411718313, 3501641445, 1403843490, 3791521787, 3165963670, 2899366686, 3082700533, 6023512, 719840, 9481, 2615340310
			},
			.prefetch0 = 53027,
			.prefetch1 = 864,
			.ram = addw_final_ram_16,
			.ram_len = 30,
		},
		.transactions = addw_transactions_16,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "017 ADD.w 8, (A4) 5054",
		.initial = {
			.regs = {
				2404529540, 1695450897, 736057059, 3132513359, 2408443537, 4146397423, 2404233707, 940320197, 4172076401, 3771057690, 611828219, 259096553, 1118906782, 3390895283, 1242018093, 3648186, 10806064, 1813, 7091286
			},
			.prefetch0 = 20564,
			.prefetch1 = 14408,
			.ram = addw_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2404529540, 1695450897, 736057059, 3132513359, 2408443537, 4146397423, 2404233707, 940320197, 4172076401, 3771057690, 611828219, 259096553, 1118906782, 3390895283, 1242018093, 3648186, 10806064, 1800, 7091288
			},
			.prefetch0 = 14408,
			.prefetch1 = 44857,
			.ram = addw_final_ram_17,
			.ram_len = 8,
		},
		.transactions = addw_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 ADD.w D5, (d8, A3, Xn) db73",
		.initial = {
			.regs = {
				3262654619, 495324327, 3392849299, 1478518274, 2480860076, 2547952808, 2964803376, 1163659571, 2938819579, 473711906, 929052014, 3680961125, 1222341564, 1481170809, 2022159541, 2956558, 12564526, 9234, 10728616
			},
			.prefetch0 = 56179,
			.prefetch1 = 46010,
			.ram = addw_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3262654619, 495324327, 3392849299, 1478518274, 2480860076, 2547952808, 2964803376, 1163659571, 2938819579, 473711906, 929052014, 3680961125, 1222341564, 1481170809, 2022159541, 2956558, 12564526, 9241, 10728620
			},
			.prefetch0 = 62504,
			.prefetch1 = 2837,
			.ram = addw_final_ram_18,
			.ram_len = 10,
		},
		.transactions = addw_transactions_18,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "019 ADD.w 5, (d8, A4, Xn) 5a74",
		.initial = {
			.regs = {
				4059784725, 2921382738, 937063650, 2852416315, 782870010, 2899970722, 1577949389, 2974802602, 33357327, 2181787369, 3930207812, 2006421552, 2213901489, 3381631370, 3281567907, 11056328, 3629228, 8715, 3323800
			},
			.prefetch0 = 23156,
			.prefetch1 = 58251,
			.ram = addw_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4059784725, 2921382738, 937063650, 2852416315, 782870010, 2899970722, 1577949389, 2974802602, 33357327, 2181787369, 3930207812, 2006421552, 2213901489, 3381631370, 3281567907, 11056328, 3629214, 8715, 3838871448
			},
			.prefetch0 = 47113,
			.prefetch1 = 49474,
			.ram = addw_final_ram_19,
			.ram_len = 28,
		},
		.transactions = addw_transactions_19,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "020 ADD.w (d8, A3, Xn), D4 d873",
		.initial = {
			.regs = {
				3052543798, 3324358991, 122168087, 3382647769, 3439536828, 587820364, 3621962454, 619733070, 3571888905, 4289182235, 1702864344, 1621804603, 2558446363, 1983314360, 2370779347, 1784154, 1001452, 10010, 15623522
			},
			.prefetch0 = 55411,
			.prefetch1 = 45114,
			.ram = addw_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3052543798, 3324358991, 122168087, 3382647769, 3439535671, 587820364, 3621962454, 619733070, 3571888905, 4289182235, 1702864344, 1621804603, 2558446363, 1983314360, 2370779347, 1784154, 1001452, 10001, 15623526
			},
			.prefetch0 = 27768,
			.prefetch1 = 20358,
			.ram = addw_final_ram_20,
			.ram_len = 10,
		},
		.transactions = addw_transactions_20,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "021 ADD.w D6, (A2) dd52",
		.initial = {
			.regs = {
				2437144215, 162369644, 3344060091, 1823858232, 2726917930, 498184933, 3935081414, 3199512353, 2439158442, 173197920, 955682396, 983464743, 2639437313, 3770780964, 282636860, 5790494, 6997024, 32784, 5192892
			},
			.prefetch0 = 56658,
			.prefetch1 = 35750,
			.ram = addw_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2437144215, 162369644, 3344060091, 1823858232, 2726917930, 498184933, 3935081414, 3199512353, 2439158442, 173197920, 955682396, 983464743, 2639437313, 3770780964, 282636860, 5790494, 6997024, 32787, 5192894
			},
			.prefetch0 = 35750,
			.prefetch1 = 24718,
			.ram = addw_final_ram_21,
			.ram_len = 8,
		},
		.transactions = addw_transactions_21,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "022 ADD.w D3, D4 d843",
		.initial = {
			.regs = {
				839218641, 1577837105, 3543648037, 3851227600, 87201206, 2904397275, 1128332109, 1664236719, 64053365, 2429619125, 108010488, 2478951015, 3248026225, 4143728645, 106360429, 13076500, 10365814, 787, 8477524
			},
			.prefetch0 = 55363,
			.prefetch1 = 23625,
			.ram = addw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				839218641, 1577837105, 3543648037, 3851227600, 87205766, 2904397275, 1128332109, 1664236719, 64053365, 2429619125, 108010488, 2478951015, 3248026225, 4143728645, 106360429, 13076500, 10365814, 776, 8477526
			},
			.prefetch0 = 23625,
			.prefetch1 = 60047,
			.ram = addw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = addw_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 ADD.w D5, -(A6) db66",
		.initial = {
			.regs = {
				647682859, 4292607649, 4221486498, 6971615, 4019190728, 1640820701, 2198593348, 3586220399, 73401303, 3563310554, 726375783, 500504841, 3268233947, 1019823088, 1191188130, 15908832, 10342230, 1548, 6921324
			},
			.prefetch0 = 56166,
			.prefetch1 = 5071,
			.ram = addw_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				647682859, 4292607649, 4221486498, 6971615, 4019190728, 1640820701, 2198593348, 3586220399, 73401303, 3563310554, 726375783, 500504841, 3268233947, 1019823088, 1191188128, 15908832, 10342230, 1561, 6921326
			},
			.prefetch0 = 5071,
			.prefetch1 = 10427,
			.ram = addw_final_ram_23,
			.ram_len = 8,
		},
		.transactions = addw_transactions_23,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "024 ADD.w 2, A4 544c",
		.initial = {
			.regs = {
				1497541017, 2195141837, 1173043704, 518071533, 2146143715, 1558491194, 900877201, 4074894678, 142385574, 3447894362, 587136007, 3078351247, 245552720, 4099127525, 1678073930, 5514156, 4888356, 34328, 7792420
			},
			.prefetch0 = 21580,
			.prefetch1 = 54309,
			.ram = addw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1497541017, 2195141837, 1173043704, 518071533, 2146143715, 1558491194, 900877201, 4074894678, 142385574, 3447894362, 587136007, 3078351247, 245552722, 4099127525, 1678073930, 5514156, 4888356, 34328, 7792422
			},
			.prefetch0 = 54309,
			.prefetch1 = 2087,
			.ram = addw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = addw_transactions_24,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "025 ADD.w 4, -(A2) 5862",
		.initial = {
			.regs = {
				3177973782, 3036973729, 2564712413, 3277101634, 2213624243, 3898961981, 3174273200, 929626967, 663360967, 2901069997, 3642834284, 1849080666, 2912999444, 2042370322, 4066454120, 12569298, 10452974, 34576, 9580286
			},
			.prefetch0 = 22626,
			.prefetch1 = 24731,
			.ram = addw_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3177973782, 3036973729, 2564712413, 3277101634, 2213624243, 3898961981, 3174273200, 929626967, 663360967, 2901069997, 3642834282, 1849080666, 2912999444, 2042370322, 4066454120, 12569298, 10452974, 34568, 9580288
			},
			.prefetch0 = 24731,
			.prefetch1 = 4651,
			.ram = addw_final_ram_25,
			.ram_len = 8,
		},
		.transactions = addw_transactions_25,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "026 ADD.w -(A4), D1 d264",
		.initial = {
			.regs = {
				3231685174, 3962964255, 2768891666, 1613892547, 1306506285, 2656375779, 1709805483, 3485106604, 3203746167, 3836830045, 3377037984, 2402609221, 152078592, 3723394947, 859314459, 6643204, 10226722, 8462, 7053994
			},
			.prefetch0 = 53860,
			.prefetch1 = 2897,
			.ram = addw_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3231685174, 3962973694, 2768891666, 1613892547, 1306506285, 2656375779, 1709805483, 3485106604, 3203746167, 3836830045, 3377037984, 2402609221, 152078590, 3723394947, 859314459, 6643204, 10226722, 8448, 7053996
			},
			.prefetch0 = 2897,
			.prefetch1 = 47073,
			.ram = addw_final_ram_26,
			.ram_len = 8,
		},
		.transactions = addw_transactions_26,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "027 ADD.w #, (A3)+ 065b",
		.initial = {
			.regs = {
				3772499939, 325526032, 2676335170, 141061665, 44585435, 4267866816, 3294406906, 1940757131, 2452356509, 897746826, 2116716243, 3648851970, 2745952558, 4110087918, 3474828927, 614020, 12897954, 40988, 13821080
			},
			.prefetch0 = 1627,
			.prefetch1 = 8713,
			.ram = addw_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3772499939, 325526032, 2676335170, 141061665, 44585435, 4267866816, 3294406906, 1940757131, 2452356509, 897746826, 2116716243, 3648851972, 2745952558, 4110087918, 3474828927, 614020, 12897954, 40960, 13821084
			},
			.prefetch0 = 15161,
			.prefetch1 = 10727,
			.ram = addw_final_ram_27,
			.ram_len = 10,
		},
		.transactions = addw_transactions_27,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "028 ADD.w 6, (d8, A4, Xn) 5c74",
		.initial = {
			.regs = {
				936248840, 2797190149, 1542671798, 3787320954, 4116405741, 3563757561, 1026713728, 2650250684, 808327409, 1588537521, 3803270540, 717036528, 482425309, 2804868907, 3103568236, 9527392, 15518322, 32777, 16580216
			},
			.prefetch0 = 23668,
			.prefetch1 = 28080,
			.ram = addw_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				936248840, 2797190149, 1542671798, 3787320954, 4116405741, 3563757561, 1026713728, 2650250684, 808327409, 1588537521, 3803270540, 717036528, 482425309, 2804868907, 3103568236, 9527392, 15518308, 8201, 1286084418
			},
			.prefetch0 = 1691,
			.prefetch1 = 34725,
			.ram = addw_final_ram_28,
			.ram_len = 28,
		},
		.transactions = addw_transactions_28,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "029 ADD.w -(A3), D7 de63",
		.initial = {
			.regs = {
				820100484, 1726613163, 1305017512, 3001449697, 3631309224, 1934778030, 258576960, 3424974111, 1522679759, 3330794264, 308588945, 3103194976, 1407995885, 20689232, 2077823460, 5201904, 1328384, 1055, 11675000
			},
			.prefetch0 = 56931,
			.prefetch1 = 62729,
			.ram = addw_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				820100484, 1726613163, 1305017512, 3001449697, 3631309224, 1934778030, 258576960, 3424956265, 1522679759, 3330794264, 308588945, 3103194974, 1407995885, 20689232, 2077823460, 5201904, 1328384, 1049, 11675002
			},
			.prefetch0 = 62729,
			.prefetch1 = 50584,
			.ram = addw_final_ram_29,
			.ram_len = 8,
		},
		.transactions = addw_transactions_29,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "030 ADD.w 7, -(A7) 5e67",
		.initial = {
			.regs = {
				3819551006, 3533827844, 1061501512, 3922253792, 2294588970, 3099147228, 643895311, 635261638, 2912427255, 1005278161, 3262979657, 1890374403, 323976794, 3408876886, 352236429, 13282668, 10110796, 34591, 1001046
			},
			.prefetch0 = 24167,
			.prefetch1 = 16353,
			.ram = addw_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3819551006, 3533827844, 1061501512, 3922253792, 2294588970, 3099147228, 643895311, 635261638, 2912427255, 1005278161, 3262979657, 1890374403, 323976794, 3408876886, 352236429, 13282666, 10110796, 34560, 1001048
			},
			.prefetch0 = 16353,
			.prefetch1 = 31469,
			.ram = addw_final_ram_30,
			.ram_len = 8,
		},
		.transactions = addw_transactions_30,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "031 ADD.w D7, (A6) df56",
		.initial = {
			.regs = {
				2768187014, 969275286, 1481637739, 655284770, 2962505591, 487295774, 2893399687, 2821968222, 1549141051, 3330510055, 2588466850, 3126116390, 2907437182, 797751862, 2547239529, 8327220, 1672632, 34305, 2484426
			},
			.prefetch0 = 57174,
			.prefetch1 = 56802,
			.ram = addw_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2768187014, 969275286, 1481637739, 655284770, 2962505591, 487295774, 2893399687, 2821968222, 1549141051, 3330510055, 2588466850, 3126116390, 2907437182, 797751862, 2547239529, 8327220, 1672618, 9729, 980300376
			},
			.prefetch0 = 57573,
			.prefetch1 = 16110,
			.ram = addw_final_ram_31,
			.ram_len = 26,
		},
		.transactions = addw_transactions_31,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_ADDW_H */