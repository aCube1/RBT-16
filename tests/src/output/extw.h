#ifndef RBT_EXTW_H
#define RBT_EXTW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte extw_initial_ram_0[] = {
		{ .addr = 0x23af82, .byte = 0x48 },
		{ .addr = 0x23af83, .byte = 0x82 },
		{ .addr = 0x23af84, .byte = 0xc5 },
		{ .addr = 0x23af85, .byte = 0x57 },
		{ .addr = 0x23af86, .byte = 0x81 },
		{ .addr = 0x23af87, .byte = 0xdb }
};

static const SST_RamByte extw_final_ram_0[] = {
		{ .addr = 0x23af82, .byte = 0x48 },
		{ .addr = 0x23af83, .byte = 0x82 },
		{ .addr = 0x23af84, .byte = 0xc5 },
		{ .addr = 0x23af85, .byte = 0x57 },
		{ .addr = 0x23af86, .byte = 0x81 },
		{ .addr = 0x23af87, .byte = 0xdb }
};

static const SST_Transaction extw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2338694, .data = 33243, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_1[] = {
		{ .addr = 0x66c92a, .byte = 0x48 },
		{ .addr = 0x66c92b, .byte = 0x80 },
		{ .addr = 0x66c92c, .byte = 0xd1 },
		{ .addr = 0x66c92d, .byte = 0x73 },
		{ .addr = 0x66c92e, .byte = 0x65 },
		{ .addr = 0x66c92f, .byte = 0x85 }
};

static const SST_RamByte extw_final_ram_1[] = {
		{ .addr = 0x66c92a, .byte = 0x48 },
		{ .addr = 0x66c92b, .byte = 0x80 },
		{ .addr = 0x66c92c, .byte = 0xd1 },
		{ .addr = 0x66c92d, .byte = 0x73 },
		{ .addr = 0x66c92e, .byte = 0x65 },
		{ .addr = 0x66c92f, .byte = 0x85 }
};

static const SST_Transaction extw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6736174, .data = 25989, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_2[] = {
		{ .addr = 0xedb39c, .byte = 0x48 },
		{ .addr = 0xedb39d, .byte = 0x86 },
		{ .addr = 0xedb39e, .byte = 0xe0 },
		{ .addr = 0xedb39f, .byte = 0x34 },
		{ .addr = 0xedb3a0, .byte = 0x5a },
		{ .addr = 0xedb3a1, .byte = 0x4c }
};

static const SST_RamByte extw_final_ram_2[] = {
		{ .addr = 0xedb39c, .byte = 0x48 },
		{ .addr = 0xedb39d, .byte = 0x86 },
		{ .addr = 0xedb39e, .byte = 0xe0 },
		{ .addr = 0xedb39f, .byte = 0x34 },
		{ .addr = 0xedb3a0, .byte = 0x5a },
		{ .addr = 0xedb3a1, .byte = 0x4c }
};

static const SST_Transaction extw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15578016, .data = 23116, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_3[] = {
		{ .addr = 0xae0dde, .byte = 0x48 },
		{ .addr = 0xae0ddf, .byte = 0x85 },
		{ .addr = 0xae0de0, .byte = 0x65 },
		{ .addr = 0xae0de1, .byte = 0xfd },
		{ .addr = 0xae0de2, .byte = 0xcc },
		{ .addr = 0xae0de3, .byte = 0xfe }
};

static const SST_RamByte extw_final_ram_3[] = {
		{ .addr = 0xae0dde, .byte = 0x48 },
		{ .addr = 0xae0ddf, .byte = 0x85 },
		{ .addr = 0xae0de0, .byte = 0x65 },
		{ .addr = 0xae0de1, .byte = 0xfd },
		{ .addr = 0xae0de2, .byte = 0xcc },
		{ .addr = 0xae0de3, .byte = 0xfe }
};

static const SST_Transaction extw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11406818, .data = 52478, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_4[] = {
		{ .addr = 0x2c3dd0, .byte = 0x48 },
		{ .addr = 0x2c3dd1, .byte = 0x85 },
		{ .addr = 0x2c3dd2, .byte = 0xf6 },
		{ .addr = 0x2c3dd3, .byte = 0x16 },
		{ .addr = 0x2c3dd4, .byte = 0x31 },
		{ .addr = 0x2c3dd5, .byte = 0x8e }
};

static const SST_RamByte extw_final_ram_4[] = {
		{ .addr = 0x2c3dd0, .byte = 0x48 },
		{ .addr = 0x2c3dd1, .byte = 0x85 },
		{ .addr = 0x2c3dd2, .byte = 0xf6 },
		{ .addr = 0x2c3dd3, .byte = 0x16 },
		{ .addr = 0x2c3dd4, .byte = 0x31 },
		{ .addr = 0x2c3dd5, .byte = 0x8e }
};

static const SST_Transaction extw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2899412, .data = 12686, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_5[] = {
		{ .addr = 0xa1a536, .byte = 0x48 },
		{ .addr = 0xa1a537, .byte = 0x81 },
		{ .addr = 0xa1a538, .byte = 0x17 },
		{ .addr = 0xa1a539, .byte = 0x33 },
		{ .addr = 0xa1a53a, .byte = 0x77 },
		{ .addr = 0xa1a53b, .byte = 0xfd }
};

static const SST_RamByte extw_final_ram_5[] = {
		{ .addr = 0xa1a536, .byte = 0x48 },
		{ .addr = 0xa1a537, .byte = 0x81 },
		{ .addr = 0xa1a538, .byte = 0x17 },
		{ .addr = 0xa1a539, .byte = 0x33 },
		{ .addr = 0xa1a53a, .byte = 0x77 },
		{ .addr = 0xa1a53b, .byte = 0xfd }
};

static const SST_Transaction extw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10593594, .data = 30717, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_6[] = {
		{ .addr = 0xafa1dc, .byte = 0x48 },
		{ .addr = 0xafa1dd, .byte = 0x86 },
		{ .addr = 0xafa1de, .byte = 0xd8 },
		{ .addr = 0xafa1df, .byte = 0xfd },
		{ .addr = 0xafa1e0, .byte = 0x38 },
		{ .addr = 0xafa1e1, .byte = 0x6a }
};

static const SST_RamByte extw_final_ram_6[] = {
		{ .addr = 0xafa1dc, .byte = 0x48 },
		{ .addr = 0xafa1dd, .byte = 0x86 },
		{ .addr = 0xafa1de, .byte = 0xd8 },
		{ .addr = 0xafa1df, .byte = 0xfd },
		{ .addr = 0xafa1e0, .byte = 0x38 },
		{ .addr = 0xafa1e1, .byte = 0x6a }
};

static const SST_Transaction extw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11510240, .data = 14442, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_7[] = {
		{ .addr = 0x7f49a6, .byte = 0x48 },
		{ .addr = 0x7f49a7, .byte = 0x80 },
		{ .addr = 0x7f49a8, .byte = 0x78 },
		{ .addr = 0x7f49a9, .byte = 0x17 },
		{ .addr = 0x7f49aa, .byte = 0x1f },
		{ .addr = 0x7f49ab, .byte = 0x67 }
};

