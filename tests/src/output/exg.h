#ifndef RBT_EXG_H
#define RBT_EXG_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte exg_initial_ram_0[] = {
		{ .addr = 0x024c4e, .byte = 0xcf },
		{ .addr = 0x024c4f, .byte = 0x8f },
		{ .addr = 0x024c50, .byte = 0x0f },
		{ .addr = 0x024c51, .byte = 0xde },
		{ .addr = 0x024c52, .byte = 0x41 },
		{ .addr = 0x024c53, .byte = 0x31 }
};

static const SST_RamByte exg_final_ram_0[] = {
		{ .addr = 0x024c4e, .byte = 0xcf },
		{ .addr = 0x024c4f, .byte = 0x8f },
		{ .addr = 0x024c50, .byte = 0x0f },
		{ .addr = 0x024c51, .byte = 0xde },
		{ .addr = 0x024c52, .byte = 0x41 },
		{ .addr = 0x024c53, .byte = 0x31 }
};

static const SST_Transaction exg_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 150610, .data = 16689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_1[] = {
		{ .addr = 0x8286ee, .byte = 0xc5 },
		{ .addr = 0x8286ef, .byte = 0x48 },
		{ .addr = 0x8286f0, .byte = 0xf5 },
		{ .addr = 0x8286f1, .byte = 0xf6 },
		{ .addr = 0x8286f2, .byte = 0x2a },
		{ .addr = 0x8286f3, .byte = 0x6f }
};

static const SST_RamByte exg_final_ram_1[] = {
		{ .addr = 0x8286ee, .byte = 0xc5 },
		{ .addr = 0x8286ef, .byte = 0x48 },
		{ .addr = 0x8286f0, .byte = 0xf5 },
		{ .addr = 0x8286f1, .byte = 0xf6 },
		{ .addr = 0x8286f2, .byte = 0x2a },
		{ .addr = 0x8286f3, .byte = 0x6f }
};

static const SST_Transaction exg_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8554226, .data = 10863, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_2[] = {
		{ .addr = 0x89830e, .byte = 0xc1 },
		{ .addr = 0x89830f, .byte = 0x4d },
		{ .addr = 0x898310, .byte = 0xeb },
		{ .addr = 0x898311, .byte = 0xc1 },
		{ .addr = 0x898312, .byte = 0x66 },
		{ .addr = 0x898313, .byte = 0xb3 }
};

static const SST_RamByte exg_final_ram_2[] = {
		{ .addr = 0x89830e, .byte = 0xc1 },
		{ .addr = 0x89830f, .byte = 0x4d },
		{ .addr = 0x898310, .byte = 0xeb },
		{ .addr = 0x898311, .byte = 0xc1 },
		{ .addr = 0x898312, .byte = 0x66 },
		{ .addr = 0x898313, .byte = 0xb3 }
};

static const SST_Transaction exg_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9011986, .data = 26291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_3[] = {
		{ .addr = 0xfd60b4, .byte = 0xc3 },
		{ .addr = 0xfd60b5, .byte = 0x46 },
		{ .addr = 0xfd60b6, .byte = 0xb2 },
		{ .addr = 0xfd60b7, .byte = 0x74 },
		{ .addr = 0xfd60b8, .byte = 0x4d },
		{ .addr = 0xfd60b9, .byte = 0xc6 }
};

static const SST_RamByte exg_final_ram_3[] = {
		{ .addr = 0xfd60b4, .byte = 0xc3 },
		{ .addr = 0xfd60b5, .byte = 0x46 },
		{ .addr = 0xfd60b6, .byte = 0xb2 },
		{ .addr = 0xfd60b7, .byte = 0x74 },
		{ .addr = 0xfd60b8, .byte = 0x4d },
		{ .addr = 0xfd60b9, .byte = 0xc6 }
};

static const SST_Transaction exg_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16605368, .data = 19910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_4[] = {
		{ .addr = 0xcf9318, .byte = 0xc7 },
		{ .addr = 0xcf9319, .byte = 0x49 },
		{ .addr = 0xcf931a, .byte = 0x09 },
		{ .addr = 0xcf931b, .byte = 0xde },
		{ .addr = 0xcf931c, .byte = 0x30 },
		{ .addr = 0xcf931d, .byte = 0x0d }
};

