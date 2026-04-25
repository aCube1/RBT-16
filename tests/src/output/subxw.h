#ifndef RBT_SUBXW_H
#define RBT_SUBXW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subxw_initial_ram_0[] = {
		{ .addr = 0x1f8be0, .byte = 0x95 },
		{ .addr = 0x1f8be1, .byte = 0x45 },
		{ .addr = 0x1f8be2, .byte = 0x40 },
		{ .addr = 0x1f8be3, .byte = 0xc1 },
		{ .addr = 0x1f8be4, .byte = 0xbf },
		{ .addr = 0x1f8be5, .byte = 0xde }
};

static const SST_RamByte subxw_final_ram_0[] = {
		{ .addr = 0x1f8be0, .byte = 0x95 },
		{ .addr = 0x1f8be1, .byte = 0x45 },
		{ .addr = 0x1f8be2, .byte = 0x40 },
		{ .addr = 0x1f8be3, .byte = 0xc1 },
		{ .addr = 0x1f8be4, .byte = 0xbf },
		{ .addr = 0x1f8be5, .byte = 0xde }
};

static const SST_Transaction subxw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2067428, .data = 49118, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_1[] = {
		{ .addr = 0xd276bc, .byte = 0x93 },
		{ .addr = 0xd276bd, .byte = 0x4c },
		{ .addr = 0xd276be, .byte = 0xf1 },
		{ .addr = 0xd276bf, .byte = 0x9a },
		{ .addr = 0x8949b4, .byte = 0x4c },
		{ .addr = 0x8949b5, .byte = 0xdd },
		{ .addr = 0x444c14, .byte = 0x0a },
		{ .addr = 0x444c15, .byte = 0x7f },
		{ .addr = 0xd276c0, .byte = 0x69 },
		{ .addr = 0xd276c1, .byte = 0xbb }
};

static const SST_RamByte subxw_final_ram_1[] = {
		{ .addr = 0xd276bc, .byte = 0x93 },
		{ .addr = 0xd276bd, .byte = 0x4c },
		{ .addr = 0xd276be, .byte = 0xf1 },
		{ .addr = 0xd276bf, .byte = 0x9a },
		{ .addr = 0x8949b4, .byte = 0x4c },
		{ .addr = 0x8949b5, .byte = 0xdd },
		{ .addr = 0x444c14, .byte = 0xbd },
		{ .addr = 0x444c15, .byte = 0xa2 },
		{ .addr = 0xd276c0, .byte = 0x69 },
		{ .addr = 0xd276c1, .byte = 0xbb }
};

static const SST_Transaction subxw_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8997300, .data = 19677, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4475924, .data = 2687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13792960, .data = 27067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4475924, .data = 48546, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_2[] = {
		{ .addr = 0xb27cae, .byte = 0x9f },
		{ .addr = 0xb27caf, .byte = 0x4c },
		{ .addr = 0xb27cb0, .byte = 0x9d },
		{ .addr = 0xb27cb1, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0xd1 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x0a },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0x0a0abc, .byte = 0xf0 },
		{ .addr = 0x0a0abd, .byte = 0x42 },
		{ .addr = 0x0a0abe, .byte = 0x10 },
		{ .addr = 0x0a0abf, .byte = 0x6a }
};

static const SST_RamByte subxw_final_ram_2[] = {
		{ .addr = 0xb27cae, .byte = 0x9f },
		{ .addr = 0xb27caf, .byte = 0x4c },
		{ .addr = 0xb27cb0, .byte = 0x9d },
		{ .addr = 0xb27cb1, .byte = 0x36 },
		{ .addr = 0x3cf1e2, .byte = 0x7c },
		{ .addr = 0x3cf1e3, .byte = 0xb2 },
		{ .addr = 0x3cf1de, .byte = 0x21 },
		{ .addr = 0x3cf1df, .byte = 0x16 },
		{ .addr = 0x3cf1e0, .byte = 0x00 },
		{ .addr = 0x3cf1e1, .byte = 0xb2 },
		{ .addr = 0x3cf1dc, .byte = 0x9f },
		{ .addr = 0x3cf1dd, .byte = 0x4c },
		{ .addr = 0x3cf1da, .byte = 0x62 },
		{ .addr = 0x3cf1db, .byte = 0xc7 },
		{ .addr = 0x3cf1d6, .byte = 0x9f },
		{ .addr = 0x3cf1d7, .byte = 0x55 },
		{ .addr = 0x3cf1d8, .byte = 0x6e },
		{ .addr = 0x3cf1d9, .byte = 0x5b },
		{ .addr = 0x00000c, .byte = 0xd1 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x0a },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0x0a0abc, .byte = 0xf0 },
		{ .addr = 0x0a0abd, .byte = 0x42 },
		{ .addr = 0x0a0abe, .byte = 0x10 },
		{ .addr = 0x0a0abf, .byte = 0x6a }
};

static const SST_Transaction subxw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5989062, .data = 50133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3994082, .data = 31922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3994078, .data = 8470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3994080, .data = 178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3994076, .data = 40780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3994074, .data = 25287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3994070, .data = 40789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3994072, .data = 28251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 2748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 658108, .data = 61506, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 658110, .data = 4202, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_3[] = {
		{ .addr = 0x1f3566, .byte = 0x9f },
		{ .addr = 0x1f3567, .byte = 0x42 },
		{ .addr = 0x1f3568, .byte = 0x59 },
		{ .addr = 0x1f3569, .byte = 0x00 },
		{ .addr = 0x1f356a, .byte = 0x50 },
		{ .addr = 0x1f356b, .byte = 0xd4 }
};

static const SST_RamByte subxw_final_ram_3[] = {
		{ .addr = 0x1f3566, .byte = 0x9f },
		{ .addr = 0x1f3567, .byte = 0x42 },
		{ .addr = 0x1f3568, .byte = 0x59 },
		{ .addr = 0x1f3569, .byte = 0x00 },
		{ .addr = 0x1f356a, .byte = 0x50 },
		{ .addr = 0x1f356b, .byte = 0xd4 }
};

static const SST_Transaction subxw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2045290, .data = 20692, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_4[] = {
		{ .addr = 0x6cd744, .byte = 0x99 },
		{ .addr = 0x6cd745, .byte = 0x4b },
		{ .addr = 0x6cd746, .byte = 0x1d },
		{ .addr = 0x6cd747, .byte = 0xcf },
		{ .addr = 0x00000c, .byte = 0xce },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x56 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x4656cc, .byte = 0xb2 },
		{ .addr = 0x4656cd, .byte = 0x80 },
		{ .addr = 0x4656ce, .byte = 0x0e },
		{ .addr = 0x4656cf, .byte = 0x24 }
};

static const SST_RamByte subxw_final_ram_4[] = {
		{ .addr = 0x6cd744, .byte = 0x99 },
		{ .addr = 0x6cd745, .byte = 0x4b },
		{ .addr = 0x6cd746, .byte = 0x1d },
		{ .addr = 0x6cd747, .byte = 0xcf },
		{ .addr = 0x24fbc2, .byte = 0xd7 },
		{ .addr = 0x24fbc3, .byte = 0x48 },
		{ .addr = 0x24fbbe, .byte = 0x25 },
		{ .addr = 0x24fbbf, .byte = 0x0c },
		{ .addr = 0x24fbc0, .byte = 0x00 },
		{ .addr = 0x24fbc1, .byte = 0x6c },
		{ .addr = 0x24fbbc, .byte = 0x99 },
		{ .addr = 0x24fbbd, .byte = 0x4b },
		{ .addr = 0x24fbba, .byte = 0xd6 },
		{ .addr = 0x24fbbb, .byte = 0xa1 },
		{ .addr = 0x24fbb6, .byte = 0x99 },
		{ .addr = 0x24fbb7, .byte = 0x55 },
		{ .addr = 0x24fbb8, .byte = 0x1d },
		{ .addr = 0x24fbb9, .byte = 0x0d },
		{ .addr = 0x00000c, .byte = 0xce },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x56 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x4656cc, .byte = 0xb2 },
		{ .addr = 0x4656cd, .byte = 0x80 },
		{ .addr = 0x4656ce, .byte = 0x0e },
		{ .addr = 0x4656cf, .byte = 0x24 }
};

static const SST_Transaction subxw_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 906912, .data = 46865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423746, .data = 55112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423742, .data = 9484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423744, .data = 108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423740, .data = 39243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423738, .data = 54945, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423734, .data = 39253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423736, .data = 7437, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4609740, .data = 45696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4609742, .data = 3620, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_5[] = {
		{ .addr = 0x0eaafa, .byte = 0x9b },
		{ .addr = 0x0eaafb, .byte = 0x47 },
		{ .addr = 0x0eaafc, .byte = 0x9d },
		{ .addr = 0x0eaafd, .byte = 0x0c },
		{ .addr = 0x0eaafe, .byte = 0xea },
		{ .addr = 0x0eaaff, .byte = 0x8f }
};

static const SST_RamByte subxw_final_ram_5[] = {
		{ .addr = 0x0eaafa, .byte = 0x9b },
		{ .addr = 0x0eaafb, .byte = 0x47 },
		{ .addr = 0x0eaafc, .byte = 0x9d },
		{ .addr = 0x0eaafd, .byte = 0x0c },
		{ .addr = 0x0eaafe, .byte = 0xea },
		{ .addr = 0x0eaaff, .byte = 0x8f }
};

static const SST_Transaction subxw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 961278, .data = 60047, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_6[] = {
		{ .addr = 0xe35156, .byte = 0x9b },
		{ .addr = 0xe35157, .byte = 0x43 },
		{ .addr = 0xe35158, .byte = 0xbe },
		{ .addr = 0xe35159, .byte = 0xa3 },
		{ .addr = 0xe3515a, .byte = 0x27 },
		{ .addr = 0xe3515b, .byte = 0x25 }
};

