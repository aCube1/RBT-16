#ifndef RBT_NBCD_H
#define RBT_NBCD_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte nbcd_initial_ram_0[] = {
		{ .addr = 0x851ff2, .byte = 0x48 },
		{ .addr = 0x851ff3, .byte = 0x15 },
		{ .addr = 0x851ff4, .byte = 0xae },
		{ .addr = 0x851ff5, .byte = 0xa8 },
		{ .addr = 0x918ae8, .byte = 0xd3 },
		{ .addr = 0x918ae9, .byte = 0x9e },
		{ .addr = 0x851ff6, .byte = 0xe2 },
		{ .addr = 0x851ff7, .byte = 0x8b }
};

static const SST_RamByte nbcd_final_ram_0[] = {
		{ .addr = 0x851ff2, .byte = 0x48 },
		{ .addr = 0x851ff3, .byte = 0x15 },
		{ .addr = 0x851ff4, .byte = 0xae },
		{ .addr = 0x851ff5, .byte = 0xa8 },
		{ .addr = 0x918ae8, .byte = 0xd3 },
		{ .addr = 0x918ae9, .byte = 0xfb },
		{ .addr = 0x851ff6, .byte = 0xe2 },
		{ .addr = 0x851ff7, .byte = 0x8b }
};

static const SST_Transaction nbcd_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9538280, .data = 158, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8724470, .data = 57995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9538280, .data = 251, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_1[] = {
		{ .addr = 0x78d3f6, .byte = 0x48 },
		{ .addr = 0x78d3f7, .byte = 0x2b },
		{ .addr = 0x78d3f8, .byte = 0xe1 },
		{ .addr = 0x78d3f9, .byte = 0x71 },
		{ .addr = 0x78d3fa, .byte = 0x32 },
		{ .addr = 0x78d3fb, .byte = 0x0a },
		{ .addr = 0x9d80a2, .byte = 0xfb },
		{ .addr = 0x9d80a3, .byte = 0xb0 },
		{ .addr = 0x78d3fc, .byte = 0xa0 },
		{ .addr = 0x78d3fd, .byte = 0x13 }
};

static const SST_RamByte nbcd_final_ram_1[] = {
		{ .addr = 0x78d3f6, .byte = 0x48 },
		{ .addr = 0x78d3f7, .byte = 0x2b },
		{ .addr = 0x78d3f8, .byte = 0xe1 },
		{ .addr = 0x78d3f9, .byte = 0x71 },
		{ .addr = 0x78d3fa, .byte = 0x32 },
		{ .addr = 0x78d3fb, .byte = 0x0a },
		{ .addr = 0x9d80a2, .byte = 0xfb },
		{ .addr = 0x9d80a3, .byte = 0xf0 },
		{ .addr = 0x78d3fc, .byte = 0xa0 },
		{ .addr = 0x78d3fd, .byte = 0x13 }
};

static const SST_Transaction nbcd_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7918586, .data = 12810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10322082, .data = 176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7918588, .data = 40979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10322082, .data = 240, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_2[] = {
		{ .addr = 0x8d8fa2, .byte = 0x48 },
		{ .addr = 0x8d8fa3, .byte = 0x21 },
		{ .addr = 0x8d8fa4, .byte = 0x06 },
		{ .addr = 0x8d8fa5, .byte = 0x75 },
		{ .addr = 0xedaf48, .byte = 0x7a },
		{ .addr = 0xedaf49, .byte = 0x4e },
		{ .addr = 0x8d8fa6, .byte = 0x38 },
		{ .addr = 0x8d8fa7, .byte = 0xad }
};

static const SST_RamByte nbcd_final_ram_2[] = {
		{ .addr = 0x8d8fa2, .byte = 0x48 },
		{ .addr = 0x8d8fa3, .byte = 0x21 },
		{ .addr = 0x8d8fa4, .byte = 0x06 },
		{ .addr = 0x8d8fa5, .byte = 0x75 },
		{ .addr = 0xedaf48, .byte = 0x7a },
		{ .addr = 0xedaf49, .byte = 0x4b },
		{ .addr = 0x8d8fa6, .byte = 0x38 },
		{ .addr = 0x8d8fa7, .byte = 0xad }
};

