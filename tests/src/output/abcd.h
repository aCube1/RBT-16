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

const uint32_t ABCD_TEST_COUNT = 16;
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
};

#endif /* RBT_ABCD_H */