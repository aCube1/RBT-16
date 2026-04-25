#ifndef RBT_LSLW_H
#define RBT_LSLW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte lslw_initial_ram_0[] = {
		{ .addr = 0x6b85be, .byte = 0xe3 },
		{ .addr = 0x6b85bf, .byte = 0x4b },
		{ .addr = 0x6b85c0, .byte = 0xd9 },
		{ .addr = 0x6b85c1, .byte = 0x4c },
		{ .addr = 0x6b85c2, .byte = 0x1e },
		{ .addr = 0x6b85c3, .byte = 0x73 }
};

static const SST_RamByte lslw_final_ram_0[] = {
		{ .addr = 0x6b85be, .byte = 0xe3 },
		{ .addr = 0x6b85bf, .byte = 0x4b },
		{ .addr = 0x6b85c0, .byte = 0xd9 },
		{ .addr = 0x6b85c1, .byte = 0x4c },
		{ .addr = 0x6b85c2, .byte = 0x1e },
		{ .addr = 0x6b85c3, .byte = 0x73 }
};

static const SST_Transaction lslw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7046594, .data = 7795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte lslw_initial_ram_1[] = {
		{ .addr = 0x14ac5c, .byte = 0xed },
		{ .addr = 0x14ac5d, .byte = 0x6c },
		{ .addr = 0x14ac5e, .byte = 0x99 },
		{ .addr = 0x14ac5f, .byte = 0xc3 },
		{ .addr = 0x14ac60, .byte = 0x05 },
		{ .addr = 0x14ac61, .byte = 0xb5 }
};

static const SST_RamByte lslw_final_ram_1[] = {
		{ .addr = 0x14ac5c, .byte = 0xed },
		{ .addr = 0x14ac5d, .byte = 0x6c },
		{ .addr = 0x14ac5e, .byte = 0x99 },
		{ .addr = 0x14ac5f, .byte = 0xc3 },
		{ .addr = 0x14ac60, .byte = 0x05 },
		{ .addr = 0x14ac61, .byte = 0xb5 }
};

static const SST_Transaction lslw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1354848, .data = 1461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 92 },
};

static const SST_RamByte lslw_initial_ram_2[] = {
		{ .addr = 0xa4f904, .byte = 0xef },
		{ .addr = 0xa4f905, .byte = 0x68 },
		{ .addr = 0xa4f906, .byte = 0x3a },
		{ .addr = 0xa4f907, .byte = 0x32 },
		{ .addr = 0xa4f908, .byte = 0x80 },
		{ .addr = 0xa4f909, .byte = 0x46 }
};

static const SST_RamByte lslw_final_ram_2[] = {
		{ .addr = 0xa4f904, .byte = 0xef },
		{ .addr = 0xa4f905, .byte = 0x68 },
		{ .addr = 0xa4f906, .byte = 0x3a },
		{ .addr = 0xa4f907, .byte = 0x32 },
		{ .addr = 0xa4f908, .byte = 0x80 },
		{ .addr = 0xa4f909, .byte = 0x46 }
};

static const SST_Transaction lslw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10811656, .data = 32838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 30 },
};

static const SST_RamByte lslw_initial_ram_3[] = {
		{ .addr = 0x627f1e, .byte = 0xe3 },
		{ .addr = 0x627f1f, .byte = 0x68 },
		{ .addr = 0x627f20, .byte = 0x9c },
		{ .addr = 0x627f21, .byte = 0x84 },
		{ .addr = 0x627f22, .byte = 0xe6 },
		{ .addr = 0x627f23, .byte = 0x07 }
};

static const SST_RamByte lslw_final_ram_3[] = {
		{ .addr = 0x627f1e, .byte = 0xe3 },
		{ .addr = 0x627f1f, .byte = 0x68 },
		{ .addr = 0x627f20, .byte = 0x9c },
		{ .addr = 0x627f21, .byte = 0x84 },
		{ .addr = 0x627f22, .byte = 0xe6 },
		{ .addr = 0x627f23, .byte = 0x07 }
};

static const SST_Transaction lslw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6455074, .data = 58887, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 66 },
};

static const SST_RamByte lslw_initial_ram_4[] = {
		{ .addr = 0xcc13bc, .byte = 0xed },
		{ .addr = 0xcc13bd, .byte = 0x6c },
		{ .addr = 0xcc13be, .byte = 0x67 },
		{ .addr = 0xcc13bf, .byte = 0x3d },
		{ .addr = 0xcc13c0, .byte = 0x25 },
		{ .addr = 0xcc13c1, .byte = 0x42 }
};

static const SST_RamByte lslw_final_ram_4[] = {
		{ .addr = 0xcc13bc, .byte = 0xed },
		{ .addr = 0xcc13bd, .byte = 0x6c },
		{ .addr = 0xcc13be, .byte = 0x67 },
		{ .addr = 0xcc13bf, .byte = 0x3d },
		{ .addr = 0xcc13c0, .byte = 0x25 },
		{ .addr = 0xcc13c1, .byte = 0x42 }
};

static const SST_Transaction lslw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13374400, .data = 9538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 102 },
};

static const SST_RamByte lslw_initial_ram_5[] = {
		{ .addr = 0x120c4a, .byte = 0xeb },
		{ .addr = 0x120c4b, .byte = 0x68 },
		{ .addr = 0x120c4c, .byte = 0x93 },
		{ .addr = 0x120c4d, .byte = 0x37 },
		{ .addr = 0x120c4e, .byte = 0x8c },
		{ .addr = 0x120c4f, .byte = 0x35 }
};

static const SST_RamByte lslw_final_ram_5[] = {
		{ .addr = 0x120c4a, .byte = 0xeb },
		{ .addr = 0x120c4b, .byte = 0x68 },
		{ .addr = 0x120c4c, .byte = 0x93 },
		{ .addr = 0x120c4d, .byte = 0x37 },
		{ .addr = 0x120c4e, .byte = 0x8c },
		{ .addr = 0x120c4f, .byte = 0x35 }
};

static const SST_Transaction lslw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1182798, .data = 35893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 124 },
};

static const SST_RamByte lslw_initial_ram_6[] = {
		{ .addr = 0x1f774a, .byte = 0xed },
		{ .addr = 0x1f774b, .byte = 0x4e },
		{ .addr = 0x1f774c, .byte = 0xdc },
		{ .addr = 0x1f774d, .byte = 0x49 },
		{ .addr = 0x1f774e, .byte = 0x73 },
		{ .addr = 0x1f774f, .byte = 0xa9 }
};

static const SST_RamByte lslw_final_ram_6[] = {
		{ .addr = 0x1f774a, .byte = 0xed },
		{ .addr = 0x1f774b, .byte = 0x4e },
		{ .addr = 0x1f774c, .byte = 0xdc },
		{ .addr = 0x1f774d, .byte = 0x49 },
		{ .addr = 0x1f774e, .byte = 0x73 },
		{ .addr = 0x1f774f, .byte = 0xa9 }
};

static const SST_Transaction lslw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2062158, .data = 29609, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lslw_initial_ram_7[] = {
		{ .addr = 0xa481d8, .byte = 0xe3 },
		{ .addr = 0xa481d9, .byte = 0xee },
		{ .addr = 0xa481da, .byte = 0x25 },
		{ .addr = 0xa481db, .byte = 0xc3 },
		{ .addr = 0xa481dc, .byte = 0xc8 },
		{ .addr = 0xa481dd, .byte = 0x56 },
		{ .addr = 0x732730, .byte = 0x65 },
		{ .addr = 0x732731, .byte = 0x31 },
		{ .addr = 0xa481de, .byte = 0x9a },
		{ .addr = 0xa481df, .byte = 0x21 }
};