static const SST_Transaction nbcd_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15576904, .data = 78, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9277350, .data = 14509, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15576904, .data = 75, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_3[] = {
		{ .addr = 0x717368, .byte = 0x48 },
		{ .addr = 0x717369, .byte = 0x2c },
		{ .addr = 0x71736a, .byte = 0x4d },
		{ .addr = 0x71736b, .byte = 0x02 },
		{ .addr = 0x71736c, .byte = 0x53 },
		{ .addr = 0x71736d, .byte = 0x7d },
		{ .addr = 0x65afd8, .byte = 0x4e },
		{ .addr = 0x65afd9, .byte = 0x2e },
		{ .addr = 0x71736e, .byte = 0x93 },
		{ .addr = 0x71736f, .byte = 0xb2 }
};

static const SST_RamByte nbcd_final_ram_3[] = {
		{ .addr = 0x717368, .byte = 0x48 },
		{ .addr = 0x717369, .byte = 0x2c },
		{ .addr = 0x71736a, .byte = 0x4d },
		{ .addr = 0x71736b, .byte = 0x02 },
		{ .addr = 0x71736c, .byte = 0x53 },
		{ .addr = 0x71736d, .byte = 0x7d },
		{ .addr = 0x65afd8, .byte = 0x4c },
		{ .addr = 0x65afd9, .byte = 0x2e },
		{ .addr = 0x71736e, .byte = 0x93 },
		{ .addr = 0x71736f, .byte = 0xb2 }
};

static const SST_Transaction nbcd_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7435116, .data = 21373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6664152, .data = 19968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7435118, .data = 37810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6664152, .data = 19456, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_4[] = {
		{ .addr = 0x34b614, .byte = 0x48 },
		{ .addr = 0x34b615, .byte = 0x27 },
		{ .addr = 0x34b616, .byte = 0xb0 },
		{ .addr = 0x34b617, .byte = 0x17 },
		{ .addr = 0xb0000e, .byte = 0x40 },
		{ .addr = 0xb0000f, .byte = 0x56 },
		{ .addr = 0x34b618, .byte = 0x25 },
		{ .addr = 0x34b619, .byte = 0x96 }
};

static const SST_RamByte nbcd_final_ram_4[] = {
		{ .addr = 0x34b614, .byte = 0x48 },
		{ .addr = 0x34b615, .byte = 0x27 },
		{ .addr = 0x34b616, .byte = 0xb0 },
		{ .addr = 0x34b617, .byte = 0x17 },
		{ .addr = 0xb0000e, .byte = 0x60 },
		{ .addr = 0xb0000f, .byte = 0x56 },
		{ .addr = 0x34b618, .byte = 0x25 },
		{ .addr = 0x34b619, .byte = 0x96 }
};

static const SST_Transaction nbcd_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11534350, .data = 16384, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3454488, .data = 9622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11534350, .data = 24576, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_5[] = {
		{ .addr = 0xa5c198, .byte = 0x48 },
		{ .addr = 0xa5c199, .byte = 0x2f },
		{ .addr = 0xa5c19a, .byte = 0x40 },
		{ .addr = 0xa5c19b, .byte = 0x62 },
		{ .addr = 0xa5c19c, .byte = 0x8a },
		{ .addr = 0xa5c19d, .byte = 0x04 },
		{ .addr = 0x12af34, .byte = 0x1e },
		{ .addr = 0x12af35, .byte = 0x34 },
		{ .addr = 0xa5c19e, .byte = 0xbd },
		{ .addr = 0xa5c19f, .byte = 0x92 }
};

static const SST_RamByte nbcd_final_ram_5[] = {
		{ .addr = 0xa5c198, .byte = 0x48 },
		{ .addr = 0xa5c199, .byte = 0x2f },
		{ .addr = 0xa5c19a, .byte = 0x40 },
		{ .addr = 0xa5c19b, .byte = 0x62 },
		{ .addr = 0xa5c19c, .byte = 0x8a },
		{ .addr = 0xa5c19d, .byte = 0x04 },
		{ .addr = 0x12af34, .byte = 0x7b },
		{ .addr = 0x12af35, .byte = 0x34 },
		{ .addr = 0xa5c19e, .byte = 0xbd },
		{ .addr = 0xa5c19f, .byte = 0x92 }
};

static const SST_Transaction nbcd_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10863004, .data = 35332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1224500, .data = 7680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10863006, .data = 48530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1224500, .data = 31488, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_6[] = {
		{ .addr = 0x969e06, .byte = 0x48 },
		{ .addr = 0x969e07, .byte = 0x16 },
		{ .addr = 0x969e08, .byte = 0xe3 },
		{ .addr = 0x969e09, .byte = 0xc7 },
		{ .addr = 0x866220, .byte = 0x5c },
		{ .addr = 0x866221, .byte = 0xad },
		{ .addr = 0x969e0a, .byte = 0xe7 },
		{ .addr = 0x969e0b, .byte = 0x2c }
};

