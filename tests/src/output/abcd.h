#ifndef RBT_ABCD_H
#define RBT_ABCD_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte abcd_initial_ram_0[] = {
		{ .addr = 0xde31d6, .byte = 0xcb },
		{ .addr = 0xde31d7, .byte = 0x0b },
		{ .addr = 0xde31d8, .byte = 0x2f },
		{ .addr = 0xde31d9, .byte = 0x1d },
		{ .addr = 0x27966e, .byte = 0x2e },
		{ .addr = 0x27966f, .byte = 0x6f },
		{ .addr = 0x0b2fa4, .byte = 0xb6 },
		{ .addr = 0x0b2fa5, .byte = 0xdb },
		{ .addr = 0xde31da, .byte = 0xe1 },
		{ .addr = 0xde31db, .byte = 0x5a }
};

static const SST_RamByte abcd_final_ram_0[] = {
		{ .addr = 0xde31d6, .byte = 0xcb },
		{ .addr = 0xde31d7, .byte = 0x0b },
		{ .addr = 0xde31d8, .byte = 0x2f },
		{ .addr = 0xde31d9, .byte = 0x1d },
		{ .addr = 0x27966e, .byte = 0x2e },
		{ .addr = 0x27966f, .byte = 0x6f },
		{ .addr = 0x0b2fa4, .byte = 0xb6 },
		{ .addr = 0x0b2fa5, .byte = 0xb0 },
		{ .addr = 0xde31da, .byte = 0xe1 },
		{ .addr = 0xde31db, .byte = 0x5a }
};

static const SST_Transaction abcd_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2594414, .data = 111, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 733092, .data = 219, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14561754, .data = 57690, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 733092, .data = 176, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_1[] = {
		{ .addr = 0x3dafda, .byte = 0xcf },
		{ .addr = 0x3dafdb, .byte = 0x04 },
		{ .addr = 0x3dafdc, .byte = 0xec },
		{ .addr = 0x3dafdd, .byte = 0x2e },
		{ .addr = 0x3dafde, .byte = 0xec },
		{ .addr = 0x3dafdf, .byte = 0xd8 }
};

static const SST_RamByte abcd_final_ram_1[] = {
		{ .addr = 0x3dafda, .byte = 0xcf },
		{ .addr = 0x3dafdb, .byte = 0x04 },
		{ .addr = 0x3dafdc, .byte = 0xec },
		{ .addr = 0x3dafdd, .byte = 0x2e },
		{ .addr = 0x3dafde, .byte = 0xec },
		{ .addr = 0x3dafdf, .byte = 0xd8 }
};

static const SST_Transaction abcd_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4042718, .data = 60632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_2[] = {
		{ .addr = 0xf540f2, .byte = 0xc7 },
		{ .addr = 0xf540f3, .byte = 0x0e },
		{ .addr = 0xf540f4, .byte = 0x4b },
		{ .addr = 0xf540f5, .byte = 0xfd },
		{ .addr = 0x872da2, .byte = 0xad },
		{ .addr = 0x872da3, .byte = 0x9a },
		{ .addr = 0xa634a8, .byte = 0x4e },
		{ .addr = 0xa634a9, .byte = 0x83 },
		{ .addr = 0xf540f6, .byte = 0x7b },
		{ .addr = 0xf540f7, .byte = 0x04 }
};

static const SST_RamByte abcd_final_ram_2[] = {
		{ .addr = 0xf540f2, .byte = 0xc7 },
		{ .addr = 0xf540f3, .byte = 0x0e },
		{ .addr = 0xf540f4, .byte = 0x4b },
		{ .addr = 0xf540f5, .byte = 0xfd },
		{ .addr = 0x872da2, .byte = 0xad },
		{ .addr = 0x872da3, .byte = 0x9a },
		{ .addr = 0xa634a8, .byte = 0x61 },
		{ .addr = 0xa634a9, .byte = 0x83 },
		{ .addr = 0xf540f6, .byte = 0x7b },
		{ .addr = 0xf540f7, .byte = 0x04 }
};

static const SST_Transaction abcd_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8859042, .data = 44288, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10892456, .data = 19968, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16072950, .data = 31492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10892456, .data = 24832, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_3[] = {
		{ .addr = 0xa94086, .byte = 0xc1 },
		{ .addr = 0xa94087, .byte = 0x0b },
		{ .addr = 0xa94088, .byte = 0x6c },
		{ .addr = 0xa94089, .byte = 0x0c },
		{ .addr = 0x7d0c90, .byte = 0x9a },
		{ .addr = 0x7d0c91, .byte = 0xf2 },
		{ .addr = 0x3c5d14, .byte = 0x9a },
		{ .addr = 0x3c5d15, .byte = 0xb4 },
		{ .addr = 0xa9408a, .byte = 0x96 },
		{ .addr = 0xa9408b, .byte = 0x37 }
};

static const SST_RamByte abcd_final_ram_3[] = {
		{ .addr = 0xa94086, .byte = 0xc1 },
		{ .addr = 0xa94087, .byte = 0x0b },
		{ .addr = 0xa94088, .byte = 0x6c },
		{ .addr = 0xa94089, .byte = 0x0c },
		{ .addr = 0x7d0c90, .byte = 0x9a },
		{ .addr = 0x7d0c91, .byte = 0xf2 },
		{ .addr = 0x3c5d14, .byte = 0x9a },
		{ .addr = 0x3c5d15, .byte = 0xb4 },
		{ .addr = 0xa9408a, .byte = 0x96 },
		{ .addr = 0xa9408b, .byte = 0x37 }
};

static const SST_Transaction abcd_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8195216, .data = 39424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3955988, .data = 39424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11092106, .data = 38455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3955988, .data = 39424, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_4[] = {
		{ .addr = 0xb13eea, .byte = 0xcb },
		{ .addr = 0xb13eeb, .byte = 0x0d },
		{ .addr = 0xb13eec, .byte = 0x26 },
		{ .addr = 0xb13eed, .byte = 0x0f },
		{ .addr = 0xd8cb74, .byte = 0x3a },
		{ .addr = 0xd8cb75, .byte = 0x4e },
		{ .addr = 0xb13eee, .byte = 0x9f },
		{ .addr = 0xb13eef, .byte = 0xca }
};

static const SST_RamByte abcd_final_ram_4[] = {
		{ .addr = 0xb13eea, .byte = 0xcb },
		{ .addr = 0xb13eeb, .byte = 0x0d },
		{ .addr = 0xb13eec, .byte = 0x26 },
		{ .addr = 0xb13eed, .byte = 0x0f },
		{ .addr = 0xd8cb74, .byte = 0x8e },
		{ .addr = 0xd8cb75, .byte = 0x4e },
		{ .addr = 0xb13eee, .byte = 0x9f },
		{ .addr = 0xb13eef, .byte = 0xca }
};

static const SST_Transaction abcd_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14207860, .data = 78, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14207860, .data = 14848, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11615982, .data = 40906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14207860, .data = 36352, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_5[] = {
		{ .addr = 0xb6711a, .byte = 0xc7 },
		{ .addr = 0xb6711b, .byte = 0x0b },
		{ .addr = 0xb6711c, .byte = 0x8e },
		{ .addr = 0xb6711d, .byte = 0xf1 },
		{ .addr = 0x0fd27c, .byte = 0xcd },
		{ .addr = 0x0fd27d, .byte = 0x18 },
		{ .addr = 0xb6711e, .byte = 0x5a },
		{ .addr = 0xb6711f, .byte = 0x34 }
};

static const SST_RamByte abcd_final_ram_5[] = {
		{ .addr = 0xb6711a, .byte = 0xc7 },
		{ .addr = 0xb6711b, .byte = 0x0b },
		{ .addr = 0xb6711c, .byte = 0x8e },
		{ .addr = 0xb6711d, .byte = 0xf1 },
		{ .addr = 0x0fd27c, .byte = 0x4c },
		{ .addr = 0x0fd27d, .byte = 0x18 },
		{ .addr = 0xb6711e, .byte = 0x5a },
		{ .addr = 0xb6711f, .byte = 0x34 }
};