static const SST_RamByte subxw_final_ram_6[] = {
		{ .addr = 0xe35156, .byte = 0x9b },
		{ .addr = 0xe35157, .byte = 0x43 },
		{ .addr = 0xe35158, .byte = 0xbe },
		{ .addr = 0xe35159, .byte = 0xa3 },
		{ .addr = 0xe3515a, .byte = 0x27 },
		{ .addr = 0xe3515b, .byte = 0x25 }
};

static const SST_Transaction subxw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14897498, .data = 10021, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_7[] = {
		{ .addr = 0x676784, .byte = 0x9f },
		{ .addr = 0x676785, .byte = 0x4b },
		{ .addr = 0x676786, .byte = 0x55 },
		{ .addr = 0x676787, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0x56 },
		{ .addr = 0x00000d, .byte = 0x4c },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x4c90ac, .byte = 0xa1 },
		{ .addr = 0x4c90ad, .byte = 0x12 },
		{ .addr = 0x4c90ae, .byte = 0x09 },
		{ .addr = 0x4c90af, .byte = 0x8a }
};

static const SST_RamByte subxw_final_ram_7[] = {
		{ .addr = 0x676784, .byte = 0x9f },
		{ .addr = 0x676785, .byte = 0x4b },
		{ .addr = 0x676786, .byte = 0x55 },
		{ .addr = 0x676787, .byte = 0x92 },
		{ .addr = 0x0a35ae, .byte = 0x67 },
		{ .addr = 0x0a35af, .byte = 0x88 },
		{ .addr = 0x0a35aa, .byte = 0x23 },
		{ .addr = 0x0a35ab, .byte = 0x07 },
		{ .addr = 0x0a35ac, .byte = 0x00 },
		{ .addr = 0x0a35ad, .byte = 0x67 },
		{ .addr = 0x0a35a8, .byte = 0x9f },
		{ .addr = 0x0a35a9, .byte = 0x4b },
		{ .addr = 0x0a35a6, .byte = 0xd6 },
		{ .addr = 0x0a35a7, .byte = 0xcf },
		{ .addr = 0x0a35a2, .byte = 0x9f },
		{ .addr = 0x0a35a3, .byte = 0x55 },
		{ .addr = 0x0a35a4, .byte = 0x47 },
		{ .addr = 0x0a35a5, .byte = 0x39 },
		{ .addr = 0x00000c, .byte = 0x56 },
		{ .addr = 0x00000d, .byte = 0x4c },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x4c90ac, .byte = 0xa1 },
		{ .addr = 0x4c90ad, .byte = 0x12 },
		{ .addr = 0x4c90ae, .byte = 0x09 },
		{ .addr = 0x4c90af, .byte = 0x8a }
};

static const SST_Transaction subxw_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3790542, .data = 36376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 669102, .data = 26504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 669098, .data = 8967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 669100, .data = 103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 669096, .data = 40779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 669094, .data = 54991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 669090, .data = 40789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 669092, .data = 18233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 22092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5017772, .data = 41234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5017774, .data = 2442, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_8[] = {
		{ .addr = 0x0a4d88, .byte = 0x93 },
		{ .addr = 0x0a4d89, .byte = 0x4a },
		{ .addr = 0x0a4d8a, .byte = 0x33 },
		{ .addr = 0x0a4d8b, .byte = 0xd4 },
		{ .addr = 0xd66ff2, .byte = 0xa1 },
		{ .addr = 0xd66ff3, .byte = 0x17 },
		{ .addr = 0x8543cc, .byte = 0x98 },
		{ .addr = 0x8543cd, .byte = 0xaf },
		{ .addr = 0x0a4d8c, .byte = 0x5a },
		{ .addr = 0x0a4d8d, .byte = 0x26 }
};

static const SST_RamByte subxw_final_ram_8[] = {
		{ .addr = 0x0a4d88, .byte = 0x93 },
		{ .addr = 0x0a4d89, .byte = 0x4a },
		{ .addr = 0x0a4d8a, .byte = 0x33 },
		{ .addr = 0x0a4d8b, .byte = 0xd4 },
		{ .addr = 0xd66ff2, .byte = 0xa1 },
		{ .addr = 0xd66ff3, .byte = 0x17 },
		{ .addr = 0x8543cc, .byte = 0xf7 },
		{ .addr = 0x8543cd, .byte = 0x98 },
		{ .addr = 0x0a4d8c, .byte = 0x5a },
		{ .addr = 0x0a4d8d, .byte = 0x26 }
};

static const SST_Transaction subxw_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14053362, .data = 41239, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8733644, .data = 39087, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 675212, .data = 23078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8733644, .data = 63384, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_9[] = {
		{ .addr = 0x3a9bc4, .byte = 0x97 },
		{ .addr = 0x3a9bc5, .byte = 0x4d },
		{ .addr = 0x3a9bc6, .byte = 0xaf },
		{ .addr = 0x3a9bc7, .byte = 0x3c },
		{ .addr = 0x9e429c, .byte = 0x60 },
		{ .addr = 0x9e429d, .byte = 0x6f },
		{ .addr = 0x0ce642, .byte = 0xdd },
		{ .addr = 0x0ce643, .byte = 0x70 },
		{ .addr = 0x3a9bc8, .byte = 0x86 },
		{ .addr = 0x3a9bc9, .byte = 0xc7 }
};

static const SST_RamByte subxw_final_ram_9[] = {
		{ .addr = 0x3a9bc4, .byte = 0x97 },
		{ .addr = 0x3a9bc5, .byte = 0x4d },
		{ .addr = 0x3a9bc6, .byte = 0xaf },
		{ .addr = 0x3a9bc7, .byte = 0x3c },
		{ .addr = 0x9e429c, .byte = 0x60 },
		{ .addr = 0x9e429d, .byte = 0x6f },
		{ .addr = 0x0ce642, .byte = 0x7d },
		{ .addr = 0x0ce643, .byte = 0x01 },
		{ .addr = 0x3a9bc8, .byte = 0x86 },
		{ .addr = 0x3a9bc9, .byte = 0xc7 }
};

static const SST_Transaction subxw_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10371740, .data = 24687, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 845378, .data = 56688, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3840968, .data = 34503, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 845378, .data = 32001, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_10[] = {
		{ .addr = 0xf218ec, .byte = 0x9f },
		{ .addr = 0xf218ed, .byte = 0x4a },
		{ .addr = 0xf218ee, .byte = 0x95 },
		{ .addr = 0xf218ef, .byte = 0xb5 },
		{ .addr = 0x00000c, .byte = 0x1f },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0xd2 },
		{ .addr = 0x00000f, .byte = 0xfc },
		{ .addr = 0x3cd2fc, .byte = 0x01 },
		{ .addr = 0x3cd2fd, .byte = 0x91 },
		{ .addr = 0x3cd2fe, .byte = 0x85 },
		{ .addr = 0x3cd2ff, .byte = 0x07 }
};

static const SST_RamByte subxw_final_ram_10[] = {
		{ .addr = 0xf218ec, .byte = 0x9f },
		{ .addr = 0xf218ed, .byte = 0x4a },
		{ .addr = 0xf218ee, .byte = 0x95 },
		{ .addr = 0xf218ef, .byte = 0xb5 },
		{ .addr = 0x555e40, .byte = 0x18 },
		{ .addr = 0x555e41, .byte = 0xf0 },
		{ .addr = 0x555e3c, .byte = 0x80 },
		{ .addr = 0x555e3d, .byte = 0x13 },
		{ .addr = 0x555e3e, .byte = 0x00 },
		{ .addr = 0x555e3f, .byte = 0xf2 },
		{ .addr = 0x555e3a, .byte = 0x9f },
		{ .addr = 0x555e3b, .byte = 0x4a },
		{ .addr = 0x555e38, .byte = 0xdc },
		{ .addr = 0x555e39, .byte = 0x41 },
		{ .addr = 0x555e34, .byte = 0x9f },
		{ .addr = 0x555e35, .byte = 0x51 },
		{ .addr = 0x555e36, .byte = 0x94 },
		{ .addr = 0x555e37, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0x1f },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0xd2 },
		{ .addr = 0x00000f, .byte = 0xfc },
		{ .addr = 0x3cd2fc, .byte = 0x01 },
		{ .addr = 0x3cd2fd, .byte = 0x91 },
		{ .addr = 0x3cd2fe, .byte = 0x85 },
		{ .addr = 0x3cd2ff, .byte = 0x07 }
};

static const SST_Transaction subxw_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2808896, .data = 22878, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5594688, .data = 6384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5594684, .data = 32787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5594686, .data = 242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5594682, .data = 40778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5594680, .data = 56385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5594676, .data = 40785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5594678, .data = 37930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3986172, .data = 401, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3986174, .data = 34055, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_11[] = {
		{ .addr = 0xfb0fa8, .byte = 0x93 },
		{ .addr = 0xfb0fa9, .byte = 0x44 },
		{ .addr = 0xfb0faa, .byte = 0xf9 },
		{ .addr = 0xfb0fab, .byte = 0x55 },
		{ .addr = 0xfb0fac, .byte = 0xd4 },
		{ .addr = 0xfb0fad, .byte = 0xc3 }
};

static const SST_RamByte subxw_final_ram_11[] = {
		{ .addr = 0xfb0fa8, .byte = 0x93 },
		{ .addr = 0xfb0fa9, .byte = 0x44 },
		{ .addr = 0xfb0faa, .byte = 0xf9 },
		{ .addr = 0xfb0fab, .byte = 0x55 },
		{ .addr = 0xfb0fac, .byte = 0xd4 },
		{ .addr = 0xfb0fad, .byte = 0xc3 }
};

