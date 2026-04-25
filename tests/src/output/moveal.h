#ifndef RBT_MOVEAL_H
#define RBT_MOVEAL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte moveal_initial_ram_0[] = {
		{ .addr = 0x511cd2, .byte = 0x20 },
		{ .addr = 0x511cd3, .byte = 0x6e },
		{ .addr = 0x511cd4, .byte = 0xdb },
		{ .addr = 0x511cd5, .byte = 0x79 },
		{ .addr = 0x511cd6, .byte = 0x1f },
		{ .addr = 0x511cd7, .byte = 0x54 },
		{ .addr = 0x50f432, .byte = 0x06 },
		{ .addr = 0x50f433, .byte = 0xa1 },
		{ .addr = 0x50f434, .byte = 0xf5 },
		{ .addr = 0x50f435, .byte = 0x27 },
		{ .addr = 0x511cd8, .byte = 0x46 },
		{ .addr = 0x511cd9, .byte = 0x59 }
};

static const SST_RamByte moveal_final_ram_0[] = {
		{ .addr = 0x511cd2, .byte = 0x20 },
		{ .addr = 0x511cd3, .byte = 0x6e },
		{ .addr = 0x511cd4, .byte = 0xdb },
		{ .addr = 0x511cd5, .byte = 0x79 },
		{ .addr = 0x511cd6, .byte = 0x1f },
		{ .addr = 0x511cd7, .byte = 0x54 },
		{ .addr = 0x50f432, .byte = 0x06 },
		{ .addr = 0x50f433, .byte = 0xa1 },
		{ .addr = 0x50f434, .byte = 0xf5 },
		{ .addr = 0x50f435, .byte = 0x27 },
		{ .addr = 0x511cd8, .byte = 0x46 },
		{ .addr = 0x511cd9, .byte = 0x59 }
};

static const SST_Transaction moveal_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5315798, .data = 8020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5305394, .data = 1697, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5305396, .data = 62759, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5315800, .data = 18009, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_1[] = {
		{ .addr = 0x1e0102, .byte = 0x2c },
		{ .addr = 0x1e0103, .byte = 0x77 },
		{ .addr = 0x1e0104, .byte = 0x20 },
		{ .addr = 0x1e0105, .byte = 0xe2 },
		{ .addr = 0x1e0106, .byte = 0xfd },
		{ .addr = 0x1e0107, .byte = 0xf3 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xce },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0xb2cef2, .byte = 0x67 },
		{ .addr = 0xb2cef3, .byte = 0x7a },
		{ .addr = 0xb2cef4, .byte = 0xaf },
		{ .addr = 0xb2cef5, .byte = 0xbf }
};

static const SST_RamByte moveal_final_ram_1[] = {
		{ .addr = 0x1e0102, .byte = 0x2c },
		{ .addr = 0x1e0103, .byte = 0x77 },
		{ .addr = 0x1e0104, .byte = 0x20 },
		{ .addr = 0x1e0105, .byte = 0xe2 },
		{ .addr = 0x1e0106, .byte = 0xfd },
		{ .addr = 0x1e0107, .byte = 0xf3 },
		{ .addr = 0x5e11d8, .byte = 0x01 },
		{ .addr = 0x5e11d9, .byte = 0x04 },
		{ .addr = 0x5e11d4, .byte = 0x00 },
		{ .addr = 0x5e11d5, .byte = 0x1a },
		{ .addr = 0x5e11d6, .byte = 0x00 },
		{ .addr = 0x5e11d7, .byte = 0x1e },
		{ .addr = 0x5e11d2, .byte = 0x2c },
		{ .addr = 0x5e11d3, .byte = 0x77 },
		{ .addr = 0x5e11d0, .byte = 0x5e },
		{ .addr = 0x5e11d1, .byte = 0x15 },
		{ .addr = 0x5e11cc, .byte = 0x2c },
		{ .addr = 0x5e11cd, .byte = 0x71 },
		{ .addr = 0x5e11ce, .byte = 0x00 },
		{ .addr = 0x5e11cf, .byte = 0xd4 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xce },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0xb2cef2, .byte = 0x67 },
		{ .addr = 0xb2cef3, .byte = 0x7a },
		{ .addr = 0xb2cef4, .byte = 0xaf },
		{ .addr = 0xb2cef5, .byte = 0xbf }
};

static const SST_Transaction moveal_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1966342, .data = 65011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13917716, .data = 26811, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6164952, .data = 260, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6164948, .data = 26, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6164950, .data = 30, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6164946, .data = 11383, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6164944, .data = 24085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6164940, .data = 11377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6164942, .data = 212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37298, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11718386, .data = 26490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11718388, .data = 44991, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_2[] = {
		{ .addr = 0xbb1622, .byte = 0x2c },
		{ .addr = 0xbb1623, .byte = 0x75 },
		{ .addr = 0xbb1624, .byte = 0x41 },
		{ .addr = 0xbb1625, .byte = 0x57 },
		{ .addr = 0xbb1626, .byte = 0x24 },
		{ .addr = 0xbb1627, .byte = 0x85 },
		{ .addr = 0x133b70, .byte = 0x94 },
		{ .addr = 0x133b71, .byte = 0x48 },
		{ .addr = 0x133b72, .byte = 0x06 },
		{ .addr = 0x133b73, .byte = 0xdf },
		{ .addr = 0xbb1628, .byte = 0x44 },
		{ .addr = 0xbb1629, .byte = 0x0c }
};