static const SST_RamByte nbcd_final_ram_6[] = {
		{ .addr = 0x969e06, .byte = 0x48 },
		{ .addr = 0x969e07, .byte = 0x16 },
		{ .addr = 0x969e08, .byte = 0xe3 },
		{ .addr = 0x969e09, .byte = 0xc7 },
		{ .addr = 0x866220, .byte = 0x3e },
		{ .addr = 0x866221, .byte = 0xad },
		{ .addr = 0x969e0a, .byte = 0xe7 },
		{ .addr = 0x969e0b, .byte = 0x2c }
};

static const SST_Transaction nbcd_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8806944, .data = 23552, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9870858, .data = 59180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8806944, .data = 15872, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_7[] = {
		{ .addr = 0x5ddb5c, .byte = 0x48 },
		{ .addr = 0x5ddb5d, .byte = 0x32 },
		{ .addr = 0x5ddb5e, .byte = 0x18 },
		{ .addr = 0x5ddb5f, .byte = 0x6d },
		{ .addr = 0x5ddb60, .byte = 0x6a },
		{ .addr = 0x5ddb61, .byte = 0x7f },
		{ .addr = 0x9b1ce0, .byte = 0x49 },
		{ .addr = 0x9b1ce1, .byte = 0x4a },
		{ .addr = 0x5ddb62, .byte = 0x83 },
		{ .addr = 0x5ddb63, .byte = 0x67 }
};

static const SST_RamByte nbcd_final_ram_7[] = {
		{ .addr = 0x5ddb5c, .byte = 0x48 },
		{ .addr = 0x5ddb5d, .byte = 0x32 },
		{ .addr = 0x5ddb5e, .byte = 0x18 },
		{ .addr = 0x5ddb5f, .byte = 0x6d },
		{ .addr = 0x5ddb60, .byte = 0x6a },
		{ .addr = 0x5ddb61, .byte = 0x7f },
		{ .addr = 0x9b1ce0, .byte = 0x51 },
		{ .addr = 0x9b1ce1, .byte = 0x4a },
		{ .addr = 0x5ddb62, .byte = 0x83 },
		{ .addr = 0x5ddb63, .byte = 0x67 }
};

static const SST_Transaction nbcd_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6151008, .data = 27263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10165472, .data = 18688, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6151010, .data = 33639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10165472, .data = 20736, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_8[] = {
		{ .addr = 0x12cc08, .byte = 0x48 },
		{ .addr = 0x12cc09, .byte = 0x02 },
		{ .addr = 0x12cc0a, .byte = 0x94 },
		{ .addr = 0x12cc0b, .byte = 0x6e },
		{ .addr = 0x12cc0c, .byte = 0x89 },
		{ .addr = 0x12cc0d, .byte = 0xaf }
};

static const SST_RamByte nbcd_final_ram_8[] = {
		{ .addr = 0x12cc08, .byte = 0x48 },
		{ .addr = 0x12cc09, .byte = 0x02 },
		{ .addr = 0x12cc0a, .byte = 0x94 },
		{ .addr = 0x12cc0b, .byte = 0x6e },
		{ .addr = 0x12cc0c, .byte = 0x89 },
		{ .addr = 0x12cc0d, .byte = 0xaf }
};

static const SST_Transaction nbcd_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1231884, .data = 35247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte nbcd_initial_ram_9[] = {
		{ .addr = 0x14ca3e, .byte = 0x48 },
		{ .addr = 0x14ca3f, .byte = 0x1a },
		{ .addr = 0x14ca40, .byte = 0xf5 },
		{ .addr = 0x14ca41, .byte = 0x38 },
		{ .addr = 0x9d015c, .byte = 0x3a },
		{ .addr = 0x9d015d, .byte = 0xee },
		{ .addr = 0x14ca42, .byte = 0xea },
		{ .addr = 0x14ca43, .byte = 0xe6 }
};

static const SST_RamByte nbcd_final_ram_9[] = {
		{ .addr = 0x14ca3e, .byte = 0x48 },
		{ .addr = 0x14ca3f, .byte = 0x1a },
		{ .addr = 0x14ca40, .byte = 0xf5 },
		{ .addr = 0x14ca41, .byte = 0x38 },
		{ .addr = 0x9d015c, .byte = 0x3a },
		{ .addr = 0x9d015d, .byte = 0xac },
		{ .addr = 0x14ca42, .byte = 0xea },
		{ .addr = 0x14ca43, .byte = 0xe6 }
};

