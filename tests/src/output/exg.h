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

static const SST_RamByte exg_initial_ram_16[] = {
		{ .addr = 0x8a593a, .byte = 0xc7 },
		{ .addr = 0x8a593b, .byte = 0x47 },
		{ .addr = 0x8a593c, .byte = 0x7f },
		{ .addr = 0x8a593d, .byte = 0x96 },
		{ .addr = 0x8a593e, .byte = 0xa9 },
		{ .addr = 0x8a593f, .byte = 0xb9 }
};

static const SST_RamByte exg_final_ram_16[] = {
		{ .addr = 0x8a593a, .byte = 0xc7 },
		{ .addr = 0x8a593b, .byte = 0x47 },
		{ .addr = 0x8a593c, .byte = 0x7f },
		{ .addr = 0x8a593d, .byte = 0x96 },
		{ .addr = 0x8a593e, .byte = 0xa9 },
		{ .addr = 0x8a593f, .byte = 0xb9 }
};

static const SST_Transaction exg_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9066814, .data = 43449, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_17[] = {
		{ .addr = 0xdc211e, .byte = 0xcb },
		{ .addr = 0xdc211f, .byte = 0x8d },
		{ .addr = 0xdc2120, .byte = 0xd4 },
		{ .addr = 0xdc2121, .byte = 0x28 },
		{ .addr = 0xdc2122, .byte = 0xf9 },
		{ .addr = 0xdc2123, .byte = 0x46 }
};

static const SST_RamByte exg_final_ram_17[] = {
		{ .addr = 0xdc211e, .byte = 0xcb },
		{ .addr = 0xdc211f, .byte = 0x8d },
		{ .addr = 0xdc2120, .byte = 0xd4 },
		{ .addr = 0xdc2121, .byte = 0x28 },
		{ .addr = 0xdc2122, .byte = 0xf9 },
		{ .addr = 0xdc2123, .byte = 0x46 }
};

static const SST_Transaction exg_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14426402, .data = 63814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_18[] = {
		{ .addr = 0xcdb45a, .byte = 0xc1 },
		{ .addr = 0xcdb45b, .byte = 0x4e },
		{ .addr = 0xcdb45c, .byte = 0x3f },
		{ .addr = 0xcdb45d, .byte = 0x65 },
		{ .addr = 0xcdb45e, .byte = 0x58 },
		{ .addr = 0xcdb45f, .byte = 0xaa }
};

static const SST_RamByte exg_final_ram_18[] = {
		{ .addr = 0xcdb45a, .byte = 0xc1 },
		{ .addr = 0xcdb45b, .byte = 0x4e },
		{ .addr = 0xcdb45c, .byte = 0x3f },
		{ .addr = 0xcdb45d, .byte = 0x65 },
		{ .addr = 0xcdb45e, .byte = 0x58 },
		{ .addr = 0xcdb45f, .byte = 0xaa }
};

static const SST_Transaction exg_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13481054, .data = 22698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_19[] = {
		{ .addr = 0x1481e0, .byte = 0xc9 },
		{ .addr = 0x1481e1, .byte = 0x4a },
		{ .addr = 0x1481e2, .byte = 0x83 },
		{ .addr = 0x1481e3, .byte = 0xe7 },
		{ .addr = 0x1481e4, .byte = 0xf1 },
		{ .addr = 0x1481e5, .byte = 0xea }
};

static const SST_RamByte exg_final_ram_19[] = {
		{ .addr = 0x1481e0, .byte = 0xc9 },
		{ .addr = 0x1481e1, .byte = 0x4a },
		{ .addr = 0x1481e2, .byte = 0x83 },
		{ .addr = 0x1481e3, .byte = 0xe7 },
		{ .addr = 0x1481e4, .byte = 0xf1 },
		{ .addr = 0x1481e5, .byte = 0xea }
};

static const SST_Transaction exg_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1343972, .data = 61930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_20[] = {
		{ .addr = 0x01a22e, .byte = 0xcd },
		{ .addr = 0x01a22f, .byte = 0x4d },
		{ .addr = 0x01a230, .byte = 0x35 },
		{ .addr = 0x01a231, .byte = 0xcb },
		{ .addr = 0x01a232, .byte = 0xbf },
		{ .addr = 0x01a233, .byte = 0xb0 }
};

