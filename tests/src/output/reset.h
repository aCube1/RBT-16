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

static const SST_RamByte reset_initial_ram_16[] = {
		{ .addr = 0xbc3332, .byte = 0x4e },
		{ .addr = 0xbc3333, .byte = 0x70 },
		{ .addr = 0xbc3334, .byte = 0x23 },
		{ .addr = 0xbc3335, .byte = 0x6f },
		{ .addr = 0xbc3336, .byte = 0x31 },
		{ .addr = 0xbc3337, .byte = 0xab }
};

static const SST_RamByte reset_final_ram_16[] = {
		{ .addr = 0xbc3332, .byte = 0x4e },
		{ .addr = 0xbc3333, .byte = 0x70 },
		{ .addr = 0xbc3334, .byte = 0x23 },
		{ .addr = 0xbc3335, .byte = 0x6f },
		{ .addr = 0xbc3336, .byte = 0x31 },
		{ .addr = 0xbc3337, .byte = 0xab }
};

static const SST_Transaction reset_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12333878, .data = 12715, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_17[] = {
		{ .addr = 0x70fb96, .byte = 0x4e },
		{ .addr = 0x70fb97, .byte = 0x70 },
		{ .addr = 0x70fb98, .byte = 0x27 },
		{ .addr = 0x70fb99, .byte = 0x51 },
		{ .addr = 0x70fb9a, .byte = 0xd8 },
		{ .addr = 0x70fb9b, .byte = 0x31 }
};

static const SST_RamByte reset_final_ram_17[] = {
		{ .addr = 0x70fb96, .byte = 0x4e },
		{ .addr = 0x70fb97, .byte = 0x70 },
		{ .addr = 0x70fb98, .byte = 0x27 },
		{ .addr = 0x70fb99, .byte = 0x51 },
		{ .addr = 0x70fb9a, .byte = 0xd8 },
		{ .addr = 0x70fb9b, .byte = 0x31 }
};

static const SST_Transaction reset_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7404442, .data = 55345, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_18[] = {
		{ .addr = 0x1d792a, .byte = 0x4e },
		{ .addr = 0x1d792b, .byte = 0x70 },
		{ .addr = 0x1d792c, .byte = 0xd1 },
		{ .addr = 0x1d792d, .byte = 0x0c },
		{ .addr = 0x000020, .byte = 0x13 },
		{ .addr = 0x000021, .byte = 0x4e },
		{ .addr = 0x000022, .byte = 0x3f },
		{ .addr = 0x000023, .byte = 0x42 },
		{ .addr = 0x4e3f42, .byte = 0x0b },
		{ .addr = 0x4e3f43, .byte = 0xa1 },
		{ .addr = 0x4e3f44, .byte = 0x5d },
		{ .addr = 0x4e3f45, .byte = 0x7f }
};

static const SST_RamByte reset_final_ram_18[] = {
		{ .addr = 0x1d792a, .byte = 0x4e },
		{ .addr = 0x1d792b, .byte = 0x70 },
		{ .addr = 0x1d792c, .byte = 0xd1 },
		{ .addr = 0x1d792d, .byte = 0x0c },
		{ .addr = 0xfdd7be, .byte = 0x79 },
		{ .addr = 0xfdd7bf, .byte = 0x2a },
		{ .addr = 0xfdd7ba, .byte = 0x03 },
		{ .addr = 0xfdd7bb, .byte = 0x0e },
		{ .addr = 0xfdd7bc, .byte = 0x00 },
		{ .addr = 0xfdd7bd, .byte = 0x1d },
		{ .addr = 0x000020, .byte = 0x13 },
		{ .addr = 0x000021, .byte = 0x4e },
		{ .addr = 0x000022, .byte = 0x3f },
		{ .addr = 0x000023, .byte = 0x42 },
		{ .addr = 0x4e3f42, .byte = 0x0b },
		{ .addr = 0x4e3f43, .byte = 0xa1 },
		{ .addr = 0x4e3f44, .byte = 0x5d },
		{ .addr = 0x4e3f45, .byte = 0x7f }
};

static const SST_Transaction reset_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16635838, .data = 31018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16635834, .data = 782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16635836, .data = 29, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 4942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 16194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5128002, .data = 2977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5128004, .data = 23935, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_19[] = {
		{ .addr = 0xaeb5b0, .byte = 0x4e },
		{ .addr = 0xaeb5b1, .byte = 0x70 },
		{ .addr = 0xaeb5b2, .byte = 0x3d },
		{ .addr = 0xaeb5b3, .byte = 0xe6 },
		{ .addr = 0xaeb5b4, .byte = 0x25 },
		{ .addr = 0xaeb5b5, .byte = 0x90 }
};