static const SST_Transaction nbcd_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10289500, .data = 238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1362498, .data = 60134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10289500, .data = 172, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_10[] = {
		{ .addr = 0x63fd04, .byte = 0x48 },
		{ .addr = 0x63fd05, .byte = 0x1f },
		{ .addr = 0x63fd06, .byte = 0xab },
		{ .addr = 0x63fd07, .byte = 0x41 },
		{ .addr = 0x7d143c, .byte = 0x5e },
		{ .addr = 0x7d143d, .byte = 0x98 },
		{ .addr = 0x63fd08, .byte = 0x98 },
		{ .addr = 0x63fd09, .byte = 0xe7 }
};

static const SST_RamByte nbcd_final_ram_10[] = {
		{ .addr = 0x63fd04, .byte = 0x48 },
		{ .addr = 0x63fd05, .byte = 0x1f },
		{ .addr = 0x63fd06, .byte = 0xab },
		{ .addr = 0x63fd07, .byte = 0x41 },
		{ .addr = 0x7d143c, .byte = 0x3b },
		{ .addr = 0x7d143d, .byte = 0x98 },
		{ .addr = 0x63fd08, .byte = 0x98 },
		{ .addr = 0x63fd09, .byte = 0xe7 }
};

static const SST_Transaction nbcd_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8197180, .data = 24064, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6552840, .data = 39143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8197180, .data = 15104, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_11[] = {
		{ .addr = 0x5ef18c, .byte = 0x48 },
		{ .addr = 0x5ef18d, .byte = 0x00 },
		{ .addr = 0x5ef18e, .byte = 0xe7 },
		{ .addr = 0x5ef18f, .byte = 0xd1 },
		{ .addr = 0x5ef190, .byte = 0x1b },
		{ .addr = 0x5ef191, .byte = 0x45 }
};

static const SST_RamByte nbcd_final_ram_11[] = {
		{ .addr = 0x5ef18c, .byte = 0x48 },
		{ .addr = 0x5ef18d, .byte = 0x00 },
		{ .addr = 0x5ef18e, .byte = 0xe7 },
		{ .addr = 0x5ef18f, .byte = 0xd1 },
		{ .addr = 0x5ef190, .byte = 0x1b },
		{ .addr = 0x5ef191, .byte = 0x45 }
};

static const SST_Transaction nbcd_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6222224, .data = 6981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte nbcd_initial_ram_12[] = {
		{ .addr = 0x275760, .byte = 0x48 },
		{ .addr = 0x275761, .byte = 0x17 },
		{ .addr = 0x275762, .byte = 0xaa },
		{ .addr = 0x275763, .byte = 0xd6 },
		{ .addr = 0xcb3398, .byte = 0x8a },
		{ .addr = 0xcb3399, .byte = 0x09 },
		{ .addr = 0x275764, .byte = 0x43 },
		{ .addr = 0x275765, .byte = 0x86 }
};

static const SST_RamByte nbcd_final_ram_12[] = {
		{ .addr = 0x275760, .byte = 0x48 },
		{ .addr = 0x275761, .byte = 0x17 },
		{ .addr = 0x275762, .byte = 0xaa },
		{ .addr = 0x275763, .byte = 0xd6 },
		{ .addr = 0xcb3398, .byte = 0x10 },
		{ .addr = 0xcb3399, .byte = 0x09 },
		{ .addr = 0x275764, .byte = 0x43 },
		{ .addr = 0x275765, .byte = 0x86 }
};

static const SST_Transaction nbcd_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13317016, .data = 35328, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2578276, .data = 17286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13317016, .data = 4096, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_13[] = {
		{ .addr = 0x6dd63a, .byte = 0x48 },
		{ .addr = 0x6dd63b, .byte = 0x31 },
		{ .addr = 0x6dd63c, .byte = 0x53 },
		{ .addr = 0x6dd63d, .byte = 0xb2 },
		{ .addr = 0x6dd63e, .byte = 0x23 },
		{ .addr = 0x6dd63f, .byte = 0x5c },
		{ .addr = 0x9a0a04, .byte = 0x68 },
		{ .addr = 0x9a0a05, .byte = 0x33 },
		{ .addr = 0x6dd640, .byte = 0xc2 },
		{ .addr = 0x6dd641, .byte = 0x3d }
};