static const SST_RamByte exg_final_ram_20[] = {
		{ .addr = 0x01a22e, .byte = 0xcd },
		{ .addr = 0x01a22f, .byte = 0x4d },
		{ .addr = 0x01a230, .byte = 0x35 },
		{ .addr = 0x01a231, .byte = 0xcb },
		{ .addr = 0x01a232, .byte = 0xbf },
		{ .addr = 0x01a233, .byte = 0xb0 }
};

static const SST_Transaction exg_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 107058, .data = 49072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_21[] = {
		{ .addr = 0x3c8b5e, .byte = 0xcf },
		{ .addr = 0x3c8b5f, .byte = 0x4c },
		{ .addr = 0x3c8b60, .byte = 0x64 },
		{ .addr = 0x3c8b61, .byte = 0xea },
		{ .addr = 0x3c8b62, .byte = 0x6d },
		{ .addr = 0x3c8b63, .byte = 0xdc }
};

static const SST_RamByte exg_final_ram_21[] = {
		{ .addr = 0x3c8b5e, .byte = 0xcf },
		{ .addr = 0x3c8b5f, .byte = 0x4c },
		{ .addr = 0x3c8b60, .byte = 0x64 },
		{ .addr = 0x3c8b61, .byte = 0xea },
		{ .addr = 0x3c8b62, .byte = 0x6d },
		{ .addr = 0x3c8b63, .byte = 0xdc }
};

static const SST_Transaction exg_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3967842, .data = 28124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_22[] = {
		{ .addr = 0x550140, .byte = 0xc9 },
		{ .addr = 0x550141, .byte = 0x8d },
		{ .addr = 0x550142, .byte = 0x86 },
		{ .addr = 0x550143, .byte = 0xed },
		{ .addr = 0x550144, .byte = 0xfb },
		{ .addr = 0x550145, .byte = 0x94 }
};

static const SST_RamByte exg_final_ram_22[] = {
		{ .addr = 0x550140, .byte = 0xc9 },
		{ .addr = 0x550141, .byte = 0x8d },
		{ .addr = 0x550142, .byte = 0x86 },
		{ .addr = 0x550143, .byte = 0xed },
		{ .addr = 0x550144, .byte = 0xfb },
		{ .addr = 0x550145, .byte = 0x94 }
};

static const SST_Transaction exg_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5570884, .data = 64404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_23[] = {
		{ .addr = 0x022a2a, .byte = 0xc5 },
		{ .addr = 0x022a2b, .byte = 0x47 },
		{ .addr = 0x022a2c, .byte = 0xac },
		{ .addr = 0x022a2d, .byte = 0xb2 },
		{ .addr = 0x022a2e, .byte = 0xe7 },
		{ .addr = 0x022a2f, .byte = 0x10 }
};

static const SST_RamByte exg_final_ram_23[] = {
		{ .addr = 0x022a2a, .byte = 0xc5 },
		{ .addr = 0x022a2b, .byte = 0x47 },
		{ .addr = 0x022a2c, .byte = 0xac },
		{ .addr = 0x022a2d, .byte = 0xb2 },
		{ .addr = 0x022a2e, .byte = 0xe7 },
		{ .addr = 0x022a2f, .byte = 0x10 }
};

static const SST_Transaction exg_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 141870, .data = 59152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_24[] = {
		{ .addr = 0x4f0a74, .byte = 0xc1 },
		{ .addr = 0x4f0a75, .byte = 0x43 },
		{ .addr = 0x4f0a76, .byte = 0xc8 },
		{ .addr = 0x4f0a77, .byte = 0x73 },
		{ .addr = 0x4f0a78, .byte = 0xe6 },
		{ .addr = 0x4f0a79, .byte = 0x09 }
};

static const SST_RamByte exg_final_ram_24[] = {
		{ .addr = 0x4f0a74, .byte = 0xc1 },
		{ .addr = 0x4f0a75, .byte = 0x43 },
		{ .addr = 0x4f0a76, .byte = 0xc8 },
		{ .addr = 0x4f0a77, .byte = 0x73 },
		{ .addr = 0x4f0a78, .byte = 0xe6 },
		{ .addr = 0x4f0a79, .byte = 0x09 }
};