static const SST_RamByte lslw_final_ram_7[] = {
		{ .addr = 0xa481d8, .byte = 0xe3 },
		{ .addr = 0xa481d9, .byte = 0xee },
		{ .addr = 0xa481da, .byte = 0x25 },
		{ .addr = 0xa481db, .byte = 0xc3 },
		{ .addr = 0xa481dc, .byte = 0xc8 },
		{ .addr = 0xa481dd, .byte = 0x56 },
		{ .addr = 0x732730, .byte = 0xca },
		{ .addr = 0x732731, .byte = 0x62 },
		{ .addr = 0xa481de, .byte = 0x9a },
		{ .addr = 0xa481df, .byte = 0x21 }
};

static const SST_Transaction lslw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10781148, .data = 51286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7546672, .data = 25905, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10781150, .data = 39457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7546672, .data = 51810, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lslw_initial_ram_8[] = {
		{ .addr = 0x810d5e, .byte = 0xe5 },
		{ .addr = 0x810d5f, .byte = 0x4e },
		{ .addr = 0x810d60, .byte = 0x19 },
		{ .addr = 0x810d61, .byte = 0x9d },
		{ .addr = 0x810d62, .byte = 0x8c },
		{ .addr = 0x810d63, .byte = 0x78 }
};

static const SST_RamByte lslw_final_ram_8[] = {
		{ .addr = 0x810d5e, .byte = 0xe5 },
		{ .addr = 0x810d5f, .byte = 0x4e },
		{ .addr = 0x810d60, .byte = 0x19 },
		{ .addr = 0x810d61, .byte = 0x9d },
		{ .addr = 0x810d62, .byte = 0x8c },
		{ .addr = 0x810d63, .byte = 0x78 }
};

static const SST_Transaction lslw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8457570, .data = 35960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lslw_initial_ram_9[] = {
		{ .addr = 0x65ec36, .byte = 0xe7 },
		{ .addr = 0x65ec37, .byte = 0x4c },
		{ .addr = 0x65ec38, .byte = 0xe9 },
		{ .addr = 0x65ec39, .byte = 0xac },
		{ .addr = 0x65ec3a, .byte = 0x18 },
		{ .addr = 0x65ec3b, .byte = 0x3f }
};

static const SST_RamByte lslw_final_ram_9[] = {
		{ .addr = 0x65ec36, .byte = 0xe7 },
		{ .addr = 0x65ec37, .byte = 0x4c },
		{ .addr = 0x65ec38, .byte = 0xe9 },
		{ .addr = 0x65ec39, .byte = 0xac },
		{ .addr = 0x65ec3a, .byte = 0x18 },
		{ .addr = 0x65ec3b, .byte = 0x3f }
};

static const SST_Transaction lslw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6679610, .data = 6207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lslw_initial_ram_10[] = {
		{ .addr = 0x0ae2b4, .byte = 0xe3 },
		{ .addr = 0x0ae2b5, .byte = 0x68 },
		{ .addr = 0x0ae2b6, .byte = 0x61 },
		{ .addr = 0x0ae2b7, .byte = 0xdd },
		{ .addr = 0x0ae2b8, .byte = 0x15 },
		{ .addr = 0x0ae2b9, .byte = 0x0a }
};

static const SST_RamByte lslw_final_ram_10[] = {
		{ .addr = 0x0ae2b4, .byte = 0xe3 },
		{ .addr = 0x0ae2b5, .byte = 0x68 },
		{ .addr = 0x0ae2b6, .byte = 0x61 },
		{ .addr = 0x0ae2b7, .byte = 0xdd },
		{ .addr = 0x0ae2b8, .byte = 0x15 },
		{ .addr = 0x0ae2b9, .byte = 0x0a }
};

static const SST_Transaction lslw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 713400, .data = 5386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte lslw_initial_ram_11[] = {
		{ .addr = 0x6c2b2c, .byte = 0xe9 },
		{ .addr = 0x6c2b2d, .byte = 0x49 },
		{ .addr = 0x6c2b2e, .byte = 0x28 },
		{ .addr = 0x6c2b2f, .byte = 0x47 },
		{ .addr = 0x6c2b30, .byte = 0xf8 },
		{ .addr = 0x6c2b31, .byte = 0xbc }
};

static const SST_RamByte lslw_final_ram_11[] = {
		{ .addr = 0x6c2b2c, .byte = 0xe9 },
		{ .addr = 0x6c2b2d, .byte = 0x49 },
		{ .addr = 0x6c2b2e, .byte = 0x28 },
		{ .addr = 0x6c2b2f, .byte = 0x47 },
		{ .addr = 0x6c2b30, .byte = 0xf8 },
		{ .addr = 0x6c2b31, .byte = 0xbc }
};

static const SST_Transaction lslw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7088944, .data = 63676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lslw_initial_ram_12[] = {
		{ .addr = 0xe18b5e, .byte = 0xeb },
		{ .addr = 0xe18b5f, .byte = 0x48 },
		{ .addr = 0xe18b60, .byte = 0x03 },
		{ .addr = 0xe18b61, .byte = 0x00 },
		{ .addr = 0xe18b62, .byte = 0x2c },
		{ .addr = 0xe18b63, .byte = 0x72 }
};

static const SST_RamByte lslw_final_ram_12[] = {
		{ .addr = 0xe18b5e, .byte = 0xeb },
		{ .addr = 0xe18b5f, .byte = 0x48 },
		{ .addr = 0xe18b60, .byte = 0x03 },
		{ .addr = 0xe18b61, .byte = 0x00 },
		{ .addr = 0xe18b62, .byte = 0x2c },
		{ .addr = 0xe18b63, .byte = 0x72 }
};

static const SST_Transaction lslw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14781282, .data = 11378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lslw_initial_ram_13[] = {
		{ .addr = 0x67cad2, .byte = 0xeb },
		{ .addr = 0x67cad3, .byte = 0x6c },
		{ .addr = 0x67cad4, .byte = 0x3c },
		{ .addr = 0x67cad5, .byte = 0x58 },
		{ .addr = 0x67cad6, .byte = 0x52 },
		{ .addr = 0x67cad7, .byte = 0xea }
};

static const SST_RamByte lslw_final_ram_13[] = {
		{ .addr = 0x67cad2, .byte = 0xeb },
		{ .addr = 0x67cad3, .byte = 0x6c },
		{ .addr = 0x67cad4, .byte = 0x3c },
		{ .addr = 0x67cad5, .byte = 0x58 },
		{ .addr = 0x67cad6, .byte = 0x52 },
		{ .addr = 0x67cad7, .byte = 0xea }
};

static const SST_Transaction lslw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6802134, .data = 21226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

static const SST_RamByte lslw_initial_ram_14[] = {
		{ .addr = 0x10f8fc, .byte = 0xed },
		{ .addr = 0x10f8fd, .byte = 0x4b },
		{ .addr = 0x10f8fe, .byte = 0x8b },
		{ .addr = 0x10f8ff, .byte = 0xf2 },
		{ .addr = 0x10f900, .byte = 0x00 },
		{ .addr = 0x10f901, .byte = 0xdf }
};

static const SST_RamByte lslw_final_ram_14[] = {
		{ .addr = 0x10f8fc, .byte = 0xed },
		{ .addr = 0x10f8fd, .byte = 0x4b },
		{ .addr = 0x10f8fe, .byte = 0x8b },
		{ .addr = 0x10f8ff, .byte = 0xf2 },
		{ .addr = 0x10f900, .byte = 0x00 },
		{ .addr = 0x10f901, .byte = 0xdf }
};

static const SST_Transaction lslw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1112320, .data = 223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lslw_initial_ram_15[] = {
		{ .addr = 0x5ce50a, .byte = 0xe3 },
		{ .addr = 0x5ce50b, .byte = 0xf2 },
		{ .addr = 0x5ce50c, .byte = 0xf6 },
		{ .addr = 0x5ce50d, .byte = 0x55 },
		{ .addr = 0x5ce50e, .byte = 0x6f },
		{ .addr = 0x5ce50f, .byte = 0x9f },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0x9d },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0x689dae, .byte = 0xe3 },
		{ .addr = 0x689daf, .byte = 0x9a },
		{ .addr = 0x689db0, .byte = 0x3a },
		{ .addr = 0x689db1, .byte = 0x50 }
};

