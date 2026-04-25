#ifndef RBT_ADDXW_H
#define RBT_ADDXW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addxw_initial_ram_0[] = {
		{ .addr = 0x854c9c, .byte = 0xd1 },
		{ .addr = 0x854c9d, .byte = 0x49 },
		{ .addr = 0x854c9e, .byte = 0x23 },
		{ .addr = 0x854c9f, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x7ac246, .byte = 0xb0 },
		{ .addr = 0x7ac247, .byte = 0xd7 },
		{ .addr = 0x7ac248, .byte = 0xe6 },
		{ .addr = 0x7ac249, .byte = 0x9f }
};

static const SST_RamByte addxw_final_ram_0[] = {
		{ .addr = 0x854c9c, .byte = 0xd1 },
		{ .addr = 0x854c9d, .byte = 0x49 },
		{ .addr = 0x854c9e, .byte = 0x23 },
		{ .addr = 0x854c9f, .byte = 0x42 },
		{ .addr = 0x66077a, .byte = 0x4c },
		{ .addr = 0x66077b, .byte = 0xa0 },
		{ .addr = 0x660776, .byte = 0x20 },
		{ .addr = 0x660777, .byte = 0x1f },
		{ .addr = 0x660778, .byte = 0x00 },
		{ .addr = 0x660779, .byte = 0x85 },
		{ .addr = 0x660774, .byte = 0xd1 },
		{ .addr = 0x660775, .byte = 0x49 },
		{ .addr = 0x660772, .byte = 0xcf },
		{ .addr = 0x660773, .byte = 0x03 },
		{ .addr = 0x66076e, .byte = 0xd1 },
		{ .addr = 0x66076f, .byte = 0x55 },
		{ .addr = 0x660770, .byte = 0xaf },
		{ .addr = 0x660771, .byte = 0xb8 },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x7ac246, .byte = 0xb0 },
		{ .addr = 0x7ac247, .byte = 0xd7 },
		{ .addr = 0x7ac248, .byte = 0xe6 },
		{ .addr = 0x7ac249, .byte = 0x9f }
};

static const SST_Transaction addxw_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12111618, .data = 39624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6686586, .data = 19616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6686582, .data = 8223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6686584, .data = 133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6686580, .data = 53577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6686578, .data = 52995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6686574, .data = 53589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6686576, .data = 44984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8045126, .data = 45271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8045128, .data = 59039, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_1[] = {
		{ .addr = 0xb5e94a, .byte = 0xd3 },
		{ .addr = 0xb5e94b, .byte = 0x46 },
		{ .addr = 0xb5e94c, .byte = 0xe3 },
		{ .addr = 0xb5e94d, .byte = 0xfc },
		{ .addr = 0xb5e94e, .byte = 0x9b },
		{ .addr = 0xb5e94f, .byte = 0xa0 }
};

static const SST_RamByte addxw_final_ram_1[] = {
		{ .addr = 0xb5e94a, .byte = 0xd3 },
		{ .addr = 0xb5e94b, .byte = 0x46 },
		{ .addr = 0xb5e94c, .byte = 0xe3 },
		{ .addr = 0xb5e94d, .byte = 0xfc },
		{ .addr = 0xb5e94e, .byte = 0x9b },
		{ .addr = 0xb5e94f, .byte = 0xa0 }
};

static const SST_Transaction addxw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11921742, .data = 39840, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_2[] = {
		{ .addr = 0xe5a132, .byte = 0xdf },
		{ .addr = 0xe5a133, .byte = 0x4f },
		{ .addr = 0xe5a134, .byte = 0xc4 },
		{ .addr = 0xe5a135, .byte = 0x16 },
		{ .addr = 0xfd498c, .byte = 0xe3 },
		{ .addr = 0xfd498d, .byte = 0xc9 },
		{ .addr = 0xfd498a, .byte = 0x66 },
		{ .addr = 0xfd498b, .byte = 0x32 },
		{ .addr = 0xe5a136, .byte = 0xda },
		{ .addr = 0xe5a137, .byte = 0x9b }
};

static const SST_RamByte addxw_final_ram_2[] = {
		{ .addr = 0xe5a132, .byte = 0xdf },
		{ .addr = 0xe5a133, .byte = 0x4f },
		{ .addr = 0xe5a134, .byte = 0xc4 },
		{ .addr = 0xe5a135, .byte = 0x16 },
		{ .addr = 0xfd498c, .byte = 0xe3 },
		{ .addr = 0xfd498d, .byte = 0xc9 },
		{ .addr = 0xfd498a, .byte = 0x49 },
		{ .addr = 0xfd498b, .byte = 0xfc },
		{ .addr = 0xe5a136, .byte = 0xda },
		{ .addr = 0xe5a137, .byte = 0x9b }
};

