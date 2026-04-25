#ifndef RBT_RESET_H
#define RBT_RESET_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte reset_initial_ram_0[] = {
		{ .addr = 0x014b94, .byte = 0x4e },
		{ .addr = 0x014b95, .byte = 0x70 },
		{ .addr = 0x014b96, .byte = 0xb2 },
		{ .addr = 0x014b97, .byte = 0x9f },
		{ .addr = 0x000020, .byte = 0x5b },
		{ .addr = 0x000021, .byte = 0xc2 },
		{ .addr = 0x000022, .byte = 0x3d },
		{ .addr = 0x000023, .byte = 0x1a },
		{ .addr = 0xc23d1a, .byte = 0xf2 },
		{ .addr = 0xc23d1b, .byte = 0x19 },
		{ .addr = 0xc23d1c, .byte = 0xe6 },
		{ .addr = 0xc23d1d, .byte = 0x90 }
};

static const SST_RamByte reset_final_ram_0[] = {
		{ .addr = 0x014b94, .byte = 0x4e },
		{ .addr = 0x014b95, .byte = 0x70 },
		{ .addr = 0x014b96, .byte = 0xb2 },
		{ .addr = 0x014b97, .byte = 0x9f },
		{ .addr = 0x308716, .byte = 0x4b },
		{ .addr = 0x308717, .byte = 0x94 },
		{ .addr = 0x308712, .byte = 0x06 },
		{ .addr = 0x308713, .byte = 0x1f },
		{ .addr = 0x308714, .byte = 0x00 },
		{ .addr = 0x308715, .byte = 0x01 },
		{ .addr = 0x000020, .byte = 0x5b },
		{ .addr = 0x000021, .byte = 0xc2 },
		{ .addr = 0x000022, .byte = 0x3d },
		{ .addr = 0x000023, .byte = 0x1a },
		{ .addr = 0xc23d1a, .byte = 0xf2 },
		{ .addr = 0xc23d1b, .byte = 0x19 },
		{ .addr = 0xc23d1c, .byte = 0xe6 },
		{ .addr = 0xc23d1d, .byte = 0x90 }
};

static const SST_Transaction reset_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3180310, .data = 19348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3180306, .data = 1567, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3180308, .data = 1, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 23490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 15642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12729626, .data = 61977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12729628, .data = 59024, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_1[] = {
		{ .addr = 0xfe83e0, .byte = 0x4e },
		{ .addr = 0xfe83e1, .byte = 0x70 },
		{ .addr = 0xfe83e2, .byte = 0x08 },
		{ .addr = 0xfe83e3, .byte = 0xe1 },
		{ .addr = 0xfe83e4, .byte = 0xe6 },
		{ .addr = 0xfe83e5, .byte = 0x37 }
};

static const SST_RamByte reset_final_ram_1[] = {
		{ .addr = 0xfe83e0, .byte = 0x4e },
		{ .addr = 0xfe83e1, .byte = 0x70 },
		{ .addr = 0xfe83e2, .byte = 0x08 },
		{ .addr = 0xfe83e3, .byte = 0xe1 },
		{ .addr = 0xfe83e4, .byte = 0xe6 },
		{ .addr = 0xfe83e5, .byte = 0x37 }
};

static const SST_Transaction reset_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16679908, .data = 58935, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_2[] = {
		{ .addr = 0xa5786c, .byte = 0x4e },
		{ .addr = 0xa5786d, .byte = 0x70 },
		{ .addr = 0xa5786e, .byte = 0xe9 },
		{ .addr = 0xa5786f, .byte = 0x99 },
		{ .addr = 0x000020, .byte = 0x42 },
		{ .addr = 0x000021, .byte = 0xf0 },
		{ .addr = 0x000022, .byte = 0xb4 },
		{ .addr = 0x000023, .byte = 0x60 },
		{ .addr = 0xf0b460, .byte = 0x1a },
		{ .addr = 0xf0b461, .byte = 0xfb },
		{ .addr = 0xf0b462, .byte = 0x29 },
		{ .addr = 0xf0b463, .byte = 0x59 }
};

static const SST_RamByte reset_final_ram_2[] = {
		{ .addr = 0xa5786c, .byte = 0x4e },
		{ .addr = 0xa5786d, .byte = 0x70 },
		{ .addr = 0xa5786e, .byte = 0xe9 },
		{ .addr = 0xa5786f, .byte = 0x99 },
		{ .addr = 0xac22de, .byte = 0x78 },
		{ .addr = 0xac22df, .byte = 0x6c },
		{ .addr = 0xac22da, .byte = 0x83 },
		{ .addr = 0xac22db, .byte = 0x0e },
		{ .addr = 0xac22dc, .byte = 0x00 },
		{ .addr = 0xac22dd, .byte = 0xa5 },
		{ .addr = 0x000020, .byte = 0x42 },
		{ .addr = 0x000021, .byte = 0xf0 },
		{ .addr = 0x000022, .byte = 0xb4 },
		{ .addr = 0x000023, .byte = 0x60 },
		{ .addr = 0xf0b460, .byte = 0x1a },
		{ .addr = 0xf0b461, .byte = 0xfb },
		{ .addr = 0xf0b462, .byte = 0x29 },
		{ .addr = 0xf0b463, .byte = 0x59 }
};