static const SST_RamByte reset_final_ram_19[] = {
		{ .addr = 0xaeb5b0, .byte = 0x4e },
		{ .addr = 0xaeb5b1, .byte = 0x70 },
		{ .addr = 0xaeb5b2, .byte = 0x3d },
		{ .addr = 0xaeb5b3, .byte = 0xe6 },
		{ .addr = 0xaeb5b4, .byte = 0x25 },
		{ .addr = 0xaeb5b5, .byte = 0x90 }
};

static const SST_Transaction reset_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11449780, .data = 9616, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_20[] = {
		{ .addr = 0xe2ca1e, .byte = 0x4e },
		{ .addr = 0xe2ca1f, .byte = 0x70 },
		{ .addr = 0xe2ca20, .byte = 0x9e },
		{ .addr = 0xe2ca21, .byte = 0xd2 },
		{ .addr = 0xe2ca22, .byte = 0xaf },
		{ .addr = 0xe2ca23, .byte = 0xa2 }
};

static const SST_RamByte reset_final_ram_20[] = {
		{ .addr = 0xe2ca1e, .byte = 0x4e },
		{ .addr = 0xe2ca1f, .byte = 0x70 },
		{ .addr = 0xe2ca20, .byte = 0x9e },
		{ .addr = 0xe2ca21, .byte = 0xd2 },
		{ .addr = 0xe2ca22, .byte = 0xaf },
		{ .addr = 0xe2ca23, .byte = 0xa2 }
};

static const SST_Transaction reset_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14862882, .data = 44962, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_21[] = {
		{ .addr = 0xf4028a, .byte = 0x4e },
		{ .addr = 0xf4028b, .byte = 0x70 },
		{ .addr = 0xf4028c, .byte = 0xf9 },
		{ .addr = 0xf4028d, .byte = 0x94 },
		{ .addr = 0x000020, .byte = 0x82 },
		{ .addr = 0x000021, .byte = 0xac },
		{ .addr = 0x000022, .byte = 0x5e },
		{ .addr = 0x000023, .byte = 0x4c },
		{ .addr = 0xac5e4c, .byte = 0x90 },
		{ .addr = 0xac5e4d, .byte = 0x15 },
		{ .addr = 0xac5e4e, .byte = 0x3d },
		{ .addr = 0xac5e4f, .byte = 0x70 }
};

static const SST_RamByte reset_final_ram_21[] = {
		{ .addr = 0xf4028a, .byte = 0x4e },
		{ .addr = 0xf4028b, .byte = 0x70 },
		{ .addr = 0xf4028c, .byte = 0xf9 },
		{ .addr = 0xf4028d, .byte = 0x94 },
		{ .addr = 0x177716, .byte = 0x02 },
		{ .addr = 0x177717, .byte = 0x8a },
		{ .addr = 0x177712, .byte = 0x83 },
		{ .addr = 0x177713, .byte = 0x15 },
		{ .addr = 0x177714, .byte = 0x00 },
		{ .addr = 0x177715, .byte = 0xf4 },
		{ .addr = 0x000020, .byte = 0x82 },
		{ .addr = 0x000021, .byte = 0xac },
		{ .addr = 0x000022, .byte = 0x5e },
		{ .addr = 0x000023, .byte = 0x4c },
		{ .addr = 0xac5e4c, .byte = 0x90 },
		{ .addr = 0xac5e4d, .byte = 0x15 },
		{ .addr = 0xac5e4e, .byte = 0x3d },
		{ .addr = 0xac5e4f, .byte = 0x70 }
};

static const SST_Transaction reset_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1537814, .data = 650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1537810, .data = 33557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1537812, .data = 244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 33452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 24140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11296332, .data = 36885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11296334, .data = 15728, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_22[] = {
		{ .addr = 0x057876, .byte = 0x4e },
		{ .addr = 0x057877, .byte = 0x70 },
		{ .addr = 0x057878, .byte = 0x7e },
		{ .addr = 0x057879, .byte = 0x5d },
		{ .addr = 0x000020, .byte = 0x51 },
		{ .addr = 0x000021, .byte = 0xee },
		{ .addr = 0x000022, .byte = 0x8e },
		{ .addr = 0x000023, .byte = 0xc0 },
		{ .addr = 0xee8ec0, .byte = 0x33 },
		{ .addr = 0xee8ec1, .byte = 0xae },
		{ .addr = 0xee8ec2, .byte = 0xc7 },
		{ .addr = 0xee8ec3, .byte = 0x6d }
};