static const SST_Transaction addxw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16599436, .data = 58313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16599434, .data = 26162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15049014, .data = 55963, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16599434, .data = 18940, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_3[] = {
		{ .addr = 0x50616e, .byte = 0xd7 },
		{ .addr = 0x50616f, .byte = 0x4f },
		{ .addr = 0x506170, .byte = 0x27 },
		{ .addr = 0x506171, .byte = 0xc2 },
		{ .addr = 0xc04dce, .byte = 0x1e },
		{ .addr = 0xc04dcf, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0x06 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x84 },
		{ .addr = 0xde8084, .byte = 0xcc },
		{ .addr = 0xde8085, .byte = 0xc7 },
		{ .addr = 0xde8086, .byte = 0x0d },
		{ .addr = 0xde8087, .byte = 0x79 }
};

static const SST_RamByte addxw_final_ram_3[] = {
		{ .addr = 0x50616e, .byte = 0xd7 },
		{ .addr = 0x50616f, .byte = 0x4f },
		{ .addr = 0x506170, .byte = 0x27 },
		{ .addr = 0x506171, .byte = 0xc2 },
		{ .addr = 0xc04dce, .byte = 0x1e },
		{ .addr = 0xc04dcf, .byte = 0x5e },
		{ .addr = 0xd9483e, .byte = 0x61 },
		{ .addr = 0xd9483f, .byte = 0x72 },
		{ .addr = 0xd9483a, .byte = 0x07 },
		{ .addr = 0xd9483b, .byte = 0x1d },
		{ .addr = 0xd9483c, .byte = 0x00 },
		{ .addr = 0xd9483d, .byte = 0x50 },
		{ .addr = 0xd94838, .byte = 0xd7 },
		{ .addr = 0xd94839, .byte = 0x4f },
		{ .addr = 0xd94836, .byte = 0xe9 },
		{ .addr = 0xd94837, .byte = 0x8b },
		{ .addr = 0xd94832, .byte = 0xd7 },
		{ .addr = 0xd94833, .byte = 0x51 },
		{ .addr = 0xd94834, .byte = 0xcc },
		{ .addr = 0xd94835, .byte = 0x40 },
		{ .addr = 0x00000c, .byte = 0x06 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x84 },
		{ .addr = 0xde8084, .byte = 0xcc },
		{ .addr = 0xde8085, .byte = 0xc7 },
		{ .addr = 0xde8086, .byte = 0x0d },
		{ .addr = 0xde8087, .byte = 0x79 }
};

static const SST_Transaction addxw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12602830, .data = 7774, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4254090, .data = 56859, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14239806, .data = 24946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14239802, .data = 1821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14239804, .data = 80, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14239800, .data = 55119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14239798, .data = 59787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14239794, .data = 55121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14239796, .data = 52288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 1758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32900, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14581892, .data = 52423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14581894, .data = 3449, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_4[] = {
		{ .addr = 0xe6dfd0, .byte = 0xdf },
		{ .addr = 0xe6dfd1, .byte = 0x4f },
		{ .addr = 0xe6dfd2, .byte = 0xc1 },
		{ .addr = 0xe6dfd3, .byte = 0x65 },
		{ .addr = 0x03ba48, .byte = 0x0c },
		{ .addr = 0x03ba49, .byte = 0x3f },
		{ .addr = 0x03ba46, .byte = 0xd2 },
		{ .addr = 0x03ba47, .byte = 0x7d },
		{ .addr = 0xe6dfd4, .byte = 0x47 },
		{ .addr = 0xe6dfd5, .byte = 0x98 }
};

static const SST_RamByte addxw_final_ram_4[] = {
		{ .addr = 0xe6dfd0, .byte = 0xdf },
		{ .addr = 0xe6dfd1, .byte = 0x4f },
		{ .addr = 0xe6dfd2, .byte = 0xc1 },
		{ .addr = 0xe6dfd3, .byte = 0x65 },
		{ .addr = 0x03ba48, .byte = 0x0c },
		{ .addr = 0x03ba49, .byte = 0x3f },
		{ .addr = 0x03ba46, .byte = 0xde },
		{ .addr = 0x03ba47, .byte = 0xbc },
		{ .addr = 0xe6dfd4, .byte = 0x47 },
		{ .addr = 0xe6dfd5, .byte = 0x98 }
};