static const SST_RamByte exg_final_ram_4[] = {
		{ .addr = 0xcf9318, .byte = 0xc7 },
		{ .addr = 0xcf9319, .byte = 0x49 },
		{ .addr = 0xcf931a, .byte = 0x09 },
		{ .addr = 0xcf931b, .byte = 0xde },
		{ .addr = 0xcf931c, .byte = 0x30 },
		{ .addr = 0xcf931d, .byte = 0x0d }
};

static const SST_Transaction exg_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13603612, .data = 12301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_5[] = {
		{ .addr = 0xe2d31a, .byte = 0xc9 },
		{ .addr = 0xe2d31b, .byte = 0x41 },
		{ .addr = 0xe2d31c, .byte = 0xc0 },
		{ .addr = 0xe2d31d, .byte = 0x9f },
		{ .addr = 0xe2d31e, .byte = 0x48 },
		{ .addr = 0xe2d31f, .byte = 0x76 }
};

static const SST_RamByte exg_final_ram_5[] = {
		{ .addr = 0xe2d31a, .byte = 0xc9 },
		{ .addr = 0xe2d31b, .byte = 0x41 },
		{ .addr = 0xe2d31c, .byte = 0xc0 },
		{ .addr = 0xe2d31d, .byte = 0x9f },
		{ .addr = 0xe2d31e, .byte = 0x48 },
		{ .addr = 0xe2d31f, .byte = 0x76 }
};

static const SST_Transaction exg_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14865182, .data = 18550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_6[] = {
		{ .addr = 0xb5aa00, .byte = 0xcf },
		{ .addr = 0xb5aa01, .byte = 0x41 },
		{ .addr = 0xb5aa02, .byte = 0xd0 },
		{ .addr = 0xb5aa03, .byte = 0xb7 },
		{ .addr = 0xb5aa04, .byte = 0x49 },
		{ .addr = 0xb5aa05, .byte = 0x46 }
};

static const SST_RamByte exg_final_ram_6[] = {
		{ .addr = 0xb5aa00, .byte = 0xcf },
		{ .addr = 0xb5aa01, .byte = 0x41 },
		{ .addr = 0xb5aa02, .byte = 0xd0 },
		{ .addr = 0xb5aa03, .byte = 0xb7 },
		{ .addr = 0xb5aa04, .byte = 0x49 },
		{ .addr = 0xb5aa05, .byte = 0x46 }
};

static const SST_Transaction exg_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11905540, .data = 18758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_7[] = {
		{ .addr = 0xa47330, .byte = 0xc5 },
		{ .addr = 0xa47331, .byte = 0x41 },
		{ .addr = 0xa47332, .byte = 0x58 },
		{ .addr = 0xa47333, .byte = 0x93 },
		{ .addr = 0xa47334, .byte = 0xb4 },
		{ .addr = 0xa47335, .byte = 0x88 }
};

static const SST_RamByte exg_final_ram_7[] = {
		{ .addr = 0xa47330, .byte = 0xc5 },
		{ .addr = 0xa47331, .byte = 0x41 },
		{ .addr = 0xa47332, .byte = 0x58 },
		{ .addr = 0xa47333, .byte = 0x93 },
		{ .addr = 0xa47334, .byte = 0xb4 },
		{ .addr = 0xa47335, .byte = 0x88 }
};

static const SST_Transaction exg_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10777396, .data = 46216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_8[] = {
		{ .addr = 0x587fe2, .byte = 0xc9 },
		{ .addr = 0x587fe3, .byte = 0x46 },
		{ .addr = 0x587fe4, .byte = 0xc5 },
		{ .addr = 0x587fe5, .byte = 0x24 },
		{ .addr = 0x587fe6, .byte = 0xbe },
		{ .addr = 0x587fe7, .byte = 0xf4 }
};

static const SST_RamByte exg_final_ram_8[] = {
		{ .addr = 0x587fe2, .byte = 0xc9 },
		{ .addr = 0x587fe3, .byte = 0x46 },
		{ .addr = 0x587fe4, .byte = 0xc5 },
		{ .addr = 0x587fe5, .byte = 0x24 },
		{ .addr = 0x587fe6, .byte = 0xbe },
		{ .addr = 0x587fe7, .byte = 0xf4 }
};

