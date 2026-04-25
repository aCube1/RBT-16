#ifndef RBT_NOTL_H
#define RBT_NOTL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte notl_initial_ram_0[] = {
		{ .addr = 0xc27726, .byte = 0x46 },
		{ .addr = 0xc27727, .byte = 0x83 },
		{ .addr = 0xc27728, .byte = 0xb8 },
		{ .addr = 0xc27729, .byte = 0x5d },
		{ .addr = 0xc2772a, .byte = 0x35 },
		{ .addr = 0xc2772b, .byte = 0x5e }
};

static const SST_RamByte notl_final_ram_0[] = {
		{ .addr = 0xc27726, .byte = 0x46 },
		{ .addr = 0xc27727, .byte = 0x83 },
		{ .addr = 0xc27728, .byte = 0xb8 },
		{ .addr = 0xc27729, .byte = 0x5d },
		{ .addr = 0xc2772a, .byte = 0x35 },
		{ .addr = 0xc2772b, .byte = 0x5e }
};

static const SST_Transaction notl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12744490, .data = 13662, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte notl_initial_ram_1[] = {
		{ .addr = 0x2816d6, .byte = 0x46 },
		{ .addr = 0x2816d7, .byte = 0xa3 },
		{ .addr = 0x2816d8, .byte = 0x6f },
		{ .addr = 0x2816d9, .byte = 0xb3 },
		{ .addr = 0xf8d94e, .byte = 0xdb },
		{ .addr = 0xf8d94f, .byte = 0xea },
		{ .addr = 0xf8d950, .byte = 0x97 },
		{ .addr = 0xf8d951, .byte = 0xee },
		{ .addr = 0x2816da, .byte = 0x7c },
		{ .addr = 0x2816db, .byte = 0xe9 }
};

static const SST_RamByte notl_final_ram_1[] = {
		{ .addr = 0x2816d6, .byte = 0x46 },
		{ .addr = 0x2816d7, .byte = 0xa3 },
		{ .addr = 0x2816d8, .byte = 0x6f },
		{ .addr = 0x2816d9, .byte = 0xb3 },
		{ .addr = 0xf8d94e, .byte = 0x24 },
		{ .addr = 0xf8d94f, .byte = 0x15 },
		{ .addr = 0xf8d950, .byte = 0x68 },
		{ .addr = 0xf8d951, .byte = 0x11 },
		{ .addr = 0x2816da, .byte = 0x7c },
		{ .addr = 0x2816db, .byte = 0xe9 }
};

static const SST_Transaction notl_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16308558, .data = 56298, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16308560, .data = 38894, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2627290, .data = 31977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16308560, .data = 26641, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16308558, .data = 9237, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_2[] = {
		{ .addr = 0xcc55b0, .byte = 0x46 },
		{ .addr = 0xcc55b1, .byte = 0xa1 },
		{ .addr = 0xcc55b2, .byte = 0x65 },
		{ .addr = 0xcc55b3, .byte = 0x5a },
		{ .addr = 0x7dd29c, .byte = 0x94 },
		{ .addr = 0x7dd29d, .byte = 0x66 },
		{ .addr = 0x7dd29e, .byte = 0xc1 },
		{ .addr = 0x7dd29f, .byte = 0x91 },
		{ .addr = 0xcc55b4, .byte = 0xc3 },
		{ .addr = 0xcc55b5, .byte = 0x8e }
};

static const SST_RamByte notl_final_ram_2[] = {
		{ .addr = 0xcc55b0, .byte = 0x46 },
		{ .addr = 0xcc55b1, .byte = 0xa1 },
		{ .addr = 0xcc55b2, .byte = 0x65 },
		{ .addr = 0xcc55b3, .byte = 0x5a },
		{ .addr = 0x7dd29c, .byte = 0x6b },
		{ .addr = 0x7dd29d, .byte = 0x99 },
		{ .addr = 0x7dd29e, .byte = 0x3e },
		{ .addr = 0x7dd29f, .byte = 0x6e },
		{ .addr = 0xcc55b4, .byte = 0xc3 },
		{ .addr = 0xcc55b5, .byte = 0x8e }
};

static const SST_Transaction notl_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8245916, .data = 37990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8245918, .data = 49553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13391284, .data = 50062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8245918, .data = 15982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8245916, .data = 27545, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_3[] = {
		{ .addr = 0x83be44, .byte = 0x46 },
		{ .addr = 0x83be45, .byte = 0xab },
		{ .addr = 0x83be46, .byte = 0x88 },
		{ .addr = 0x83be47, .byte = 0x50 },
		{ .addr = 0x83be48, .byte = 0x6b },
		{ .addr = 0x83be49, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0x54475a, .byte = 0xdb },
		{ .addr = 0x54475b, .byte = 0x11 },
		{ .addr = 0x54475c, .byte = 0x89 },
		{ .addr = 0x54475d, .byte = 0x48 }
};

static const SST_RamByte notl_final_ram_3[] = {
		{ .addr = 0x83be44, .byte = 0x46 },
		{ .addr = 0x83be45, .byte = 0xab },
		{ .addr = 0x83be46, .byte = 0x88 },
		{ .addr = 0x83be47, .byte = 0x50 },
		{ .addr = 0x83be48, .byte = 0x6b },
		{ .addr = 0x83be49, .byte = 0x26 },
		{ .addr = 0xae82d2, .byte = 0xbe },
		{ .addr = 0xae82d3, .byte = 0x46 },
		{ .addr = 0xae82ce, .byte = 0x22 },
		{ .addr = 0xae82cf, .byte = 0x0d },
		{ .addr = 0xae82d0, .byte = 0x00 },
		{ .addr = 0xae82d1, .byte = 0x83 },
		{ .addr = 0xae82cc, .byte = 0x46 },
		{ .addr = 0xae82cd, .byte = 0xab },
		{ .addr = 0xae82ca, .byte = 0x6f },
		{ .addr = 0xae82cb, .byte = 0x6d },
		{ .addr = 0xae82c6, .byte = 0x46 },
		{ .addr = 0xae82c7, .byte = 0xb5 },
		{ .addr = 0xae82c8, .byte = 0x10 },
		{ .addr = 0xae82c9, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0x54475a, .byte = 0xdb },
		{ .addr = 0x54475b, .byte = 0x11 },
		{ .addr = 0x54475c, .byte = 0x89 },
		{ .addr = 0x54475d, .byte = 0x48 }
};

