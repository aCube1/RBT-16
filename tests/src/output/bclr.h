#ifndef RBT_BCLR_H
#define RBT_BCLR_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte bclr_initial_ram_0[] = {
		{ .addr = 0x9dfde0, .byte = 0x07 },
		{ .addr = 0x9dfde1, .byte = 0x99 },
		{ .addr = 0x9dfde2, .byte = 0xe6 },
		{ .addr = 0x9dfde3, .byte = 0xb7 },
		{ .addr = 0x8155ce, .byte = 0xf9 },
		{ .addr = 0x8155cf, .byte = 0xc3 },
		{ .addr = 0x9dfde4, .byte = 0x3d },
		{ .addr = 0x9dfde5, .byte = 0xdf }
};

static const SST_RamByte bclr_final_ram_0[] = {
		{ .addr = 0x9dfde0, .byte = 0x07 },
		{ .addr = 0x9dfde1, .byte = 0x99 },
		{ .addr = 0x9dfde2, .byte = 0xe6 },
		{ .addr = 0x9dfde3, .byte = 0xb7 },
		{ .addr = 0x8155ce, .byte = 0xf8 },
		{ .addr = 0x8155cf, .byte = 0xc3 },
		{ .addr = 0x9dfde4, .byte = 0x3d },
		{ .addr = 0x9dfde5, .byte = 0xdf }
};

static const SST_Transaction bclr_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8476110, .data = 63744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10354148, .data = 15839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8476110, .data = 63488, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_1[] = {
		{ .addr = 0x444ea6, .byte = 0x09 },
		{ .addr = 0x444ea7, .byte = 0x99 },
		{ .addr = 0x444ea8, .byte = 0x47 },
		{ .addr = 0x444ea9, .byte = 0xb7 },
		{ .addr = 0x22ad20, .byte = 0x2d },
		{ .addr = 0x22ad21, .byte = 0xa8 },
		{ .addr = 0x444eaa, .byte = 0x79 },
		{ .addr = 0x444eab, .byte = 0x2b }
};

static const SST_RamByte bclr_final_ram_1[] = {
		{ .addr = 0x444ea6, .byte = 0x09 },
		{ .addr = 0x444ea7, .byte = 0x99 },
		{ .addr = 0x444ea8, .byte = 0x47 },
		{ .addr = 0x444ea9, .byte = 0xb7 },
		{ .addr = 0x22ad20, .byte = 0x0d },
		{ .addr = 0x22ad21, .byte = 0xa8 },
		{ .addr = 0x444eaa, .byte = 0x79 },
		{ .addr = 0x444eab, .byte = 0x2b }
};

static const SST_Transaction bclr_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2272544, .data = 11520, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4476586, .data = 31019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2272544, .data = 3328, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_2[] = {
		{ .addr = 0x06bf72, .byte = 0x08 },
		{ .addr = 0x06bf73, .byte = 0xac },
		{ .addr = 0x06bf74, .byte = 0x3e },
		{ .addr = 0x06bf75, .byte = 0xdc },
		{ .addr = 0x06bf76, .byte = 0x1d },
		{ .addr = 0x06bf77, .byte = 0xb4 },
		{ .addr = 0x06bf78, .byte = 0x5f },
		{ .addr = 0x06bf79, .byte = 0x67 },
		{ .addr = 0xacb7e0, .byte = 0xa0 },
		{ .addr = 0xacb7e1, .byte = 0xee },
		{ .addr = 0x06bf7a, .byte = 0x9a },
		{ .addr = 0x06bf7b, .byte = 0x6a }
};

static const SST_RamByte bclr_final_ram_2[] = {
		{ .addr = 0x06bf72, .byte = 0x08 },
		{ .addr = 0x06bf73, .byte = 0xac },
		{ .addr = 0x06bf74, .byte = 0x3e },
		{ .addr = 0x06bf75, .byte = 0xdc },
		{ .addr = 0x06bf76, .byte = 0x1d },
		{ .addr = 0x06bf77, .byte = 0xb4 },
		{ .addr = 0x06bf78, .byte = 0x5f },
		{ .addr = 0x06bf79, .byte = 0x67 },
		{ .addr = 0xacb7e0, .byte = 0xa0 },
		{ .addr = 0xacb7e1, .byte = 0xee },
		{ .addr = 0x06bf7a, .byte = 0x9a },
		{ .addr = 0x06bf7b, .byte = 0x6a }
};

static const SST_Transaction bclr_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 442230, .data = 7604, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 442232, .data = 24423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11319264, .data = 40960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 442234, .data = 39530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11319264, .data = 40960, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_3[] = {
		{ .addr = 0x4fa9cc, .byte = 0x0d },
		{ .addr = 0x4fa9cd, .byte = 0x80 },
		{ .addr = 0x4fa9ce, .byte = 0x34 },
		{ .addr = 0x4fa9cf, .byte = 0x18 },
		{ .addr = 0x4fa9d0, .byte = 0x4a },
		{ .addr = 0x4fa9d1, .byte = 0x98 }
};

static const SST_RamByte bclr_final_ram_3[] = {
		{ .addr = 0x4fa9cc, .byte = 0x0d },
		{ .addr = 0x4fa9cd, .byte = 0x80 },
		{ .addr = 0x4fa9ce, .byte = 0x34 },
		{ .addr = 0x4fa9cf, .byte = 0x18 },
		{ .addr = 0x4fa9d0, .byte = 0x4a },
		{ .addr = 0x4fa9d1, .byte = 0x98 }
};

static const SST_Transaction bclr_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5220816, .data = 19096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte bclr_initial_ram_4[] = {
		{ .addr = 0x578d5c, .byte = 0x0f },
		{ .addr = 0x578d5d, .byte = 0xac },
		{ .addr = 0x578d5e, .byte = 0x6a },
		{ .addr = 0x578d5f, .byte = 0xc0 },
		{ .addr = 0x578d60, .byte = 0x90 },
		{ .addr = 0x578d61, .byte = 0xc2 },
		{ .addr = 0x9d2bf2, .byte = 0x71 },
		{ .addr = 0x9d2bf3, .byte = 0xe0 },
		{ .addr = 0x578d62, .byte = 0x32 },
		{ .addr = 0x578d63, .byte = 0xcd }
};

static const SST_RamByte bclr_final_ram_4[] = {
		{ .addr = 0x578d5c, .byte = 0x0f },
		{ .addr = 0x578d5d, .byte = 0xac },
		{ .addr = 0x578d5e, .byte = 0x6a },
		{ .addr = 0x578d5f, .byte = 0xc0 },
		{ .addr = 0x578d60, .byte = 0x90 },
		{ .addr = 0x578d61, .byte = 0xc2 },
		{ .addr = 0x9d2bf2, .byte = 0x71 },
		{ .addr = 0x9d2bf3, .byte = 0xe0 },
		{ .addr = 0x578d62, .byte = 0x32 },
		{ .addr = 0x578d63, .byte = 0xcd }
};

static const SST_Transaction bclr_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5737824, .data = 37058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10300402, .data = 28928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5737826, .data = 13005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10300402, .data = 28928, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_5[] = {
		{ .addr = 0xb1ca94, .byte = 0x03 },
		{ .addr = 0xb1ca95, .byte = 0x93 },
		{ .addr = 0xb1ca96, .byte = 0x6b },
		{ .addr = 0xb1ca97, .byte = 0x34 },
		{ .addr = 0x540f9c, .byte = 0x43 },
		{ .addr = 0x540f9d, .byte = 0x3a },
		{ .addr = 0xb1ca98, .byte = 0xb5 },
		{ .addr = 0xb1ca99, .byte = 0x5d }
};

static const SST_RamByte bclr_final_ram_5[] = {
		{ .addr = 0xb1ca94, .byte = 0x03 },
		{ .addr = 0xb1ca95, .byte = 0x93 },
		{ .addr = 0xb1ca96, .byte = 0x6b },
		{ .addr = 0xb1ca97, .byte = 0x34 },
		{ .addr = 0x540f9c, .byte = 0x43 },
		{ .addr = 0x540f9d, .byte = 0x3a },
		{ .addr = 0xb1ca98, .byte = 0xb5 },
		{ .addr = 0xb1ca99, .byte = 0x5d }
};

static const SST_Transaction bclr_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5509020, .data = 17152, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11651736, .data = 46429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5509020, .data = 17152, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_6[] = {
		{ .addr = 0xd160a8, .byte = 0x03 },
		{ .addr = 0xd160a9, .byte = 0x9a },
		{ .addr = 0xd160aa, .byte = 0x8f },
		{ .addr = 0xd160ab, .byte = 0x30 },
		{ .addr = 0xb01fd6, .byte = 0x80 },
		{ .addr = 0xb01fd7, .byte = 0x9e },
		{ .addr = 0xd160ac, .byte = 0x17 },
		{ .addr = 0xd160ad, .byte = 0xf7 }
};