static const SST_Transaction exg_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5180024, .data = 58889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_25[] = {
		{ .addr = 0x4af52c, .byte = 0xc9 },
		{ .addr = 0x4af52d, .byte = 0x8c },
		{ .addr = 0x4af52e, .byte = 0x22 },
		{ .addr = 0x4af52f, .byte = 0x12 },
		{ .addr = 0x4af530, .byte = 0xb8 },
		{ .addr = 0x4af531, .byte = 0x72 }
};

static const SST_RamByte exg_final_ram_25[] = {
		{ .addr = 0x4af52c, .byte = 0xc9 },
		{ .addr = 0x4af52d, .byte = 0x8c },
		{ .addr = 0x4af52e, .byte = 0x22 },
		{ .addr = 0x4af52f, .byte = 0x12 },
		{ .addr = 0x4af530, .byte = 0xb8 },
		{ .addr = 0x4af531, .byte = 0x72 }
};

static const SST_Transaction exg_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4912432, .data = 47218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_26[] = {
		{ .addr = 0xc6856c, .byte = 0xc5 },
		{ .addr = 0xc6856d, .byte = 0x44 },
		{ .addr = 0xc6856e, .byte = 0x0e },
		{ .addr = 0xc6856f, .byte = 0xd7 },
		{ .addr = 0xc68570, .byte = 0x64 },
		{ .addr = 0xc68571, .byte = 0xb6 }
};

static const SST_RamByte exg_final_ram_26[] = {
		{ .addr = 0xc6856c, .byte = 0xc5 },
		{ .addr = 0xc6856d, .byte = 0x44 },
		{ .addr = 0xc6856e, .byte = 0x0e },
		{ .addr = 0xc6856f, .byte = 0xd7 },
		{ .addr = 0xc68570, .byte = 0x64 },
		{ .addr = 0xc68571, .byte = 0xb6 }
};

static const SST_Transaction exg_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13010288, .data = 25782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_27[] = {
		{ .addr = 0xc03332, .byte = 0xcf },
		{ .addr = 0xc03333, .byte = 0x8a },
		{ .addr = 0xc03334, .byte = 0xb3 },
		{ .addr = 0xc03335, .byte = 0xf1 },
		{ .addr = 0xc03336, .byte = 0x7c },
		{ .addr = 0xc03337, .byte = 0x7b }
};

static const SST_RamByte exg_final_ram_27[] = {
		{ .addr = 0xc03332, .byte = 0xcf },
		{ .addr = 0xc03333, .byte = 0x8a },
		{ .addr = 0xc03334, .byte = 0xb3 },
		{ .addr = 0xc03335, .byte = 0xf1 },
		{ .addr = 0xc03336, .byte = 0x7c },
		{ .addr = 0xc03337, .byte = 0x7b }
};

static const SST_Transaction exg_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12596022, .data = 31867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_28[] = {
		{ .addr = 0xaa362e, .byte = 0xc3 },
		{ .addr = 0xaa362f, .byte = 0x4a },
		{ .addr = 0xaa3630, .byte = 0x5c },
		{ .addr = 0xaa3631, .byte = 0x51 },
		{ .addr = 0xaa3632, .byte = 0xb3 },
		{ .addr = 0xaa3633, .byte = 0xe3 }
};

static const SST_RamByte exg_final_ram_28[] = {
		{ .addr = 0xaa362e, .byte = 0xc3 },
		{ .addr = 0xaa362f, .byte = 0x4a },
		{ .addr = 0xaa3630, .byte = 0x5c },
		{ .addr = 0xaa3631, .byte = 0x51 },
		{ .addr = 0xaa3632, .byte = 0xb3 },
		{ .addr = 0xaa3633, .byte = 0xe3 }
};

static const SST_Transaction exg_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11154994, .data = 46051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_29[] = {
		{ .addr = 0x91fb78, .byte = 0xcf },
		{ .addr = 0x91fb79, .byte = 0x48 },
		{ .addr = 0x91fb7a, .byte = 0x07 },
		{ .addr = 0x91fb7b, .byte = 0x1a },
		{ .addr = 0x91fb7c, .byte = 0xe2 },
		{ .addr = 0x91fb7d, .byte = 0xe4 }
};