static const SST_Transaction reset_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11281118, .data = 30828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11281114, .data = 33550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11281116, .data = 165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 17136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 46176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15774816, .data = 6907, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15774818, .data = 10585, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_3[] = {
		{ .addr = 0x959fda, .byte = 0x4e },
		{ .addr = 0x959fdb, .byte = 0x70 },
		{ .addr = 0x959fdc, .byte = 0x14 },
		{ .addr = 0x959fdd, .byte = 0xb8 },
		{ .addr = 0x000020, .byte = 0xae },
		{ .addr = 0x000021, .byte = 0xbe },
		{ .addr = 0x000022, .byte = 0x2d },
		{ .addr = 0x000023, .byte = 0xf2 },
		{ .addr = 0xbe2df2, .byte = 0x97 },
		{ .addr = 0xbe2df3, .byte = 0x98 },
		{ .addr = 0xbe2df4, .byte = 0x5c },
		{ .addr = 0xbe2df5, .byte = 0xc1 }
};

static const SST_RamByte reset_final_ram_3[] = {
		{ .addr = 0x959fda, .byte = 0x4e },
		{ .addr = 0x959fdb, .byte = 0x70 },
		{ .addr = 0x959fdc, .byte = 0x14 },
		{ .addr = 0x959fdd, .byte = 0xb8 },
		{ .addr = 0x161fc8, .byte = 0x9f },
		{ .addr = 0x161fc9, .byte = 0xda },
		{ .addr = 0x161fc4, .byte = 0x84 },
		{ .addr = 0x161fc5, .byte = 0x19 },
		{ .addr = 0x161fc6, .byte = 0x00 },
		{ .addr = 0x161fc7, .byte = 0x95 },
		{ .addr = 0x000020, .byte = 0xae },
		{ .addr = 0x000021, .byte = 0xbe },
		{ .addr = 0x000022, .byte = 0x2d },
		{ .addr = 0x000023, .byte = 0xf2 },
		{ .addr = 0xbe2df2, .byte = 0x97 },
		{ .addr = 0xbe2df3, .byte = 0x98 },
		{ .addr = 0xbe2df4, .byte = 0x5c },
		{ .addr = 0xbe2df5, .byte = 0xc1 }
};

static const SST_Transaction reset_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1449928, .data = 40922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1449924, .data = 33817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1449926, .data = 149, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 44734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 11762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12463602, .data = 38808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12463604, .data = 23745, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_4[] = {
		{ .addr = 0x9d72ea, .byte = 0x4e },
		{ .addr = 0x9d72eb, .byte = 0x70 },
		{ .addr = 0x9d72ec, .byte = 0x44 },
		{ .addr = 0x9d72ed, .byte = 0x1f },
		{ .addr = 0x9d72ee, .byte = 0xa9 },
		{ .addr = 0x9d72ef, .byte = 0x1b }
};

static const SST_RamByte reset_final_ram_4[] = {
		{ .addr = 0x9d72ea, .byte = 0x4e },
		{ .addr = 0x9d72eb, .byte = 0x70 },
		{ .addr = 0x9d72ec, .byte = 0x44 },
		{ .addr = 0x9d72ed, .byte = 0x1f },
		{ .addr = 0x9d72ee, .byte = 0xa9 },
		{ .addr = 0x9d72ef, .byte = 0x1b }
};

static const SST_Transaction reset_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10318574, .data = 43291, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_5[] = {
		{ .addr = 0xa3c7be, .byte = 0x4e },
		{ .addr = 0xa3c7bf, .byte = 0x70 },
		{ .addr = 0xa3c7c0, .byte = 0xb3 },
		{ .addr = 0xa3c7c1, .byte = 0x40 },
		{ .addr = 0x000020, .byte = 0xbd },
		{ .addr = 0x000021, .byte = 0xd4 },
		{ .addr = 0x000022, .byte = 0x9b },
		{ .addr = 0x000023, .byte = 0x34 },
		{ .addr = 0xd49b34, .byte = 0xd0 },
		{ .addr = 0xd49b35, .byte = 0x4f },
		{ .addr = 0xd49b36, .byte = 0xa5 },
		{ .addr = 0xd49b37, .byte = 0xc0 }
};

static const SST_RamByte reset_final_ram_5[] = {
		{ .addr = 0xa3c7be, .byte = 0x4e },
		{ .addr = 0xa3c7bf, .byte = 0x70 },
		{ .addr = 0xa3c7c0, .byte = 0xb3 },
		{ .addr = 0xa3c7c1, .byte = 0x40 },
		{ .addr = 0xa9de50, .byte = 0xc7 },
		{ .addr = 0xa9de51, .byte = 0xbe },
		{ .addr = 0xa9de4c, .byte = 0x82 },
		{ .addr = 0xa9de4d, .byte = 0x0d },
		{ .addr = 0xa9de4e, .byte = 0x00 },
		{ .addr = 0xa9de4f, .byte = 0xa3 },
		{ .addr = 0x000020, .byte = 0xbd },
		{ .addr = 0x000021, .byte = 0xd4 },
		{ .addr = 0x000022, .byte = 0x9b },
		{ .addr = 0x000023, .byte = 0x34 },
		{ .addr = 0xd49b34, .byte = 0xd0 },
		{ .addr = 0xd49b35, .byte = 0x4f },
		{ .addr = 0xd49b36, .byte = 0xa5 },
		{ .addr = 0xd49b37, .byte = 0xc0 }
};