static const SST_RamByte bclr_final_ram_6[] = {
		{ .addr = 0xd160a8, .byte = 0x03 },
		{ .addr = 0xd160a9, .byte = 0x9a },
		{ .addr = 0xd160aa, .byte = 0x8f },
		{ .addr = 0xd160ab, .byte = 0x30 },
		{ .addr = 0xb01fd6, .byte = 0x80 },
		{ .addr = 0xb01fd7, .byte = 0x8e },
		{ .addr = 0xd160ac, .byte = 0x17 },
		{ .addr = 0xd160ad, .byte = 0xf7 }
};

static const SST_Transaction bclr_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11542486, .data = 158, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13721772, .data = 6135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11542486, .data = 142, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_7[] = {
		{ .addr = 0xad5e00, .byte = 0x0b },
		{ .addr = 0xad5e01, .byte = 0xa5 },
		{ .addr = 0xad5e02, .byte = 0x1f },
		{ .addr = 0xad5e03, .byte = 0xf5 },
		{ .addr = 0xf7dc02, .byte = 0x2d },
		{ .addr = 0xf7dc03, .byte = 0x1c },
		{ .addr = 0xad5e04, .byte = 0xf2 },
		{ .addr = 0xad5e05, .byte = 0x40 }
};

static const SST_RamByte bclr_final_ram_7[] = {
		{ .addr = 0xad5e00, .byte = 0x0b },
		{ .addr = 0xad5e01, .byte = 0xa5 },
		{ .addr = 0xad5e02, .byte = 0x1f },
		{ .addr = 0xad5e03, .byte = 0xf5 },
		{ .addr = 0xf7dc02, .byte = 0x2d },
		{ .addr = 0xf7dc03, .byte = 0x1c },
		{ .addr = 0xad5e04, .byte = 0xf2 },
		{ .addr = 0xad5e05, .byte = 0x40 }
};

static const SST_Transaction bclr_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16243714, .data = 28, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11361796, .data = 62016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16243714, .data = 28, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_8[] = {
		{ .addr = 0xb0d9e4, .byte = 0x0f },
		{ .addr = 0xb0d9e5, .byte = 0xad },
		{ .addr = 0xb0d9e6, .byte = 0xfb },
		{ .addr = 0xb0d9e7, .byte = 0x2e },
		{ .addr = 0xb0d9e8, .byte = 0x2b },
		{ .addr = 0xb0d9e9, .byte = 0x76 },
		{ .addr = 0x9724c2, .byte = 0xbe },
		{ .addr = 0x9724c3, .byte = 0x04 },
		{ .addr = 0xb0d9ea, .byte = 0x01 },
		{ .addr = 0xb0d9eb, .byte = 0x29 }
};

static const SST_RamByte bclr_final_ram_8[] = {
		{ .addr = 0xb0d9e4, .byte = 0x0f },
		{ .addr = 0xb0d9e5, .byte = 0xad },
		{ .addr = 0xb0d9e6, .byte = 0xfb },
		{ .addr = 0xb0d9e7, .byte = 0x2e },
		{ .addr = 0xb0d9e8, .byte = 0x2b },
		{ .addr = 0xb0d9e9, .byte = 0x76 },
		{ .addr = 0x9724c2, .byte = 0xba },
		{ .addr = 0x9724c3, .byte = 0x04 },
		{ .addr = 0xb0d9ea, .byte = 0x01 },
		{ .addr = 0xb0d9eb, .byte = 0x29 }
};

static const SST_Transaction bclr_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11590120, .data = 11126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9905346, .data = 48640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11590122, .data = 297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9905346, .data = 47616, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_9[] = {
		{ .addr = 0xd3193c, .byte = 0x01 },
		{ .addr = 0xd3193d, .byte = 0x82 },
		{ .addr = 0xd3193e, .byte = 0x76 },
		{ .addr = 0xd3193f, .byte = 0x6e },
		{ .addr = 0xd31940, .byte = 0xcb },
		{ .addr = 0xd31941, .byte = 0x8b }
};

static const SST_RamByte bclr_final_ram_9[] = {
		{ .addr = 0xd3193c, .byte = 0x01 },
		{ .addr = 0xd3193d, .byte = 0x82 },
		{ .addr = 0xd3193e, .byte = 0x76 },
		{ .addr = 0xd3193f, .byte = 0x6e },
		{ .addr = 0xd31940, .byte = 0xcb },
		{ .addr = 0xd31941, .byte = 0x8b }
};

static const SST_Transaction bclr_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13834560, .data = 52107, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte bclr_initial_ram_10[] = {
		{ .addr = 0xcae986, .byte = 0x07 },
		{ .addr = 0xcae987, .byte = 0xb6 },
		{ .addr = 0xcae988, .byte = 0x01 },
		{ .addr = 0xcae989, .byte = 0x87 },
		{ .addr = 0xcae98a, .byte = 0xad },
		{ .addr = 0xcae98b, .byte = 0x0a },
		{ .addr = 0x61faee, .byte = 0xbe },
		{ .addr = 0x61faef, .byte = 0x72 },
		{ .addr = 0xcae98c, .byte = 0x6d },
		{ .addr = 0xcae98d, .byte = 0xc5 }
};

static const SST_RamByte bclr_final_ram_10[] = {
		{ .addr = 0xcae986, .byte = 0x07 },
		{ .addr = 0xcae987, .byte = 0xb6 },
		{ .addr = 0xcae988, .byte = 0x01 },
		{ .addr = 0xcae989, .byte = 0x87 },
		{ .addr = 0xcae98a, .byte = 0xad },
		{ .addr = 0xcae98b, .byte = 0x0a },
		{ .addr = 0x61faee, .byte = 0xbe },
		{ .addr = 0x61faef, .byte = 0x72 },
		{ .addr = 0xcae98c, .byte = 0x6d },
		{ .addr = 0xcae98d, .byte = 0xc5 }
};

static const SST_Transaction bclr_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13298058, .data = 44298, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6421230, .data = 48640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13298060, .data = 28101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6421230, .data = 48640, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_11[] = {
		{ .addr = 0xfd0188, .byte = 0x01 },
		{ .addr = 0xfd0189, .byte = 0x96 },
		{ .addr = 0xfd018a, .byte = 0x2d },
		{ .addr = 0xfd018b, .byte = 0x9b },
		{ .addr = 0x4359da, .byte = 0xb2 },
		{ .addr = 0x4359db, .byte = 0xab },
		{ .addr = 0xfd018c, .byte = 0xa4 },
		{ .addr = 0xfd018d, .byte = 0x90 }
};

static const SST_RamByte bclr_final_ram_11[] = {
		{ .addr = 0xfd0188, .byte = 0x01 },
		{ .addr = 0xfd0189, .byte = 0x96 },
		{ .addr = 0xfd018a, .byte = 0x2d },
		{ .addr = 0xfd018b, .byte = 0x9b },
		{ .addr = 0x4359da, .byte = 0xb2 },
		{ .addr = 0x4359db, .byte = 0xab },
		{ .addr = 0xfd018c, .byte = 0xa4 },
		{ .addr = 0xfd018d, .byte = 0x90 }
};

static const SST_Transaction bclr_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4413914, .data = 171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16581004, .data = 42128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4413914, .data = 171, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_12[] = {
		{ .addr = 0x337464, .byte = 0x09 },
		{ .addr = 0x337465, .byte = 0x83 },
		{ .addr = 0x337466, .byte = 0x8d },
		{ .addr = 0x337467, .byte = 0x4a },
		{ .addr = 0x337468, .byte = 0xa3 },
		{ .addr = 0x337469, .byte = 0x96 }
};

static const SST_RamByte bclr_final_ram_12[] = {
		{ .addr = 0x337464, .byte = 0x09 },
		{ .addr = 0x337465, .byte = 0x83 },
		{ .addr = 0x337466, .byte = 0x8d },
		{ .addr = 0x337467, .byte = 0x4a },
		{ .addr = 0x337468, .byte = 0xa3 },
		{ .addr = 0x337469, .byte = 0x96 }
};

static const SST_Transaction bclr_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3372136, .data = 41878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte bclr_initial_ram_13[] = {
		{ .addr = 0x3ca4b6, .byte = 0x0d },
		{ .addr = 0x3ca4b7, .byte = 0xb7 },
		{ .addr = 0x3ca4b8, .byte = 0x2a },
		{ .addr = 0x3ca4b9, .byte = 0xd1 },
		{ .addr = 0x3ca4ba, .byte = 0xa7 },
		{ .addr = 0x3ca4bb, .byte = 0xd0 },
		{ .addr = 0x63ae8e, .byte = 0xd8 },
		{ .addr = 0x63ae8f, .byte = 0x27 },
		{ .addr = 0x3ca4bc, .byte = 0x6c },
		{ .addr = 0x3ca4bd, .byte = 0x47 }
};