static const SST_RamByte exg_final_ram_29[] = {
		{ .addr = 0x91fb78, .byte = 0xcf },
		{ .addr = 0x91fb79, .byte = 0x48 },
		{ .addr = 0x91fb7a, .byte = 0x07 },
		{ .addr = 0x91fb7b, .byte = 0x1a },
		{ .addr = 0x91fb7c, .byte = 0xe2 },
		{ .addr = 0x91fb7d, .byte = 0xe4 }
};

static const SST_Transaction exg_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9567100, .data = 58084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_30[] = {
		{ .addr = 0x81f1c2, .byte = 0xcd },
		{ .addr = 0x81f1c3, .byte = 0x43 },
		{ .addr = 0x81f1c4, .byte = 0xa8 },
		{ .addr = 0x81f1c5, .byte = 0xfa },
		{ .addr = 0x81f1c6, .byte = 0x46 },
		{ .addr = 0x81f1c7, .byte = 0x28 }
};

static const SST_RamByte exg_final_ram_30[] = {
		{ .addr = 0x81f1c2, .byte = 0xcd },
		{ .addr = 0x81f1c3, .byte = 0x43 },
		{ .addr = 0x81f1c4, .byte = 0xa8 },
		{ .addr = 0x81f1c5, .byte = 0xfa },
		{ .addr = 0x81f1c6, .byte = 0x46 },
		{ .addr = 0x81f1c7, .byte = 0x28 }
};

static const SST_Transaction exg_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8516038, .data = 17960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte exg_initial_ram_31[] = {
		{ .addr = 0x7e848c, .byte = 0xcb },
		{ .addr = 0x7e848d, .byte = 0x42 },
		{ .addr = 0x7e848e, .byte = 0xcb },
		{ .addr = 0x7e848f, .byte = 0x81 },
		{ .addr = 0x7e8490, .byte = 0x4f },
		{ .addr = 0x7e8491, .byte = 0x9c }
};

static const SST_RamByte exg_final_ram_31[] = {
		{ .addr = 0x7e848c, .byte = 0xcb },
		{ .addr = 0x7e848d, .byte = 0x42 },
		{ .addr = 0x7e848e, .byte = 0xcb },
		{ .addr = 0x7e848f, .byte = 0x81 },
		{ .addr = 0x7e8490, .byte = 0x4f },
		{ .addr = 0x7e8491, .byte = 0x9c }
};

