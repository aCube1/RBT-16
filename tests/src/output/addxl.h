#ifndef RBT_ADDXL_H
#define RBT_ADDXL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addxl_initial_ram_0[] = {
		{ .addr = 0x3b43ca, .byte = 0xd7 },
		{ .addr = 0x3b43cb, .byte = 0x87 },
		{ .addr = 0x3b43cc, .byte = 0x54 },
		{ .addr = 0x3b43cd, .byte = 0x1b },
		{ .addr = 0x3b43ce, .byte = 0x93 },
		{ .addr = 0x3b43cf, .byte = 0x94 }
};

static const SST_RamByte addxl_final_ram_0[] = {
		{ .addr = 0x3b43ca, .byte = 0xd7 },
		{ .addr = 0x3b43cb, .byte = 0x87 },
		{ .addr = 0x3b43cc, .byte = 0x54 },
		{ .addr = 0x3b43cd, .byte = 0x1b },
		{ .addr = 0x3b43ce, .byte = 0x93 },
		{ .addr = 0x3b43cf, .byte = 0x94 }
};

static const SST_Transaction addxl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3883982, .data = 37780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addxl_initial_ram_1[] = {
		{ .addr = 0x68eebe, .byte = 0xd7 },
		{ .addr = 0x68eebf, .byte = 0x8a },
		{ .addr = 0x68eec0, .byte = 0x7c },
		{ .addr = 0x68eec1, .byte = 0x91 },
		{ .addr = 0x6b5f6e, .byte = 0x85 },
		{ .addr = 0x6b5f6f, .byte = 0x79 },
		{ .addr = 0x6b5f6c, .byte = 0xf9 },
		{ .addr = 0x6b5f6d, .byte = 0xe3 },
		{ .addr = 0xd6b94a, .byte = 0xa7 },
		{ .addr = 0xd6b94b, .byte = 0x45 },
		{ .addr = 0xd6b948, .byte = 0x97 },
		{ .addr = 0xd6b949, .byte = 0xd9 },
		{ .addr = 0x68eec2, .byte = 0xfd },
		{ .addr = 0x68eec3, .byte = 0xea }
};

static const SST_RamByte addxl_final_ram_1[] = {
		{ .addr = 0x68eebe, .byte = 0xd7 },
		{ .addr = 0x68eebf, .byte = 0x8a },
		{ .addr = 0x68eec0, .byte = 0x7c },
		{ .addr = 0x68eec1, .byte = 0x91 },
		{ .addr = 0x6b5f6e, .byte = 0x85 },
		{ .addr = 0x6b5f6f, .byte = 0x79 },
		{ .addr = 0x6b5f6c, .byte = 0xf9 },
		{ .addr = 0x6b5f6d, .byte = 0xe3 },
		{ .addr = 0xd6b94a, .byte = 0x2c },
		{ .addr = 0xd6b94b, .byte = 0xbf },
		{ .addr = 0xd6b948, .byte = 0x91 },
		{ .addr = 0xd6b949, .byte = 0xbd },
		{ .addr = 0x68eec2, .byte = 0xfd },
		{ .addr = 0x68eec3, .byte = 0xea }
};

static const SST_Transaction addxl_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7036782, .data = 34169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7036780, .data = 63971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14072138, .data = 42821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14072136, .data = 38873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14072138, .data = 11455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6876866, .data = 65002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14072136, .data = 37309, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_2[] = {
		{ .addr = 0xc3c41a, .byte = 0xdf },
		{ .addr = 0xc3c41b, .byte = 0x8d },
		{ .addr = 0xc3c41c, .byte = 0x68 },
		{ .addr = 0xc3c41d, .byte = 0x01 },
		{ .addr = 0x28f210, .byte = 0xd1 },
		{ .addr = 0x28f211, .byte = 0x90 },
		{ .addr = 0x28f20e, .byte = 0xe1 },
		{ .addr = 0x28f20f, .byte = 0xa9 },
		{ .addr = 0xde5b0a, .byte = 0xb5 },
		{ .addr = 0xde5b0b, .byte = 0xde },
		{ .addr = 0xde5b08, .byte = 0x26 },
		{ .addr = 0xde5b09, .byte = 0xf6 },
		{ .addr = 0xc3c41e, .byte = 0xa3 },
		{ .addr = 0xc3c41f, .byte = 0x1e }
};

static const SST_RamByte addxl_final_ram_2[] = {
		{ .addr = 0xc3c41a, .byte = 0xdf },
		{ .addr = 0xc3c41b, .byte = 0x8d },
		{ .addr = 0xc3c41c, .byte = 0x68 },
		{ .addr = 0xc3c41d, .byte = 0x01 },
		{ .addr = 0x28f210, .byte = 0xd1 },
		{ .addr = 0x28f211, .byte = 0x90 },
		{ .addr = 0x28f20e, .byte = 0xe1 },
		{ .addr = 0x28f20f, .byte = 0xa9 },
		{ .addr = 0xde5b0a, .byte = 0x87 },
		{ .addr = 0xde5b0b, .byte = 0x6e },
		{ .addr = 0xde5b08, .byte = 0x08 },
		{ .addr = 0xde5b09, .byte = 0xa0 },
		{ .addr = 0xc3c41e, .byte = 0xa3 },
		{ .addr = 0xc3c41f, .byte = 0x1e }
};

static const SST_Transaction addxl_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2683408, .data = 53648, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2683406, .data = 57769, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14572298, .data = 46558, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14572296, .data = 9974, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14572298, .data = 34670, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12829726, .data = 41758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14572296, .data = 2208, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_3[] = {
		{ .addr = 0xd979b4, .byte = 0xd1 },
		{ .addr = 0xd979b5, .byte = 0x8d },
		{ .addr = 0xd979b6, .byte = 0x65 },
		{ .addr = 0xd979b7, .byte = 0xa1 },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x36 },
		{ .addr = 0x00000e, .byte = 0x49 },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x3649d2, .byte = 0x84 },
		{ .addr = 0x3649d3, .byte = 0xd8 },
		{ .addr = 0x3649d4, .byte = 0x79 },
		{ .addr = 0x3649d5, .byte = 0x82 }
};