static const SST_RamByte bclr_final_ram_13[] = {
		{ .addr = 0x3ca4b6, .byte = 0x0d },
		{ .addr = 0x3ca4b7, .byte = 0xb7 },
		{ .addr = 0x3ca4b8, .byte = 0x2a },
		{ .addr = 0x3ca4b9, .byte = 0xd1 },
		{ .addr = 0x3ca4ba, .byte = 0xa7 },
		{ .addr = 0x3ca4bb, .byte = 0xd0 },
		{ .addr = 0x63ae8e, .byte = 0xd8 },
		{ .addr = 0x63ae8f, .byte = 0x07 },
		{ .addr = 0x3ca4bc, .byte = 0x6c },
		{ .addr = 0x3ca4bd, .byte = 0x47 }
};

static const SST_Transaction bclr_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3974330, .data = 42960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6532750, .data = 39, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3974332, .data = 27719, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6532750, .data = 7, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_14[] = {
		{ .addr = 0xb7afce, .byte = 0x07 },
		{ .addr = 0xb7afcf, .byte = 0x98 },
		{ .addr = 0xb7afd0, .byte = 0x61 },
		{ .addr = 0xb7afd1, .byte = 0x3a },
		{ .addr = 0xde4b96, .byte = 0x9f },
		{ .addr = 0xde4b97, .byte = 0x7d },
		{ .addr = 0xb7afd2, .byte = 0x0f },
		{ .addr = 0xb7afd3, .byte = 0x5c }
};

static const SST_RamByte bclr_final_ram_14[] = {
		{ .addr = 0xb7afce, .byte = 0x07 },
		{ .addr = 0xb7afcf, .byte = 0x98 },
		{ .addr = 0xb7afd0, .byte = 0x61 },
		{ .addr = 0xb7afd1, .byte = 0x3a },
		{ .addr = 0xde4b96, .byte = 0x9f },
		{ .addr = 0xde4b97, .byte = 0x7d },
		{ .addr = 0xb7afd2, .byte = 0x0f },
		{ .addr = 0xb7afd3, .byte = 0x5c }
};

static const SST_Transaction bclr_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14568342, .data = 40704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12038098, .data = 3932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14568342, .data = 40704, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_15[] = {
		{ .addr = 0x4dd834, .byte = 0x03 },
		{ .addr = 0x4dd835, .byte = 0x99 },
		{ .addr = 0x4dd836, .byte = 0xe9 },
		{ .addr = 0x4dd837, .byte = 0x9f },
		{ .addr = 0x6eb1e6, .byte = 0x96 },
		{ .addr = 0x6eb1e7, .byte = 0x8b },
		{ .addr = 0x4dd838, .byte = 0xfd },
		{ .addr = 0x4dd839, .byte = 0x5b }
};

static const SST_RamByte bclr_final_ram_15[] = {
		{ .addr = 0x4dd834, .byte = 0x03 },
		{ .addr = 0x4dd835, .byte = 0x99 },
		{ .addr = 0x4dd836, .byte = 0xe9 },
		{ .addr = 0x4dd837, .byte = 0x9f },
		{ .addr = 0x6eb1e6, .byte = 0x96 },
		{ .addr = 0x6eb1e7, .byte = 0x0b },
		{ .addr = 0x4dd838, .byte = 0xfd },
		{ .addr = 0x4dd839, .byte = 0x5b }
};

static const SST_Transaction bclr_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7254502, .data = 139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5101624, .data = 64859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7254502, .data = 11, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_16[] = {
		{ .addr = 0x6bae9e, .byte = 0x0d },
		{ .addr = 0x6bae9f, .byte = 0xa6 },
		{ .addr = 0x6baea0, .byte = 0x3e },
		{ .addr = 0x6baea1, .byte = 0x30 },
		{ .addr = 0x6b3686, .byte = 0xcf },
		{ .addr = 0x6b3687, .byte = 0xf3 },
		{ .addr = 0x6baea2, .byte = 0xec },
		{ .addr = 0x6baea3, .byte = 0xb5 }
};

static const SST_RamByte bclr_final_ram_16[] = {
		{ .addr = 0x6bae9e, .byte = 0x0d },
		{ .addr = 0x6bae9f, .byte = 0xa6 },
		{ .addr = 0x6baea0, .byte = 0x3e },
		{ .addr = 0x6baea1, .byte = 0x30 },
		{ .addr = 0x6b3686, .byte = 0xc7 },
		{ .addr = 0x6b3687, .byte = 0xf3 },
		{ .addr = 0x6baea2, .byte = 0xec },
		{ .addr = 0x6baea3, .byte = 0xb5 }
};

static const SST_Transaction bclr_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7026310, .data = 52992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7057058, .data = 60597, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7026310, .data = 50944, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_17[] = {
		{ .addr = 0x1363be, .byte = 0x0b },
		{ .addr = 0x1363bf, .byte = 0xa1 },
		{ .addr = 0x1363c0, .byte = 0xcb },
		{ .addr = 0x1363c1, .byte = 0x87 },
		{ .addr = 0xd7eada, .byte = 0xbf },
		{ .addr = 0xd7eadb, .byte = 0xd1 },
		{ .addr = 0x1363c2, .byte = 0xde },
		{ .addr = 0x1363c3, .byte = 0x38 }
};

static const SST_RamByte bclr_final_ram_17[] = {
		{ .addr = 0x1363be, .byte = 0x0b },
		{ .addr = 0x1363bf, .byte = 0xa1 },
		{ .addr = 0x1363c0, .byte = 0xcb },
		{ .addr = 0x1363c1, .byte = 0x87 },
		{ .addr = 0xd7eada, .byte = 0xbf },
		{ .addr = 0xd7eadb, .byte = 0xd1 },
		{ .addr = 0x1363c2, .byte = 0xde },
		{ .addr = 0x1363c3, .byte = 0x38 }
};

static const SST_Transaction bclr_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14150362, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1270722, .data = 56888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14150362, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_18[] = {
		{ .addr = 0x2ca52c, .byte = 0x0f },
		{ .addr = 0x2ca52d, .byte = 0x86 },
		{ .addr = 0x2ca52e, .byte = 0x45 },
		{ .addr = 0x2ca52f, .byte = 0xc5 },
		{ .addr = 0x2ca530, .byte = 0x4f },
		{ .addr = 0x2ca531, .byte = 0xd9 }
};

static const SST_RamByte bclr_final_ram_18[] = {
		{ .addr = 0x2ca52c, .byte = 0x0f },
		{ .addr = 0x2ca52d, .byte = 0x86 },
		{ .addr = 0x2ca52e, .byte = 0x45 },
		{ .addr = 0x2ca52f, .byte = 0xc5 },
		{ .addr = 0x2ca530, .byte = 0x4f },
		{ .addr = 0x2ca531, .byte = 0xd9 }
};

static const SST_Transaction bclr_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2925872, .data = 20441, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte bclr_initial_ram_19[] = {
		{ .addr = 0xadec98, .byte = 0x09 },
		{ .addr = 0xadec99, .byte = 0x97 },
		{ .addr = 0xadec9a, .byte = 0x0a },
		{ .addr = 0xadec9b, .byte = 0x28 },
		{ .addr = 0xb5442a, .byte = 0x53 },
		{ .addr = 0xb5442b, .byte = 0x8a },
		{ .addr = 0xadec9c, .byte = 0xcc },
		{ .addr = 0xadec9d, .byte = 0x5e }
};

static const SST_RamByte bclr_final_ram_19[] = {
		{ .addr = 0xadec98, .byte = 0x09 },
		{ .addr = 0xadec99, .byte = 0x97 },
		{ .addr = 0xadec9a, .byte = 0x0a },
		{ .addr = 0xadec9b, .byte = 0x28 },
		{ .addr = 0xb5442a, .byte = 0x43 },
		{ .addr = 0xb5442b, .byte = 0x8a },
		{ .addr = 0xadec9c, .byte = 0xcc },
		{ .addr = 0xadec9d, .byte = 0x5e }
};

static const SST_Transaction bclr_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11879466, .data = 21248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11398300, .data = 52318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11879466, .data = 17152, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_20[] = {
		{ .addr = 0xab3e76, .byte = 0x0d },
		{ .addr = 0xab3e77, .byte = 0xa9 },
		{ .addr = 0xab3e78, .byte = 0xfd },
		{ .addr = 0xab3e79, .byte = 0x65 },
		{ .addr = 0xab3e7a, .byte = 0xc9 },
		{ .addr = 0xab3e7b, .byte = 0x0e },
		{ .addr = 0x2a0434, .byte = 0x96 },
		{ .addr = 0x2a0435, .byte = 0x39 },
		{ .addr = 0xab3e7c, .byte = 0x5d },
		{ .addr = 0xab3e7d, .byte = 0x52 }
};