static const SST_RamByte lslw_final_ram_15[] = {
		{ .addr = 0x5ce50a, .byte = 0xe3 },
		{ .addr = 0x5ce50b, .byte = 0xf2 },
		{ .addr = 0x5ce50c, .byte = 0xf6 },
		{ .addr = 0x5ce50d, .byte = 0x55 },
		{ .addr = 0x5ce50e, .byte = 0x6f },
		{ .addr = 0x5ce50f, .byte = 0x9f },
		{ .addr = 0x819028, .byte = 0xe5 },
		{ .addr = 0x819029, .byte = 0x0c },
		{ .addr = 0x819024, .byte = 0xa3 },
		{ .addr = 0x819025, .byte = 0x06 },
		{ .addr = 0x819026, .byte = 0x00 },
		{ .addr = 0x819027, .byte = 0x5c },
		{ .addr = 0x819022, .byte = 0xe3 },
		{ .addr = 0x819023, .byte = 0xf2 },
		{ .addr = 0x819020, .byte = 0xe4 },
		{ .addr = 0x819021, .byte = 0x11 },
		{ .addr = 0x81901c, .byte = 0xe3 },
		{ .addr = 0x81901d, .byte = 0xf5 },
		{ .addr = 0x81901e, .byte = 0x12 },
		{ .addr = 0x81901f, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0x9d },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0x689dae, .byte = 0xe3 },
		{ .addr = 0x689daf, .byte = 0x9a },
		{ .addr = 0x689db0, .byte = 0x3a },
		{ .addr = 0x689db1, .byte = 0x50 }
};

static const SST_Transaction lslw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6087950, .data = 28575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16114704, .data = 24874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8491048, .data = 58636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8491044, .data = 41734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8491046, .data = 92, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8491042, .data = 58354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8491040, .data = 58385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8491036, .data = 58357, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8491038, .data = 4853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 40366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6856110, .data = 58266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6856112, .data = 14928, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lslw_initial_ram_16[] = {
		{ .addr = 0x3ab4b4, .byte = 0xe9 },
		{ .addr = 0x3ab4b5, .byte = 0x6d },
		{ .addr = 0x3ab4b6, .byte = 0xb5 },
		{ .addr = 0x3ab4b7, .byte = 0xbc },
		{ .addr = 0x3ab4b8, .byte = 0x0c },
		{ .addr = 0x3ab4b9, .byte = 0x33 }
};

static const SST_RamByte lslw_final_ram_16[] = {
		{ .addr = 0x3ab4b4, .byte = 0xe9 },
		{ .addr = 0x3ab4b5, .byte = 0x6d },
		{ .addr = 0x3ab4b6, .byte = 0xb5 },
		{ .addr = 0x3ab4b7, .byte = 0xbc },
		{ .addr = 0x3ab4b8, .byte = 0x0c },
		{ .addr = 0x3ab4b9, .byte = 0x33 }
};

static const SST_Transaction lslw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3847352, .data = 3123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lslw_initial_ram_17[] = {
		{ .addr = 0x7bb2ee, .byte = 0xe1 },
		{ .addr = 0x7bb2ef, .byte = 0x4e },
		{ .addr = 0x7bb2f0, .byte = 0x2e },
		{ .addr = 0x7bb2f1, .byte = 0x1c },
		{ .addr = 0x7bb2f2, .byte = 0xb9 },
		{ .addr = 0x7bb2f3, .byte = 0x58 }
};

static const SST_RamByte lslw_final_ram_17[] = {
		{ .addr = 0x7bb2ee, .byte = 0xe1 },
		{ .addr = 0x7bb2ef, .byte = 0x4e },
		{ .addr = 0x7bb2f0, .byte = 0x2e },
		{ .addr = 0x7bb2f1, .byte = 0x1c },
		{ .addr = 0x7bb2f2, .byte = 0xb9 },
		{ .addr = 0x7bb2f3, .byte = 0x58 }
};

static const SST_Transaction lslw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8106738, .data = 47448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lslw_initial_ram_18[] = {
		{ .addr = 0xa40aa2, .byte = 0xeb },
		{ .addr = 0xa40aa3, .byte = 0x49 },
		{ .addr = 0xa40aa4, .byte = 0x41 },
		{ .addr = 0xa40aa5, .byte = 0x43 },
		{ .addr = 0xa40aa6, .byte = 0x06 },
		{ .addr = 0xa40aa7, .byte = 0x9d }
};

static const SST_RamByte lslw_final_ram_18[] = {
		{ .addr = 0xa40aa2, .byte = 0xeb },
		{ .addr = 0xa40aa3, .byte = 0x49 },
		{ .addr = 0xa40aa4, .byte = 0x41 },
		{ .addr = 0xa40aa5, .byte = 0x43 },
		{ .addr = 0xa40aa6, .byte = 0x06 },
		{ .addr = 0xa40aa7, .byte = 0x9d }
};

static const SST_Transaction lslw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10750630, .data = 1693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lslw_initial_ram_19[] = {
		{ .addr = 0x365170, .byte = 0xe5 },
		{ .addr = 0x365171, .byte = 0x6a },
		{ .addr = 0x365172, .byte = 0x09 },
		{ .addr = 0x365173, .byte = 0x23 },
		{ .addr = 0x365174, .byte = 0x6c },
		{ .addr = 0x365175, .byte = 0xc6 }
};

static const SST_RamByte lslw_final_ram_19[] = {
		{ .addr = 0x365170, .byte = 0xe5 },
		{ .addr = 0x365171, .byte = 0x6a },
		{ .addr = 0x365172, .byte = 0x09 },
		{ .addr = 0x365173, .byte = 0x23 },
		{ .addr = 0x365174, .byte = 0x6c },
		{ .addr = 0x365175, .byte = 0xc6 }
};

static const SST_Transaction lslw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3559796, .data = 27846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 76 },
};

static const SST_RamByte lslw_initial_ram_20[] = {
		{ .addr = 0x8789b8, .byte = 0xe3 },
		{ .addr = 0x8789b9, .byte = 0xd2 },
		{ .addr = 0x8789ba, .byte = 0x66 },
		{ .addr = 0x8789bb, .byte = 0x09 },
		{ .addr = 0x144b0c, .byte = 0x11 },
		{ .addr = 0x144b0d, .byte = 0x09 },
		{ .addr = 0x8789bc, .byte = 0x88 },
		{ .addr = 0x8789bd, .byte = 0x17 }
};

static const SST_RamByte lslw_final_ram_20[] = {
		{ .addr = 0x8789b8, .byte = 0xe3 },
		{ .addr = 0x8789b9, .byte = 0xd2 },
		{ .addr = 0x8789ba, .byte = 0x66 },
		{ .addr = 0x8789bb, .byte = 0x09 },
		{ .addr = 0x144b0c, .byte = 0x22 },
		{ .addr = 0x144b0d, .byte = 0x12 },
		{ .addr = 0x8789bc, .byte = 0x88 },
		{ .addr = 0x8789bd, .byte = 0x17 }
};

static const SST_Transaction lslw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1329932, .data = 4361, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8882620, .data = 34839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1329932, .data = 8722, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lslw_initial_ram_21[] = {
		{ .addr = 0x200e0c, .byte = 0xef },
		{ .addr = 0x200e0d, .byte = 0x6c },
		{ .addr = 0x200e0e, .byte = 0x5c },
		{ .addr = 0x200e0f, .byte = 0x9e },
		{ .addr = 0x200e10, .byte = 0x5f },
		{ .addr = 0x200e11, .byte = 0x75 }
};

static const SST_RamByte lslw_final_ram_21[] = {
		{ .addr = 0x200e0c, .byte = 0xef },
		{ .addr = 0x200e0d, .byte = 0x6c },
		{ .addr = 0x200e0e, .byte = 0x5c },
		{ .addr = 0x200e0f, .byte = 0x9e },
		{ .addr = 0x200e10, .byte = 0x5f },
		{ .addr = 0x200e11, .byte = 0x75 }
};

static const SST_Transaction lslw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2100752, .data = 24437, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 118 },
};