static const SST_RamByte moveal_final_ram_2[] = {
		{ .addr = 0xbb1622, .byte = 0x2c },
		{ .addr = 0xbb1623, .byte = 0x75 },
		{ .addr = 0xbb1624, .byte = 0x41 },
		{ .addr = 0xbb1625, .byte = 0x57 },
		{ .addr = 0xbb1626, .byte = 0x24 },
		{ .addr = 0xbb1627, .byte = 0x85 },
		{ .addr = 0x133b70, .byte = 0x94 },
		{ .addr = 0x133b71, .byte = 0x48 },
		{ .addr = 0x133b72, .byte = 0x06 },
		{ .addr = 0x133b73, .byte = 0xdf },
		{ .addr = 0xbb1628, .byte = 0x44 },
		{ .addr = 0xbb1629, .byte = 0x0c }
};

static const SST_Transaction moveal_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12260902, .data = 9349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1260400, .data = 37960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1260402, .data = 1759, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12260904, .data = 17420, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_3[] = {
		{ .addr = 0xc6fca4, .byte = 0x2c },
		{ .addr = 0xc6fca5, .byte = 0x5f },
		{ .addr = 0xc6fca6, .byte = 0x85 },
		{ .addr = 0xc6fca7, .byte = 0x80 },
		{ .addr = 0x89b382, .byte = 0x1b },
		{ .addr = 0x89b383, .byte = 0x39 },
		{ .addr = 0x89b384, .byte = 0xc7 },
		{ .addr = 0x89b385, .byte = 0x3f },
		{ .addr = 0xc6fca8, .byte = 0x36 },
		{ .addr = 0xc6fca9, .byte = 0xb8 }
};

static const SST_RamByte moveal_final_ram_3[] = {
		{ .addr = 0xc6fca4, .byte = 0x2c },
		{ .addr = 0xc6fca5, .byte = 0x5f },
		{ .addr = 0xc6fca6, .byte = 0x85 },
		{ .addr = 0xc6fca7, .byte = 0x80 },
		{ .addr = 0x89b382, .byte = 0x1b },
		{ .addr = 0x89b383, .byte = 0x39 },
		{ .addr = 0x89b384, .byte = 0xc7 },
		{ .addr = 0x89b385, .byte = 0x3f },
		{ .addr = 0xc6fca8, .byte = 0x36 },
		{ .addr = 0xc6fca9, .byte = 0xb8 }
};

static const SST_Transaction moveal_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9024386, .data = 6969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9024388, .data = 51007, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13040808, .data = 14008, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_4[] = {
		{ .addr = 0x2ea002, .byte = 0x2c },
		{ .addr = 0x2ea003, .byte = 0x57 },
		{ .addr = 0x2ea004, .byte = 0xb8 },
		{ .addr = 0x2ea005, .byte = 0xc0 },
		{ .addr = 0x2a619e, .byte = 0xbf },
		{ .addr = 0x2a619f, .byte = 0x4e },
		{ .addr = 0x2a61a0, .byte = 0x1e },
		{ .addr = 0x2a61a1, .byte = 0x3a },
		{ .addr = 0x2ea006, .byte = 0x89 },
		{ .addr = 0x2ea007, .byte = 0x7c }
};

static const SST_RamByte moveal_final_ram_4[] = {
		{ .addr = 0x2ea002, .byte = 0x2c },
		{ .addr = 0x2ea003, .byte = 0x57 },
		{ .addr = 0x2ea004, .byte = 0xb8 },
		{ .addr = 0x2ea005, .byte = 0xc0 },
		{ .addr = 0x2a619e, .byte = 0xbf },
		{ .addr = 0x2a619f, .byte = 0x4e },
		{ .addr = 0x2a61a0, .byte = 0x1e },
		{ .addr = 0x2a61a1, .byte = 0x3a },
		{ .addr = 0x2ea006, .byte = 0x89 },
		{ .addr = 0x2ea007, .byte = 0x7c }
};

static const SST_Transaction moveal_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2777502, .data = 48974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2777504, .data = 7738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3055622, .data = 35196, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_5[] = {
		{ .addr = 0xa4c232, .byte = 0x26 },
		{ .addr = 0xa4c233, .byte = 0x4f },
		{ .addr = 0xa4c234, .byte = 0xb5 },
		{ .addr = 0xa4c235, .byte = 0x75 },
		{ .addr = 0xa4c236, .byte = 0x81 },
		{ .addr = 0xa4c237, .byte = 0x8b }
};

static const SST_RamByte moveal_final_ram_5[] = {
		{ .addr = 0xa4c232, .byte = 0x26 },
		{ .addr = 0xa4c233, .byte = 0x4f },
		{ .addr = 0xa4c234, .byte = 0xb5 },
		{ .addr = 0xa4c235, .byte = 0x75 },
		{ .addr = 0xa4c236, .byte = 0x81 },
		{ .addr = 0xa4c237, .byte = 0x8b }
};

static const SST_Transaction moveal_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10797622, .data = 33163, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_6[] = {
		{ .addr = 0x65c5ea, .byte = 0x22 },
		{ .addr = 0x65c5eb, .byte = 0x68 },
		{ .addr = 0x65c5ec, .byte = 0x0c },
		{ .addr = 0x65c5ed, .byte = 0xe4 },
		{ .addr = 0x65c5ee, .byte = 0x2a },
		{ .addr = 0x65c5ef, .byte = 0xd2 },
		{ .addr = 0x0cf394, .byte = 0xcd },
		{ .addr = 0x0cf395, .byte = 0x02 },
		{ .addr = 0x0cf396, .byte = 0xd8 },
		{ .addr = 0x0cf397, .byte = 0x86 },
		{ .addr = 0x65c5f0, .byte = 0x49 },
		{ .addr = 0x65c5f1, .byte = 0x09 }
};