static const SST_Transaction abcd_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1036924, .data = 24, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1036924, .data = 52480, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11956510, .data = 23092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1036924, .data = 19456, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_6[] = {
		{ .addr = 0x3ac130, .byte = 0xcf },
		{ .addr = 0x3ac131, .byte = 0x09 },
		{ .addr = 0x3ac132, .byte = 0x72 },
		{ .addr = 0x3ac133, .byte = 0xad },
		{ .addr = 0xf498d6, .byte = 0x3c },
		{ .addr = 0xf498d7, .byte = 0xb1 },
		{ .addr = 0x246420, .byte = 0x53 },
		{ .addr = 0x246421, .byte = 0x79 },
		{ .addr = 0x3ac134, .byte = 0x47 },
		{ .addr = 0x3ac135, .byte = 0xd3 }
};

static const SST_RamByte abcd_final_ram_6[] = {
		{ .addr = 0x3ac130, .byte = 0xcf },
		{ .addr = 0x3ac131, .byte = 0x09 },
		{ .addr = 0x3ac132, .byte = 0x72 },
		{ .addr = 0x3ac133, .byte = 0xad },
		{ .addr = 0xf498d6, .byte = 0x3c },
		{ .addr = 0xf498d7, .byte = 0xb1 },
		{ .addr = 0x246420, .byte = 0x95 },
		{ .addr = 0x246421, .byte = 0x79 },
		{ .addr = 0x3ac134, .byte = 0x47 },
		{ .addr = 0x3ac135, .byte = 0xd3 }
};

static const SST_Transaction abcd_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16029910, .data = 15360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2384928, .data = 21248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3850548, .data = 18387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2384928, .data = 38144, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_7[] = {
		{ .addr = 0x55ecee, .byte = 0xcf },
		{ .addr = 0x55ecef, .byte = 0x0f },
		{ .addr = 0x55ecf0, .byte = 0x6d },
		{ .addr = 0x55ecf1, .byte = 0xa3 },
		{ .addr = 0x5be9e8, .byte = 0x97 },
		{ .addr = 0x5be9e9, .byte = 0xa0 },
		{ .addr = 0x5be9e6, .byte = 0x72 },
		{ .addr = 0x5be9e7, .byte = 0x34 },
		{ .addr = 0x55ecf2, .byte = 0x77 },
		{ .addr = 0x55ecf3, .byte = 0x4a }
};

static const SST_RamByte abcd_final_ram_7[] = {
		{ .addr = 0x55ecee, .byte = 0xcf },
		{ .addr = 0x55ecef, .byte = 0x0f },
		{ .addr = 0x55ecf0, .byte = 0x6d },
		{ .addr = 0x55ecf1, .byte = 0xa3 },
		{ .addr = 0x5be9e8, .byte = 0x97 },
		{ .addr = 0x5be9e9, .byte = 0xa0 },
		{ .addr = 0x5be9e6, .byte = 0x69 },
		{ .addr = 0x5be9e7, .byte = 0x34 },
		{ .addr = 0x55ecf2, .byte = 0x77 },
		{ .addr = 0x55ecf3, .byte = 0x4a }
};

static const SST_Transaction abcd_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6023656, .data = 38656, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6023654, .data = 29184, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5631218, .data = 30538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6023654, .data = 26880, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_8[] = {
		{ .addr = 0xea85b6, .byte = 0xcf },
		{ .addr = 0xea85b7, .byte = 0x01 },
		{ .addr = 0xea85b8, .byte = 0xb9 },
		{ .addr = 0xea85b9, .byte = 0xad },
		{ .addr = 0xea85ba, .byte = 0xad },
		{ .addr = 0xea85bb, .byte = 0xbd }
};

static const SST_RamByte abcd_final_ram_8[] = {
		{ .addr = 0xea85b6, .byte = 0xcf },
		{ .addr = 0xea85b7, .byte = 0x01 },
		{ .addr = 0xea85b8, .byte = 0xb9 },
		{ .addr = 0xea85b9, .byte = 0xad },
		{ .addr = 0xea85ba, .byte = 0xad },
		{ .addr = 0xea85bb, .byte = 0xbd }
};

static const SST_Transaction abcd_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15369658, .data = 44477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_9[] = {
		{ .addr = 0xd9269e, .byte = 0xc9 },
		{ .addr = 0xd9269f, .byte = 0x00 },
		{ .addr = 0xd926a0, .byte = 0x77 },
		{ .addr = 0xd926a1, .byte = 0x6c },
		{ .addr = 0xd926a2, .byte = 0x40 },
		{ .addr = 0xd926a3, .byte = 0xc9 }
};

static const SST_RamByte abcd_final_ram_9[] = {
		{ .addr = 0xd9269e, .byte = 0xc9 },
		{ .addr = 0xd9269f, .byte = 0x00 },
		{ .addr = 0xd926a0, .byte = 0x77 },
		{ .addr = 0xd926a1, .byte = 0x6c },
		{ .addr = 0xd926a2, .byte = 0x40 },
		{ .addr = 0xd926a3, .byte = 0xc9 }
};

static const SST_Transaction abcd_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14231202, .data = 16585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_10[] = {
		{ .addr = 0x1883e0, .byte = 0xc1 },
		{ .addr = 0x1883e1, .byte = 0x05 },
		{ .addr = 0x1883e2, .byte = 0xbc },
		{ .addr = 0x1883e3, .byte = 0x5c },
		{ .addr = 0x1883e4, .byte = 0x70 },
		{ .addr = 0x1883e5, .byte = 0xc5 }
};

static const SST_RamByte abcd_final_ram_10[] = {
		{ .addr = 0x1883e0, .byte = 0xc1 },
		{ .addr = 0x1883e1, .byte = 0x05 },
		{ .addr = 0x1883e2, .byte = 0xbc },
		{ .addr = 0x1883e3, .byte = 0x5c },
		{ .addr = 0x1883e4, .byte = 0x70 },
		{ .addr = 0x1883e5, .byte = 0xc5 }
};

static const SST_Transaction abcd_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1606628, .data = 28869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_11[] = {
		{ .addr = 0xf4b1be, .byte = 0xc5 },
		{ .addr = 0xf4b1bf, .byte = 0x00 },
		{ .addr = 0xf4b1c0, .byte = 0xf3 },
		{ .addr = 0xf4b1c1, .byte = 0x6e },
		{ .addr = 0xf4b1c2, .byte = 0x9d },
		{ .addr = 0xf4b1c3, .byte = 0xcc }
};

static const SST_RamByte abcd_final_ram_11[] = {
		{ .addr = 0xf4b1be, .byte = 0xc5 },
		{ .addr = 0xf4b1bf, .byte = 0x00 },
		{ .addr = 0xf4b1c0, .byte = 0xf3 },
		{ .addr = 0xf4b1c1, .byte = 0x6e },
		{ .addr = 0xf4b1c2, .byte = 0x9d },
		{ .addr = 0xf4b1c3, .byte = 0xcc }
};

static const SST_Transaction abcd_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16036290, .data = 40396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_12[] = {
		{ .addr = 0xb0b040, .byte = 0xc7 },
		{ .addr = 0xb0b041, .byte = 0x06 },
		{ .addr = 0xb0b042, .byte = 0x2d },
		{ .addr = 0xb0b043, .byte = 0x2e },
		{ .addr = 0xb0b044, .byte = 0xc8 },
		{ .addr = 0xb0b045, .byte = 0x1d }
};

static const SST_RamByte abcd_final_ram_12[] = {
		{ .addr = 0xb0b040, .byte = 0xc7 },
		{ .addr = 0xb0b041, .byte = 0x06 },
		{ .addr = 0xb0b042, .byte = 0x2d },
		{ .addr = 0xb0b043, .byte = 0x2e },
		{ .addr = 0xb0b044, .byte = 0xc8 },
		{ .addr = 0xb0b045, .byte = 0x1d }
};