static const SST_RamByte bclr_final_ram_20[] = {
		{ .addr = 0xab3e76, .byte = 0x0d },
		{ .addr = 0xab3e77, .byte = 0xa9 },
		{ .addr = 0xab3e78, .byte = 0xfd },
		{ .addr = 0xab3e79, .byte = 0x65 },
		{ .addr = 0xab3e7a, .byte = 0xc9 },
		{ .addr = 0xab3e7b, .byte = 0x0e },
		{ .addr = 0x2a0434, .byte = 0x92 },
		{ .addr = 0x2a0435, .byte = 0x39 },
		{ .addr = 0xab3e7c, .byte = 0x5d },
		{ .addr = 0xab3e7d, .byte = 0x52 }
};

static const SST_Transaction bclr_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11222650, .data = 51470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2753588, .data = 38400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11222652, .data = 23890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2753588, .data = 37376, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_21[] = {
		{ .addr = 0xb6f216, .byte = 0x07 },
		{ .addr = 0xb6f217, .byte = 0x86 },
		{ .addr = 0xb6f218, .byte = 0xef },
		{ .addr = 0xb6f219, .byte = 0xc0 },
		{ .addr = 0xb6f21a, .byte = 0x4d },
		{ .addr = 0xb6f21b, .byte = 0x6d }
};

static const SST_RamByte bclr_final_ram_21[] = {
		{ .addr = 0xb6f216, .byte = 0x07 },
		{ .addr = 0xb6f217, .byte = 0x86 },
		{ .addr = 0xb6f218, .byte = 0xef },
		{ .addr = 0xb6f219, .byte = 0xc0 },
		{ .addr = 0xb6f21a, .byte = 0x4d },
		{ .addr = 0xb6f21b, .byte = 0x6d }
};

static const SST_Transaction bclr_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11989530, .data = 19821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte bclr_initial_ram_22[] = {
		{ .addr = 0x7d13f6, .byte = 0x03 },
		{ .addr = 0x7d13f7, .byte = 0xab },
		{ .addr = 0x7d13f8, .byte = 0x3f },
		{ .addr = 0x7d13f9, .byte = 0x72 },
		{ .addr = 0x7d13fa, .byte = 0x2d },
		{ .addr = 0x7d13fb, .byte = 0xcc },
		{ .addr = 0x15a594, .byte = 0x38 },
		{ .addr = 0x15a595, .byte = 0x9d },
		{ .addr = 0x7d13fc, .byte = 0x28 },
		{ .addr = 0x7d13fd, .byte = 0x13 }
};

static const SST_RamByte bclr_final_ram_22[] = {
		{ .addr = 0x7d13f6, .byte = 0x03 },
		{ .addr = 0x7d13f7, .byte = 0xab },
		{ .addr = 0x7d13f8, .byte = 0x3f },
		{ .addr = 0x7d13f9, .byte = 0x72 },
		{ .addr = 0x7d13fa, .byte = 0x2d },
		{ .addr = 0x7d13fb, .byte = 0xcc },
		{ .addr = 0x15a594, .byte = 0x38 },
		{ .addr = 0x15a595, .byte = 0x99 },
		{ .addr = 0x7d13fc, .byte = 0x28 },
		{ .addr = 0x7d13fd, .byte = 0x13 }
};

static const SST_Transaction bclr_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8197114, .data = 11724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1418644, .data = 157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8197116, .data = 10259, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1418644, .data = 153, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_23[] = {
		{ .addr = 0xa1cd5c, .byte = 0x0b },
		{ .addr = 0xa1cd5d, .byte = 0xa2 },
		{ .addr = 0xa1cd5e, .byte = 0x12 },
		{ .addr = 0xa1cd5f, .byte = 0x61 },
		{ .addr = 0xc92670, .byte = 0x97 },
		{ .addr = 0xc92671, .byte = 0x85 },
		{ .addr = 0xa1cd60, .byte = 0x06 },
		{ .addr = 0xa1cd61, .byte = 0xeb }
};

static const SST_RamByte bclr_final_ram_23[] = {
		{ .addr = 0xa1cd5c, .byte = 0x0b },
		{ .addr = 0xa1cd5d, .byte = 0xa2 },
		{ .addr = 0xa1cd5e, .byte = 0x12 },
		{ .addr = 0xa1cd5f, .byte = 0x61 },
		{ .addr = 0xc92670, .byte = 0x97 },
		{ .addr = 0xc92671, .byte = 0x85 },
		{ .addr = 0xa1cd60, .byte = 0x06 },
		{ .addr = 0xa1cd61, .byte = 0xeb }
};

static const SST_Transaction bclr_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13182576, .data = 38656, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10603872, .data = 1771, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13182576, .data = 38656, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_24[] = {
		{ .addr = 0xcedb94, .byte = 0x0b },
		{ .addr = 0xcedb95, .byte = 0x96 },
		{ .addr = 0xcedb96, .byte = 0x52 },
		{ .addr = 0xcedb97, .byte = 0x4d },
		{ .addr = 0xb14202, .byte = 0x20 },
		{ .addr = 0xb14203, .byte = 0xdb },
		{ .addr = 0xcedb98, .byte = 0x91 },
		{ .addr = 0xcedb99, .byte = 0x42 }
};

static const SST_RamByte bclr_final_ram_24[] = {
		{ .addr = 0xcedb94, .byte = 0x0b },
		{ .addr = 0xcedb95, .byte = 0x96 },
		{ .addr = 0xcedb96, .byte = 0x52 },
		{ .addr = 0xcedb97, .byte = 0x4d },
		{ .addr = 0xb14202, .byte = 0x20 },
		{ .addr = 0xb14203, .byte = 0x9b },
		{ .addr = 0xcedb98, .byte = 0x91 },
		{ .addr = 0xcedb99, .byte = 0x42 }
};

static const SST_Transaction bclr_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11616770, .data = 219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13556632, .data = 37186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11616770, .data = 155, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_25[] = {
		{ .addr = 0x293670, .byte = 0x0b },
		{ .addr = 0x293671, .byte = 0xaa },
		{ .addr = 0x293672, .byte = 0x46 },
		{ .addr = 0x293673, .byte = 0x0f },
		{ .addr = 0x293674, .byte = 0xae },
		{ .addr = 0x293675, .byte = 0x89 },
		{ .addr = 0xf2e63c, .byte = 0x6f },
		{ .addr = 0xf2e63d, .byte = 0x7b },
		{ .addr = 0x293676, .byte = 0xc8 },
		{ .addr = 0x293677, .byte = 0x84 }
};

static const SST_RamByte bclr_final_ram_25[] = {
		{ .addr = 0x293670, .byte = 0x0b },
		{ .addr = 0x293671, .byte = 0xaa },
		{ .addr = 0x293672, .byte = 0x46 },
		{ .addr = 0x293673, .byte = 0x0f },
		{ .addr = 0x293674, .byte = 0xae },
		{ .addr = 0x293675, .byte = 0x89 },
		{ .addr = 0xf2e63c, .byte = 0x6b },
		{ .addr = 0xf2e63d, .byte = 0x7b },
		{ .addr = 0x293676, .byte = 0xc8 },
		{ .addr = 0x293677, .byte = 0x84 }
};

static const SST_Transaction bclr_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2700916, .data = 44681, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15918652, .data = 28416, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2700918, .data = 51332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15918652, .data = 27392, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_26[] = {
		{ .addr = 0xa30d2c, .byte = 0x08 },
		{ .addr = 0xa30d2d, .byte = 0x93 },
		{ .addr = 0xa30d2e, .byte = 0x6a },
		{ .addr = 0xa30d2f, .byte = 0x57 },
		{ .addr = 0xa30d30, .byte = 0x06 },
		{ .addr = 0xa30d31, .byte = 0x96 },
		{ .addr = 0xd380a8, .byte = 0x6c },
		{ .addr = 0xd380a9, .byte = 0x66 },
		{ .addr = 0xa30d32, .byte = 0x34 },
		{ .addr = 0xa30d33, .byte = 0x9d }
};

static const SST_RamByte bclr_final_ram_26[] = {
		{ .addr = 0xa30d2c, .byte = 0x08 },
		{ .addr = 0xa30d2d, .byte = 0x93 },
		{ .addr = 0xa30d2e, .byte = 0x6a },
		{ .addr = 0xa30d2f, .byte = 0x57 },
		{ .addr = 0xa30d30, .byte = 0x06 },
		{ .addr = 0xa30d31, .byte = 0x96 },
		{ .addr = 0xd380a8, .byte = 0x6c },
		{ .addr = 0xd380a9, .byte = 0x66 },
		{ .addr = 0xa30d32, .byte = 0x34 },
		{ .addr = 0xa30d33, .byte = 0x9d }
};