static const SST_Transaction notl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8633928, .data = 27430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14905196, .data = 45112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11436754, .data = 48710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11436750, .data = 8717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11436752, .data = 131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11436748, .data = 18091, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11436746, .data = 28525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11436742, .data = 18101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11436744, .data = 4323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5523290, .data = 56081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5523292, .data = 35144, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_4[] = {
		{ .addr = 0x6010e0, .byte = 0x46 },
		{ .addr = 0x6010e1, .byte = 0x96 },
		{ .addr = 0x6010e2, .byte = 0xcc },
		{ .addr = 0x6010e3, .byte = 0x3c },
		{ .addr = 0x94c1fc, .byte = 0x42 },
		{ .addr = 0x94c1fd, .byte = 0xe9 },
		{ .addr = 0x94c1fe, .byte = 0x91 },
		{ .addr = 0x94c1ff, .byte = 0x08 },
		{ .addr = 0x6010e4, .byte = 0xd7 },
		{ .addr = 0x6010e5, .byte = 0x1e }
};

static const SST_RamByte notl_final_ram_4[] = {
		{ .addr = 0x6010e0, .byte = 0x46 },
		{ .addr = 0x6010e1, .byte = 0x96 },
		{ .addr = 0x6010e2, .byte = 0xcc },
		{ .addr = 0x6010e3, .byte = 0x3c },
		{ .addr = 0x94c1fc, .byte = 0xbd },
		{ .addr = 0x94c1fd, .byte = 0x16 },
		{ .addr = 0x94c1fe, .byte = 0x6e },
		{ .addr = 0x94c1ff, .byte = 0xf7 },
		{ .addr = 0x6010e4, .byte = 0xd7 },
		{ .addr = 0x6010e5, .byte = 0x1e }
};

static const SST_Transaction notl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9748988, .data = 17129, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9748990, .data = 37128, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6295780, .data = 55070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9748990, .data = 28407, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9748988, .data = 48406, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_5[] = {
		{ .addr = 0x220e7a, .byte = 0x46 },
		{ .addr = 0x220e7b, .byte = 0xb6 },
		{ .addr = 0x220e7c, .byte = 0x2a },
		{ .addr = 0x220e7d, .byte = 0x6b },
		{ .addr = 0x220e7e, .byte = 0x04 },
		{ .addr = 0x220e7f, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0xf6 },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x9a },
		{ .addr = 0x00000f, .byte = 0x3c },
		{ .addr = 0x329a3c, .byte = 0x21 },
		{ .addr = 0x329a3d, .byte = 0x40 },
		{ .addr = 0x329a3e, .byte = 0xe0 },
		{ .addr = 0x329a3f, .byte = 0x97 }
};

static const SST_RamByte notl_final_ram_5[] = {
		{ .addr = 0x220e7a, .byte = 0x46 },
		{ .addr = 0x220e7b, .byte = 0xb6 },
		{ .addr = 0x220e7c, .byte = 0x2a },
		{ .addr = 0x220e7d, .byte = 0x6b },
		{ .addr = 0x220e7e, .byte = 0x04 },
		{ .addr = 0x220e7f, .byte = 0x2a },
		{ .addr = 0xfbb8b8, .byte = 0x0e },
		{ .addr = 0xfbb8b9, .byte = 0x7c },
		{ .addr = 0xfbb8b4, .byte = 0x01 },
		{ .addr = 0xfbb8b5, .byte = 0x04 },
		{ .addr = 0xfbb8b6, .byte = 0x00 },
		{ .addr = 0xfbb8b7, .byte = 0x22 },
		{ .addr = 0xfbb8b2, .byte = 0x46 },
		{ .addr = 0xfbb8b3, .byte = 0xb6 },
		{ .addr = 0xfbb8b0, .byte = 0xb5 },
		{ .addr = 0xfbb8b1, .byte = 0x89 },
		{ .addr = 0xfbb8ac, .byte = 0x46 },
		{ .addr = 0xfbb8ad, .byte = 0xb1 },
		{ .addr = 0xfbb8ae, .byte = 0x98 },
		{ .addr = 0xfbb8af, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0xf6 },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x9a },
		{ .addr = 0x00000f, .byte = 0x3c },
		{ .addr = 0x329a3c, .byte = 0x21 },
		{ .addr = 0x329a3d, .byte = 0x40 },
		{ .addr = 0x329a3e, .byte = 0xe0 },
		{ .addr = 0x329a3f, .byte = 0x97 }
};

static const SST_Transaction notl_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2231934, .data = 1066, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16627080, .data = 31025, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16496824, .data = 3708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16496820, .data = 260, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16496822, .data = 34, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16496818, .data = 18102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16496816, .data = 46473, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16496812, .data = 18097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16496814, .data = 39165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 63026, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 39484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3316284, .data = 8512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3316286, .data = 57495, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_6[] = {
		{ .addr = 0x8731fc, .byte = 0x46 },
		{ .addr = 0x8731fd, .byte = 0x9e },
		{ .addr = 0x8731fe, .byte = 0x5d },
		{ .addr = 0x8731ff, .byte = 0x76 },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x2c },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0xa02ce2, .byte = 0xc1 },
		{ .addr = 0xa02ce3, .byte = 0xa5 },
		{ .addr = 0xa02ce4, .byte = 0xe4 },
		{ .addr = 0xa02ce5, .byte = 0x91 }
};