static const SST_Transaction addxw_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 244296, .data = 3135, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 244294, .data = 53885, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15130580, .data = 18328, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 244294, .data = 57020, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_5[] = {
		{ .addr = 0xa3990a, .byte = 0xdf },
		{ .addr = 0xa3990b, .byte = 0x48 },
		{ .addr = 0xa3990c, .byte = 0xd3 },
		{ .addr = 0xa3990d, .byte = 0xab },
		{ .addr = 0xdee8ce, .byte = 0x97 },
		{ .addr = 0xdee8cf, .byte = 0x30 },
		{ .addr = 0xa99ac6, .byte = 0xf1 },
		{ .addr = 0xa99ac7, .byte = 0xb5 },
		{ .addr = 0xa3990e, .byte = 0x05 },
		{ .addr = 0xa3990f, .byte = 0xae }
};

static const SST_RamByte addxw_final_ram_5[] = {
		{ .addr = 0xa3990a, .byte = 0xdf },
		{ .addr = 0xa3990b, .byte = 0x48 },
		{ .addr = 0xa3990c, .byte = 0xd3 },
		{ .addr = 0xa3990d, .byte = 0xab },
		{ .addr = 0xdee8ce, .byte = 0x97 },
		{ .addr = 0xdee8cf, .byte = 0x30 },
		{ .addr = 0xa99ac6, .byte = 0x88 },
		{ .addr = 0xa99ac7, .byte = 0xe5 },
		{ .addr = 0xa3990e, .byte = 0x05 },
		{ .addr = 0xa3990f, .byte = 0xae }
};

static const SST_Transaction addxw_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14608590, .data = 38704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11115206, .data = 61877, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10721550, .data = 1454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11115206, .data = 35045, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_6[] = {
		{ .addr = 0xd625d0, .byte = 0xd5 },
		{ .addr = 0xd625d1, .byte = 0x44 },
		{ .addr = 0xd625d2, .byte = 0xfc },
		{ .addr = 0xd625d3, .byte = 0x10 },
		{ .addr = 0xd625d4, .byte = 0x58 },
		{ .addr = 0xd625d5, .byte = 0xba }
};

static const SST_RamByte addxw_final_ram_6[] = {
		{ .addr = 0xd625d0, .byte = 0xd5 },
		{ .addr = 0xd625d1, .byte = 0x44 },
		{ .addr = 0xd625d2, .byte = 0xfc },
		{ .addr = 0xd625d3, .byte = 0x10 },
		{ .addr = 0xd625d4, .byte = 0x58 },
		{ .addr = 0xd625d5, .byte = 0xba }
};

static const SST_Transaction addxw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14034388, .data = 22714, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_7[] = {
		{ .addr = 0xd79858, .byte = 0xdb },
		{ .addr = 0xd79859, .byte = 0x40 },
		{ .addr = 0xd7985a, .byte = 0x39 },
		{ .addr = 0xd7985b, .byte = 0xd9 },
		{ .addr = 0xd7985c, .byte = 0xe8 },
		{ .addr = 0xd7985d, .byte = 0x51 }
};

static const SST_RamByte addxw_final_ram_7[] = {
		{ .addr = 0xd79858, .byte = 0xdb },
		{ .addr = 0xd79859, .byte = 0x40 },
		{ .addr = 0xd7985a, .byte = 0x39 },
		{ .addr = 0xd7985b, .byte = 0xd9 },
		{ .addr = 0xd7985c, .byte = 0xe8 },
		{ .addr = 0xd7985d, .byte = 0x51 }
};

static const SST_Transaction addxw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14129244, .data = 59473, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_8[] = {
		{ .addr = 0x7eb340, .byte = 0xdf },
		{ .addr = 0x7eb341, .byte = 0x4f },
		{ .addr = 0x7eb342, .byte = 0x41 },
		{ .addr = 0x7eb343, .byte = 0xd4 },
		{ .addr = 0x1bf99a, .byte = 0x65 },
		{ .addr = 0x1bf99b, .byte = 0x06 },
		{ .addr = 0x1bf998, .byte = 0x34 },
		{ .addr = 0x1bf999, .byte = 0xdd },
		{ .addr = 0x7eb344, .byte = 0x17 },
		{ .addr = 0x7eb345, .byte = 0x04 }
};

static const SST_RamByte addxw_final_ram_8[] = {
		{ .addr = 0x7eb340, .byte = 0xdf },
		{ .addr = 0x7eb341, .byte = 0x4f },
		{ .addr = 0x7eb342, .byte = 0x41 },
		{ .addr = 0x7eb343, .byte = 0xd4 },
		{ .addr = 0x1bf99a, .byte = 0x65 },
		{ .addr = 0x1bf99b, .byte = 0x06 },
		{ .addr = 0x1bf998, .byte = 0x99 },
		{ .addr = 0x1bf999, .byte = 0xe4 },
		{ .addr = 0x7eb344, .byte = 0x17 },
		{ .addr = 0x7eb345, .byte = 0x04 }
};