static const SST_Transaction reset_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11132496, .data = 51134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11132492, .data = 33293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11132494, .data = 163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 48596, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 39732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13933364, .data = 53327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13933366, .data = 42432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_6[] = {
		{ .addr = 0xeabc36, .byte = 0x4e },
		{ .addr = 0xeabc37, .byte = 0x70 },
		{ .addr = 0xeabc38, .byte = 0xfa },
		{ .addr = 0xeabc39, .byte = 0xa5 },
		{ .addr = 0x000020, .byte = 0x80 },
		{ .addr = 0x000021, .byte = 0xe8 },
		{ .addr = 0x000022, .byte = 0xd2 },
		{ .addr = 0x000023, .byte = 0xe6 },
		{ .addr = 0xe8d2e6, .byte = 0xd1 },
		{ .addr = 0xe8d2e7, .byte = 0xfe },
		{ .addr = 0xe8d2e8, .byte = 0xcb },
		{ .addr = 0xe8d2e9, .byte = 0x26 }
};

static const SST_RamByte reset_final_ram_6[] = {
		{ .addr = 0xeabc36, .byte = 0x4e },
		{ .addr = 0xeabc37, .byte = 0x70 },
		{ .addr = 0xeabc38, .byte = 0xfa },
		{ .addr = 0xeabc39, .byte = 0xa5 },
		{ .addr = 0xc20c00, .byte = 0xbc },
		{ .addr = 0xc20c01, .byte = 0x36 },
		{ .addr = 0xc20bfc, .byte = 0x85 },
		{ .addr = 0xc20bfd, .byte = 0x13 },
		{ .addr = 0xc20bfe, .byte = 0x00 },
		{ .addr = 0xc20bff, .byte = 0xea },
		{ .addr = 0x000020, .byte = 0x80 },
		{ .addr = 0x000021, .byte = 0xe8 },
		{ .addr = 0x000022, .byte = 0xd2 },
		{ .addr = 0x000023, .byte = 0xe6 },
		{ .addr = 0xe8d2e6, .byte = 0xd1 },
		{ .addr = 0xe8d2e7, .byte = 0xfe },
		{ .addr = 0xe8d2e8, .byte = 0xcb },
		{ .addr = 0xe8d2e9, .byte = 0x26 }
};

static const SST_Transaction reset_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12717056, .data = 48182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12717052, .data = 34067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12717054, .data = 234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 33000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 53990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15258342, .data = 53758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15258344, .data = 52006, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_7[] = {
		{ .addr = 0x3e5784, .byte = 0x4e },
		{ .addr = 0x3e5785, .byte = 0x70 },
		{ .addr = 0x3e5786, .byte = 0x36 },
		{ .addr = 0x3e5787, .byte = 0xfb },
		{ .addr = 0x000020, .byte = 0x5b },
		{ .addr = 0x000021, .byte = 0x68 },
		{ .addr = 0x000022, .byte = 0x74 },
		{ .addr = 0x000023, .byte = 0x48 },
		{ .addr = 0x687448, .byte = 0x57 },
		{ .addr = 0x687449, .byte = 0x18 },
		{ .addr = 0x68744a, .byte = 0xfa },
		{ .addr = 0x68744b, .byte = 0x0a }
};

static const SST_RamByte reset_final_ram_7[] = {
		{ .addr = 0x3e5784, .byte = 0x4e },
		{ .addr = 0x3e5785, .byte = 0x70 },
		{ .addr = 0x3e5786, .byte = 0x36 },
		{ .addr = 0x3e5787, .byte = 0xfb },
		{ .addr = 0xdc9c74, .byte = 0x57 },
		{ .addr = 0xdc9c75, .byte = 0x84 },
		{ .addr = 0xdc9c70, .byte = 0x07 },
		{ .addr = 0xdc9c71, .byte = 0x0c },
		{ .addr = 0xdc9c72, .byte = 0x00 },
		{ .addr = 0xdc9c73, .byte = 0x3e },
		{ .addr = 0x000020, .byte = 0x5b },
		{ .addr = 0x000021, .byte = 0x68 },
		{ .addr = 0x000022, .byte = 0x74 },
		{ .addr = 0x000023, .byte = 0x48 },
		{ .addr = 0x687448, .byte = 0x57 },
		{ .addr = 0x687449, .byte = 0x18 },
		{ .addr = 0x68744a, .byte = 0xfa },
		{ .addr = 0x68744b, .byte = 0x0a }
};