static const SST_RamByte moveal_final_ram_6[] = {
		{ .addr = 0x65c5ea, .byte = 0x22 },
		{ .addr = 0x65c5eb, .byte = 0x68 },
		{ .addr = 0x65c5ec, .byte = 0x0c },
		{ .addr = 0x65c5ed, .byte = 0xe4 },
		{ .addr = 0x65c5ee, .byte = 0x2a },
		{ .addr = 0x65c5ef, .byte = 0xd2 },
		{ .addr = 0x0cf394, .byte = 0xcd },
		{ .addr = 0x0cf395, .byte = 0x02 },
		{ .addr = 0x0cf396, .byte = 0xd8 },
		{ .addr = 0x0cf397, .byte = 0x86 },
		{ .addr = 0x65c5f0, .byte = 0x49 },
		{ .addr = 0x65c5f1, .byte = 0x09 }
};

static const SST_Transaction moveal_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6669806, .data = 10962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 848788, .data = 52482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 848790, .data = 55430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6669808, .data = 18697, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_7[] = {
		{ .addr = 0x6749c0, .byte = 0x2e },
		{ .addr = 0x6749c1, .byte = 0x42 },
		{ .addr = 0x6749c2, .byte = 0x16 },
		{ .addr = 0x6749c3, .byte = 0xdd },
		{ .addr = 0x6749c4, .byte = 0x6a },
		{ .addr = 0x6749c5, .byte = 0x9f }
};

static const SST_RamByte moveal_final_ram_7[] = {
		{ .addr = 0x6749c0, .byte = 0x2e },
		{ .addr = 0x6749c1, .byte = 0x42 },
		{ .addr = 0x6749c2, .byte = 0x16 },
		{ .addr = 0x6749c3, .byte = 0xdd },
		{ .addr = 0x6749c4, .byte = 0x6a },
		{ .addr = 0x6749c5, .byte = 0x9f }
};

static const SST_Transaction moveal_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6769092, .data = 27295, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_8[] = {
		{ .addr = 0x7e71ec, .byte = 0x2e },
		{ .addr = 0x7e71ed, .byte = 0x4b },
		{ .addr = 0x7e71ee, .byte = 0x0a },
		{ .addr = 0x7e71ef, .byte = 0x63 },
		{ .addr = 0x7e71f0, .byte = 0x7a },
		{ .addr = 0x7e71f1, .byte = 0x8c }
};

static const SST_RamByte moveal_final_ram_8[] = {
		{ .addr = 0x7e71ec, .byte = 0x2e },
		{ .addr = 0x7e71ed, .byte = 0x4b },
		{ .addr = 0x7e71ee, .byte = 0x0a },
		{ .addr = 0x7e71ef, .byte = 0x63 },
		{ .addr = 0x7e71f0, .byte = 0x7a },
		{ .addr = 0x7e71f1, .byte = 0x8c }
};

static const SST_Transaction moveal_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8286704, .data = 31372, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_9[] = {
		{ .addr = 0x16259e, .byte = 0x20 },
		{ .addr = 0x16259f, .byte = 0x4c },
		{ .addr = 0x1625a0, .byte = 0xf7 },
		{ .addr = 0x1625a1, .byte = 0xc1 },
		{ .addr = 0x1625a2, .byte = 0x01 },
		{ .addr = 0x1625a3, .byte = 0xf9 }
};

static const SST_RamByte moveal_final_ram_9[] = {
		{ .addr = 0x16259e, .byte = 0x20 },
		{ .addr = 0x16259f, .byte = 0x4c },
		{ .addr = 0x1625a0, .byte = 0xf7 },
		{ .addr = 0x1625a1, .byte = 0xc1 },
		{ .addr = 0x1625a2, .byte = 0x01 },
		{ .addr = 0x1625a3, .byte = 0xf9 }
};

static const SST_Transaction moveal_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1451426, .data = 505, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_10[] = {
		{ .addr = 0x29096a, .byte = 0x26 },
		{ .addr = 0x29096b, .byte = 0x61 },
		{ .addr = 0x29096c, .byte = 0xfc },
		{ .addr = 0x29096d, .byte = 0x12 },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x2a },
		{ .addr = 0x00000e, .byte = 0xed },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x2aed08, .byte = 0x1b },
		{ .addr = 0x2aed09, .byte = 0xb5 },
		{ .addr = 0x2aed0a, .byte = 0x0e },
		{ .addr = 0x2aed0b, .byte = 0xc3 }
};

