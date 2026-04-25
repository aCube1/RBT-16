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

const uint32_t BCLR_TEST_COUNT = 16;
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
};

#endif /* RBT_BCLR_H */