static const SST_RamByte extw_final_ram_7[] = {
		{ .addr = 0x7f49a6, .byte = 0x48 },
		{ .addr = 0x7f49a7, .byte = 0x80 },
		{ .addr = 0x7f49a8, .byte = 0x78 },
		{ .addr = 0x7f49a9, .byte = 0x17 },
		{ .addr = 0x7f49aa, .byte = 0x1f },
		{ .addr = 0x7f49ab, .byte = 0x67 }
};

static const SST_Transaction extw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8341930, .data = 8039, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_8[] = {
		{ .addr = 0x67380c, .byte = 0x48 },
		{ .addr = 0x67380d, .byte = 0x85 },
		{ .addr = 0x67380e, .byte = 0x39 },
		{ .addr = 0x67380f, .byte = 0x12 },
		{ .addr = 0x673810, .byte = 0xc7 },
		{ .addr = 0x673811, .byte = 0x53 }
};

static const SST_RamByte extw_final_ram_8[] = {
		{ .addr = 0x67380c, .byte = 0x48 },
		{ .addr = 0x67380d, .byte = 0x85 },
		{ .addr = 0x67380e, .byte = 0x39 },
		{ .addr = 0x67380f, .byte = 0x12 },
		{ .addr = 0x673810, .byte = 0xc7 },
		{ .addr = 0x673811, .byte = 0x53 }
};

static const SST_Transaction extw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6764560, .data = 51027, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_9[] = {
		{ .addr = 0xb9a8ba, .byte = 0x48 },
		{ .addr = 0xb9a8bb, .byte = 0x87 },
		{ .addr = 0xb9a8bc, .byte = 0x62 },
		{ .addr = 0xb9a8bd, .byte = 0x90 },
		{ .addr = 0xb9a8be, .byte = 0x26 },
		{ .addr = 0xb9a8bf, .byte = 0x37 }
};

static const SST_RamByte extw_final_ram_9[] = {
		{ .addr = 0xb9a8ba, .byte = 0x48 },
		{ .addr = 0xb9a8bb, .byte = 0x87 },
		{ .addr = 0xb9a8bc, .byte = 0x62 },
		{ .addr = 0xb9a8bd, .byte = 0x90 },
		{ .addr = 0xb9a8be, .byte = 0x26 },
		{ .addr = 0xb9a8bf, .byte = 0x37 }
};

static const SST_Transaction extw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12167358, .data = 9783, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_10[] = {
		{ .addr = 0x8da62e, .byte = 0x48 },
		{ .addr = 0x8da62f, .byte = 0x82 },
		{ .addr = 0x8da630, .byte = 0xcd },
		{ .addr = 0x8da631, .byte = 0xb3 },
		{ .addr = 0x8da632, .byte = 0x69 },
		{ .addr = 0x8da633, .byte = 0x2c }
};

static const SST_RamByte extw_final_ram_10[] = {
		{ .addr = 0x8da62e, .byte = 0x48 },
		{ .addr = 0x8da62f, .byte = 0x82 },
		{ .addr = 0x8da630, .byte = 0xcd },
		{ .addr = 0x8da631, .byte = 0xb3 },
		{ .addr = 0x8da632, .byte = 0x69 },
		{ .addr = 0x8da633, .byte = 0x2c }
};

static const SST_Transaction extw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9283122, .data = 26924, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_11[] = {
		{ .addr = 0x92d6dc, .byte = 0x48 },
		{ .addr = 0x92d6dd, .byte = 0x83 },
		{ .addr = 0x92d6de, .byte = 0xb5 },
		{ .addr = 0x92d6df, .byte = 0xc5 },
		{ .addr = 0x92d6e0, .byte = 0xf8 },
		{ .addr = 0x92d6e1, .byte = 0x4a }
};

static const SST_RamByte extw_final_ram_11[] = {
		{ .addr = 0x92d6dc, .byte = 0x48 },
		{ .addr = 0x92d6dd, .byte = 0x83 },
		{ .addr = 0x92d6de, .byte = 0xb5 },
		{ .addr = 0x92d6df, .byte = 0xc5 },
		{ .addr = 0x92d6e0, .byte = 0xf8 },
		{ .addr = 0x92d6e1, .byte = 0x4a }
};

static const SST_Transaction extw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9623264, .data = 63562, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_12[] = {
		{ .addr = 0x6f2d48, .byte = 0x48 },
		{ .addr = 0x6f2d49, .byte = 0x86 },
		{ .addr = 0x6f2d4a, .byte = 0xa3 },
		{ .addr = 0x6f2d4b, .byte = 0x3a },
		{ .addr = 0x6f2d4c, .byte = 0x9d },
		{ .addr = 0x6f2d4d, .byte = 0x0e }
};

static const SST_RamByte extw_final_ram_12[] = {
		{ .addr = 0x6f2d48, .byte = 0x48 },
		{ .addr = 0x6f2d49, .byte = 0x86 },
		{ .addr = 0x6f2d4a, .byte = 0xa3 },
		{ .addr = 0x6f2d4b, .byte = 0x3a },
		{ .addr = 0x6f2d4c, .byte = 0x9d },
		{ .addr = 0x6f2d4d, .byte = 0x0e }
};

static const SST_Transaction extw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7286092, .data = 40206, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_13[] = {
		{ .addr = 0x24d5aa, .byte = 0x48 },
		{ .addr = 0x24d5ab, .byte = 0x87 },
		{ .addr = 0x24d5ac, .byte = 0x57 },
		{ .addr = 0x24d5ad, .byte = 0x66 },
		{ .addr = 0x24d5ae, .byte = 0x71 },
		{ .addr = 0x24d5af, .byte = 0x53 }
};

static const SST_RamByte extw_final_ram_13[] = {
		{ .addr = 0x24d5aa, .byte = 0x48 },
		{ .addr = 0x24d5ab, .byte = 0x87 },
		{ .addr = 0x24d5ac, .byte = 0x57 },
		{ .addr = 0x24d5ad, .byte = 0x66 },
		{ .addr = 0x24d5ae, .byte = 0x71 },
		{ .addr = 0x24d5af, .byte = 0x53 }
};

static const SST_Transaction extw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2413998, .data = 29011, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_14[] = {
		{ .addr = 0x775190, .byte = 0x48 },
		{ .addr = 0x775191, .byte = 0x80 },
		{ .addr = 0x775192, .byte = 0x44 },
		{ .addr = 0x775193, .byte = 0x5c },
		{ .addr = 0x775194, .byte = 0xd4 },
		{ .addr = 0x775195, .byte = 0x0a }
};

static const SST_RamByte extw_final_ram_14[] = {
		{ .addr = 0x775190, .byte = 0x48 },
		{ .addr = 0x775191, .byte = 0x80 },
		{ .addr = 0x775192, .byte = 0x44 },
		{ .addr = 0x775193, .byte = 0x5c },
		{ .addr = 0x775194, .byte = 0xd4 },
		{ .addr = 0x775195, .byte = 0x0a }
};