static const SST_RamByte moveal_final_ram_10[] = {
		{ .addr = 0x29096a, .byte = 0x26 },
		{ .addr = 0x29096b, .byte = 0x61 },
		{ .addr = 0x29096c, .byte = 0xfc },
		{ .addr = 0x29096d, .byte = 0x12 },
		{ .addr = 0xb14b9e, .byte = 0x09 },
		{ .addr = 0xb14b9f, .byte = 0x6c },
		{ .addr = 0xb14b9a, .byte = 0xa7 },
		{ .addr = 0xb14b9b, .byte = 0x18 },
		{ .addr = 0xb14b9c, .byte = 0x00 },
		{ .addr = 0xb14b9d, .byte = 0x29 },
		{ .addr = 0xb14b98, .byte = 0x26 },
		{ .addr = 0xb14b99, .byte = 0x61 },
		{ .addr = 0xb14b96, .byte = 0xd3 },
		{ .addr = 0xb14b97, .byte = 0x6f },
		{ .addr = 0xb14b92, .byte = 0x26 },
		{ .addr = 0xb14b93, .byte = 0x75 },
		{ .addr = 0xb14b94, .byte = 0x19 },
		{ .addr = 0xb14b95, .byte = 0x48 },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x2a },
		{ .addr = 0x00000e, .byte = 0xed },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x2aed08, .byte = 0x1b },
		{ .addr = 0x2aed09, .byte = 0xb5 },
		{ .addr = 0x2aed0a, .byte = 0x0e },
		{ .addr = 0x2aed0b, .byte = 0xc3 }
};

static const SST_Transaction moveal_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4772718, .data = 63219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11619230, .data = 2412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11619226, .data = 42776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11619228, .data = 41, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11619224, .data = 9825, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11619222, .data = 54127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11619218, .data = 9845, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11619220, .data = 6472, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34858, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2813192, .data = 7093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2813194, .data = 3779, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_11[] = {
		{ .addr = 0x71ebe6, .byte = 0x2a },
		{ .addr = 0x71ebe7, .byte = 0x6b },
		{ .addr = 0x71ebe8, .byte = 0x3a },
		{ .addr = 0x71ebe9, .byte = 0x71 },
		{ .addr = 0x71ebea, .byte = 0xa8 },
		{ .addr = 0x71ebeb, .byte = 0x4a },
		{ .addr = 0x00000c, .byte = 0xa6 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0xab },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x22abe8, .byte = 0x3b },
		{ .addr = 0x22abe9, .byte = 0x86 },
		{ .addr = 0x22abea, .byte = 0x4f },
		{ .addr = 0x22abeb, .byte = 0xb9 }
};

static const SST_RamByte moveal_final_ram_11[] = {
		{ .addr = 0x71ebe6, .byte = 0x2a },
		{ .addr = 0x71ebe7, .byte = 0x6b },
		{ .addr = 0x71ebe8, .byte = 0x3a },
		{ .addr = 0x71ebe9, .byte = 0x71 },
		{ .addr = 0x71ebea, .byte = 0xa8 },
		{ .addr = 0x71ebeb, .byte = 0x4a },
		{ .addr = 0xef466c, .byte = 0xeb },
		{ .addr = 0xef466d, .byte = 0xe8 },
		{ .addr = 0xef4668, .byte = 0x27 },
		{ .addr = 0xef4669, .byte = 0x19 },
		{ .addr = 0xef466a, .byte = 0x00 },
		{ .addr = 0xef466b, .byte = 0x71 },
		{ .addr = 0xef4666, .byte = 0x2a },
		{ .addr = 0xef4667, .byte = 0x6b },
		{ .addr = 0xef4664, .byte = 0xe4 },
		{ .addr = 0xef4665, .byte = 0x53 },
		{ .addr = 0xef4660, .byte = 0x2a },
		{ .addr = 0xef4661, .byte = 0x75 },
		{ .addr = 0xef4662, .byte = 0x6e },
		{ .addr = 0xef4663, .byte = 0x47 },
		{ .addr = 0x00000c, .byte = 0xa6 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0xab },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x22abe8, .byte = 0x3b },
		{ .addr = 0x22abe9, .byte = 0x86 },
		{ .addr = 0x22abea, .byte = 0x4f },
		{ .addr = 0x22abeb, .byte = 0xb9 }
};

static const SST_Transaction moveal_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7465962, .data = 43082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4711506, .data = 35971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15681132, .data = 60392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15681128, .data = 10009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15681130, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15681126, .data = 10859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15681124, .data = 58451, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15681120, .data = 10869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15681122, .data = 28231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2272232, .data = 15238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2272234, .data = 20409, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_12[] = {
		{ .addr = 0xb97ac2, .byte = 0x24 },
		{ .addr = 0xb97ac3, .byte = 0x57 },
		{ .addr = 0xb97ac4, .byte = 0xdf },
		{ .addr = 0xb97ac5, .byte = 0x58 },
		{ .addr = 0xec3cf8, .byte = 0x49 },
		{ .addr = 0xec3cf9, .byte = 0xbd },
		{ .addr = 0xec3cfa, .byte = 0xfd },
		{ .addr = 0xec3cfb, .byte = 0x2b },
		{ .addr = 0xb97ac6, .byte = 0x0a },
		{ .addr = 0xb97ac7, .byte = 0xec }
};

static const SST_RamByte moveal_final_ram_12[] = {
		{ .addr = 0xb97ac2, .byte = 0x24 },
		{ .addr = 0xb97ac3, .byte = 0x57 },
		{ .addr = 0xb97ac4, .byte = 0xdf },
		{ .addr = 0xb97ac5, .byte = 0x58 },
		{ .addr = 0xec3cf8, .byte = 0x49 },
		{ .addr = 0xec3cf9, .byte = 0xbd },
		{ .addr = 0xec3cfa, .byte = 0xfd },
		{ .addr = 0xec3cfb, .byte = 0x2b },
		{ .addr = 0xb97ac6, .byte = 0x0a },
		{ .addr = 0xb97ac7, .byte = 0xec }
};