static const SST_RamByte reset_final_ram_22[] = {
		{ .addr = 0x057876, .byte = 0x4e },
		{ .addr = 0x057877, .byte = 0x70 },
		{ .addr = 0x057878, .byte = 0x7e },
		{ .addr = 0x057879, .byte = 0x5d },
		{ .addr = 0x08b430, .byte = 0x78 },
		{ .addr = 0x08b431, .byte = 0x76 },
		{ .addr = 0x08b42c, .byte = 0x05 },
		{ .addr = 0x08b42d, .byte = 0x08 },
		{ .addr = 0x08b42e, .byte = 0x00 },
		{ .addr = 0x08b42f, .byte = 0x05 },
		{ .addr = 0x000020, .byte = 0x51 },
		{ .addr = 0x000021, .byte = 0xee },
		{ .addr = 0x000022, .byte = 0x8e },
		{ .addr = 0x000023, .byte = 0xc0 },
		{ .addr = 0xee8ec0, .byte = 0x33 },
		{ .addr = 0xee8ec1, .byte = 0xae },
		{ .addr = 0xee8ec2, .byte = 0xc7 },
		{ .addr = 0xee8ec3, .byte = 0x6d }
};

static const SST_Transaction reset_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 570416, .data = 30838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 570412, .data = 1288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 570414, .data = 5, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 20974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 36544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15634112, .data = 13230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15634114, .data = 51053, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_23[] = {
		{ .addr = 0xdd7c50, .byte = 0x4e },
		{ .addr = 0xdd7c51, .byte = 0x70 },
		{ .addr = 0xdd7c52, .byte = 0x39 },
		{ .addr = 0xdd7c53, .byte = 0x58 },
		{ .addr = 0x000020, .byte = 0x5b },
		{ .addr = 0x000021, .byte = 0x56 },
		{ .addr = 0x000022, .byte = 0x90 },
		{ .addr = 0x000023, .byte = 0x0a },
		{ .addr = 0x56900a, .byte = 0x13 },
		{ .addr = 0x56900b, .byte = 0x63 },
		{ .addr = 0x56900c, .byte = 0xcf },
		{ .addr = 0x56900d, .byte = 0x96 }
};

static const SST_RamByte reset_final_ram_23[] = {
		{ .addr = 0xdd7c50, .byte = 0x4e },
		{ .addr = 0xdd7c51, .byte = 0x70 },
		{ .addr = 0xdd7c52, .byte = 0x39 },
		{ .addr = 0xdd7c53, .byte = 0x58 },
		{ .addr = 0x914e76, .byte = 0x7c },
		{ .addr = 0x914e77, .byte = 0x50 },
		{ .addr = 0x914e72, .byte = 0x86 },
		{ .addr = 0x914e73, .byte = 0x04 },
		{ .addr = 0x914e74, .byte = 0x00 },
		{ .addr = 0x914e75, .byte = 0xdd },
		{ .addr = 0x000020, .byte = 0x5b },
		{ .addr = 0x000021, .byte = 0x56 },
		{ .addr = 0x000022, .byte = 0x90 },
		{ .addr = 0x000023, .byte = 0x0a },
		{ .addr = 0x56900a, .byte = 0x13 },
		{ .addr = 0x56900b, .byte = 0x63 },
		{ .addr = 0x56900c, .byte = 0xcf },
		{ .addr = 0x56900d, .byte = 0x96 }
};

static const SST_Transaction reset_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9522806, .data = 31824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9522802, .data = 34308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9522804, .data = 221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 23382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 36874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5672970, .data = 4963, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5672972, .data = 53142, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_24[] = {
		{ .addr = 0x4f35f4, .byte = 0x4e },
		{ .addr = 0x4f35f5, .byte = 0x70 },
		{ .addr = 0x4f35f6, .byte = 0x49 },
		{ .addr = 0x4f35f7, .byte = 0xc5 },
		{ .addr = 0x4f35f8, .byte = 0x9b },
		{ .addr = 0x4f35f9, .byte = 0xfa }
};

static const SST_RamByte reset_final_ram_24[] = {
		{ .addr = 0x4f35f4, .byte = 0x4e },
		{ .addr = 0x4f35f5, .byte = 0x70 },
		{ .addr = 0x4f35f6, .byte = 0x49 },
		{ .addr = 0x4f35f7, .byte = 0xc5 },
		{ .addr = 0x4f35f8, .byte = 0x9b },
		{ .addr = 0x4f35f9, .byte = 0xfa }
};

static const SST_Transaction reset_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5191160, .data = 39930, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_25[] = {
		{ .addr = 0x44392e, .byte = 0x4e },
		{ .addr = 0x44392f, .byte = 0x70 },
		{ .addr = 0x443930, .byte = 0x5a },
		{ .addr = 0x443931, .byte = 0xd3 },
		{ .addr = 0x000020, .byte = 0x1f },
		{ .addr = 0x000021, .byte = 0xce },
		{ .addr = 0x000022, .byte = 0x70 },
		{ .addr = 0x000023, .byte = 0xf8 },
		{ .addr = 0xce70f8, .byte = 0x6d },
		{ .addr = 0xce70f9, .byte = 0x64 },
		{ .addr = 0xce70fa, .byte = 0x92 },
		{ .addr = 0xce70fb, .byte = 0x29 }
};