static const SST_Transaction extw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7819668, .data = 54282, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_15[] = {
		{ .addr = 0xcba7c0, .byte = 0x48 },
		{ .addr = 0xcba7c1, .byte = 0x81 },
		{ .addr = 0xcba7c2, .byte = 0xee },
		{ .addr = 0xcba7c3, .byte = 0x88 },
		{ .addr = 0xcba7c4, .byte = 0xc5 },
		{ .addr = 0xcba7c5, .byte = 0x00 }
};

static const SST_RamByte extw_final_ram_15[] = {
		{ .addr = 0xcba7c0, .byte = 0x48 },
		{ .addr = 0xcba7c1, .byte = 0x81 },
		{ .addr = 0xcba7c2, .byte = 0xee },
		{ .addr = 0xcba7c3, .byte = 0x88 },
		{ .addr = 0xcba7c4, .byte = 0xc5 },
		{ .addr = 0xcba7c5, .byte = 0x00 }
};

static const SST_Transaction extw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13346756, .data = 50432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_16[] = {
		{ .addr = 0x786e7e, .byte = 0x48 },
		{ .addr = 0x786e7f, .byte = 0x83 },
		{ .addr = 0x786e80, .byte = 0xb7 },
		{ .addr = 0x786e81, .byte = 0xf6 },
		{ .addr = 0x786e82, .byte = 0x45 },
		{ .addr = 0x786e83, .byte = 0x1f }
};

static const SST_RamByte extw_final_ram_16[] = {
		{ .addr = 0x786e7e, .byte = 0x48 },
		{ .addr = 0x786e7f, .byte = 0x83 },
		{ .addr = 0x786e80, .byte = 0xb7 },
		{ .addr = 0x786e81, .byte = 0xf6 },
		{ .addr = 0x786e82, .byte = 0x45 },
		{ .addr = 0x786e83, .byte = 0x1f }
};

static const SST_Transaction extw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7892610, .data = 17695, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_17[] = {
		{ .addr = 0xe9e17a, .byte = 0x48 },
		{ .addr = 0xe9e17b, .byte = 0x83 },
		{ .addr = 0xe9e17c, .byte = 0x14 },
		{ .addr = 0xe9e17d, .byte = 0x12 },
		{ .addr = 0xe9e17e, .byte = 0x5d },
		{ .addr = 0xe9e17f, .byte = 0x25 }
};

static const SST_RamByte extw_final_ram_17[] = {
		{ .addr = 0xe9e17a, .byte = 0x48 },
		{ .addr = 0xe9e17b, .byte = 0x83 },
		{ .addr = 0xe9e17c, .byte = 0x14 },
		{ .addr = 0xe9e17d, .byte = 0x12 },
		{ .addr = 0xe9e17e, .byte = 0x5d },
		{ .addr = 0xe9e17f, .byte = 0x25 }
};

static const SST_Transaction extw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15327614, .data = 23845, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_18[] = {
		{ .addr = 0x15a3da, .byte = 0x48 },
		{ .addr = 0x15a3db, .byte = 0x85 },
		{ .addr = 0x15a3dc, .byte = 0xfe },
		{ .addr = 0x15a3dd, .byte = 0xb6 },
		{ .addr = 0x15a3de, .byte = 0xb0 },
		{ .addr = 0x15a3df, .byte = 0xbc }
};

static const SST_RamByte extw_final_ram_18[] = {
		{ .addr = 0x15a3da, .byte = 0x48 },
		{ .addr = 0x15a3db, .byte = 0x85 },
		{ .addr = 0x15a3dc, .byte = 0xfe },
		{ .addr = 0x15a3dd, .byte = 0xb6 },
		{ .addr = 0x15a3de, .byte = 0xb0 },
		{ .addr = 0x15a3df, .byte = 0xbc }
};

static const SST_Transaction extw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1418206, .data = 45244, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_19[] = {
		{ .addr = 0x241afe, .byte = 0x48 },
		{ .addr = 0x241aff, .byte = 0x85 },
		{ .addr = 0x241b00, .byte = 0x0e },
		{ .addr = 0x241b01, .byte = 0x8e },
		{ .addr = 0x241b02, .byte = 0x9c },
		{ .addr = 0x241b03, .byte = 0xca }
};

static const SST_RamByte extw_final_ram_19[] = {
		{ .addr = 0x241afe, .byte = 0x48 },
		{ .addr = 0x241aff, .byte = 0x85 },
		{ .addr = 0x241b00, .byte = 0x0e },
		{ .addr = 0x241b01, .byte = 0x8e },
		{ .addr = 0x241b02, .byte = 0x9c },
		{ .addr = 0x241b03, .byte = 0xca }
};

static const SST_Transaction extw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2366210, .data = 40138, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_20[] = {
		{ .addr = 0x84d75c, .byte = 0x48 },
		{ .addr = 0x84d75d, .byte = 0x85 },
		{ .addr = 0x84d75e, .byte = 0xff },
		{ .addr = 0x84d75f, .byte = 0x26 },
		{ .addr = 0x84d760, .byte = 0xd3 },
		{ .addr = 0x84d761, .byte = 0xb7 }
};

static const SST_RamByte extw_final_ram_20[] = {
		{ .addr = 0x84d75c, .byte = 0x48 },
		{ .addr = 0x84d75d, .byte = 0x85 },
		{ .addr = 0x84d75e, .byte = 0xff },
		{ .addr = 0x84d75f, .byte = 0x26 },
		{ .addr = 0x84d760, .byte = 0xd3 },
		{ .addr = 0x84d761, .byte = 0xb7 }
};

static const SST_Transaction extw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8705888, .data = 54199, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_21[] = {
		{ .addr = 0xfcc2ca, .byte = 0x48 },
		{ .addr = 0xfcc2cb, .byte = 0x82 },
		{ .addr = 0xfcc2cc, .byte = 0x5f },
		{ .addr = 0xfcc2cd, .byte = 0x72 },
		{ .addr = 0xfcc2ce, .byte = 0x68 },
		{ .addr = 0xfcc2cf, .byte = 0x20 }
};

static const SST_RamByte extw_final_ram_21[] = {
		{ .addr = 0xfcc2ca, .byte = 0x48 },
		{ .addr = 0xfcc2cb, .byte = 0x82 },
		{ .addr = 0xfcc2cc, .byte = 0x5f },
		{ .addr = 0xfcc2cd, .byte = 0x72 },
		{ .addr = 0xfcc2ce, .byte = 0x68 },
		{ .addr = 0xfcc2cf, .byte = 0x20 }
};

static const SST_Transaction extw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16564942, .data = 26656, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_22[] = {
		{ .addr = 0x148942, .byte = 0x48 },
		{ .addr = 0x148943, .byte = 0x80 },
		{ .addr = 0x148944, .byte = 0xc2 },
		{ .addr = 0x148945, .byte = 0x01 },
		{ .addr = 0x148946, .byte = 0x36 },
		{ .addr = 0x148947, .byte = 0x98 }
};