static const SST_Transaction moveal_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15482104, .data = 18877, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15482106, .data = 64811, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12155590, .data = 2796, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_13[] = {
		{ .addr = 0x1b0346, .byte = 0x2e },
		{ .addr = 0x1b0347, .byte = 0x69 },
		{ .addr = 0x1b0348, .byte = 0x42 },
		{ .addr = 0x1b0349, .byte = 0x0a },
		{ .addr = 0x1b034a, .byte = 0x68 },
		{ .addr = 0x1b034b, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0x4447ec, .byte = 0x12 },
		{ .addr = 0x4447ed, .byte = 0x1a },
		{ .addr = 0x4447ee, .byte = 0xb5 },
		{ .addr = 0x4447ef, .byte = 0xa0 }
};

static const SST_RamByte moveal_final_ram_13[] = {
		{ .addr = 0x1b0346, .byte = 0x2e },
		{ .addr = 0x1b0347, .byte = 0x69 },
		{ .addr = 0x1b0348, .byte = 0x42 },
		{ .addr = 0x1b0349, .byte = 0x0a },
		{ .addr = 0x1b034a, .byte = 0x68 },
		{ .addr = 0x1b034b, .byte = 0xef },
		{ .addr = 0x371e48, .byte = 0x03 },
		{ .addr = 0x371e49, .byte = 0x48 },
		{ .addr = 0x371e44, .byte = 0x06 },
		{ .addr = 0x371e45, .byte = 0x07 },
		{ .addr = 0x371e46, .byte = 0x00 },
		{ .addr = 0x371e47, .byte = 0x1b },
		{ .addr = 0x371e42, .byte = 0x2e },
		{ .addr = 0x371e43, .byte = 0x69 },
		{ .addr = 0x371e40, .byte = 0xd2 },
		{ .addr = 0x371e41, .byte = 0x29 },
		{ .addr = 0x371e3c, .byte = 0x2e },
		{ .addr = 0x371e3d, .byte = 0x71 },
		{ .addr = 0x371e3e, .byte = 0x4b },
		{ .addr = 0x371e3f, .byte = 0xec },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0x4447ec, .byte = 0x12 },
		{ .addr = 0x4447ed, .byte = 0x1a },
		{ .addr = 0x4447ee, .byte = 0xb5 },
		{ .addr = 0x4447ef, .byte = 0xa0 }
};

static const SST_Transaction moveal_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1770314, .data = 26863, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15520296, .data = 13944, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3612232, .data = 840, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3612228, .data = 1543, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3612230, .data = 27, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3612226, .data = 11881, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3612224, .data = 53801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3612220, .data = 11889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3612222, .data = 19436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4474860, .data = 4634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4474862, .data = 46496, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_14[] = {
		{ .addr = 0x1833d2, .byte = 0x28 },
		{ .addr = 0x1833d3, .byte = 0x5e },
		{ .addr = 0x1833d4, .byte = 0x73 },
		{ .addr = 0x1833d5, .byte = 0x70 },
		{ .addr = 0x00000c, .byte = 0x42 },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0xc0 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x48c098, .byte = 0xc4 },
		{ .addr = 0x48c099, .byte = 0x24 },
		{ .addr = 0x48c09a, .byte = 0x2d },
		{ .addr = 0x48c09b, .byte = 0xa1 }
};

static const SST_RamByte moveal_final_ram_14[] = {
		{ .addr = 0x1833d2, .byte = 0x28 },
		{ .addr = 0x1833d3, .byte = 0x5e },
		{ .addr = 0x1833d4, .byte = 0x73 },
		{ .addr = 0x1833d5, .byte = 0x70 },
		{ .addr = 0x6cae70, .byte = 0x33 },
		{ .addr = 0x6cae71, .byte = 0xd4 },
		{ .addr = 0x6cae6c, .byte = 0x87 },
		{ .addr = 0x6cae6d, .byte = 0x0d },
		{ .addr = 0x6cae6e, .byte = 0x00 },
		{ .addr = 0x6cae6f, .byte = 0x18 },
		{ .addr = 0x6cae6a, .byte = 0x28 },
		{ .addr = 0x6cae6b, .byte = 0x5e },
		{ .addr = 0x6cae68, .byte = 0x6b },
		{ .addr = 0x6cae69, .byte = 0x7b },
		{ .addr = 0x6cae64, .byte = 0x28 },
		{ .addr = 0x6cae65, .byte = 0x51 },
		{ .addr = 0x6cae66, .byte = 0xca },
		{ .addr = 0x6cae67, .byte = 0x17 },
		{ .addr = 0x00000c, .byte = 0x42 },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0xc0 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x48c098, .byte = 0xc4 },
		{ .addr = 0x48c099, .byte = 0x24 },
		{ .addr = 0x48c09a, .byte = 0x2d },
		{ .addr = 0x48c09b, .byte = 0xa1 }
};