static const SST_Transaction exg_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5799910, .data = 48884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_9[] = {
		{ .addr = 0x2b79c4, .byte = 0xcb },
		{ .addr = 0x2b79c5, .byte = 0x41 },
		{ .addr = 0x2b79c6, .byte = 0xa4 },
		{ .addr = 0x2b79c7, .byte = 0xf3 },
		{ .addr = 0x2b79c8, .byte = 0x28 },
		{ .addr = 0x2b79c9, .byte = 0xf2 }
};

static const SST_RamByte exg_final_ram_9[] = {
		{ .addr = 0x2b79c4, .byte = 0xcb },
		{ .addr = 0x2b79c5, .byte = 0x41 },
		{ .addr = 0x2b79c6, .byte = 0xa4 },
		{ .addr = 0x2b79c7, .byte = 0xf3 },
		{ .addr = 0x2b79c8, .byte = 0x28 },
		{ .addr = 0x2b79c9, .byte = 0xf2 }
};

static const SST_Transaction exg_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2849224, .data = 10482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_10[] = {
		{ .addr = 0x1e7610, .byte = 0xc1 },
		{ .addr = 0x1e7611, .byte = 0x4e },
		{ .addr = 0x1e7612, .byte = 0x3e },
		{ .addr = 0x1e7613, .byte = 0x8d },
		{ .addr = 0x1e7614, .byte = 0x2a },
		{ .addr = 0x1e7615, .byte = 0x76 }
};

static const SST_RamByte exg_final_ram_10[] = {
		{ .addr = 0x1e7610, .byte = 0xc1 },
		{ .addr = 0x1e7611, .byte = 0x4e },
		{ .addr = 0x1e7612, .byte = 0x3e },
		{ .addr = 0x1e7613, .byte = 0x8d },
		{ .addr = 0x1e7614, .byte = 0x2a },
		{ .addr = 0x1e7615, .byte = 0x76 }
};

static const SST_Transaction exg_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1996308, .data = 10870, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_11[] = {
		{ .addr = 0x67ec8c, .byte = 0xcb },
		{ .addr = 0x67ec8d, .byte = 0x8c },
		{ .addr = 0x67ec8e, .byte = 0x09 },
		{ .addr = 0x67ec8f, .byte = 0x75 },
		{ .addr = 0x67ec90, .byte = 0x89 },
		{ .addr = 0x67ec91, .byte = 0x57 }
};

static const SST_RamByte exg_final_ram_11[] = {
		{ .addr = 0x67ec8c, .byte = 0xcb },
		{ .addr = 0x67ec8d, .byte = 0x8c },
		{ .addr = 0x67ec8e, .byte = 0x09 },
		{ .addr = 0x67ec8f, .byte = 0x75 },
		{ .addr = 0x67ec90, .byte = 0x89 },
		{ .addr = 0x67ec91, .byte = 0x57 }
};

static const SST_Transaction exg_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6810768, .data = 35159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_12[] = {
		{ .addr = 0xb483f8, .byte = 0xcd },
		{ .addr = 0xb483f9, .byte = 0x48 },
		{ .addr = 0xb483fa, .byte = 0x05 },
		{ .addr = 0xb483fb, .byte = 0xff },
		{ .addr = 0xb483fc, .byte = 0x50 },
		{ .addr = 0xb483fd, .byte = 0x75 }
};

static const SST_RamByte exg_final_ram_12[] = {
		{ .addr = 0xb483f8, .byte = 0xcd },
		{ .addr = 0xb483f9, .byte = 0x48 },
		{ .addr = 0xb483fa, .byte = 0x05 },
		{ .addr = 0xb483fb, .byte = 0xff },
		{ .addr = 0xb483fc, .byte = 0x50 },
		{ .addr = 0xb483fd, .byte = 0x75 }
};

static const SST_Transaction exg_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11830268, .data = 20597, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_13[] = {
		{ .addr = 0x1450d8, .byte = 0xc9 },
		{ .addr = 0x1450d9, .byte = 0x8f },
		{ .addr = 0x1450da, .byte = 0x11 },
		{ .addr = 0x1450db, .byte = 0x1d },
		{ .addr = 0x1450dc, .byte = 0xa9 },
		{ .addr = 0x1450dd, .byte = 0x86 }
};