static const SST_RamByte addxl_final_ram_3[] = {
		{ .addr = 0xd979b4, .byte = 0xd1 },
		{ .addr = 0xd979b5, .byte = 0x8d },
		{ .addr = 0xd979b6, .byte = 0x65 },
		{ .addr = 0xd979b7, .byte = 0xa1 },
		{ .addr = 0xba2d6e, .byte = 0x79 },
		{ .addr = 0xba2d6f, .byte = 0xb8 },
		{ .addr = 0xba2d6a, .byte = 0x26 },
		{ .addr = 0xba2d6b, .byte = 0x08 },
		{ .addr = 0xba2d6c, .byte = 0x00 },
		{ .addr = 0xba2d6d, .byte = 0xd9 },
		{ .addr = 0xba2d68, .byte = 0xd1 },
		{ .addr = 0xba2d69, .byte = 0x8d },
		{ .addr = 0xba2d66, .byte = 0xa4 },
		{ .addr = 0xba2d67, .byte = 0x63 },
		{ .addr = 0xba2d62, .byte = 0xd1 },
		{ .addr = 0xba2d63, .byte = 0x95 },
		{ .addr = 0xba2d64, .byte = 0x80 },
		{ .addr = 0xba2d65, .byte = 0xe4 },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x36 },
		{ .addr = 0x00000e, .byte = 0x49 },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x3649d2, .byte = 0x84 },
		{ .addr = 0x3649d3, .byte = 0xd8 },
		{ .addr = 0x3649d4, .byte = 0x79 },
		{ .addr = 0x3649d5, .byte = 0x82 }
};

static const SST_Transaction addxl_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14984290, .data = 38249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12201326, .data = 31160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12201322, .data = 9736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12201324, .data = 217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12201320, .data = 53645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12201318, .data = 42083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12201314, .data = 53653, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12201316, .data = 32996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3557842, .data = 34008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3557844, .data = 31106, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_4[] = {
		{ .addr = 0xf3530c, .byte = 0xd3 },
		{ .addr = 0xf3530d, .byte = 0x88 },
		{ .addr = 0xf3530e, .byte = 0x30 },
		{ .addr = 0xf3530f, .byte = 0xb9 },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x1a },
		{ .addr = 0x00000f, .byte = 0xce },
		{ .addr = 0x3c1ace, .byte = 0x47 },
		{ .addr = 0x3c1acf, .byte = 0xb3 },
		{ .addr = 0x3c1ad0, .byte = 0x15 },
		{ .addr = 0x3c1ad1, .byte = 0xd3 }
};

static const SST_RamByte addxl_final_ram_4[] = {
		{ .addr = 0xf3530c, .byte = 0xd3 },
		{ .addr = 0xf3530d, .byte = 0x88 },
		{ .addr = 0xf3530e, .byte = 0x30 },
		{ .addr = 0xf3530f, .byte = 0xb9 },
		{ .addr = 0xa59278, .byte = 0x53 },
		{ .addr = 0xa59279, .byte = 0x10 },
		{ .addr = 0xa59274, .byte = 0x07 },
		{ .addr = 0xa59275, .byte = 0x10 },
		{ .addr = 0xa59276, .byte = 0x00 },
		{ .addr = 0xa59277, .byte = 0xf3 },
		{ .addr = 0xa59272, .byte = 0xd3 },
		{ .addr = 0xa59273, .byte = 0x88 },
		{ .addr = 0xa59270, .byte = 0x61 },
		{ .addr = 0xa59271, .byte = 0x4f },
		{ .addr = 0xa5926c, .byte = 0xd3 },
		{ .addr = 0xa5926d, .byte = 0x91 },
		{ .addr = 0xa5926e, .byte = 0x44 },
		{ .addr = 0xa5926f, .byte = 0x8d },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x1a },
		{ .addr = 0x00000f, .byte = 0xce },
		{ .addr = 0x3c1ace, .byte = 0x47 },
		{ .addr = 0x3c1acf, .byte = 0xb3 },
		{ .addr = 0x3c1ad0, .byte = 0x15 },
		{ .addr = 0x3c1ad1, .byte = 0xd3 }
};

static const SST_Transaction addxl_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9265486, .data = 20705, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10850936, .data = 21264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10850932, .data = 1808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10850934, .data = 243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10850930, .data = 54152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10850928, .data = 24911, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10850924, .data = 54161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10850926, .data = 17549, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3939022, .data = 18355, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3939024, .data = 5587, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_5[] = {
		{ .addr = 0xb6ad90, .byte = 0xdb },
		{ .addr = 0xb6ad91, .byte = 0x8a },
		{ .addr = 0xb6ad92, .byte = 0xac },
		{ .addr = 0xb6ad93, .byte = 0xfb },
		{ .addr = 0x513878, .byte = 0xdd },
		{ .addr = 0x513879, .byte = 0x6c },
		{ .addr = 0x513876, .byte = 0x5e },
		{ .addr = 0x513877, .byte = 0x48 },
		{ .addr = 0xbc3124, .byte = 0xe8 },
		{ .addr = 0xbc3125, .byte = 0x61 },
		{ .addr = 0xbc3122, .byte = 0xff },
		{ .addr = 0xbc3123, .byte = 0x08 },
		{ .addr = 0xb6ad94, .byte = 0xa0 },
		{ .addr = 0xb6ad95, .byte = 0x35 }
};