static const SST_Transaction reset_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14457972, .data = 22404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14457968, .data = 1804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14457970, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 23400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 29768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6845512, .data = 22296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6845514, .data = 64010, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_8[] = {
		{ .addr = 0x696552, .byte = 0x4e },
		{ .addr = 0x696553, .byte = 0x70 },
		{ .addr = 0x696554, .byte = 0x2c },
		{ .addr = 0x696555, .byte = 0x7f },
		{ .addr = 0x000020, .byte = 0x10 },
		{ .addr = 0x000021, .byte = 0xfa },
		{ .addr = 0x000022, .byte = 0xb2 },
		{ .addr = 0x000023, .byte = 0x94 },
		{ .addr = 0xfab294, .byte = 0x6f },
		{ .addr = 0xfab295, .byte = 0x90 },
		{ .addr = 0xfab296, .byte = 0xee },
		{ .addr = 0xfab297, .byte = 0x60 }
};

static const SST_RamByte reset_final_ram_8[] = {
		{ .addr = 0x696552, .byte = 0x4e },
		{ .addr = 0x696553, .byte = 0x70 },
		{ .addr = 0x696554, .byte = 0x2c },
		{ .addr = 0x696555, .byte = 0x7f },
		{ .addr = 0x544bee, .byte = 0x65 },
		{ .addr = 0x544bef, .byte = 0x52 },
		{ .addr = 0x544bea, .byte = 0x87 },
		{ .addr = 0x544beb, .byte = 0x17 },
		{ .addr = 0x544bec, .byte = 0x00 },
		{ .addr = 0x544bed, .byte = 0x69 },
		{ .addr = 0x000020, .byte = 0x10 },
		{ .addr = 0x000021, .byte = 0xfa },
		{ .addr = 0x000022, .byte = 0xb2 },
		{ .addr = 0x000023, .byte = 0x94 },
		{ .addr = 0xfab294, .byte = 0x6f },
		{ .addr = 0xfab295, .byte = 0x90 },
		{ .addr = 0xfab296, .byte = 0xee },
		{ .addr = 0xfab297, .byte = 0x60 }
};

static const SST_Transaction reset_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5524462, .data = 25938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5524458, .data = 34583, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5524460, .data = 105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 4346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 45716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16429716, .data = 28560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16429718, .data = 61024, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_9[] = {
		{ .addr = 0x258c84, .byte = 0x4e },
		{ .addr = 0x258c85, .byte = 0x70 },
		{ .addr = 0x258c86, .byte = 0x09 },
		{ .addr = 0x258c87, .byte = 0xfc },
		{ .addr = 0x000020, .byte = 0x6b },
		{ .addr = 0x000021, .byte = 0xb2 },
		{ .addr = 0x000022, .byte = 0x19 },
		{ .addr = 0x000023, .byte = 0xbe },
		{ .addr = 0xb219be, .byte = 0x03 },
		{ .addr = 0xb219bf, .byte = 0x9b },
		{ .addr = 0xb219c0, .byte = 0x65 },
		{ .addr = 0xb219c1, .byte = 0x5c }
};

static const SST_RamByte reset_final_ram_9[] = {
		{ .addr = 0x258c84, .byte = 0x4e },
		{ .addr = 0x258c85, .byte = 0x70 },
		{ .addr = 0x258c86, .byte = 0x09 },
		{ .addr = 0x258c87, .byte = 0xfc },
		{ .addr = 0x7d7b24, .byte = 0x8c },
		{ .addr = 0x7d7b25, .byte = 0x84 },
		{ .addr = 0x7d7b20, .byte = 0x04 },
		{ .addr = 0x7d7b21, .byte = 0x19 },
		{ .addr = 0x7d7b22, .byte = 0x00 },
		{ .addr = 0x7d7b23, .byte = 0x25 },
		{ .addr = 0x000020, .byte = 0x6b },
		{ .addr = 0x000021, .byte = 0xb2 },
		{ .addr = 0x000022, .byte = 0x19 },
		{ .addr = 0x000023, .byte = 0xbe },
		{ .addr = 0xb219be, .byte = 0x03 },
		{ .addr = 0xb219bf, .byte = 0x9b },
		{ .addr = 0xb219c0, .byte = 0x65 },
		{ .addr = 0xb219c1, .byte = 0x5c }
};

static const SST_Transaction reset_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8223524, .data = 35972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8223520, .data = 1049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8223522, .data = 37, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 27570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 6590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11671998, .data = 923, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11672000, .data = 25948, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_10[] = {
		{ .addr = 0x37b9c0, .byte = 0x4e },
		{ .addr = 0x37b9c1, .byte = 0x70 },
		{ .addr = 0x37b9c2, .byte = 0x9d },
		{ .addr = 0x37b9c3, .byte = 0xcb },
		{ .addr = 0x37b9c4, .byte = 0xed },
		{ .addr = 0x37b9c5, .byte = 0xc6 }
};

static const SST_RamByte reset_final_ram_10[] = {
		{ .addr = 0x37b9c0, .byte = 0x4e },
		{ .addr = 0x37b9c1, .byte = 0x70 },
		{ .addr = 0x37b9c2, .byte = 0x9d },
		{ .addr = 0x37b9c3, .byte = 0xcb },
		{ .addr = 0x37b9c4, .byte = 0xed },
		{ .addr = 0x37b9c5, .byte = 0xc6 }
};