static const SST_Transaction addxw_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1833370, .data = 25862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1833368, .data = 13533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8303428, .data = 5892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1833368, .data = 39396, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_9[] = {
		{ .addr = 0x0751c8, .byte = 0xdd },
		{ .addr = 0x0751c9, .byte = 0x47 },
		{ .addr = 0x0751ca, .byte = 0x3d },
		{ .addr = 0x0751cb, .byte = 0x57 },
		{ .addr = 0x0751cc, .byte = 0xbd },
		{ .addr = 0x0751cd, .byte = 0xa9 }
};

static const SST_RamByte addxw_final_ram_9[] = {
		{ .addr = 0x0751c8, .byte = 0xdd },
		{ .addr = 0x0751c9, .byte = 0x47 },
		{ .addr = 0x0751ca, .byte = 0x3d },
		{ .addr = 0x0751cb, .byte = 0x57 },
		{ .addr = 0x0751cc, .byte = 0xbd },
		{ .addr = 0x0751cd, .byte = 0xa9 }
};

static const SST_Transaction addxw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 479692, .data = 48553, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_10[] = {
		{ .addr = 0x16fb08, .byte = 0xdb },
		{ .addr = 0x16fb09, .byte = 0x48 },
		{ .addr = 0x16fb0a, .byte = 0xf9 },
		{ .addr = 0x16fb0b, .byte = 0x6d },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xf62fa2, .byte = 0xe3 },
		{ .addr = 0xf62fa3, .byte = 0xee },
		{ .addr = 0xf62fa4, .byte = 0x27 },
		{ .addr = 0xf62fa5, .byte = 0x67 }
};

static const SST_RamByte addxw_final_ram_10[] = {
		{ .addr = 0x16fb08, .byte = 0xdb },
		{ .addr = 0x16fb09, .byte = 0x48 },
		{ .addr = 0x16fb0a, .byte = 0xf9 },
		{ .addr = 0x16fb0b, .byte = 0x6d },
		{ .addr = 0xe8b292, .byte = 0xfb },
		{ .addr = 0xe8b293, .byte = 0x0c },
		{ .addr = 0xe8b28e, .byte = 0xa1 },
		{ .addr = 0xe8b28f, .byte = 0x1a },
		{ .addr = 0xe8b290, .byte = 0x00 },
		{ .addr = 0xe8b291, .byte = 0x16 },
		{ .addr = 0xe8b28c, .byte = 0xdb },
		{ .addr = 0xe8b28d, .byte = 0x48 },
		{ .addr = 0xe8b28a, .byte = 0xa4 },
		{ .addr = 0xe8b28b, .byte = 0xff },
		{ .addr = 0xe8b286, .byte = 0xdb },
		{ .addr = 0xe8b287, .byte = 0x55 },
		{ .addr = 0xe8b288, .byte = 0xe0 },
		{ .addr = 0xe8b289, .byte = 0xd3 },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xf62fa2, .byte = 0xe3 },
		{ .addr = 0xf62fa3, .byte = 0xee },
		{ .addr = 0xf62fa4, .byte = 0x27 },
		{ .addr = 0xf62fa5, .byte = 0x67 }
};

static const SST_Transaction addxw_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13870334, .data = 16842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15250066, .data = 64268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15250062, .data = 41242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15250064, .data = 22, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15250060, .data = 56136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15250058, .data = 42239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15250054, .data = 56149, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15250056, .data = 57555, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16134050, .data = 58350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16134052, .data = 10087, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_11[] = {
		{ .addr = 0x99f924, .byte = 0xdb },
		{ .addr = 0x99f925, .byte = 0x47 },
		{ .addr = 0x99f926, .byte = 0xc4 },
		{ .addr = 0x99f927, .byte = 0xda },
		{ .addr = 0x99f928, .byte = 0x02 },
		{ .addr = 0x99f929, .byte = 0x61 }
};

static const SST_RamByte addxw_final_ram_11[] = {
		{ .addr = 0x99f924, .byte = 0xdb },
		{ .addr = 0x99f925, .byte = 0x47 },
		{ .addr = 0x99f926, .byte = 0xc4 },
		{ .addr = 0x99f927, .byte = 0xda },
		{ .addr = 0x99f928, .byte = 0x02 },
		{ .addr = 0x99f929, .byte = 0x61 }
};

static const SST_Transaction addxw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10090792, .data = 609, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_12[] = {
		{ .addr = 0x81d43a, .byte = 0xd9 },
		{ .addr = 0x81d43b, .byte = 0x49 },
		{ .addr = 0x81d43c, .byte = 0x9c },
		{ .addr = 0x81d43d, .byte = 0x5a },
		{ .addr = 0x83010c, .byte = 0x79 },
		{ .addr = 0x83010d, .byte = 0xd1 },
		{ .addr = 0x6de6a6, .byte = 0x3d },
		{ .addr = 0x6de6a7, .byte = 0x55 },
		{ .addr = 0x81d43e, .byte = 0x20 },
		{ .addr = 0x81d43f, .byte = 0x9c }
};