static const SST_RamByte addxl_final_ram_5[] = {
		{ .addr = 0xb6ad90, .byte = 0xdb },
		{ .addr = 0xb6ad91, .byte = 0x8a },
		{ .addr = 0xb6ad92, .byte = 0xac },
		{ .addr = 0xb6ad93, .byte = 0xfb },
		{ .addr = 0x513878, .byte = 0xdd },
		{ .addr = 0x513879, .byte = 0x6c },
		{ .addr = 0x513876, .byte = 0x5e },
		{ .addr = 0x513877, .byte = 0x48 },
		{ .addr = 0xbc3124, .byte = 0xc5 },
		{ .addr = 0xbc3125, .byte = 0xce },
		{ .addr = 0xbc3122, .byte = 0x5d },
		{ .addr = 0xbc3123, .byte = 0x51 },
		{ .addr = 0xb6ad94, .byte = 0xa0 },
		{ .addr = 0xb6ad95, .byte = 0x35 }
};

static const SST_Transaction addxl_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5322872, .data = 56684, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5322870, .data = 24136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333348, .data = 59489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333346, .data = 65288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333348, .data = 50638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11971988, .data = 41013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12333346, .data = 23889, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_6[] = {
		{ .addr = 0xb79050, .byte = 0xd7 },
		{ .addr = 0xb79051, .byte = 0x8b },
		{ .addr = 0xb79052, .byte = 0x49 },
		{ .addr = 0xb79053, .byte = 0x27 },
		{ .addr = 0x00000c, .byte = 0xbf },
		{ .addr = 0x00000d, .byte = 0x62 },
		{ .addr = 0x00000e, .byte = 0xf0 },
		{ .addr = 0x00000f, .byte = 0xd8 },
		{ .addr = 0x62f0d8, .byte = 0x2a },
		{ .addr = 0x62f0d9, .byte = 0x98 },
		{ .addr = 0x62f0da, .byte = 0xd6 },
		{ .addr = 0x62f0db, .byte = 0x9e }
};

static const SST_RamByte addxl_final_ram_6[] = {
		{ .addr = 0xb79050, .byte = 0xd7 },
		{ .addr = 0xb79051, .byte = 0x8b },
		{ .addr = 0xb79052, .byte = 0x49 },
		{ .addr = 0xb79053, .byte = 0x27 },
		{ .addr = 0x49950a, .byte = 0x90 },
		{ .addr = 0x49950b, .byte = 0x54 },
		{ .addr = 0x499506, .byte = 0x84 },
		{ .addr = 0x499507, .byte = 0x0d },
		{ .addr = 0x499508, .byte = 0x00 },
		{ .addr = 0x499509, .byte = 0xb7 },
		{ .addr = 0x499504, .byte = 0xd7 },
		{ .addr = 0x499505, .byte = 0x8b },
		{ .addr = 0x499502, .byte = 0xc0 },
		{ .addr = 0x499503, .byte = 0xa5 },
		{ .addr = 0x4994fe, .byte = 0xd7 },
		{ .addr = 0x4994ff, .byte = 0x91 },
		{ .addr = 0x499500, .byte = 0x5e },
		{ .addr = 0x499501, .byte = 0xc0 },
		{ .addr = 0x00000c, .byte = 0xbf },
		{ .addr = 0x00000d, .byte = 0x62 },
		{ .addr = 0x00000e, .byte = 0xf0 },
		{ .addr = 0x00000f, .byte = 0xd8 },
		{ .addr = 0x62f0d8, .byte = 0x2a },
		{ .addr = 0x62f0d9, .byte = 0x98 },
		{ .addr = 0x62f0da, .byte = 0xd6 },
		{ .addr = 0x62f0db, .byte = 0x9e }
};

static const SST_Transaction addxl_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12632228, .data = 35752, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4822282, .data = 36948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4822278, .data = 33805, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4822280, .data = 183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4822276, .data = 55179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4822274, .data = 49317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4822270, .data = 55185, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4822272, .data = 24256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 48994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6484184, .data = 10904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6484186, .data = 54942, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_7[] = {
		{ .addr = 0xf32326, .byte = 0xdb },
		{ .addr = 0xf32327, .byte = 0x81 },
		{ .addr = 0xf32328, .byte = 0x86 },
		{ .addr = 0xf32329, .byte = 0xc3 },
		{ .addr = 0xf3232a, .byte = 0xa6 },
		{ .addr = 0xf3232b, .byte = 0xe4 }
};

static const SST_RamByte addxl_final_ram_7[] = {
		{ .addr = 0xf32326, .byte = 0xdb },
		{ .addr = 0xf32327, .byte = 0x81 },
		{ .addr = 0xf32328, .byte = 0x86 },
		{ .addr = 0xf32329, .byte = 0xc3 },
		{ .addr = 0xf3232a, .byte = 0xa6 },
		{ .addr = 0xf3232b, .byte = 0xe4 }
};

static const SST_Transaction addxl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15934250, .data = 42724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addxl_initial_ram_8[] = {
		{ .addr = 0xe89eb2, .byte = 0xdb },
		{ .addr = 0xe89eb3, .byte = 0x86 },
		{ .addr = 0xe89eb4, .byte = 0xa4 },
		{ .addr = 0xe89eb5, .byte = 0xca },
		{ .addr = 0xe89eb6, .byte = 0xc8 },
		{ .addr = 0xe89eb7, .byte = 0xd0 }
};

static const SST_RamByte addxl_final_ram_8[] = {
		{ .addr = 0xe89eb2, .byte = 0xdb },
		{ .addr = 0xe89eb3, .byte = 0x86 },
		{ .addr = 0xe89eb4, .byte = 0xa4 },
		{ .addr = 0xe89eb5, .byte = 0xca },
		{ .addr = 0xe89eb6, .byte = 0xc8 },
		{ .addr = 0xe89eb7, .byte = 0xd0 }
};

