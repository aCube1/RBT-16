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

const uint32_t LSLW_TEST_COUNT = 16;
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
};

#endif /* RBT_LSLW_H */