static const SST_RamByte addxw_final_ram_12[] = {
		{ .addr = 0x81d43a, .byte = 0xd9 },
		{ .addr = 0x81d43b, .byte = 0x49 },
		{ .addr = 0x81d43c, .byte = 0x9c },
		{ .addr = 0x81d43d, .byte = 0x5a },
		{ .addr = 0x83010c, .byte = 0x79 },
		{ .addr = 0x83010d, .byte = 0xd1 },
		{ .addr = 0x6de6a6, .byte = 0xb7 },
		{ .addr = 0x6de6a7, .byte = 0x26 },
		{ .addr = 0x81d43e, .byte = 0x20 },
		{ .addr = 0x81d43f, .byte = 0x9c }
};

static const SST_Transaction addxw_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8585484, .data = 31185, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7202470, .data = 15701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8508478, .data = 8348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7202470, .data = 46886, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_13[] = {
		{ .addr = 0x5e1280, .byte = 0xd9 },
		{ .addr = 0x5e1281, .byte = 0x48 },
		{ .addr = 0x5e1282, .byte = 0x25 },
		{ .addr = 0x5e1283, .byte = 0xd1 },
		{ .addr = 0x77899c, .byte = 0x90 },
		{ .addr = 0x77899d, .byte = 0xc6 },
		{ .addr = 0x4a1e16, .byte = 0x65 },
		{ .addr = 0x4a1e17, .byte = 0x64 },
		{ .addr = 0x5e1284, .byte = 0x14 },
		{ .addr = 0x5e1285, .byte = 0xaf }
};

static const SST_RamByte addxw_final_ram_13[] = {
		{ .addr = 0x5e1280, .byte = 0xd9 },
		{ .addr = 0x5e1281, .byte = 0x48 },
		{ .addr = 0x5e1282, .byte = 0x25 },
		{ .addr = 0x5e1283, .byte = 0xd1 },
		{ .addr = 0x77899c, .byte = 0x90 },
		{ .addr = 0x77899d, .byte = 0xc6 },
		{ .addr = 0x4a1e16, .byte = 0xf6 },
		{ .addr = 0x4a1e17, .byte = 0x2b },
		{ .addr = 0x5e1284, .byte = 0x14 },
		{ .addr = 0x5e1285, .byte = 0xaf }
};

static const SST_Transaction addxw_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7834012, .data = 37062, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4857366, .data = 25956, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6165124, .data = 5295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4857366, .data = 63019, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_14[] = {
		{ .addr = 0x27c2ea, .byte = 0xd7 },
		{ .addr = 0x27c2eb, .byte = 0x40 },
		{ .addr = 0x27c2ec, .byte = 0xe2 },
		{ .addr = 0x27c2ed, .byte = 0x47 },
		{ .addr = 0x27c2ee, .byte = 0x36 },
		{ .addr = 0x27c2ef, .byte = 0xea }
};

static const SST_RamByte addxw_final_ram_14[] = {
		{ .addr = 0x27c2ea, .byte = 0xd7 },
		{ .addr = 0x27c2eb, .byte = 0x40 },
		{ .addr = 0x27c2ec, .byte = 0xe2 },
		{ .addr = 0x27c2ed, .byte = 0x47 },
		{ .addr = 0x27c2ee, .byte = 0x36 },
		{ .addr = 0x27c2ef, .byte = 0xea }
};

static const SST_Transaction addxw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2605806, .data = 14058, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxw_initial_ram_15[] = {
		{ .addr = 0x0c0984, .byte = 0xd7 },
		{ .addr = 0x0c0985, .byte = 0x43 },
		{ .addr = 0x0c0986, .byte = 0x99 },
		{ .addr = 0x0c0987, .byte = 0xd2 },
		{ .addr = 0x0c0988, .byte = 0x11 },
		{ .addr = 0x0c0989, .byte = 0x69 }
};

static const SST_RamByte addxw_final_ram_15[] = {
		{ .addr = 0x0c0984, .byte = 0xd7 },
		{ .addr = 0x0c0985, .byte = 0x43 },
		{ .addr = 0x0c0986, .byte = 0x99 },
		{ .addr = 0x0c0987, .byte = 0xd2 },
		{ .addr = 0x0c0988, .byte = 0x11 },
		{ .addr = 0x0c0989, .byte = 0x69 }
};