static const SST_Transaction addxl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15244982, .data = 51408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addxl_initial_ram_9[] = {
		{ .addr = 0x4874f6, .byte = 0xd9 },
		{ .addr = 0x4874f7, .byte = 0x8c },
		{ .addr = 0x4874f8, .byte = 0xae },
		{ .addr = 0x4874f9, .byte = 0x3e },
		{ .addr = 0x88a686, .byte = 0x6c },
		{ .addr = 0x88a687, .byte = 0x68 },
		{ .addr = 0x88a684, .byte = 0xe3 },
		{ .addr = 0x88a685, .byte = 0x70 },
		{ .addr = 0x88a682, .byte = 0x94 },
		{ .addr = 0x88a683, .byte = 0xa7 },
		{ .addr = 0x88a680, .byte = 0x6d },
		{ .addr = 0x88a681, .byte = 0x65 },
		{ .addr = 0x4874fa, .byte = 0x60 },
		{ .addr = 0x4874fb, .byte = 0x8c }
};

static const SST_RamByte addxl_final_ram_9[] = {
		{ .addr = 0x4874f6, .byte = 0xd9 },
		{ .addr = 0x4874f7, .byte = 0x8c },
		{ .addr = 0x4874f8, .byte = 0xae },
		{ .addr = 0x4874f9, .byte = 0x3e },
		{ .addr = 0x88a686, .byte = 0x6c },
		{ .addr = 0x88a687, .byte = 0x68 },
		{ .addr = 0x88a684, .byte = 0xe3 },
		{ .addr = 0x88a685, .byte = 0x70 },
		{ .addr = 0x88a682, .byte = 0x01 },
		{ .addr = 0x88a683, .byte = 0x10 },
		{ .addr = 0x88a680, .byte = 0x50 },
		{ .addr = 0x88a681, .byte = 0xd6 },
		{ .addr = 0x4874fa, .byte = 0x60 },
		{ .addr = 0x4874fb, .byte = 0x8c }
};

static const SST_Transaction addxl_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8955526, .data = 27752, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8955524, .data = 58224, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8955522, .data = 38055, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8955520, .data = 28005, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8955522, .data = 272, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4748538, .data = 24716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8955520, .data = 20694, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_10[] = {
		{ .addr = 0x84b466, .byte = 0xd1 },
		{ .addr = 0x84b467, .byte = 0x8a },
		{ .addr = 0x84b468, .byte = 0x25 },
		{ .addr = 0x84b469, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0x0a },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0x420a00, .byte = 0x1b },
		{ .addr = 0x420a01, .byte = 0xa8 },
		{ .addr = 0x420a02, .byte = 0x68 },
		{ .addr = 0x420a03, .byte = 0xf6 }
};

static const SST_RamByte addxl_final_ram_10[] = {
		{ .addr = 0x84b466, .byte = 0xd1 },
		{ .addr = 0x84b467, .byte = 0x8a },
		{ .addr = 0x84b468, .byte = 0x25 },
		{ .addr = 0x84b469, .byte = 0xd6 },
		{ .addr = 0x0f58c6, .byte = 0xb4 },
		{ .addr = 0x0f58c7, .byte = 0x6a },
		{ .addr = 0x0f58c2, .byte = 0x02 },
		{ .addr = 0x0f58c3, .byte = 0x14 },
		{ .addr = 0x0f58c4, .byte = 0x00 },
		{ .addr = 0x0f58c5, .byte = 0x84 },
		{ .addr = 0x0f58c0, .byte = 0xd1 },
		{ .addr = 0x0f58c1, .byte = 0x8a },
		{ .addr = 0x0f58be, .byte = 0x87 },
		{ .addr = 0x0f58bf, .byte = 0xfd },
		{ .addr = 0x0f58ba, .byte = 0xd1 },
		{ .addr = 0x0f58bb, .byte = 0x91 },
		{ .addr = 0x0f58bc, .byte = 0xbf },
		{ .addr = 0x0f58bd, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0x0a },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0x420a00, .byte = 0x1b },
		{ .addr = 0x420a01, .byte = 0xa8 },
		{ .addr = 0x420a02, .byte = 0x68 },
		{ .addr = 0x420a03, .byte = 0xf6 }
};

static const SST_Transaction addxl_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9930748, .data = 55110, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1005766, .data = 46186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1005762, .data = 532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1005764, .data = 132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1005760, .data = 53642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1005758, .data = 34813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1005754, .data = 53649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1005756, .data = 49047, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 2560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4327936, .data = 7080, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4327938, .data = 26870, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_11[] = {
		{ .addr = 0x10bd58, .byte = 0xd1 },
		{ .addr = 0x10bd59, .byte = 0x88 },
		{ .addr = 0x10bd5a, .byte = 0xa4 },
		{ .addr = 0x10bd5b, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0xe3 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0xdec282, .byte = 0xad },
		{ .addr = 0xdec283, .byte = 0xad },
		{ .addr = 0xdec284, .byte = 0x15 },
		{ .addr = 0xdec285, .byte = 0xf9 }
};

static const SST_RamByte addxl_final_ram_11[] = {
		{ .addr = 0x10bd58, .byte = 0xd1 },
		{ .addr = 0x10bd59, .byte = 0x88 },
		{ .addr = 0x10bd5a, .byte = 0xa4 },
		{ .addr = 0x10bd5b, .byte = 0x62 },
		{ .addr = 0x719736, .byte = 0xbd },
		{ .addr = 0x719737, .byte = 0x5c },
		{ .addr = 0x719732, .byte = 0xa5 },
		{ .addr = 0x719733, .byte = 0x17 },
		{ .addr = 0x719734, .byte = 0x00 },
		{ .addr = 0x719735, .byte = 0x10 },
		{ .addr = 0x719730, .byte = 0xd1 },
		{ .addr = 0x719731, .byte = 0x88 },
		{ .addr = 0x71972e, .byte = 0x29 },
		{ .addr = 0x71972f, .byte = 0xbf },
		{ .addr = 0x71972a, .byte = 0xd1 },
		{ .addr = 0x71972b, .byte = 0x95 },
		{ .addr = 0x71972c, .byte = 0xb8 },
		{ .addr = 0x71972d, .byte = 0xe9 },
		{ .addr = 0x00000c, .byte = 0xe3 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0xdec282, .byte = 0xad },
		{ .addr = 0xdec283, .byte = 0xad },
		{ .addr = 0xdec284, .byte = 0x15 },
		{ .addr = 0xdec285, .byte = 0xf9 }
};