static const SST_RamByte nbcd_final_ram_13[] = {
		{ .addr = 0x6dd63a, .byte = 0x48 },
		{ .addr = 0x6dd63b, .byte = 0x31 },
		{ .addr = 0x6dd63c, .byte = 0x53 },
		{ .addr = 0x6dd63d, .byte = 0xb2 },
		{ .addr = 0x6dd63e, .byte = 0x23 },
		{ .addr = 0x6dd63f, .byte = 0x5c },
		{ .addr = 0x9a0a04, .byte = 0x68 },
		{ .addr = 0x9a0a05, .byte = 0x66 },
		{ .addr = 0x6dd640, .byte = 0xc2 },
		{ .addr = 0x6dd641, .byte = 0x3d }
};

static const SST_Transaction nbcd_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7198270, .data = 9052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10095108, .data = 51, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7198272, .data = 49725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10095108, .data = 102, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_14[] = {
		{ .addr = 0x064402, .byte = 0x48 },
		{ .addr = 0x064403, .byte = 0x1e },
		{ .addr = 0x064404, .byte = 0xe8 },
		{ .addr = 0x064405, .byte = 0x47 },
		{ .addr = 0xdafb66, .byte = 0x46 },
		{ .addr = 0xdafb67, .byte = 0xb4 },
		{ .addr = 0x064406, .byte = 0xc8 },
		{ .addr = 0x064407, .byte = 0xc5 }
};

static const SST_RamByte nbcd_final_ram_14[] = {
		{ .addr = 0x064402, .byte = 0x48 },
		{ .addr = 0x064403, .byte = 0x1e },
		{ .addr = 0x064404, .byte = 0xe8 },
		{ .addr = 0x064405, .byte = 0x47 },
		{ .addr = 0xdafb66, .byte = 0x54 },
		{ .addr = 0xdafb67, .byte = 0xb4 },
		{ .addr = 0x064406, .byte = 0xc8 },
		{ .addr = 0x064407, .byte = 0xc5 }
};

static const SST_Transaction nbcd_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14351206, .data = 17920, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 410630, .data = 51397, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14351206, .data = 21504, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nbcd_initial_ram_15[] = {
		{ .addr = 0x79337c, .byte = 0x48 },
		{ .addr = 0x79337d, .byte = 0x30 },
		{ .addr = 0x79337e, .byte = 0xcc },
		{ .addr = 0x79337f, .byte = 0x62 },
		{ .addr = 0x793380, .byte = 0xca },
		{ .addr = 0x793381, .byte = 0x02 },
		{ .addr = 0x4f0340, .byte = 0x4e },
		{ .addr = 0x4f0341, .byte = 0x1e },
		{ .addr = 0x793382, .byte = 0x65 },
		{ .addr = 0x793383, .byte = 0x33 }
};

static const SST_RamByte nbcd_final_ram_15[] = {
		{ .addr = 0x79337c, .byte = 0x48 },
		{ .addr = 0x79337d, .byte = 0x30 },
		{ .addr = 0x79337e, .byte = 0xcc },
		{ .addr = 0x79337f, .byte = 0x62 },
		{ .addr = 0x793380, .byte = 0xca },
		{ .addr = 0x793381, .byte = 0x02 },
		{ .addr = 0x4f0340, .byte = 0x4b },
		{ .addr = 0x4f0341, .byte = 0x1e },
		{ .addr = 0x793382, .byte = 0x65 },
		{ .addr = 0x793383, .byte = 0x33 }
};