static const SST_RamByte exg_final_ram_13[] = {
		{ .addr = 0x1450d8, .byte = 0xc9 },
		{ .addr = 0x1450d9, .byte = 0x8f },
		{ .addr = 0x1450da, .byte = 0x11 },
		{ .addr = 0x1450db, .byte = 0x1d },
		{ .addr = 0x1450dc, .byte = 0xa9 },
		{ .addr = 0x1450dd, .byte = 0x86 }
};

static const SST_Transaction exg_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1331420, .data = 43398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_14[] = {
		{ .addr = 0xe19dea, .byte = 0xcd },
		{ .addr = 0xe19deb, .byte = 0x4a },
		{ .addr = 0xe19dec, .byte = 0xc8 },
		{ .addr = 0xe19ded, .byte = 0xcb },
		{ .addr = 0xe19dee, .byte = 0xc0 },
		{ .addr = 0xe19def, .byte = 0xa6 }
};

static const SST_RamByte exg_final_ram_14[] = {
		{ .addr = 0xe19dea, .byte = 0xcd },
		{ .addr = 0xe19deb, .byte = 0x4a },
		{ .addr = 0xe19dec, .byte = 0xc8 },
		{ .addr = 0xe19ded, .byte = 0xcb },
		{ .addr = 0xe19dee, .byte = 0xc0 },
		{ .addr = 0xe19def, .byte = 0xa6 }
};

static const SST_Transaction exg_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14786030, .data = 49318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_15[] = {
		{ .addr = 0x32c260, .byte = 0xc9 },
		{ .addr = 0x32c261, .byte = 0x48 },
		{ .addr = 0x32c262, .byte = 0xc8 },
		{ .addr = 0x32c263, .byte = 0x95 },
		{ .addr = 0x32c264, .byte = 0x79 },
		{ .addr = 0x32c265, .byte = 0x8f }
};

static const SST_RamByte exg_final_ram_15[] = {
		{ .addr = 0x32c260, .byte = 0xc9 },
		{ .addr = 0x32c261, .byte = 0x48 },
		{ .addr = 0x32c262, .byte = 0xc8 },
		{ .addr = 0x32c263, .byte = 0x95 },
		{ .addr = 0x32c264, .byte = 0x79 },
		{ .addr = 0x32c265, .byte = 0x8f }
};

static const SST_Transaction exg_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3326564, .data = 31119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