static const SST_Transaction bclr_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10685744, .data = 1686, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13861032, .data = 27648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10685746, .data = 13469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13861032, .data = 27648, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_27[] = {
		{ .addr = 0xf09e12, .byte = 0x0d },
		{ .addr = 0xf09e13, .byte = 0xb3 },
		{ .addr = 0xf09e14, .byte = 0x9e },
		{ .addr = 0xf09e15, .byte = 0xc5 },
		{ .addr = 0xf09e16, .byte = 0xde },
		{ .addr = 0xf09e17, .byte = 0x3f },
		{ .addr = 0x3e232a, .byte = 0x86 },
		{ .addr = 0x3e232b, .byte = 0x82 },
		{ .addr = 0xf09e18, .byte = 0x9c },
		{ .addr = 0xf09e19, .byte = 0x62 }
};

static const SST_RamByte bclr_final_ram_27[] = {
		{ .addr = 0xf09e12, .byte = 0x0d },
		{ .addr = 0xf09e13, .byte = 0xb3 },
		{ .addr = 0xf09e14, .byte = 0x9e },
		{ .addr = 0xf09e15, .byte = 0xc5 },
		{ .addr = 0xf09e16, .byte = 0xde },
		{ .addr = 0xf09e17, .byte = 0x3f },
		{ .addr = 0x3e232a, .byte = 0x86 },
		{ .addr = 0x3e232b, .byte = 0x82 },
		{ .addr = 0xf09e18, .byte = 0x9c },
		{ .addr = 0xf09e19, .byte = 0x62 }
};

static const SST_Transaction bclr_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15769110, .data = 56895, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4072234, .data = 130, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15769112, .data = 40034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4072234, .data = 130, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_28[] = {
		{ .addr = 0x0e1172, .byte = 0x08 },
		{ .addr = 0x0e1173, .byte = 0xab },
		{ .addr = 0x0e1174, .byte = 0x79 },
		{ .addr = 0x0e1175, .byte = 0xda },
		{ .addr = 0x0e1176, .byte = 0xdd },
		{ .addr = 0x0e1177, .byte = 0xda },
		{ .addr = 0x0e1178, .byte = 0x79 },
		{ .addr = 0x0e1179, .byte = 0xd6 },
		{ .addr = 0xa35096, .byte = 0x7d },
		{ .addr = 0xa35097, .byte = 0xc7 },
		{ .addr = 0x0e117a, .byte = 0xb2 },
		{ .addr = 0x0e117b, .byte = 0x25 }
};

static const SST_RamByte bclr_final_ram_28[] = {
		{ .addr = 0x0e1172, .byte = 0x08 },
		{ .addr = 0x0e1173, .byte = 0xab },
		{ .addr = 0x0e1174, .byte = 0x79 },
		{ .addr = 0x0e1175, .byte = 0xda },
		{ .addr = 0x0e1176, .byte = 0xdd },
		{ .addr = 0x0e1177, .byte = 0xda },
		{ .addr = 0x0e1178, .byte = 0x79 },
		{ .addr = 0x0e1179, .byte = 0xd6 },
		{ .addr = 0xa35096, .byte = 0x79 },
		{ .addr = 0xa35097, .byte = 0xc7 },
		{ .addr = 0x0e117a, .byte = 0xb2 },
		{ .addr = 0x0e117b, .byte = 0x25 }
};

static const SST_Transaction bclr_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 921974, .data = 56794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 921976, .data = 31190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10702998, .data = 32000, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 921978, .data = 45605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10702998, .data = 30976, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_29[] = {
		{ .addr = 0x002dce, .byte = 0x07 },
		{ .addr = 0x002dcf, .byte = 0xad },
		{ .addr = 0x002dd0, .byte = 0x1e },
		{ .addr = 0x002dd1, .byte = 0x59 },
		{ .addr = 0x002dd2, .byte = 0x70 },
		{ .addr = 0x002dd3, .byte = 0x01 },
		{ .addr = 0x6e5c9e, .byte = 0x9c },
		{ .addr = 0x6e5c9f, .byte = 0x72 },
		{ .addr = 0x002dd4, .byte = 0xb7 },
		{ .addr = 0x002dd5, .byte = 0x78 }
};

static const SST_RamByte bclr_final_ram_29[] = {
		{ .addr = 0x002dce, .byte = 0x07 },
		{ .addr = 0x002dcf, .byte = 0xad },
		{ .addr = 0x002dd0, .byte = 0x1e },
		{ .addr = 0x002dd1, .byte = 0x59 },
		{ .addr = 0x002dd2, .byte = 0x70 },
		{ .addr = 0x002dd3, .byte = 0x01 },
		{ .addr = 0x6e5c9e, .byte = 0x94 },
		{ .addr = 0x6e5c9f, .byte = 0x72 },
		{ .addr = 0x002dd4, .byte = 0xb7 },
		{ .addr = 0x002dd5, .byte = 0x78 }
};

static const SST_Transaction bclr_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11730, .data = 28673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7232670, .data = 39936, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11732, .data = 46968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7232670, .data = 37888, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_30[] = {
		{ .addr = 0xd045bc, .byte = 0x08 },
		{ .addr = 0xd045bd, .byte = 0xa6 },
		{ .addr = 0xd045be, .byte = 0xfa },
		{ .addr = 0xd045bf, .byte = 0xf2 },
		{ .addr = 0xd045c0, .byte = 0x74 },
		{ .addr = 0xd045c1, .byte = 0xc4 },
		{ .addr = 0x131ff2, .byte = 0xad },
		{ .addr = 0x131ff3, .byte = 0x18 },
		{ .addr = 0xd045c2, .byte = 0x7c },
		{ .addr = 0xd045c3, .byte = 0xae }
};

static const SST_RamByte bclr_final_ram_30[] = {
		{ .addr = 0xd045bc, .byte = 0x08 },
		{ .addr = 0xd045bd, .byte = 0xa6 },
		{ .addr = 0xd045be, .byte = 0xfa },
		{ .addr = 0xd045bf, .byte = 0xf2 },
		{ .addr = 0xd045c0, .byte = 0x74 },
		{ .addr = 0xd045c1, .byte = 0xc4 },
		{ .addr = 0x131ff2, .byte = 0xad },
		{ .addr = 0x131ff3, .byte = 0x18 },
		{ .addr = 0xd045c2, .byte = 0x7c },
		{ .addr = 0xd045c3, .byte = 0xae }
};

static const SST_Transaction bclr_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13649344, .data = 29892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1253362, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13649346, .data = 31918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1253362, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bclr_initial_ram_31[] = {
		{ .addr = 0xa12c36, .byte = 0x0f },
		{ .addr = 0xa12c37, .byte = 0xb0 },
		{ .addr = 0xa12c38, .byte = 0xfd },
		{ .addr = 0xa12c39, .byte = 0xbe },
		{ .addr = 0xa12c3a, .byte = 0x1f },
		{ .addr = 0xa12c3b, .byte = 0x95 },
		{ .addr = 0x3f55be, .byte = 0xb3 },
		{ .addr = 0x3f55bf, .byte = 0x99 },
		{ .addr = 0xa12c3c, .byte = 0x47 },
		{ .addr = 0xa12c3d, .byte = 0x45 }
};

static const SST_RamByte bclr_final_ram_31[] = {
		{ .addr = 0xa12c36, .byte = 0x0f },
		{ .addr = 0xa12c37, .byte = 0xb0 },
		{ .addr = 0xa12c38, .byte = 0xfd },
		{ .addr = 0xa12c39, .byte = 0xbe },
		{ .addr = 0xa12c3a, .byte = 0x1f },
		{ .addr = 0xa12c3b, .byte = 0x95 },
		{ .addr = 0x3f55be, .byte = 0xb3 },
		{ .addr = 0x3f55bf, .byte = 0x98 },
		{ .addr = 0xa12c3c, .byte = 0x47 },
		{ .addr = 0xa12c3d, .byte = 0x45 }
};