static const SST_RamByte notl_final_ram_6[] = {
		{ .addr = 0x8731fc, .byte = 0x46 },
		{ .addr = 0x8731fd, .byte = 0x9e },
		{ .addr = 0x8731fe, .byte = 0x5d },
		{ .addr = 0x8731ff, .byte = 0x76 },
		{ .addr = 0xf6d796, .byte = 0x31 },
		{ .addr = 0xf6d797, .byte = 0xfe },
		{ .addr = 0xf6d792, .byte = 0x07 },
		{ .addr = 0xf6d793, .byte = 0x1e },
		{ .addr = 0xf6d794, .byte = 0x00 },
		{ .addr = 0xf6d795, .byte = 0x87 },
		{ .addr = 0xf6d790, .byte = 0x46 },
		{ .addr = 0xf6d791, .byte = 0x9e },
		{ .addr = 0xf6d78e, .byte = 0xca },
		{ .addr = 0xf6d78f, .byte = 0xef },
		{ .addr = 0xf6d78a, .byte = 0x46 },
		{ .addr = 0xf6d78b, .byte = 0x91 },
		{ .addr = 0xf6d78c, .byte = 0xf4 },
		{ .addr = 0xf6d78d, .byte = 0x57 },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x2c },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0xa02ce2, .byte = 0xc1 },
		{ .addr = 0xa02ce3, .byte = 0xa5 },
		{ .addr = 0xa02ce4, .byte = 0xe4 },
		{ .addr = 0xa02ce5, .byte = 0x91 }
};

static const SST_Transaction notl_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5753582, .data = 58742, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16177046, .data = 12798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16177042, .data = 1822, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16177044, .data = 135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16177040, .data = 18078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16177038, .data = 51951, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16177034, .data = 18065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16177036, .data = 62551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 11490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10497250, .data = 49573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10497252, .data = 58513, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_7[] = {
		{ .addr = 0xfaad1e, .byte = 0x46 },
		{ .addr = 0xfaad1f, .byte = 0x82 },
		{ .addr = 0xfaad20, .byte = 0x85 },
		{ .addr = 0xfaad21, .byte = 0x28 },
		{ .addr = 0xfaad22, .byte = 0xb8 },
		{ .addr = 0xfaad23, .byte = 0xd2 }
};

static const SST_RamByte notl_final_ram_7[] = {
		{ .addr = 0xfaad1e, .byte = 0x46 },
		{ .addr = 0xfaad1f, .byte = 0x82 },
		{ .addr = 0xfaad20, .byte = 0x85 },
		{ .addr = 0xfaad21, .byte = 0x28 },
		{ .addr = 0xfaad22, .byte = 0xb8 },
		{ .addr = 0xfaad23, .byte = 0xd2 }
};

static const SST_Transaction notl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16428322, .data = 47314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte notl_initial_ram_8[] = {
		{ .addr = 0x23a850, .byte = 0x46 },
		{ .addr = 0x23a851, .byte = 0xb8 },
		{ .addr = 0x23a852, .byte = 0xf6 },
		{ .addr = 0x23a853, .byte = 0x02 },
		{ .addr = 0x23a854, .byte = 0x90 },
		{ .addr = 0x23a855, .byte = 0x25 },
		{ .addr = 0xfff602, .byte = 0x9b },
		{ .addr = 0xfff603, .byte = 0xbd },
		{ .addr = 0xfff604, .byte = 0x2e },
		{ .addr = 0xfff605, .byte = 0xb5 },
		{ .addr = 0x23a856, .byte = 0x73 },
		{ .addr = 0x23a857, .byte = 0x7d }
};

static const SST_RamByte notl_final_ram_8[] = {
		{ .addr = 0x23a850, .byte = 0x46 },
		{ .addr = 0x23a851, .byte = 0xb8 },
		{ .addr = 0x23a852, .byte = 0xf6 },
		{ .addr = 0x23a853, .byte = 0x02 },
		{ .addr = 0x23a854, .byte = 0x90 },
		{ .addr = 0x23a855, .byte = 0x25 },
		{ .addr = 0xfff602, .byte = 0x64 },
		{ .addr = 0xfff603, .byte = 0x42 },
		{ .addr = 0xfff604, .byte = 0xd1 },
		{ .addr = 0xfff605, .byte = 0x4a },
		{ .addr = 0x23a856, .byte = 0x73 },
		{ .addr = 0x23a857, .byte = 0x7d }
};

static const SST_Transaction notl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2336852, .data = 36901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16774658, .data = 39869, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16774660, .data = 11957, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2336854, .data = 29565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16774660, .data = 53578, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16774658, .data = 25666, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_9[] = {
		{ .addr = 0xfcceac, .byte = 0x46 },
		{ .addr = 0xfccead, .byte = 0x92 },
		{ .addr = 0xfcceae, .byte = 0x21 },
		{ .addr = 0xfcceaf, .byte = 0x3c },
		{ .addr = 0x7898ce, .byte = 0xe7 },
		{ .addr = 0x7898cf, .byte = 0xcd },
		{ .addr = 0x7898d0, .byte = 0x3f },
		{ .addr = 0x7898d1, .byte = 0xdd },
		{ .addr = 0xfcceb0, .byte = 0xfd },
		{ .addr = 0xfcceb1, .byte = 0x6e }
};