static const SST_RamByte lslw_initial_ram_22[] = {
		{ .addr = 0x8db5a4, .byte = 0xe5 },
		{ .addr = 0x8db5a5, .byte = 0x4b },
		{ .addr = 0x8db5a6, .byte = 0x24 },
		{ .addr = 0x8db5a7, .byte = 0xd0 },
		{ .addr = 0x8db5a8, .byte = 0x30 },
		{ .addr = 0x8db5a9, .byte = 0x2e }
};

static const SST_RamByte lslw_final_ram_22[] = {
		{ .addr = 0x8db5a4, .byte = 0xe5 },
		{ .addr = 0x8db5a5, .byte = 0x4b },
		{ .addr = 0x8db5a6, .byte = 0x24 },
		{ .addr = 0x8db5a7, .byte = 0xd0 },
		{ .addr = 0x8db5a8, .byte = 0x30 },
		{ .addr = 0x8db5a9, .byte = 0x2e }
};

static const SST_Transaction lslw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9287080, .data = 12334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lslw_initial_ram_23[] = {
		{ .addr = 0x85dde0, .byte = 0xe9 },
		{ .addr = 0x85dde1, .byte = 0x49 },
		{ .addr = 0x85dde2, .byte = 0xfc },
		{ .addr = 0x85dde3, .byte = 0xca },
		{ .addr = 0x85dde4, .byte = 0x2d },
		{ .addr = 0x85dde5, .byte = 0x7e }
};

static const SST_RamByte lslw_final_ram_23[] = {
		{ .addr = 0x85dde0, .byte = 0xe9 },
		{ .addr = 0x85dde1, .byte = 0x49 },
		{ .addr = 0x85dde2, .byte = 0xfc },
		{ .addr = 0x85dde3, .byte = 0xca },
		{ .addr = 0x85dde4, .byte = 0x2d },
		{ .addr = 0x85dde5, .byte = 0x7e }
};

static const SST_Transaction lslw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8773092, .data = 11646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lslw_initial_ram_24[] = {
		{ .addr = 0xd704e2, .byte = 0xeb },
		{ .addr = 0xd704e3, .byte = 0x49 },
		{ .addr = 0xd704e4, .byte = 0xe8 },
		{ .addr = 0xd704e5, .byte = 0x2a },
		{ .addr = 0xd704e6, .byte = 0x8d },
		{ .addr = 0xd704e7, .byte = 0x49 }
};

static const SST_RamByte lslw_final_ram_24[] = {
		{ .addr = 0xd704e2, .byte = 0xeb },
		{ .addr = 0xd704e3, .byte = 0x49 },
		{ .addr = 0xd704e4, .byte = 0xe8 },
		{ .addr = 0xd704e5, .byte = 0x2a },
		{ .addr = 0xd704e6, .byte = 0x8d },
		{ .addr = 0xd704e7, .byte = 0x49 }
};

static const SST_Transaction lslw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14091494, .data = 36169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lslw_initial_ram_25[] = {
		{ .addr = 0x4c5852, .byte = 0xe5 },
		{ .addr = 0x4c5853, .byte = 0x6a },
		{ .addr = 0x4c5854, .byte = 0xa8 },
		{ .addr = 0x4c5855, .byte = 0x1c },
		{ .addr = 0x4c5856, .byte = 0x09 },
		{ .addr = 0x4c5857, .byte = 0xb9 }
};

static const SST_RamByte lslw_final_ram_25[] = {
		{ .addr = 0x4c5852, .byte = 0xe5 },
		{ .addr = 0x4c5853, .byte = 0x6a },
		{ .addr = 0x4c5854, .byte = 0xa8 },
		{ .addr = 0x4c5855, .byte = 0x1c },
		{ .addr = 0x4c5856, .byte = 0x09 },
		{ .addr = 0x4c5857, .byte = 0xb9 }
};

static const SST_Transaction lslw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5003350, .data = 2489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 66 },
};

static const SST_RamByte lslw_initial_ram_26[] = {
		{ .addr = 0x74c536, .byte = 0xe1 },
		{ .addr = 0x74c537, .byte = 0x6f },
		{ .addr = 0x74c538, .byte = 0xf9 },
		{ .addr = 0x74c539, .byte = 0x4a },
		{ .addr = 0x74c53a, .byte = 0x3c },
		{ .addr = 0x74c53b, .byte = 0x5d }
};

static const SST_RamByte lslw_final_ram_26[] = {
		{ .addr = 0x74c536, .byte = 0xe1 },
		{ .addr = 0x74c537, .byte = 0x6f },
		{ .addr = 0x74c538, .byte = 0xf9 },
		{ .addr = 0x74c539, .byte = 0x4a },
		{ .addr = 0x74c53a, .byte = 0x3c },
		{ .addr = 0x74c53b, .byte = 0x5d }
};

static const SST_Transaction lslw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7652666, .data = 15453, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte lslw_initial_ram_27[] = {
		{ .addr = 0xd41c1c, .byte = 0xe3 },
		{ .addr = 0xd41c1d, .byte = 0xf7 },
		{ .addr = 0xd41c1e, .byte = 0xae },
		{ .addr = 0xd41c1f, .byte = 0x5d },
		{ .addr = 0xd41c20, .byte = 0x33 },
		{ .addr = 0xd41c21, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x7e },
		{ .addr = 0x00000f, .byte = 0x30 },
		{ .addr = 0x447e30, .byte = 0x88 },
		{ .addr = 0x447e31, .byte = 0x3a },
		{ .addr = 0x447e32, .byte = 0xcc },
		{ .addr = 0x447e33, .byte = 0x0b }
};

static const SST_RamByte lslw_final_ram_27[] = {
		{ .addr = 0xd41c1c, .byte = 0xe3 },
		{ .addr = 0xd41c1d, .byte = 0xf7 },
		{ .addr = 0xd41c1e, .byte = 0xae },
		{ .addr = 0xd41c1f, .byte = 0x5d },
		{ .addr = 0xd41c20, .byte = 0x33 },
		{ .addr = 0xd41c21, .byte = 0x53 },
		{ .addr = 0xe77334, .byte = 0x1c },
		{ .addr = 0xe77335, .byte = 0x1e },
		{ .addr = 0xe77330, .byte = 0x06 },
		{ .addr = 0xe77331, .byte = 0x1e },
		{ .addr = 0xe77332, .byte = 0x00 },
		{ .addr = 0xe77333, .byte = 0xd4 },
		{ .addr = 0xe7732e, .byte = 0xe3 },
		{ .addr = 0xe7732f, .byte = 0xf7 },
		{ .addr = 0xe7732c, .byte = 0x93 },
		{ .addr = 0xe7732d, .byte = 0x35 },
		{ .addr = 0xe77328, .byte = 0xe3 },
		{ .addr = 0xe77329, .byte = 0xf1 },
		{ .addr = 0xe7732a, .byte = 0x9a },
		{ .addr = 0xe7732b, .byte = 0x93 },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x7e },
		{ .addr = 0x00000f, .byte = 0x30 },
		{ .addr = 0x447e30, .byte = 0x88 },
		{ .addr = 0x447e31, .byte = 0x3a },
		{ .addr = 0x447e32, .byte = 0xcc },
		{ .addr = 0x447e33, .byte = 0x0b }
};

static const SST_Transaction lslw_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13900832, .data = 13139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9671476, .data = 26926, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15168308, .data = 7198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15168304, .data = 1566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15168306, .data = 212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15168302, .data = 58359, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15168300, .data = 37685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15168296, .data = 58353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15168298, .data = 39571, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4488752, .data = 34874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4488754, .data = 52235, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lslw_initial_ram_28[] = {
		{ .addr = 0x637142, .byte = 0xe3 },
		{ .addr = 0x637143, .byte = 0xdb },
		{ .addr = 0x637144, .byte = 0xce },
		{ .addr = 0x637145, .byte = 0xc1 },
		{ .addr = 0xbb9cb2, .byte = 0x0d },
		{ .addr = 0xbb9cb3, .byte = 0xd3 },
		{ .addr = 0x637146, .byte = 0x61 },
		{ .addr = 0x637147, .byte = 0x37 }
};