static const SST_Transaction bclr_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10562618, .data = 8085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4150718, .data = 153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10562620, .data = 18245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4150718, .data = 152, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase bclr[] = {
	{
		.name = "000 BCLR D3, (A1)+ 0799",
		.initial = {
			.regs = {
				1846080252, 3858376002, 3133883255, 3257995552, 3880319835, 3116722484, 751787456, 1185313225, 1206991703, 847336910, 963978686, 1089955452, 734752850, 2028511002, 3551725147, 11588256, 8161968, 8991, 10354148
			},
			.prefetch0 = 1945,
			.prefetch1 = 59063,
			.ram = bclr_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1846080252, 3858376002, 3133883255, 3257995552, 3880319835, 3116722484, 751787456, 1185313225, 1206991703, 847336911, 963978686, 1089955452, 734752850, 2028511002, 3551725147, 11588256, 8161968, 8987, 10354150
			},
			.prefetch0 = 59063,
			.prefetch1 = 15839,
			.ram = bclr_final_ram_0,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 BCLR D4, (A1)+ 0999",
		.initial = {
			.regs = {
				3354297726, 2482885930, 705993120, 454947045, 3359042245, 3700328086, 847243093, 3137620686, 1377039474, 1763880224, 2294197048, 1177443419, 247959796, 3806887058, 2775650312, 5709968, 14003776, 42754, 4476586
			},
			.prefetch0 = 2457,
			.prefetch1 = 18359,
			.ram = bclr_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3354297726, 2482885930, 705993120, 454947045, 3359042245, 3700328086, 847243093, 3137620686, 1377039474, 1763880225, 2294197048, 1177443419, 247959796, 3806887058, 2775650312, 5709968, 14003776, 42754, 4476588
			},
			.prefetch0 = 18359,
			.prefetch1 = 31019,
			.ram = bclr_final_ram_1,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 BCLR #, (d16, A4) 08ac",
		.initial = {
			.regs = {
				3808116898, 2302361218, 1241496143, 1603249365, 100485495, 1211842912, 1148087246, 1787908679, 4013891064, 191039196, 1777283396, 2522844071, 3366754860, 3805082046, 1210665390, 10452130, 4566508, 9742, 442230
			},
			.prefetch0 = 2220,
			.prefetch1 = 16092,
			.ram = bclr_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3808116898, 2302361218, 1241496143, 1603249365, 100485495, 1211842912, 1148087246, 1787908679, 4013891064, 191039196, 1777283396, 2522844071, 3366754860, 3805082046, 1210665390, 10452130, 4566508, 9742, 442236
			},
			.prefetch0 = 24423,
			.prefetch1 = 39530,
			.ram = bclr_final_ram_2,
			.ram_len = 12,
		},
		.transactions = bclr_transactions_2,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "003 BCLR D6, D0 0d80",
		.initial = {
			.regs = {
				514463501, 3967147447, 219172872, 3456401823, 592315682, 998446208, 2166044755, 402920561, 916461168, 3339060063, 790222998, 2168885676, 2487810005, 3545054293, 3993907207, 14050948, 1239434, 33304, 5220816
			},
			.prefetch0 = 3456,
			.prefetch1 = 13336,
			.ram = bclr_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				513939213, 3967147447, 219172872, 3456401823, 592315682, 998446208, 2166044755, 402920561, 916461168, 3339060063, 790222998, 2168885676, 2487810005, 3545054293, 3993907207, 14050948, 1239434, 33304, 5220818
			},
			.prefetch0 = 13336,
			.prefetch1 = 19096,
			.ram = bclr_final_ram_3,
			.ram_len = 6,
		},
		.transactions = bclr_transactions_3,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "004 BCLR D7, (d16, A4) 0fac",
		.initial = {
			.regs = {
				1849290550, 2926422796, 1356539501, 3726488941, 921271999, 813105306, 1878280462, 397709177, 2033200002, 191415784, 1954716284, 4117117024, 2661073202, 588316460, 2411452424, 9271460, 5878142, 9485, 5737824
			},
			.prefetch0 = 4012,
			.prefetch1 = 27328,
			.ram = bclr_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1849290550, 2926422796, 1356539501, 3726488941, 921271999, 813105306, 1878280462, 397709177, 2033200002, 191415784, 1954716284, 4117117024, 2661073202, 588316460, 2411452424, 9271460, 5878142, 9485, 5737828
			},
			.prefetch0 = 37058,
			.prefetch1 = 13005,
			.ram = bclr_final_ram_4,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 BCLR D1, (A3) 0393",
		.initial = {
			.regs = {
				2201142686, 2740553335, 540771782, 3001174823, 2751967782, 3005821575, 3328894484, 4157379143, 1633207587, 137149148, 1382563505, 643043228, 2029091186, 871893505, 1266099525, 2127460, 583632, 1290, 11651736
			},
			.prefetch0 = 915,
			.prefetch1 = 27444,
			.ram = bclr_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2201142686, 2740553335, 540771782, 3001174823, 2751967782, 3005821575, 3328894484, 4157379143, 1633207587, 137149148, 1382563505, 643043228, 2029091186, 871893505, 1266099525, 2127460, 583632, 1294, 11651738
			},
			.prefetch0 = 27444,
			.prefetch1 = 46429,
			.ram = bclr_final_ram_5,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 BCLR D1, (A2)+ 039a",
		.initial = {
			.regs = {
				1930067717, 1094457908, 2053926680, 1447627860, 547425701, 2464087276, 3134567801, 2208741042, 3291957966, 1985918216, 2779783127, 102919374, 205868114, 2536802450, 4098790306, 16123750, 5981062, 34330, 13721772
			},
			.prefetch0 = 922,
			.prefetch1 = 36656,
			.ram = bclr_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1930067717, 1094457908, 2053926680, 1447627860, 547425701, 2464087276, 3134567801, 2208741042, 3291957966, 1985918216, 2779783128, 102919374, 205868114, 2536802450, 4098790306, 16123750, 5981062, 34330, 13721774
			},
			.prefetch0 = 36656,
			.prefetch1 = 6135,
			.ram = bclr_final_ram_6,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 BCLR D5, -(A5) 0ba5",
		.initial = {
			.regs = {
				865383121, 3782657508, 2535158977, 2179307227, 2267433489, 4128010182, 229397197, 2301670146, 6705799, 643369761, 4210616043, 2213362115, 3300798653, 3287800836, 1549811417, 2460392, 2917312, 33799, 11361796
			},
			.prefetch0 = 2981,
			.prefetch1 = 8181,
			.ram = bclr_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				865383121, 3782657508, 2535158977, 2179307227, 2267433489, 4128010182, 229397197, 2301670146, 6705799, 643369761, 4210616043, 2213362115, 3300798653, 3287800835, 1549811417, 2460392, 2917312, 33799, 11361798
			},
			.prefetch0 = 8181,
			.prefetch1 = 62016,
			.ram = bclr_final_ram_7,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 BCLR D7, (d16, A5) 0fad",
		.initial = {
			.regs = {
				135562182, 2773551792, 3206275482, 1769773132, 3594117125, 2851977823, 3105950771, 696494874, 2739870290, 903585908, 1918395022, 2159749208, 1897783121, 3700894100, 2226841877, 2319012, 10002294, 9245, 11590120
			},
			.prefetch0 = 4013,
			.prefetch1 = 64302,
			.ram = bclr_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				135562182, 2773551792, 3206275482, 1769773132, 3594117125, 2851977823, 3105950771, 696494874, 2739870290, 903585908, 1918395022, 2159749208, 1897783121, 3700894100, 2226841877, 2319012, 10002294, 9241, 11590124
			},
			.prefetch0 = 11126,
			.prefetch1 = 297,
			.ram = bclr_final_ram_8,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_8,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "009 BCLR D0, D2 0182",
		.initial = {
			.regs = {
				1059183437, 4254289814, 1016263586, 2704232375, 2815129313, 2448982085, 3908411243, 3947997670, 1272404362, 1639732324, 2722100893, 2771355018, 3622188103, 2663029971, 1295925256, 14297876, 15818940, 8470, 13834560
			},
			.prefetch0 = 386,
			.prefetch1 = 30318,
			.ram = bclr_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1059183437, 4254289814, 1016255394, 2704232375, 2815129313, 2448982085, 3908411243, 3947997670, 1272404362, 1639732324, 2722100893, 2771355018, 3622188103, 2663029971, 1295925256, 14297876, 15818940, 8466, 13834562
			},
			.prefetch0 = 30318,
			.prefetch1 = 52107,
			.ram = bclr_final_ram_9,
			.ram_len = 6,
		},
		.transactions = bclr_transactions_9,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "010 BCLR D3, (d8, A6, Xn) 07b6",
		.initial = {
			.regs = {
				3382869448, 1287039887, 1486055191, 3598877616, 3096363376, 3373606287, 2716908247, 4098687875, 2654802667, 1077487713, 4065937496, 1383141649, 1314332705, 1408973826, 2875293087, 2102366, 12631280, 8728, 13298058
			},
			.prefetch0 = 1974,
			.prefetch1 = 391,
			.ram = bclr_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3382869448, 1287039887, 1486055191, 3598877616, 3096363376, 3373606287, 2716908247, 4098687875, 2654802667, 1077487713, 4065937496, 1383141649, 1314332705, 1408973826, 2875293087, 2102366, 12631280, 8732, 13298062
			},
			.prefetch0 = 44298,
			.prefetch1 = 28101,
			.ram = bclr_final_ram_10,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_10,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "011 BCLR D0, (A6) 0196",
		.initial = {
			.regs = {
				917536558, 2587398988, 343195815, 2300826106, 1942364498, 1953647561, 1785434495, 692531108, 1931120872, 71210710, 672814048, 2343263650, 1779759834, 3347180643, 1363368411, 8627048, 3178128, 8968, 16581004
			},
			.prefetch0 = 406,
			.prefetch1 = 11675,
			.ram = bclr_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				917536558, 2587398988, 343195815, 2300826106, 1942364498, 1953647561, 1785434495, 692531108, 1931120872, 71210710, 672814048, 2343263650, 1779759834, 3347180643, 1363368411, 8627048, 3178128, 8972, 16581006
			},
			.prefetch0 = 11675,
			.prefetch1 = 42128,
			.ram = bclr_final_ram_11,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_11,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "012 BCLR D4, D3 0983",
		.initial = {
			.regs = {
				1469158618, 3941179860, 327952618, 45408826, 1864472565, 2009766682, 3546856002, 1725787430, 30450147, 533722300, 3696470959, 2661082608, 3204729458, 1120947524, 18085574, 13625590, 9722940, 34588, 3372136
			},
			.prefetch0 = 2435,
			.prefetch1 = 36170,
			.ram = bclr_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1469158618, 3941179860, 327952618, 43311674, 1864472565, 2009766682, 3546856002, 1725787430, 30450147, 533722300, 3696470959, 2661082608, 3204729458, 1120947524, 18085574, 13625590, 9722940, 34584, 3372138
			},
			.prefetch0 = 36170,
			.prefetch1 = 41878,
			.ram = bclr_final_ram_12,
			.ram_len = 6,
		},
		.transactions = bclr_transactions_12,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "013 BCLR D6, (d8, A7, Xn) 0db7",
		.initial = {
			.regs = {
				229966432, 3698297304, 2620035982, 920995069, 1742837742, 1213042399, 2743083237, 4196443669, 1334761173, 2243898457, 3735093234, 601949082, 1497632028, 990369800, 3900511053, 11930948, 3742512, 9479, 3974330
			},
			.prefetch0 = 3511,
			.prefetch1 = 10961,
			.ram = bclr_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				229966432, 3698297304, 2620035982, 920995069, 1742837742, 1213042399, 2743083237, 4196443669, 1334761173, 2243898457, 3735093234, 601949082, 1497632028, 990369800, 3900511053, 11930948, 3742512, 9475, 3974334
			},
			.prefetch0 = 42960,
			.prefetch1 = 27719,
			.ram = bclr_final_ram_13,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 BCLR D3, (A0)+ 0798",
		.initial = {
			.regs = {
				1436106992, 1693391910, 2522883459, 2575564837, 2641635937, 1443304446, 3947789275, 4278125672, 417221526, 900659747, 739171661, 1503395112, 755324428, 1931777256, 2576415040, 13074856, 15001304, 8209, 12038098
			},
			.prefetch0 = 1944,
			.prefetch1 = 24890,
			.ram = bclr_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1436106992, 1693391910, 2522883459, 2575564837, 2641635937, 1443304446, 3947789275, 4278125672, 417221527, 900659747, 739171661, 1503395112, 755324428, 1931777256, 2576415040, 13074856, 15001304, 8213, 12038100
			},
			.prefetch0 = 24890,
			.prefetch1 = 3932,
			.ram = bclr_final_ram_14,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 BCLR D1, (A1)+ 0399",
		.initial = {
			.regs = {
				4128080325, 3508125719, 3736764573, 529192863, 994088407, 3716184946, 2565766865, 1190906274, 4235421450, 393130471, 3750083989, 1618119494, 1475416268, 4269466038, 2132098214, 2602898, 7995542, 41479, 5101624
			},
			.prefetch0 = 921,
			.prefetch1 = 59807,
			.ram = bclr_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4128080325, 3508125719, 3736764573, 529192863, 994088407, 3716184946, 2565766865, 1190906274, 4235421450, 393130472, 3750083989, 1618119494, 1475416268, 4269466038, 2132098214, 2602898, 7995542, 41475, 5101626
			},
			.prefetch0 = 59807,
			.prefetch1 = 64859,
			.ram = bclr_final_ram_15,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_15,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "016 BCLR D6, -(A6) 0da6",
		.initial = {
			.regs = {
				769840819, 3981477163, 1261968029, 958880130, 2788736905, 3555029183, 1821910235, 490432286, 1213261793, 2902438747, 1513292002, 844056363, 245149113, 2307170544, 627783303, 6862754, 266444, 8963, 7057058
			},
			.prefetch0 = 3494,
			.prefetch1 = 15920,
			.ram = bclr_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				769840819, 3981477163, 1261968029, 958880130, 2788736905, 3555029183, 1821910235, 490432286, 1213261793, 2902438747, 1513292002, 844056363, 245149113, 2307170544, 627783302, 6862754, 266444, 8963, 7057060
			},
			.prefetch0 = 15920,
			.prefetch1 = 60597,
			.ram = bclr_final_ram_16,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_16,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "017 BCLR D5, -(A1) 0ba1",
		.initial = {
			.regs = {
				1911025747, 1923268857, 1863660949, 1608686464, 2552414200, 2024346041, 1047072441, 552875279, 444795463, 1205332700, 565755669, 2330205952, 26795550, 1089000400, 850878580, 2792462, 15024874, 42264, 1270722
			},
			.prefetch0 = 2977,
			.prefetch1 = 52103,
			.ram = bclr_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1911025747, 1923268857, 1863660949, 1608686464, 2552414200, 2024346041, 1047072441, 552875279, 444795463, 1205332699, 565755669, 2330205952, 26795550, 1089000400, 850878580, 2792462, 15024874, 42268, 1270724
			},
			.prefetch0 = 52103,
			.prefetch1 = 56888,
			.ram = bclr_final_ram_17,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_17,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "018 BCLR D7, D6 0f86",
		.initial = {
			.regs = {
				2501891344, 4124002957, 1764805768, 1958231971, 3841181840, 3721423138, 2429753563, 949133165, 3789330115, 4032527240, 3941536698, 2118652079, 2008404018, 1262551176, 2737561958, 6272114, 2654640, 34059, 2925872
			},
			.prefetch0 = 3974,
			.prefetch1 = 17861,
			.ram = bclr_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2501891344, 4124002957, 1764805768, 1958231971, 3841181840, 3721423138, 2429753563, 949133165, 3789330115, 4032527240, 3941536698, 2118652079, 2008404018, 1262551176, 2737561958, 6272114, 2654640, 34063, 2925874
			},
			.prefetch0 = 17861,
			.prefetch1 = 20441,
			.ram = bclr_final_ram_18,
			.ram_len = 6,
		},
		.transactions = bclr_transactions_18,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "019 BCLR D4, (A7) 0997",
		.initial = {
			.regs = {
				1918467500, 2407237798, 3549722297, 117224713, 2277972236, 1199704273, 1717474874, 3150099031, 1550633359, 3638235801, 418306147, 2502275735, 380443207, 1405052477, 185836940, 12647320, 11879466, 9500, 11398300
			},
			.prefetch0 = 2455,
			.prefetch1 = 2600,
			.ram = bclr_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1918467500, 2407237798, 3549722297, 117224713, 2277972236, 1199704273, 1717474874, 3150099031, 1550633359, 3638235801, 418306147, 2502275735, 380443207, 1405052477, 185836940, 12647320, 11879466, 9496, 11398302
			},
			.prefetch0 = 2600,
			.prefetch1 = 52318,
			.ram = bclr_final_ram_19,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_19,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "020 BCLR D6, (d16, A1) 0da9",
		.initial = {
			.regs = {
				4226012262, 3008351897, 1633672041, 2278675738, 2351060606, 3692151150, 3418375898, 20218339, 510901495, 3072984783, 879480449, 1299249175, 3566442449, 3181913491, 3177677581, 3118478, 13105360, 8210, 11222650
			},
			.prefetch0 = 3497,
			.prefetch1 = 64869,
			.ram = bclr_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4226012262, 3008351897, 1633672041, 2278675738, 2351060606, 3692151150, 3418375898, 20218339, 510901495, 3072984783, 879480449, 1299249175, 3566442449, 3181913491, 3177677581, 3118478, 13105360, 8210, 11222654
			},
			.prefetch0 = 51470,
			.prefetch1 = 23890,
			.ram = bclr_final_ram_20,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_20,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "021 BCLR D3, D6 0786",
		.initial = {
			.regs = {
				1867554816, 2396350594, 535703356, 977697265, 741084349, 3339918882, 1614423688, 1791512870, 4288410583, 3015843999, 4292699634, 1065249327, 1972343949, 2483612511, 1705205922, 609108, 12153472, 1560, 11989530
			},
			.prefetch0 = 1926,
			.prefetch1 = 61376,
			.ram = bclr_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1867554816, 2396350594, 535703356, 977697265, 741084349, 3339918882, 1614292616, 1791512870, 4288410583, 3015843999, 4292699634, 1065249327, 1972343949, 2483612511, 1705205922, 609108, 12153472, 1560, 11989532
			},
			.prefetch0 = 61376,
			.prefetch1 = 19821,
			.ram = bclr_final_ram_21,
			.ram_len = 6,
		},
		.transactions = bclr_transactions_21,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "022 BCLR D1, (d16, A3) 03ab",
		.initial = {
			.regs = {
				2861554745, 2877640874, 1440435984, 120563547, 987632355, 3101018942, 574647266, 4068658601, 3648386973, 112949047, 3967490254, 2702534179, 3704101106, 2249261641, 1472693491, 10544612, 191200, 42523, 8197114
			},
			.prefetch0 = 939,
			.prefetch1 = 16242,
			.ram = bclr_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2861554745, 2877640874, 1440435984, 120563547, 987632355, 3101018942, 574647266, 4068658601, 3648386973, 112949047, 3967490254, 2702534179, 3704101106, 2249261641, 1472693491, 10544612, 191200, 42523, 8197118
			},
			.prefetch0 = 11724,
			.prefetch1 = 10259,
			.ram = bclr_final_ram_22,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_22,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "023 BCLR D5, -(A2) 0ba2",
		.initial = {
			.regs = {
				561344124, 3802794889, 174555713, 3557604573, 3652545012, 3918972886, 1249613912, 3278336470, 1517675669, 3957020490, 4123600497, 4195564002, 360602778, 2493209167, 2640401203, 13222688, 2124620, 1544, 10603872
			},
			.prefetch0 = 2978,
			.prefetch1 = 4705,
			.ram = bclr_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				561344124, 3802794889, 174555713, 3557604573, 3652545012, 3918972886, 1249613912, 3278336470, 1517675669, 3957020490, 4123600496, 4195564002, 360602778, 2493209167, 2640401203, 13222688, 2124620, 1548, 10603874
			},
			.prefetch0 = 4705,
			.prefetch1 = 1771,
			.ram = bclr_final_ram_23,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_23,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "024 BCLR D5, (A6) 0b96",
		.initial = {
			.regs = {
				3201718506, 1494202200, 3179716957, 2642589022, 2638214178, 4216613150, 1319332820, 1039292500, 1682075985, 172102187, 374832922, 1357971147, 3967708349, 2132804468, 1639006723, 16588494, 15924688, 41224, 13556632
			},
			.prefetch0 = 2966,
			.prefetch1 = 21069,
			.ram = bclr_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3201718506, 1494202200, 3179716957, 2642589022, 2638214178, 4216613150, 1319332820, 1039292500, 1682075985, 172102187, 374832922, 1357971147, 3967708349, 2132804468, 1639006723, 16588494, 15924688, 41224, 13556634
			},
			.prefetch0 = 21069,
			.prefetch1 = 37186,
			.ram = bclr_final_ram_24,
			.ram_len = 8,
		},
		.transactions = bclr_transactions_24,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "025 BCLR D5, (d16, A2) 0baa",
		.initial = {
			.regs = {
				138825943, 3159997025, 417674023, 4204935738, 1084166072, 3565185226, 645644131, 1064543062, 3642052333, 3233192524, 1660067885, 372550015, 1975170618, 332192121, 3446778511, 14535424, 8337416, 23, 2700916
			},
			.prefetch0 = 2986,
			.prefetch1 = 17935,
			.ram = bclr_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				138825943, 3159997025, 417674023, 4204935738, 1084166072, 3565185226, 645644131, 1064543062, 3642052333, 3233192524, 1660067885, 372550015, 1975170618, 332192121, 3446778511, 14535424, 8337416, 19, 2700920
			},
			.prefetch0 = 44681,
			.prefetch1 = 51332,
			.ram = bclr_final_ram_25,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_25,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "026 BCLR #, (A3) 0893",
		.initial = {
			.regs = {
				1419195047, 3952252120, 2278256130, 317279208, 645008075, 1602362400, 3503271336, 4128409299, 3247968928, 3741421992, 7133499, 2815656104, 4285437887, 3282375202, 2939195209, 15527888, 4893362, 8733, 10685744
			},
			.prefetch0 = 2195,
			.prefetch1 = 27223,
			.ram = bclr_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1419195047, 3952252120, 2278256130, 317279208, 645008075, 1602362400, 3503271336, 4128409299, 3247968928, 3741421992, 7133499, 2815656104, 4285437887, 3282375202, 2939195209, 15527888, 4893362, 8733, 10685748
			},
			.prefetch0 = 1686,
			.prefetch1 = 13469,
			.ram = bclr_final_ram_26,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_26,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "027 BCLR D6, (d8, A3, Xn) 0db3",
		.initial = {
			.regs = {
				2710540607, 3756840498, 181239180, 3550667721, 3330660404, 1343843410, 73818509, 989780720, 1830155415, 1389213563, 222107578, 3866127339, 3382810328, 880603913, 3940803906, 8127142, 4256510, 33049, 15769110
			},
			.prefetch0 = 3507,
			.prefetch1 = 40645,
			.ram = bclr_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2710540607, 3756840498, 181239180, 3550667721, 3330660404, 1343843410, 73818509, 989780720, 1830155415, 1389213563, 222107578, 3866127339, 3382810328, 880603913, 3940803906, 8127142, 4256510, 33053, 15769114
			},
			.prefetch0 = 56895,
			.prefetch1 = 40034,
			.ram = bclr_final_ram_27,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_27,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "028 BCLR #, (d16, A3) 08ab",
		.initial = {
			.regs = {
				1527167211, 1584601281, 491765722, 2846051205, 2434329206, 123551345, 912900852, 2064943705, 3660192847, 1647041154, 3807223499, 3416486588, 557991895, 3477327160, 2949312572, 1598756, 12090780, 34579, 921974
			},
			.prefetch0 = 2219,
			.prefetch1 = 31194,
			.ram = bclr_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1527167211, 1584601281, 491765722, 2846051205, 2434329206, 123551345, 912900852, 2064943705, 3660192847, 1647041154, 3807223499, 3416486588, 557991895, 3477327160, 2949312572, 1598756, 12090780, 34579, 921980
			},
			.prefetch0 = 31190,
			.prefetch1 = 45605,
			.ram = bclr_final_ram_28,
			.ram_len = 12,
		},
		.transactions = bclr_transactions_28,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "029 BCLR D3, (d16, A5) 07ad",
		.initial = {
			.regs = {
				362191963, 3697122484, 3311330362, 2547566467, 1420911650, 2416238451, 2306508651, 3112520083, 2862770559, 2779088109, 3544162376, 3198333760, 3946585815, 2960014917, 782677601, 10625176, 1808740, 1795, 11730
			},
			.prefetch0 = 1965,
			.prefetch1 = 7769,
			.ram = bclr_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				362191963, 3697122484, 3311330362, 2547566467, 1420911650, 2416238451, 2306508651, 3112520083, 2862770559, 2779088109, 3544162376, 3198333760, 3946585815, 2960014917, 782677601, 10625176, 1808740, 1795, 11734
			},
			.prefetch0 = 28673,
			.prefetch1 = 46968,
			.ram = bclr_final_ram_29,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 BCLR #, -(A6) 08a6",
		.initial = {
			.regs = {
				3225918055, 2713668061, 3455125992, 3497720918, 1002957183, 581106434, 3293268994, 940346066, 2510765087, 1798002429, 3273610579, 119098703, 3741959729, 1871672375, 1343430644, 2365890, 3843826, 41242, 13649344
			},
			.prefetch0 = 2214,
			.prefetch1 = 64242,
			.ram = bclr_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3225918055, 2713668061, 3455125992, 3497720918, 1002957183, 581106434, 3293268994, 940346066, 2510765087, 1798002429, 3273610579, 119098703, 3741959729, 1871672375, 1343430643, 2365890, 3843826, 41246, 13649348
			},
			.prefetch0 = 29892,
			.prefetch1 = 31918,
			.ram = bclr_final_ram_30,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_30,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "031 BCLR D7, (d8, A0, Xn) 0fb0",
		.initial = {
			.regs = {
				2197930374, 3053295211, 3593658529, 3790418384, 3388566017, 3019867296, 1168275321, 3279511632, 3846712497, 2149811412, 616010164, 2541969211, 2808360962, 193406744, 2641469518, 14547892, 16197968, 8204, 10562618
			},
			.prefetch0 = 4016,
			.prefetch1 = 64958,
			.ram = bclr_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2197930374, 3053295211, 3593658529, 3790418384, 3388566017, 3019867296, 1168275321, 3279511632, 3846712497, 2149811412, 616010164, 2541969211, 2808360962, 193406744, 2641469518, 14547892, 16197968, 8200, 10562622
			},
			.prefetch0 = 8085,
			.prefetch1 = 18245,
			.ram = bclr_final_ram_31,
			.ram_len = 10,
		},
		.transactions = bclr_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_BCLR_H */