static const SST_RamByte extw_final_ram_22[] = {
		{ .addr = 0x148942, .byte = 0x48 },
		{ .addr = 0x148943, .byte = 0x80 },
		{ .addr = 0x148944, .byte = 0xc2 },
		{ .addr = 0x148945, .byte = 0x01 },
		{ .addr = 0x148946, .byte = 0x36 },
		{ .addr = 0x148947, .byte = 0x98 }
};

static const SST_Transaction extw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1345862, .data = 13976, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_23[] = {
		{ .addr = 0x7c0f58, .byte = 0x48 },
		{ .addr = 0x7c0f59, .byte = 0x81 },
		{ .addr = 0x7c0f5a, .byte = 0x52 },
		{ .addr = 0x7c0f5b, .byte = 0x44 },
		{ .addr = 0x7c0f5c, .byte = 0xd8 },
		{ .addr = 0x7c0f5d, .byte = 0xee }
};

static const SST_RamByte extw_final_ram_23[] = {
		{ .addr = 0x7c0f58, .byte = 0x48 },
		{ .addr = 0x7c0f59, .byte = 0x81 },
		{ .addr = 0x7c0f5a, .byte = 0x52 },
		{ .addr = 0x7c0f5b, .byte = 0x44 },
		{ .addr = 0x7c0f5c, .byte = 0xd8 },
		{ .addr = 0x7c0f5d, .byte = 0xee }
};

static const SST_Transaction extw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8130396, .data = 55534, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_24[] = {
		{ .addr = 0x025fac, .byte = 0x48 },
		{ .addr = 0x025fad, .byte = 0x85 },
		{ .addr = 0x025fae, .byte = 0xff },
		{ .addr = 0x025faf, .byte = 0xf5 },
		{ .addr = 0x025fb0, .byte = 0x15 },
		{ .addr = 0x025fb1, .byte = 0x19 }
};

static const SST_RamByte extw_final_ram_24[] = {
		{ .addr = 0x025fac, .byte = 0x48 },
		{ .addr = 0x025fad, .byte = 0x85 },
		{ .addr = 0x025fae, .byte = 0xff },
		{ .addr = 0x025faf, .byte = 0xf5 },
		{ .addr = 0x025fb0, .byte = 0x15 },
		{ .addr = 0x025fb1, .byte = 0x19 }
};

static const SST_Transaction extw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 155568, .data = 5401, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_25[] = {
		{ .addr = 0x10ec6e, .byte = 0x48 },
		{ .addr = 0x10ec6f, .byte = 0x84 },
		{ .addr = 0x10ec70, .byte = 0x0e },
		{ .addr = 0x10ec71, .byte = 0xb6 },
		{ .addr = 0x10ec72, .byte = 0x8f },
		{ .addr = 0x10ec73, .byte = 0x8b }
};

static const SST_RamByte extw_final_ram_25[] = {
		{ .addr = 0x10ec6e, .byte = 0x48 },
		{ .addr = 0x10ec6f, .byte = 0x84 },
		{ .addr = 0x10ec70, .byte = 0x0e },
		{ .addr = 0x10ec71, .byte = 0xb6 },
		{ .addr = 0x10ec72, .byte = 0x8f },
		{ .addr = 0x10ec73, .byte = 0x8b }
};

static const SST_Transaction extw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1109106, .data = 36747, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_26[] = {
		{ .addr = 0x83aabe, .byte = 0x48 },
		{ .addr = 0x83aabf, .byte = 0x86 },
		{ .addr = 0x83aac0, .byte = 0xd9 },
		{ .addr = 0x83aac1, .byte = 0x21 },
		{ .addr = 0x83aac2, .byte = 0x65 },
		{ .addr = 0x83aac3, .byte = 0xff }
};

static const SST_RamByte extw_final_ram_26[] = {
		{ .addr = 0x83aabe, .byte = 0x48 },
		{ .addr = 0x83aabf, .byte = 0x86 },
		{ .addr = 0x83aac0, .byte = 0xd9 },
		{ .addr = 0x83aac1, .byte = 0x21 },
		{ .addr = 0x83aac2, .byte = 0x65 },
		{ .addr = 0x83aac3, .byte = 0xff }
};

static const SST_Transaction extw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8628930, .data = 26111, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_27[] = {
		{ .addr = 0x5600d4, .byte = 0x48 },
		{ .addr = 0x5600d5, .byte = 0x80 },
		{ .addr = 0x5600d6, .byte = 0x06 },
		{ .addr = 0x5600d7, .byte = 0x1e },
		{ .addr = 0x5600d8, .byte = 0xf9 },
		{ .addr = 0x5600d9, .byte = 0xf5 }
};

static const SST_RamByte extw_final_ram_27[] = {
		{ .addr = 0x5600d4, .byte = 0x48 },
		{ .addr = 0x5600d5, .byte = 0x80 },
		{ .addr = 0x5600d6, .byte = 0x06 },
		{ .addr = 0x5600d7, .byte = 0x1e },
		{ .addr = 0x5600d8, .byte = 0xf9 },
		{ .addr = 0x5600d9, .byte = 0xf5 }
};

static const SST_Transaction extw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5636312, .data = 63989, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_28[] = {
		{ .addr = 0x810226, .byte = 0x48 },
		{ .addr = 0x810227, .byte = 0x84 },
		{ .addr = 0x810228, .byte = 0xec },
		{ .addr = 0x810229, .byte = 0xd2 },
		{ .addr = 0x81022a, .byte = 0x7d },
		{ .addr = 0x81022b, .byte = 0x04 }
};

static const SST_RamByte extw_final_ram_28[] = {
		{ .addr = 0x810226, .byte = 0x48 },
		{ .addr = 0x810227, .byte = 0x84 },
		{ .addr = 0x810228, .byte = 0xec },
		{ .addr = 0x810229, .byte = 0xd2 },
		{ .addr = 0x81022a, .byte = 0x7d },
		{ .addr = 0x81022b, .byte = 0x04 }
};

static const SST_Transaction extw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8454698, .data = 32004, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_29[] = {
		{ .addr = 0x705f1c, .byte = 0x48 },
		{ .addr = 0x705f1d, .byte = 0x85 },
		{ .addr = 0x705f1e, .byte = 0x88 },
		{ .addr = 0x705f1f, .byte = 0x5f },
		{ .addr = 0x705f20, .byte = 0xd9 },
		{ .addr = 0x705f21, .byte = 0x12 }
};

static const SST_RamByte extw_final_ram_29[] = {
		{ .addr = 0x705f1c, .byte = 0x48 },
		{ .addr = 0x705f1d, .byte = 0x85 },
		{ .addr = 0x705f1e, .byte = 0x88 },
		{ .addr = 0x705f1f, .byte = 0x5f },
		{ .addr = 0x705f20, .byte = 0xd9 },
		{ .addr = 0x705f21, .byte = 0x12 }
};