static const SST_RamByte reset_final_ram_25[] = {
		{ .addr = 0x44392e, .byte = 0x4e },
		{ .addr = 0x44392f, .byte = 0x70 },
		{ .addr = 0x443930, .byte = 0x5a },
		{ .addr = 0x443931, .byte = 0xd3 },
		{ .addr = 0x75f86e, .byte = 0x39 },
		{ .addr = 0x75f86f, .byte = 0x2e },
		{ .addr = 0x75f86a, .byte = 0x85 },
		{ .addr = 0x75f86b, .byte = 0x10 },
		{ .addr = 0x75f86c, .byte = 0x00 },
		{ .addr = 0x75f86d, .byte = 0x44 },
		{ .addr = 0x000020, .byte = 0x1f },
		{ .addr = 0x000021, .byte = 0xce },
		{ .addr = 0x000022, .byte = 0x70 },
		{ .addr = 0x000023, .byte = 0xf8 },
		{ .addr = 0xce70f8, .byte = 0x6d },
		{ .addr = 0xce70f9, .byte = 0x64 },
		{ .addr = 0xce70fa, .byte = 0x92 },
		{ .addr = 0xce70fb, .byte = 0x29 }
};

static const SST_Transaction reset_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731310, .data = 14638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731306, .data = 34064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731308, .data = 68, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 8142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 28920, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13529336, .data = 28004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13529338, .data = 37417, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_26[] = {
		{ .addr = 0xecd2b0, .byte = 0x4e },
		{ .addr = 0xecd2b1, .byte = 0x70 },
		{ .addr = 0xecd2b2, .byte = 0x67 },
		{ .addr = 0xecd2b3, .byte = 0x13 },
		{ .addr = 0xecd2b4, .byte = 0x0f },
		{ .addr = 0xecd2b5, .byte = 0x64 }
};

static const SST_RamByte reset_final_ram_26[] = {
		{ .addr = 0xecd2b0, .byte = 0x4e },
		{ .addr = 0xecd2b1, .byte = 0x70 },
		{ .addr = 0xecd2b2, .byte = 0x67 },
		{ .addr = 0xecd2b3, .byte = 0x13 },
		{ .addr = 0xecd2b4, .byte = 0x0f },
		{ .addr = 0xecd2b5, .byte = 0x64 }
};

static const SST_Transaction reset_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15520436, .data = 3940, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_27[] = {
		{ .addr = 0x4d409c, .byte = 0x4e },
		{ .addr = 0x4d409d, .byte = 0x70 },
		{ .addr = 0x4d409e, .byte = 0xec },
		{ .addr = 0x4d409f, .byte = 0x02 },
		{ .addr = 0x4d40a0, .byte = 0x1d },
		{ .addr = 0x4d40a1, .byte = 0x3c }
};

static const SST_RamByte reset_final_ram_27[] = {
		{ .addr = 0x4d409c, .byte = 0x4e },
		{ .addr = 0x4d409d, .byte = 0x70 },
		{ .addr = 0x4d409e, .byte = 0xec },
		{ .addr = 0x4d409f, .byte = 0x02 },
		{ .addr = 0x4d40a0, .byte = 0x1d },
		{ .addr = 0x4d40a1, .byte = 0x3c }
};

static const SST_Transaction reset_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5062816, .data = 7484, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_28[] = {
		{ .addr = 0x406876, .byte = 0x4e },
		{ .addr = 0x406877, .byte = 0x70 },
		{ .addr = 0x406878, .byte = 0x58 },
		{ .addr = 0x406879, .byte = 0xb3 },
		{ .addr = 0x40687a, .byte = 0x9c },
		{ .addr = 0x40687b, .byte = 0x45 }
};

static const SST_RamByte reset_final_ram_28[] = {
		{ .addr = 0x406876, .byte = 0x4e },
		{ .addr = 0x406877, .byte = 0x70 },
		{ .addr = 0x406878, .byte = 0x58 },
		{ .addr = 0x406879, .byte = 0xb3 },
		{ .addr = 0x40687a, .byte = 0x9c },
		{ .addr = 0x40687b, .byte = 0x45 }
};

static const SST_Transaction reset_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4221050, .data = 40005, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_29[] = {
		{ .addr = 0x9a0836, .byte = 0x4e },
		{ .addr = 0x9a0837, .byte = 0x70 },
		{ .addr = 0x9a0838, .byte = 0x8a },
		{ .addr = 0x9a0839, .byte = 0x4a },
		{ .addr = 0x000020, .byte = 0xf0 },
		{ .addr = 0x000021, .byte = 0xbe },
		{ .addr = 0x000022, .byte = 0x82 },
		{ .addr = 0x000023, .byte = 0x68 },
		{ .addr = 0xbe8268, .byte = 0x63 },
		{ .addr = 0xbe8269, .byte = 0xec },
		{ .addr = 0xbe826a, .byte = 0xf1 },
		{ .addr = 0xbe826b, .byte = 0xd8 }
};