static const SST_RamByte notl_final_ram_9[] = {
		{ .addr = 0xfcceac, .byte = 0x46 },
		{ .addr = 0xfccead, .byte = 0x92 },
		{ .addr = 0xfcceae, .byte = 0x21 },
		{ .addr = 0xfcceaf, .byte = 0x3c },
		{ .addr = 0x7898ce, .byte = 0x18 },
		{ .addr = 0x7898cf, .byte = 0x32 },
		{ .addr = 0x7898d0, .byte = 0xc0 },
		{ .addr = 0x7898d1, .byte = 0x22 },
		{ .addr = 0xfcceb0, .byte = 0xfd },
		{ .addr = 0xfcceb1, .byte = 0x6e }
};

static const SST_Transaction notl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7903438, .data = 59341, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7903440, .data = 16349, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16567984, .data = 64878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7903440, .data = 49186, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7903438, .data = 6194, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_10[] = {
		{ .addr = 0x9a2d30, .byte = 0x46 },
		{ .addr = 0x9a2d31, .byte = 0xb7 },
		{ .addr = 0x9a2d32, .byte = 0xe8 },
		{ .addr = 0x9a2d33, .byte = 0xb3 },
		{ .addr = 0x9a2d34, .byte = 0xdc },
		{ .addr = 0x9a2d35, .byte = 0xcf },
		{ .addr = 0x181faa, .byte = 0xb1 },
		{ .addr = 0x181fab, .byte = 0x3f },
		{ .addr = 0x181fac, .byte = 0x0c },
		{ .addr = 0x181fad, .byte = 0x29 },
		{ .addr = 0x9a2d36, .byte = 0x01 },
		{ .addr = 0x9a2d37, .byte = 0x75 }
};

static const SST_RamByte notl_final_ram_10[] = {
		{ .addr = 0x9a2d30, .byte = 0x46 },
		{ .addr = 0x9a2d31, .byte = 0xb7 },
		{ .addr = 0x9a2d32, .byte = 0xe8 },
		{ .addr = 0x9a2d33, .byte = 0xb3 },
		{ .addr = 0x9a2d34, .byte = 0xdc },
		{ .addr = 0x9a2d35, .byte = 0xcf },
		{ .addr = 0x181faa, .byte = 0x4e },
		{ .addr = 0x181fab, .byte = 0xc0 },
		{ .addr = 0x181fac, .byte = 0xf3 },
		{ .addr = 0x181fad, .byte = 0xd6 },
		{ .addr = 0x9a2d36, .byte = 0x01 },
		{ .addr = 0x9a2d37, .byte = 0x75 }
};

static const SST_Transaction notl_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10104116, .data = 56527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1580970, .data = 45375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1580972, .data = 3113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10104118, .data = 373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1580972, .data = 62422, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1580970, .data = 20160, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_11[] = {
		{ .addr = 0x8d1e9c, .byte = 0x46 },
		{ .addr = 0x8d1e9d, .byte = 0xac },
		{ .addr = 0x8d1e9e, .byte = 0x7e },
		{ .addr = 0x8d1e9f, .byte = 0x05 },
		{ .addr = 0x8d1ea0, .byte = 0x86 },
		{ .addr = 0x8d1ea1, .byte = 0x96 },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0xf3 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0xaaf37c, .byte = 0xe7 },
		{ .addr = 0xaaf37d, .byte = 0x7e },
		{ .addr = 0xaaf37e, .byte = 0x52 },
		{ .addr = 0xaaf37f, .byte = 0xfc }
};

static const SST_RamByte notl_final_ram_11[] = {
		{ .addr = 0x8d1e9c, .byte = 0x46 },
		{ .addr = 0x8d1e9d, .byte = 0xac },
		{ .addr = 0x8d1e9e, .byte = 0x7e },
		{ .addr = 0x8d1e9f, .byte = 0x05 },
		{ .addr = 0x8d1ea0, .byte = 0x86 },
		{ .addr = 0x8d1ea1, .byte = 0x96 },
		{ .addr = 0x36e144, .byte = 0x1e },
		{ .addr = 0x36e145, .byte = 0x9e },
		{ .addr = 0x36e140, .byte = 0x04 },
		{ .addr = 0x36e141, .byte = 0x18 },
		{ .addr = 0x36e142, .byte = 0x00 },
		{ .addr = 0x36e143, .byte = 0x8d },
		{ .addr = 0x36e13e, .byte = 0x46 },
		{ .addr = 0x36e13f, .byte = 0xac },
		{ .addr = 0x36e13c, .byte = 0x12 },
		{ .addr = 0x36e13d, .byte = 0x89 },
		{ .addr = 0x36e138, .byte = 0x46 },
		{ .addr = 0x36e139, .byte = 0xb1 },
		{ .addr = 0x36e13a, .byte = 0x97 },
		{ .addr = 0x36e13b, .byte = 0x8a },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0xf3 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0xaaf37c, .byte = 0xe7 },
		{ .addr = 0xaaf37d, .byte = 0x7e },
		{ .addr = 0xaaf37e, .byte = 0x52 },
		{ .addr = 0xaaf37f, .byte = 0xfc }
};