static const SST_Transaction abcd_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11579460, .data = 51229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_13[] = {
		{ .addr = 0xc90884, .byte = 0xc1 },
		{ .addr = 0xc90885, .byte = 0x0c },
		{ .addr = 0xc90886, .byte = 0xd4 },
		{ .addr = 0xc90887, .byte = 0x11 },
		{ .addr = 0x303c9a, .byte = 0x98 },
		{ .addr = 0x303c9b, .byte = 0x45 },
		{ .addr = 0xb0f84c, .byte = 0x8d },
		{ .addr = 0xb0f84d, .byte = 0xe4 },
		{ .addr = 0xc90888, .byte = 0x53 },
		{ .addr = 0xc90889, .byte = 0x44 }
};

static const SST_RamByte abcd_final_ram_13[] = {
		{ .addr = 0xc90884, .byte = 0xc1 },
		{ .addr = 0xc90885, .byte = 0x0c },
		{ .addr = 0xc90886, .byte = 0xd4 },
		{ .addr = 0xc90887, .byte = 0x11 },
		{ .addr = 0x303c9a, .byte = 0x98 },
		{ .addr = 0x303c9b, .byte = 0x45 },
		{ .addr = 0xb0f84c, .byte = 0x8c },
		{ .addr = 0xb0f84d, .byte = 0xe4 },
		{ .addr = 0xc90888, .byte = 0x53 },
		{ .addr = 0xc90889, .byte = 0x44 }
};

static const SST_Transaction abcd_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3161242, .data = 38912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11597900, .data = 36096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13174920, .data = 21316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11597900, .data = 35840, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_14[] = {
		{ .addr = 0xe2d9d2, .byte = 0xc9 },
		{ .addr = 0xe2d9d3, .byte = 0x04 },
		{ .addr = 0xe2d9d4, .byte = 0x08 },
		{ .addr = 0xe2d9d5, .byte = 0x29 },
		{ .addr = 0xe2d9d6, .byte = 0x1d },
		{ .addr = 0xe2d9d7, .byte = 0x02 }
};

static const SST_RamByte abcd_final_ram_14[] = {
		{ .addr = 0xe2d9d2, .byte = 0xc9 },
		{ .addr = 0xe2d9d3, .byte = 0x04 },
		{ .addr = 0xe2d9d4, .byte = 0x08 },
		{ .addr = 0xe2d9d5, .byte = 0x29 },
		{ .addr = 0xe2d9d6, .byte = 0x1d },
		{ .addr = 0xe2d9d7, .byte = 0x02 }
};

static const SST_Transaction abcd_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14866902, .data = 7426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_15[] = {
		{ .addr = 0xc27a72, .byte = 0xc1 },
		{ .addr = 0xc27a73, .byte = 0x0a },
		{ .addr = 0xc27a74, .byte = 0xcd },
		{ .addr = 0xc27a75, .byte = 0x19 },
		{ .addr = 0x86b0fa, .byte = 0xb9 },
		{ .addr = 0x86b0fb, .byte = 0x32 },
		{ .addr = 0xc68138, .byte = 0x84 },
		{ .addr = 0xc68139, .byte = 0x66 },
		{ .addr = 0xc27a76, .byte = 0x02 },
		{ .addr = 0xc27a77, .byte = 0x07 }
};

static const SST_RamByte abcd_final_ram_15[] = {
		{ .addr = 0xc27a72, .byte = 0xc1 },
		{ .addr = 0xc27a73, .byte = 0x0a },
		{ .addr = 0xc27a74, .byte = 0xcd },
		{ .addr = 0xc27a75, .byte = 0x19 },
		{ .addr = 0x86b0fa, .byte = 0xb9 },
		{ .addr = 0x86b0fb, .byte = 0x32 },
		{ .addr = 0xc68138, .byte = 0x84 },
		{ .addr = 0xc68139, .byte = 0x85 },
		{ .addr = 0xc27a76, .byte = 0x02 },
		{ .addr = 0xc27a77, .byte = 0x07 }
};

static const SST_Transaction abcd_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8827130, .data = 47360, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13009208, .data = 102, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12745334, .data = 519, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13009208, .data = 133, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_16[] = {
		{ .addr = 0x7b4c38, .byte = 0xc9 },
		{ .addr = 0x7b4c39, .byte = 0x09 },
		{ .addr = 0x7b4c3a, .byte = 0xc4 },
		{ .addr = 0x7b4c3b, .byte = 0x07 },
		{ .addr = 0x7ff9ca, .byte = 0x98 },
		{ .addr = 0x7ff9cb, .byte = 0xda },
		{ .addr = 0x9c46c6, .byte = 0x47 },
		{ .addr = 0x9c46c7, .byte = 0xd9 },
		{ .addr = 0x7b4c3c, .byte = 0xe1 },
		{ .addr = 0x7b4c3d, .byte = 0xdc }
};

static const SST_RamByte abcd_final_ram_16[] = {
		{ .addr = 0x7b4c38, .byte = 0xc9 },
		{ .addr = 0x7b4c39, .byte = 0x09 },
		{ .addr = 0x7b4c3a, .byte = 0xc4 },
		{ .addr = 0x7b4c3b, .byte = 0x07 },
		{ .addr = 0x7ff9ca, .byte = 0x98 },
		{ .addr = 0x7ff9cb, .byte = 0xda },
		{ .addr = 0x9c46c6, .byte = 0x47 },
		{ .addr = 0x9c46c7, .byte = 0x1a },
		{ .addr = 0x7b4c3c, .byte = 0xe1 },
		{ .addr = 0x7b4c3d, .byte = 0xdc }
};

static const SST_Transaction abcd_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8387018, .data = 218, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10241734, .data = 217, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8080444, .data = 57820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10241734, .data = 26, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_17[] = {
		{ .addr = 0xc504d4, .byte = 0xcb },
		{ .addr = 0xc504d5, .byte = 0x02 },
		{ .addr = 0xc504d6, .byte = 0x8f },
		{ .addr = 0xc504d7, .byte = 0xc9 },
		{ .addr = 0xc504d8, .byte = 0xa3 },
		{ .addr = 0xc504d9, .byte = 0xed }
};

static const SST_RamByte abcd_final_ram_17[] = {
		{ .addr = 0xc504d4, .byte = 0xcb },
		{ .addr = 0xc504d5, .byte = 0x02 },
		{ .addr = 0xc504d6, .byte = 0x8f },
		{ .addr = 0xc504d7, .byte = 0xc9 },
		{ .addr = 0xc504d8, .byte = 0xa3 },
		{ .addr = 0xc504d9, .byte = 0xed }
};

static const SST_Transaction abcd_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12911832, .data = 41965, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_18[] = {
		{ .addr = 0x630ede, .byte = 0xc7 },
		{ .addr = 0x630edf, .byte = 0x02 },
		{ .addr = 0x630ee0, .byte = 0x21 },
		{ .addr = 0x630ee1, .byte = 0xa5 },
		{ .addr = 0x630ee2, .byte = 0x42 },
		{ .addr = 0x630ee3, .byte = 0x88 }
};

static const SST_RamByte abcd_final_ram_18[] = {
		{ .addr = 0x630ede, .byte = 0xc7 },
		{ .addr = 0x630edf, .byte = 0x02 },
		{ .addr = 0x630ee0, .byte = 0x21 },
		{ .addr = 0x630ee1, .byte = 0xa5 },
		{ .addr = 0x630ee2, .byte = 0x42 },
		{ .addr = 0x630ee3, .byte = 0x88 }
};

static const SST_Transaction abcd_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6491874, .data = 17032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_19[] = {
		{ .addr = 0xccb584, .byte = 0xcb },
		{ .addr = 0xccb585, .byte = 0x0b },
		{ .addr = 0xccb586, .byte = 0xef },
		{ .addr = 0xccb587, .byte = 0x49 },
		{ .addr = 0xc638a6, .byte = 0x37 },
		{ .addr = 0xc638a7, .byte = 0x79 },
		{ .addr = 0xd02ac0, .byte = 0x94 },
		{ .addr = 0xd02ac1, .byte = 0x04 },
		{ .addr = 0xccb588, .byte = 0x52 },
		{ .addr = 0xccb589, .byte = 0x8a }
};