static const SST_Transaction addxl_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15280574, .data = 6191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7444278, .data = 48476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7444274, .data = 42263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7444276, .data = 16, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7444272, .data = 53640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7444270, .data = 10687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7444266, .data = 53653, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7444268, .data = 47337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14598786, .data = 44461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14598788, .data = 5625, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_12[] = {
		{ .addr = 0xd2dbdc, .byte = 0xdb },
		{ .addr = 0xd2dbdd, .byte = 0x8b },
		{ .addr = 0xd2dbde, .byte = 0x50 },
		{ .addr = 0xd2dbdf, .byte = 0x2c },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x17 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x761748, .byte = 0xc2 },
		{ .addr = 0x761749, .byte = 0x2a },
		{ .addr = 0x76174a, .byte = 0x9f },
		{ .addr = 0x76174b, .byte = 0x24 }
};

static const SST_RamByte addxl_final_ram_12[] = {
		{ .addr = 0xd2dbdc, .byte = 0xdb },
		{ .addr = 0xd2dbdd, .byte = 0x8b },
		{ .addr = 0xd2dbde, .byte = 0x50 },
		{ .addr = 0xd2dbdf, .byte = 0x2c },
		{ .addr = 0x7e9214, .byte = 0xdb },
		{ .addr = 0x7e9215, .byte = 0xe0 },
		{ .addr = 0x7e9210, .byte = 0x04 },
		{ .addr = 0x7e9211, .byte = 0x10 },
		{ .addr = 0x7e9212, .byte = 0x00 },
		{ .addr = 0x7e9213, .byte = 0xd2 },
		{ .addr = 0x7e920e, .byte = 0xdb },
		{ .addr = 0x7e920f, .byte = 0x8b },
		{ .addr = 0x7e920c, .byte = 0xd4 },
		{ .addr = 0x7e920d, .byte = 0x93 },
		{ .addr = 0x7e9208, .byte = 0xdb },
		{ .addr = 0x7e9209, .byte = 0x91 },
		{ .addr = 0x7e920a, .byte = 0x46 },
		{ .addr = 0x7e920b, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x17 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x761748, .byte = 0xc2 },
		{ .addr = 0x761749, .byte = 0x2a },
		{ .addr = 0x76174a, .byte = 0x9f },
		{ .addr = 0x76174b, .byte = 0x24 }
};

static const SST_Transaction addxl_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3200146, .data = 33285, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8294932, .data = 56288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8294928, .data = 1040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8294930, .data = 210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8294926, .data = 56203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8294924, .data = 54419, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8294920, .data = 56209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8294922, .data = 17968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 5960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7739208, .data = 49706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7739210, .data = 40740, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_13[] = {
		{ .addr = 0x0de2d8, .byte = 0xdf },
		{ .addr = 0x0de2d9, .byte = 0x8e },
		{ .addr = 0x0de2da, .byte = 0x8c },
		{ .addr = 0x0de2db, .byte = 0xcc },
		{ .addr = 0x06c5ee, .byte = 0x2e },
		{ .addr = 0x06c5ef, .byte = 0xd4 },
		{ .addr = 0x06c5ec, .byte = 0xf7 },
		{ .addr = 0x06c5ed, .byte = 0x10 },
		{ .addr = 0x00024c, .byte = 0x30 },
		{ .addr = 0x00024d, .byte = 0x60 },
		{ .addr = 0x00024a, .byte = 0xe4 },
		{ .addr = 0x00024b, .byte = 0xb3 },
		{ .addr = 0x0de2dc, .byte = 0x05 },
		{ .addr = 0x0de2dd, .byte = 0x55 }
};

static const SST_RamByte addxl_final_ram_13[] = {
		{ .addr = 0x0de2d8, .byte = 0xdf },
		{ .addr = 0x0de2d9, .byte = 0x8e },
		{ .addr = 0x0de2da, .byte = 0x8c },
		{ .addr = 0x0de2db, .byte = 0xcc },
		{ .addr = 0x06c5ee, .byte = 0x2e },
		{ .addr = 0x06c5ef, .byte = 0xd4 },
		{ .addr = 0x06c5ec, .byte = 0xf7 },
		{ .addr = 0x06c5ed, .byte = 0x10 },
		{ .addr = 0x00024c, .byte = 0x5f },
		{ .addr = 0x00024d, .byte = 0x35 },
		{ .addr = 0x00024a, .byte = 0xdb },
		{ .addr = 0x00024b, .byte = 0xc3 },
		{ .addr = 0x0de2dc, .byte = 0x05 },
		{ .addr = 0x0de2dd, .byte = 0x55 }
};

static const SST_Transaction addxl_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 443886, .data = 11988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 443884, .data = 63248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 588, .data = 12384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 586, .data = 58547, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 588, .data = 24373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 910044, .data = 1365, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 586, .data = 56259, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addxl_initial_ram_14[] = {
		{ .addr = 0x40553e, .byte = 0xdf },
		{ .addr = 0x40553f, .byte = 0x80 },
		{ .addr = 0x405540, .byte = 0xcf },
		{ .addr = 0x405541, .byte = 0xb5 },
		{ .addr = 0x405542, .byte = 0x46 },
		{ .addr = 0x405543, .byte = 0x3e }
};