static const SST_Transaction notl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9248416, .data = 34454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9048712, .data = 48067, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3596612, .data = 7838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3596608, .data = 1048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3596610, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3596606, .data = 18092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3596604, .data = 4745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3596600, .data = 18097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3596602, .data = 38794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29610, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 62332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11203452, .data = 59262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11203454, .data = 21244, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_12[] = {
		{ .addr = 0xa97f16, .byte = 0x46 },
		{ .addr = 0xa97f17, .byte = 0xb8 },
		{ .addr = 0xa97f18, .byte = 0x85 },
		{ .addr = 0xa97f19, .byte = 0xe4 },
		{ .addr = 0xa97f1a, .byte = 0xee },
		{ .addr = 0xa97f1b, .byte = 0x0e },
		{ .addr = 0xff85e4, .byte = 0x6c },
		{ .addr = 0xff85e5, .byte = 0xd0 },
		{ .addr = 0xff85e6, .byte = 0x23 },
		{ .addr = 0xff85e7, .byte = 0xac },
		{ .addr = 0xa97f1c, .byte = 0x63 },
		{ .addr = 0xa97f1d, .byte = 0x5f }
};

static const SST_RamByte notl_final_ram_12[] = {
		{ .addr = 0xa97f16, .byte = 0x46 },
		{ .addr = 0xa97f17, .byte = 0xb8 },
		{ .addr = 0xa97f18, .byte = 0x85 },
		{ .addr = 0xa97f19, .byte = 0xe4 },
		{ .addr = 0xa97f1a, .byte = 0xee },
		{ .addr = 0xa97f1b, .byte = 0x0e },
		{ .addr = 0xff85e4, .byte = 0x93 },
		{ .addr = 0xff85e5, .byte = 0x2f },
		{ .addr = 0xff85e6, .byte = 0xdc },
		{ .addr = 0xff85e7, .byte = 0x53 },
		{ .addr = 0xa97f1c, .byte = 0x63 },
		{ .addr = 0xa97f1d, .byte = 0x5f }
};

static const SST_Transaction notl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11108122, .data = 60942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745956, .data = 27856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745958, .data = 9132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11108124, .data = 25439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745958, .data = 56403, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16745956, .data = 37679, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_13[] = {
		{ .addr = 0xa574aa, .byte = 0x46 },
		{ .addr = 0xa574ab, .byte = 0xb3 },
		{ .addr = 0xa574ac, .byte = 0x6a },
		{ .addr = 0xa574ad, .byte = 0x84 },
		{ .addr = 0xa574ae, .byte = 0xcd },
		{ .addr = 0xa574af, .byte = 0x3d },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x74 },
		{ .addr = 0x00000e, .byte = 0x00 },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x740076, .byte = 0x8d },
		{ .addr = 0x740077, .byte = 0x2b },
		{ .addr = 0x740078, .byte = 0xf6 },
		{ .addr = 0x740079, .byte = 0xdf }
};

static const SST_RamByte notl_final_ram_13[] = {
		{ .addr = 0xa574aa, .byte = 0x46 },
		{ .addr = 0xa574ab, .byte = 0xb3 },
		{ .addr = 0xa574ac, .byte = 0x6a },
		{ .addr = 0xa574ad, .byte = 0x84 },
		{ .addr = 0xa574ae, .byte = 0xcd },
		{ .addr = 0xa574af, .byte = 0x3d },
		{ .addr = 0x8f1868, .byte = 0x74 },
		{ .addr = 0x8f1869, .byte = 0xac },
		{ .addr = 0x8f1864, .byte = 0xa2 },
		{ .addr = 0x8f1865, .byte = 0x19 },
		{ .addr = 0x8f1866, .byte = 0x00 },
		{ .addr = 0x8f1867, .byte = 0xa5 },
		{ .addr = 0x8f1862, .byte = 0x46 },
		{ .addr = 0x8f1863, .byte = 0xb3 },
		{ .addr = 0x8f1860, .byte = 0x09 },
		{ .addr = 0x8f1861, .byte = 0x97 },
		{ .addr = 0x8f185c, .byte = 0x46 },
		{ .addr = 0x8f185d, .byte = 0xb5 },
		{ .addr = 0x8f185e, .byte = 0xf3 },
		{ .addr = 0x8f185f, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x74 },
		{ .addr = 0x00000e, .byte = 0x00 },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x740076, .byte = 0x8d },
		{ .addr = 0x740077, .byte = 0x2b },
		{ .addr = 0x740078, .byte = 0xf6 },
		{ .addr = 0x740079, .byte = 0xdf }
};

static const SST_Transaction notl_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10843310, .data = 52541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14420374, .data = 46650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9377896, .data = 29868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9377892, .data = 41497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9377894, .data = 165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9377890, .data = 18099, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9377888, .data = 2455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9377884, .data = 18101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9377886, .data = 62428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7602294, .data = 36139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7602296, .data = 63199, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_14[] = {
		{ .addr = 0x6b4f4a, .byte = 0x46 },
		{ .addr = 0x6b4f4b, .byte = 0xab },
		{ .addr = 0x6b4f4c, .byte = 0xd7 },
		{ .addr = 0x6b4f4d, .byte = 0x16 },
		{ .addr = 0x6b4f4e, .byte = 0x7e },
		{ .addr = 0x6b4f4f, .byte = 0xbd },
		{ .addr = 0xbefe26, .byte = 0x86 },
		{ .addr = 0xbefe27, .byte = 0xb6 },
		{ .addr = 0xbefe28, .byte = 0x43 },
		{ .addr = 0xbefe29, .byte = 0xfc },
		{ .addr = 0x6b4f50, .byte = 0x31 },
		{ .addr = 0x6b4f51, .byte = 0x88 }
};

static const SST_RamByte notl_final_ram_14[] = {
		{ .addr = 0x6b4f4a, .byte = 0x46 },
		{ .addr = 0x6b4f4b, .byte = 0xab },
		{ .addr = 0x6b4f4c, .byte = 0xd7 },
		{ .addr = 0x6b4f4d, .byte = 0x16 },
		{ .addr = 0x6b4f4e, .byte = 0x7e },
		{ .addr = 0x6b4f4f, .byte = 0xbd },
		{ .addr = 0xbefe26, .byte = 0x79 },
		{ .addr = 0xbefe27, .byte = 0x49 },
		{ .addr = 0xbefe28, .byte = 0xbc },
		{ .addr = 0xbefe29, .byte = 0x03 },
		{ .addr = 0x6b4f50, .byte = 0x31 },
		{ .addr = 0x6b4f51, .byte = 0x88 }
};