static const SST_RamByte abcd_final_ram_19[] = {
		{ .addr = 0xccb584, .byte = 0xcb },
		{ .addr = 0xccb585, .byte = 0x0b },
		{ .addr = 0xccb586, .byte = 0xef },
		{ .addr = 0xccb587, .byte = 0x49 },
		{ .addr = 0xc638a6, .byte = 0x37 },
		{ .addr = 0xc638a7, .byte = 0x79 },
		{ .addr = 0xd02ac0, .byte = 0x73 },
		{ .addr = 0xd02ac1, .byte = 0x04 },
		{ .addr = 0xccb588, .byte = 0x52 },
		{ .addr = 0xccb589, .byte = 0x8a }
};

static const SST_Transaction abcd_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12990630, .data = 121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13642432, .data = 37888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13415816, .data = 21130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13642432, .data = 29440, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_20[] = {
		{ .addr = 0xab6f42, .byte = 0xcd },
		{ .addr = 0xab6f43, .byte = 0x07 },
		{ .addr = 0xab6f44, .byte = 0xee },
		{ .addr = 0xab6f45, .byte = 0xb9 },
		{ .addr = 0xab6f46, .byte = 0x64 },
		{ .addr = 0xab6f47, .byte = 0x9e }
};

static const SST_RamByte abcd_final_ram_20[] = {
		{ .addr = 0xab6f42, .byte = 0xcd },
		{ .addr = 0xab6f43, .byte = 0x07 },
		{ .addr = 0xab6f44, .byte = 0xee },
		{ .addr = 0xab6f45, .byte = 0xb9 },
		{ .addr = 0xab6f46, .byte = 0x64 },
		{ .addr = 0xab6f47, .byte = 0x9e }
};

static const SST_Transaction abcd_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11235142, .data = 25758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_21[] = {
		{ .addr = 0xe720ee, .byte = 0xcf },
		{ .addr = 0xe720ef, .byte = 0x0f },
		{ .addr = 0xe720f0, .byte = 0x0d },
		{ .addr = 0xe720f1, .byte = 0xd8 },
		{ .addr = 0x899108, .byte = 0x8c },
		{ .addr = 0x899109, .byte = 0x9d },
		{ .addr = 0x899106, .byte = 0xbb },
		{ .addr = 0x899107, .byte = 0x72 },
		{ .addr = 0xe720f2, .byte = 0x30 },
		{ .addr = 0xe720f3, .byte = 0x88 }
};

static const SST_RamByte abcd_final_ram_21[] = {
		{ .addr = 0xe720ee, .byte = 0xcf },
		{ .addr = 0xe720ef, .byte = 0x0f },
		{ .addr = 0xe720f0, .byte = 0x0d },
		{ .addr = 0xe720f1, .byte = 0xd8 },
		{ .addr = 0x899108, .byte = 0x8c },
		{ .addr = 0x899109, .byte = 0x9d },
		{ .addr = 0x899106, .byte = 0xae },
		{ .addr = 0x899107, .byte = 0x72 },
		{ .addr = 0xe720f2, .byte = 0x30 },
		{ .addr = 0xe720f3, .byte = 0x88 }
};

static const SST_Transaction abcd_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9015560, .data = 35840, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9015558, .data = 47872, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15147250, .data = 12424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9015558, .data = 44544, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_22[] = {
		{ .addr = 0x4351fa, .byte = 0xcf },
		{ .addr = 0x4351fb, .byte = 0x01 },
		{ .addr = 0x4351fc, .byte = 0xd9 },
		{ .addr = 0x4351fd, .byte = 0x97 },
		{ .addr = 0x4351fe, .byte = 0xb2 },
		{ .addr = 0x4351ff, .byte = 0x9d }
};

static const SST_RamByte abcd_final_ram_22[] = {
		{ .addr = 0x4351fa, .byte = 0xcf },
		{ .addr = 0x4351fb, .byte = 0x01 },
		{ .addr = 0x4351fc, .byte = 0xd9 },
		{ .addr = 0x4351fd, .byte = 0x97 },
		{ .addr = 0x4351fe, .byte = 0xb2 },
		{ .addr = 0x4351ff, .byte = 0x9d }
};

static const SST_Transaction abcd_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4411902, .data = 45725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_23[] = {
		{ .addr = 0x480452, .byte = 0xcf },
		{ .addr = 0x480453, .byte = 0x03 },
		{ .addr = 0x480454, .byte = 0x4a },
		{ .addr = 0x480455, .byte = 0x85 },
		{ .addr = 0x480456, .byte = 0xbc },
		{ .addr = 0x480457, .byte = 0xea }
};

static const SST_RamByte abcd_final_ram_23[] = {
		{ .addr = 0x480452, .byte = 0xcf },
		{ .addr = 0x480453, .byte = 0x03 },
		{ .addr = 0x480454, .byte = 0x4a },
		{ .addr = 0x480455, .byte = 0x85 },
		{ .addr = 0x480456, .byte = 0xbc },
		{ .addr = 0x480457, .byte = 0xea }
};

static const SST_Transaction abcd_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4719702, .data = 48362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_24[] = {
		{ .addr = 0x7902b4, .byte = 0xc1 },
		{ .addr = 0x7902b5, .byte = 0x01 },
		{ .addr = 0x7902b6, .byte = 0xaa },
		{ .addr = 0x7902b7, .byte = 0xed },
		{ .addr = 0x7902b8, .byte = 0xea },
		{ .addr = 0x7902b9, .byte = 0x9c }
};

static const SST_RamByte abcd_final_ram_24[] = {
		{ .addr = 0x7902b4, .byte = 0xc1 },
		{ .addr = 0x7902b5, .byte = 0x01 },
		{ .addr = 0x7902b6, .byte = 0xaa },
		{ .addr = 0x7902b7, .byte = 0xed },
		{ .addr = 0x7902b8, .byte = 0xea },
		{ .addr = 0x7902b9, .byte = 0x9c }
};

static const SST_Transaction abcd_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7930552, .data = 60060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_25[] = {
		{ .addr = 0x2d5cec, .byte = 0xcf },
		{ .addr = 0x2d5ced, .byte = 0x0d },
		{ .addr = 0x2d5cee, .byte = 0x06 },
		{ .addr = 0x2d5cef, .byte = 0x4a },
		{ .addr = 0x3a5754, .byte = 0x6e },
		{ .addr = 0x3a5755, .byte = 0x3f },
		{ .addr = 0x4e03d4, .byte = 0x54 },
		{ .addr = 0x4e03d5, .byte = 0xf7 },
		{ .addr = 0x2d5cf0, .byte = 0xcc },
		{ .addr = 0x2d5cf1, .byte = 0xcd }
};

static const SST_RamByte abcd_final_ram_25[] = {
		{ .addr = 0x2d5cec, .byte = 0xcf },
		{ .addr = 0x2d5ced, .byte = 0x0d },
		{ .addr = 0x2d5cee, .byte = 0x06 },
		{ .addr = 0x2d5cef, .byte = 0x4a },
		{ .addr = 0x3a5754, .byte = 0x6e },
		{ .addr = 0x3a5755, .byte = 0x3f },
		{ .addr = 0x4e03d4, .byte = 0x28 },
		{ .addr = 0x4e03d5, .byte = 0xf7 },
		{ .addr = 0x2d5cf0, .byte = 0xcc },
		{ .addr = 0x2d5cf1, .byte = 0xcd }
};

static const SST_Transaction abcd_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3823444, .data = 28160, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5112788, .data = 21504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2972912, .data = 52429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5112788, .data = 10240, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_26[] = {
		{ .addr = 0xc6c388, .byte = 0xcb },
		{ .addr = 0xc6c389, .byte = 0x04 },
		{ .addr = 0xc6c38a, .byte = 0x9b },
		{ .addr = 0xc6c38b, .byte = 0x8d },
		{ .addr = 0xc6c38c, .byte = 0xdf },
		{ .addr = 0xc6c38d, .byte = 0x8b }
};

static const SST_RamByte abcd_final_ram_26[] = {
		{ .addr = 0xc6c388, .byte = 0xcb },
		{ .addr = 0xc6c389, .byte = 0x04 },
		{ .addr = 0xc6c38a, .byte = 0x9b },
		{ .addr = 0xc6c38b, .byte = 0x8d },
		{ .addr = 0xc6c38c, .byte = 0xdf },
		{ .addr = 0xc6c38d, .byte = 0x8b }
};