static const SST_Transaction extw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7364384, .data = 55570, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_30[] = {
		{ .addr = 0x08fcd4, .byte = 0x48 },
		{ .addr = 0x08fcd5, .byte = 0x87 },
		{ .addr = 0x08fcd6, .byte = 0xd9 },
		{ .addr = 0x08fcd7, .byte = 0x70 },
		{ .addr = 0x08fcd8, .byte = 0x88 },
		{ .addr = 0x08fcd9, .byte = 0xf4 }
};

static const SST_RamByte extw_final_ram_30[] = {
		{ .addr = 0x08fcd4, .byte = 0x48 },
		{ .addr = 0x08fcd5, .byte = 0x87 },
		{ .addr = 0x08fcd6, .byte = 0xd9 },
		{ .addr = 0x08fcd7, .byte = 0x70 },
		{ .addr = 0x08fcd8, .byte = 0x88 },
		{ .addr = 0x08fcd9, .byte = 0xf4 }
};

static const SST_Transaction extw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 589016, .data = 35060, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_31[] = {
		{ .addr = 0xa03a26, .byte = 0x48 },
		{ .addr = 0xa03a27, .byte = 0x82 },
		{ .addr = 0xa03a28, .byte = 0x17 },
		{ .addr = 0xa03a29, .byte = 0x7e },
		{ .addr = 0xa03a2a, .byte = 0xa7 },
		{ .addr = 0xa03a2b, .byte = 0x02 }
};

static const SST_RamByte extw_final_ram_31[] = {
		{ .addr = 0xa03a26, .byte = 0x48 },
		{ .addr = 0xa03a27, .byte = 0x82 },
		{ .addr = 0xa03a28, .byte = 0x17 },
		{ .addr = 0xa03a29, .byte = 0x7e },
		{ .addr = 0xa03a2a, .byte = 0xa7 },
		{ .addr = 0xa03a2b, .byte = 0x02 }
};