static const SST_Transaction notl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7032654, .data = 32445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12516902, .data = 34486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12516904, .data = 17404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7032656, .data = 12680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12516904, .data = 48131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12516902, .data = 31049, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notl_initial_ram_15[] = {
		{ .addr = 0xd883de, .byte = 0x46 },
		{ .addr = 0xd883df, .byte = 0xae },
		{ .addr = 0xd883e0, .byte = 0x51 },
		{ .addr = 0xd883e1, .byte = 0xc6 },
		{ .addr = 0xd883e2, .byte = 0x1f },
		{ .addr = 0xd883e3, .byte = 0xe2 },
		{ .addr = 0x3783ea, .byte = 0x72 },
		{ .addr = 0x3783eb, .byte = 0x11 },
		{ .addr = 0x3783ec, .byte = 0x74 },
		{ .addr = 0x3783ed, .byte = 0x42 },
		{ .addr = 0xd883e4, .byte = 0xc4 },
		{ .addr = 0xd883e5, .byte = 0x3f }
};

static const SST_RamByte notl_final_ram_15[] = {
		{ .addr = 0xd883de, .byte = 0x46 },
		{ .addr = 0xd883df, .byte = 0xae },
		{ .addr = 0xd883e0, .byte = 0x51 },
		{ .addr = 0xd883e1, .byte = 0xc6 },
		{ .addr = 0xd883e2, .byte = 0x1f },
		{ .addr = 0xd883e3, .byte = 0xe2 },
		{ .addr = 0x3783ea, .byte = 0x8d },
		{ .addr = 0x3783eb, .byte = 0xee },
		{ .addr = 0x3783ec, .byte = 0x8b },
		{ .addr = 0x3783ed, .byte = 0xbd },
		{ .addr = 0xd883e4, .byte = 0xc4 },
		{ .addr = 0xd883e5, .byte = 0x3f }
};