static const SST_Transaction abcd_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13026188, .data = 57227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_27[] = {
		{ .addr = 0xfee066, .byte = 0xc7 },
		{ .addr = 0xfee067, .byte = 0x0d },
		{ .addr = 0xfee068, .byte = 0xb1 },
		{ .addr = 0xfee069, .byte = 0xff },
		{ .addr = 0x5a61e2, .byte = 0x1b },
		{ .addr = 0x5a61e3, .byte = 0x60 },
		{ .addr = 0x097aa4, .byte = 0x89 },
		{ .addr = 0x097aa5, .byte = 0x4e },
		{ .addr = 0xfee06a, .byte = 0xe1 },
		{ .addr = 0xfee06b, .byte = 0xee }
};

static const SST_RamByte abcd_final_ram_27[] = {
		{ .addr = 0xfee066, .byte = 0xc7 },
		{ .addr = 0xfee067, .byte = 0x0d },
		{ .addr = 0xfee068, .byte = 0xb1 },
		{ .addr = 0xfee069, .byte = 0xff },
		{ .addr = 0x5a61e2, .byte = 0x1b },
		{ .addr = 0x5a61e3, .byte = 0x60 },
		{ .addr = 0x097aa4, .byte = 0x49 },
		{ .addr = 0x097aa5, .byte = 0x4e },
		{ .addr = 0xfee06a, .byte = 0xe1 },
		{ .addr = 0xfee06b, .byte = 0xee }
};

static const SST_Transaction abcd_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5923298, .data = 96, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 621220, .data = 35072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16703594, .data = 57838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 621220, .data = 18688, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte abcd_initial_ram_28[] = {
		{ .addr = 0x190738, .byte = 0xc9 },
		{ .addr = 0x190739, .byte = 0x05 },
		{ .addr = 0x19073a, .byte = 0x48 },
		{ .addr = 0x19073b, .byte = 0x77 },
		{ .addr = 0x19073c, .byte = 0x8f },
		{ .addr = 0x19073d, .byte = 0xb9 }
};

static const SST_RamByte abcd_final_ram_28[] = {
		{ .addr = 0x190738, .byte = 0xc9 },
		{ .addr = 0x190739, .byte = 0x05 },
		{ .addr = 0x19073a, .byte = 0x48 },
		{ .addr = 0x19073b, .byte = 0x77 },
		{ .addr = 0x19073c, .byte = 0x8f },
		{ .addr = 0x19073d, .byte = 0xb9 }
};

static const SST_Transaction abcd_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1640252, .data = 36793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_29[] = {
		{ .addr = 0x1075e0, .byte = 0xcf },
		{ .addr = 0x1075e1, .byte = 0x06 },
		{ .addr = 0x1075e2, .byte = 0xcd },
		{ .addr = 0x1075e3, .byte = 0xfe },
		{ .addr = 0x1075e4, .byte = 0xe1 },
		{ .addr = 0x1075e5, .byte = 0x1b }
};

static const SST_RamByte abcd_final_ram_29[] = {
		{ .addr = 0x1075e0, .byte = 0xcf },
		{ .addr = 0x1075e1, .byte = 0x06 },
		{ .addr = 0x1075e2, .byte = 0xcd },
		{ .addr = 0x1075e3, .byte = 0xfe },
		{ .addr = 0x1075e4, .byte = 0xe1 },
		{ .addr = 0x1075e5, .byte = 0x1b }
};

static const SST_Transaction abcd_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1078756, .data = 57627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_30[] = {
		{ .addr = 0x688be0, .byte = 0xcf },
		{ .addr = 0x688be1, .byte = 0x02 },
		{ .addr = 0x688be2, .byte = 0x2d },
		{ .addr = 0x688be3, .byte = 0x67 },
		{ .addr = 0x688be4, .byte = 0x65 },
		{ .addr = 0x688be5, .byte = 0x72 }
};

static const SST_RamByte abcd_final_ram_30[] = {
		{ .addr = 0x688be0, .byte = 0xcf },
		{ .addr = 0x688be1, .byte = 0x02 },
		{ .addr = 0x688be2, .byte = 0x2d },
		{ .addr = 0x688be3, .byte = 0x67 },
		{ .addr = 0x688be4, .byte = 0x65 },
		{ .addr = 0x688be5, .byte = 0x72 }
};

static const SST_Transaction abcd_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6851556, .data = 25970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte abcd_initial_ram_31[] = {
		{ .addr = 0x050f08, .byte = 0xcd },
		{ .addr = 0x050f09, .byte = 0x00 },
		{ .addr = 0x050f0a, .byte = 0x84 },
		{ .addr = 0x050f0b, .byte = 0xdb },
		{ .addr = 0x050f0c, .byte = 0xfd },
		{ .addr = 0x050f0d, .byte = 0xbc }
};

static const SST_RamByte abcd_final_ram_31[] = {
		{ .addr = 0x050f08, .byte = 0xcd },
		{ .addr = 0x050f09, .byte = 0x00 },
		{ .addr = 0x050f0a, .byte = 0x84 },
		{ .addr = 0x050f0b, .byte = 0xdb },
		{ .addr = 0x050f0c, .byte = 0xfd },
		{ .addr = 0x050f0d, .byte = 0xbc }
};