static const SST_RamByte reset_final_ram_29[] = {
		{ .addr = 0x9a0836, .byte = 0x4e },
		{ .addr = 0x9a0837, .byte = 0x70 },
		{ .addr = 0x9a0838, .byte = 0x8a },
		{ .addr = 0x9a0839, .byte = 0x4a },
		{ .addr = 0xd7673e, .byte = 0x08 },
		{ .addr = 0xd7673f, .byte = 0x36 },
		{ .addr = 0xd7673a, .byte = 0x07 },
		{ .addr = 0xd7673b, .byte = 0x00 },
		{ .addr = 0xd7673c, .byte = 0x00 },
		{ .addr = 0xd7673d, .byte = 0x9a },
		{ .addr = 0x000020, .byte = 0xf0 },
		{ .addr = 0x000021, .byte = 0xbe },
		{ .addr = 0x000022, .byte = 0x82 },
		{ .addr = 0x000023, .byte = 0x68 },
		{ .addr = 0xbe8268, .byte = 0x63 },
		{ .addr = 0xbe8269, .byte = 0xec },
		{ .addr = 0xbe826a, .byte = 0xf1 },
		{ .addr = 0xbe826b, .byte = 0xd8 }
};

static const SST_Transaction reset_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14116670, .data = 2102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14116666, .data = 1792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14116668, .data = 154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 61630, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 33384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12485224, .data = 25580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12485226, .data = 61912, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_30[] = {
		{ .addr = 0x3d4a90, .byte = 0x4e },
		{ .addr = 0x3d4a91, .byte = 0x70 },
		{ .addr = 0x3d4a92, .byte = 0x9e },
		{ .addr = 0x3d4a93, .byte = 0x09 },
		{ .addr = 0x3d4a94, .byte = 0x61 },
		{ .addr = 0x3d4a95, .byte = 0x8d }
};

static const SST_RamByte reset_final_ram_30[] = {
		{ .addr = 0x3d4a90, .byte = 0x4e },
		{ .addr = 0x3d4a91, .byte = 0x70 },
		{ .addr = 0x3d4a92, .byte = 0x9e },
		{ .addr = 0x3d4a93, .byte = 0x09 },
		{ .addr = 0x3d4a94, .byte = 0x61 },
		{ .addr = 0x3d4a95, .byte = 0x8d }
};

static const SST_Transaction reset_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 128 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4016788, .data = 24973, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte reset_initial_ram_31[] = {
		{ .addr = 0xa017e6, .byte = 0x4e },
		{ .addr = 0xa017e7, .byte = 0x70 },
		{ .addr = 0xa017e8, .byte = 0x35 },
		{ .addr = 0xa017e9, .byte = 0x5a },
		{ .addr = 0x000020, .byte = 0xd2 },
		{ .addr = 0x000021, .byte = 0x3c },
		{ .addr = 0x000022, .byte = 0x72 },
		{ .addr = 0x000023, .byte = 0x2c },
		{ .addr = 0x3c722c, .byte = 0x59 },
		{ .addr = 0x3c722d, .byte = 0x1b },
		{ .addr = 0x3c722e, .byte = 0xa5 },
		{ .addr = 0x3c722f, .byte = 0xfb }
};

static const SST_RamByte reset_final_ram_31[] = {
		{ .addr = 0xa017e6, .byte = 0x4e },
		{ .addr = 0xa017e7, .byte = 0x70 },
		{ .addr = 0xa017e8, .byte = 0x35 },
		{ .addr = 0xa017e9, .byte = 0x5a },
		{ .addr = 0x9a9356, .byte = 0x17 },
		{ .addr = 0x9a9357, .byte = 0xe6 },
		{ .addr = 0x9a9352, .byte = 0x84 },
		{ .addr = 0x9a9353, .byte = 0x03 },
		{ .addr = 0x9a9354, .byte = 0x00 },
		{ .addr = 0x9a9355, .byte = 0xa0 },
		{ .addr = 0x000020, .byte = 0xd2 },
		{ .addr = 0x000021, .byte = 0x3c },
		{ .addr = 0x000022, .byte = 0x72 },
		{ .addr = 0x000023, .byte = 0x2c },
		{ .addr = 0x3c722c, .byte = 0x59 },
		{ .addr = 0x3c722d, .byte = 0x1b },
		{ .addr = 0x3c722e, .byte = 0xa5 },
		{ .addr = 0x3c722f, .byte = 0xfb }
};