static const SST_Transaction subxw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16453548, .data = 54467, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_12[] = {
		{ .addr = 0xf611ba, .byte = 0x93 },
		{ .addr = 0xf611bb, .byte = 0x45 },
		{ .addr = 0xf611bc, .byte = 0x8f },
		{ .addr = 0xf611bd, .byte = 0x4c },
		{ .addr = 0xf611be, .byte = 0xd5 },
		{ .addr = 0xf611bf, .byte = 0xa1 }
};

static const SST_RamByte subxw_final_ram_12[] = {
		{ .addr = 0xf611ba, .byte = 0x93 },
		{ .addr = 0xf611bb, .byte = 0x45 },
		{ .addr = 0xf611bc, .byte = 0x8f },
		{ .addr = 0xf611bd, .byte = 0x4c },
		{ .addr = 0xf611be, .byte = 0xd5 },
		{ .addr = 0xf611bf, .byte = 0xa1 }
};

static const SST_Transaction subxw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16126398, .data = 54689, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_13[] = {
		{ .addr = 0x2a216c, .byte = 0x95 },
		{ .addr = 0x2a216d, .byte = 0x4a },
		{ .addr = 0x2a216e, .byte = 0xa3 },
		{ .addr = 0x2a216f, .byte = 0xb2 },
		{ .addr = 0x00000c, .byte = 0x8c },
		{ .addr = 0x00000d, .byte = 0x86 },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0x6a },
		{ .addr = 0x861b6a, .byte = 0x97 },
		{ .addr = 0x861b6b, .byte = 0x71 },
		{ .addr = 0x861b6c, .byte = 0x8e },
		{ .addr = 0x861b6d, .byte = 0xe2 }
};

static const SST_RamByte subxw_final_ram_13[] = {
		{ .addr = 0x2a216c, .byte = 0x95 },
		{ .addr = 0x2a216d, .byte = 0x4a },
		{ .addr = 0x2a216e, .byte = 0xa3 },
		{ .addr = 0x2a216f, .byte = 0xb2 },
		{ .addr = 0x6e09de, .byte = 0x21 },
		{ .addr = 0x6e09df, .byte = 0x70 },
		{ .addr = 0x6e09da, .byte = 0x03 },
		{ .addr = 0x6e09db, .byte = 0x1b },
		{ .addr = 0x6e09dc, .byte = 0x00 },
		{ .addr = 0x6e09dd, .byte = 0x2a },
		{ .addr = 0x6e09d8, .byte = 0x95 },
		{ .addr = 0x6e09d9, .byte = 0x4a },
		{ .addr = 0x6e09d6, .byte = 0xc4 },
		{ .addr = 0x6e09d7, .byte = 0xc5 },
		{ .addr = 0x6e09d2, .byte = 0x95 },
		{ .addr = 0x6e09d3, .byte = 0x51 },
		{ .addr = 0x6e09d4, .byte = 0x77 },
		{ .addr = 0x6e09d5, .byte = 0x3a },
		{ .addr = 0x00000c, .byte = 0x8c },
		{ .addr = 0x00000d, .byte = 0x86 },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0x6a },
		{ .addr = 0x861b6a, .byte = 0x97 },
		{ .addr = 0x861b6b, .byte = 0x71 },
		{ .addr = 0x861b6c, .byte = 0x8e },
		{ .addr = 0x861b6d, .byte = 0xe2 }
};

static const SST_Transaction subxw_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3851460, .data = 27497, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7211486, .data = 8560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7211482, .data = 795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7211484, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7211480, .data = 38218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7211478, .data = 50373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7211474, .data = 38225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7211476, .data = 30522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8788842, .data = 38769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8788844, .data = 36578, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_14[] = {
		{ .addr = 0xf10b62, .byte = 0x91 },
		{ .addr = 0xf10b63, .byte = 0x43 },
		{ .addr = 0xf10b64, .byte = 0xaa },
		{ .addr = 0xf10b65, .byte = 0xba },
		{ .addr = 0xf10b66, .byte = 0x36 },
		{ .addr = 0xf10b67, .byte = 0x85 }
};

static const SST_RamByte subxw_final_ram_14[] = {
		{ .addr = 0xf10b62, .byte = 0x91 },
		{ .addr = 0xf10b63, .byte = 0x43 },
		{ .addr = 0xf10b64, .byte = 0xaa },
		{ .addr = 0xf10b65, .byte = 0xba },
		{ .addr = 0xf10b66, .byte = 0x36 },
		{ .addr = 0xf10b67, .byte = 0x85 }
};

static const SST_Transaction subxw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15797094, .data = 13957, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_15[] = {
		{ .addr = 0x2c24d2, .byte = 0x93 },
		{ .addr = 0x2c24d3, .byte = 0x4e },
		{ .addr = 0x2c24d4, .byte = 0x5e },
		{ .addr = 0x2c24d5, .byte = 0x03 },
		{ .addr = 0x00000c, .byte = 0xf9 },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0x725fb8, .byte = 0x96 },
		{ .addr = 0x725fb9, .byte = 0x19 },
		{ .addr = 0x725fba, .byte = 0x33 },
		{ .addr = 0x725fbb, .byte = 0x37 }
};

static const SST_RamByte subxw_final_ram_15[] = {
		{ .addr = 0x2c24d2, .byte = 0x93 },
		{ .addr = 0x2c24d3, .byte = 0x4e },
		{ .addr = 0x2c24d4, .byte = 0x5e },
		{ .addr = 0x2c24d5, .byte = 0x03 },
		{ .addr = 0x96dae6, .byte = 0x24 },
		{ .addr = 0x96dae7, .byte = 0xd6 },
		{ .addr = 0x96dae2, .byte = 0x24 },
		{ .addr = 0x96dae3, .byte = 0x08 },
		{ .addr = 0x96dae4, .byte = 0x00 },
		{ .addr = 0x96dae5, .byte = 0x2c },
		{ .addr = 0x96dae0, .byte = 0x93 },
		{ .addr = 0x96dae1, .byte = 0x4e },
		{ .addr = 0x96dade, .byte = 0xd7 },
		{ .addr = 0x96dadf, .byte = 0x39 },
		{ .addr = 0x96dada, .byte = 0x93 },
		{ .addr = 0x96dadb, .byte = 0x55 },
		{ .addr = 0x96dadc, .byte = 0xa8 },
		{ .addr = 0x96dadd, .byte = 0x75 },
		{ .addr = 0x00000c, .byte = 0xf9 },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0x725fb8, .byte = 0x96 },
		{ .addr = 0x725fb9, .byte = 0x19 },
		{ .addr = 0x725fba, .byte = 0x33 },
		{ .addr = 0x725fbb, .byte = 0x37 }
};

static const SST_Transaction subxw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7722808, .data = 9157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9886438, .data = 9430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9886434, .data = 9224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9886436, .data = 44, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9886432, .data = 37710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9886430, .data = 55097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9886426, .data = 37717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9886428, .data = 43125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 63858, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7495608, .data = 38425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7495610, .data = 13111, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_16[] = {
		{ .addr = 0x30c33a, .byte = 0x9f },
		{ .addr = 0x30c33b, .byte = 0x46 },
		{ .addr = 0x30c33c, .byte = 0x40 },
		{ .addr = 0x30c33d, .byte = 0xf3 },
		{ .addr = 0x30c33e, .byte = 0xe7 },
		{ .addr = 0x30c33f, .byte = 0xc3 }
};

static const SST_RamByte subxw_final_ram_16[] = {
		{ .addr = 0x30c33a, .byte = 0x9f },
		{ .addr = 0x30c33b, .byte = 0x46 },
		{ .addr = 0x30c33c, .byte = 0x40 },
		{ .addr = 0x30c33d, .byte = 0xf3 },
		{ .addr = 0x30c33e, .byte = 0xe7 },
		{ .addr = 0x30c33f, .byte = 0xc3 }
};

static const SST_Transaction subxw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3195710, .data = 59331, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_17[] = {
		{ .addr = 0xe498b8, .byte = 0x99 },
		{ .addr = 0xe498b9, .byte = 0x4b },
		{ .addr = 0xe498ba, .byte = 0x6b },
		{ .addr = 0xe498bb, .byte = 0xf3 },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0x6a9762, .byte = 0x34 },
		{ .addr = 0x6a9763, .byte = 0xc4 },
		{ .addr = 0x6a9764, .byte = 0x39 },
		{ .addr = 0x6a9765, .byte = 0xfe }
};

static const SST_RamByte subxw_final_ram_17[] = {
		{ .addr = 0xe498b8, .byte = 0x99 },
		{ .addr = 0xe498b9, .byte = 0x4b },
		{ .addr = 0xe498ba, .byte = 0x6b },
		{ .addr = 0xe498bb, .byte = 0xf3 },
		{ .addr = 0x609a10, .byte = 0x98 },
		{ .addr = 0x609a11, .byte = 0xbc },
		{ .addr = 0x609a0c, .byte = 0x27 },
		{ .addr = 0x609a0d, .byte = 0x19 },
		{ .addr = 0x609a0e, .byte = 0x00 },
		{ .addr = 0x609a0f, .byte = 0xe4 },
		{ .addr = 0x609a0a, .byte = 0x99 },
		{ .addr = 0x609a0b, .byte = 0x4b },
		{ .addr = 0x609a08, .byte = 0xca },
		{ .addr = 0x609a09, .byte = 0xd7 },
		{ .addr = 0x609a04, .byte = 0x99 },
		{ .addr = 0x609a05, .byte = 0x55 },
		{ .addr = 0x609a06, .byte = 0x16 },
		{ .addr = 0x609a07, .byte = 0x6b },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0x6a9762, .byte = 0x34 },
		{ .addr = 0x6a9763, .byte = 0xc4 },
		{ .addr = 0x6a9764, .byte = 0x39 },
		{ .addr = 0x6a9765, .byte = 0xfe }
};