static const SST_Transaction abcd_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 331532, .data = 64956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_TestCase abcd[] = {
	{
		.name = "000 ABCD -(A3), -(A5) cb0b",
		.initial = {
			.regs = {
				1856846401, 1354445898, 4146924943, 2826373679, 3623155492, 2637387800, 3703044994, 1627861361, 934431941, 3222578904, 3522499819, 3173488240, 3569701346, 4127928230, 2726497174, 9357560, 8742784, 1802, 14561754
			},
			.prefetch0 = 51979,
			.prefetch1 = 12061,
			.ram = abcd_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1856846401, 1354445898, 4146924943, 2826373679, 3623155492, 2637387800, 3703044994, 1627861361, 934431941, 3222578904, 3522499819, 3173488239, 3569701346, 4127928229, 2726497174, 9357560, 8742784, 1819, 14561756
			},
			.prefetch0 = 12061,
			.prefetch1 = 57690,
			.ram = abcd_final_ram_0,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 ABCD D4, D7 cf04",
		.initial = {
			.regs = {
				1278891381, 3006764083, 177080011, 931347803, 744901310, 2768147323, 276903617, 431046604, 3666836348, 1767715353, 2852831904, 692234919, 2112646214, 1915206424, 527768396, 14912402, 14637436, 33543, 4042718
			},
			.prefetch0 = 52996,
			.prefetch1 = 60462,
			.ram = abcd_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1278891381, 3006764083, 177080011, 931347803, 744901310, 2768147323, 276903617, 431046640, 3666836348, 1767715353, 2852831904, 692234919, 2112646214, 1915206424, 527768396, 14912402, 14637436, 33561, 4042720
			},
			.prefetch0 = 60462,
			.prefetch1 = 60632,
			.ram = abcd_final_ram_1,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_1,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "002 ABCD -(A6), -(A3) c70e",
		.initial = {
			.regs = {
				710574535, 2795982354, 3789822888, 177717233, 866608369, 2491001347, 2054293068, 2807482763, 3900767779, 3549412201, 896627857, 1470510249, 2211439510, 2164000361, 3011980707, 8215312, 13488368, 33803, 16072950
			},
			.prefetch0 = 50958,
			.prefetch1 = 19453,
			.ram = abcd_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				710574535, 2795982354, 3789822888, 177717233, 866608369, 2491001347, 2054293068, 2807482763, 3900767779, 3549412201, 896627857, 1470510248, 2211439510, 2164000361, 3011980706, 8215312, 13488368, 33809, 16072952
			},
			.prefetch0 = 19453,
			.prefetch1 = 31492,
			.ram = abcd_final_ram_2,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 ABCD -(A3), -(A0) c10b",
		.initial = {
			.regs = {
				1300316485, 3470886387, 1343474914, 833057533, 3185307879, 2306500633, 1856043336, 4251970220, 2788973845, 408966665, 2672653943, 2038238353, 2711280413, 910693873, 2477976727, 4742374, 12154282, 8203, 11092106
			},
			.prefetch0 = 49419,
			.prefetch1 = 27660,
			.ram = abcd_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1300316485, 3470886387, 1343474914, 833057533, 3185307879, 2306500633, 1856043336, 4251970220, 2788973844, 408966665, 2672653943, 2038238352, 2711280413, 910693873, 2477976727, 4742374, 12154282, 8219, 11092108
			},
			.prefetch0 = 27660,
			.prefetch1 = 38455,
			.ram = abcd_final_ram_3,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_3,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "004 ABCD -(A5), -(A5) cb0d",
		.initial = {
			.regs = {
				3604105051, 347980850, 716866790, 3743647310, 3206077159, 2729490802, 516993587, 3399237028, 1446258853, 3352468912, 3226049796, 3734456033, 3933293628, 2732116854, 3154419111, 15112524, 7078110, 33544, 11615982
			},
			.prefetch0 = 51981,
			.prefetch1 = 9743,
			.ram = abcd_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3604105051, 347980850, 716866790, 3743647310, 3206077159, 2729490802, 516993587, 3399237028, 1446258853, 3352468912, 3226049796, 3734456033, 3933293628, 2732116852, 3154419111, 15112524, 7078110, 33544, 11615984
			},
			.prefetch0 = 9743,
			.prefetch1 = 40906,
			.ram = abcd_final_ram_4,
			.ram_len = 8,
		},
		.transactions = abcd_transactions_4,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "005 ABCD -(A3), -(A3) c70b",
		.initial = {
			.regs = {
				3482208352, 742239289, 737540791, 623747894, 3783116977, 1813025281, 3533478858, 1024407816, 1294058427, 1915571979, 3683971278, 3859796606, 446270382, 3070548515, 2420339217, 9579076, 9215796, 1813, 11956510
			},
			.prefetch0 = 50955,
			.prefetch1 = 36593,
			.ram = abcd_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3482208352, 742239289, 737540791, 623747894, 3783116977, 1813025281, 3533478858, 1024407816, 1294058427, 1915571979, 3683971278, 3859796604, 446270382, 3070548515, 2420339217, 9579076, 9215796, 1809, 11956512
			},
			.prefetch0 = 36593,
			.prefetch1 = 23092,
			.ram = abcd_final_ram_5,
			.ram_len = 8,
		},
		.transactions = abcd_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 ABCD -(A1), -(A7) cf09",
		.initial = {
			.regs = {
				1415165031, 2888930158, 3099832125, 1786330492, 2821151492, 307712746, 622975250, 1273644962, 2330557090, 1190435031, 4106214793, 1115255921, 1047862014, 2995780840, 1317250441, 10678860, 2384930, 9987, 3850548
			},
			.prefetch0 = 53001,
			.prefetch1 = 29357,
			.ram = abcd_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1415165031, 2888930158, 3099832125, 1786330492, 2821151492, 307712746, 622975250, 1273644962, 2330557090, 1190435030, 4106214793, 1115255921, 1047862014, 2995780840, 1317250441, 10678860, 2384928, 9992, 3850550
			},
			.prefetch0 = 29357,
			.prefetch1 = 18387,
			.ram = abcd_final_ram_6,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_6,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "007 ABCD -(A7), -(A7) cf0f",
		.initial = {
			.regs = {
				2692677280, 1235080685, 565171469, 412799127, 3500757797, 3185957911, 3952341169, 422813557, 3031303370, 2717962197, 3488726130, 3004639283, 2282616623, 2035159838, 2210495645, 6023658, 7941534, 34568, 5631218
			},
			.prefetch0 = 53007,
			.prefetch1 = 28067,
			.ram = abcd_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2692677280, 1235080685, 565171469, 412799127, 3500757797, 3185957911, 3952341169, 422813557, 3031303370, 2717962197, 3488726130, 3004639283, 2282616623, 2035159838, 2210495645, 6023654, 7941534, 34577, 5631220
			},
			.prefetch0 = 28067,
			.prefetch1 = 30538,
			.ram = abcd_final_ram_7,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_7,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "008 ABCD D1, D7 cf01",
		.initial = {
			.regs = {
				457010606, 1681649299, 2480444073, 2759101348, 2132272846, 1149556835, 1447867901, 3330099476, 3896003711, 2019754433, 525700649, 3841176659, 360107815, 4144255475, 3236120726, 1558380, 6590140, 41240, 15369658
			},
			.prefetch0 = 52993,
			.prefetch1 = 47533,
			.ram = abcd_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				457010606, 1681649299, 2480444073, 2759101348, 2132272846, 1149556835, 1447867901, 3330099464, 3896003711, 2019754433, 525700649, 3841176659, 360107815, 4144255475, 3236120726, 1558380, 6590140, 41233, 15369660
			},
			.prefetch0 = 47533,
			.prefetch1 = 44477,
			.ram = abcd_final_ram_8,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_8,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "009 ABCD D0, D4 c900",
		.initial = {
			.regs = {
				958015430, 3447565124, 1496261779, 1654341260, 3467340192, 1214587625, 3015916733, 352387555, 388311912, 2768775635, 1560386681, 501081859, 1275097522, 567517464, 1091836036, 500556, 14708364, 33028, 14231202
			},
			.prefetch0 = 51456,
			.prefetch1 = 30572,
			.ram = abcd_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				958015430, 3447565124, 1496261779, 1654341260, 3467340230, 1214587625, 3015916733, 352387555, 388311912, 2768775635, 1560386681, 501081859, 1275097522, 567517464, 1091836036, 500556, 14708364, 33051, 14231204
			},
			.prefetch0 = 30572,
			.prefetch1 = 16585,
			.ram = abcd_final_ram_9,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_9,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "010 ABCD D5, D0 c105",
		.initial = {
			.regs = {
				311625478, 3991726421, 933339359, 465176302, 2267288636, 1329422051, 532964647, 3748113373, 3348702935, 571563321, 3522527125, 2774946704, 1085970198, 1512394541, 2100731722, 15572722, 4822380, 787, 1606628
			},
			.prefetch0 = 49413,
			.prefetch1 = 48220,
			.ram = abcd_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				311625552, 3991726421, 933339359, 465176302, 2267288636, 1329422051, 532964647, 3748113373, 3348702935, 571563321, 3522527125, 2774946704, 1085970198, 1512394541, 2100731722, 15572722, 4822380, 785, 1606630
			},
			.prefetch0 = 48220,
			.prefetch1 = 28869,
			.ram = abcd_final_ram_10,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_10,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "011 ABCD D0, D2 c500",
		.initial = {
			.regs = {
				242758869, 1468106385, 2327518950, 4213239921, 3979259164, 4093187555, 2821143319, 1561374117, 2797553873, 2909142118, 932268541, 1596903202, 3833855682, 1714044040, 2300863620, 15024800, 3195636, 1311, 16036290
			},
			.prefetch0 = 50432,
			.prefetch1 = 62318,
			.ram = abcd_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				242758869, 1468106385, 2327518754, 4213239921, 3979259164, 4093187555, 2821143319, 1561374117, 2797553873, 2909142118, 932268541, 1596903202, 3833855682, 1714044040, 2300863620, 15024800, 3195636, 1297, 16036292
			},
			.prefetch0 = 62318,
			.prefetch1 = 40396,
			.ram = abcd_final_ram_11,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_11,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "012 ABCD D6, D3 c706",
		.initial = {
			.regs = {
				1914414645, 21727967, 847496888, 3341922810, 4040290193, 1095583871, 1387894487, 3234658835, 2159469606, 3563663822, 393076384, 890103832, 4008549538, 737762733, 883944591, 13905140, 14862610, 778, 11579460
			},
			.prefetch0 = 50950,
			.prefetch1 = 11566,
			.ram = abcd_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1914414645, 21727967, 847496888, 3341922615, 4040290193, 1095583871, 1387894487, 3234658835, 2159469606, 3563663822, 393076384, 890103832, 4008549538, 737762733, 883944591, 13905140, 14862610, 785, 11579462
			},
			.prefetch0 = 11566,
			.prefetch1 = 51229,
			.ram = abcd_final_ram_12,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_12,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "013 ABCD -(A4), -(A0) c10c",
		.initial = {
			.regs = {
				2844389187, 3951998264, 3212540246, 1449770704, 1814707903, 231401640, 1355944072, 991614171, 2276522061, 1331475326, 3100519559, 4090669450, 3157277851, 1970065584, 8452424, 11033332, 2877166, 8986, 13174920
			},
			.prefetch0 = 49420,
			.prefetch1 = 54289,
			.ram = abcd_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2844389187, 3951998264, 3212540246, 1449770704, 1814707903, 231401640, 1355944072, 991614171, 2276522060, 1331475326, 3100519559, 4090669450, 3157277850, 1970065584, 8452424, 11033332, 2877166, 8987, 13174922
			},
			.prefetch0 = 54289,
			.prefetch1 = 21316,
			.ram = abcd_final_ram_13,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 ABCD D4, D4 c904",
		.initial = {
			.regs = {
				3264121368, 829640955, 1091747746, 3807258685, 3584083668, 643471813, 212050352, 2440330476, 1334647514, 1574184905, 4193958391, 3593733296, 3505593413, 1591380872, 3845701153, 6080414, 16700738, 8202, 14866902
			},
			.prefetch0 = 51460,
			.prefetch1 = 2089,
			.ram = abcd_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3264121368, 829640955, 1091747746, 3807258685, 3584083464, 643471813, 212050352, 2440330476, 1334647514, 1574184905, 4193958391, 3593733296, 3505593413, 1591380872, 3845701153, 6080414, 16700738, 8209, 14866904
			},
			.prefetch0 = 2089,
			.prefetch1 = 7426,
			.ram = abcd_final_ram_14,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_14,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "015 ABCD -(A2), -(A0) c10a",
		.initial = {
			.regs = {
				209051182, 3151958567, 1578509175, 2672584837, 2058082270, 914583557, 386987260, 1621997028, 2949022010, 4127290439, 3934695675, 4216246782, 15204559, 719289598, 3951627731, 7978188, 14931794, 33544, 12745334
			},
			.prefetch0 = 49418,
			.prefetch1 = 52505,
			.ram = abcd_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				209051182, 3151958567, 1578509175, 2672584837, 2058082270, 914583557, 386987260, 1621997028, 2949022009, 4127290439, 3934695674, 4216246782, 15204559, 719289598, 3951627731, 7978188, 14931794, 33563, 12745336
			},
			.prefetch0 = 52505,
			.prefetch1 = 519,
			.ram = abcd_final_ram_15,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "016 ABCD -(A1), -(A4) c909",
		.initial = {
			.regs = {
				3961105823, 1737078855, 661753378, 536041749, 3325099113, 3272644175, 2255283230, 1379463527, 4017162587, 3514825164, 1187945421, 562306341, 278677192, 2314841245, 4289846762, 1635756, 15519044, 33310, 8080444
			},
			.prefetch0 = 51465,
			.prefetch1 = 50183,
			.ram = abcd_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3961105823, 1737078855, 661753378, 536041749, 3325099113, 3272644175, 2255283230, 1379463527, 4017162587, 3514825163, 1187945421, 562306341, 278677191, 2314841245, 4289846762, 1635756, 15519044, 33297, 8080446
			},
			.prefetch0 = 50183,
			.prefetch1 = 57820,
			.ram = abcd_final_ram_16,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_16,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "017 ABCD D2, D5 cb02",
		.initial = {
			.regs = {
				863638156, 2710759231, 2113044254, 4037155565, 1842141284, 18913069, 2281646252, 3319391330, 1167289287, 1330589203, 514604493, 139676030, 2492565540, 819543351, 2396553339, 6814360, 12342352, 9478, 12911832
			},
			.prefetch0 = 51970,
			.prefetch1 = 36809,
			.ram = abcd_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				863638156, 2710759231, 2113044254, 4037155565, 1842141284, 18913105, 2281646252, 3319391330, 1167289287, 1330589203, 514604493, 139676030, 2492565540, 819543351, 2396553339, 6814360, 12342352, 9472, 12911834
			},
			.prefetch0 = 36809,
			.prefetch1 = 41965,
			.ram = abcd_final_ram_17,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_17,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "018 ABCD D2, D3 c702",
		.initial = {
			.regs = {
				1452264114, 1852224957, 1885092970, 3785717297, 2946705403, 596698280, 2687969833, 1283404518, 3530344321, 505150011, 16170604, 3438830277, 2873932672, 2683783619, 4201328341, 1464528, 7462808, 41730, 6491874
			},
			.prefetch0 = 50946,
			.prefetch1 = 8613,
			.ram = abcd_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1452264114, 1852224957, 1885092970, 3785717249, 2946705403, 596698280, 2687969833, 1283404518, 3530344321, 505150011, 16170604, 3438830277, 2873932672, 2683783619, 4201328341, 1464528, 7462808, 41745, 6491876
			},
			.prefetch0 = 8613,
			.prefetch1 = 17032,
			.ram = abcd_final_ram_18,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_18,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "019 ABCD -(A3), -(A5) cb0b",
		.initial = {
			.regs = {
				2790860053, 3593018922, 101412559, 1325532440, 3652640845, 3196837837, 3658396310, 394735013, 1938851248, 1542299797, 404121289, 2764454056, 175036012, 533736129, 2770368726, 8464482, 14921882, 9742, 13415816
			},
			.prefetch0 = 51979,
			.prefetch1 = 61257,
			.ram = abcd_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2790860053, 3593018922, 101412559, 1325532440, 3652640845, 3196837837, 3658396310, 394735013, 1938851248, 1542299797, 404121289, 2764454055, 175036012, 533736128, 2770368726, 8464482, 14921882, 9745, 13415818
			},
			.prefetch0 = 61257,
			.prefetch1 = 21130,
			.ram = abcd_final_ram_19,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_19,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "020 ABCD D7, D6 cd07",
		.initial = {
			.regs = {
				3119886315, 2805473760, 3307010785, 992259929, 1690930468, 645839814, 1881403767, 1918820583, 587313190, 2395669621, 2444934301, 120114856, 4248655613, 2876674803, 836772135, 14175958, 9421886, 42506, 11235142
			},
			.prefetch0 = 52487,
			.prefetch1 = 61113,
			.ram = abcd_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3119886315, 2805473760, 3307010785, 992259929, 1690930468, 645839814, 1881403844, 1918820583, 587313190, 2395669621, 2444934301, 120114856, 4248655613, 2876674803, 836772135, 14175958, 9421886, 42523, 11235144
			},
			.prefetch0 = 61113,
			.prefetch1 = 25758,
			.ram = abcd_final_ram_20,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_20,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "021 ABCD -(A7), -(A7) cf0f",
		.initial = {
			.regs = {
				2452747759, 2497688053, 4177298042, 525026, 27601741, 2116931370, 829202882, 3027661562, 3994671055, 3459375584, 1938330202, 29816965, 3428038000, 1280575749, 3097006520, 9015562, 520250, 34586, 15147250
			},
			.prefetch0 = 53007,
			.prefetch1 = 3544,
			.ram = abcd_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2452747759, 2497688053, 4177298042, 525026, 27601741, 2116931370, 829202882, 3027661562, 3994671055, 3459375584, 1938330202, 29816965, 3428038000, 1280575749, 3097006520, 9015558, 520250, 34587, 15147252
			},
			.prefetch0 = 3544,
			.prefetch1 = 12424,
			.ram = abcd_final_ram_21,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_21,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "022 ABCD D1, D7 cf01",
		.initial = {
			.regs = {
				2325880141, 1671705231, 2540119019, 1001578600, 60054221, 664672478, 2293364143, 4008729572, 3721093937, 3066462597, 475031079, 1177901331, 2953587905, 3415084630, 283138327, 8431818, 8089756, 33803, 4411902
			},
			.prefetch0 = 52993,
			.prefetch1 = 55703,
			.ram = abcd_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2325880141, 1671705231, 2540119019, 1001578600, 60054221, 664672478, 2293364143, 4008729561, 3721093937, 3066462597, 475031079, 1177901331, 2953587905, 3415084630, 283138327, 8431818, 8089756, 33819, 4411904
			},
			.prefetch0 = 55703,
			.prefetch1 = 45725,
			.ram = abcd_final_ram_22,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_22,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "023 ABCD D3, D7 cf03",
		.initial = {
			.regs = {
				182635238, 1898953490, 658398288, 1818771922, 2457089146, 3439720764, 2178167031, 3426193422, 2751630857, 2532580227, 1612272498, 3643379877, 1884188383, 3309580113, 2448299628, 15876876, 2636116, 42779, 4719702
			},
			.prefetch0 = 52995,
			.prefetch1 = 19077,
			.ram = abcd_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				182635238, 1898953490, 658398288, 1818771922, 2457089146, 3439720764, 2178167031, 3426193479, 2751630857, 2532580227, 1612272498, 3643379877, 1884188383, 3309580113, 2448299628, 15876876, 2636116, 42769, 4719704
			},
			.prefetch0 = 19077,
			.prefetch1 = 48362,
			.ram = abcd_final_ram_23,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_23,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "024 ABCD D1, D0 c101",
		.initial = {
			.regs = {
				507586429, 2854491617, 1602905313, 1424160015, 1805818084, 3396742285, 147876950, 366034458, 1021622911, 3619230419, 2520770034, 1317622390, 3701846718, 2805146243, 4048497901, 12755928, 14808768, 9483, 7930552
			},
			.prefetch0 = 49409,
			.prefetch1 = 43757,
			.ram = abcd_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				507586500, 2854491617, 1602905313, 1424160015, 1805818084, 3396742285, 147876950, 366034458, 1021622911, 3619230419, 2520770034, 1317622390, 3701846718, 2805146243, 4048497901, 12755928, 14808768, 9499, 7930554
			},
			.prefetch0 = 43757,
			.prefetch1 = 60060,
			.ram = abcd_final_ram_24,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_24,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "025 ABCD -(A5), -(A7) cf0d",
		.initial = {
			.regs = {
				1680631150, 833292101, 4042274529, 1072280398, 1452101033, 1221484678, 3861601506, 3973815889, 352859239, 2788133563, 1982914508, 2362067122, 1970722690, 3510261589, 398612379, 5112790, 9873576, 11, 2972912
			},
			.prefetch0 = 53005,
			.prefetch1 = 1610,
			.ram = abcd_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1680631150, 833292101, 4042274529, 1072280398, 1452101033, 1221484678, 3861601506, 3973815889, 352859239, 2788133563, 1982914508, 2362067122, 1970722690, 3510261588, 398612379, 5112788, 9873576, 17, 2972914
			},
			.prefetch0 = 1610,
			.prefetch1 = 52429,
			.ram = abcd_final_ram_25,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_25,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "026 ABCD D4, D5 cb04",
		.initial = {
			.regs = {
				4246445610, 2087764926, 1244546993, 1500909303, 742051129, 3881906124, 2807196448, 2643028451, 1024016358, 467525080, 3875893999, 1377307115, 3637930135, 4176090257, 3374136613, 10420308, 14395360, 41235, 13026188
			},
			.prefetch0 = 51972,
			.prefetch1 = 39821,
			.ram = abcd_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4246445610, 2087764926, 1244546993, 1500909303, 742051129, 3881906028, 2807196448, 2643028451, 1024016358, 467525080, 3875893999, 1377307115, 3637930135, 4176090257, 3374136613, 10420308, 14395360, 41233, 13026190
			},
			.prefetch0 = 39821,
			.prefetch1 = 57227,
			.ram = abcd_final_ram_26,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_26,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "027 ABCD -(A5), -(A3) c70d",
		.initial = {
			.regs = {
				3712615221, 3975633659, 544987219, 3018643211, 852656821, 4252305066, 1909580320, 3977427270, 3065997915, 301215371, 1602911214, 856259237, 1884844016, 828006884, 115642534, 4161592, 10477900, 41729, 16703594
			},
			.prefetch0 = 50957,
			.prefetch1 = 45567,
			.ram = abcd_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3712615221, 3975633659, 544987219, 3018643211, 852656821, 4252305066, 1909580320, 3977427270, 3065997915, 301215371, 1602911214, 856259236, 1884844016, 828006883, 115642534, 4161592, 10477900, 41745, 16703596
			},
			.prefetch0 = 45567,
			.prefetch1 = 57838,
			.ram = abcd_final_ram_27,
			.ram_len = 10,
		},
		.transactions = abcd_transactions_27,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "028 ABCD D5, D4 c905",
		.initial = {
			.regs = {
				2417082672, 3872204588, 2896907683, 419915794, 3114522868, 2958760650, 1210603511, 376290620, 1471815091, 1853233879, 2704993848, 3540065372, 208702686, 2223674112, 3366228907, 10673788, 16714866, 42782, 1640252
			},
			.prefetch0 = 51461,
			.prefetch1 = 18551,
			.ram = abcd_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2417082672, 3872204588, 2896907683, 419915794, 3114522661, 2958760650, 1210603511, 376290620, 1471815091, 1853233879, 2704993848, 3540065372, 208702686, 2223674112, 3366228907, 10673788, 16714866, 42769, 1640254
			},
			.prefetch0 = 18551,
			.prefetch1 = 36793,
			.ram = abcd_final_ram_28,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_28,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "029 ABCD D6, D7 cf06",
		.initial = {
			.regs = {
				739874691, 806557123, 3920368610, 1120736467, 3437049889, 4107752026, 4119217272, 1745619111, 1775418342, 1273908176, 3742970505, 2425507206, 4020611478, 583597322, 3937403186, 7494874, 9926324, 777, 1078756
			},
			.prefetch0 = 52998,
			.prefetch1 = 52734,
			.ram = abcd_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				739874691, 806557123, 3920368610, 1120736467, 3437049889, 4107752026, 4119217272, 1745619077, 1775418342, 1273908176, 3742970505, 2425507206, 4020611478, 583597322, 3937403186, 7494874, 9926324, 795, 1078758
			},
			.prefetch0 = 52734,
			.prefetch1 = 57627,
			.ram = abcd_final_ram_29,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_29,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "030 ABCD D2, D7 cf02",
		.initial = {
			.regs = {
				214121718, 102086937, 57654346, 3257929462, 1032059950, 2381547499, 1986015429, 1825685072, 1530633644, 2912956182, 4109774032, 271810621, 1518828550, 3722212374, 2033288230, 14131088, 2081212, 33549, 6851556
			},
			.prefetch0 = 52994,
			.prefetch1 = 11623,
			.ram = abcd_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				214121718, 102086937, 57654346, 3257929462, 1032059950, 2381547499, 1986015429, 1825684992, 1530633644, 2912956182, 4109774032, 271810621, 1518828550, 3722212374, 2033288230, 14131088, 2081212, 33557, 6851558
			},
			.prefetch0 = 11623,
			.prefetch1 = 25970,
			.ram = abcd_final_ram_30,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_30,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "031 ABCD D0, D6 cd00",
		.initial = {
			.regs = {
				2220591956, 3961117557, 2289827379, 2460960355, 2762815479, 2502337759, 245380627, 929096910, 549930136, 4219017331, 4183541476, 1387074563, 2630347773, 806743856, 1757037167, 3482984, 5712242, 41758, 331532
			},
			.prefetch0 = 52480,
			.prefetch1 = 34011,
			.ram = abcd_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2220591956, 3961117557, 2289827379, 2460960355, 2762815479, 2502337759, 245380712, 929096910, 549930136, 4219017331, 4183541476, 1387074563, 2630347773, 806743856, 1757037167, 3482984, 5712242, 41728, 331534
			},
			.prefetch0 = 34011,
			.prefetch1 = 64956,
			.ram = abcd_final_ram_31,
			.ram_len = 6,
		},
		.transactions = abcd_transactions_31,
		.transactions_len = 2,
		.lenght = 6,
	},
};

#endif /* RBT_ABCD_H */