static const SST_Transaction moveal_transactions_14[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1534842, .data = 15719, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7122544, .data = 13268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7122540, .data = 34573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7122542, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7122538, .data = 10334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7122536, .data = 27515, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7122532, .data = 10321, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7122534, .data = 51735, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4767896, .data = 50212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4767898, .data = 11681, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveal_initial_ram_15[] = {
		{ .addr = 0xe14c2c, .byte = 0x2e },
		{ .addr = 0xe14c2d, .byte = 0x56 },
		{ .addr = 0xe14c2e, .byte = 0xdc },
		{ .addr = 0xe14c2f, .byte = 0x2e },
		{ .addr = 0x52eb98, .byte = 0xfb },
		{ .addr = 0x52eb99, .byte = 0xc9 },
		{ .addr = 0x52eb9a, .byte = 0x78 },
		{ .addr = 0x52eb9b, .byte = 0x61 },
		{ .addr = 0xe14c30, .byte = 0xe3 },
		{ .addr = 0xe14c31, .byte = 0x5a }
};

static const SST_RamByte moveal_final_ram_15[] = {
		{ .addr = 0xe14c2c, .byte = 0x2e },
		{ .addr = 0xe14c2d, .byte = 0x56 },
		{ .addr = 0xe14c2e, .byte = 0xdc },
		{ .addr = 0xe14c2f, .byte = 0x2e },
		{ .addr = 0x52eb98, .byte = 0xfb },
		{ .addr = 0x52eb99, .byte = 0xc9 },
		{ .addr = 0x52eb9a, .byte = 0x78 },
		{ .addr = 0x52eb9b, .byte = 0x61 },
		{ .addr = 0xe14c30, .byte = 0xe3 },
		{ .addr = 0xe14c31, .byte = 0x5a }
};

static const SST_Transaction moveal_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5434264, .data = 64457, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5434266, .data = 30817, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14765104, .data = 58202, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t MOVEAL_TEST_COUNT = 16;
static const SST_TestCase moveal[] = {
	{
		.name = "000 MOVEA.l (d16, A6), A0 206e",
		.initial = {
			.regs = {
				3169999053, 3469235951, 2271338676, 2511997186, 2512246480, 1951198345, 182753002, 1861824547, 3981850156, 3212903014, 1011064591, 828776136, 4262926462, 538596608, 3377535161, 13214434, 9236656, 34326, 5315798
			},
			.prefetch0 = 8302,
			.prefetch1 = 56185,
			.ram = moveal_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3169999053, 3469235951, 2271338676, 2511997186, 2512246480, 1951198345, 182753002, 1861824547, 111277351, 3212903014, 1011064591, 828776136, 4262926462, 538596608, 3377535161, 13214434, 9236656, 34326, 5315802
			},
			.prefetch0 = 8020,
			.prefetch1 = 18009,
			.ram = moveal_final_ram_0,
			.ram_len = 12,
		},
		.transactions = moveal_transactions_0,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "001 MOVEA.l (d8, A7, Xn), A6 2c77",
		.initial = {
			.regs = {
				1745217884, 3153922638, 1415434769, 2923335717, 1385274318, 645545444, 1202610226, 2618926459, 3635367322, 2034691524, 995656698, 775026934, 2055947151, 1271456169, 906381853, 13929506, 6164954, 26, 1966342
			},
			.prefetch0 = 11383,
			.prefetch1 = 8418,
			.ram = moveal_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1745217884, 3153922638, 1415434769, 2923335717, 1385274318, 645545444, 1202610226, 2618926459, 3635367322, 2034691524, 995656698, 775026934, 2055947151, 1271456169, 906381853, 13929506, 6164940, 8218, 2444414710
			},
			.prefetch0 = 26490,
			.prefetch1 = 44991,
			.ram = moveal_final_ram_1,
			.ram_len = 28,
		},
		.transactions = moveal_transactions_1,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "002 MOVEA.l (d8, A5, Xn), A6 2c75",
		.initial = {
			.regs = {
				2093990, 2061176005, 4210064302, 2458124091, 3628669014, 723907910, 535163518, 2404582626, 564408059, 2380599573, 490117499, 1475334656, 1545835059, 3574801091, 12290240, 16014, 16354232, 42757, 12260902
			},
			.prefetch0 = 11381,
			.prefetch1 = 16727,
			.ram = moveal_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2093990, 2061176005, 4210064302, 2458124091, 3628669014, 723907910, 535163518, 2404582626, 564408059, 2380599573, 490117499, 1475334656, 1545835059, 3574801091, 2487748319, 16014, 16354232, 42757, 12260906
			},
			.prefetch0 = 9349,
			.prefetch1 = 17420,
			.ram = moveal_final_ram_2,
			.ram_len = 12,
		},
		.transactions = moveal_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 MOVEA.l (A7)+, A6 2c5f",
		.initial = {
			.regs = {
				2954708876, 611640861, 1891139462, 3168968914, 2456124558, 3495777741, 3962307988, 3612209411, 810019363, 2832092208, 3383957492, 2007567138, 614188134, 1684865287, 161810590, 8373886, 9024386, 9242, 13040808
			},
			.prefetch0 = 11359,
			.prefetch1 = 34176,
			.ram = moveal_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2954708876, 611640861, 1891139462, 3168968914, 2456124558, 3495777741, 3962307988, 3612209411, 810019363, 2832092208, 3383957492, 2007567138, 614188134, 1684865287, 456771391, 8373886, 9024390, 9242, 13040810
			},
			.prefetch0 = 34176,
			.prefetch1 = 14008,
			.ram = moveal_final_ram_3,
			.ram_len = 10,
		},
		.transactions = moveal_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 MOVEA.l (A7), A6 2c57",
		.initial = {
			.regs = {
				45166019, 2999048262, 3245469147, 1608414109, 4052459018, 232797390, 1829850593, 4091789287, 1951700872, 2246133795, 4261445711, 201034068, 4131521366, 1320914553, 2447218430, 15964770, 2777502, 8710, 3055622
			},
			.prefetch0 = 11351,
			.prefetch1 = 47296,
			.ram = moveal_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				45166019, 2999048262, 3245469147, 1608414109, 4052459018, 232797390, 1829850593, 4091789287, 1951700872, 2246133795, 4261445711, 201034068, 4131521366, 1320914553, 3209567802, 15964770, 2777502, 8710, 3055624
			},
			.prefetch0 = 47296,
			.prefetch1 = 35196,
			.ram = moveal_final_ram_4,
			.ram_len = 10,
		},
		.transactions = moveal_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 MOVEA.l A7, A3 264f",
		.initial = {
			.regs = {
				3815355066, 4189704555, 3897730839, 776608615, 838060251, 3834439318, 558777425, 2896120333, 680577809, 3650632885, 1476285, 333777130, 4196325975, 3222573719, 2225452782, 8478378, 12293978, 1297, 10797622
			},
			.prefetch0 = 9807,
			.prefetch1 = 46453,
			.ram = moveal_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3815355066, 4189704555, 3897730839, 776608615, 838060251, 3834439318, 558777425, 2896120333, 680577809, 3650632885, 1476285, 8478378, 4196325975, 3222573719, 2225452782, 8478378, 12293978, 1297, 10797624
			},
			.prefetch0 = 46453,
			.prefetch1 = 33163,
			.ram = moveal_final_ram_5,
			.ram_len = 6,
		},
		.transactions = moveal_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 MOVEA.l (d16, A0), A1 2268",
		.initial = {
			.regs = {
				3028260430, 1038688561, 1320186389, 2704598908, 1150392090, 1192030018, 908793069, 4164492449, 4178372272, 3210413675, 2668003853, 1229671216, 1446266655, 2198823487, 1533409794, 4980898, 8203710, 42506, 6669806
			},
			.prefetch0 = 8808,
			.prefetch1 = 3300,
			.ram = moveal_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3028260430, 1038688561, 1320186389, 2704598908, 1150392090, 1192030018, 908793069, 4164492449, 4178372272, 3439515782, 2668003853, 1229671216, 1446266655, 2198823487, 1533409794, 4980898, 8203710, 42506, 6669810
			},
			.prefetch0 = 10962,
			.prefetch1 = 18697,
			.ram = moveal_final_ram_6,
			.ram_len = 12,
		},
		.transactions = moveal_transactions_6,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "007 MOVEA.l D2, A7 2e42",
		.initial = {
			.regs = {
				659952778, 2554998753, 2874140303, 3542257168, 246384136, 2355070447, 458136078, 4227479033, 1795582651, 1042169684, 4279873843, 364355768, 3254323684, 4007351603, 1503877823, 3167428, 4147386, 1818, 6769092
			},
			.prefetch0 = 11842,
			.prefetch1 = 5853,
			.ram = moveal_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				659952778, 2554998753, 2874140303, 3542257168, 246384136, 2355070447, 458136078, 4227479033, 1795582651, 1042169684, 4279873843, 364355768, 3254323684, 4007351603, 1503877823, 2874140303, 4147386, 1818, 6769094
			},
			.prefetch0 = 5853,
			.prefetch1 = 27295,
			.ram = moveal_final_ram_7,
			.ram_len = 6,
		},
		.transactions = moveal_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 MOVEA.l A3, A7 2e4b",
		.initial = {
			.regs = {
				2357198340, 3470522969, 676673260, 100235009, 4202353947, 4161891088, 4028088852, 2975036665, 1720320970, 498421169, 3774760250, 1097112528, 3367961355, 356283064, 2735959527, 12787336, 4898642, 42503, 8286704
			},
			.prefetch0 = 11851,
			.prefetch1 = 2659,
			.ram = moveal_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2357198340, 3470522969, 676673260, 100235009, 4202353947, 4161891088, 4028088852, 2975036665, 1720320970, 498421169, 3774760250, 1097112528, 3367961355, 356283064, 2735959527, 12787336, 1097112528, 42503, 8286706
			},
			.prefetch0 = 2659,
			.prefetch1 = 31372,
			.ram = moveal_final_ram_8,
			.ram_len = 6,
		},
		.transactions = moveal_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 MOVEA.l A4, A0 204c",
		.initial = {
			.regs = {
				418090261, 1569857845, 204367558, 1001634557, 3938574990, 2017755650, 4183961998, 995458399, 2446761275, 4056667700, 1305761546, 1526877821, 2171254529, 1494412152, 3009514087, 7421172, 11429772, 41489, 1451426
			},
			.prefetch0 = 8268,
			.prefetch1 = 63425,
			.ram = moveal_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				418090261, 1569857845, 204367558, 1001634557, 3938574990, 2017755650, 4183961998, 995458399, 2171254529, 4056667700, 1305761546, 1526877821, 2171254529, 1494412152, 3009514087, 7421172, 11429772, 41489, 1451428
			},
			.prefetch0 = 63425,
			.prefetch1 = 505,
			.ram = moveal_final_ram_9,
			.ram_len = 6,
		},
		.transactions = moveal_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 MOVEA.l -(A1), A3 2661",
		.initial = {
			.regs = {
				1188250448, 2148962192, 3338237553, 2028118960, 1888977056, 2224268609, 815905016, 2370330451, 2515444736, 424203123, 1209330050, 648179391, 290366737, 2424973900, 2088070572, 8959164, 11619232, 42776, 2689390
			},
			.prefetch0 = 9825,
			.prefetch1 = 64530,
			.ram = moveal_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1188250448, 2148962192, 3338237553, 2028118960, 1888977056, 2224268609, 815905016, 2370330451, 2515444736, 424203119, 1209330050, 648179391, 290366737, 2424973900, 2088070572, 8959164, 11619218, 10008, 2284514572
			},
			.prefetch0 = 7093,
			.prefetch1 = 3779,
			.ram = moveal_final_ram_10,
			.ram_len = 26,
		},
		.transactions = moveal_transactions_10,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "011 MOVEA.l (d16, A3), A5 2a6b",
		.initial = {
			.regs = {
				1630565769, 1875726377, 1093951488, 2681031099, 2544583245, 4216292379, 2797943362, 2582073256, 2434033984, 3550822613, 851267447, 1850190306, 2129703653, 3973824205, 2282164735, 2007470, 15681134, 10009, 7465962
			},
			.prefetch0 = 10859,
			.prefetch1 = 14961,
			.ram = moveal_initial_ram_11,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1630565769, 1875726377, 1093951488, 2681031099, 2544583245, 4216292379, 2797943362, 2582073256, 2434033984, 3550822613, 851267447, 1850190306, 2129703653, 3973824205, 2282164735, 2007470, 15681120, 10009, 2787290092
			},
			.prefetch0 = 15238,
			.prefetch1 = 20409,
			.ram = moveal_final_ram_11,
			.ram_len = 28,
		},
		.transactions = moveal_transactions_11,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "012 MOVEA.l (A7), A2 2457",
		.initial = {
			.regs = {
				4261629209, 1587594182, 327920126, 1673403907, 2795710944, 3382824541, 3999788693, 14723811, 701938521, 3404727008, 678485196, 1481008477, 3163573024, 3518682341, 2636646680, 6158226, 15482104, 8213, 12155590
			},
			.prefetch0 = 9303,
			.prefetch1 = 57176,
			.ram = moveal_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4261629209, 1587594182, 327920126, 1673403907, 2795710944, 3382824541, 3999788693, 14723811, 701938521, 3404727008, 1237187883, 1481008477, 3163573024, 3518682341, 2636646680, 6158226, 15482104, 8213, 12155592
			},
			.prefetch0 = 57176,
			.prefetch1 = 2796,
			.ram = moveal_final_ram_12,
			.ram_len = 10,
		},
		.transactions = moveal_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 MOVEA.l (d16, A1), A7 2e69",
		.initial = {
			.regs = {
				2084770980, 2714129028, 89684438, 4210095325, 3676026183, 1759236813, 342932445, 308436218, 2858212778, 1273794591, 2899149760, 3099491195, 4018592168, 2597373080, 1360304881, 7968052, 3612234, 1543, 1770314
			},
			.prefetch0 = 11881,
			.prefetch1 = 16906,
			.ram = moveal_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2084770980, 2714129028, 89684438, 4210095325, 3676026183, 1759236813, 342932445, 308436218, 2858212778, 1273794591, 2899149760, 3099491195, 4018592168, 2597373080, 1360304881, 7968052, 3612220, 9735, 3779348464
			},
			.prefetch0 = 4634,
			.prefetch1 = 46496,
			.ram = moveal_final_ram_13,
			.ram_len = 28,
		},
		.transactions = moveal_transactions_13,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "014 MOVEA.l (A6)+, A4 285e",
		.initial = {
			.regs = {
				4188585675, 2433596567, 259037434, 1937163745, 2149175826, 4289685414, 4030361261, 3327344925, 2847702809, 3239149218, 33680992, 3603931453, 3551022215, 1124879387, 3390532475, 12935670, 7122546, 34573, 1586134
			},
			.prefetch0 = 10334,
			.prefetch1 = 29552,
			.ram = moveal_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4188585675, 2433596567, 259037434, 1937163745, 2149175826, 4289685414, 4030361261, 3327344925, 2847702809, 3239149218, 33680992, 3603931453, 3551022215, 1124879387, 3390532475, 12935670, 7122532, 9997, 1112064156
			},
			.prefetch0 = 50212,
			.prefetch1 = 11681,
			.ram = moveal_final_ram_14,
			.ram_len = 26,
		},
		.transactions = moveal_transactions_14,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "015 MOVEA.l (A6), A7 2e56",
		.initial = {
			.regs = {
				3911642265, 2190275776, 2699888270, 718391914, 3539263282, 1428778566, 2969169664, 2138649782, 693302541, 1493985789, 2849324284, 1655889161, 1152060296, 2822390604, 1062398872, 12029186, 7834856, 34052, 14765104
			},
			.prefetch0 = 11862,
			.prefetch1 = 56366,
			.ram = moveal_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3911642265, 2190275776, 2699888270, 718391914, 3539263282, 1428778566, 2969169664, 2138649782, 693302541, 1493985789, 2849324284, 1655889161, 1152060296, 2822390604, 1062398872, 4224284769, 7834856, 34052, 14765106
			},
			.prefetch0 = 56366,
			.prefetch1 = 58202,
			.ram = moveal_final_ram_15,
			.ram_len = 10,
		},
		.transactions = moveal_transactions_15,
		.transactions_len = 3,
		.lenght = 12,
	},
};

#endif /* RBT_MOVEAL_H */