static const SST_Transaction reset_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10130262, .data = 6118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10130258, .data = 33795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10130260, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 53820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 29228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3961388, .data = 22811, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3961390, .data = 42491, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 RESET 4e70",
		.initial = {
			.regs = {
				1976775080, 125566753, 3675776841, 592300217, 3230886736, 2613786507, 3090433246, 1256612566, 4044442247, 1994335451, 3676612978, 1597348912, 2515141884, 534461888, 1535406313, 14875562, 10800808, 9492, 12333878
			},
			.prefetch0 = 20080,
			.prefetch1 = 9071,
			.ram = reset_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1976775080, 125566753, 3675776841, 592300217, 3230886736, 2613786507, 3090433246, 1256612566, 4044442247, 1994335451, 3676612978, 1597348912, 2515141884, 534461888, 1535406313, 14875562, 10800808, 9492, 12333880
			},
			.prefetch0 = 9071,
			.prefetch1 = 12715,
			.ram = reset_final_ram_16,
			.ram_len = 6,
		},
		.transactions = reset_transactions_16,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "017 RESET 4e70",
		.initial = {
			.regs = {
				1837039361, 2264397627, 696894659, 2415042138, 1885193315, 1595092164, 144911970, 1530172279, 1529483148, 232348403, 2957822737, 2848538027, 2344244617, 3894213269, 165254377, 14877232, 2533344, 42754, 7404442
			},
			.prefetch0 = 20080,
			.prefetch1 = 10065,
			.ram = reset_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1837039361, 2264397627, 696894659, 2415042138, 1885193315, 1595092164, 144911970, 1530172279, 1529483148, 232348403, 2957822737, 2848538027, 2344244617, 3894213269, 165254377, 14877232, 2533344, 42754, 7404444
			},
			.prefetch0 = 10065,
			.prefetch1 = 55345,
			.ram = reset_final_ram_17,
			.ram_len = 6,
		},
		.transactions = reset_transactions_17,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "018 RESET 4e70",
		.initial = {
			.regs = {
				2422565104, 3446734465, 1628718392, 509987365, 1897101960, 1316785429, 236165295, 3814102464, 755270544, 2490373078, 3913133221, 78901507, 808332185, 1176525886, 3009125312, 292520, 16635840, 782, 1931566
			},
			.prefetch0 = 20080,
			.prefetch1 = 53516,
			.ram = reset_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2422565104, 3446734465, 1628718392, 509987365, 1897101960, 1316785429, 236165295, 3814102464, 755270544, 2490373078, 3913133221, 78901507, 808332185, 1176525886, 3009125312, 292520, 16635834, 8974, 323895110
			},
			.prefetch0 = 2977,
			.prefetch1 = 23935,
			.ram = reset_final_ram_18,
			.ram_len = 18,
		},
		.transactions = reset_transactions_18,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "019 RESET 4e70",
		.initial = {
			.regs = {
				3764792386, 1218579538, 2641988119, 1769156157, 2369660360, 2557648283, 2262024608, 195004898, 1799946178, 1904710797, 797390006, 1529632058, 2548340032, 3244539189, 3795882078, 5329794, 7704798, 9477, 11449780
			},
			.prefetch0 = 20080,
			.prefetch1 = 15846,
			.ram = reset_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3764792386, 1218579538, 2641988119, 1769156157, 2369660360, 2557648283, 2262024608, 195004898, 1799946178, 1904710797, 797390006, 1529632058, 2548340032, 3244539189, 3795882078, 5329794, 7704798, 9477, 11449782
			},
			.prefetch0 = 15846,
			.prefetch1 = 9616,
			.ram = reset_final_ram_19,
			.ram_len = 6,
		},
		.transactions = reset_transactions_19,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "020 RESET 4e70",
		.initial = {
			.regs = {
				959784109, 2898359135, 912329916, 1788784363, 518702398, 844751380, 3619031629, 457182795, 145111891, 2800199254, 2851970951, 2824498764, 2124561390, 2303195739, 4122193729, 12287410, 6889226, 41223, 14862882
			},
			.prefetch0 = 20080,
			.prefetch1 = 40658,
			.ram = reset_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				959784109, 2898359135, 912329916, 1788784363, 518702398, 844751380, 3619031629, 457182795, 145111891, 2800199254, 2851970951, 2824498764, 2124561390, 2303195739, 4122193729, 12287410, 6889226, 41223, 14862884
			},
			.prefetch0 = 40658,
			.prefetch1 = 44962,
			.ram = reset_final_ram_20,
			.ram_len = 6,
		},
		.transactions = reset_transactions_20,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "021 RESET 4e70",
		.initial = {
			.regs = {
				390272972, 905225099, 1246641596, 1879626442, 50173272, 3204498680, 313800329, 2537847636, 3478326301, 2499826841, 1314035794, 2989673689, 3954552990, 2333843162, 2562710283, 15341700, 1537816, 33557, 15991438
			},
			.prefetch0 = 20080,
			.prefetch1 = 63892,
			.ram = reset_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				390272972, 905225099, 1246641596, 1879626442, 50173272, 3204498680, 313800329, 2537847636, 3478326301, 2499826841, 1314035794, 2989673689, 3954552990, 2333843162, 2562710283, 15341700, 1537810, 8981, 2192334416
			},
			.prefetch0 = 36885,
			.prefetch1 = 15728,
			.ram = reset_final_ram_21,
			.ram_len = 18,
		},
		.transactions = reset_transactions_21,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "022 RESET 4e70",
		.initial = {
			.regs = {
				1145439407, 1049266219, 3917474192, 1946589555, 2368194940, 1990172839, 1568242206, 3821409699, 2179714927, 3557163564, 4092310819, 4167136518, 1567052998, 3582973559, 1226696167, 3835008, 570418, 1288, 358522
			},
			.prefetch0 = 20080,
			.prefetch1 = 32349,
			.ram = reset_initial_ram_22,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1145439407, 1049266219, 3917474192, 1946589555, 2368194940, 1990172839, 1568242206, 3821409699, 2179714927, 3557163564, 4092310819, 4167136518, 1567052998, 3582973559, 1226696167, 3835008, 570412, 9480, 1374588612
			},
			.prefetch0 = 13230,
			.prefetch1 = 51053,
			.ram = reset_final_ram_22,
			.ram_len = 18,
		},
		.transactions = reset_transactions_22,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "023 RESET 4e70",
		.initial = {
			.regs = {
				2271000946, 1134506302, 3959521389, 812617680, 798621285, 4079720792, 3012261690, 3601935181, 1832241224, 1494212103, 2837701604, 764140472, 917713664, 3715696858, 1312568408, 5764672, 9522808, 34308, 14515284
			},
			.prefetch0 = 20080,
			.prefetch1 = 14680,
			.ram = reset_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2271000946, 1134506302, 3959521389, 812617680, 798621285, 4079720792, 3012261690, 3601935181, 1832241224, 1494212103, 2837701604, 764140472, 917713664, 3715696858, 1312568408, 5764672, 9522802, 9732, 1532399630
			},
			.prefetch0 = 4963,
			.prefetch1 = 53142,
			.ram = reset_final_ram_23,
			.ram_len = 18,
		},
		.transactions = reset_transactions_23,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "024 RESET 4e70",
		.initial = {
			.regs = {
				2414665806, 2274199118, 2685770310, 1760344757, 3610985508, 345832030, 2361310025, 4162952811, 88779455, 54350498, 1770235577, 4274831576, 469854312, 3856347467, 3304284509, 13005526, 9940536, 8732, 5191160
			},
			.prefetch0 = 20080,
			.prefetch1 = 18885,
			.ram = reset_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2414665806, 2274199118, 2685770310, 1760344757, 3610985508, 345832030, 2361310025, 4162952811, 88779455, 54350498, 1770235577, 4274831576, 469854312, 3856347467, 3304284509, 13005526, 9940536, 8732, 5191162
			},
			.prefetch0 = 18885,
			.prefetch1 = 39930,
			.ram = reset_final_ram_24,
			.ram_len = 6,
		},
		.transactions = reset_transactions_24,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "025 RESET 4e70",
		.initial = {
			.regs = {
				3805312720, 199199302, 2567318014, 3826654567, 1470058894, 4251403335, 1549307697, 1318878715, 3420647542, 1916394268, 2292347834, 2150422160, 1487863992, 4137166626, 1255701014, 11694928, 7731312, 34064, 4471090
			},
			.prefetch0 = 20080,
			.prefetch1 = 23251,
			.ram = reset_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3805312720, 199199302, 2567318014, 3826654567, 1470058894, 4251403335, 1549307697, 1318878715, 3420647542, 1916394268, 2292347834, 2150422160, 1487863992, 4137166626, 1255701014, 11694928, 7731306, 9488, 533623036
			},
			.prefetch0 = 28004,
			.prefetch1 = 37417,
			.ram = reset_final_ram_25,
			.ram_len = 18,
		},
		.transactions = reset_transactions_25,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "026 RESET 4e70",
		.initial = {
			.regs = {
				2357382270, 3713697147, 286769981, 2405500718, 2095539318, 407397148, 1701783861, 88117113, 634592397, 2786778111, 135613206, 661897782, 614678718, 128287303, 1685251147, 8779030, 14885108, 8960, 15520436
			},
			.prefetch0 = 20080,
			.prefetch1 = 26387,
			.ram = reset_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2357382270, 3713697147, 286769981, 2405500718, 2095539318, 407397148, 1701783861, 88117113, 634592397, 2786778111, 135613206, 661897782, 614678718, 128287303, 1685251147, 8779030, 14885108, 8960, 15520438
			},
			.prefetch0 = 26387,
			.prefetch1 = 3940,
			.ram = reset_final_ram_26,
			.ram_len = 6,
		},
		.transactions = reset_transactions_26,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "027 RESET 4e70",
		.initial = {
			.regs = {
				2404270458, 600391417, 2394555751, 401306105, 2074175803, 1936954937, 2312409403, 2183135153, 3071910010, 1313597826, 3170319955, 3022670465, 3030951785, 1808576659, 344112842, 1885812, 14922054, 9475, 5062816
			},
			.prefetch0 = 20080,
			.prefetch1 = 60418,
			.ram = reset_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2404270458, 600391417, 2394555751, 401306105, 2074175803, 1936954937, 2312409403, 2183135153, 3071910010, 1313597826, 3170319955, 3022670465, 3030951785, 1808576659, 344112842, 1885812, 14922054, 9475, 5062818
			},
			.prefetch0 = 60418,
			.prefetch1 = 7484,
			.ram = reset_final_ram_27,
			.ram_len = 6,
		},
		.transactions = reset_transactions_27,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "028 RESET 4e70",
		.initial = {
			.regs = {
				3762781250, 1177923417, 2286497745, 2156436860, 1988284606, 1635492306, 1876503684, 1187300051, 3269843966, 985381667, 2778771804, 1006440465, 619454754, 1460084210, 1100394649, 4443108, 13408796, 8202, 4221050
			},
			.prefetch0 = 20080,
			.prefetch1 = 22707,
			.ram = reset_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3762781250, 1177923417, 2286497745, 2156436860, 1988284606, 1635492306, 1876503684, 1187300051, 3269843966, 985381667, 2778771804, 1006440465, 619454754, 1460084210, 1100394649, 4443108, 13408796, 8202, 4221052
			},
			.prefetch0 = 22707,
			.prefetch1 = 40005,
			.ram = reset_final_ram_28,
			.ram_len = 6,
		},
		.transactions = reset_transactions_28,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "029 RESET 4e70",
		.initial = {
			.regs = {
				1856740459, 546993223, 2653074441, 471431223, 2390399598, 3524941716, 2596611438, 2179074447, 3749749531, 2641514063, 434842774, 993234794, 3629969849, 2728323704, 2234486846, 672628, 14116672, 1792, 10094650
			},
			.prefetch0 = 20080,
			.prefetch1 = 35402,
			.ram = reset_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1856740459, 546993223, 2653074441, 471431223, 2390399598, 3524941716, 2596611438, 2179074447, 3749749531, 2641514063, 434842774, 993234794, 3629969849, 2728323704, 2234486846, 672628, 14116666, 9984, 4039017068
			},
			.prefetch0 = 25580,
			.prefetch1 = 61912,
			.ram = reset_final_ram_29,
			.ram_len = 18,
		},
		.transactions = reset_transactions_29,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "030 RESET 4e70",
		.initial = {
			.regs = {
				665005925, 18923441, 1553056630, 517136847, 3805781912, 1851729473, 1146138004, 739975310, 3724752263, 3008592385, 2341971639, 1347502834, 3875550235, 1041371842, 2326000206, 14680504, 11579282, 9473, 4016788
			},
			.prefetch0 = 20080,
			.prefetch1 = 40457,
			.ram = reset_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				665005925, 18923441, 1553056630, 517136847, 3805781912, 1851729473, 1146138004, 739975310, 3724752263, 3008592385, 2341971639, 1347502834, 3875550235, 1041371842, 2326000206, 14680504, 11579282, 9473, 4016790
			},
			.prefetch0 = 40457,
			.prefetch1 = 24973,
			.ram = reset_final_ram_30,
			.ram_len = 6,
		},
		.transactions = reset_transactions_30,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "031 RESET 4e70",
		.initial = {
			.regs = {
				3623060442, 1341272942, 481275849, 1935486004, 1849593070, 4231834292, 3916390432, 1803659548, 1811976185, 1254881725, 102695098, 3989443843, 1192805291, 610486064, 310610380, 13395948, 10130264, 33795, 10491882
			},
			.prefetch0 = 20080,
			.prefetch1 = 13658,
			.ram = reset_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3623060442, 1341272942, 481275849, 1935486004, 1849593070, 4231834292, 3916390432, 1803659548, 1811976185, 1254881725, 102695098, 3989443843, 1192805291, 610486064, 310610380, 13395948, 10130258, 9219, 3527176752
			},
			.prefetch0 = 22811,
			.prefetch1 = 42491,
			.ram = reset_final_ram_31,
			.ram_len = 18,
		},
		.transactions = reset_transactions_31,
		.transactions_len = 9,
		.lenght = 34,
	},
};

#endif /* RBT_RESET_H */