static const SST_Transaction extw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10500650, .data = 42754, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase extw[] = {
	{
		.name = "000 EXT.w D2 4882",
		.initial = {
			.regs = {
				3819345852, 1802571790, 2247905797, 3018080418, 1989524333, 3317799016, 113612003, 2306054450, 884290329, 3066226699, 4172221593, 3709084570, 1373732245, 1684373549, 2131941452, 1893728, 12735908, 40982, 2338694
			},
			.prefetch0 = 18562,
			.prefetch1 = 50519,
			.ram = extw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3819345852, 1802571790, 2247884805, 3018080418, 1989524333, 3317799016, 113612003, 2306054450, 884290329, 3066226699, 4172221593, 3709084570, 1373732245, 1684373549, 2131941452, 1893728, 12735908, 40976, 2338696
			},
			.prefetch0 = 50519,
			.prefetch1 = 33243,
			.ram = extw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = extw_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 EXT.w D0 4880",
		.initial = {
			.regs = {
				1111886379, 3653213632, 1923607819, 3306724444, 1089892789, 3459238458, 503093272, 609338756, 200492426, 3113876213, 1139877842, 1802459568, 4107336994, 2811932507, 1917882612, 2011324, 6222310, 1814, 6736174
			},
			.prefetch0 = 18560,
			.prefetch1 = 53619,
			.ram = extw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1111883819, 3653213632, 1923607819, 3306724444, 1089892789, 3459238458, 503093272, 609338756, 200492426, 3113876213, 1139877842, 1802459568, 4107336994, 2811932507, 1917882612, 2011324, 6222310, 1808, 6736176
			},
			.prefetch0 = 53619,
			.prefetch1 = 25989,
			.ram = extw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = extw_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 EXT.w D6 4886",
		.initial = {
			.regs = {
				709206787, 2615684537, 561285861, 837264161, 836841374, 2874606146, 3387030556, 4121909454, 1493899314, 3745154757, 391327930, 1242426876, 1197648510, 3755016701, 1594183728, 956484, 10013326, 9751, 15578016
			},
			.prefetch0 = 18566,
			.prefetch1 = 57396,
			.ram = extw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				709206787, 2615684537, 561285861, 837264161, 836841374, 2874606146, 3386966044, 4121909454, 1493899314, 3745154757, 391327930, 1242426876, 1197648510, 3755016701, 1594183728, 956484, 10013326, 9744, 15578018
			},
			.prefetch0 = 57396,
			.prefetch1 = 23116,
			.ram = extw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = extw_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 EXT.w D5 4885",
		.initial = {
			.regs = {
				1608703755, 3215227584, 416755473, 1803046733, 4127969695, 3559411352, 532956632, 1196213666, 2572409913, 1759634297, 3620469232, 120228248, 3847636865, 1299236178, 3101593615, 14997098, 11078268, 8214, 11406818
			},
			.prefetch0 = 18565,
			.prefetch1 = 26109,
			.ram = extw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1608703755, 3215227584, 416755473, 1803046733, 4127969695, 3559456664, 532956632, 1196213666, 2572409913, 1759634297, 3620469232, 120228248, 3847636865, 1299236178, 3101593615, 14997098, 11078268, 8216, 11406820
			},
			.prefetch0 = 26109,
			.prefetch1 = 52478,
			.ram = extw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = extw_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 EXT.w D5 4885",
		.initial = {
			.regs = {
				354502980, 3696491526, 925346363, 1862746723, 3789073851, 1145047034, 2036463119, 1114407518, 802761098, 1246838950, 1344283622, 3728108290, 3425286975, 2476860260, 761265801, 5509394, 10859966, 8714, 2899412
			},
			.prefetch0 = 18565,
			.prefetch1 = 62998,
			.ram = extw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				354502980, 3696491526, 925346363, 1862746723, 3789073851, 1145110522, 2036463119, 1114407518, 802761098, 1246838950, 1344283622, 3728108290, 3425286975, 2476860260, 761265801, 5509394, 10859966, 8712, 2899414
			},
			.prefetch0 = 62998,
			.prefetch1 = 12686,
			.ram = extw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = extw_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 EXT.w D1 4881",
		.initial = {
			.regs = {
				2339596301, 683703443, 1079919456, 1643784705, 2854139105, 2624993341, 1558351120, 3726930652, 2200204296, 1384601999, 2970833616, 2654219065, 770488690, 3532118675, 1821742197, 16144128, 12166926, 1305, 10593594
			},
			.prefetch0 = 18561,
			.prefetch1 = 5939,
			.ram = extw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2339596301, 683736979, 1079919456, 1643784705, 2854139105, 2624993341, 1558351120, 3726930652, 2200204296, 1384601999, 2970833616, 2654219065, 770488690, 3532118675, 1821742197, 16144128, 12166926, 1304, 10593596
			},
			.prefetch0 = 5939,
			.prefetch1 = 30717,
			.ram = extw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = extw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 EXT.w D6 4886",
		.initial = {
			.regs = {
				2752519455, 2034234412, 388284496, 3622411838, 2346984395, 1258673324, 3273578246, 4015740370, 2780818603, 1595521247, 2484846750, 4159258561, 1302631103, 2870886760, 1349228920, 7194240, 4774730, 256, 11510240
			},
			.prefetch0 = 18566,
			.prefetch1 = 55549,
			.ram = extw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2752519455, 2034234412, 388284496, 3622411838, 2346984395, 1258673324, 3273523206, 4015740370, 2780818603, 1595521247, 2484846750, 4159258561, 1302631103, 2870886760, 1349228920, 7194240, 4774730, 256, 11510242
			},
			.prefetch0 = 55549,
			.prefetch1 = 14442,
			.ram = extw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = extw_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 EXT.w D0 4880",
		.initial = {
			.regs = {
				2177813483, 4265664897, 928580475, 1558424988, 1639548980, 1660697532, 651224402, 2779077390, 3888987067, 3732265622, 1141289822, 543921708, 2534845509, 4035246611, 3134974364, 1314742, 1054904, 41499, 8341930
			},
			.prefetch0 = 18560,
			.prefetch1 = 30743,
			.ram = extw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2177826795, 4265664897, 928580475, 1558424988, 1639548980, 1660697532, 651224402, 2779077390, 3888987067, 3732265622, 1141289822, 543921708, 2534845509, 4035246611, 3134974364, 1314742, 1054904, 41496, 8341932
			},
			.prefetch0 = 30743,
			.prefetch1 = 8039,
			.ram = extw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = extw_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 EXT.w D5 4885",
		.initial = {
			.regs = {
				1829504001, 218855536, 62313384, 3870946722, 2742034828, 4081613680, 1084270412, 1539733555, 4217464260, 3822538312, 3555509472, 1808272364, 4097817794, 3934533248, 2156600106, 15180314, 14673640, 8961, 6764560
			},
			.prefetch0 = 18565,
			.prefetch1 = 14610,
			.ram = extw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1829504001, 218855536, 62313384, 3870946722, 2742034828, 4081582192, 1084270412, 1539733555, 4217464260, 3822538312, 3555509472, 1808272364, 4097817794, 3934533248, 2156600106, 15180314, 14673640, 8960, 6764562
			},
			.prefetch0 = 14610,
			.prefetch1 = 51027,
			.ram = extw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = extw_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 EXT.w D7 4887",
		.initial = {
			.regs = {
				3400063066, 2543341029, 3066758452, 1857896227, 2227988686, 3973906026, 1019035206, 311449458, 1823611227, 82640546, 3405140443, 1628384463, 4041206569, 1684045339, 1861746742, 9517036, 7294274, 42760, 12167358
			},
			.prefetch0 = 18567,
			.prefetch1 = 25232,
			.ram = extw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3400063066, 2543341029, 3066758452, 1857896227, 2227988686, 3973906026, 1019035206, 311427186, 1823611227, 82640546, 3405140443, 1628384463, 4041206569, 1684045339, 1861746742, 9517036, 7294274, 42752, 12167360
			},
			.prefetch0 = 25232,
			.prefetch1 = 9783,
			.ram = extw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = extw_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 EXT.w D2 4882",
		.initial = {
			.regs = {
				866892432, 3703102508, 675049562, 3705649915, 2339767268, 1472337478, 4276947967, 3320054101, 2075070443, 94982439, 570099896, 945410959, 196637978, 1265050887, 3429446021, 4560952, 10150712, 9237, 9283122
			},
			.prefetch0 = 18562,
			.prefetch1 = 52659,
			.ram = extw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				866892432, 3703102508, 675020890, 3705649915, 2339767268, 1472337478, 4276947967, 3320054101, 2075070443, 94982439, 570099896, 945410959, 196637978, 1265050887, 3429446021, 4560952, 10150712, 9232, 9283124
			},
			.prefetch0 = 52659,
			.prefetch1 = 26924,
			.ram = extw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = extw_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 EXT.w D3 4883",
		.initial = {
			.regs = {
				3206024747, 764526077, 635251506, 1830538834, 1141583896, 4059360304, 1106082345, 3238392247, 2565076416, 3006485834, 1066844955, 4000248421, 642616530, 2737140127, 3230422733, 5831330, 14388416, 9485, 9623264
			},
			.prefetch0 = 18563,
			.prefetch1 = 46533,
			.ram = extw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3206024747, 764526077, 635251506, 1830486098, 1141583896, 4059360304, 1106082345, 3238392247, 2565076416, 3006485834, 1066844955, 4000248421, 642616530, 2737140127, 3230422733, 5831330, 14388416, 9472, 9623266
			},
			.prefetch0 = 46533,
			.prefetch1 = 63562,
			.ram = extw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = extw_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 EXT.w D6 4886",
		.initial = {
			.regs = {
				745309224, 3447742721, 2649277148, 2882119459, 1093750280, 3673572030, 135328976, 3892342708, 2841847548, 147233401, 429750432, 1974699400, 860107291, 379127105, 3835139645, 7984920, 12327534, 9229, 7286092
			},
			.prefetch0 = 18566,
			.prefetch1 = 41786,
			.ram = extw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				745309224, 3447742721, 2649277148, 2882119459, 1093750280, 3673572030, 135331792, 3892342708, 2841847548, 147233401, 429750432, 1974699400, 860107291, 379127105, 3835139645, 7984920, 12327534, 9224, 7286094
			},
			.prefetch0 = 41786,
			.prefetch1 = 40206,
			.ram = extw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = extw_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 EXT.w D7 4887",
		.initial = {
			.regs = {
				1675967391, 2522844848, 1703031369, 1808150980, 3578863803, 1173154925, 1756914213, 319012635, 1682454110, 839539986, 2784871527, 790584951, 2921212153, 2741125205, 2785198236, 8436450, 1248226, 33283, 2413998
			},
			.prefetch0 = 18567,
			.prefetch1 = 22374,
			.ram = extw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1675967391, 2522844848, 1703031369, 1808150980, 3578863803, 1173154925, 1756914213, 318963739, 1682454110, 839539986, 2784871527, 790584951, 2921212153, 2741125205, 2785198236, 8436450, 1248226, 33280, 2414000
			},
			.prefetch0 = 22374,
			.prefetch1 = 29011,
			.ram = extw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = extw_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 EXT.w D0 4880",
		.initial = {
			.regs = {
				1652241747, 278156443, 2564270704, 1289020367, 4166534185, 2810560269, 2397972088, 1151636465, 865692543, 511226751, 2049065190, 3551549114, 1427598862, 453309268, 316022246, 7105468, 1321636, 41988, 7819668
			},
			.prefetch0 = 18560,
			.prefetch1 = 17500,
			.ram = extw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1652228179, 278156443, 2564270704, 1289020367, 4166534185, 2810560269, 2397972088, 1151636465, 865692543, 511226751, 2049065190, 3551549114, 1427598862, 453309268, 316022246, 7105468, 1321636, 41984, 7819670
			},
			.prefetch0 = 17500,
			.prefetch1 = 54282,
			.ram = extw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = extw_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 EXT.w D1 4881",
		.initial = {
			.regs = {
				3734682658, 1395262908, 4192910967, 754915488, 696009530, 1476871196, 3742269911, 4150507651, 912097165, 1932571957, 3313794851, 3400917867, 3615274769, 2272566917, 410220380, 16658086, 12735736, 269, 13346756
			},
			.prefetch0 = 18561,
			.prefetch1 = 61064,
			.ram = extw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3734682658, 1395326908, 4192910967, 754915488, 696009530, 1476871196, 3742269911, 4150507651, 912097165, 1932571957, 3313794851, 3400917867, 3615274769, 2272566917, 410220380, 16658086, 12735736, 264, 13346758
			},
			.prefetch0 = 61064,
			.prefetch1 = 50432,
			.ram = extw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = extw_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "016 EXT.w D3 4883",
		.initial = {
			.regs = {
				2478370541, 4154382586, 3064999530, 2972778530, 1057186959, 625127966, 2361508632, 1344041195, 4231127371, 1297562111, 1477671828, 1849660017, 1551637385, 3969027363, 3192245446, 111152, 14985054, 9225, 7892610
			},
			.prefetch0 = 18563,
			.prefetch1 = 47094,
			.ram = extw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2478370541, 4154382586, 3064999530, 2972778530, 1057186959, 625127966, 2361508632, 1344041195, 4231127371, 1297562111, 1477671828, 1849660017, 1551637385, 3969027363, 3192245446, 111152, 14985054, 9216, 7892612
			},
			.prefetch0 = 47094,
			.prefetch1 = 17695,
			.ram = extw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = extw_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 EXT.w D3 4883",
		.initial = {
			.regs = {
				342454793, 2949313285, 339879030, 1735963609, 1159311297, 766373693, 498172941, 2384812989, 1863285260, 768325934, 580213515, 1277236189, 2962712383, 99699798, 4229247395, 5925494, 10127734, 40967, 15327614
			},
			.prefetch0 = 18563,
			.prefetch1 = 5138,
			.ram = extw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				342454793, 2949313285, 339879030, 1735983065, 1159311297, 766373693, 498172941, 2384812989, 1863285260, 768325934, 580213515, 1277236189, 2962712383, 99699798, 4229247395, 5925494, 10127734, 40968, 15327616
			},
			.prefetch0 = 5138,
			.prefetch1 = 23845,
			.ram = extw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = extw_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 EXT.w D5 4885",
		.initial = {
			.regs = {
				3226947643, 701958266, 707303661, 3692438497, 1342780773, 3404602406, 3197110582, 690471504, 2595071130, 520979586, 325707161, 2343595357, 896031886, 2415250967, 1109857238, 7851342, 9558598, 797, 1418206
			},
			.prefetch0 = 18565,
			.prefetch1 = 65206,
			.ram = extw_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3226947643, 701958266, 707303661, 3692438497, 1342780773, 3404595238, 3197110582, 690471504, 2595071130, 520979586, 325707161, 2343595357, 896031886, 2415250967, 1109857238, 7851342, 9558598, 784, 1418208
			},
			.prefetch0 = 65206,
			.prefetch1 = 45244,
			.ram = extw_final_ram_18,
			.ram_len = 6,
		},
		.transactions = extw_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 EXT.w D5 4885",
		.initial = {
			.regs = {
				3331904987, 2354476666, 274890588, 1459676021, 4069782388, 96068043, 3988888418, 900747570, 1593218171, 3372590095, 2671692963, 1606326111, 2787715481, 903756842, 1802959026, 16391556, 5046354, 34075, 2366210
			},
			.prefetch0 = 18565,
			.prefetch1 = 3726,
			.ram = extw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3331904987, 2354476666, 274890588, 1459676021, 4069782388, 96075723, 3988888418, 900747570, 1593218171, 3372590095, 2671692963, 1606326111, 2787715481, 903756842, 1802959026, 16391556, 5046354, 34072, 2366212
			},
			.prefetch0 = 3726,
			.prefetch1 = 40138,
			.ram = extw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = extw_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 EXT.w D5 4885",
		.initial = {
			.regs = {
				2465520396, 2790880760, 4136093037, 3405509349, 3240711006, 485150444, 2596157364, 4236753647, 3640841445, 2740202474, 776495403, 363640413, 4268623812, 730238722, 2621734804, 13466896, 16587198, 34586, 8705888
			},
			.prefetch0 = 18565,
			.prefetch1 = 65318,
			.ram = extw_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2465520396, 2790880760, 4136093037, 3405509349, 3240711006, 485162988, 2596157364, 4236753647, 3640841445, 2740202474, 776495403, 363640413, 4268623812, 730238722, 2621734804, 13466896, 16587198, 34584, 8705890
			},
			.prefetch0 = 65318,
			.prefetch1 = 54199,
			.ram = extw_final_ram_20,
			.ram_len = 6,
		},
		.transactions = extw_transactions_20,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "021 EXT.w D2 4882",
		.initial = {
			.regs = {
				4224009345, 4195446419, 1921304169, 4005602945, 3135741882, 514370767, 721667638, 2939426754, 1171648349, 800254717, 133567299, 3911490545, 1907963138, 3681208989, 188119425, 11738880, 3796706, 8220, 16564942
			},
			.prefetch0 = 18562,
			.prefetch1 = 24434,
			.ram = extw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4224009345, 4195446419, 1921253481, 4005602945, 3135741882, 514370767, 721667638, 2939426754, 1171648349, 800254717, 133567299, 3911490545, 1907963138, 3681208989, 188119425, 11738880, 3796706, 8208, 16564944
			},
			.prefetch0 = 24434,
			.prefetch1 = 26656,
			.ram = extw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = extw_transactions_21,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "022 EXT.w D0 4880",
		.initial = {
			.regs = {
				1817281673, 1698060859, 1293269733, 3017926337, 2688085044, 4040732902, 3723535809, 418640336, 3478017328, 3048567887, 3323125764, 2466710653, 2948320818, 452848945, 828291493, 3392848, 12636696, 41220, 1345862
			},
			.prefetch0 = 18560,
			.prefetch1 = 49665,
			.ram = extw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1817313161, 1698060859, 1293269733, 3017926337, 2688085044, 4040732902, 3723535809, 418640336, 3478017328, 3048567887, 3323125764, 2466710653, 2948320818, 452848945, 828291493, 3392848, 12636696, 41224, 1345864
			},
			.prefetch0 = 49665,
			.prefetch1 = 13976,
			.ram = extw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = extw_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 EXT.w D1 4881",
		.initial = {
			.regs = {
				4110421749, 72993698, 1471748682, 1987288496, 3045170624, 2717542449, 2615359636, 2870215701, 717743043, 672469742, 2130130964, 233008077, 1483914802, 3810735850, 1517707626, 2372954, 1577826, 34567, 8130396
			},
			.prefetch0 = 18561,
			.prefetch1 = 21060,
			.ram = extw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4110421749, 73007010, 1471748682, 1987288496, 3045170624, 2717542449, 2615359636, 2870215701, 717743043, 672469742, 2130130964, 233008077, 1483914802, 3810735850, 1517707626, 2372954, 1577826, 34568, 8130398
			},
			.prefetch0 = 21060,
			.prefetch1 = 55534,
			.ram = extw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = extw_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 EXT.w D5 4885",
		.initial = {
			.regs = {
				2636323941, 1083047744, 4276468844, 4119434884, 3774459822, 4191385212, 2202355413, 3599039305, 1670268180, 1591807257, 1809742118, 3659337576, 3575622371, 1323830849, 1781829926, 14716690, 88412, 10011, 155568
			},
			.prefetch0 = 18565,
			.prefetch1 = 65525,
			.ram = extw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2636323941, 1083047744, 4276468844, 4119434884, 3774459822, 4191355004, 2202355413, 3599039305, 1670268180, 1591807257, 1809742118, 3659337576, 3575622371, 1323830849, 1781829926, 14716690, 88412, 10000, 155570
			},
			.prefetch0 = 65525,
			.prefetch1 = 5401,
			.ram = extw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = extw_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 EXT.w D4 4884",
		.initial = {
			.regs = {
				1029099402, 2479353161, 2070277841, 3566817089, 2998398971, 62292375, 2047936081, 2292758772, 4066043062, 1515295022, 2695035468, 3146144660, 402802868, 1398723169, 1789097526, 13238438, 5982650, 5, 1109106
			},
			.prefetch0 = 18564,
			.prefetch1 = 3766,
			.ram = extw_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1029099402, 2479353161, 2070277841, 3566817089, 2998403067, 62292375, 2047936081, 2292758772, 4066043062, 1515295022, 2695035468, 3146144660, 402802868, 1398723169, 1789097526, 13238438, 5982650, 8, 1109108
			},
			.prefetch0 = 3766,
			.prefetch1 = 36747,
			.ram = extw_final_ram_25,
			.ram_len = 6,
		},
		.transactions = extw_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 EXT.w D6 4886",
		.initial = {
			.regs = {
				341050845, 4026868672, 4046265013, 725639933, 3676741893, 2791779537, 444774754, 2553163850, 4195142536, 3331735467, 3268892688, 1678455194, 1528853183, 3436852119, 112587343, 13257802, 6021366, 33564, 8628930
			},
			.prefetch0 = 18566,
			.prefetch1 = 55585,
			.ram = extw_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				341050845, 4026868672, 4046265013, 725639933, 3676741893, 2791779537, 444727394, 2553163850, 4195142536, 3331735467, 3268892688, 1678455194, 1528853183, 3436852119, 112587343, 13257802, 6021366, 33552, 8628932
			},
			.prefetch0 = 55585,
			.prefetch1 = 26111,
			.ram = extw_final_ram_26,
			.ram_len = 6,
		},
		.transactions = extw_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 EXT.w D0 4880",
		.initial = {
			.regs = {
				2266647417, 3591089233, 1791487023, 540648235, 3289522980, 2671756180, 2067241583, 1227430296, 4071910044, 1028111890, 2409218982, 1846146920, 2146220985, 4163741154, 1792082675, 8037370, 7619396, 33810, 5636312
			},
			.prefetch0 = 18560,
			.prefetch1 = 1566,
			.ram = extw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2266628217, 3591089233, 1791487023, 540648235, 3289522980, 2671756180, 2067241583, 1227430296, 4071910044, 1028111890, 2409218982, 1846146920, 2146220985, 4163741154, 1792082675, 8037370, 7619396, 33808, 5636314
			},
			.prefetch0 = 1566,
			.prefetch1 = 63989,
			.ram = extw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = extw_transactions_27,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "028 EXT.w D4 4884",
		.initial = {
			.regs = {
				1584344046, 1400450498, 2510091248, 3665913978, 3725385933, 687964531, 193861945, 566352836, 3755933843, 1771022032, 2485061761, 2830196581, 622222737, 1002009041, 44360287, 5595998, 3838478, 8960, 8454698
			},
			.prefetch0 = 18564,
			.prefetch1 = 60626,
			.ram = extw_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1584344046, 1400450498, 2510091248, 3665913978, 3725393869, 687964531, 193861945, 566352836, 3755933843, 1771022032, 2485061761, 2830196581, 622222737, 1002009041, 44360287, 5595998, 3838478, 8968, 8454700
			},
			.prefetch0 = 60626,
			.prefetch1 = 32004,
			.ram = extw_final_ram_28,
			.ram_len = 6,
		},
		.transactions = extw_transactions_28,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "029 EXT.w D5 4885",
		.initial = {
			.regs = {
				2066933079, 983309531, 1287340863, 2312842781, 365988655, 581393946, 2640880846, 4163737148, 671161495, 500728257, 3812461622, 3489718522, 3601897725, 1902267864, 2935924611, 14215998, 8296742, 41219, 7364384
			},
			.prefetch0 = 18565,
			.prefetch1 = 34911,
			.ram = extw_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2066933079, 983309531, 1287340863, 2312842781, 365988655, 581369882, 2640880846, 4163737148, 671161495, 500728257, 3812461622, 3489718522, 3601897725, 1902267864, 2935924611, 14215998, 8296742, 41216, 7364386
			},
			.prefetch0 = 34911,
			.prefetch1 = 55570,
			.ram = extw_final_ram_29,
			.ram_len = 6,
		},
		.transactions = extw_transactions_29,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "030 EXT.w D7 4887",
		.initial = {
			.regs = {
				2253353196, 2764828272, 197253660, 112397303, 3805768087, 3411216618, 2333628841, 4250970095, 886236948, 3945337003, 1949643686, 2462176899, 480782904, 555180765, 1996880987, 7964586, 3225548, 9731, 589016
			},
			.prefetch0 = 18567,
			.prefetch1 = 55664,
			.ram = extw_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2253353196, 2764828272, 197253660, 112397303, 3805768087, 3411216618, 2333628841, 4250992623, 886236948, 3945337003, 1949643686, 2462176899, 480782904, 555180765, 1996880987, 7964586, 3225548, 9736, 589018
			},
			.prefetch0 = 55664,
			.prefetch1 = 35060,
			.ram = extw_final_ram_30,
			.ram_len = 6,
		},
		.transactions = extw_transactions_30,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "031 EXT.w D2 4882",
		.initial = {
			.regs = {
				4223621890, 1892982958, 2844668728, 788269878, 946002573, 2462428196, 1172023007, 3023398713, 3602627324, 450877948, 1465098373, 4144885459, 2791508810, 3758400963, 2585045453, 3965638, 7077698, 782, 10500650
			},
			.prefetch0 = 18562,
			.prefetch1 = 6014,
			.ram = extw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4223621890, 1892982958, 2844655672, 788269878, 946002573, 2462428196, 1172023007, 3023398713, 3602627324, 450877948, 1465098373, 4144885459, 2791508810, 3758400963, 2585045453, 3965638, 7077698, 768, 10500652
			},
			.prefetch0 = 6014,
			.prefetch1 = 42754,
			.ram = extw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = extw_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_EXTW_H */