static const SST_Transaction addxw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 788872, .data = 4457, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ADDXW_TEST_COUNT = 16;
static const SST_TestCase addxw[] = {
	{
		.name = "000 ADDX.w -(A1), -(A0) d149",
		.initial = {
			.regs = {
				4224040949, 2022320032, 1925160569, 1739841148, 3920638392, 3871974204, 1202770696, 1059347476, 1919114651, 2948124421, 3822682899, 2814065292, 1532911305, 1463532462, 69421316, 7862948, 6686588, 8223, 8735904
			},
			.prefetch0 = 53577,
			.prefetch1 = 9026,
			.ram = addxw_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4224040949, 2022320032, 1925160569, 1739841148, 3920638392, 3871974204, 1202770696, 1059347476, 1919114651, 2948124419, 3822682899, 2814065292, 1532911305, 1463532462, 69421316, 7862948, 6686574, 8223, 1333445194
			},
			.prefetch0 = 45271,
			.prefetch1 = 59039,
			.ram = addxw_final_ram_0,
			.ram_len = 26,
		},
		.transactions = addxw_transactions_0,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "001 ADDX.w D6, D1 d346",
		.initial = {
			.regs = {
				362028726, 421612215, 1073752397, 3115164932, 2754749596, 4050114191, 3981642448, 1596018757, 1984451613, 1618354982, 313341779, 1657236012, 1497163880, 1713468719, 3645155931, 12381540, 15025264, 9219, 11921742
			},
			.prefetch0 = 54086,
			.prefetch1 = 58364,
			.ram = addxw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				362028726, 421614983, 1073752397, 3115164932, 2754749596, 4050114191, 3981642448, 1596018757, 1984451613, 1618354982, 313341779, 1657236012, 1497163880, 1713468719, 3645155931, 12381540, 15025264, 9216, 11921744
			},
			.prefetch0 = 58364,
			.prefetch1 = 39840,
			.ram = addxw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = addxw_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 ADDX.w -(A7), -(A7) df4f",
		.initial = {
			.regs = {
				700865405, 2310419710, 1393603117, 2685165450, 142875068, 3290601060, 3705665572, 2346763292, 4095426921, 3914643816, 1184281265, 3650945509, 4109624876, 3427456481, 1592349370, 6299532, 16599438, 10003, 15049014
			},
			.prefetch0 = 57167,
			.prefetch1 = 50198,
			.ram = addxw_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				700865405, 2310419710, 1393603117, 2685165450, 142875068, 3290601060, 3705665572, 2346763292, 4095426921, 3914643816, 1184281265, 3650945509, 4109624876, 3427456481, 1592349370, 6299532, 16599434, 10001, 15049016
			},
			.prefetch0 = 50198,
			.prefetch1 = 55963,
			.ram = addxw_final_ram_2,
			.ram_len = 10,
		},
		.transactions = addxw_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 ADDX.w -(A7), -(A3) d74f",
		.initial = {
			.regs = {
				375048989, 1456275031, 2467407883, 3097403394, 676905036, 1502611414, 2289817956, 3973574231, 1245030942, 1179466855, 2328117741, 3426806157, 3601628285, 1040013325, 848826781, 12602832, 14239808, 1821, 5267826
			},
			.prefetch0 = 55119,
			.prefetch1 = 10178,
			.ram = addxw_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				375048989, 1456275031, 2467407883, 3097403394, 676905036, 1502611414, 2289817956, 3973574231, 1245030942, 1179466855, 2328117741, 3426806155, 3601628285, 1040013325, 848826781, 12602830, 14239794, 10013, 115245192
			},
			.prefetch0 = 52423,
			.prefetch1 = 3449,
			.ram = addxw_final_ram_3,
			.ram_len = 28,
		},
		.transactions = addxw_transactions_3,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "004 ADDX.w -(A7), -(A7) df4f",
		.initial = {
			.regs = {
				2641127150, 1915569125, 2563078922, 4263496621, 595484153, 4001374827, 1460069454, 2981589654, 440459879, 2059782134, 811814747, 2423053503, 3955714765, 1810383820, 3521898989, 244298, 14927966, 1537, 15130580
			},
			.prefetch0 = 57167,
			.prefetch1 = 49509,
			.ram = addxw_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2641127150, 1915569125, 2563078922, 4263496621, 595484153, 4001374827, 1460069454, 2981589654, 440459879, 2059782134, 811814747, 2423053503, 3955714765, 1810383820, 3521898989, 244294, 14927966, 1544, 15130582
			},
			.prefetch0 = 49509,
			.prefetch1 = 18328,
			.ram = addxw_final_ram_4,
			.ram_len = 10,
		},
		.transactions = addxw_transactions_4,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "005 ADDX.w -(A0), -(A7) df48",
		.initial = {
			.regs = {
				2796251293, 1457416462, 2237275918, 3416234229, 1075153584, 1076675718, 4183005057, 3181243115, 417261776, 2756102349, 3340547379, 1816538194, 1079066542, 3431401601, 3155011085, 16689272, 11115208, 42511, 10721550
			},
			.prefetch0 = 57160,
			.prefetch1 = 54187,
			.ram = addxw_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2796251293, 1457416462, 2237275918, 3416234229, 1075153584, 1076675718, 4183005057, 3181243115, 417261774, 2756102349, 3340547379, 1816538194, 1079066542, 3431401601, 3155011085, 16689272, 11115206, 42521, 10721552
			},
			.prefetch0 = 54187,
			.prefetch1 = 1454,
			.ram = addxw_final_ram_5,
			.ram_len = 10,
		},
		.transactions = addxw_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 ADDX.w D4, D2 d544",
		.initial = {
			.regs = {
				3624965445, 912153647, 2305946118, 3014476079, 2637875268, 3554260750, 571545612, 2234370286, 748004114, 1349576168, 1799548410, 151601285, 1290488162, 2419197943, 1402662682, 8537398, 12888504, 1, 14034388
			},
			.prefetch0 = 54596,
			.prefetch1 = 64528,
			.ram = addxw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3624965445, 912153647, 2305931850, 3014476079, 2637875268, 3554260750, 571545612, 2234370286, 748004114, 1349576168, 1799548410, 151601285, 1290488162, 2419197943, 1402662682, 8537398, 12888504, 25, 14034390
			},
			.prefetch0 = 64528,
			.prefetch1 = 22714,
			.ram = addxw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = addxw_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 ADDX.w D0, D5 db40",
		.initial = {
			.regs = {
				652050018, 1448537795, 884826678, 1529636210, 2063938752, 3800885538, 1623773412, 14878583, 3225940954, 198672257, 1562187285, 4232885566, 45610486, 2456539720, 3306532447, 15431370, 5758220, 1304, 14129244
			},
			.prefetch0 = 56128,
			.prefetch1 = 14809,
			.ram = addxw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				652050018, 1448537795, 884826678, 1529636210, 2063938752, 3800852357, 1623773412, 14878583, 3225940954, 198672257, 1562187285, 4232885566, 45610486, 2456539720, 3306532447, 15431370, 5758220, 1297, 14129246
			},
			.prefetch0 = 14809,
			.prefetch1 = 59473,
			.ram = addxw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = addxw_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 ADDX.w -(A7), -(A7) df4f",
		.initial = {
			.regs = {
				3274892208, 1652426056, 1554345128, 2569255183, 170649561, 4091589556, 1985217871, 2304731607, 1445325870, 2361176886, 832761756, 690054154, 1574686890, 2297406030, 2939596395, 14497312, 1833372, 42779, 8303428
			},
			.prefetch0 = 57167,
			.prefetch1 = 16852,
			.ram = addxw_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3274892208, 1652426056, 1554345128, 2569255183, 170649561, 4091589556, 1985217871, 2304731607, 1445325870, 2361176886, 832761756, 690054154, 1574686890, 2297406030, 2939596395, 14497312, 1833368, 42762, 8303430
			},
			.prefetch0 = 16852,
			.prefetch1 = 5892,
			.ram = addxw_final_ram_8,
			.ram_len = 10,
		},
		.transactions = addxw_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 ADDX.w D7, D6 dd47",
		.initial = {
			.regs = {
				1666864028, 4167060794, 1856143501, 4290196800, 1890290437, 3879965369, 4240553871, 458074375, 3226691242, 2999032206, 391278696, 848375565, 4123608065, 1985481376, 1096300986, 11453972, 6619840, 16, 479692
			},
			.prefetch0 = 56647,
			.prefetch1 = 15703,
			.ram = addxw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1666864028, 4167060794, 1856143501, 4290196800, 1890290437, 3879965369, 4240531607, 458074375, 3226691242, 2999032206, 391278696, 848375565, 4123608065, 1985481376, 1096300986, 11453972, 6619840, 19, 479694
			},
			.prefetch0 = 15703,
			.prefetch1 = 48553,
			.ram = addxw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = addxw_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 ADDX.w -(A0), -(A5) db48",
		.initial = {
			.regs = {
				1013969336, 849491167, 1794780817, 126501431, 2633851379, 1241603642, 265916265, 3397001301, 3771966721, 3778072292, 2942554658, 1967906294, 433910885, 1359867200, 958871049, 5061290, 15250068, 41242, 1506060
			},
			.prefetch0 = 56136,
			.prefetch1 = 63853,
			.ram = addxw_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1013969336, 849491167, 1794780817, 126501431, 2633851379, 1241603642, 265916265, 3397001301, 3771966719, 3778072292, 2942554658, 1967906294, 433910885, 1359867200, 958871049, 5061290, 15250054, 8474, 871772070
			},
			.prefetch0 = 58350,
			.prefetch1 = 10087,
			.ram = addxw_final_ram_10,
			.ram_len = 26,
		},
		.transactions = addxw_transactions_10,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "011 ADDX.w D7, D5 db47",
		.initial = {
			.regs = {
				84673656, 3211264563, 3648033482, 2488218343, 1364919421, 4074212547, 1923469679, 747299355, 2130354746, 2086800848, 1693172346, 2961307688, 3102832927, 2380561540, 866104717, 13288730, 12474530, 1291, 10090792
			},
			.prefetch0 = 56135,
			.prefetch1 = 50394,
			.ram = addxw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				84673656, 3211264563, 3648033482, 2488218343, 1364919421, 4074204894, 1923469679, 747299355, 2130354746, 2086800848, 1693172346, 2961307688, 3102832927, 2380561540, 866104717, 13288730, 12474530, 1299, 10090794
			},
			.prefetch0 = 50394,
			.prefetch1 = 609,
			.ram = addxw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = addxw_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 ADDX.w -(A1), -(A4) d949",
		.initial = {
			.regs = {
				1369503338, 3048451629, 3804718594, 1584024747, 451732511, 474096791, 2165491989, 753535172, 3767900732, 3582132494, 2224037788, 3634866818, 3144541864, 128603774, 1479015680, 13338156, 3942752, 42767, 8508478
			},
			.prefetch0 = 55625,
			.prefetch1 = 40026,
			.ram = addxw_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1369503338, 3048451629, 3804718594, 1584024747, 451732511, 474096791, 2165491989, 753535172, 3767900732, 3582132492, 2224037788, 3634866818, 3144541862, 128603774, 1479015680, 13338156, 3942752, 42762, 8508480
			},
			.prefetch0 = 40026,
			.prefetch1 = 8348,
			.ram = addxw_final_ram_12,
			.ram_len = 10,
		},
		.transactions = addxw_transactions_12,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "013 ADDX.w -(A0), -(A4) d948",
		.initial = {
			.regs = {
				1689509224, 2851256975, 2101083001, 2478733021, 3700402545, 326280437, 2083208023, 538256206, 2155317662, 3670213904, 2917312502, 228876630, 122297880, 3440624734, 139080008, 4767914, 11497222, 33563, 6165124
			},
			.prefetch0 = 55624,
			.prefetch1 = 9681,
			.ram = addxw_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1689509224, 2851256975, 2101083001, 2478733021, 3700402545, 326280437, 2083208023, 538256206, 2155317660, 3670213904, 2917312502, 228876630, 122297878, 3440624734, 139080008, 4767914, 11497222, 33544, 6165126
			},
			.prefetch0 = 9681,
			.prefetch1 = 5295,
			.ram = addxw_final_ram_13,
			.ram_len = 10,
		},
		.transactions = addxw_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 ADDX.w D0, D3 d740",
		.initial = {
			.regs = {
				3014526717, 876173857, 1960804890, 2282576422, 1971567800, 3378161737, 4145782305, 1030632104, 2036864980, 2857415997, 3884316027, 3190058936, 3759887789, 3918053205, 3717100862, 6961842, 1335994, 8725, 2605806
			},
			.prefetch0 = 55104,
			.prefetch1 = 57927,
			.ram = addxw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3014526717, 876173857, 1960804890, 2282578212, 1971567800, 3378161737, 4145782305, 1030632104, 2036864980, 2857415997, 3884316027, 3190058936, 3759887789, 3918053205, 3717100862, 6961842, 1335994, 8704, 2605808
			},
			.prefetch0 = 57927,
			.prefetch1 = 14058,
			.ram = addxw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = addxw_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 ADDX.w D3, D3 d743",
		.initial = {
			.regs = {
				1308710791, 2636447977, 102348653, 3325110996, 1216074596, 888664904, 269135003, 4235457882, 4189764280, 511933872, 2358279715, 964107790, 2208804019, 1876170426, 2755915999, 13247520, 1859454, 33815, 788872
			},
			.prefetch0 = 55107,
			.prefetch1 = 39378,
			.ram = addxw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1308710791, 2636447977, 102348653, 3325121961, 1216074596, 888664904, 269135003, 4235457882, 4189764280, 511933872, 2358279715, 964107790, 2208804019, 1876170426, 2755915999, 13247520, 1859454, 33792, 788874
			},
			.prefetch0 = 39378,
			.prefetch1 = 4457,
			.ram = addxw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = addxw_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_ADDXW_H */