static const SST_RamByte lslw_final_ram_28[] = {
		{ .addr = 0x637142, .byte = 0xe3 },
		{ .addr = 0x637143, .byte = 0xdb },
		{ .addr = 0x637144, .byte = 0xce },
		{ .addr = 0x637145, .byte = 0xc1 },
		{ .addr = 0xbb9cb2, .byte = 0x1b },
		{ .addr = 0xbb9cb3, .byte = 0xa6 },
		{ .addr = 0x637146, .byte = 0x61 },
		{ .addr = 0x637147, .byte = 0x37 }
};

static const SST_Transaction lslw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12295346, .data = 3539, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6517062, .data = 24887, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12295346, .data = 7078, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lslw_initial_ram_29[] = {
		{ .addr = 0xf0aebc, .byte = 0xe3 },
		{ .addr = 0xf0aebd, .byte = 0xd9 },
		{ .addr = 0xf0aebe, .byte = 0xdf },
		{ .addr = 0xf0aebf, .byte = 0x65 },
		{ .addr = 0x7485e4, .byte = 0x09 },
		{ .addr = 0x7485e5, .byte = 0xfb },
		{ .addr = 0xf0aec0, .byte = 0xd4 },
		{ .addr = 0xf0aec1, .byte = 0x33 }
};

static const SST_RamByte lslw_final_ram_29[] = {
		{ .addr = 0xf0aebc, .byte = 0xe3 },
		{ .addr = 0xf0aebd, .byte = 0xd9 },
		{ .addr = 0xf0aebe, .byte = 0xdf },
		{ .addr = 0xf0aebf, .byte = 0x65 },
		{ .addr = 0x7485e4, .byte = 0x13 },
		{ .addr = 0x7485e5, .byte = 0xf6 },
		{ .addr = 0xf0aec0, .byte = 0xd4 },
		{ .addr = 0xf0aec1, .byte = 0x33 }
};

static const SST_Transaction lslw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7636452, .data = 2555, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15773376, .data = 54323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7636452, .data = 5110, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lslw_initial_ram_30[] = {
		{ .addr = 0x1abb90, .byte = 0xe3 },
		{ .addr = 0x1abb91, .byte = 0x4f },
		{ .addr = 0x1abb92, .byte = 0x1f },
		{ .addr = 0x1abb93, .byte = 0xb6 },
		{ .addr = 0x1abb94, .byte = 0xb7 },
		{ .addr = 0x1abb95, .byte = 0x86 }
};

static const SST_RamByte lslw_final_ram_30[] = {
		{ .addr = 0x1abb90, .byte = 0xe3 },
		{ .addr = 0x1abb91, .byte = 0x4f },
		{ .addr = 0x1abb92, .byte = 0x1f },
		{ .addr = 0x1abb93, .byte = 0xb6 },
		{ .addr = 0x1abb94, .byte = 0xb7 },
		{ .addr = 0x1abb95, .byte = 0x86 }
};

static const SST_Transaction lslw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1751956, .data = 46982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte lslw_initial_ram_31[] = {
		{ .addr = 0xbee6da, .byte = 0xe3 },
		{ .addr = 0xbee6db, .byte = 0xf7 },
		{ .addr = 0xbee6dc, .byte = 0xed },
		{ .addr = 0xbee6dd, .byte = 0x9f },
		{ .addr = 0xbee6de, .byte = 0x77 },
		{ .addr = 0xbee6df, .byte = 0x92 },
		{ .addr = 0xf36f0c, .byte = 0x39 },
		{ .addr = 0xf36f0d, .byte = 0x99 },
		{ .addr = 0xbee6e0, .byte = 0x57 },
		{ .addr = 0xbee6e1, .byte = 0x0c }
};

static const SST_RamByte lslw_final_ram_31[] = {
		{ .addr = 0xbee6da, .byte = 0xe3 },
		{ .addr = 0xbee6db, .byte = 0xf7 },
		{ .addr = 0xbee6dc, .byte = 0xed },
		{ .addr = 0xbee6dd, .byte = 0x9f },
		{ .addr = 0xbee6de, .byte = 0x77 },
		{ .addr = 0xbee6df, .byte = 0x92 },
		{ .addr = 0xf36f0c, .byte = 0x73 },
		{ .addr = 0xf36f0d, .byte = 0x32 },
		{ .addr = 0xbee6e0, .byte = 0x57 },
		{ .addr = 0xbee6e1, .byte = 0x0c }
};