static const SST_Transaction notl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14189538, .data = 8162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3638250, .data = 29201, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3638252, .data = 29762, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14189540, .data = 50239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3638252, .data = 35773, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3638250, .data = 36334, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NOTL_TEST_COUNT = 16;
static const SST_TestCase notl[] = {
	{
		.name = "000 NOT.l D3 4683",
		.initial = {
			.regs = {
				1579703622, 3647245374, 2292136252, 3363501296, 975048880, 2710219579, 2788478342, 1692537478, 3842939765, 1654006570, 2299450896, 1487660210, 1492052198, 388120030, 246633220, 1691832, 8065156, 33809, 12744490
			},
			.prefetch0 = 18051,
			.prefetch1 = 47197,
			.ram = notl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1579703622, 3647245374, 2292136252, 931465999, 975048880, 2710219579, 2788478342, 1692537478, 3842939765, 1654006570, 2299450896, 1487660210, 1492052198, 388120030, 246633220, 1691832, 8065156, 33808, 12744492
			},
			.prefetch0 = 47197,
			.prefetch1 = 13662,
			.ram = notl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = notl_transactions_0,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "001 NOT.l -(A3) 46a3",
		.initial = {
			.regs = {
				2963322326, 3650610547, 1705422536, 1071666542, 2912974029, 2829673802, 2232729176, 2042224980, 1655357896, 2414107260, 1732286624, 670619986, 4171316760, 2538295677, 3173010789, 15691190, 11095348, 1820, 2627290
			},
			.prefetch0 = 18083,
			.prefetch1 = 28595,
			.ram = notl_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2963322326, 3650610547, 1705422536, 1071666542, 2912974029, 2829673802, 2232729176, 2042224980, 1655357896, 2414107260, 1732286624, 670619982, 4171316760, 2538295677, 3173010789, 15691190, 11095348, 1808, 2627292
			},
			.prefetch0 = 28595,
			.prefetch1 = 31977,
			.ram = notl_final_ram_1,
			.ram_len = 10,
		},
		.transactions = notl_transactions_1,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "002 NOT.l -(A1) 46a1",
		.initial = {
			.regs = {
				966225326, 2175383763, 1734934293, 2301239453, 1739759570, 1515281929, 2572486318, 2404785338, 2190499271, 3430797984, 2078712818, 1588122940, 2095808056, 3386173150, 3030543286, 6388014, 11824160, 42244, 13391284
			},
			.prefetch0 = 18081,
			.prefetch1 = 25946,
			.ram = notl_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				966225326, 2175383763, 1734934293, 2301239453, 1739759570, 1515281929, 2572486318, 2404785338, 2190499271, 3430797980, 2078712818, 1588122940, 2095808056, 3386173150, 3030543286, 6388014, 11824160, 42240, 13391286
			},
			.prefetch0 = 25946,
			.prefetch1 = 50062,
			.ram = notl_final_ram_2,
			.ram_len = 10,
		},
		.transactions = notl_transactions_2,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "003 NOT.l (d16, A3) 46ab",
		.initial = {
			.regs = {
				2281641154, 2409386784, 3448614055, 4210389930, 1322526782, 3255112902, 3495858449, 1922758008, 1478274344, 4222817686, 1680828830, 283371293, 3560556354, 836849615, 1530590288, 5061652, 11436756, 8717, 8633928
			},
			.prefetch0 = 18091,
			.prefetch1 = 34896,
			.ram = notl_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2281641154, 2409386784, 3448614055, 4210389930, 1322526782, 3255112902, 3495858449, 1922758008, 1478274344, 4222817686, 1680828830, 283371293, 3560556354, 836849615, 1530590288, 5061652, 11436742, 8717, 1901348702
			},
			.prefetch0 = 56081,
			.prefetch1 = 35144,
			.ram = notl_final_ram_3,
			.ram_len = 28,
		},
		.transactions = notl_transactions_3,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "004 NOT.l (A6) 4696",
		.initial = {
			.regs = {
				3720971818, 1763221009, 898389577, 2679730216, 3431573782, 3282788601, 3811346453, 486923944, 1535830102, 1587809897, 4163163324, 1940895421, 1154724553, 223295634, 2425668092, 13943962, 6593154, 33301, 6295780
			},
			.prefetch0 = 18070,
			.prefetch1 = 52284,
			.ram = notl_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3720971818, 1763221009, 898389577, 2679730216, 3431573782, 3282788601, 3811346453, 486923944, 1535830102, 1587809897, 4163163324, 1940895421, 1154724553, 223295634, 2425668092, 13943962, 6593154, 33304, 6295782
			},
			.prefetch0 = 52284,
			.prefetch1 = 55070,
			.ram = notl_final_ram_4,
			.ram_len = 10,
		},
		.transactions = notl_transactions_4,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "005 NOT.l (d8, A6, Xn) 46b6",
		.initial = {
			.regs = {
				34907674, 3223948957, 4206044905, 1455891008, 147203706, 354749862, 26309402, 797797446, 2172784110, 1284460514, 695083039, 274845569, 3280517508, 276776159, 2655686197, 2923526, 16496826, 260, 2231934
			},
			.prefetch0 = 18102,
			.prefetch1 = 10859,
			.ram = notl_initial_ram_5,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				34907674, 3223948957, 4206044905, 1455891008, 147203706, 354749862, 26309402, 797797446, 2172784110, 1284460514, 695083039, 274845569, 3280517508, 276776159, 2655686197, 2923526, 16496812, 8452, 4130511424
			},
			.prefetch0 = 8512,
			.prefetch1 = 57495,
			.ram = notl_final_ram_5,
			.ram_len = 28,
		},
		.transactions = notl_transactions_5,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "006 NOT.l (A6)+ 469e",
		.initial = {
			.regs = {
				642036767, 3913898179, 1282933798, 1367854267, 2260285716, 1104009389, 2705856671, 1993176826, 2581152780, 2442110046, 3020728761, 3918015438, 185406800, 1573181314, 4099394287, 8317880, 16177048, 1822, 8860160
			},
			.prefetch0 = 18078,
			.prefetch1 = 23926,
			.ram = notl_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				642036767, 3913898179, 1282933798, 1367854267, 2260285716, 1104009389, 2705856671, 1993176826, 2581152780, 2442110046, 3020728761, 3918015438, 185406800, 1573181314, 4099394287, 8317880, 16177034, 10014, 1335897318
			},
			.prefetch0 = 49573,
			.prefetch1 = 58513,
			.ram = notl_final_ram_6,
			.ram_len = 26,
		},
		.transactions = notl_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 NOT.l D2 4682",
		.initial = {
			.regs = {
				1125220838, 1944264446, 4052978502, 2226799333, 930435590, 3413005707, 3774786825, 1865707441, 1139943331, 3253089589, 1034788737, 3400821153, 1991941205, 624686722, 571627945, 11852790, 6723708, 513, 16428322
			},
			.prefetch0 = 18050,
			.prefetch1 = 34088,
			.ram = notl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1125220838, 1944264446, 241988793, 2226799333, 930435590, 3413005707, 3774786825, 1865707441, 1139943331, 3253089589, 1034788737, 3400821153, 1991941205, 624686722, 571627945, 11852790, 6723708, 512, 16428324
			},
			.prefetch0 = 34088,
			.prefetch1 = 47314,
			.ram = notl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = notl_transactions_7,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "008 NOT.l (xxx).w 46b8",
		.initial = {
			.regs = {
				2890421251, 1255533752, 3803462831, 3169866393, 2998962068, 1167898895, 757848519, 2710997626, 3521501928, 4182245475, 246698694, 1347601250, 4002309787, 1593070254, 2320872006, 1053536, 1790884, 32778, 2336852
			},
			.prefetch0 = 18104,
			.prefetch1 = 62978,
			.ram = notl_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2890421251, 1255533752, 3803462831, 3169866393, 2998962068, 1167898895, 757848519, 2710997626, 3521501928, 4182245475, 246698694, 1347601250, 4002309787, 1593070254, 2320872006, 1053536, 1790884, 32768, 2336856
			},
			.prefetch0 = 36901,
			.prefetch1 = 29565,
			.ram = notl_final_ram_8,
			.ram_len = 12,
		},
		.transactions = notl_transactions_8,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "009 NOT.l (A2) 4692",
		.initial = {
			.regs = {
				1534086266, 2017240041, 2208570344, 25202909, 1600479836, 4208920876, 464207550, 2133409926, 1836113513, 2741131267, 3849885902, 95388931, 504412735, 585237124, 2904026173, 9304850, 14629204, 1542, 16567984
			},
			.prefetch0 = 18066,
			.prefetch1 = 8508,
			.ram = notl_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1534086266, 2017240041, 2208570344, 25202909, 1600479836, 4208920876, 464207550, 2133409926, 1836113513, 2741131267, 3849885902, 95388931, 504412735, 585237124, 2904026173, 9304850, 14629204, 1536, 16567986
			},
			.prefetch0 = 8508,
			.prefetch1 = 64878,
			.ram = notl_final_ram_9,
			.ram_len = 10,
		},
		.transactions = notl_transactions_9,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "010 NOT.l (d8, A7, Xn) 46b7",
		.initial = {
			.regs = {
				3572526310, 1499836489, 4086826255, 3804364353, 2872815161, 4197574797, 2081932187, 2428024243, 2043009019, 3117968418, 982453808, 3695018852, 814325347, 3336425266, 3365141045, 15606040, 8660418, 8985, 10104116
			},
			.prefetch0 = 18103,
			.prefetch1 = 59571,
			.ram = notl_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3572526310, 1499836489, 4086826255, 3804364353, 2872815161, 4197574797, 2081932187, 2428024243, 2043009019, 3117968418, 982453808, 3695018852, 814325347, 3336425266, 3365141045, 15606040, 8660418, 8976, 10104120
			},
			.prefetch0 = 56527,
			.prefetch1 = 373,
			.ram = notl_final_ram_10,
			.ram_len = 12,
		},
		.transactions = notl_transactions_10,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "011 NOT.l (d16, A4) 46ac",
		.initial = {
			.regs = {
				1815926188, 4255049488, 3708327429, 581144962, 75860936, 456260358, 164994318, 3538331540, 2556866522, 893418500, 863427148, 2750881734, 2542376068, 1442928006, 1062861544, 10040676, 3596614, 1048, 9248416
			},
			.prefetch0 = 18092,
			.prefetch1 = 32261,
			.ram = notl_initial_ram_11,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1815926188, 4255049488, 3708327429, 581144962, 75860936, 456260358, 164994318, 3538331540, 2556866522, 893418500, 863427148, 2750881734, 2542376068, 1442928006, 1062861544, 10040676, 3596600, 9240, 1940583296
			},
			.prefetch0 = 59262,
			.prefetch1 = 21244,
			.ram = notl_final_ram_11,
			.ram_len = 28,
		},
		.transactions = notl_transactions_11,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "012 NOT.l (xxx).w 46b8",
		.initial = {
			.regs = {
				194374152, 1901028953, 625076053, 1757090382, 1710603299, 3876807554, 3621597321, 1717460748, 1459790642, 333363146, 882395023, 1845593799, 1858685966, 4217546619, 1987998871, 7315512, 4894968, 9472, 11108122
			},
			.prefetch0 = 18104,
			.prefetch1 = 34276,
			.ram = notl_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				194374152, 1901028953, 625076053, 1757090382, 1710603299, 3876807554, 3621597321, 1717460748, 1459790642, 333363146, 882395023, 1845593799, 1858685966, 4217546619, 1987998871, 7315512, 4894968, 9480, 11108126
			},
			.prefetch0 = 60942,
			.prefetch1 = 25439,
			.ram = notl_final_ram_12,
			.ram_len = 12,
		},
		.transactions = notl_transactions_12,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "013 NOT.l (d8, A3, Xn) 46b3",
		.initial = {
			.regs = {
				279706198, 204487693, 1707820217, 2822217081, 3947672999, 3781806914, 3332791378, 1530308449, 2360442234, 2755118046, 186663790, 758492609, 945015298, 490863707, 2202274111, 10850118, 9377898, 41497, 10843310
			},
			.prefetch0 = 18099,
			.prefetch1 = 27268,
			.ram = notl_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				279706198, 204487693, 1707820217, 2822217081, 3947672999, 3781806914, 3332791378, 1530308449, 2360442234, 2755118046, 186663790, 758492609, 945015298, 490863707, 2202274111, 10850118, 9377884, 8729, 1014235258
			},
			.prefetch0 = 36139,
			.prefetch1 = 63199,
			.ram = notl_final_ram_13,
			.ram_len = 28,
		},
		.transactions = notl_transactions_13,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "014 NOT.l (d16, A3) 46ab",
		.initial = {
			.regs = {
				2461045779, 3030589137, 763226737, 2913523736, 2442518136, 93025992, 2118559938, 1895457918, 553590836, 633017801, 3531609362, 29304592, 1766136375, 494157310, 1436707978, 7024514, 14768174, 41243, 7032654
			},
			.prefetch0 = 18091,
			.prefetch1 = 55062,
			.ram = notl_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2461045779, 3030589137, 763226737, 2913523736, 2442518136, 93025992, 2118559938, 1895457918, 553590836, 633017801, 3531609362, 29304592, 1766136375, 494157310, 1436707978, 7024514, 14768174, 41232, 7032658
			},
			.prefetch0 = 32445,
			.prefetch1 = 12680,
			.ram = notl_final_ram_14,
			.ram_len = 12,
		},
		.transactions = notl_transactions_14,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "015 NOT.l (d16, A6) 46ae",
		.initial = {
			.regs = {
				865989178, 1749329326, 2509702991, 530730619, 2270737961, 2187115717, 3547845331, 1969548042, 1984297818, 2317803670, 3556480047, 3992265450, 2762283285, 656917039, 892809764, 10523010, 5010952, 33795, 14189538
			},
			.prefetch0 = 18094,
			.prefetch1 = 20934,
			.ram = notl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				865989178, 1749329326, 2509702991, 530730619, 2270737961, 2187115717, 3547845331, 1969548042, 1984297818, 2317803670, 3556480047, 3992265450, 2762283285, 656917039, 892809764, 10523010, 5010952, 33800, 14189542
			},
			.prefetch0 = 8162,
			.prefetch1 = 50239,
			.ram = notl_final_ram_15,
			.ram_len = 12,
		},
		.transactions = notl_transactions_15,
		.transactions_len = 6,
		.lenght = 24,
	},
};

#endif /* RBT_NOTL_H */