static const SST_Transaction reset_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3652036, .data = 60870, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_11[] = {
		{ .addr = 0x5af772, .byte = 0x4e },
		{ .addr = 0x5af773, .byte = 0x70 },
		{ .addr = 0x5af774, .byte = 0x84 },
		{ .addr = 0x5af775, .byte = 0x2b },
		{ .addr = 0x5af776, .byte = 0xa9 },
		{ .addr = 0x5af777, .byte = 0x6b }
};

static const SST_RamByte reset_final_ram_11[] = {
		{ .addr = 0x5af772, .byte = 0x4e },
		{ .addr = 0x5af773, .byte = 0x70 },
		{ .addr = 0x5af774, .byte = 0x84 },
		{ .addr = 0x5af775, .byte = 0x2b },
		{ .addr = 0x5af776, .byte = 0xa9 },
		{ .addr = 0x5af777, .byte = 0x6b }
};

static const SST_Transaction reset_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5961590, .data = 43371, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_12[] = {
		{ .addr = 0x2dc510, .byte = 0x4e },
		{ .addr = 0x2dc511, .byte = 0x70 },
		{ .addr = 0x2dc512, .byte = 0xed },
		{ .addr = 0x2dc513, .byte = 0xce },
		{ .addr = 0x000020, .byte = 0xf3 },
		{ .addr = 0x000021, .byte = 0x96 },
		{ .addr = 0x000022, .byte = 0xa4 },
		{ .addr = 0x000023, .byte = 0x3e },
		{ .addr = 0x96a43e, .byte = 0x20 },
		{ .addr = 0x96a43f, .byte = 0xbe },
		{ .addr = 0x96a440, .byte = 0x0a },
		{ .addr = 0x96a441, .byte = 0x55 }
};

static const SST_RamByte reset_final_ram_12[] = {
		{ .addr = 0x2dc510, .byte = 0x4e },
		{ .addr = 0x2dc511, .byte = 0x70 },
		{ .addr = 0x2dc512, .byte = 0xed },
		{ .addr = 0x2dc513, .byte = 0xce },
		{ .addr = 0xe01eb6, .byte = 0xc5 },
		{ .addr = 0xe01eb7, .byte = 0x10 },
		{ .addr = 0xe01eb2, .byte = 0x83 },
		{ .addr = 0xe01eb3, .byte = 0x16 },
		{ .addr = 0xe01eb4, .byte = 0x00 },
		{ .addr = 0xe01eb5, .byte = 0x2d },
		{ .addr = 0x000020, .byte = 0xf3 },
		{ .addr = 0x000021, .byte = 0x96 },
		{ .addr = 0x000022, .byte = 0xa4 },
		{ .addr = 0x000023, .byte = 0x3e },
		{ .addr = 0x96a43e, .byte = 0x20 },
		{ .addr = 0x96a43f, .byte = 0xbe },
		{ .addr = 0x96a440, .byte = 0x0a },
		{ .addr = 0x96a441, .byte = 0x55 }
};

static const SST_Transaction reset_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14687926, .data = 50448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14687922, .data = 33558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14687924, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 62358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 42046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9872446, .data = 8382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9872448, .data = 2645, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_13[] = {
		{ .addr = 0x7e0618, .byte = 0x4e },
		{ .addr = 0x7e0619, .byte = 0x70 },
		{ .addr = 0x7e061a, .byte = 0xac },
		{ .addr = 0x7e061b, .byte = 0x4a },
		{ .addr = 0x7e061c, .byte = 0x49 },
		{ .addr = 0x7e061d, .byte = 0xfa }
};

static const SST_RamByte reset_final_ram_13[] = {
		{ .addr = 0x7e0618, .byte = 0x4e },
		{ .addr = 0x7e0619, .byte = 0x70 },
		{ .addr = 0x7e061a, .byte = 0xac },
		{ .addr = 0x7e061b, .byte = 0x4a },
		{ .addr = 0x7e061c, .byte = 0x49 },
		{ .addr = 0x7e061d, .byte = 0xfa }
};

static const SST_Transaction reset_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8259100, .data = 18938, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_14[] = {
		{ .addr = 0x2dfb44, .byte = 0x4e },
		{ .addr = 0x2dfb45, .byte = 0x70 },
		{ .addr = 0x2dfb46, .byte = 0xb2 },
		{ .addr = 0x2dfb47, .byte = 0x09 },
		{ .addr = 0x2dfb48, .byte = 0x95 },
		{ .addr = 0x2dfb49, .byte = 0x65 }
};

static const SST_RamByte reset_final_ram_14[] = {
		{ .addr = 0x2dfb44, .byte = 0x4e },
		{ .addr = 0x2dfb45, .byte = 0x70 },
		{ .addr = 0x2dfb46, .byte = 0xb2 },
		{ .addr = 0x2dfb47, .byte = 0x09 },
		{ .addr = 0x2dfb48, .byte = 0x95 },
		{ .addr = 0x2dfb49, .byte = 0x65 }
};