static const SST_Transaction subxw_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7064278, .data = 12433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6330896, .data = 39100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6330892, .data = 10009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6330894, .data = 228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6330890, .data = 39243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6330888, .data = 51927, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6330884, .data = 39253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6330886, .data = 5739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6985570, .data = 13508, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6985572, .data = 14846, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_18[] = {
		{ .addr = 0x567aac, .byte = 0x97 },
		{ .addr = 0x567aad, .byte = 0x45 },
		{ .addr = 0x567aae, .byte = 0x3b },
		{ .addr = 0x567aaf, .byte = 0x58 },
		{ .addr = 0x567ab0, .byte = 0xf3 },
		{ .addr = 0x567ab1, .byte = 0xcb }
};

static const SST_RamByte subxw_final_ram_18[] = {
		{ .addr = 0x567aac, .byte = 0x97 },
		{ .addr = 0x567aad, .byte = 0x45 },
		{ .addr = 0x567aae, .byte = 0x3b },
		{ .addr = 0x567aaf, .byte = 0x58 },
		{ .addr = 0x567ab0, .byte = 0xf3 },
		{ .addr = 0x567ab1, .byte = 0xcb }
};

static const SST_Transaction subxw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5667504, .data = 62411, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_19[] = {
		{ .addr = 0x96aa70, .byte = 0x9b },
		{ .addr = 0x96aa71, .byte = 0x46 },
		{ .addr = 0x96aa72, .byte = 0x34 },
		{ .addr = 0x96aa73, .byte = 0x15 },
		{ .addr = 0x96aa74, .byte = 0xa6 },
		{ .addr = 0x96aa75, .byte = 0x70 }
};

static const SST_RamByte subxw_final_ram_19[] = {
		{ .addr = 0x96aa70, .byte = 0x9b },
		{ .addr = 0x96aa71, .byte = 0x46 },
		{ .addr = 0x96aa72, .byte = 0x34 },
		{ .addr = 0x96aa73, .byte = 0x15 },
		{ .addr = 0x96aa74, .byte = 0xa6 },
		{ .addr = 0x96aa75, .byte = 0x70 }
};

static const SST_Transaction subxw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9874036, .data = 42608, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_20[] = {
		{ .addr = 0x5c58f2, .byte = 0x93 },
		{ .addr = 0x5c58f3, .byte = 0x4a },
		{ .addr = 0x5c58f4, .byte = 0x52 },
		{ .addr = 0x5c58f5, .byte = 0x99 },
		{ .addr = 0xc65738, .byte = 0xc6 },
		{ .addr = 0xc65739, .byte = 0x8f },
		{ .addr = 0x426ef6, .byte = 0x90 },
		{ .addr = 0x426ef7, .byte = 0x64 },
		{ .addr = 0x5c58f6, .byte = 0xc9 },
		{ .addr = 0x5c58f7, .byte = 0x0f }
};

static const SST_RamByte subxw_final_ram_20[] = {
		{ .addr = 0x5c58f2, .byte = 0x93 },
		{ .addr = 0x5c58f3, .byte = 0x4a },
		{ .addr = 0x5c58f4, .byte = 0x52 },
		{ .addr = 0x5c58f5, .byte = 0x99 },
		{ .addr = 0xc65738, .byte = 0xc6 },
		{ .addr = 0xc65739, .byte = 0x8f },
		{ .addr = 0x426ef6, .byte = 0xc9 },
		{ .addr = 0x426ef7, .byte = 0xd5 },
		{ .addr = 0x5c58f6, .byte = 0xc9 },
		{ .addr = 0x5c58f7, .byte = 0x0f }
};

static const SST_Transaction subxw_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12998456, .data = 50831, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4353782, .data = 36964, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6052086, .data = 51471, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4353782, .data = 51669, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_21[] = {
		{ .addr = 0x77a3d2, .byte = 0x9b },
		{ .addr = 0x77a3d3, .byte = 0x4c },
		{ .addr = 0x77a3d4, .byte = 0x62 },
		{ .addr = 0x77a3d5, .byte = 0xcf },
		{ .addr = 0x880b1e, .byte = 0x78 },
		{ .addr = 0x880b1f, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0xc5 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0xbd },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0xecbdc4, .byte = 0x1e },
		{ .addr = 0xecbdc5, .byte = 0xe6 },
		{ .addr = 0xecbdc6, .byte = 0x0c },
		{ .addr = 0xecbdc7, .byte = 0x1f }
};

static const SST_RamByte subxw_final_ram_21[] = {
		{ .addr = 0x77a3d2, .byte = 0x9b },
		{ .addr = 0x77a3d3, .byte = 0x4c },
		{ .addr = 0x77a3d4, .byte = 0x62 },
		{ .addr = 0x77a3d5, .byte = 0xcf },
		{ .addr = 0x880b1e, .byte = 0x78 },
		{ .addr = 0x880b1f, .byte = 0x2a },
		{ .addr = 0x35ddfc, .byte = 0xa3 },
		{ .addr = 0x35ddfd, .byte = 0xd6 },
		{ .addr = 0x35ddf8, .byte = 0x05 },
		{ .addr = 0x35ddf9, .byte = 0x08 },
		{ .addr = 0x35ddfa, .byte = 0x00 },
		{ .addr = 0x35ddfb, .byte = 0x77 },
		{ .addr = 0x35ddf6, .byte = 0x9b },
		{ .addr = 0x35ddf7, .byte = 0x4c },
		{ .addr = 0x35ddf4, .byte = 0x3a },
		{ .addr = 0x35ddf5, .byte = 0x93 },
		{ .addr = 0x35ddf0, .byte = 0x9b },
		{ .addr = 0x35ddf1, .byte = 0x51 },
		{ .addr = 0x35ddf2, .byte = 0x4c },
		{ .addr = 0x35ddf3, .byte = 0x89 },
		{ .addr = 0x00000c, .byte = 0xc5 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0xbd },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0xecbdc4, .byte = 0x1e },
		{ .addr = 0xecbdc5, .byte = 0xe6 },
		{ .addr = 0xecbdc6, .byte = 0x0c },
		{ .addr = 0xecbdc7, .byte = 0x1f }
};

static const SST_Transaction subxw_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8915742, .data = 30762, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8993426, .data = 64121, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3530236, .data = 41942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3530232, .data = 1288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3530234, .data = 119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3530230, .data = 39756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3530228, .data = 14995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3530224, .data = 39761, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3530226, .data = 19593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15515076, .data = 7910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15515078, .data = 3103, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_22[] = {
		{ .addr = 0x548006, .byte = 0x9b },
		{ .addr = 0x548007, .byte = 0x45 },
		{ .addr = 0x548008, .byte = 0x58 },
		{ .addr = 0x548009, .byte = 0xee },
		{ .addr = 0x54800a, .byte = 0xa5 },
		{ .addr = 0x54800b, .byte = 0x98 }
};

static const SST_RamByte subxw_final_ram_22[] = {
		{ .addr = 0x548006, .byte = 0x9b },
		{ .addr = 0x548007, .byte = 0x45 },
		{ .addr = 0x548008, .byte = 0x58 },
		{ .addr = 0x548009, .byte = 0xee },
		{ .addr = 0x54800a, .byte = 0xa5 },
		{ .addr = 0x54800b, .byte = 0x98 }
};

static const SST_Transaction subxw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5537802, .data = 42392, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_23[] = {
		{ .addr = 0xee7ea6, .byte = 0x97 },
		{ .addr = 0xee7ea7, .byte = 0x4e },
		{ .addr = 0xee7ea8, .byte = 0xf2 },
		{ .addr = 0xee7ea9, .byte = 0xd7 },
		{ .addr = 0xc23cde, .byte = 0x90 },
		{ .addr = 0xc23cdf, .byte = 0xd9 },
		{ .addr = 0x00000c, .byte = 0xf6 },
		{ .addr = 0x00000d, .byte = 0x98 },
		{ .addr = 0x00000e, .byte = 0xf9 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x98f9ea, .byte = 0x6e },
		{ .addr = 0x98f9eb, .byte = 0x73 },
		{ .addr = 0x98f9ec, .byte = 0x0d },
		{ .addr = 0x98f9ed, .byte = 0x2f }
};

static const SST_RamByte subxw_final_ram_23[] = {
		{ .addr = 0xee7ea6, .byte = 0x97 },
		{ .addr = 0xee7ea7, .byte = 0x4e },
		{ .addr = 0xee7ea8, .byte = 0xf2 },
		{ .addr = 0xee7ea9, .byte = 0xd7 },
		{ .addr = 0xc23cde, .byte = 0x90 },
		{ .addr = 0xc23cdf, .byte = 0xd9 },
		{ .addr = 0x66bd78, .byte = 0x7e },
		{ .addr = 0x66bd79, .byte = 0xaa },
		{ .addr = 0x66bd74, .byte = 0x22 },
		{ .addr = 0x66bd75, .byte = 0x0a },
		{ .addr = 0x66bd76, .byte = 0x00 },
		{ .addr = 0x66bd77, .byte = 0xee },
		{ .addr = 0x66bd72, .byte = 0x97 },
		{ .addr = 0x66bd73, .byte = 0x4e },
		{ .addr = 0x66bd70, .byte = 0xec },
		{ .addr = 0x66bd71, .byte = 0xf9 },
		{ .addr = 0x66bd6c, .byte = 0x97 },
		{ .addr = 0x66bd6d, .byte = 0x55 },
		{ .addr = 0x66bd6e, .byte = 0x9a },
		{ .addr = 0x66bd6f, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0xf6 },
		{ .addr = 0x00000d, .byte = 0x98 },
		{ .addr = 0x00000e, .byte = 0xf9 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x98f9ea, .byte = 0x6e },
		{ .addr = 0x98f9eb, .byte = 0x73 },
		{ .addr = 0x98f9ec, .byte = 0x0d },
		{ .addr = 0x98f9ed, .byte = 0x2f }
};