static const SST_RamByte addxl_final_ram_14[] = {
		{ .addr = 0x40553e, .byte = 0xdf },
		{ .addr = 0x40553f, .byte = 0x80 },
		{ .addr = 0x405540, .byte = 0xcf },
		{ .addr = 0x405541, .byte = 0xb5 },
		{ .addr = 0x405542, .byte = 0x46 },
		{ .addr = 0x405543, .byte = 0x3e }
};

static const SST_Transaction addxl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4216130, .data = 17982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addxl_initial_ram_15[] = {
		{ .addr = 0xebce2e, .byte = 0xd1 },
		{ .addr = 0xebce2f, .byte = 0x8b },
		{ .addr = 0xebce30, .byte = 0xd7 },
		{ .addr = 0xebce31, .byte = 0x8e },
		{ .addr = 0x5f52c2, .byte = 0xb2 },
		{ .addr = 0x5f52c3, .byte = 0x2a },
		{ .addr = 0x5f52c0, .byte = 0x64 },
		{ .addr = 0x5f52c1, .byte = 0x2d },
		{ .addr = 0xb94516, .byte = 0x0c },
		{ .addr = 0xb94517, .byte = 0x25 },
		{ .addr = 0xb94514, .byte = 0x43 },
		{ .addr = 0xb94515, .byte = 0x7f },
		{ .addr = 0xebce32, .byte = 0xdd },
		{ .addr = 0xebce33, .byte = 0x70 }
};

static const SST_RamByte addxl_final_ram_15[] = {
		{ .addr = 0xebce2e, .byte = 0xd1 },
		{ .addr = 0xebce2f, .byte = 0x8b },
		{ .addr = 0xebce30, .byte = 0xd7 },
		{ .addr = 0xebce31, .byte = 0x8e },
		{ .addr = 0x5f52c2, .byte = 0xb2 },
		{ .addr = 0x5f52c3, .byte = 0x2a },
		{ .addr = 0x5f52c0, .byte = 0x64 },
		{ .addr = 0x5f52c1, .byte = 0x2d },
		{ .addr = 0xb94516, .byte = 0xbe },
		{ .addr = 0xb94517, .byte = 0x4f },
		{ .addr = 0xb94514, .byte = 0xa7 },
		{ .addr = 0xb94515, .byte = 0xac },
		{ .addr = 0xebce32, .byte = 0xdd },
		{ .addr = 0xebce33, .byte = 0x70 }
};