static const SST_Transaction nbcd_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7943040, .data = 51714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5178176, .data = 19968, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7943042, .data = 25907, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5178176, .data = 19200, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NBCD_TEST_COUNT = 16;
static const SST_TestCase nbcd[] = {
	{
		.name = "000 NBCD (A5) 4815",
		.initial = {
			.regs = {
				3947492722, 2101188238, 3877388413, 2880202079, 3496940104, 2080798772, 855030407, 3238153236, 3346786243, 3402273506, 17325089, 1967330530, 2548317449, 3666971369, 2227404207, 8392382, 10983750, 34589, 8724470
			},
			.prefetch0 = 18453,
			.prefetch1 = 44712,
			.ram = nbcd_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3947492722, 2101188238, 3877388413, 2880202079, 3496940104, 2080798772, 855030407, 3238153236, 3346786243, 3402273506, 17325089, 1967330530, 2548317449, 3666971369, 2227404207, 8392382, 10983750, 34585, 8724472
			},
			.prefetch0 = 44712,
			.prefetch1 = 57995,
			.ram = nbcd_final_ram_0,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 NBCD (d16, A3) 482b",
		.initial = {
			.regs = {
				2701452019, 1718887210, 3848153212, 1306055704, 1619405738, 2272337128, 3523996414, 1728778250, 3624952371, 686650425, 1048944624, 1268621106, 930441491, 2227207355, 2017024011, 16361444, 9703002, 8200, 7918586
			},
			.prefetch0 = 18475,
			.prefetch1 = 57713,
			.ram = nbcd_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2701452019, 1718887210, 3848153212, 1306055704, 1619405738, 2272337128, 3523996414, 1728778250, 3624952371, 686650425, 1048944624, 1268621106, 930441491, 2227207355, 2017024011, 16361444, 9703002, 8217, 7918590
			},
			.prefetch0 = 12810,
			.prefetch1 = 40979,
			.ram = nbcd_final_ram_1,
			.ram_len = 10,
		},
		.transactions = nbcd_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 NBCD -(A1) 4821",
		.initial = {
			.regs = {
				1368842167, 64076493, 2204730880, 2590623082, 568756015, 74508063, 3327921600, 256654488, 1364492820, 3119361866, 1012643595, 289452951, 431077292, 3756964270, 2077979156, 15355238, 15357692, 9493, 9277350
			},
			.prefetch0 = 18465,
			.prefetch1 = 1653,
			.ram = nbcd_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1368842167, 64076493, 2204730880, 2590623082, 568756015, 74508063, 3327921600, 256654488, 1364492820, 3119361865, 1012643595, 289452951, 431077292, 3756964270, 2077979156, 15355238, 15357692, 9491, 9277352
			},
			.prefetch0 = 1653,
			.prefetch1 = 14509,
			.ram = nbcd_final_ram_2,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 NBCD (d16, A4) 482c",
		.initial = {
			.regs = {
				3073875274, 3123518879, 3326217272, 2246610448, 2353402055, 2885873732, 3597526424, 2488125248, 1255031690, 1206094496, 1379521273, 3929808061, 3311755990, 2020998552, 106323328, 644284, 3178962, 42498, 7435116
			},
			.prefetch0 = 18476,
			.prefetch1 = 19714,
			.ram = nbcd_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3073875274, 3123518879, 3326217272, 2246610448, 2353402055, 2885873732, 3597526424, 2488125248, 1255031690, 1206094496, 1379521273, 3929808061, 3311755990, 2020998552, 106323328, 644284, 3178962, 42515, 7435120
			},
			.prefetch0 = 21373,
			.prefetch1 = 37810,
			.ram = nbcd_final_ram_3,
			.ram_len = 10,
		},
		.transactions = nbcd_transactions_3,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "004 NBCD -(A7) 4827",
		.initial = {
			.regs = {
				2933312099, 2778369858, 3155306290, 3129197122, 2265995806, 3716922650, 4182341150, 749869390, 3681113615, 557716882, 190280032, 3432800409, 1732205004, 2072371347, 2289626833, 11534352, 13217862, 33806, 3454488
			},
			.prefetch0 = 18471,
			.prefetch1 = 45079,
			.ram = nbcd_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2933312099, 2778369858, 3155306290, 3129197122, 2265995806, 3716922650, 4182341150, 749869390, 3681113615, 557716882, 190280032, 3432800409, 1732205004, 2072371347, 2289626833, 11534350, 13217862, 33811, 3454490
			},
			.prefetch0 = 45079,
			.prefetch1 = 9622,
			.ram = nbcd_final_ram_4,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_4,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "005 NBCD (d16, A7) 482f",
		.initial = {
			.regs = {
				281919723, 2306910357, 538808050, 2082631391, 1247887090, 2647044167, 2213659092, 2704726230, 2713396148, 2832941184, 3849590174, 4090420581, 156560113, 1259956099, 334210961, 14483206, 1208018, 41756, 10863004
			},
			.prefetch0 = 18479,
			.prefetch1 = 16482,
			.ram = nbcd_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				281919723, 2306910357, 538808050, 2082631391, 1247887090, 2647044167, 2213659092, 2704726230, 2713396148, 2832941184, 3849590174, 4090420581, 156560113, 1259956099, 334210961, 14483206, 1208018, 41747, 10863008
			},
			.prefetch0 = 35332,
			.prefetch1 = 48530,
			.ram = nbcd_final_ram_5,
			.ram_len = 10,
		},
		.transactions = nbcd_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 NBCD (A6) 4816",
		.initial = {
			.regs = {
				3534584812, 628427052, 1227528474, 2838651476, 1617989794, 129107635, 3914394724, 1645003913, 141873126, 2634000820, 626503695, 3708649447, 3446950242, 1479529648, 277242400, 12097876, 4592994, 34563, 9870858
			},
			.prefetch0 = 18454,
			.prefetch1 = 58311,
			.ram = nbcd_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3534584812, 628427052, 1227528474, 2838651476, 1617989794, 129107635, 3914394724, 1645003913, 141873126, 2634000820, 626503695, 3708649447, 3446950242, 1479529648, 277242400, 12097876, 4592994, 34579, 9870860
			},
			.prefetch0 = 58311,
			.prefetch1 = 59180,
			.ram = nbcd_final_ram_6,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 NBCD (d8, A2, Xn) 4832",
		.initial = {
			.regs = {
				694008631, 2597199620, 2947855223, 1455555220, 3331645490, 566905669, 3614944835, 3044104849, 2852089170, 905342666, 2228026735, 2377230993, 3361234828, 1909537186, 2519691091, 6966206, 11972782, 33293, 6151008
			},
			.prefetch0 = 18482,
			.prefetch1 = 6253,
			.ram = nbcd_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				694008631, 2597199620, 2947855223, 1455555220, 3331645490, 566905669, 3614944835, 3044104849, 2852089170, 905342666, 2228026735, 2377230993, 3361234828, 1909537186, 2519691091, 6966206, 11972782, 33299, 6151012
			},
			.prefetch0 = 27263,
			.prefetch1 = 33639,
			.ram = nbcd_final_ram_7,
			.ram_len = 10,
		},
		.transactions = nbcd_transactions_7,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "008 NBCD D2 4802",
		.initial = {
			.regs = {
				326225587, 1633025264, 2728761728, 1126923986, 2507483877, 983725899, 1872451769, 4035338912, 1292126543, 1486269112, 3541399011, 1854780068, 1101510685, 653934348, 1782613269, 1764712, 10431474, 4, 1231884
			},
			.prefetch0 = 18434,
			.prefetch1 = 37998,
			.ram = nbcd_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				326225587, 1633025264, 2728761632, 1126923986, 2507483877, 983725899, 1872451769, 4035338912, 1292126543, 1486269112, 3541399011, 1854780068, 1101510685, 653934348, 1782613269, 1764712, 10431474, 19, 1231886
			},
			.prefetch0 = 37998,
			.prefetch1 = 35247,
			.ram = nbcd_final_ram_8,
			.ram_len = 6,
		},
		.transactions = nbcd_transactions_8,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "009 NBCD (A2)+ 481a",
		.initial = {
			.regs = {
				3483761023, 4190869782, 3169927343, 1100005557, 3479142123, 2392630677, 1661190321, 3494700930, 3695279642, 57320489, 2979856733, 3216599492, 686742499, 1151609030, 3473879340, 1118018, 419272, 42756, 1362498
			},
			.prefetch0 = 18458,
			.prefetch1 = 62776,
			.ram = nbcd_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3483761023, 4190869782, 3169927343, 1100005557, 3479142123, 2392630677, 1661190321, 3494700930, 3695279642, 57320489, 2979856734, 3216599492, 686742499, 1151609030, 3473879340, 1118018, 419272, 42777, 1362500
			},
			.prefetch0 = 62776,
			.prefetch1 = 60134,
			.ram = nbcd_final_ram_9,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 NBCD (A7)+ 481f",
		.initial = {
			.regs = {
				787852009, 4188392299, 3288483418, 4065317046, 276475053, 3476837895, 1570149191, 2243480698, 2156257247, 2453144961, 1319001411, 2527163222, 3812784215, 3589111808, 3596555901, 8197180, 15352668, 785, 6552840
			},
			.prefetch0 = 18463,
			.prefetch1 = 43841,
			.ram = nbcd_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				787852009, 4188392299, 3288483418, 4065317046, 276475053, 3476837895, 1570149191, 2243480698, 2156257247, 2453144961, 1319001411, 2527163222, 3812784215, 3589111808, 3596555901, 8197182, 15352668, 787, 6552842
			},
			.prefetch0 = 43841,
			.prefetch1 = 39143,
			.ram = nbcd_final_ram_10,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 NBCD D0 4800",
		.initial = {
			.regs = {
				4060044223, 949344792, 3829086123, 3464699007, 3550538246, 3039640326, 3077009870, 1833408770, 2844307850, 4242813185, 1815953891, 506191945, 964021610, 3078635340, 3832544513, 8402082, 1162290, 34327, 6222224
			},
			.prefetch0 = 18432,
			.prefetch1 = 59345,
			.ram = nbcd_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4060044250, 949344792, 3829086123, 3464699007, 3550538246, 3039640326, 3077009870, 1833408770, 2844307850, 4242813185, 1815953891, 506191945, 964021610, 3078635340, 3832544513, 8402082, 1162290, 34329, 6222226
			},
			.prefetch0 = 59345,
			.prefetch1 = 6981,
			.ram = nbcd_final_ram_11,
			.ram_len = 6,
		},
		.transactions = nbcd_transactions_11,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "012 NBCD (A7) 4817",
		.initial = {
			.regs = {
				1820250540, 1069585406, 916933353, 2069923475, 3010721742, 382243171, 2722707030, 3279411408, 1126150554, 1512800575, 1940361515, 861971502, 3761932318, 2662315338, 139115271, 13317016, 14956562, 268, 2578276
			},
			.prefetch0 = 18455,
			.prefetch1 = 43734,
			.ram = nbcd_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1820250540, 1069585406, 916933353, 2069923475, 3010721742, 382243171, 2722707030, 3279411408, 1126150554, 1512800575, 1940361515, 861971502, 3761932318, 2662315338, 139115271, 13317016, 14956562, 273, 2578278
			},
			.prefetch0 = 43734,
			.prefetch1 = 17286,
			.ram = nbcd_final_ram_12,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 NBCD (d8, A1, Xn) 4831",
		.initial = {
			.regs = {
				3149358045, 2100704506, 2076591696, 2579255900, 626262543, 3651880057, 1848687159, 1874673789, 2324852512, 2912536026, 1991228785, 2340414604, 3461983176, 2479258945, 2412077215, 361714, 16617572, 784, 7198270
			},
			.prefetch0 = 18481,
			.prefetch1 = 21426,
			.ram = nbcd_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3149358045, 2100704506, 2076591696, 2579255900, 626262543, 3651880057, 1848687159, 1874673789, 2324852512, 2912536026, 1991228785, 2340414604, 3461983176, 2479258945, 2412077215, 361714, 16617572, 787, 7198274
			},
			.prefetch0 = 9052,
			.prefetch1 = 49725,
			.ram = nbcd_final_ram_13,
			.ram_len = 10,
		},
		.transactions = nbcd_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 NBCD (A6)+ 481e",
		.initial = {
			.regs = {
				2664753768, 2586102263, 230332456, 1960566967, 4068749956, 4018307287, 3288515498, 1809755527, 3795989909, 4022245356, 607824258, 4070887374, 186021041, 2872248803, 1373305702, 8671202, 5308476, 1024, 410630
			},
			.prefetch0 = 18462,
			.prefetch1 = 59463,
			.ram = nbcd_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2664753768, 2586102263, 230332456, 1960566967, 4068749956, 4018307287, 3288515498, 1809755527, 3795989909, 4022245356, 607824258, 4070887374, 186021041, 2872248803, 1373305703, 8671202, 5308476, 1043, 410632
			},
			.prefetch0 = 59463,
			.prefetch1 = 51397,
			.ram = nbcd_final_ram_14,
			.ram_len = 8,
		},
		.transactions = nbcd_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 NBCD (d8, A0, Xn) 4830",
		.initial = {
			.regs = {
				1584080948, 2584162095, 4268255366, 1153225327, 2473669240, 319964291, 3916688113, 2578138652, 1017098217, 1888264015, 2672594351, 3562100742, 2309968629, 2784341477, 2500642601, 3460992, 11546718, 34588, 7943040
			},
			.prefetch0 = 18480,
			.prefetch1 = 52322,
			.ram = nbcd_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1584080948, 2584162095, 4268255366, 1153225327, 2473669240, 319964291, 3916688113, 2578138652, 1017098217, 1888264015, 2672594351, 3562100742, 2309968629, 2784341477, 2500642601, 3460992, 11546718, 34579, 7943044
			},
			.prefetch0 = 51714,
			.prefetch1 = 25907,
			.ram = nbcd_final_ram_15,
			.ram_len = 10,
		},
		.transactions = nbcd_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_NBCD_H */