static const SST_Transaction subxw_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12729566, .data = 37081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12905720, .data = 21087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6733176, .data = 32426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6733172, .data = 8714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6733174, .data = 238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6733170, .data = 38734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6733168, .data = 60665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6733164, .data = 38741, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6733166, .data = 39620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 63128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10025450, .data = 28275, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10025452, .data = 3375, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_24[] = {
		{ .addr = 0xf09e08, .byte = 0x9d },
		{ .addr = 0xf09e09, .byte = 0x4f },
		{ .addr = 0xf09e0a, .byte = 0x9f },
		{ .addr = 0xf09e0b, .byte = 0xeb },
		{ .addr = 0x65f2e0, .byte = 0xd1 },
		{ .addr = 0x65f2e1, .byte = 0x3c },
		{ .addr = 0x47fd58, .byte = 0x35 },
		{ .addr = 0x47fd59, .byte = 0xe2 },
		{ .addr = 0xf09e0c, .byte = 0x62 },
		{ .addr = 0xf09e0d, .byte = 0x1b }
};

static const SST_RamByte subxw_final_ram_24[] = {
		{ .addr = 0xf09e08, .byte = 0x9d },
		{ .addr = 0xf09e09, .byte = 0x4f },
		{ .addr = 0xf09e0a, .byte = 0x9f },
		{ .addr = 0xf09e0b, .byte = 0xeb },
		{ .addr = 0x65f2e0, .byte = 0xd1 },
		{ .addr = 0x65f2e1, .byte = 0x3c },
		{ .addr = 0x47fd58, .byte = 0x64 },
		{ .addr = 0x47fd59, .byte = 0xa5 },
		{ .addr = 0xf09e0c, .byte = 0x62 },
		{ .addr = 0xf09e0d, .byte = 0x1b }
};

static const SST_Transaction subxw_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6681312, .data = 53564, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4717912, .data = 13794, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15769100, .data = 25115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4717912, .data = 25765, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_25[] = {
		{ .addr = 0xee769a, .byte = 0x93 },
		{ .addr = 0xee769b, .byte = 0x49 },
		{ .addr = 0xee769c, .byte = 0xcf },
		{ .addr = 0xee769d, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0x44 },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x129650, .byte = 0x13 },
		{ .addr = 0x129651, .byte = 0x21 },
		{ .addr = 0x129652, .byte = 0x18 },
		{ .addr = 0x129653, .byte = 0xbf }
};

static const SST_RamByte subxw_final_ram_25[] = {
		{ .addr = 0xee769a, .byte = 0x93 },
		{ .addr = 0xee769b, .byte = 0x49 },
		{ .addr = 0xee769c, .byte = 0xcf },
		{ .addr = 0xee769d, .byte = 0xef },
		{ .addr = 0x41b9a6, .byte = 0x76 },
		{ .addr = 0x41b9a7, .byte = 0x9e },
		{ .addr = 0x41b9a2, .byte = 0x84 },
		{ .addr = 0x41b9a3, .byte = 0x06 },
		{ .addr = 0x41b9a4, .byte = 0x00 },
		{ .addr = 0x41b9a5, .byte = 0xee },
		{ .addr = 0x41b9a0, .byte = 0x93 },
		{ .addr = 0x41b9a1, .byte = 0x49 },
		{ .addr = 0x41b99e, .byte = 0x3e },
		{ .addr = 0x41b99f, .byte = 0x03 },
		{ .addr = 0x41b99a, .byte = 0x93 },
		{ .addr = 0x41b99b, .byte = 0x51 },
		{ .addr = 0x41b99c, .byte = 0xf4 },
		{ .addr = 0x41b99d, .byte = 0x67 },
		{ .addr = 0x00000c, .byte = 0x44 },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x129650, .byte = 0x13 },
		{ .addr = 0x129651, .byte = 0x21 },
		{ .addr = 0x129652, .byte = 0x18 },
		{ .addr = 0x129653, .byte = 0xbf }
};

static const SST_Transaction subxw_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6766082, .data = 18748, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4307366, .data = 30366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4307362, .data = 33798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4307364, .data = 238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4307360, .data = 37705, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4307358, .data = 15875, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4307354, .data = 37713, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4307356, .data = 62567, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 17426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1218128, .data = 4897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1218130, .data = 6335, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_26[] = {
		{ .addr = 0x1b0470, .byte = 0x9d },
		{ .addr = 0x1b0471, .byte = 0x4a },
		{ .addr = 0x1b0472, .byte = 0x50 },
		{ .addr = 0x1b0473, .byte = 0xe5 },
		{ .addr = 0x546c44, .byte = 0xbd },
		{ .addr = 0x546c45, .byte = 0x0c },
		{ .addr = 0x2fab70, .byte = 0xa6 },
		{ .addr = 0x2fab71, .byte = 0x36 },
		{ .addr = 0x1b0474, .byte = 0x27 },
		{ .addr = 0x1b0475, .byte = 0xbd }
};

static const SST_RamByte subxw_final_ram_26[] = {
		{ .addr = 0x1b0470, .byte = 0x9d },
		{ .addr = 0x1b0471, .byte = 0x4a },
		{ .addr = 0x1b0472, .byte = 0x50 },
		{ .addr = 0x1b0473, .byte = 0xe5 },
		{ .addr = 0x546c44, .byte = 0xbd },
		{ .addr = 0x546c45, .byte = 0x0c },
		{ .addr = 0x2fab70, .byte = 0xe9 },
		{ .addr = 0x2fab71, .byte = 0x2a },
		{ .addr = 0x1b0474, .byte = 0x27 },
		{ .addr = 0x1b0475, .byte = 0xbd }
};

static const SST_Transaction subxw_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5532740, .data = 48396, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3124080, .data = 42550, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1770612, .data = 10173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3124080, .data = 59690, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_27[] = {
		{ .addr = 0x86972e, .byte = 0x99 },
		{ .addr = 0x86972f, .byte = 0x47 },
		{ .addr = 0x869730, .byte = 0x09 },
		{ .addr = 0x869731, .byte = 0x79 },
		{ .addr = 0x869732, .byte = 0xb4 },
		{ .addr = 0x869733, .byte = 0x4c }
};

static const SST_RamByte subxw_final_ram_27[] = {
		{ .addr = 0x86972e, .byte = 0x99 },
		{ .addr = 0x86972f, .byte = 0x47 },
		{ .addr = 0x869730, .byte = 0x09 },
		{ .addr = 0x869731, .byte = 0x79 },
		{ .addr = 0x869732, .byte = 0xb4 },
		{ .addr = 0x869733, .byte = 0x4c }
};

static const SST_Transaction subxw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8820530, .data = 46156, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_28[] = {
		{ .addr = 0x6e5b5c, .byte = 0x91 },
		{ .addr = 0x6e5b5d, .byte = 0x46 },
		{ .addr = 0x6e5b5e, .byte = 0x36 },
		{ .addr = 0x6e5b5f, .byte = 0xff },
		{ .addr = 0x6e5b60, .byte = 0x08 },
		{ .addr = 0x6e5b61, .byte = 0xb1 }
};

static const SST_RamByte subxw_final_ram_28[] = {
		{ .addr = 0x6e5b5c, .byte = 0x91 },
		{ .addr = 0x6e5b5d, .byte = 0x46 },
		{ .addr = 0x6e5b5e, .byte = 0x36 },
		{ .addr = 0x6e5b5f, .byte = 0xff },
		{ .addr = 0x6e5b60, .byte = 0x08 },
		{ .addr = 0x6e5b61, .byte = 0xb1 }
};

static const SST_Transaction subxw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7232352, .data = 2225, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_29[] = {
		{ .addr = 0x831514, .byte = 0x95 },
		{ .addr = 0x831515, .byte = 0x40 },
		{ .addr = 0x831516, .byte = 0xe1 },
		{ .addr = 0x831517, .byte = 0x1a },
		{ .addr = 0x831518, .byte = 0xae },
		{ .addr = 0x831519, .byte = 0x99 }
};

static const SST_RamByte subxw_final_ram_29[] = {
		{ .addr = 0x831514, .byte = 0x95 },
		{ .addr = 0x831515, .byte = 0x40 },
		{ .addr = 0x831516, .byte = 0xe1 },
		{ .addr = 0x831517, .byte = 0x1a },
		{ .addr = 0x831518, .byte = 0xae },
		{ .addr = 0x831519, .byte = 0x99 }
};

static const SST_Transaction subxw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8590616, .data = 44697, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_30[] = {
		{ .addr = 0x1eeeb2, .byte = 0x91 },
		{ .addr = 0x1eeeb3, .byte = 0x4c },
		{ .addr = 0x1eeeb4, .byte = 0x7e },
		{ .addr = 0x1eeeb5, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xbe964e, .byte = 0x2c },
		{ .addr = 0xbe964f, .byte = 0x13 },
		{ .addr = 0xbe9650, .byte = 0x8d },
		{ .addr = 0xbe9651, .byte = 0xf1 }
};