static const SST_Transaction addxl_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6247106, .data = 45610, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6247104, .data = 25645, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12141846, .data = 3109, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12141844, .data = 17279, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12141846, .data = 48719, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15453746, .data = 56688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12141844, .data = 42924, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ADDXL_TEST_COUNT = 16;
static const SST_TestCase addxl[] = {
	{
		.name = "000 ADDX.l D7, D3 d787",
		.initial = {
			.regs = {
				1197053804, 3399353227, 2740321668, 970265451, 3765064288, 1562279320, 307052771, 146705388, 1409285987, 2048459142, 2712308714, 2961438980, 566968450, 4263654526, 1243038899, 15027612, 10721058, 41996, 3883982
			},
			.prefetch0 = 55175,
			.prefetch1 = 21531,
			.ram = addxl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1197053804, 3399353227, 2740321668, 1116970839, 3765064288, 1562279320, 307052771, 146705388, 1409285987, 2048459142, 2712308714, 2961438980, 566968450, 4263654526, 1243038899, 15027612, 10721058, 41984, 3883984
			},
			.prefetch0 = 21531,
			.prefetch1 = 37780,
			.ram = addxl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = addxl_transactions_0,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "001 ADDX.l -(A2), -(A3) d78a",
		.initial = {
			.regs = {
				65216558, 315409466, 3930633480, 2341720228, 1781762585, 4214441445, 639423648, 3904657997, 2941199726, 1472485724, 1365991280, 2295773516, 2858954887, 1722448888, 3995712580, 3825364, 2796960, 42012, 6876866
			},
			.prefetch0 = 55178,
			.prefetch1 = 31889,
			.ram = addxl_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				65216558, 315409466, 3930633480, 2341720228, 1781762585, 4214441445, 639423648, 3904657997, 2941199726, 1472485724, 1365991276, 2295773512, 2858954887, 1722448888, 3995712580, 3825364, 2796960, 42009, 6876868
			},
			.prefetch0 = 31889,
			.prefetch1 = 65002,
			.ram = addxl_final_ram_1,
			.ram_len = 14,
		},
		.transactions = addxl_transactions_1,
		.transactions_len = 8,
		.lenght = 30,
	},
	{
		.name = "002 ADDX.l -(A5), -(A7) df8d",
		.initial = {
			.regs = {
				4000153765, 733426698, 3893669270, 4135720468, 3592905820, 1293613508, 253008137, 4259483975, 3902585815, 557314780, 1059905589, 2075988365, 34148886, 1713959442, 3200794601, 14572300, 7643538, 3, 12829726
			},
			.prefetch0 = 57229,
			.prefetch1 = 26625,
			.ram = addxl_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4000153765, 733426698, 3893669270, 4135720468, 3592905820, 1293613508, 253008137, 4259483975, 3902585815, 557314780, 1059905589, 2075988365, 34148886, 1713959438, 3200794601, 14572296, 7643538, 17, 12829728
			},
			.prefetch0 = 26625,
			.prefetch1 = 41758,
			.ram = addxl_final_ram_2,
			.ram_len = 14,
		},
		.transactions = addxl_transactions_2,
		.transactions_len = 8,
		.lenght = 30,
	},
	{
		.name = "003 ADDX.l -(A5), -(A0) d18d",
		.initial = {
			.regs = {
				4122032193, 3244109741, 442662602, 2824105850, 1949215552, 603935452, 236435263, 2624666934, 2138347040, 2920451561, 3588078478, 3475955728, 3988382481, 2162467941, 4130895442, 5922800, 12201328, 9736, 14252472
			},
			.prefetch0 = 53645,
			.prefetch1 = 26017,
			.ram = addxl_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4122032193, 3244109741, 442662602, 2824105850, 1949215552, 603935452, 236435263, 2624666934, 2138347040, 2920451561, 3588078478, 3475955728, 3988382481, 2162467941, 4130895442, 5922800, 12201314, 9736, 2872461782
			},
			.prefetch0 = 34008,
			.prefetch1 = 31106,
			.ram = addxl_final_ram_3,
			.ram_len = 26,
		},
		.transactions = addxl_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 ADDX.l -(A0), -(A1) d388",
		.initial = {
			.regs = {
				2544373024, 2081647214, 2687632431, 91827498, 1383102768, 472430047, 3471448182, 2643094395, 1150116177, 3013017584, 4275662257, 1170614090, 2292971921, 1671249905, 2729125293, 16524924, 10850938, 1808, 15946512
			},
			.prefetch0 = 54152,
			.prefetch1 = 12473,
			.ram = addxl_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2544373024, 2081647214, 2687632431, 91827498, 1383102768, 472430047, 3471448182, 2643094395, 1150116177, 3013017584, 4275662257, 1170614090, 2292971921, 1671249905, 2729125293, 16524924, 10850924, 10000, 2486966994
			},
			.prefetch0 = 18355,
			.prefetch1 = 5587,
			.ram = addxl_final_ram_4,
			.ram_len = 26,
		},
		.transactions = addxl_transactions_4,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "005 ADDX.l -(A2), -(A5) db8a",
		.initial = {
			.regs = {
				240783033, 203075742, 3440346406, 4107384870, 257370028, 3562306483, 777212184, 2873815041, 2884387646, 2223004940, 3880859770, 751614522, 2565961860, 3636212006, 3299448351, 1202060, 6701984, 41503, 11971988
			},
			.prefetch0 = 56202,
			.prefetch1 = 44283,
			.ram = addxl_initial_ram_5,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				240783033, 203075742, 3440346406, 4107384870, 257370028, 3562306483, 777212184, 2873815041, 2884387646, 2223004940, 3880859766, 751614522, 2565961860, 3636212002, 3299448351, 1202060, 6701984, 41489, 11971990
			},
			.prefetch0 = 44283,
			.prefetch1 = 41013,
			.ram = addxl_final_ram_5,
			.ram_len = 14,
		},
		.transactions = addxl_transactions_5,
		.transactions_len = 8,
		.lenght = 30,
	},
	{
		.name = "006 ADDX.l -(A3), -(A3) d78b",
		.initial = {
			.regs = {
				1143005264, 1020507637, 473841207, 1054772966, 4269573621, 400209255, 2563372532, 4133799962, 4186407656, 4017737630, 3961539227, 1589690535, 3937773107, 1629966476, 3646573270, 1653918, 4822284, 33805, 12030036
			},
			.prefetch0 = 55179,
			.prefetch1 = 18727,
			.ram = addxl_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1143005264, 1020507637, 473841207, 1054772966, 4269573621, 400209255, 2563372532, 4133799962, 4186407656, 4017737630, 3961539227, 1589690535, 3937773107, 1629966476, 3646573270, 1653918, 4822270, 9229, 3210932444
			},
			.prefetch0 = 10904,
			.prefetch1 = 54942,
			.ram = addxl_final_ram_6,
			.ram_len = 26,
		},
		.transactions = addxl_transactions_6,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "007 ADDX.l D1, D5 db81",
		.initial = {
			.regs = {
				2512748265, 3671414878, 3074584464, 1194009644, 3958626566, 3448041634, 1250528875, 1482063417, 3844395475, 186733485, 735862401, 1147731428, 1044530602, 2490973930, 1489852385, 5352884, 7123634, 40976, 15934250
			},
			.prefetch0 = 56193,
			.prefetch1 = 34499,
			.ram = addxl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2512748265, 3671414878, 3074584464, 1194009644, 3958626566, 2824489217, 1250528875, 1482063417, 3844395475, 186733485, 735862401, 1147731428, 1044530602, 2490973930, 1489852385, 5352884, 7123634, 40985, 15934252
			},
			.prefetch0 = 34499,
			.prefetch1 = 42724,
			.ram = addxl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = addxl_transactions_7,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "008 ADDX.l D6, D5 db86",
		.initial = {
			.regs = {
				801724356, 2880200531, 1404230394, 3514196857, 788816698, 1940108727, 2066640037, 1068911244, 1723544910, 4067751220, 1465710673, 1164371213, 1315661638, 2134331380, 1090139010, 5949326, 7352708, 9745, 15244982
			},
			.prefetch0 = 56198,
			.prefetch1 = 42186,
			.ram = addxl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				801724356, 2880200531, 1404230394, 3514196857, 788816698, 4006748765, 2066640037, 1068911244, 1723544910, 4067751220, 1465710673, 1164371213, 1315661638, 2134331380, 1090139010, 5949326, 7352708, 9738, 15244984
			},
			.prefetch0 = 42186,
			.prefetch1 = 51408,
			.ram = addxl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = addxl_transactions_8,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "009 ADDX.l -(A4), -(A4) d98c",
		.initial = {
			.regs = {
				3913966728, 3680753067, 2972533807, 1365549264, 421610905, 1418543305, 3130448197, 2656829282, 3910098277, 2278028706, 1455608267, 3469785057, 2844305032, 2669424478, 235728965, 2259318, 7630414, 33559, 4748538
			},
			.prefetch0 = 55692,
			.prefetch1 = 44606,
			.ram = addxl_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3913966728, 3680753067, 2972533807, 1365549264, 421610905, 1418543305, 3130448197, 2656829282, 3910098277, 2278028706, 1455608267, 3469785057, 2844305024, 2669424478, 235728965, 2259318, 7630414, 33553, 4748540
			},
			.prefetch0 = 44606,
			.prefetch1 = 24716,
			.ram = addxl_final_ram_9,
			.ram_len = 14,
		},
		.transactions = addxl_transactions_9,
		.transactions_len = 8,
		.lenght = 30,
	},
	{
		.name = "010 ADDX.l -(A2), -(A0) d18a",
		.initial = {
			.regs = {
				1954103632, 3776291182, 3393595805, 3690947712, 4010110878, 981438066, 2513098895, 2770653604, 672365326, 1815611963, 3214379007, 1645736278, 729474476, 1517284797, 1973728999, 3281824, 1005768, 532, 8696938
			},
			.prefetch0 = 53642,
			.prefetch1 = 9686,
			.ram = addxl_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1954103632, 3776291182, 3393595805, 3690947712, 4010110878, 981438066, 2513098895, 2770653604, 672365326, 1815611963, 3214379007, 1645736278, 729474476, 1517284797, 1973728999, 3281824, 1005754, 8724, 3779201540
			},
			.prefetch0 = 7080,
			.prefetch1 = 26870,
			.ram = addxl_final_ram_10,
			.ram_len = 26,
		},
		.transactions = addxl_transactions_10,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "011 ADDX.l -(A0), -(A0) d188",
		.initial = {
			.regs = {
				1382230394, 1228493241, 463580129, 1491465704, 317923661, 2051981242, 1656688674, 3900049744, 3102288321, 2692429361, 3001654764, 2914861078, 2234647590, 13813433, 205376366, 5872610, 7444280, 42263, 1097052
			},
			.prefetch0 = 53640,
			.prefetch1 = 42082,
			.ram = addxl_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1382230394, 1228493241, 463580129, 1491465704, 317923661, 2051981242, 1656688674, 3900049744, 3102288321, 2692429361, 3001654764, 2914861078, 2234647590, 13813433, 205376366, 5872610, 7444266, 9495, 3823026822
			},
			.prefetch0 = 44461,
			.prefetch1 = 5625,
			.ram = addxl_final_ram_11,
			.ram_len = 26,
		},
		.transactions = addxl_transactions_11,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "012 ADDX.l -(A3), -(A5) db8b",
		.initial = {
			.regs = {
				1459839861, 414463167, 760558782, 55925658, 447042044, 2232728334, 2235331091, 3331270102, 1271109392, 1344063173, 2291457112, 1177605269, 3978882770, 1011116918, 1209288713, 16201052, 8294934, 1040, 13818848
			},
			.prefetch0 = 56203,
			.prefetch1 = 20524,
			.ram = addxl_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1459839861, 414463167, 760558782, 55925658, 447042044, 2232728334, 2235331091, 3331270102, 1271109392, 1344063173, 2291457112, 1177605269, 3978882770, 1011116918, 1209288713, 16201052, 8294920, 9232, 880154444
			},
			.prefetch0 = 49706,
			.prefetch1 = 40740,
			.ram = addxl_final_ram_12,
			.ram_len = 26,
		},
		.transactions = addxl_transactions_12,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "013 ADDX.l -(A6), -(A7) df8e",
		.initial = {
			.regs = {
				1997212573, 3183799619, 103435218, 3123496202, 389001722, 582020255, 1519833314, 3900253307, 684606628, 2230646813, 1774769470, 4140059596, 698872405, 536126957, 3389441520, 852958, 590, 42003, 910044
			},
			.prefetch0 = 57230,
			.prefetch1 = 36044,
			.ram = addxl_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1997212573, 3183799619, 103435218, 3123496202, 389001722, 582020255, 1519833314, 3900253307, 684606628, 2230646813, 1774769470, 4140059596, 698872405, 536126957, 3389441516, 852958, 586, 42009, 910046
			},
			.prefetch0 = 36044,
			.prefetch1 = 1365,
			.ram = addxl_final_ram_13,
			.ram_len = 14,
		},
		.transactions = addxl_transactions_13,
		.transactions_len = 8,
		.lenght = 30,
	},
	{
		.name = "014 ADDX.l D0, D7 df80",
		.initial = {
			.regs = {
				2826770210, 3863340005, 266124465, 304239668, 4194693668, 1933933991, 3273075490, 248210689, 2396728838, 475251256, 960120143, 4017111415, 3301473552, 1240471037, 1308807667, 3218144, 4599258, 1821, 4216130
			},
			.prefetch0 = 57216,
			.prefetch1 = 53173,
			.ram = addxl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2826770210, 3863340005, 266124465, 304239668, 4194693668, 1933933991, 3273075490, 3074980900, 2396728838, 475251256, 960120143, 4017111415, 3301473552, 1240471037, 1308807667, 3218144, 4599258, 1800, 4216132
			},
			.prefetch0 = 53173,
			.prefetch1 = 17982,
			.ram = addxl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = addxl_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 ADDX.l -(A3), -(A0) d18b",
		.initial = {
			.regs = {
				3796933256, 2739900000, 4265853140, 2817941332, 1762480263, 3846102178, 247630158, 1649148265, 3904455960, 3249095139, 1246813922, 2304725700, 3662297131, 2953280811, 4159688489, 3087232, 2491884, 32783, 15453746
			},
			.prefetch0 = 53643,
			.prefetch1 = 55182,
			.ram = addxl_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3796933256, 2739900000, 4265853140, 2817941332, 1762480263, 3846102178, 247630158, 1649148265, 3904455956, 3249095139, 1246813922, 2304725696, 3662297131, 2953280811, 4159688489, 3087232, 2491884, 32778, 15453748
			},
			.prefetch0 = 55182,
			.prefetch1 = 56688,
			.ram = addxl_final_ram_15,
			.ram_len = 14,
		},
		.transactions = addxl_transactions_15,
		.transactions_len = 8,
		.lenght = 30,
	},
};

#endif /* RBT_ADDXL_H */