const uint32_t EXG_TEST_COUNT = 16;
static const SST_TestCase exg[] = {
	{
		.name = "000 EXG D7, A7 cf8f",
		.initial = {
			.regs = {
				1888175508, 3108803468, 219895122, 4195215335, 3449135861, 1008144086, 508757964, 3028813163, 2141151280, 3533111880, 28917785, 3522979631, 556247249, 3812665290, 3243570130, 1243398, 9177636, 33821, 150610
			},
			.prefetch0 = 53135,
			.prefetch1 = 4062,
			.ram = exg_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1888175508, 3108803468, 219895122, 4195215335, 3449135861, 1008144086, 508757964, 1243398, 2141151280, 3533111880, 28917785, 3522979631, 556247249, 3812665290, 3243570130, 3028813163, 9177636, 33821, 150612
			},
			.prefetch0 = 4062,
			.prefetch1 = 16689,
			.ram = exg_final_ram_0,
			.ram_len = 6,
		},
		.transactions = exg_transactions_0,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "001 EXG A2, A0 c548",
		.initial = {
			.regs = {
				3182337295, 1331168611, 3784052528, 1562933851, 3993012531, 1291449619, 824728875, 2846110128, 2052903349, 3016661894, 732155637, 3096423608, 1715744935, 2535356153, 3292381564, 778382, 6278150, 33800, 8554226
			},
			.prefetch0 = 50504,
			.prefetch1 = 62966,
			.ram = exg_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3182337295, 1331168611, 3784052528, 1562933851, 3993012531, 1291449619, 824728875, 2846110128, 732155637, 3016661894, 2052903349, 3096423608, 1715744935, 2535356153, 3292381564, 778382, 6278150, 33800, 8554228
			},
			.prefetch0 = 62966,
			.prefetch1 = 10863,
			.ram = exg_final_ram_1,
			.ram_len = 6,
		},
		.transactions = exg_transactions_1,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "002 EXG A0, A5 c14d",
		.initial = {
			.regs = {
				1462536505, 1788280684, 1956053195, 4236830134, 1578751013, 1102285039, 2185336457, 2644005891, 2207340700, 1283494763, 2009411424, 3888853451, 2208034756, 541268905, 2585948240, 16076624, 15394292, 525, 9011986
			},
			.prefetch0 = 49485,
			.prefetch1 = 60353,
			.ram = exg_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1462536505, 1788280684, 1956053195, 4236830134, 1578751013, 1102285039, 2185336457, 2644005891, 541268905, 1283494763, 2009411424, 3888853451, 2208034756, 2207340700, 2585948240, 16076624, 15394292, 525, 9011988
			},
			.prefetch0 = 60353,
			.prefetch1 = 26291,
			.ram = exg_final_ram_2,
			.ram_len = 6,
		},
		.transactions = exg_transactions_2,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "003 EXG D1, D6 c346",
		.initial = {
			.regs = {
				1224050353, 1812399469, 4061393882, 1608124229, 1962536710, 3365602251, 136086405, 2213578131, 2295259050, 2339453797, 4236574598, 2351571393, 1218721838, 375649534, 3316188015, 11961540, 8774208, 34304, 16605368
			},
			.prefetch0 = 49990,
			.prefetch1 = 45684,
			.ram = exg_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1224050353, 136086405, 4061393882, 1608124229, 1962536710, 3365602251, 1812399469, 2213578131, 2295259050, 2339453797, 4236574598, 2351571393, 1218721838, 375649534, 3316188015, 11961540, 8774208, 34304, 16605370
			},
			.prefetch0 = 45684,
			.prefetch1 = 19910,
			.ram = exg_final_ram_3,
			.ram_len = 6,
		},
		.transactions = exg_transactions_3,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "004 EXG A3, A1 c749",
		.initial = {
			.regs = {
				2453409667, 4113415267, 2411688542, 2260187640, 4251716957, 2632845952, 1974263448, 265163292, 1644403523, 3680348467, 3788117617, 1967099173, 4129372062, 1345226840, 2078899139, 12666044, 9277164, 41740, 13603612
			},
			.prefetch0 = 51017,
			.prefetch1 = 2526,
			.ram = exg_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2453409667, 4113415267, 2411688542, 2260187640, 4251716957, 2632845952, 1974263448, 265163292, 1644403523, 1967099173, 3788117617, 3680348467, 4129372062, 1345226840, 2078899139, 12666044, 9277164, 41740, 13603614
			},
			.prefetch0 = 2526,
			.prefetch1 = 12301,
			.ram = exg_final_ram_4,
			.ram_len = 6,
		},
		.transactions = exg_transactions_4,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "005 EXG D4, D1 c941",
		.initial = {
			.regs = {
				1259270406, 3585547408, 3193596058, 3245380366, 1559724391, 1338596648, 744559552, 2422784934, 2754369681, 1452717687, 1901368575, 4037863394, 2406276846, 382741195, 1288691510, 2527156, 785914, 41218, 14865182
			},
			.prefetch0 = 51521,
			.prefetch1 = 49311,
			.ram = exg_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1259270406, 1559724391, 3193596058, 3245380366, 3585547408, 1338596648, 744559552, 2422784934, 2754369681, 1452717687, 1901368575, 4037863394, 2406276846, 382741195, 1288691510, 2527156, 785914, 41218, 14865184
			},
			.prefetch0 = 49311,
			.prefetch1 = 18550,
			.ram = exg_final_ram_5,
			.ram_len = 6,
		},
		.transactions = exg_transactions_5,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "006 EXG D7, D1 cf41",
		.initial = {
			.regs = {
				2396653521, 424426074, 2926411436, 170464718, 3815154067, 1789489099, 345111373, 3511957099, 102500557, 205197017, 3857161819, 611727983, 1756677753, 2661960179, 361881716, 4417260, 6852542, 8452, 11905540
			},
			.prefetch0 = 53057,
			.prefetch1 = 53431,
			.ram = exg_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2396653521, 3511957099, 2926411436, 170464718, 3815154067, 1789489099, 345111373, 424426074, 102500557, 205197017, 3857161819, 611727983, 1756677753, 2661960179, 361881716, 4417260, 6852542, 8452, 11905542
			},
			.prefetch0 = 53431,
			.prefetch1 = 18758,
			.ram = exg_final_ram_6,
			.ram_len = 6,
		},
		.transactions = exg_transactions_6,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "007 EXG D2, D1 c541",
		.initial = {
			.regs = {
				2316330481, 3801302940, 2133754482, 1891730649, 1590861886, 4021276122, 3514587513, 2519069368, 3941077420, 4216559891, 3718224974, 582839205, 1951184735, 767741429, 2472943388, 7478728, 8423152, 42265, 10777396
			},
			.prefetch0 = 50497,
			.prefetch1 = 22675,
			.ram = exg_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2316330481, 2133754482, 3801302940, 1891730649, 1590861886, 4021276122, 3514587513, 2519069368, 3941077420, 4216559891, 3718224974, 582839205, 1951184735, 767741429, 2472943388, 7478728, 8423152, 42265, 10777398
			},
			.prefetch0 = 22675,
			.prefetch1 = 46216,
			.ram = exg_final_ram_7,
			.ram_len = 6,
		},
		.transactions = exg_transactions_7,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "008 EXG D4, D6 c946",
		.initial = {
			.regs = {
				3084140130, 2094931766, 4797637, 3263940153, 1290084998, 2676198911, 84534254, 2197464530, 3992610618, 1867948224, 3441944723, 2354121172, 466650059, 2870122493, 3095834552, 15412618, 14617398, 42250, 5799910
			},
			.prefetch0 = 51526,
			.prefetch1 = 50468,
			.ram = exg_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3084140130, 2094931766, 4797637, 3263940153, 84534254, 2676198911, 1290084998, 2197464530, 3992610618, 1867948224, 3441944723, 2354121172, 466650059, 2870122493, 3095834552, 15412618, 14617398, 42250, 5799912
			},
			.prefetch0 = 50468,
			.prefetch1 = 48884,
			.ram = exg_final_ram_8,
			.ram_len = 6,
		},
		.transactions = exg_transactions_8,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "009 EXG D5, D1 cb41",
		.initial = {
			.regs = {
				3748251572, 941072669, 533998123, 837886103, 1112039338, 3178715475, 2578394860, 3947663578, 2081483859, 4166039548, 1136257507, 2301517200, 3002630814, 1038357554, 243885787, 3018712, 455646, 34570, 2849224
			},
			.prefetch0 = 52033,
			.prefetch1 = 42227,
			.ram = exg_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3748251572, 3178715475, 533998123, 837886103, 1112039338, 941072669, 2578394860, 3947663578, 2081483859, 4166039548, 1136257507, 2301517200, 3002630814, 1038357554, 243885787, 3018712, 455646, 34570, 2849226
			},
			.prefetch0 = 42227,
			.prefetch1 = 10482,
			.ram = exg_final_ram_9,
			.ram_len = 6,
		},
		.transactions = exg_transactions_9,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "010 EXG A0, A6 c14e",
		.initial = {
			.regs = {
				967197242, 2893376528, 1332223512, 3427443709, 1553879848, 285083055, 1887604488, 2589711222, 771304568, 1307298157, 3238902075, 334122302, 2653501437, 2781205821, 2313106198, 7422158, 15152046, 33036, 1996308
			},
			.prefetch0 = 49486,
			.prefetch1 = 16013,
			.ram = exg_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				967197242, 2893376528, 1332223512, 3427443709, 1553879848, 285083055, 1887604488, 2589711222, 2313106198, 1307298157, 3238902075, 334122302, 2653501437, 2781205821, 771304568, 7422158, 15152046, 33036, 1996310
			},
			.prefetch0 = 16013,
			.prefetch1 = 10870,
			.ram = exg_final_ram_10,
			.ram_len = 6,
		},
		.transactions = exg_transactions_10,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "011 EXG D5, A4 cb8c",
		.initial = {
			.regs = {
				3027705760, 3540586115, 1310192417, 3283859387, 824474958, 641779881, 4036863256, 1738386368, 3538677030, 3919537441, 3053691668, 260848999, 3396041049, 258898851, 3113961972, 4892096, 9043330, 10001, 6810768
			},
			.prefetch0 = 52108,
			.prefetch1 = 2421,
			.ram = exg_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3027705760, 3540586115, 1310192417, 3283859387, 824474958, 3396041049, 4036863256, 1738386368, 3538677030, 3919537441, 3053691668, 260848999, 641779881, 258898851, 3113961972, 4892096, 9043330, 10001, 6810770
			},
			.prefetch0 = 2421,
			.prefetch1 = 35159,
			.ram = exg_final_ram_11,
			.ram_len = 6,
		},
		.transactions = exg_transactions_11,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "012 EXG A6, A0 cd48",
		.initial = {
			.regs = {
				498421909, 3851075176, 1028405053, 377454096, 1257189203, 326449676, 1731846724, 478318994, 2137521873, 2511691613, 818072340, 3636556336, 3065559265, 2436294258, 1081612509, 572500, 2514852, 1546, 11830268
			},
			.prefetch0 = 52552,
			.prefetch1 = 1535,
			.ram = exg_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				498421909, 3851075176, 1028405053, 377454096, 1257189203, 326449676, 1731846724, 478318994, 1081612509, 2511691613, 818072340, 3636556336, 3065559265, 2436294258, 2137521873, 572500, 2514852, 1546, 11830270
			},
			.prefetch0 = 1535,
			.prefetch1 = 20597,
			.ram = exg_final_ram_12,
			.ram_len = 6,
		},
		.transactions = exg_transactions_12,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "013 EXG D4, A7 c98f",
		.initial = {
			.regs = {
				1165539609, 1223264848, 3627895973, 2021298101, 4256095791, 4019746350, 2079412465, 3414292099, 974912388, 4205775564, 1099533381, 381161152, 1911401534, 3242512077, 2344277141, 13061386, 6862436, 41496, 1331420
			},
			.prefetch0 = 51599,
			.prefetch1 = 4381,
			.ram = exg_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1165539609, 1223264848, 3627895973, 2021298101, 6862436, 4019746350, 2079412465, 3414292099, 974912388, 4205775564, 1099533381, 381161152, 1911401534, 3242512077, 2344277141, 13061386, 4256095791, 41496, 1331422
			},
			.prefetch0 = 4381,
			.prefetch1 = 43398,
			.ram = exg_final_ram_13,
			.ram_len = 6,
		},
		.transactions = exg_transactions_13,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "014 EXG A6, A2 cd4a",
		.initial = {
			.regs = {
				1672651183, 3582530336, 3878192918, 3390074004, 161201101, 4272499128, 3552143617, 2076159234, 1766185842, 73433006, 2441669698, 198249022, 755246585, 968918561, 3358081900, 9393024, 15960164, 8449, 14786030
			},
			.prefetch0 = 52554,
			.prefetch1 = 51403,
			.ram = exg_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1672651183, 3582530336, 3878192918, 3390074004, 161201101, 4272499128, 3552143617, 2076159234, 1766185842, 73433006, 3358081900, 198249022, 755246585, 968918561, 2441669698, 9393024, 15960164, 8449, 14786032
			},
			.prefetch0 = 51403,
			.prefetch1 = 49318,
			.ram = exg_final_ram_14,
			.ram_len = 6,
		},
		.transactions = exg_transactions_14,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "015 EXG A4, A0 c948",
		.initial = {
			.regs = {
				3944033406, 1732829676, 2631142303, 4232669013, 2000639349, 551462448, 1656477143, 3844925957, 4218570938, 3830577201, 486253272, 2126228315, 931422359, 2904865514, 1742331568, 11696000, 12215084, 42245, 3326564
			},
			.prefetch0 = 51528,
			.prefetch1 = 51349,
			.ram = exg_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3944033406, 1732829676, 2631142303, 4232669013, 2000639349, 551462448, 1656477143, 3844925957, 931422359, 3830577201, 486253272, 2126228315, 4218570938, 2904865514, 1742331568, 11696000, 12215084, 42245, 3326566
			},
			.prefetch0 = 51349,
			.prefetch1 = 31119,
			.ram = exg_final_ram_15,
			.ram_len = 6,
		},
		.transactions = exg_transactions_15,
		.transactions_len = 2,
		.lenght = 6,
	},
};

#endif /* RBT_EXG_H */