static const SST_RamByte subxw_final_ram_30[] = {
		{ .addr = 0x1eeeb2, .byte = 0x91 },
		{ .addr = 0x1eeeb3, .byte = 0x4c },
		{ .addr = 0x1eeeb4, .byte = 0x7e },
		{ .addr = 0x1eeeb5, .byte = 0x32 },
		{ .addr = 0xecd5b8, .byte = 0xee },
		{ .addr = 0xecd5b9, .byte = 0xb6 },
		{ .addr = 0xecd5b4, .byte = 0x82 },
		{ .addr = 0xecd5b5, .byte = 0x19 },
		{ .addr = 0xecd5b6, .byte = 0x00 },
		{ .addr = 0xecd5b7, .byte = 0x1e },
		{ .addr = 0xecd5b2, .byte = 0x91 },
		{ .addr = 0xecd5b3, .byte = 0x4c },
		{ .addr = 0xecd5b0, .byte = 0xc9 },
		{ .addr = 0xecd5b1, .byte = 0x51 },
		{ .addr = 0xecd5ac, .byte = 0x91 },
		{ .addr = 0xecd5ad, .byte = 0x51 },
		{ .addr = 0xecd5ae, .byte = 0x81 },
		{ .addr = 0xecd5af, .byte = 0xe5 },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xbe964e, .byte = 0x2c },
		{ .addr = 0xbe964f, .byte = 0x13 },
		{ .addr = 0xbe9650, .byte = 0x8d },
		{ .addr = 0xbe9651, .byte = 0xf1 }
};

static const SST_Transaction subxw_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15059280, .data = 58750, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15521208, .data = 61110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15521204, .data = 33305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15521206, .data = 30, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15521202, .data = 37196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15521200, .data = 51537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15521196, .data = 37201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15521198, .data = 33253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12490318, .data = 11283, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12490320, .data = 36337, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxw_initial_ram_31[] = {
		{ .addr = 0xe715d6, .byte = 0x97 },
		{ .addr = 0xe715d7, .byte = 0x45 },
		{ .addr = 0xe715d8, .byte = 0x50 },
		{ .addr = 0xe715d9, .byte = 0x29 },
		{ .addr = 0xe715da, .byte = 0x33 },
		{ .addr = 0xe715db, .byte = 0x09 }
};

static const SST_RamByte subxw_final_ram_31[] = {
		{ .addr = 0xe715d6, .byte = 0x97 },
		{ .addr = 0xe715d7, .byte = 0x45 },
		{ .addr = 0xe715d8, .byte = 0x50 },
		{ .addr = 0xe715d9, .byte = 0x29 },
		{ .addr = 0xe715da, .byte = 0x33 },
		{ .addr = 0xe715db, .byte = 0x09 }
};