static const SST_Transaction lslw_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12510942, .data = 30610, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15953676, .data = 14745, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12510944, .data = 22284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15953676, .data = 29490, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase lslw[] = {
	{
		.name = "000 LSL.w 1, D3 e34b",
		.initial = {
			.regs = {
				1118836171, 693315389, 2991842178, 4270755532, 1362240818, 3948461450, 418543815, 3197610565, 1549106042, 2223112240, 3227626001, 2278141428, 2054966790, 2989827775, 1172029541, 10416842, 5916144, 8449, 7046594
			},
			.prefetch0 = 58187,
			.prefetch1 = 55628,
			.ram = lslw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1118836171, 693315389, 2991842178, 4270726552, 1362240818, 3948461450, 418543815, 3197610565, 1549106042, 2223112240, 3227626001, 2278141428, 2054966790, 2989827775, 1172029541, 10416842, 5916144, 8465, 7046596
			},
			.prefetch0 = 55628,
			.prefetch1 = 7795,
			.ram = lslw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_0,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "001 LSL.w D6, D4 ed6c",
		.initial = {
			.regs = {
				805976432, 1497926840, 2722619015, 3262126935, 3226701660, 2727857619, 1694870765, 303732879, 4222040167, 3553239151, 1394185546, 2699442032, 2933082842, 3696520204, 3073891524, 5972460, 3385360, 539, 1354848
			},
			.prefetch0 = 60780,
			.prefetch1 = 39363,
			.ram = lslw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				805976432, 1497926840, 2722619015, 3262126935, 3226664960, 2727857619, 1694870765, 303732879, 4222040167, 3553239151, 1394185546, 2699442032, 2933082842, 3696520204, 3073891524, 5972460, 3385360, 516, 1354850
			},
			.prefetch0 = 39363,
			.prefetch1 = 1461,
			.ram = lslw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_1,
		.transactions_len = 2,
		.lenght = 96,
	},
	{
		.name = "002 LSL.w D7, D0 ef68",
		.initial = {
			.regs = {
				3265606898, 3111793228, 409191766, 907256413, 866050745, 1600379373, 1329528403, 2962185486, 2898939925, 846798193, 4215616978, 3412123612, 2814507011, 2025375941, 424447044, 2227514, 7080188, 41491, 10811656
			},
			.prefetch0 = 61288,
			.prefetch1 = 14898,
			.ram = lslw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3265626112, 3111793228, 409191766, 907256413, 866050745, 1600379373, 1329528403, 2962185486, 2898939925, 846798193, 4215616978, 3412123612, 2814507011, 2025375941, 424447044, 2227514, 7080188, 41480, 10811658
			},
			.prefetch0 = 14898,
			.prefetch1 = 32838,
			.ram = lslw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_2,
		.transactions_len = 2,
		.lenght = 34,
	},
	{
		.name = "003 LSL.w D1, D0 e368",
		.initial = {
			.regs = {
				4070099568, 1377563104, 3587906261, 1245517213, 2315166258, 213344933, 857531261, 475858541, 2673931033, 678963348, 3758980022, 398280254, 124817625, 3503534771, 2310049727, 6902152, 15995324, 34074, 6455074
			},
			.prefetch0 = 58216,
			.prefetch1 = 40068,
			.ram = lslw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4070047744, 1377563104, 3587906261, 1245517213, 2315166258, 213344933, 857531261, 475858541, 2673931033, 678963348, 3758980022, 398280254, 124817625, 3503534771, 2310049727, 6902152, 15995324, 34052, 6455076
			},
			.prefetch0 = 40068,
			.prefetch1 = 58887,
			.ram = lslw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_3,
		.transactions_len = 2,
		.lenght = 70,
	},
	{
		.name = "004 LSL.w D6, D4 ed6c",
		.initial = {
			.regs = {
				2861756523, 716871813, 320164231, 848960990, 4129207883, 2992353711, 3551063026, 4266666765, 4231438532, 2290825717, 2820908797, 1706212093, 1023616293, 3498842857, 310353298, 963310, 10087242, 34335, 13374400
			},
			.prefetch0 = 60780,
			.prefetch1 = 26429,
			.ram = lslw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2861756523, 716871813, 320164231, 848960990, 4129161216, 2992353711, 3551063026, 4266666765, 4231438532, 2290825717, 2820908797, 1706212093, 1023616293, 3498842857, 310353298, 963310, 10087242, 34308, 13374402
			},
			.prefetch0 = 26429,
			.prefetch1 = 9538,
			.ram = lslw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_4,
		.transactions_len = 2,
		.lenght = 106,
	},
	{
		.name = "005 LSL.w D5, D0 eb68",
		.initial = {
			.regs = {
				3734714337, 3341558470, 3788033414, 2073290148, 3435967519, 3657578045, 1261291313, 1901703936, 3860944394, 3726827019, 2146314266, 2692613568, 575856432, 2315755459, 1517354946, 464792, 10546004, 8222, 1182798
			},
			.prefetch0 = 60264,
			.prefetch1 = 37687,
			.ram = lslw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3734700032, 3341558470, 3788033414, 2073290148, 3435967519, 3657578045, 1261291313, 1901703936, 3860944394, 3726827019, 2146314266, 2692613568, 575856432, 2315755459, 1517354946, 464792, 10546004, 8196, 1182800
			},
			.prefetch0 = 37687,
			.prefetch1 = 35893,
			.ram = lslw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_5,
		.transactions_len = 2,
		.lenght = 128,
	},
	{
		.name = "006 LSL.w 6, D6 ed4e",
		.initial = {
			.regs = {
				2284606585, 981143158, 3275827054, 3358218753, 2898508917, 941482243, 3601270521, 3010447887, 3032656560, 2515690397, 2817988898, 1044945987, 4036643096, 1475642224, 546650745, 14512322, 9486256, 8724, 2062158
			},
			.prefetch0 = 60750,
			.prefetch1 = 56393,
			.ram = lslw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2284606585, 981143158, 3275827054, 3358218753, 2898508917, 941482243, 3601317440, 3010447887, 3032656560, 2515690397, 2817988898, 1044945987, 4036643096, 1475642224, 546650745, 14512322, 9486256, 8729, 2062160
			},
			.prefetch0 = 56393,
			.prefetch1 = 29609,
			.ram = lslw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_6,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "007 LSL.w (d16, A6) e3ee",
		.initial = {
			.regs = {
				776136203, 510755883, 1728231972, 3465326456, 1761565855, 43007322, 2648625900, 120087051, 2125966282, 871663274, 74604260, 1086283344, 4139276003, 1891448277, 1668481389, 6568030, 1282750, 34304, 10781148
			},
			.prefetch0 = 58350,
			.prefetch1 = 9667,
			.ram = lslw_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				776136203, 510755883, 1728231972, 3465326456, 1761565855, 43007322, 2648625900, 120087051, 2125966282, 871663274, 74604260, 1086283344, 4139276003, 1891448277, 1668481389, 6568030, 1282750, 34312, 10781152
			},
			.prefetch0 = 51286,
			.prefetch1 = 39457,
			.ram = lslw_final_ram_7,
			.ram_len = 10,
		},
		.transactions = lslw_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 LSL.w 2, D6 e54e",
		.initial = {
			.regs = {
				2404122312, 1647854490, 3364180978, 849640381, 1151526201, 2644078929, 1367723959, 1125895068, 1409411698, 2104794930, 2293111302, 340166203, 1464178247, 2631343098, 3794641841, 15482996, 11944354, 260, 8457570
			},
			.prefetch0 = 58702,
			.prefetch1 = 6557,
			.ram = lslw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2404122312, 1647854490, 3364180978, 849640381, 1151526201, 2644078929, 1367686876, 1125895068, 1409411698, 2104794930, 2293111302, 340166203, 1464178247, 2631343098, 3794641841, 15482996, 11944354, 273, 8457572
			},
			.prefetch0 = 6557,
			.prefetch1 = 35960,
			.ram = lslw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_8,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "009 LSL.w 3, D4 e74c",
		.initial = {
			.regs = {
				3920079099, 2743264172, 3917404910, 1286165605, 119084618, 3653505094, 2700171552, 4115175733, 2564911542, 843215974, 1292557347, 367624003, 1709005723, 1158666951, 2347572527, 11076810, 16565186, 41502, 6679610
			},
			.prefetch0 = 59212,
			.prefetch1 = 59820,
			.ram = lslw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3920079099, 2743264172, 3917404910, 1286165605, 119124560, 3653505094, 2700171552, 4115175733, 2564911542, 843215974, 1292557347, 367624003, 1709005723, 1158666951, 2347572527, 11076810, 16565186, 41480, 6679612
			},
			.prefetch0 = 59820,
			.prefetch1 = 6207,
			.ram = lslw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_9,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "010 LSL.w D1, D0 e368",
		.initial = {
			.regs = {
				1115346053, 2392748365, 2507072480, 4170393855, 120091008, 1012278444, 775150302, 3614381865, 238619925, 219646789, 77138374, 624522930, 1840147102, 2508574025, 1566282948, 2701360, 2655558, 41482, 713400
			},
			.prefetch0 = 58216,
			.prefetch1 = 25053,
			.ram = lslw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1115332608, 2392748365, 2507072480, 4170393855, 120091008, 1012278444, 775150302, 3614381865, 238619925, 219646789, 77138374, 624522930, 1840147102, 2508574025, 1566282948, 2701360, 2655558, 41480, 713402
			},
			.prefetch0 = 25053,
			.prefetch1 = 5386,
			.ram = lslw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_10,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "011 LSL.w 4, D1 e949",
		.initial = {
			.regs = {
				3002645520, 4005948398, 3865213503, 1002543004, 1159651800, 2976123382, 1757256095, 3451362490, 1431319023, 4117020492, 2516214762, 4094281319, 4070399739, 3684391785, 2754934592, 3982564, 3107716, 1047, 7088944
			},
			.prefetch0 = 59721,
			.prefetch1 = 10311,
			.ram = lslw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3002645520, 4005936864, 3865213503, 1002543004, 1159651800, 2976123382, 1757256095, 3451362490, 1431319023, 4117020492, 2516214762, 4094281319, 4070399739, 3684391785, 2754934592, 3982564, 3107716, 1032, 7088946
			},
			.prefetch0 = 10311,
			.prefetch1 = 63676,
			.ram = lslw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_11,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "012 LSL.w 5, D0 eb48",
		.initial = {
			.regs = {
				1242608864, 1573904894, 158489119, 621477422, 2009817686, 1719645412, 2469114109, 622926125, 1985721282, 1474551160, 1763291627, 3966064030, 3415910855, 3896323028, 1188067665, 2224246, 12345976, 34572, 14781282
			},
			.prefetch0 = 60232,
			.prefetch1 = 768,
			.ram = lslw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1242602496, 1573904894, 158489119, 621477422, 2009817686, 1719645412, 2469114109, 622926125, 1985721282, 1474551160, 1763291627, 3966064030, 3415910855, 3896323028, 1188067665, 2224246, 12345976, 34568, 14781284
			},
			.prefetch0 = 768,
			.prefetch1 = 11378,
			.ram = lslw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_12,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "013 LSL.w D5, D4 eb6c",
		.initial = {
			.regs = {
				3066018378, 2036240950, 2326557168, 4054211738, 1997357860, 950726762, 275188800, 1180405744, 4152136714, 1234004547, 1250332962, 3414173750, 2797705307, 1343205444, 3844593195, 7638384, 13887340, 8977, 6802134
			},
			.prefetch0 = 60268,
			.prefetch1 = 15448,
			.ram = lslw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3066018378, 2036240950, 2326557168, 4054211738, 1997340672, 950726762, 275188800, 1180405744, 4152136714, 1234004547, 1250332962, 3414173750, 2797705307, 1343205444, 3844593195, 7638384, 13887340, 8964, 6802136
			},
			.prefetch0 = 15448,
			.prefetch1 = 21226,
			.ram = lslw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_13,
		.transactions_len = 2,
		.lenght = 90,
	},
	{
		.name = "014 LSL.w 6, D3 ed4b",
		.initial = {
			.regs = {
				1748765252, 2322864624, 2300548310, 2338693113, 1344040019, 1854233656, 1565070500, 1942711913, 4082303638, 331312775, 1059575912, 356971690, 3457049124, 3887498468, 2283806450, 14018384, 11991024, 8199, 1112320
			},
			.prefetch0 = 60747,
			.prefetch1 = 35826,
			.ram = lslw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1748765252, 2322864624, 2300548310, 2338717248, 1344040019, 1854233656, 1565070500, 1942711913, 4082303638, 331312775, 1059575912, 356971690, 3457049124, 3887498468, 2283806450, 14018384, 11991024, 8217, 1112322
			},
			.prefetch0 = 35826,
			.prefetch1 = 223,
			.ram = lslw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_14,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "015 LSL.w (d8, A2, Xn) e3f2",
		.initial = {
			.regs = {
				4129097779, 4061040606, 699984534, 3025242296, 1789239689, 606845470, 757492478, 942361199, 3815582631, 1884310618, 318133138, 1207799690, 4003986967, 143108073, 2776124949, 12927208, 8491050, 41734, 6087950
			},
			.prefetch0 = 58354,
			.prefetch1 = 63061,
			.ram = lslw_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4129097779, 4061040606, 699984534, 3025242296, 1789239689, 606845470, 757492478, 942361199, 3815582631, 1884310618, 318133138, 1207799690, 4003986967, 143108073, 2776124949, 12927208, 8491036, 8966, 2489884082
			},
			.prefetch0 = 58266,
			.prefetch1 = 14928,
			.ram = lslw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = lslw_transactions_15,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "016 LSL.w D4, D5 e96d",
		.initial = {
			.regs = {
				1522300134, 3588836107, 1693136423, 3050087609, 3535728521, 2419949049, 2014562244, 344911645, 3915056244, 1672419467, 3832022496, 3612331383, 3585787661, 2313512000, 1911503296, 10387254, 11349058, 42496, 3847352
			},
			.prefetch0 = 59757,
			.prefetch1 = 46524,
			.ram = lslw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1522300134, 3588836107, 1693136423, 3050087609, 3535728521, 2419978752, 2014562244, 344911645, 3915056244, 1672419467, 3832022496, 3612331383, 3585787661, 2313512000, 1911503296, 10387254, 11349058, 42521, 3847354
			},
			.prefetch0 = 46524,
			.prefetch1 = 3123,
			.ram = lslw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_16,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "017 LSL.w 8, D6 e14e",
		.initial = {
			.regs = {
				2481627928, 1520548911, 3984677959, 3349591438, 1189093059, 474658747, 1786302704, 2098590238, 324968613, 3176239983, 3624786448, 3100616036, 525634268, 2818169508, 2133370319, 3931376, 7457444, 1297, 8106738
			},
			.prefetch0 = 57678,
			.prefetch1 = 11804,
			.ram = lslw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2481627928, 1520548911, 3984677959, 3349591438, 1189093059, 474658747, 1786310656, 2098590238, 324968613, 3176239983, 3624786448, 3100616036, 525634268, 2818169508, 2133370319, 3931376, 7457444, 1288, 8106740
			},
			.prefetch0 = 11804,
			.prefetch1 = 47448,
			.ram = lslw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_17,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "018 LSL.w 5, D1 eb49",
		.initial = {
			.regs = {
				1392169676, 393629065, 3889815001, 737185198, 3697274570, 1185482436, 3960843469, 2475344137, 567925449, 1069842317, 4217385063, 3624510198, 1928397963, 960061100, 2519240606, 4430212, 3939172, 21, 10750630
			},
			.prefetch0 = 60233,
			.prefetch1 = 16707,
			.ram = lslw_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1392169676, 393654560, 3889815001, 737185198, 3697274570, 1185482436, 3960843469, 2475344137, 567925449, 1069842317, 4217385063, 3624510198, 1928397963, 960061100, 2519240606, 4430212, 3939172, 25, 10750632
			},
			.prefetch0 = 16707,
			.prefetch1 = 1693,
			.ram = lslw_final_ram_18,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_18,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "019 LSL.w D2, D2 e56a",
		.initial = {
			.regs = {
				1605258541, 820385775, 3771874277, 3462011702, 1997976685, 1877070516, 489884250, 3234172062, 3927943907, 4091499343, 4090303830, 2771113022, 1161879243, 85933718, 3576841280, 15289034, 975212, 41998, 3559796
			},
			.prefetch0 = 58730,
			.prefetch1 = 2339,
			.ram = lslw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1605258541, 820385775, 3771858944, 3462011702, 1997976685, 1877070516, 489884250, 3234172062, 3927943907, 4091499343, 4090303830, 2771113022, 1161879243, 85933718, 3576841280, 15289034, 975212, 41988, 3559798
			},
			.prefetch0 = 2339,
			.prefetch1 = 27846,
			.ram = lslw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_19,
		.transactions_len = 2,
		.lenght = 80,
	},
	{
		.name = "020 LSL.w (A2) e3d2",
		.initial = {
			.regs = {
				4210588117, 1243630584, 197731537, 2728178050, 130741180, 2916122143, 2531836157, 3303046930, 1064096766, 2469544746, 856967948, 243592152, 3655337093, 4223981113, 3244088048, 16409172, 8979208, 1280, 8882620
			},
			.prefetch0 = 58322,
			.prefetch1 = 26121,
			.ram = lslw_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4210588117, 1243630584, 197731537, 2728178050, 130741180, 2916122143, 2531836157, 3303046930, 1064096766, 2469544746, 856967948, 243592152, 3655337093, 4223981113, 3244088048, 16409172, 8979208, 1280, 8882622
			},
			.prefetch0 = 26121,
			.prefetch1 = 34839,
			.ram = lslw_final_ram_20,
			.ram_len = 8,
		},
		.transactions = lslw_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 LSL.w D7, D4 ef6c",
		.initial = {
			.regs = {
				3542210769, 606217763, 304156025, 3006989678, 3853629815, 41424079, 2373604327, 3687736442, 2586655565, 1527673386, 872258512, 828504236, 503237633, 3786141776, 3398282374, 15127000, 15435574, 40987, 2100752
			},
			.prefetch0 = 61292,
			.prefetch1 = 23710,
			.ram = lslw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3542210769, 606217763, 304156025, 3006989678, 3853582336, 41424079, 2373604327, 3687736442, 2586655565, 1527673386, 872258512, 828504236, 503237633, 3786141776, 3398282374, 15127000, 15435574, 40964, 2100754
			},
			.prefetch0 = 23710,
			.prefetch1 = 24437,
			.ram = lslw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_21,
		.transactions_len = 2,
		.lenght = 122,
	},
	{
		.name = "022 LSL.w 2, D3 e54b",
		.initial = {
			.regs = {
				1315811489, 643298729, 663904771, 3871195993, 3822057727, 4055096250, 1079315943, 3231454935, 3296129724, 3470051248, 122486575, 2555950635, 3195423714, 4121451514, 3785884047, 14307850, 16676226, 9241, 9287080
			},
			.prefetch0 = 58699,
			.prefetch1 = 9424,
			.ram = lslw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1315811489, 643298729, 663904771, 3871149412, 3822057727, 4055096250, 1079315943, 3231454935, 3296129724, 3470051248, 122486575, 2555950635, 3195423714, 4121451514, 3785884047, 14307850, 16676226, 9233, 9287082
			},
			.prefetch0 = 9424,
			.prefetch1 = 12334,
			.ram = lslw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_22,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "023 LSL.w 4, D1 e949",
		.initial = {
			.regs = {
				1116748972, 1900023206, 3476362752, 3853375602, 1755778878, 2256296871, 3453349298, 3516059471, 504295328, 419646670, 4127204077, 3143482140, 3964828332, 2554303673, 1240597140, 8178884, 1226892, 41732, 8773092
			},
			.prefetch0 = 59721,
			.prefetch1 = 64714,
			.ram = lslw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1116748972, 1900075616, 3476362752, 3853375602, 1755778878, 2256296871, 3453349298, 3516059471, 504295328, 419646670, 4127204077, 3143482140, 3964828332, 2554303673, 1240597140, 8178884, 1226892, 41736, 8773094
			},
			.prefetch0 = 64714,
			.prefetch1 = 11646,
			.ram = lslw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_23,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "024 LSL.w 5, D1 eb49",
		.initial = {
			.regs = {
				3654163652, 1526255946, 287733543, 1112147998, 1961747333, 3761186221, 1587024966, 765740099, 1217413742, 931617610, 1834289395, 19102737, 3107149209, 958524727, 2720464642, 14508248, 8409140, 8964, 14091494
			},
			.prefetch0 = 60233,
			.prefetch1 = 59434,
			.ram = lslw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3654163652, 1526212928, 287733543, 1112147998, 1961747333, 3761186221, 1587024966, 765740099, 1217413742, 931617610, 1834289395, 19102737, 3107149209, 958524727, 2720464642, 14508248, 8409140, 8960, 14091496
			},
			.prefetch0 = 59434,
			.prefetch1 = 36169,
			.ram = lslw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_24,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "025 LSL.w D2, D2 e56a",
		.initial = {
			.regs = {
				157499216, 2451914641, 3122766752, 1717076794, 2308858731, 3951533549, 1706074209, 2100925524, 2332671539, 3720727056, 3399456146, 4148802172, 1924919589, 459940424, 2687905623, 634294, 12077096, 42015, 5003350
			},
			.prefetch0 = 58730,
			.prefetch1 = 43036,
			.ram = lslw_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				157499216, 2451914641, 3122724864, 1717076794, 2308858731, 3951533549, 1706074209, 2100925524, 2332671539, 3720727056, 3399456146, 4148802172, 1924919589, 459940424, 2687905623, 634294, 12077096, 41988, 5003352
			},
			.prefetch0 = 43036,
			.prefetch1 = 2489,
			.ram = lslw_final_ram_25,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_25,
		.transactions_len = 2,
		.lenght = 70,
	},
	{
		.name = "026 LSL.w D0, D7 e16f",
		.initial = {
			.regs = {
				32945904, 342603587, 784533708, 3300713125, 1679655599, 2531726857, 2521628804, 1472059950, 1124394487, 529751956, 3852042467, 1095346939, 1435059857, 2403530954, 4094325897, 10708008, 2880110, 33566, 7652666
			},
			.prefetch0 = 57711,
			.prefetch1 = 63818,
			.ram = lslw_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				32945904, 342603587, 784533708, 3300713125, 1679655599, 2531726857, 2521628804, 1472004096, 1124394487, 529751956, 3852042467, 1095346939, 1435059857, 2403530954, 4094325897, 10708008, 2880110, 33540, 7652668
			},
			.prefetch0 = 63818,
			.prefetch1 = 15453,
			.ram = lslw_final_ram_26,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_26,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "027 LSL.w (d8, A7, Xn) e3f7",
		.initial = {
			.regs = {
				2322060267, 1354847361, 2192366221, 573895762, 2818398547, 1160220558, 598311301, 1890736388, 2355486312, 3708840792, 2589235400, 3954433182, 861947954, 2764766920, 2630934630, 4127248, 15168310, 1566, 13900832
			},
			.prefetch0 = 58359,
			.prefetch1 = 44637,
			.ram = lslw_initial_ram_27,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2322060267, 1354847361, 2192366221, 573895762, 2818398547, 1160220558, 598311301, 1890736388, 2355486312, 3708840792, 2589235400, 3954433182, 861947954, 2764766920, 2630934630, 4127248, 15168296, 9758, 3544481332
			},
			.prefetch0 = 34874,
			.prefetch1 = 52235,
			.ram = lslw_final_ram_27,
			.ram_len = 28,
		},
		.transactions = lslw_transactions_27,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "028 LSL.w (A3)+ e3db",
		.initial = {
			.regs = {
				214873971, 281675986, 4235819805, 2626020756, 1903314727, 32565671, 2958966000, 719579928, 1899915485, 715451360, 3407486061, 3015417010, 3513412023, 1833619746, 2001103791, 10492222, 6311660, 285, 6517062
			},
			.prefetch0 = 58331,
			.prefetch1 = 52929,
			.ram = lslw_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				214873971, 281675986, 4235819805, 2626020756, 1903314727, 32565671, 2958966000, 719579928, 1899915485, 715451360, 3407486061, 3015417012, 3513412023, 1833619746, 2001103791, 10492222, 6311660, 256, 6517064
			},
			.prefetch0 = 52929,
			.prefetch1 = 24887,
			.ram = lslw_final_ram_28,
			.ram_len = 8,
		},
		.transactions = lslw_transactions_28,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "029 LSL.w (A1)+ e3d9",
		.initial = {
			.regs = {
				698546177, 2324463760, 8622013, 3957879045, 3676856886, 584018517, 2715866856, 2336196703, 912640750, 1165264356, 309772026, 1925955736, 811276735, 2224021881, 97414219, 6853740, 5464816, 33567, 15773376
			},
			.prefetch0 = 58329,
			.prefetch1 = 57189,
			.ram = lslw_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				698546177, 2324463760, 8622013, 3957879045, 3676856886, 584018517, 2715866856, 2336196703, 912640750, 1165264358, 309772026, 1925955736, 811276735, 2224021881, 97414219, 6853740, 5464816, 33536, 15773378
			},
			.prefetch0 = 57189,
			.prefetch1 = 54323,
			.ram = lslw_final_ram_29,
			.ram_len = 8,
		},
		.transactions = lslw_transactions_29,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "030 LSL.w 1, D7 e34f",
		.initial = {
			.regs = {
				2263370032, 2744444126, 49468311, 762299473, 1825382943, 1245351313, 4014817653, 2176282081, 2258995526, 2976620692, 542754295, 3606121638, 1144449202, 707663227, 142933023, 5151410, 7438714, 8213, 1751956
			},
			.prefetch0 = 58191,
			.prefetch1 = 8118,
			.ram = lslw_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2263370032, 2744444126, 49468311, 762299473, 1825382943, 1245351313, 4014817653, 2176310210, 2258995526, 2976620692, 542754295, 3606121638, 1144449202, 707663227, 142933023, 5151410, 7438714, 8200, 1751958
			},
			.prefetch0 = 8118,
			.prefetch1 = 46982,
			.ram = lslw_final_ram_30,
			.ram_len = 6,
		},
		.transactions = lslw_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 LSL.w (d8, A7, Xn) e3f7",
		.initial = {
			.regs = {
				1936698397, 3715971535, 2112993072, 4212421169, 3788199169, 3307089061, 2845416935, 1152295137, 3422201888, 2873667295, 763306419, 4253602411, 2374140550, 3305030445, 1824006047, 3887054, 15721970, 1050, 12510942
			},
			.prefetch0 = 58359,
			.prefetch1 = 60831,
			.ram = lslw_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1936698397, 3715971535, 2112993072, 4212421169, 3788199169, 3307089061, 2845416935, 1152295137, 3422201888, 2873667295, 763306419, 4253602411, 2374140550, 3305030445, 1824006047, 3887054, 15721970, 1024, 12510946
			},
			.prefetch0 = 30610,
			.prefetch1 = 22284,
			.ram = lslw_final_ram_31,
			.ram_len = 10,
		},
		.transactions = lslw_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_LSLW_H */