static const SST_Transaction reset_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3013448, .data = 38245, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_15[] = {
		{ .addr = 0x61f068, .byte = 0x4e },
		{ .addr = 0x61f069, .byte = 0x70 },
		{ .addr = 0x61f06a, .byte = 0x50 },
		{ .addr = 0x61f06b, .byte = 0x60 },
		{ .addr = 0x61f06c, .byte = 0xab },
		{ .addr = 0x61f06d, .byte = 0x8e }
};

static const SST_RamByte reset_final_ram_15[] = {
		{ .addr = 0x61f068, .byte = 0x4e },
		{ .addr = 0x61f069, .byte = 0x70 },
		{ .addr = 0x61f06a, .byte = 0x50 },
		{ .addr = 0x61f06b, .byte = 0x60 },
		{ .addr = 0x61f06c, .byte = 0xab },
		{ .addr = 0x61f06d, .byte = 0x8e }
};

static const SST_Transaction reset_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6418540, .data = 43918, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t RESET_TEST_COUNT = 16;
static const SST_TestCase reset[] = {
	{
		.name = "000 RESET 4e70",
		.initial = {
			.regs = {
				1689175132, 835547661, 2786586489, 2380291742, 2111070254, 293396557, 930421946, 1136885942, 2570742412, 3746892549, 3454825972, 899140581, 394677129, 4290643341, 2216700769, 15076452, 3180312, 1567, 84888
			},
			.prefetch0 = 20080,
			.prefetch1 = 45727,
			.ram = reset_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1689175132, 835547661, 2786586489, 2380291742, 2111070254, 293396557, 930421946, 1136885942, 2570742412, 3746892549, 3454825972, 899140581, 394677129, 4290643341, 2216700769, 15076452, 3180306, 9759, 1539456286
			},
			.prefetch0 = 61977,
			.prefetch1 = 59024,
			.ram = reset_final_ram_0,
			.ram_len = 18,
		},
		.transactions = reset_transactions_0,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "001 RESET 4e70",
		.initial = {
			.regs = {
				576812424, 3239183407, 2451457146, 963698368, 2726071555, 3313815971, 4181998132, 206348474, 1389338090, 2947428658, 98090692, 4254552137, 1128749159, 2199201150, 2623532347, 11488368, 13248146, 8714, 16679908
			},
			.prefetch0 = 20080,
			.prefetch1 = 2273,
			.ram = reset_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				576812424, 3239183407, 2451457146, 963698368, 2726071555, 3313815971, 4181998132, 206348474, 1389338090, 2947428658, 98090692, 4254552137, 1128749159, 2199201150, 2623532347, 11488368, 13248146, 8714, 16679910
			},
			.prefetch0 = 2273,
			.prefetch1 = 58935,
			.ram = reset_final_ram_1,
			.ram_len = 6,
		},
		.transactions = reset_transactions_1,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "002 RESET 4e70",
		.initial = {
			.regs = {
				2979857268, 1763131565, 1347831021, 634330202, 168406964, 910367948, 2207062155, 449169396, 2983279973, 1608872471, 1568395651, 2384264590, 3888267357, 2278205540, 808274419, 8832324, 11281120, 33550, 10844272
			},
			.prefetch0 = 20080,
			.prefetch1 = 59801,
			.ram = reset_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2979857268, 1763131565, 1347831021, 634330202, 168406964, 910367948, 2207062155, 449169396, 2983279973, 1608872471, 1568395651, 2384264590, 3888267357, 2278205540, 808274419, 8832324, 11281114, 8974, 1123071076
			},
			.prefetch0 = 6907,
			.prefetch1 = 10585,
			.ram = reset_final_ram_2,
			.ram_len = 18,
		},
		.transactions = reset_transactions_2,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "003 RESET 4e70",
		.initial = {
			.regs = {
				2527266946, 3516308764, 2571471296, 4272420122, 2627872861, 3659660832, 886264102, 3401109072, 1212388169, 3095411349, 3088359728, 788234637, 303820270, 3407247232, 4010886967, 8920698, 1449930, 33817, 9805790
			},
			.prefetch0 = 20080,
			.prefetch1 = 5304,
			.ram = reset_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2527266946, 3516308764, 2571471296, 4272420122, 2627872861, 3659660832, 886264102, 3401109072, 1212388169, 3095411349, 3088359728, 788234637, 303820270, 3407247232, 4010886967, 8920698, 1449924, 9241, 2931699190
			},
			.prefetch0 = 38808,
			.prefetch1 = 23745,
			.ram = reset_final_ram_3,
			.ram_len = 18,
		},
		.transactions = reset_transactions_3,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "004 RESET 4e70",
		.initial = {
			.regs = {
				3698789207, 1584160283, 458361315, 2386687229, 779475152, 454564609, 2130384426, 2469530614, 3575525842, 2746115351, 4254614869, 1771178518, 1859986821, 3849024129, 3974097363, 11084344, 15834130, 42502, 10318574
			},
			.prefetch0 = 20080,
			.prefetch1 = 17439,
			.ram = reset_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3698789207, 1584160283, 458361315, 2386687229, 779475152, 454564609, 2130384426, 2469530614, 3575525842, 2746115351, 4254614869, 1771178518, 1859986821, 3849024129, 3974097363, 11084344, 15834130, 42502, 10318576
			},
			.prefetch0 = 17439,
			.prefetch1 = 43291,
			.ram = reset_final_ram_4,
			.ram_len = 6,
		},
		.transactions = reset_transactions_4,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "005 RESET 4e70",
		.initial = {
			.regs = {
				2390493506, 3265121160, 793208935, 3262630267, 1193750165, 438706479, 892169606, 1063708345, 293919323, 1021313742, 3616741921, 570250866, 2050540111, 4268649700, 2365909499, 7058108, 11132498, 33293, 10733506
			},
			.prefetch0 = 20080,
			.prefetch1 = 45888,
			.ram = reset_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2390493506, 3265121160, 793208935, 3262630267, 1193750165, 438706479, 892169606, 1063708345, 293919323, 1021313742, 3616741921, 570250866, 2050540111, 4268649700, 2365909499, 7058108, 11132492, 8717, 3184827192
			},
			.prefetch0 = 53327,
			.prefetch1 = 42432,
			.ram = reset_final_ram_5,
			.ram_len = 18,
		},
		.transactions = reset_transactions_5,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "006 RESET 4e70",
		.initial = {
			.regs = {
				3968161678, 3872318669, 1450350220, 2147248256, 2817139811, 3658955258, 1317420818, 4174406892, 1075395528, 2275087581, 4166771845, 1890264453, 2135692295, 375862487, 4246421981, 3022860, 12717058, 34067, 15383610
			},
			.prefetch0 = 20080,
			.prefetch1 = 64165,
			.ram = reset_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3968161678, 3872318669, 1450350220, 2147248256, 2817139811, 3658955258, 1317420818, 4174406892, 1075395528, 2275087581, 4166771845, 1890264453, 2135692295, 375862487, 4246421981, 3022860, 12717052, 9491, 2162741994
			},
			.prefetch0 = 53758,
			.prefetch1 = 52006,
			.ram = reset_final_ram_6,
			.ram_len = 18,
		},
		.transactions = reset_transactions_6,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "007 RESET 4e70",
		.initial = {
			.regs = {
				3734213400, 2855193005, 4062034316, 1823165467, 1220720999, 4114486136, 2994590191, 2916245012, 594034464, 491597693, 2524394971, 131665450, 1097519238, 3654100106, 3183737413, 10256660, 14457974, 1804, 4085640
			},
			.prefetch0 = 20080,
			.prefetch1 = 14075,
			.ram = reset_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3734213400, 2855193005, 4062034316, 1823165467, 1220720999, 4114486136, 2994590191, 2916245012, 594034464, 491597693, 2524394971, 131665450, 1097519238, 3654100106, 3183737413, 10256660, 14457968, 9996, 1533572172
			},
			.prefetch0 = 22296,
			.prefetch1 = 64010,
			.ram = reset_final_ram_7,
			.ram_len = 18,
		},
		.transactions = reset_transactions_7,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "008 RESET 4e70",
		.initial = {
			.regs = {
				1439534328, 228244681, 3975730098, 2205020338, 1447152073, 3825127844, 697377327, 3344579169, 4131443433, 3901767747, 2093056756, 3028463287, 2066354106, 2339859365, 591862547, 2187654, 5524464, 34583, 6907222
			},
			.prefetch0 = 20080,
			.prefetch1 = 11391,
			.ram = reset_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1439534328, 228244681, 3975730098, 2205020338, 1447152073, 3825127844, 697377327, 3344579169, 4131443433, 3901767747, 2093056756, 3028463287, 2066354106, 2339859365, 591862547, 2187654, 5524458, 10007, 284865176
			},
			.prefetch0 = 28560,
			.prefetch1 = 61024,
			.ram = reset_final_ram_8,
			.ram_len = 18,
		},
		.transactions = reset_transactions_8,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "009 RESET 4e70",
		.initial = {
			.regs = {
				3147647790, 2677666822, 1777294229, 3160517858, 2822790057, 1853814925, 224887783, 886646907, 724547933, 1887110354, 3592894016, 2149664171, 1615912639, 3415460329, 2529826625, 4792974, 8223526, 1049, 2460808
			},
			.prefetch0 = 20080,
			.prefetch1 = 2556,
			.ram = reset_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3147647790, 2677666822, 1777294229, 3160517858, 2822790057, 1853814925, 224887783, 886646907, 724547933, 1887110354, 3592894016, 2149664171, 1615912639, 3415460329, 2529826625, 4792974, 8223520, 9241, 1806834114
			},
			.prefetch0 = 923,
			.prefetch1 = 25948,
			.ram = reset_final_ram_9,
			.ram_len = 18,
		},
		.transactions = reset_transactions_9,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "010 RESET 4e70",
		.initial = {
			.regs = {
				1115438073, 2923445015, 479341796, 4127178548, 623112115, 2125473464, 2250251661, 577416376, 2636192573, 4181550588, 3851319364, 3989354546, 3919564814, 2676649481, 2273560573, 4697080, 8668430, 41484, 3652036
			},
			.prefetch0 = 20080,
			.prefetch1 = 40395,
			.ram = reset_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1115438073, 2923445015, 479341796, 4127178548, 623112115, 2125473464, 2250251661, 577416376, 2636192573, 4181550588, 3851319364, 3989354546, 3919564814, 2676649481, 2273560573, 4697080, 8668430, 41484, 3652038
			},
			.prefetch0 = 40395,
			.prefetch1 = 60870,
			.ram = reset_final_ram_10,
			.ram_len = 6,
		},
		.transactions = reset_transactions_10,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "011 RESET 4e70",
		.initial = {
			.regs = {
				3372870080, 3977780190, 2969358452, 2700384950, 639857565, 308250466, 803465062, 3046601942, 4243477410, 2057055498, 1435184049, 3177225034, 3321640370, 2980229493, 2191787907, 14029760, 1983332, 41217, 5961590
			},
			.prefetch0 = 20080,
			.prefetch1 = 33835,
			.ram = reset_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3372870080, 3977780190, 2969358452, 2700384950, 639857565, 308250466, 803465062, 3046601942, 4243477410, 2057055498, 1435184049, 3177225034, 3321640370, 2980229493, 2191787907, 14029760, 1983332, 41217, 5961592
			},
			.prefetch0 = 33835,
			.prefetch1 = 43371,
			.ram = reset_final_ram_11,
			.ram_len = 6,
		},
		.transactions = reset_transactions_11,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "012 RESET 4e70",
		.initial = {
			.regs = {
				2456208809, 3498665114, 152478104, 3718109403, 388282128, 2892732020, 3769623828, 2960951076, 3566586865, 2035958229, 108516175, 612363018, 2044302154, 1721290945, 796207741, 4736084, 14687928, 33558, 2999572
			},
			.prefetch0 = 20080,
			.prefetch1 = 60878,
			.ram = reset_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2456208809, 3498665114, 152478104, 3718109403, 388282128, 2892732020, 3769623828, 2960951076, 3566586865, 2035958229, 108516175, 612363018, 2044302154, 1721290945, 796207741, 4736084, 14687922, 8982, 4086735938
			},
			.prefetch0 = 8382,
			.prefetch1 = 2645,
			.ram = reset_final_ram_12,
			.ram_len = 18,
		},
		.transactions = reset_transactions_12,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "013 RESET 4e70",
		.initial = {
			.regs = {
				165630685, 2104196417, 483426414, 1942202725, 2432034493, 3306780701, 3243752335, 2698864911, 1182524458, 3680324785, 1181819406, 1601119378, 2470843540, 2802247665, 1728729534, 16714322, 14722600, 42523, 8259100
			},
			.prefetch0 = 20080,
			.prefetch1 = 44106,
			.ram = reset_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				165630685, 2104196417, 483426414, 1942202725, 2432034493, 3306780701, 3243752335, 2698864911, 1182524458, 3680324785, 1181819406, 1601119378, 2470843540, 2802247665, 1728729534, 16714322, 14722600, 42523, 8259102
			},
			.prefetch0 = 44106,
			.prefetch1 = 18938,
			.ram = reset_final_ram_13,
			.ram_len = 6,
		},
		.transactions = reset_transactions_13,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "014 RESET 4e70",
		.initial = {
			.regs = {
				852103662, 556260918, 2965485031, 2265768786, 175175354, 1285315189, 2556646505, 4186696007, 1136808587, 4279191921, 1498973008, 1331402067, 4248315960, 3865524772, 3335934335, 8244806, 15251228, 42515, 3013448
			},
			.prefetch0 = 20080,
			.prefetch1 = 45577,
			.ram = reset_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				852103662, 556260918, 2965485031, 2265768786, 175175354, 1285315189, 2556646505, 4186696007, 1136808587, 4279191921, 1498973008, 1331402067, 4248315960, 3865524772, 3335934335, 8244806, 15251228, 42515, 3013450
			},
			.prefetch0 = 45577,
			.prefetch1 = 38245,
			.ram = reset_final_ram_14,
			.ram_len = 6,
		},
		.transactions = reset_transactions_14,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "015 RESET 4e70",
		.initial = {
			.regs = {
				2544553574, 1162410713, 1555813747, 2845328932, 2889893167, 2863297720, 3336736873, 3953616600, 2899240585, 1391035390, 246263038, 2634547189, 3389068756, 2363859233, 2275314840, 12550918, 5271606, 8470, 6418540
			},
			.prefetch0 = 20080,
			.prefetch1 = 20576,
			.ram = reset_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2544553574, 1162410713, 1555813747, 2845328932, 2889893167, 2863297720, 3336736873, 3953616600, 2899240585, 1391035390, 246263038, 2634547189, 3389068756, 2363859233, 2275314840, 12550918, 5271606, 8470, 6418542
			},
			.prefetch0 = 20576,
			.prefetch1 = 43918,
			.ram = reset_final_ram_15,
			.ram_len = 6,
		},
		.transactions = reset_transactions_15,
		.transactions_len = 2,
		.lenght = 132,
	},
};

#endif /* RBT_RESET_H */