static const SST_Transaction subxw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15144410, .data = 13065, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase subxw[] = {
	{
		.name = "000 SUBX.w D5, D2 9545",
		.initial = {
			.regs = {
				2368090618, 343229324, 4077421584, 1140111816, 776276871, 3590116636, 2450341692, 3648754164, 4047161302, 70600069, 1880235323, 2046352221, 2227657362, 3059693067, 2360542679, 4882060, 4975382, 41477, 2067428
			},
			.prefetch0 = 38213,
			.prefetch1 = 16577,
			.ram = subxw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2368090618, 343229324, 4077432564, 1140111816, 776276871, 3590116636, 2450341692, 3648754164, 4047161302, 70600069, 1880235323, 2046352221, 2227657362, 3059693067, 2360542679, 4882060, 4975382, 41497, 2067430
			},
			.prefetch0 = 16577,
			.prefetch1 = 49118,
			.ram = subxw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 SUBX.w -(A4), -(A1) 934c",
		.initial = {
			.regs = {
				203618976, 774788736, 3438626902, 2697277245, 2245322094, 2415624246, 2025661202, 845149995, 2153904307, 1715751958, 2923204139, 456200007, 1804159414, 996899578, 1368916492, 15899736, 5362770, 9474, 13792960
			},
			.prefetch0 = 37708,
			.prefetch1 = 61850,
			.ram = subxw_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				203618976, 774788736, 3438626902, 2697277245, 2245322094, 2415624246, 2025661202, 845149995, 2153904307, 1715751956, 2923204139, 456200007, 1804159412, 996899578, 1368916492, 15899736, 5362770, 9497, 13792962
			},
			.prefetch0 = 61850,
			.prefetch1 = 27067,
			.ram = subxw_final_ram_1,
			.ram_len = 10,
		},
		.transactions = subxw_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 SUBX.w -(A4), -(A7) 9f4c",
		.initial = {
			.regs = {
				2562040084, 3534325911, 1086789095, 1296074104, 1310282890, 1298819271, 3653436526, 3175944622, 1270052968, 2882089983, 4062567348, 2177621693, 1851482825, 3273177587, 3793571093, 1000950, 3994084, 8470, 11697330
			},
			.prefetch0 = 40780,
			.prefetch1 = 40246,
			.ram = subxw_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2562040084, 3534325911, 1086789095, 1296074104, 1310282890, 1298819271, 3653436526, 3175944622, 1270052968, 2882089983, 4062567348, 2177621693, 1851482823, 3273177587, 3793571093, 1000950, 3994070, 8470, 3507096256
			},
			.prefetch0 = 61506,
			.prefetch1 = 4202,
			.ram = subxw_final_ram_2,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_2,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "003 SUBX.w D2, D7 9f42",
		.initial = {
			.regs = {
				1106145745, 2884512399, 216845453, 109285490, 2478083367, 3629344955, 2203681096, 2560694142, 1309783296, 3702241761, 2796475492, 2064219400, 2323197122, 2536039098, 2468099134, 1116544, 13757270, 9238, 2045290
			},
			.prefetch0 = 40770,
			.prefetch1 = 22784,
			.ram = subxw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1106145745, 2884512399, 216845453, 109285490, 2478083367, 3629344955, 2203681096, 2560707312, 1309783296, 3702241761, 2796475492, 2064219400, 2323197122, 2536039098, 2468099134, 1116544, 13757270, 9233, 2045292
			},
			.prefetch0 = 22784,
			.prefetch1 = 20692,
			.ram = subxw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 SUBX.w -(A3), -(A4) 994b",
		.initial = {
			.regs = {
				740505172, 1982817556, 593400399, 3572334199, 601396457, 2958754815, 1102796519, 536307356, 1660337906, 558463269, 3588774086, 487446179, 160619043, 3103500348, 2926231813, 3485472, 2423748, 9484, 7133000
			},
			.prefetch0 = 39243,
			.prefetch1 = 7631,
			.ram = subxw_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				740505172, 1982817556, 593400399, 3572334199, 601396457, 2958754815, 1102796519, 536307356, 1660337906, 558463269, 3588774086, 487446177, 160619043, 3103500348, 2926231813, 3485472, 2423734, 9484, 3460716240
			},
			.prefetch0 = 45696,
			.prefetch1 = 3620,
			.ram = subxw_final_ram_4,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_4,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "005 SUBX.w D7, D5 9b47",
		.initial = {
			.regs = {
				1137943824, 3694963607, 2226946010, 715942923, 406749857, 3138092033, 1166830919, 694031946, 2272471506, 1446537765, 1778654652, 3107219568, 3558858333, 144196844, 1414606949, 2867456, 14691444, 33036, 961278
			},
			.prefetch0 = 39751,
			.prefetch1 = 40204,
			.ram = subxw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1137943824, 3694963607, 2226946010, 715942923, 406749857, 3138086327, 1166830919, 694031946, 2272471506, 1446537765, 1778654652, 3107219568, 3558858333, 144196844, 1414606949, 2867456, 14691444, 33024, 961280
			},
			.prefetch0 = 40204,
			.prefetch1 = 60047,
			.ram = subxw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 SUBX.w D3, D5 9b43",
		.initial = {
			.regs = {
				2230539279, 1659467359, 900024609, 1048283960, 1577176016, 3194755624, 4202742872, 3179322719, 395115149, 3250593892, 1865317904, 4107965968, 1453849037, 3313409618, 2553637262, 3302046, 10247062, 256, 14897498
			},
			.prefetch0 = 39747,
			.prefetch1 = 48803,
			.ram = subxw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2230539279, 1659467359, 900024609, 1048283960, 1577176016, 3194785520, 4202742872, 3179322719, 395115149, 3250593892, 1865317904, 4107965968, 1453849037, 3313409618, 2553637262, 3302046, 10247062, 283, 14897500
			},
			.prefetch0 = 48803,
			.prefetch1 = 10021,
			.ram = subxw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 SUBX.w -(A3), -(A7) 9f4b",
		.initial = {
			.regs = {
				3375549041, 3307702279, 1537000634, 899812938, 4155974180, 2216879071, 1833110963, 924679354, 3354818758, 3230709425, 3746046771, 1194972881, 1003782616, 711389663, 376948047, 4134698, 669104, 8967, 6776712
			},
			.prefetch0 = 40779,
			.prefetch1 = 21906,
			.ram = subxw_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3375549041, 3307702279, 1537000634, 899812938, 4155974180, 2216879071, 1833110963, 924679354, 3354818758, 3230709425, 3746046771, 1194972879, 1003782616, 711389663, 376948047, 4134698, 669090, 8967, 1447858352
			},
			.prefetch0 = 41234,
			.prefetch1 = 2442,
			.ram = subxw_final_ram_7,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_7,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "008 SUBX.w -(A2), -(A1) 934a",
		.initial = {
			.regs = {
				2882823918, 4115441703, 1922843527, 2325306408, 3065262886, 479120145, 2667443606, 3090218591, 1515328657, 1166361550, 2899734516, 1966553706, 2057252074, 1258501307, 3497848096, 12941326, 2882156, 33805, 675212
			},
			.prefetch0 = 37706,
			.prefetch1 = 13268,
			.ram = subxw_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2882823918, 4115441703, 1922843527, 2325306408, 3065262886, 479120145, 2667443606, 3090218591, 1515328657, 1166361548, 2899734514, 1966553706, 2057252074, 1258501307, 3497848096, 12941326, 2882156, 33817, 675214
			},
			.prefetch0 = 13268,
			.prefetch1 = 23078,
			.ram = subxw_final_ram_8,
			.ram_len = 10,
		},
		.transactions = subxw_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 SUBX.w -(A5), -(A3) 974d",
		.initial = {
			.regs = {
				1668838282, 3346576688, 2963863106, 1971722901, 315287333, 1064709937, 908791087, 3085902720, 1336804416, 4273526016, 1909480764, 2852972100, 861041736, 916341406, 2558759765, 8917906, 10577542, 7, 3840968
			},
			.prefetch0 = 38733,
			.prefetch1 = 44860,
			.ram = subxw_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1668838282, 3346576688, 2963863106, 1971722901, 315287333, 1064709937, 908791087, 3085902720, 1336804416, 4273526016, 1909480764, 2852972098, 861041736, 916341404, 2558759765, 8917906, 10577542, 2, 3840970
			},
			.prefetch0 = 44860,
			.prefetch1 = 34503,
			.ram = subxw_final_ram_9,
			.ram_len = 10,
		},
		.transactions = subxw_transactions_9,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "010 SUBX.w -(A2), -(A7) 9f4a",
		.initial = {
			.regs = {
				2659607078, 455275609, 1528239835, 7703795, 147292173, 1940853314, 1151255811, 632421332, 4077004612, 2512463927, 2485836867, 1296059196, 2620438432, 712986398, 3512151901, 9372522, 5594690, 32787, 15866096
			},
			.prefetch0 = 40778,
			.prefetch1 = 38325,
			.ram = subxw_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2659607078, 455275609, 1528239835, 7703795, 147292173, 1940853314, 1151255811, 632421332, 4077004612, 2512463927, 2485836865, 1296059196, 2620438432, 712986398, 3512151901, 9372522, 5594676, 8211, 524079872
			},
			.prefetch0 = 401,
			.prefetch1 = 34055,
			.ram = subxw_final_ram_10,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_10,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "011 SUBX.w D4, D1 9344",
		.initial = {
			.regs = {
				4236351179, 1233591678, 3814799710, 2872121475, 4085887526, 2964486127, 2459518228, 213461242, 4265686472, 2954909280, 182325842, 1074282466, 3011537875, 3377735490, 1191943111, 8392130, 3769612, 34069, 16453548
			},
			.prefetch0 = 37700,
			.prefetch1 = 63829,
			.ram = subxw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4236351179, 1233611607, 3814799710, 2872121475, 4085887526, 2964486127, 2459518228, 213461242, 4265686472, 2954909280, 182325842, 1074282466, 3011537875, 3377735490, 1191943111, 8392130, 3769612, 34065, 16453550
			},
			.prefetch0 = 63829,
			.prefetch1 = 54467,
			.ram = subxw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 SUBX.w D5, D1 9345",
		.initial = {
			.regs = {
				3974382842, 3395267253, 3070363132, 3105284065, 1964736400, 1532587016, 1393082097, 2767949855, 517797031, 4015779450, 2153447482, 3224704754, 3541618999, 925761174, 828359691, 4037964, 10364890, 33287, 16126398
			},
			.prefetch0 = 37701,
			.prefetch1 = 36684,
			.ram = subxw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3974382842, 3395239597, 3070363132, 3105284065, 1964736400, 1532587016, 1393082097, 2767949855, 517797031, 4015779450, 2153447482, 3224704754, 3541618999, 925761174, 828359691, 4037964, 10364890, 33282, 16126400
			},
			.prefetch0 = 36684,
			.prefetch1 = 54689,
			.ram = subxw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 SUBX.w -(A2), -(A2) 954a",
		.initial = {
			.regs = {
				95687561, 1596804327, 1491239003, 3179018176, 3760964112, 4016275347, 1993278356, 2877479063, 3463640257, 3562820034, 2000340167, 3979716498, 1955441535, 2813044037, 3070194167, 15175228, 7211488, 795, 2761072
			},
			.prefetch0 = 38218,
			.prefetch1 = 41906,
			.ram = subxw_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				95687561, 1596804327, 1491239003, 3179018176, 3760964112, 4016275347, 1993278356, 2877479063, 3463640257, 3562820034, 2000340165, 3979716498, 1955441535, 2813044037, 3070194167, 15175228, 7211474, 8987, 2357599086
			},
			.prefetch0 = 38769,
			.prefetch1 = 36578,
			.ram = subxw_final_ram_13,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_13,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "014 SUBX.w D3, D0 9143",
		.initial = {
			.regs = {
				2547862495, 3756467338, 2651667956, 1743195666, 1550709935, 1382583939, 3396946674, 1969393110, 2578248202, 557375414, 3027629419, 7247205, 2053672765, 1872458561, 2541928139, 13228778, 1501072, 33036, 15797094
			},
			.prefetch0 = 37187,
			.prefetch1 = 43706,
			.ram = subxw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2547858893, 3756467338, 2651667956, 1743195666, 1550709935, 1382583939, 3396946674, 1969393110, 2578248202, 557375414, 3027629419, 7247205, 2053672765, 1872458561, 2541928139, 13228778, 1501072, 33024, 15797096
			},
			.prefetch0 = 43706,
			.prefetch1 = 13957,
			.ram = subxw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 SUBX.w -(A6), -(A1) 934e",
		.initial = {
			.regs = {
				1689479185, 716247722, 2392229967, 2060339357, 1767797801, 3418523825, 42201756, 1725545014, 3031601326, 709345262, 947119513, 354342032, 790026956, 566026746, 2826295099, 9182302, 9886440, 9224, 2893014
			},
			.prefetch0 = 37710,
			.prefetch1 = 24067,
			.ram = subxw_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1689479185, 716247722, 2392229967, 2060339357, 1767797801, 3418523825, 42201756, 1725545014, 3031601326, 709345262, 947119513, 354342032, 790026956, 566026746, 2826295097, 9182302, 9886426, 9224, 4185022396
			},
			.prefetch0 = 38425,
			.prefetch1 = 13111,
			.ram = subxw_final_ram_15,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_15,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "016 SUBX.w D6, D7 9f46",
		.initial = {
			.regs = {
				1732806623, 2942206885, 576585458, 1294005670, 4211215330, 677800406, 3757101598, 1302615766, 792923552, 2196322111, 4225043183, 4022262565, 1873458588, 468209497, 707502351, 10959408, 68618, 32775, 3195710
			},
			.prefetch0 = 40774,
			.prefetch1 = 16627,
			.ram = subxw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1732806623, 2942206885, 576585458, 1294005670, 4211215330, 677800406, 3757101598, 1302627512, 792923552, 2196322111, 4225043183, 4022262565, 1873458588, 468209497, 707502351, 10959408, 68618, 32795, 3195712
			},
			.prefetch0 = 16627,
			.prefetch1 = 59331,
			.ram = subxw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 SUBX.w -(A3), -(A4) 994b",
		.initial = {
			.regs = {
				28580222, 1179175526, 1012111460, 2774493312, 1829609317, 2171233760, 439370300, 1944250274, 1590219838, 1910499610, 874601367, 376163033, 4156289397, 2663298208, 1534950371, 2140740, 6330898, 10009, 14981308
			},
			.prefetch0 = 39243,
			.prefetch1 = 27635,
			.ram = subxw_initial_ram_17,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				28580222, 1179175526, 1012111460, 2774493312, 1829609317, 2171233760, 439370300, 1944250274, 1590219838, 1910499610, 874601367, 376163031, 4156289397, 2663298208, 1534950371, 2140740, 6330884, 10009, 1282053990
			},
			.prefetch0 = 13508,
			.prefetch1 = 14846,
			.ram = subxw_final_ram_17,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_17,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "018 SUBX.w D5, D3 9745",
		.initial = {
			.regs = {
				4171943033, 2684282134, 2847294000, 3186683054, 193217172, 2398944895, 900742089, 1378804561, 3004998806, 2587873062, 4254609252, 177613694, 1930274144, 1770253849, 2539430788, 228000, 5332140, 33551, 5667504
			},
			.prefetch0 = 38725,
			.prefetch1 = 15192,
			.ram = subxw_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4171943033, 2684282134, 2847294000, 3186683439, 193217172, 2398944895, 900742089, 1378804561, 3004998806, 2587873062, 4254609252, 177613694, 1930274144, 1770253849, 2539430788, 228000, 5332140, 33561, 5667506
			},
			.prefetch0 = 15192,
			.prefetch1 = 62411,
			.ram = subxw_final_ram_18,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 SUBX.w D6, D5 9b46",
		.initial = {
			.regs = {
				991219088, 434382751, 822324350, 3316696256, 1434005184, 1597287643, 39775958, 2930520697, 1812281949, 3885673543, 1601088428, 194055090, 244682165, 466362375, 2117237771, 10306528, 10733402, 33567, 9874036
			},
			.prefetch0 = 39750,
			.prefetch1 = 13333,
			.ram = subxw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				991219088, 434382751, 822324350, 3316696256, 1434005184, 1597292036, 39775958, 2930520697, 1812281949, 3885673543, 1601088428, 194055090, 244682165, 466362375, 2117237771, 10306528, 10733402, 33561, 9874038
			},
			.prefetch0 = 13333,
			.prefetch1 = 42608,
			.ram = subxw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 SUBX.w -(A2), -(A1) 934a",
		.initial = {
			.regs = {
				2249474385, 657953117, 1459446163, 26430249, 3105329928, 3081901808, 2108088213, 1945283298, 962727853, 1782738680, 482760506, 814141411, 807989357, 1675469401, 1295273830, 8824462, 3422652, 34306, 6052086
			},
			.prefetch0 = 37706,
			.prefetch1 = 21145,
			.ram = subxw_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2249474385, 657953117, 1459446163, 26430249, 3105329928, 3081901808, 2108088213, 1945283298, 962727853, 1782738678, 482760504, 814141411, 807989357, 1675469401, 1295273830, 8824462, 3422652, 34329, 6052088
			},
			.prefetch0 = 21145,
			.prefetch1 = 51471,
			.ram = subxw_final_ram_20,
			.ram_len = 10,
		},
		.transactions = subxw_transactions_20,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "021 SUBX.w -(A4), -(A5) 9b4c",
		.initial = {
			.regs = {
				211652732, 3894800297, 3748574953, 3146987088, 432865280, 4234209868, 2069964815, 1023875420, 1674494637, 2917867811, 755676452, 4209385939, 1569196832, 1284061845, 2801241739, 14492090, 3530238, 1288, 7840726
			},
			.prefetch0 = 39756,
			.prefetch1 = 25295,
			.ram = subxw_initial_ram_21,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				211652732, 3894800297, 3748574953, 3146987088, 432865280, 4234209868, 2069964815, 1023875420, 1674494637, 2917867811, 755676452, 4209385939, 1569196830, 1284061843, 2801241739, 14492090, 3530224, 9480, 3320626632
			},
			.prefetch0 = 7910,
			.prefetch1 = 3103,
			.ram = subxw_final_ram_21,
			.ram_len = 28,
		},
		.transactions = subxw_transactions_21,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "022 SUBX.w D5, D5 9b45",
		.initial = {
			.regs = {
				218381621, 3836430555, 1298624712, 1327874221, 3991692109, 3294654168, 10479177, 3668698004, 3041435118, 3337181624, 3685709972, 1130072473, 458560569, 417232485, 1922663816, 14717150, 15018132, 8457, 5537802
			},
			.prefetch0 = 39749,
			.prefetch1 = 22766,
			.ram = subxw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				218381621, 3836430555, 1298624712, 1327874221, 3991692109, 3294625792, 10479177, 3668698004, 3041435118, 3337181624, 3685709972, 1130072473, 458560569, 417232485, 1922663816, 14717150, 15018132, 8448, 5537804
			},
			.prefetch0 = 22766,
			.prefetch1 = 42392,
			.ram = subxw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 SUBX.w -(A6), -(A3) 974e",
		.initial = {
			.regs = {
				2992941224, 146444164, 3684161000, 1474986625, 3223509106, 4263465352, 2269321218, 2457885257, 1404487680, 3508271412, 42565898, 2596596987, 532486485, 906678490, 1539456224, 3616756, 6733178, 8714, 15629994
			},
			.prefetch0 = 38734,
			.prefetch1 = 62167,
			.ram = subxw_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2992941224, 146444164, 3684161000, 1474986625, 3223509106, 4263465352, 2269321218, 2457885257, 1404487680, 3508271412, 42565898, 2596596985, 532486485, 906678490, 1539456222, 3616756, 6733164, 8714, 4137220590
			},
			.prefetch0 = 28275,
			.prefetch1 = 3375,
			.ram = subxw_final_ram_23,
			.ram_len = 28,
		},
		.transactions = subxw_transactions_23,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "024 SUBX.w -(A7), -(A6) 9d4f",
		.initial = {
			.regs = {
				4078372621, 305016689, 3486412717, 1289826560, 1565375942, 1330106418, 1975583284, 2293456673, 2476042255, 584375577, 3507852200, 2824851474, 103490960, 1903232384, 3158834522, 6681314, 12507068, 1040, 15769100
			},
			.prefetch0 = 40271,
			.prefetch1 = 40939,
			.ram = subxw_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4078372621, 305016689, 3486412717, 1289826560, 1565375942, 1330106418, 1975583284, 2293456673, 2476042255, 584375577, 3507852200, 2824851474, 103490960, 1903232384, 3158834520, 6681312, 12507068, 1041, 15769102
			},
			.prefetch0 = 40939,
			.prefetch1 = 25115,
			.ram = subxw_final_ram_24,
			.ram_len = 10,
		},
		.transactions = subxw_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 SUBX.w -(A1), -(A1) 9349",
		.initial = {
			.regs = {
				2918079216, 18359696, 3397762653, 3230254507, 1897026921, 1820501612, 2684325532, 466074928, 748142752, 4100406789, 137430689, 4200865925, 2392574663, 2974494458, 1533540754, 5584652, 4307368, 33798, 15627934
			},
			.prefetch0 = 37705,
			.prefetch1 = 53231,
			.ram = subxw_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2918079216, 18359696, 3397762653, 3230254507, 1897026921, 1820501612, 2684325532, 466074928, 748142752, 4100406787, 137430689, 4200865925, 2392574663, 2974494458, 1533540754, 5584652, 4307354, 9222, 1142068820
			},
			.prefetch0 = 4897,
			.prefetch1 = 6335,
			.ram = subxw_final_ram_25,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_25,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "026 SUBX.w -(A2), -(A6) 9d4a",
		.initial = {
			.regs = {
				2426649937, 3117149396, 2477630041, 1427775227, 1572211442, 3964657948, 1720676893, 2376055130, 2431295636, 1477343109, 844393542, 239105735, 3915167014, 1603183199, 36678514, 14811892, 11210402, 526, 1770612
			},
			.prefetch0 = 40266,
			.prefetch1 = 20709,
			.ram = subxw_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2426649937, 3117149396, 2477630041, 1427775227, 1572211442, 3964657948, 1720676893, 2376055130, 2431295636, 1477343109, 844393540, 239105735, 3915167014, 1603183199, 36678512, 14811892, 11210402, 537, 1770614
			},
			.prefetch0 = 20709,
			.prefetch1 = 10173,
			.ram = subxw_final_ram_26,
			.ram_len = 10,
		},
		.transactions = subxw_transactions_26,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "027 SUBX.w D7, D4 9947",
		.initial = {
			.regs = {
				3095533585, 1445691798, 3241533484, 250198225, 3829192937, 373931455, 2588123869, 1014328712, 4217150145, 1001581907, 3641777074, 2294839685, 3707054988, 1833320294, 2528081755, 1000152, 3432532, 40982, 8820530
			},
			.prefetch0 = 39239,
			.prefetch1 = 2425,
			.ram = subxw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3095533585, 1445691798, 3241533484, 250198225, 3829164896, 373931455, 2588123869, 1014328712, 4217150145, 1001581907, 3641777074, 2294839685, 3707054988, 1833320294, 2528081755, 1000152, 3432532, 40962, 8820532
			},
			.prefetch0 = 2425,
			.prefetch1 = 46156,
			.ram = subxw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_27,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "028 SUBX.w D6, D0 9146",
		.initial = {
			.regs = {
				697423933, 780383236, 711285392, 655186478, 3235278370, 1210269127, 2184567496, 1942725452, 3699879073, 66795456, 242657217, 3274975340, 2897587239, 3706382397, 2018591201, 15408422, 756146, 42250, 7232352
			},
			.prefetch0 = 37190,
			.prefetch1 = 14079,
			.ram = subxw_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				697433461, 780383236, 711285392, 655186478, 3235278370, 1210269127, 2184567496, 1942725452, 3699879073, 66795456, 242657217, 3274975340, 2897587239, 3706382397, 2018591201, 15408422, 756146, 42265, 7232354
			},
			.prefetch0 = 14079,
			.prefetch1 = 2225,
			.ram = subxw_final_ram_28,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_28,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "029 SUBX.w D0, D2 9540",
		.initial = {
			.regs = {
				1030307460, 317497581, 2936862278, 3538460624, 820668920, 528072580, 1446314438, 1466333385, 1237012064, 274839888, 2393555009, 3432949021, 1094871465, 2188409716, 3705843663, 7740806, 7098608, 34331, 8590616
			},
			.prefetch0 = 38208,
			.prefetch1 = 57626,
			.ram = subxw_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1030307460, 317497581, 2936846273, 3538460624, 820668920, 528072580, 1446314438, 1466333385, 1237012064, 274839888, 2393555009, 3432949021, 1094871465, 2188409716, 3705843663, 7740806, 7098608, 34312, 8590618
			},
			.prefetch0 = 57626,
			.prefetch1 = 44697,
			.ram = subxw_final_ram_29,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_29,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "030 SUBX.w -(A4), -(A0) 914c",
		.initial = {
			.regs = {
				3539810572, 1042795756, 374394399, 572010440, 1231104254, 2907376612, 1767572698, 635892493, 1296579417, 97096674, 341786777, 3075550196, 2179320147, 114061382, 339824206, 14212506, 15521210, 33305, 2027190
			},
			.prefetch0 = 37196,
			.prefetch1 = 32306,
			.ram = subxw_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3539810572, 1042795756, 374394399, 572010440, 1231104254, 2907376612, 1767572698, 635892493, 1296579417, 97096674, 341786777, 3075550196, 2179320145, 114061382, 339824206, 14212506, 15521196, 8729, 2864617042
			},
			.prefetch0 = 11283,
			.prefetch1 = 36337,
			.ram = subxw_final_ram_30,
			.ram_len = 26,
		},
		.transactions = subxw_transactions_30,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "031 SUBX.w D5, D3 9745",
		.initial = {
			.regs = {
				463854637, 2151695813, 850268469, 3144847023, 2519866966, 1896068758, 1439533993, 1172369175, 2985910224, 3810796163, 3510584206, 1587469918, 1683189535, 1516460895, 838552335, 15629036, 5256264, 42505, 15144410
			},
			.prefetch0 = 38725,
			.prefetch1 = 20521,
			.ram = subxw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				463854637, 2151695813, 850268469, 3144865817, 2519866966, 1896068758, 1439533993, 1172369175, 2985910224, 3810796163, 3510584206, 1587469918, 1683189535, 1516460895, 838552335, 15629036, 5256264, 42521, 15144412
			},
			.prefetch0 = 20521,
			.prefetch1 = 13065,
			.ram = subxw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = subxw_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_SUBXW_H */