static const SST_Transaction exg_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8291472, .data = 20380, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

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
	{
		.name = "016 EXG D3, D7 c747",
		.initial = {
			.regs = {
				2186548940, 3419547340, 3597313931, 836709720, 2668764488, 2751092696, 2944447166, 413425803, 3508327581, 387263406, 2853837897, 368838388, 2209454621, 4136480082, 2780745617, 13581652, 15117938, 9730, 9066814
			},
			.prefetch0 = 51015,
			.prefetch1 = 32662,
			.ram = exg_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2186548940, 3419547340, 3597313931, 413425803, 2668764488, 2751092696, 2944447166, 836709720, 3508327581, 387263406, 2853837897, 368838388, 2209454621, 4136480082, 2780745617, 13581652, 15117938, 9730, 9066816
			},
			.prefetch0 = 32662,
			.prefetch1 = 43449,
			.ram = exg_final_ram_16,
			.ram_len = 6,
		},
		.transactions = exg_transactions_16,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "017 EXG D5, A5 cb8d",
		.initial = {
			.regs = {
				2921930998, 3085300943, 464668829, 1909894698, 2636450784, 3088415538, 3650518419, 3924524552, 3494139422, 237684832, 1368400052, 490434045, 2159618600, 2630370660, 2103000494, 5394842, 1295278, 10001, 14426402
			},
			.prefetch0 = 52109,
			.prefetch1 = 54312,
			.ram = exg_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2921930998, 3085300943, 464668829, 1909894698, 2636450784, 2630370660, 3650518419, 3924524552, 3494139422, 237684832, 1368400052, 490434045, 2159618600, 3088415538, 2103000494, 5394842, 1295278, 10001, 14426404
			},
			.prefetch0 = 54312,
			.prefetch1 = 63814,
			.ram = exg_final_ram_17,
			.ram_len = 6,
		},
		.transactions = exg_transactions_17,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "018 EXG A0, A6 c14e",
		.initial = {
			.regs = {
				3051160567, 2387795714, 2032477032, 2885273860, 2361858297, 257954874, 3114818813, 2220460942, 635199386, 3956696364, 882488210, 2879847515, 496125084, 1843440707, 723131234, 3501814, 16271086, 8731, 13481054
			},
			.prefetch0 = 49486,
			.prefetch1 = 16229,
			.ram = exg_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3051160567, 2387795714, 2032477032, 2885273860, 2361858297, 257954874, 3114818813, 2220460942, 723131234, 3956696364, 882488210, 2879847515, 496125084, 1843440707, 635199386, 3501814, 16271086, 8731, 13481056
			},
			.prefetch0 = 16229,
			.prefetch1 = 22698,
			.ram = exg_final_ram_18,
			.ram_len = 6,
		},
		.transactions = exg_transactions_18,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "019 EXG A4, A2 c94a",
		.initial = {
			.regs = {
				3502503682, 1795050031, 3278266778, 707365710, 1025809206, 3456527100, 1491894712, 719764400, 2305316348, 324293697, 2386355614, 2930482672, 1822433735, 2709568993, 3225898364, 11669334, 1763772, 34566, 1343972
			},
			.prefetch0 = 51530,
			.prefetch1 = 33767,
			.ram = exg_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3502503682, 1795050031, 3278266778, 707365710, 1025809206, 3456527100, 1491894712, 719764400, 2305316348, 324293697, 1822433735, 2930482672, 2386355614, 2709568993, 3225898364, 11669334, 1763772, 34566, 1343974
			},
			.prefetch0 = 33767,
			.prefetch1 = 61930,
			.ram = exg_final_ram_19,
			.ram_len = 6,
		},
		.transactions = exg_transactions_19,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "020 EXG A6, A5 cd4d",
		.initial = {
			.regs = {
				3125942674, 3642635488, 2159298111, 3303749685, 328766097, 1262460271, 1229759262, 1421844276, 923598870, 226362120, 1328212773, 1174131910, 4044591489, 3388640445, 4278380852, 5098706, 1472138, 42783, 107058
			},
			.prefetch0 = 52557,
			.prefetch1 = 13771,
			.ram = exg_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3125942674, 3642635488, 2159298111, 3303749685, 328766097, 1262460271, 1229759262, 1421844276, 923598870, 226362120, 1328212773, 1174131910, 4044591489, 4278380852, 3388640445, 5098706, 1472138, 42783, 107060
			},
			.prefetch0 = 13771,
			.prefetch1 = 49072,
			.ram = exg_final_ram_20,
			.ram_len = 6,
		},
		.transactions = exg_transactions_20,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "021 EXG A7, A4 cf4c",
		.initial = {
			.regs = {
				1973066431, 261533990, 592784402, 209144452, 68923706, 1753245488, 3747436827, 887024139, 770543361, 2818896832, 2405333304, 1262992986, 1367170087, 1122551598, 742155695, 10132868, 12048778, 9739, 3967842
			},
			.prefetch0 = 53068,
			.prefetch1 = 25834,
			.ram = exg_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1973066431, 261533990, 592784402, 209144452, 68923706, 1753245488, 3747436827, 887024139, 770543361, 2818896832, 2405333304, 1262992986, 12048778, 1122551598, 742155695, 10132868, 1367170087, 9739, 3967844
			},
			.prefetch0 = 25834,
			.prefetch1 = 28124,
			.ram = exg_final_ram_21,
			.ram_len = 6,
		},
		.transactions = exg_transactions_21,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "022 EXG D4, A5 c98d",
		.initial = {
			.regs = {
				3523401527, 2143120880, 1860983138, 3714606502, 3126211332, 3349336882, 4220860771, 4255245056, 217127900, 3891608620, 81268394, 4150220865, 1177761147, 2393577608, 4101441627, 9303260, 14711144, 1552, 5570884
			},
			.prefetch0 = 51597,
			.prefetch1 = 34541,
			.ram = exg_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3523401527, 2143120880, 1860983138, 3714606502, 2393577608, 3349336882, 4220860771, 4255245056, 217127900, 3891608620, 81268394, 4150220865, 1177761147, 3126211332, 4101441627, 9303260, 14711144, 1552, 5570886
			},
			.prefetch0 = 34541,
			.prefetch1 = 64404,
			.ram = exg_final_ram_22,
			.ram_len = 6,
		},
		.transactions = exg_transactions_22,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "023 EXG D2, D7 c547",
		.initial = {
			.regs = {
				3196211235, 2489187087, 957058543, 1878100350, 4222835579, 2725611383, 2035309973, 584821075, 2512440576, 3099301794, 3954293867, 4210484595, 4121059312, 1706206915, 874733057, 10502286, 13483874, 42511, 141870
			},
			.prefetch0 = 50503,
			.prefetch1 = 44210,
			.ram = exg_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3196211235, 2489187087, 584821075, 1878100350, 4222835579, 2725611383, 2035309973, 957058543, 2512440576, 3099301794, 3954293867, 4210484595, 4121059312, 1706206915, 874733057, 10502286, 13483874, 42511, 141872
			},
			.prefetch0 = 44210,
			.prefetch1 = 59152,
			.ram = exg_final_ram_23,
			.ram_len = 6,
		},
		.transactions = exg_transactions_23,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "024 EXG D0, D3 c143",
		.initial = {
			.regs = {
				902650433, 1405892821, 793942204, 2823593458, 2036326835, 4042482183, 3210797509, 2107189301, 1594404511, 2892973335, 2569605928, 4274921725, 3105019826, 2904711048, 556230710, 7912628, 11402960, 34577, 5180024
			},
			.prefetch0 = 49475,
			.prefetch1 = 51315,
			.ram = exg_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2823593458, 1405892821, 793942204, 902650433, 2036326835, 4042482183, 3210797509, 2107189301, 1594404511, 2892973335, 2569605928, 4274921725, 3105019826, 2904711048, 556230710, 7912628, 11402960, 34577, 5180026
			},
			.prefetch0 = 51315,
			.prefetch1 = 58889,
			.ram = exg_final_ram_24,
			.ram_len = 6,
		},
		.transactions = exg_transactions_24,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "025 EXG D4, A4 c98c",
		.initial = {
			.regs = {
				1228842204, 995930645, 2678643609, 2713059969, 1873204719, 1003205322, 232237351, 1300680406, 3068666632, 3887352570, 2338837661, 332695832, 3459651140, 3939051398, 1199446521, 12352244, 4595124, 41476, 4912432
			},
			.prefetch0 = 51596,
			.prefetch1 = 8722,
			.ram = exg_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1228842204, 995930645, 2678643609, 2713059969, 3459651140, 1003205322, 232237351, 1300680406, 3068666632, 3887352570, 2338837661, 332695832, 1873204719, 3939051398, 1199446521, 12352244, 4595124, 41476, 4912434
			},
			.prefetch0 = 8722,
			.prefetch1 = 47218,
			.ram = exg_final_ram_25,
			.ram_len = 6,
		},
		.transactions = exg_transactions_25,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "026 EXG D2, D4 c544",
		.initial = {
			.regs = {
				1633851903, 3004276201, 3665857641, 206452185, 2336198073, 4146711384, 3205526667, 2841954348, 1378209497, 169775845, 1830907334, 1870847227, 928642, 29929319, 3933763573, 12672192, 5058662, 41222, 13010288
			},
			.prefetch0 = 50500,
			.prefetch1 = 3799,
			.ram = exg_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1633851903, 3004276201, 2336198073, 206452185, 3665857641, 4146711384, 3205526667, 2841954348, 1378209497, 169775845, 1830907334, 1870847227, 928642, 29929319, 3933763573, 12672192, 5058662, 41222, 13010290
			},
			.prefetch0 = 3799,
			.prefetch1 = 25782,
			.ram = exg_final_ram_26,
			.ram_len = 6,
		},
		.transactions = exg_transactions_26,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "027 EXG D7, A2 cf8a",
		.initial = {
			.regs = {
				1245572488, 144061629, 4000555578, 2282239166, 2885051336, 2299128205, 1590135154, 767003122, 141297748, 1176364547, 1431642944, 3103498746, 343593048, 3095291188, 4023551292, 10390800, 203610, 519, 12596022
			},
			.prefetch0 = 53130,
			.prefetch1 = 46065,
			.ram = exg_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1245572488, 144061629, 4000555578, 2282239166, 2885051336, 2299128205, 1590135154, 1431642944, 141297748, 1176364547, 767003122, 3103498746, 343593048, 3095291188, 4023551292, 10390800, 203610, 519, 12596024
			},
			.prefetch0 = 46065,
			.prefetch1 = 31867,
			.ram = exg_final_ram_27,
			.ram_len = 6,
		},
		.transactions = exg_transactions_27,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "028 EXG A1, A2 c34a",
		.initial = {
			.regs = {
				1973580215, 3934957758, 2068427655, 1205293053, 4038724822, 2695097481, 2941379357, 697469032, 2825148597, 1277579249, 1653963896, 1186868382, 1036192520, 67749200, 3377179502, 16565438, 7467998, 41218, 11154994
			},
			.prefetch0 = 49994,
			.prefetch1 = 23633,
			.ram = exg_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1973580215, 3934957758, 2068427655, 1205293053, 4038724822, 2695097481, 2941379357, 697469032, 2825148597, 1653963896, 1277579249, 1186868382, 1036192520, 67749200, 3377179502, 16565438, 7467998, 41218, 11154996
			},
			.prefetch0 = 23633,
			.prefetch1 = 46051,
			.ram = exg_final_ram_28,
			.ram_len = 6,
		},
		.transactions = exg_transactions_28,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "029 EXG A7, A0 cf48",
		.initial = {
			.regs = {
				3018063751, 3645056042, 1831325099, 423069630, 3877697928, 1999299248, 3163821292, 1707010116, 3306805455, 155480698, 2212572299, 3317801602, 1833513842, 4055127960, 1143195631, 675206, 14654284, 8716, 9567100
			},
			.prefetch0 = 53064,
			.prefetch1 = 1818,
			.ram = exg_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3018063751, 3645056042, 1831325099, 423069630, 3877697928, 1999299248, 3163821292, 1707010116, 14654284, 155480698, 2212572299, 3317801602, 1833513842, 4055127960, 1143195631, 675206, 3306805455, 8716, 9567102
			},
			.prefetch0 = 1818,
			.prefetch1 = 58084,
			.ram = exg_final_ram_29,
			.ram_len = 6,
		},
		.transactions = exg_transactions_29,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "030 EXG D6, D3 cd43",
		.initial = {
			.regs = {
				2602581745, 3856590706, 2159845030, 1910616796, 2913415121, 3264704010, 89773720, 99536231, 1623129395, 3935289480, 3791059016, 1057404276, 2333203007, 185709095, 167689670, 11230856, 3210612, 263, 8516038
			},
			.prefetch0 = 52547,
			.prefetch1 = 43258,
			.ram = exg_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2602581745, 3856590706, 2159845030, 89773720, 2913415121, 3264704010, 1910616796, 99536231, 1623129395, 3935289480, 3791059016, 1057404276, 2333203007, 185709095, 167689670, 11230856, 3210612, 263, 8516040
			},
			.prefetch0 = 43258,
			.prefetch1 = 17960,
			.ram = exg_final_ram_30,
			.ram_len = 6,
		},
		.transactions = exg_transactions_30,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "031 EXG D5, D2 cb42",
		.initial = {
			.regs = {
				3245996443, 4253203136, 692430010, 3179613591, 179236888, 121914855, 3010487077, 3621154514, 1315825589, 1741701549, 3908662403, 3415945912, 548677731, 4028446111, 4023875806, 8471152, 9452462, 8464, 8291472
			},
			.prefetch0 = 52034,
			.prefetch1 = 52097,
			.ram = exg_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3245996443, 4253203136, 121914855, 3179613591, 179236888, 692430010, 3010487077, 3621154514, 1315825589, 1741701549, 3908662403, 3415945912, 548677731, 4028446111, 4023875806, 8471152, 9452462, 8464, 8291474
			},
			.prefetch0 = 52097,
			.prefetch1 = 20380,
			.ram = exg_final_ram_31,
			.ram_len = 6,
		},
		.transactions = exg_transactions_31,
		.transactions_len = 2,
		.lenght = 6,
	},
};

#endif /* RBT_EXG_H */