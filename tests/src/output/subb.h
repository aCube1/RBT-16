#ifndef RBT_SUBB_H
#define RBT_SUBB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subb_initial_ram_0[] = {
		{ .addr = 0xbec952, .byte = 0x04 },
		{ .addr = 0xbec953, .byte = 0x20 },
		{ .addr = 0xbec954, .byte = 0x8f },
		{ .addr = 0xbec955, .byte = 0x25 },
		{ .addr = 0xbec956, .byte = 0x01 },
		{ .addr = 0xbec957, .byte = 0xe9 },
		{ .addr = 0x77c4d6, .byte = 0x58 },
		{ .addr = 0x77c4d7, .byte = 0x13 },
		{ .addr = 0xbec958, .byte = 0x3f },
		{ .addr = 0xbec959, .byte = 0x01 }
};

static const SST_RamByte subb_final_ram_0[] = {
		{ .addr = 0xbec952, .byte = 0x04 },
		{ .addr = 0xbec953, .byte = 0x20 },
		{ .addr = 0xbec954, .byte = 0x8f },
		{ .addr = 0xbec955, .byte = 0x25 },
		{ .addr = 0xbec956, .byte = 0x01 },
		{ .addr = 0xbec957, .byte = 0xe9 },
		{ .addr = 0x77c4d6, .byte = 0x58 },
		{ .addr = 0x77c4d7, .byte = 0xee },
		{ .addr = 0xbec958, .byte = 0x3f },
		{ .addr = 0xbec959, .byte = 0x01 }
};

static const SST_Transaction subb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12503382, .data = 489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7849174, .data = 19, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12503384, .data = 16129, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7849174, .data = 238, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_1[] = {
		{ .addr = 0x717a3e, .byte = 0x94 },
		{ .addr = 0x717a3f, .byte = 0x25 },
		{ .addr = 0x717a40, .byte = 0xc8 },
		{ .addr = 0x717a41, .byte = 0x3d },
		{ .addr = 0x112836, .byte = 0x0e },
		{ .addr = 0x112837, .byte = 0xe7 },
		{ .addr = 0x717a42, .byte = 0xa4 },
		{ .addr = 0x717a43, .byte = 0xd8 }
};

static const SST_RamByte subb_final_ram_1[] = {
		{ .addr = 0x717a3e, .byte = 0x94 },
		{ .addr = 0x717a3f, .byte = 0x25 },
		{ .addr = 0x717a40, .byte = 0xc8 },
		{ .addr = 0x717a41, .byte = 0x3d },
		{ .addr = 0x112836, .byte = 0x0e },
		{ .addr = 0x112837, .byte = 0xe7 },
		{ .addr = 0x717a42, .byte = 0xa4 },
		{ .addr = 0x717a43, .byte = 0xd8 }
};

static const SST_Transaction subb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1124406, .data = 231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7436866, .data = 42200, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_2[] = {
		{ .addr = 0x9ae7c4, .byte = 0x04 },
		{ .addr = 0x9ae7c5, .byte = 0x2a },
		{ .addr = 0x9ae7c6, .byte = 0x8f },
		{ .addr = 0x9ae7c7, .byte = 0xb3 },
		{ .addr = 0x9ae7c8, .byte = 0xc0 },
		{ .addr = 0x9ae7c9, .byte = 0xcd },
		{ .addr = 0x9ae7ca, .byte = 0x75 },
		{ .addr = 0x9ae7cb, .byte = 0x99 },
		{ .addr = 0xdc78fe, .byte = 0x7e },
		{ .addr = 0xdc78ff, .byte = 0x97 },
		{ .addr = 0x9ae7cc, .byte = 0xa0 },
		{ .addr = 0x9ae7cd, .byte = 0x29 }
};

static const SST_RamByte subb_final_ram_2[] = {
		{ .addr = 0x9ae7c4, .byte = 0x04 },
		{ .addr = 0x9ae7c5, .byte = 0x2a },
		{ .addr = 0x9ae7c6, .byte = 0x8f },
		{ .addr = 0x9ae7c7, .byte = 0xb3 },
		{ .addr = 0x9ae7c8, .byte = 0xc0 },
		{ .addr = 0x9ae7c9, .byte = 0xcd },
		{ .addr = 0x9ae7ca, .byte = 0x75 },
		{ .addr = 0x9ae7cb, .byte = 0x99 },
		{ .addr = 0xdc78fe, .byte = 0xcb },
		{ .addr = 0xdc78ff, .byte = 0x97 },
		{ .addr = 0x9ae7cc, .byte = 0xa0 },
		{ .addr = 0x9ae7cd, .byte = 0x29 }
};

static const SST_Transaction subb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10151880, .data = 49357, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10151882, .data = 30105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14448894, .data = 32256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10151884, .data = 41001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14448894, .data = 51968, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_3[] = {
		{ .addr = 0xb58c36, .byte = 0x9b },
		{ .addr = 0xb58c37, .byte = 0x31 },
		{ .addr = 0xb58c38, .byte = 0x4e },
		{ .addr = 0xb58c39, .byte = 0x1b },
		{ .addr = 0xb58c3a, .byte = 0x23 },
		{ .addr = 0xb58c3b, .byte = 0x7b },
		{ .addr = 0x97c4e4, .byte = 0x89 },
		{ .addr = 0x97c4e5, .byte = 0x6c },
		{ .addr = 0xb58c3c, .byte = 0x02 },
		{ .addr = 0xb58c3d, .byte = 0x19 }
};

static const SST_RamByte subb_final_ram_3[] = {
		{ .addr = 0xb58c36, .byte = 0x9b },
		{ .addr = 0xb58c37, .byte = 0x31 },
		{ .addr = 0xb58c38, .byte = 0x4e },
		{ .addr = 0xb58c39, .byte = 0x1b },
		{ .addr = 0xb58c3a, .byte = 0x23 },
		{ .addr = 0xb58c3b, .byte = 0x7b },
		{ .addr = 0x97c4e4, .byte = 0x89 },
		{ .addr = 0x97c4e5, .byte = 0x8c },
		{ .addr = 0xb58c3c, .byte = 0x02 },
		{ .addr = 0xb58c3d, .byte = 0x19 }
};

static const SST_Transaction subb_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11897914, .data = 9083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9946340, .data = 108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11897916, .data = 537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9946340, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_4[] = {
		{ .addr = 0xd7b2ea, .byte = 0x9b },
		{ .addr = 0xd7b2eb, .byte = 0x11 },
		{ .addr = 0xd7b2ec, .byte = 0x49 },
		{ .addr = 0xd7b2ed, .byte = 0x6b },
		{ .addr = 0xde9b86, .byte = 0xeb },
		{ .addr = 0xde9b87, .byte = 0x89 },
		{ .addr = 0xd7b2ee, .byte = 0x58 },
		{ .addr = 0xd7b2ef, .byte = 0xbf }
};

static const SST_RamByte subb_final_ram_4[] = {
		{ .addr = 0xd7b2ea, .byte = 0x9b },
		{ .addr = 0xd7b2eb, .byte = 0x11 },
		{ .addr = 0xd7b2ec, .byte = 0x49 },
		{ .addr = 0xd7b2ed, .byte = 0x6b },
		{ .addr = 0xde9b86, .byte = 0xa2 },
		{ .addr = 0xde9b87, .byte = 0x89 },
		{ .addr = 0xd7b2ee, .byte = 0x58 },
		{ .addr = 0xd7b2ef, .byte = 0xbf }
};

static const SST_Transaction subb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14588806, .data = 60160, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14136046, .data = 22719, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14588806, .data = 41472, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_5[] = {
		{ .addr = 0x9bfc48, .byte = 0x9b },
		{ .addr = 0x9bfc49, .byte = 0x23 },
		{ .addr = 0x9bfc4a, .byte = 0x1f },
		{ .addr = 0x9bfc4b, .byte = 0xbd },
		{ .addr = 0x0710fc, .byte = 0x48 },
		{ .addr = 0x0710fd, .byte = 0xf5 },
		{ .addr = 0x9bfc4c, .byte = 0xe0 },
		{ .addr = 0x9bfc4d, .byte = 0xa5 }
};

static const SST_RamByte subb_final_ram_5[] = {
		{ .addr = 0x9bfc48, .byte = 0x9b },
		{ .addr = 0x9bfc49, .byte = 0x23 },
		{ .addr = 0x9bfc4a, .byte = 0x1f },
		{ .addr = 0x9bfc4b, .byte = 0xbd },
		{ .addr = 0x0710fc, .byte = 0x48 },
		{ .addr = 0x0710fd, .byte = 0xe4 },
		{ .addr = 0x9bfc4c, .byte = 0xe0 },
		{ .addr = 0x9bfc4d, .byte = 0xa5 }
};

static const SST_Transaction subb_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 463100, .data = 245, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10222668, .data = 57509, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 463100, .data = 228, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_6[] = {
		{ .addr = 0x99f0da, .byte = 0x9f },
		{ .addr = 0x99f0db, .byte = 0x14 },
		{ .addr = 0x99f0dc, .byte = 0xcb },
		{ .addr = 0x99f0dd, .byte = 0xf6 },
		{ .addr = 0x69a978, .byte = 0x42 },
		{ .addr = 0x69a979, .byte = 0xcf },
		{ .addr = 0x99f0de, .byte = 0xfc },
		{ .addr = 0x99f0df, .byte = 0xa2 }
};

static const SST_RamByte subb_final_ram_6[] = {
		{ .addr = 0x99f0da, .byte = 0x9f },
		{ .addr = 0x99f0db, .byte = 0x14 },
		{ .addr = 0x99f0dc, .byte = 0xcb },
		{ .addr = 0x99f0dd, .byte = 0xf6 },
		{ .addr = 0x69a978, .byte = 0x60 },
		{ .addr = 0x69a979, .byte = 0xcf },
		{ .addr = 0x99f0de, .byte = 0xfc },
		{ .addr = 0x99f0df, .byte = 0xa2 }
};

static const SST_Transaction subb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6924664, .data = 16896, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10088670, .data = 64674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6924664, .data = 24576, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_7[] = {
		{ .addr = 0x5b1904, .byte = 0x95 },
		{ .addr = 0x5b1905, .byte = 0x22 },
		{ .addr = 0x5b1906, .byte = 0x0b },
		{ .addr = 0x5b1907, .byte = 0xd2 },
		{ .addr = 0x57fde4, .byte = 0x33 },
		{ .addr = 0x57fde5, .byte = 0x6c },
		{ .addr = 0x5b1908, .byte = 0xbb },
		{ .addr = 0x5b1909, .byte = 0x5f }
};

static const SST_RamByte subb_final_ram_7[] = {
		{ .addr = 0x5b1904, .byte = 0x95 },
		{ .addr = 0x5b1905, .byte = 0x22 },
		{ .addr = 0x5b1906, .byte = 0x0b },
		{ .addr = 0x5b1907, .byte = 0xd2 },
		{ .addr = 0x57fde4, .byte = 0x35 },
		{ .addr = 0x57fde5, .byte = 0x6c },
		{ .addr = 0x5b1908, .byte = 0xbb },
		{ .addr = 0x5b1909, .byte = 0x5f }
};

static const SST_Transaction subb_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5766628, .data = 13056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5970184, .data = 47967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5766628, .data = 13568, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_8[] = {
		{ .addr = 0x99e8ca, .byte = 0x04 },
		{ .addr = 0x99e8cb, .byte = 0x2d },
		{ .addr = 0x99e8cc, .byte = 0xc4 },
		{ .addr = 0x99e8cd, .byte = 0x13 },
		{ .addr = 0x99e8ce, .byte = 0xb4 },
		{ .addr = 0x99e8cf, .byte = 0x6d },
		{ .addr = 0x99e8d0, .byte = 0xa9 },
		{ .addr = 0x99e8d1, .byte = 0xc9 },
		{ .addr = 0x1d5126, .byte = 0xa5 },
		{ .addr = 0x1d5127, .byte = 0xa4 },
		{ .addr = 0x99e8d2, .byte = 0xd0 },
		{ .addr = 0x99e8d3, .byte = 0xc4 }
};

static const SST_RamByte subb_final_ram_8[] = {
		{ .addr = 0x99e8ca, .byte = 0x04 },
		{ .addr = 0x99e8cb, .byte = 0x2d },
		{ .addr = 0x99e8cc, .byte = 0xc4 },
		{ .addr = 0x99e8cd, .byte = 0x13 },
		{ .addr = 0x99e8ce, .byte = 0xb4 },
		{ .addr = 0x99e8cf, .byte = 0x6d },
		{ .addr = 0x99e8d0, .byte = 0xa9 },
		{ .addr = 0x99e8d1, .byte = 0xc9 },
		{ .addr = 0x1d5126, .byte = 0xa5 },
		{ .addr = 0x1d5127, .byte = 0x91 },
		{ .addr = 0x99e8d2, .byte = 0xd0 },
		{ .addr = 0x99e8d3, .byte = 0xc4 }
};

static const SST_Transaction subb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10086606, .data = 46189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10086608, .data = 43465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1921318, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10086610, .data = 53444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1921318, .data = 145, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_9[] = {
		{ .addr = 0x890334, .byte = 0x98 },
		{ .addr = 0x890335, .byte = 0x27 },
		{ .addr = 0x890336, .byte = 0xe5 },
		{ .addr = 0x890337, .byte = 0x88 },
		{ .addr = 0xb5198a, .byte = 0x82 },
		{ .addr = 0xb5198b, .byte = 0x62 },
		{ .addr = 0x890338, .byte = 0xb4 },
		{ .addr = 0x890339, .byte = 0xa2 }
};

static const SST_RamByte subb_final_ram_9[] = {
		{ .addr = 0x890334, .byte = 0x98 },
		{ .addr = 0x890335, .byte = 0x27 },
		{ .addr = 0x890336, .byte = 0xe5 },
		{ .addr = 0x890337, .byte = 0x88 },
		{ .addr = 0xb5198a, .byte = 0x82 },
		{ .addr = 0xb5198b, .byte = 0x62 },
		{ .addr = 0x890338, .byte = 0xb4 },
		{ .addr = 0x890339, .byte = 0xa2 }
};

static const SST_Transaction subb_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11868554, .data = 33280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8979256, .data = 46242, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_10[] = {
		{ .addr = 0xcbb08c, .byte = 0x9e },
		{ .addr = 0xcbb08d, .byte = 0x2d },
		{ .addr = 0xcbb08e, .byte = 0xdd },
		{ .addr = 0xcbb08f, .byte = 0x27 },
		{ .addr = 0xcbb090, .byte = 0x9f },
		{ .addr = 0xcbb091, .byte = 0x29 },
		{ .addr = 0xefecd2, .byte = 0xbc },
		{ .addr = 0xefecd3, .byte = 0x5c },
		{ .addr = 0xcbb092, .byte = 0x42 },
		{ .addr = 0xcbb093, .byte = 0x90 }
};

static const SST_RamByte subb_final_ram_10[] = {
		{ .addr = 0xcbb08c, .byte = 0x9e },
		{ .addr = 0xcbb08d, .byte = 0x2d },
		{ .addr = 0xcbb08e, .byte = 0xdd },
		{ .addr = 0xcbb08f, .byte = 0x27 },
		{ .addr = 0xcbb090, .byte = 0x9f },
		{ .addr = 0xcbb091, .byte = 0x29 },
		{ .addr = 0xefecd2, .byte = 0xbc },
		{ .addr = 0xefecd3, .byte = 0x5c },
		{ .addr = 0xcbb092, .byte = 0x42 },
		{ .addr = 0xcbb093, .byte = 0x90 }
};

static const SST_Transaction subb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13349008, .data = 40745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723730, .data = 92, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13349010, .data = 17040, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_11[] = {
		{ .addr = 0xaeb1ec, .byte = 0x91 },
		{ .addr = 0xaeb1ed, .byte = 0x31 },
		{ .addr = 0xaeb1ee, .byte = 0x86 },
		{ .addr = 0xaeb1ef, .byte = 0x0a },
		{ .addr = 0xaeb1f0, .byte = 0x9a },
		{ .addr = 0xaeb1f1, .byte = 0x44 },
		{ .addr = 0x8650e4, .byte = 0x16 },
		{ .addr = 0x8650e5, .byte = 0x45 },
		{ .addr = 0xaeb1f2, .byte = 0xa6 },
		{ .addr = 0xaeb1f3, .byte = 0x5c }
};

static const SST_RamByte subb_final_ram_11[] = {
		{ .addr = 0xaeb1ec, .byte = 0x91 },
		{ .addr = 0xaeb1ed, .byte = 0x31 },
		{ .addr = 0xaeb1ee, .byte = 0x86 },
		{ .addr = 0xaeb1ef, .byte = 0x0a },
		{ .addr = 0xaeb1f0, .byte = 0x9a },
		{ .addr = 0xaeb1f1, .byte = 0x44 },
		{ .addr = 0x8650e4, .byte = 0x6d },
		{ .addr = 0x8650e5, .byte = 0x45 },
		{ .addr = 0xaeb1f2, .byte = 0xa6 },
		{ .addr = 0xaeb1f3, .byte = 0x5c }
};

static const SST_Transaction subb_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11448816, .data = 39492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8802532, .data = 5632, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11448818, .data = 42588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8802532, .data = 27904, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_12[] = {
		{ .addr = 0xb7b416, .byte = 0x9d },
		{ .addr = 0xb7b417, .byte = 0x18 },
		{ .addr = 0xb7b418, .byte = 0xca },
		{ .addr = 0xb7b419, .byte = 0x6a },
		{ .addr = 0x9b9ca0, .byte = 0xf5 },
		{ .addr = 0x9b9ca1, .byte = 0xf3 },
		{ .addr = 0xb7b41a, .byte = 0x67 },
		{ .addr = 0xb7b41b, .byte = 0x56 }
};

static const SST_RamByte subb_final_ram_12[] = {
		{ .addr = 0xb7b416, .byte = 0x9d },
		{ .addr = 0xb7b417, .byte = 0x18 },
		{ .addr = 0xb7b418, .byte = 0xca },
		{ .addr = 0xb7b419, .byte = 0x6a },
		{ .addr = 0x9b9ca0, .byte = 0xf5 },
		{ .addr = 0x9b9ca1, .byte = 0x58 },
		{ .addr = 0xb7b41a, .byte = 0x67 },
		{ .addr = 0xb7b41b, .byte = 0x56 }
};

static const SST_Transaction subb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10198176, .data = 243, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12039194, .data = 26454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10198176, .data = 88, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_13[] = {
		{ .addr = 0x937e24, .byte = 0x91 },
		{ .addr = 0x937e25, .byte = 0x22 },
		{ .addr = 0x937e26, .byte = 0xd1 },
		{ .addr = 0x937e27, .byte = 0x3a },
		{ .addr = 0xea2d12, .byte = 0xd5 },
		{ .addr = 0xea2d13, .byte = 0xf2 },
		{ .addr = 0x937e28, .byte = 0xc1 },
		{ .addr = 0x937e29, .byte = 0x19 }
};

static const SST_RamByte subb_final_ram_13[] = {
		{ .addr = 0x937e24, .byte = 0x91 },
		{ .addr = 0x937e25, .byte = 0x22 },
		{ .addr = 0x937e26, .byte = 0xd1 },
		{ .addr = 0x937e27, .byte = 0x3a },
		{ .addr = 0xea2d12, .byte = 0x81 },
		{ .addr = 0xea2d13, .byte = 0xf2 },
		{ .addr = 0x937e28, .byte = 0xc1 },
		{ .addr = 0x937e29, .byte = 0x19 }
};

static const SST_Transaction subb_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15346962, .data = 54528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9666088, .data = 49433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15346962, .data = 33024, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_14[] = {
		{ .addr = 0xc81ad6, .byte = 0x9d },
		{ .addr = 0xc81ad7, .byte = 0x18 },
		{ .addr = 0xc81ad8, .byte = 0x55 },
		{ .addr = 0xc81ad9, .byte = 0xe5 },
		{ .addr = 0x227ce6, .byte = 0xfe },
		{ .addr = 0x227ce7, .byte = 0x0d },
		{ .addr = 0xc81ada, .byte = 0x82 },
		{ .addr = 0xc81adb, .byte = 0x52 }
};

static const SST_RamByte subb_final_ram_14[] = {
		{ .addr = 0xc81ad6, .byte = 0x9d },
		{ .addr = 0xc81ad7, .byte = 0x18 },
		{ .addr = 0xc81ad8, .byte = 0x55 },
		{ .addr = 0xc81ad9, .byte = 0xe5 },
		{ .addr = 0x227ce6, .byte = 0xfe },
		{ .addr = 0x227ce7, .byte = 0xb7 },
		{ .addr = 0xc81ada, .byte = 0x82 },
		{ .addr = 0xc81adb, .byte = 0x52 }
};

static const SST_Transaction subb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2260198, .data = 13, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13114074, .data = 33362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2260198, .data = 183, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_15[] = {
		{ .addr = 0x5ffe94, .byte = 0x5b },
		{ .addr = 0x5ffe95, .byte = 0x07 },
		{ .addr = 0x5ffe96, .byte = 0x6f },
		{ .addr = 0x5ffe97, .byte = 0xb3 },
		{ .addr = 0x5ffe98, .byte = 0x3d },
		{ .addr = 0x5ffe99, .byte = 0x75 }
};

static const SST_RamByte subb_final_ram_15[] = {
		{ .addr = 0x5ffe94, .byte = 0x5b },
		{ .addr = 0x5ffe95, .byte = 0x07 },
		{ .addr = 0x5ffe96, .byte = 0x6f },
		{ .addr = 0x5ffe97, .byte = 0xb3 },
		{ .addr = 0x5ffe98, .byte = 0x3d },
		{ .addr = 0x5ffe99, .byte = 0x75 }
};

static const SST_Transaction subb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6291096, .data = 15733, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_16[] = {
		{ .addr = 0x20eb8e, .byte = 0x94 },
		{ .addr = 0x20eb8f, .byte = 0x1c },
		{ .addr = 0x20eb90, .byte = 0xa0 },
		{ .addr = 0x20eb91, .byte = 0xb9 },
		{ .addr = 0xd3131e, .byte = 0xa0 },
		{ .addr = 0xd3131f, .byte = 0xdf },
		{ .addr = 0x20eb92, .byte = 0x17 },
		{ .addr = 0x20eb93, .byte = 0x37 }
};

static const SST_RamByte subb_final_ram_16[] = {
		{ .addr = 0x20eb8e, .byte = 0x94 },
		{ .addr = 0x20eb8f, .byte = 0x1c },
		{ .addr = 0x20eb90, .byte = 0xa0 },
		{ .addr = 0x20eb91, .byte = 0xb9 },
		{ .addr = 0xd3131e, .byte = 0xa0 },
		{ .addr = 0xd3131f, .byte = 0xdf },
		{ .addr = 0x20eb92, .byte = 0x17 },
		{ .addr = 0x20eb93, .byte = 0x37 }
};

static const SST_Transaction subb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13832990, .data = 40960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2157458, .data = 5943, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_17[] = {
		{ .addr = 0xb61624, .byte = 0x51 },
		{ .addr = 0xb61625, .byte = 0x29 },
		{ .addr = 0xb61626, .byte = 0xcf },
		{ .addr = 0xb61627, .byte = 0xe1 },
		{ .addr = 0xb61628, .byte = 0xae },
		{ .addr = 0xb61629, .byte = 0x2a },
		{ .addr = 0xb0c1f8, .byte = 0x60 },
		{ .addr = 0xb0c1f9, .byte = 0x0e },
		{ .addr = 0xb6162a, .byte = 0x16 },
		{ .addr = 0xb6162b, .byte = 0xe8 }
};

static const SST_RamByte subb_final_ram_17[] = {
		{ .addr = 0xb61624, .byte = 0x51 },
		{ .addr = 0xb61625, .byte = 0x29 },
		{ .addr = 0xb61626, .byte = 0xcf },
		{ .addr = 0xb61627, .byte = 0xe1 },
		{ .addr = 0xb61628, .byte = 0xae },
		{ .addr = 0xb61629, .byte = 0x2a },
		{ .addr = 0xb0c1f8, .byte = 0x58 },
		{ .addr = 0xb0c1f9, .byte = 0x0e },
		{ .addr = 0xb6162a, .byte = 0x16 },
		{ .addr = 0xb6162b, .byte = 0xe8 }
};

static const SST_Transaction subb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11933224, .data = 44586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11583992, .data = 24576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11933226, .data = 5864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11583992, .data = 22528, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_18[] = {
		{ .addr = 0xc7ab2c, .byte = 0x9a },
		{ .addr = 0xc7ab2d, .byte = 0x25 },
		{ .addr = 0xc7ab2e, .byte = 0x00 },
		{ .addr = 0xc7ab2f, .byte = 0x27 },
		{ .addr = 0xc03c22, .byte = 0x49 },
		{ .addr = 0xc03c23, .byte = 0x5c },
		{ .addr = 0xc7ab30, .byte = 0xc0 },
		{ .addr = 0xc7ab31, .byte = 0x2d }
};

static const SST_RamByte subb_final_ram_18[] = {
		{ .addr = 0xc7ab2c, .byte = 0x9a },
		{ .addr = 0xc7ab2d, .byte = 0x25 },
		{ .addr = 0xc7ab2e, .byte = 0x00 },
		{ .addr = 0xc7ab2f, .byte = 0x27 },
		{ .addr = 0xc03c22, .byte = 0x49 },
		{ .addr = 0xc03c23, .byte = 0x5c },
		{ .addr = 0xc7ab30, .byte = 0xc0 },
		{ .addr = 0xc7ab31, .byte = 0x2d }
};

static const SST_Transaction subb_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12598306, .data = 92, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13085488, .data = 49197, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_19[] = {
		{ .addr = 0x6e0ae4, .byte = 0x57 },
		{ .addr = 0x6e0ae5, .byte = 0x36 },
		{ .addr = 0x6e0ae6, .byte = 0x67 },
		{ .addr = 0x6e0ae7, .byte = 0xb5 },
		{ .addr = 0x6e0ae8, .byte = 0x3f },
		{ .addr = 0x6e0ae9, .byte = 0xf0 },
		{ .addr = 0x236de8, .byte = 0x23 },
		{ .addr = 0x236de9, .byte = 0x62 },
		{ .addr = 0x6e0aea, .byte = 0x17 },
		{ .addr = 0x6e0aeb, .byte = 0xef }
};

static const SST_RamByte subb_final_ram_19[] = {
		{ .addr = 0x6e0ae4, .byte = 0x57 },
		{ .addr = 0x6e0ae5, .byte = 0x36 },
		{ .addr = 0x6e0ae6, .byte = 0x67 },
		{ .addr = 0x6e0ae7, .byte = 0xb5 },
		{ .addr = 0x6e0ae8, .byte = 0x3f },
		{ .addr = 0x6e0ae9, .byte = 0xf0 },
		{ .addr = 0x236de8, .byte = 0x23 },
		{ .addr = 0x236de9, .byte = 0x5f },
		{ .addr = 0x6e0aea, .byte = 0x17 },
		{ .addr = 0x6e0aeb, .byte = 0xef }
};

static const SST_Transaction subb_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7211752, .data = 16368, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2321896, .data = 98, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7211754, .data = 6127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2321896, .data = 95, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_20[] = {
		{ .addr = 0xd0bf8e, .byte = 0x93 },
		{ .addr = 0xd0bf8f, .byte = 0x17 },
		{ .addr = 0xd0bf90, .byte = 0xf8 },
		{ .addr = 0xd0bf91, .byte = 0x39 },
		{ .addr = 0x5ecc58, .byte = 0xdd },
		{ .addr = 0x5ecc59, .byte = 0xd4 },
		{ .addr = 0xd0bf92, .byte = 0xa7 },
		{ .addr = 0xd0bf93, .byte = 0x89 }
};

static const SST_RamByte subb_final_ram_20[] = {
		{ .addr = 0xd0bf8e, .byte = 0x93 },
		{ .addr = 0xd0bf8f, .byte = 0x17 },
		{ .addr = 0xd0bf90, .byte = 0xf8 },
		{ .addr = 0xd0bf91, .byte = 0x39 },
		{ .addr = 0x5ecc58, .byte = 0x11 },
		{ .addr = 0x5ecc59, .byte = 0xd4 },
		{ .addr = 0xd0bf92, .byte = 0xa7 },
		{ .addr = 0xd0bf93, .byte = 0x89 }
};

static const SST_Transaction subb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6212696, .data = 56576, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13680530, .data = 42889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6212696, .data = 4352, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_21[] = {
		{ .addr = 0xeab61c, .byte = 0x90 },
		{ .addr = 0xeab61d, .byte = 0x3c },
		{ .addr = 0xeab61e, .byte = 0xc3 },
		{ .addr = 0xeab61f, .byte = 0xa7 },
		{ .addr = 0xeab620, .byte = 0x42 },
		{ .addr = 0xeab621, .byte = 0xd8 },
		{ .addr = 0xeab622, .byte = 0x06 },
		{ .addr = 0xeab623, .byte = 0xfe }
};

static const SST_RamByte subb_final_ram_21[] = {
		{ .addr = 0xeab61c, .byte = 0x90 },
		{ .addr = 0xeab61d, .byte = 0x3c },
		{ .addr = 0xeab61e, .byte = 0xc3 },
		{ .addr = 0xeab61f, .byte = 0xa7 },
		{ .addr = 0xeab620, .byte = 0x42 },
		{ .addr = 0xeab621, .byte = 0xd8 },
		{ .addr = 0xeab622, .byte = 0x06 },
		{ .addr = 0xeab623, .byte = 0xfe }
};

static const SST_Transaction subb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15382048, .data = 17112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15382050, .data = 1790, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_22[] = {
		{ .addr = 0x5263f2, .byte = 0x59 },
		{ .addr = 0x5263f3, .byte = 0x19 },
		{ .addr = 0x5263f4, .byte = 0xa7 },
		{ .addr = 0x5263f5, .byte = 0xdb },
		{ .addr = 0x93fec4, .byte = 0xf7 },
		{ .addr = 0x93fec5, .byte = 0x3d },
		{ .addr = 0x5263f6, .byte = 0xb2 },
		{ .addr = 0x5263f7, .byte = 0x7c }
};

static const SST_RamByte subb_final_ram_22[] = {
		{ .addr = 0x5263f2, .byte = 0x59 },
		{ .addr = 0x5263f3, .byte = 0x19 },
		{ .addr = 0x5263f4, .byte = 0xa7 },
		{ .addr = 0x5263f5, .byte = 0xdb },
		{ .addr = 0x93fec4, .byte = 0xf3 },
		{ .addr = 0x93fec5, .byte = 0x3d },
		{ .addr = 0x5263f6, .byte = 0xb2 },
		{ .addr = 0x5263f7, .byte = 0x7c }
};

static const SST_Transaction subb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9699012, .data = 63232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5399542, .data = 45692, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9699012, .data = 62208, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_23[] = {
		{ .addr = 0x86dcf4, .byte = 0x9b },
		{ .addr = 0x86dcf5, .byte = 0x13 },
		{ .addr = 0x86dcf6, .byte = 0x1d },
		{ .addr = 0x86dcf7, .byte = 0x4d },
		{ .addr = 0x4f2048, .byte = 0x3e },
		{ .addr = 0x4f2049, .byte = 0x2d },
		{ .addr = 0x86dcf8, .byte = 0xe7 },
		{ .addr = 0x86dcf9, .byte = 0x81 }
};

static const SST_RamByte subb_final_ram_23[] = {
		{ .addr = 0x86dcf4, .byte = 0x9b },
		{ .addr = 0x86dcf5, .byte = 0x13 },
		{ .addr = 0x86dcf6, .byte = 0x1d },
		{ .addr = 0x86dcf7, .byte = 0x4d },
		{ .addr = 0x4f2048, .byte = 0x90 },
		{ .addr = 0x4f2049, .byte = 0x2d },
		{ .addr = 0x86dcf8, .byte = 0xe7 },
		{ .addr = 0x86dcf9, .byte = 0x81 }
};

static const SST_Transaction subb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5185608, .data = 15872, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8838392, .data = 59265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5185608, .data = 36864, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_24[] = {
		{ .addr = 0x4cfd8e, .byte = 0x9a },
		{ .addr = 0x4cfd8f, .byte = 0x2e },
		{ .addr = 0x4cfd90, .byte = 0x02 },
		{ .addr = 0x4cfd91, .byte = 0xd0 },
		{ .addr = 0x4cfd92, .byte = 0x40 },
		{ .addr = 0x4cfd93, .byte = 0xa0 },
		{ .addr = 0xb2164e, .byte = 0xa2 },
		{ .addr = 0xb2164f, .byte = 0xb0 },
		{ .addr = 0x4cfd94, .byte = 0x24 },
		{ .addr = 0x4cfd95, .byte = 0x1b }
};

static const SST_RamByte subb_final_ram_24[] = {
		{ .addr = 0x4cfd8e, .byte = 0x9a },
		{ .addr = 0x4cfd8f, .byte = 0x2e },
		{ .addr = 0x4cfd90, .byte = 0x02 },
		{ .addr = 0x4cfd91, .byte = 0xd0 },
		{ .addr = 0x4cfd92, .byte = 0x40 },
		{ .addr = 0x4cfd93, .byte = 0xa0 },
		{ .addr = 0xb2164e, .byte = 0xa2 },
		{ .addr = 0xb2164f, .byte = 0xb0 },
		{ .addr = 0x4cfd94, .byte = 0x24 },
		{ .addr = 0x4cfd95, .byte = 0x1b }
};

static const SST_Transaction subb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5045650, .data = 16544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11671118, .data = 176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5045652, .data = 9243, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_25[] = {
		{ .addr = 0x69fd76, .byte = 0x9d },
		{ .addr = 0x69fd77, .byte = 0x2a },
		{ .addr = 0x69fd78, .byte = 0x8d },
		{ .addr = 0x69fd79, .byte = 0x5f },
		{ .addr = 0x69fd7a, .byte = 0x97 },
		{ .addr = 0x69fd7b, .byte = 0x88 },
		{ .addr = 0x79d840, .byte = 0x3c },
		{ .addr = 0x79d841, .byte = 0x13 },
		{ .addr = 0x69fd7c, .byte = 0xf7 },
		{ .addr = 0x69fd7d, .byte = 0x1f }
};

static const SST_RamByte subb_final_ram_25[] = {
		{ .addr = 0x69fd76, .byte = 0x9d },
		{ .addr = 0x69fd77, .byte = 0x2a },
		{ .addr = 0x69fd78, .byte = 0x8d },
		{ .addr = 0x69fd79, .byte = 0x5f },
		{ .addr = 0x69fd7a, .byte = 0x97 },
		{ .addr = 0x69fd7b, .byte = 0x88 },
		{ .addr = 0x79d840, .byte = 0x3c },
		{ .addr = 0x79d841, .byte = 0x8f },
		{ .addr = 0x69fd7c, .byte = 0xf7 },
		{ .addr = 0x69fd7d, .byte = 0x1f }
};

static const SST_Transaction subb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6946170, .data = 38792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7985216, .data = 19, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6946172, .data = 63263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7985216, .data = 143, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_26[] = {
		{ .addr = 0xe4ccc8, .byte = 0x91 },
		{ .addr = 0xe4ccc9, .byte = 0x15 },
		{ .addr = 0xe4ccca, .byte = 0xbc },
		{ .addr = 0xe4cccb, .byte = 0xe3 },
		{ .addr = 0x49a252, .byte = 0x5c },
		{ .addr = 0x49a253, .byte = 0xba },
		{ .addr = 0xe4cccc, .byte = 0x04 },
		{ .addr = 0xe4cccd, .byte = 0x72 }
};

static const SST_RamByte subb_final_ram_26[] = {
		{ .addr = 0xe4ccc8, .byte = 0x91 },
		{ .addr = 0xe4ccc9, .byte = 0x15 },
		{ .addr = 0xe4ccca, .byte = 0xbc },
		{ .addr = 0xe4cccb, .byte = 0xe3 },
		{ .addr = 0x49a252, .byte = 0xdc },
		{ .addr = 0x49a253, .byte = 0xba },
		{ .addr = 0xe4cccc, .byte = 0x04 },
		{ .addr = 0xe4cccd, .byte = 0x72 }
};

static const SST_Transaction subb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4825682, .data = 23552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14994636, .data = 1138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4825682, .data = 56320, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_27[] = {
		{ .addr = 0x6f700a, .byte = 0x9a },
		{ .addr = 0x6f700b, .byte = 0x18 },
		{ .addr = 0x6f700c, .byte = 0x0d },
		{ .addr = 0x6f700d, .byte = 0xd2 },
		{ .addr = 0xc51558, .byte = 0x2a },
		{ .addr = 0xc51559, .byte = 0x08 },
		{ .addr = 0x6f700e, .byte = 0x87 },
		{ .addr = 0x6f700f, .byte = 0xa6 }
};

static const SST_RamByte subb_final_ram_27[] = {
		{ .addr = 0x6f700a, .byte = 0x9a },
		{ .addr = 0x6f700b, .byte = 0x18 },
		{ .addr = 0x6f700c, .byte = 0x0d },
		{ .addr = 0x6f700d, .byte = 0xd2 },
		{ .addr = 0xc51558, .byte = 0x2a },
		{ .addr = 0xc51559, .byte = 0x08 },
		{ .addr = 0x6f700e, .byte = 0x87 },
		{ .addr = 0x6f700f, .byte = 0xa6 }
};

static const SST_Transaction subb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12916056, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7303182, .data = 34726, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_28[] = {
		{ .addr = 0x2dab20, .byte = 0x5b },
		{ .addr = 0x2dab21, .byte = 0x18 },
		{ .addr = 0x2dab22, .byte = 0x77 },
		{ .addr = 0x2dab23, .byte = 0x97 },
		{ .addr = 0x96266c, .byte = 0xdc },
		{ .addr = 0x96266d, .byte = 0x16 },
		{ .addr = 0x2dab24, .byte = 0x6d },
		{ .addr = 0x2dab25, .byte = 0x3b }
};

static const SST_RamByte subb_final_ram_28[] = {
		{ .addr = 0x2dab20, .byte = 0x5b },
		{ .addr = 0x2dab21, .byte = 0x18 },
		{ .addr = 0x2dab22, .byte = 0x77 },
		{ .addr = 0x2dab23, .byte = 0x97 },
		{ .addr = 0x96266c, .byte = 0xdc },
		{ .addr = 0x96266d, .byte = 0x11 },
		{ .addr = 0x2dab24, .byte = 0x6d },
		{ .addr = 0x2dab25, .byte = 0x3b }
};

static const SST_Transaction subb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9840236, .data = 22, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2992932, .data = 27963, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9840236, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_29[] = {
		{ .addr = 0x837c4c, .byte = 0x59 },
		{ .addr = 0x837c4d, .byte = 0x35 },
		{ .addr = 0x837c4e, .byte = 0x9c },
		{ .addr = 0x837c4f, .byte = 0x51 },
		{ .addr = 0x837c50, .byte = 0x96 },
		{ .addr = 0x837c51, .byte = 0xe8 },
		{ .addr = 0x0a423a, .byte = 0xe0 },
		{ .addr = 0x0a423b, .byte = 0x3e },
		{ .addr = 0x837c52, .byte = 0x57 },
		{ .addr = 0x837c53, .byte = 0xb9 }
};

static const SST_RamByte subb_final_ram_29[] = {
		{ .addr = 0x837c4c, .byte = 0x59 },
		{ .addr = 0x837c4d, .byte = 0x35 },
		{ .addr = 0x837c4e, .byte = 0x9c },
		{ .addr = 0x837c4f, .byte = 0x51 },
		{ .addr = 0x837c50, .byte = 0x96 },
		{ .addr = 0x837c51, .byte = 0xe8 },
		{ .addr = 0x0a423a, .byte = 0xdc },
		{ .addr = 0x0a423b, .byte = 0x3e },
		{ .addr = 0x837c52, .byte = 0x57 },
		{ .addr = 0x837c53, .byte = 0xb9 }
};

static const SST_Transaction subb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8617040, .data = 38632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 672314, .data = 57344, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8617042, .data = 22457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 672314, .data = 56320, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_30[] = {
		{ .addr = 0xb30fc6, .byte = 0x92 },
		{ .addr = 0xb30fc7, .byte = 0x1a },
		{ .addr = 0xb30fc8, .byte = 0xa6 },
		{ .addr = 0xb30fc9, .byte = 0x7c },
		{ .addr = 0xd54570, .byte = 0x49 },
		{ .addr = 0xd54571, .byte = 0xd4 },
		{ .addr = 0xb30fca, .byte = 0x79 },
		{ .addr = 0xb30fcb, .byte = 0x3b }
};

static const SST_RamByte subb_final_ram_30[] = {
		{ .addr = 0xb30fc6, .byte = 0x92 },
		{ .addr = 0xb30fc7, .byte = 0x1a },
		{ .addr = 0xb30fc8, .byte = 0xa6 },
		{ .addr = 0xb30fc9, .byte = 0x7c },
		{ .addr = 0xd54570, .byte = 0x49 },
		{ .addr = 0xd54571, .byte = 0xd4 },
		{ .addr = 0xb30fca, .byte = 0x79 },
		{ .addr = 0xb30fcb, .byte = 0x3b }
};

static const SST_Transaction subb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13976944, .data = 18688, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11734986, .data = 31035, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subb_initial_ram_31[] = {
		{ .addr = 0xa3dd5e, .byte = 0x9a },
		{ .addr = 0xa3dd5f, .byte = 0x1a },
		{ .addr = 0xa3dd60, .byte = 0x93 },
		{ .addr = 0xa3dd61, .byte = 0x0c },
		{ .addr = 0xab97fa, .byte = 0x09 },
		{ .addr = 0xab97fb, .byte = 0xcc },
		{ .addr = 0xa3dd62, .byte = 0x17 },
		{ .addr = 0xa3dd63, .byte = 0x70 }
};

static const SST_RamByte subb_final_ram_31[] = {
		{ .addr = 0xa3dd5e, .byte = 0x9a },
		{ .addr = 0xa3dd5f, .byte = 0x1a },
		{ .addr = 0xa3dd60, .byte = 0x93 },
		{ .addr = 0xa3dd61, .byte = 0x0c },
		{ .addr = 0xab97fa, .byte = 0x09 },
		{ .addr = 0xab97fb, .byte = 0xcc },
		{ .addr = 0xa3dd62, .byte = 0x17 },
		{ .addr = 0xa3dd63, .byte = 0x70 }
};

static const SST_Transaction subb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11245562, .data = 2304, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10739042, .data = 6000, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase subb[] = {
	{
		.name = "000 SUB.b #, -(A0) 0420",
		.initial = {
			.regs = {
				3437425658, 626517206, 1000825843, 2316349802, 3604152426, 3851502031, 3394184782, 3053024384, 3296183512, 3819277623, 1780743123, 2905093333, 1460519341, 1613759537, 718903270, 2581670, 124124, 771, 12503382
			},
			.prefetch0 = 1056,
			.prefetch1 = 36645,
			.ram = subb_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3437425658, 626517206, 1000825843, 2316349802, 3604152426, 3851502031, 3394184782, 3053024384, 3296183511, 3819277623, 1780743123, 2905093333, 1460519341, 1613759537, 718903270, 2581670, 124124, 793, 12503386
			},
			.prefetch0 = 489,
			.prefetch1 = 16129,
			.ram = subb_final_ram_0,
			.ram_len = 10,
		},
		.transactions = subb_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 SUB.b -(A5), D2 9425",
		.initial = {
			.regs = {
				725318685, 1949999943, 3808045794, 753923180, 512483933, 1827965673, 3775938868, 419617130, 3793886732, 2324089528, 45630088, 123854938, 1348911414, 3994101816, 3519132045, 14675226, 5720206, 8222, 7436866
			},
			.prefetch0 = 37925,
			.prefetch1 = 51261,
			.ram = subb_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				725318685, 1949999943, 3808045819, 753923180, 512483933, 1827965673, 3775938868, 419617130, 3793886732, 2324089528, 45630088, 123854938, 1348911414, 3994101815, 3519132045, 14675226, 5720206, 8217, 7436868
			},
			.prefetch0 = 51261,
			.prefetch1 = 42200,
			.ram = subb_final_ram_1,
			.ram_len = 8,
		},
		.transactions = subb_transactions_1,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "002 SUB.b #, (d16, A2) 042a",
		.initial = {
			.regs = {
				3899675384, 1898217211, 45550339, 878169935, 3854980081, 3265226936, 770893099, 2207733841, 4266155096, 2176986459, 853325873, 760096608, 205078188, 3027688872, 3294388244, 15045292, 6301122, 8724, 10151880
			},
			.prefetch0 = 1066,
			.prefetch1 = 36787,
			.ram = subb_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3899675384, 1898217211, 45550339, 878169935, 3854980081, 3265226936, 770893099, 2207733841, 4266155096, 2176986459, 853325873, 760096608, 205078188, 3027688872, 3294388244, 15045292, 6301122, 8731, 10151886
			},
			.prefetch0 = 30105,
			.prefetch1 = 41001,
			.ram = subb_final_ram_2,
			.ram_len = 12,
		},
		.transactions = subb_transactions_2,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "003 SUB.b D5, (d8, A1, Xn) 9b31",
		.initial = {
			.regs = {
				3815261227, 2538515323, 1385853539, 3532096249, 4161081629, 1266142688, 96532046, 3474302676, 1878333394, 2576528301, 2406606833, 3849013344, 3198094248, 1770604593, 95692207, 3477738, 16678866, 42264, 11897914
			},
			.prefetch0 = 39729,
			.prefetch1 = 19995,
			.ram = subb_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3815261227, 2538515323, 1385853539, 3532096249, 4161081629, 1266142688, 96532046, 3474302676, 1878333394, 2576528301, 2406606833, 3849013344, 3198094248, 1770604593, 95692207, 3477738, 16678866, 42267, 11897918
			},
			.prefetch0 = 9083,
			.prefetch1 = 537,
			.ram = subb_final_ram_3,
			.ram_len = 10,
		},
		.transactions = subb_transactions_3,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "004 SUB.b D5, (A1) 9b11",
		.initial = {
			.regs = {
				2950306749, 591894473, 1825620127, 986947900, 3505190403, 1439555145, 356738662, 236978625, 2057271405, 3906902918, 726260836, 3934745482, 3015521511, 504962056, 2648057473, 2239032, 4600080, 1821, 14136046
			},
			.prefetch0 = 39697,
			.prefetch1 = 18795,
			.ram = subb_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2950306749, 591894473, 1825620127, 986947900, 3505190403, 1439555145, 356738662, 236978625, 2057271405, 3906902918, 726260836, 3934745482, 3015521511, 504962056, 2648057473, 2239032, 4600080, 1800, 14136048
			},
			.prefetch0 = 18795,
			.prefetch1 = 22719,
			.ram = subb_final_ram_4,
			.ram_len = 8,
		},
		.transactions = subb_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 SUB.b D5, -(A3) 9b23",
		.initial = {
			.regs = {
				3440846569, 681540319, 3078361720, 3027141257, 332935618, 3208821009, 2622263027, 3367838777, 3972528426, 4227363552, 896908476, 1158091006, 3106740480, 3446271619, 1415522216, 776058, 14507626, 520, 10222668
			},
			.prefetch0 = 39715,
			.prefetch1 = 8125,
			.ram = subb_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3440846569, 681540319, 3078361720, 3027141257, 332935618, 3208821009, 2622263027, 3367838777, 3972528426, 4227363552, 896908476, 1158091005, 3106740480, 3446271619, 1415522216, 776058, 14507626, 520, 10222670
			},
			.prefetch0 = 8125,
			.prefetch1 = 57509,
			.ram = subb_final_ram_5,
			.ram_len = 8,
		},
		.transactions = subb_transactions_5,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "006 SUB.b D7, (A4) 9f14",
		.initial = {
			.regs = {
				2599974568, 388116048, 3610596881, 4063577377, 2086057633, 1505461672, 1785854759, 3707040482, 3504727469, 1086958594, 2415234285, 3876905640, 2741610872, 2393749997, 1842792800, 16662968, 577920, 9988, 10088670
			},
			.prefetch0 = 40724,
			.prefetch1 = 52214,
			.ram = subb_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2599974568, 388116048, 3610596881, 4063577377, 2086057633, 1505461672, 1785854759, 3707040482, 3504727469, 1086958594, 2415234285, 3876905640, 2741610872, 2393749997, 1842792800, 16662968, 577920, 10001, 10088672
			},
			.prefetch0 = 52214,
			.prefetch1 = 64674,
			.ram = subb_final_ram_6,
			.ram_len = 8,
		},
		.transactions = subb_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 SUB.b D2, -(A2) 9522",
		.initial = {
			.regs = {
				3171666164, 3510045101, 3434801406, 4236610812, 3360538220, 2379941663, 4221395362, 3967985821, 1878036139, 3238813282, 4200070629, 2901375932, 1791158942, 548616446, 902063727, 2146602, 204796, 9474, 5970184
			},
			.prefetch0 = 38178,
			.prefetch1 = 3026,
			.ram = subb_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3171666164, 3510045101, 3434801406, 4236610812, 3360538220, 2379941663, 4221395362, 3967985821, 1878036139, 3238813282, 4200070628, 2901375932, 1791158942, 548616446, 902063727, 2146602, 204796, 9489, 5970186
			},
			.prefetch0 = 3026,
			.prefetch1 = 47967,
			.ram = subb_final_ram_7,
			.ram_len = 8,
		},
		.transactions = subb_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 SUB.b #, (d16, A5) 042d",
		.initial = {
			.regs = {
				2546160211, 1175255073, 4281524179, 2923418347, 163457573, 642224685, 78053493, 1651054386, 2491362751, 1819338914, 1878145720, 3326523103, 2129109156, 85826746, 1153522248, 1210064, 14473908, 42250, 10086606
			},
			.prefetch0 = 1069,
			.prefetch1 = 50195,
			.ram = subb_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2546160211, 1175255073, 4281524179, 2923418347, 163457573, 642224685, 78053493, 1651054386, 2491362751, 1819338914, 1878145720, 3326523103, 2129109156, 85826746, 1153522248, 1210064, 14473908, 42248, 10086612
			},
			.prefetch0 = 43465,
			.prefetch1 = 53444,
			.ram = subb_final_ram_8,
			.ram_len = 12,
		},
		.transactions = subb_transactions_8,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "009 SUB.b -(A7), D4 9827",
		.initial = {
			.regs = {
				80473964, 883763529, 417043130, 2508417837, 4173245520, 1172769512, 2598682195, 3114947076, 3521434307, 1393818172, 2125154864, 2674778119, 3067382337, 3184391583, 411589338, 12349262, 11868556, 41987, 8979256
			},
			.prefetch0 = 38951,
			.prefetch1 = 58760,
			.ram = subb_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				80473964, 883763529, 417043130, 2508417837, 4173245646, 1172769512, 2598682195, 3114947076, 3521434307, 1393818172, 2125154864, 2674778119, 3067382337, 3184391583, 411589338, 12349262, 11868554, 42011, 8979258
			},
			.prefetch0 = 58760,
			.prefetch1 = 46242,
			.ram = subb_final_ram_9,
			.ram_len = 8,
		},
		.transactions = subb_transactions_9,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "010 SUB.b (d16, A5), D7 9e2d",
		.initial = {
			.regs = {
				250785711, 466896671, 2887079154, 808708424, 1307106657, 1800642613, 754594143, 3516240441, 2651305597, 4025156636, 4249560232, 3001469230, 677849495, 4277145516, 1056729136, 14100158, 16306172, 42512, 13349008
			},
			.prefetch0 = 40493,
			.prefetch1 = 56615,
			.ram = subb_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				250785711, 466896671, 2887079154, 808708424, 1307106657, 1800642613, 754594143, 3516240605, 2651305597, 4025156636, 4249560232, 3001469230, 677849495, 4277145516, 1056729136, 14100158, 16306172, 42521, 13349012
			},
			.prefetch0 = 40745,
			.prefetch1 = 17040,
			.ram = subb_final_ram_10,
			.ram_len = 10,
		},
		.transactions = subb_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 SUB.b D0, (d8, A1, Xn) 9131",
		.initial = {
			.regs = {
				1102879657, 2452713564, 3006576503, 3091401734, 1093846290, 4292689087, 1612692931, 2662482316, 2640493549, 3515258093, 1177576308, 666589939, 2678856991, 3307821883, 3802639963, 4516696, 8101758, 1289, 11448816
			},
			.prefetch0 = 37169,
			.prefetch1 = 34314,
			.ram = subb_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1102879657, 2452713564, 3006576503, 3091401734, 1093846290, 4292689087, 1612692931, 2662482316, 2640493549, 3515258093, 1177576308, 666589939, 2678856991, 3307821883, 3802639963, 4516696, 8101758, 1297, 11448820
			},
			.prefetch0 = 39492,
			.prefetch1 = 42588,
			.ram = subb_final_ram_11,
			.ram_len = 10,
		},
		.transactions = subb_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 SUB.b D6, (A0)+ 9d18",
		.initial = {
			.regs = {
				521253990, 2194248797, 4044573784, 959795406, 2260104155, 1339189586, 3514022811, 165942999, 429628577, 2300540398, 3863544216, 3697588329, 1872937293, 2064948143, 1243263674, 16467518, 9432282, 1038, 12039194
			},
			.prefetch0 = 40216,
			.prefetch1 = 51818,
			.ram = subb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				521253990, 2194248797, 4044573784, 959795406, 2260104155, 1339189586, 3514022811, 165942999, 429628578, 2300540398, 3863544216, 3697588329, 1872937293, 2064948143, 1243263674, 16467518, 9432282, 1024, 12039196
			},
			.prefetch0 = 51818,
			.prefetch1 = 26454,
			.ram = subb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = subb_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 SUB.b D0, -(A2) 9122",
		.initial = {
			.regs = {
				849557076, 3589508916, 1246944733, 2215135317, 4017193282, 2636871666, 2779484676, 2650981481, 1937125504, 1341972315, 602549523, 1146240699, 708080503, 1191299050, 1736910942, 13867138, 15306878, 9503, 9666088
			},
			.prefetch0 = 37154,
			.prefetch1 = 53562,
			.ram = subb_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				849557076, 3589508916, 1246944733, 2215135317, 4017193282, 2636871666, 2779484676, 2650981481, 1937125504, 1341972315, 602549522, 1146240699, 708080503, 1191299050, 1736910942, 13867138, 15306878, 9480, 9666090
			},
			.prefetch0 = 53562,
			.prefetch1 = 49433,
			.ram = subb_final_ram_13,
			.ram_len = 8,
		},
		.transactions = subb_transactions_13,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "014 SUB.b D6, (A0)+ 9d18",
		.initial = {
			.regs = {
				996650653, 2605491365, 1798586131, 3804356385, 2856241511, 856864982, 1019562070, 1159623427, 102923495, 1250780808, 2730123458, 2103922029, 1684806742, 4021095081, 3172220666, 11206008, 4224102, 1555, 13114074
			},
			.prefetch0 = 40216,
			.prefetch1 = 21989,
			.ram = subb_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				996650653, 2605491365, 1798586131, 3804356385, 2856241511, 856864982, 1019562070, 1159623427, 102923496, 1250780808, 2730123458, 2103922029, 1684806742, 4021095081, 3172220666, 11206008, 4224102, 1561, 13114076
			},
			.prefetch0 = 21989,
			.prefetch1 = 33362,
			.ram = subb_final_ram_14,
			.ram_len = 8,
		},
		.transactions = subb_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 SUB.b 5, D7 5b07",
		.initial = {
			.regs = {
				1868814837, 2870296230, 283866153, 3899680388, 1741471526, 3853375692, 686618757, 1824850536, 2945593425, 3354698958, 3994432558, 2857135543, 4063398771, 2757016966, 4209663247, 11819736, 13277038, 1029, 6291096
			},
			.prefetch0 = 23303,
			.prefetch1 = 28595,
			.ram = subb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1868814837, 2870296230, 283866153, 3899680388, 1741471526, 3853375692, 686618757, 1824850531, 2945593425, 3354698958, 3994432558, 2857135543, 4063398771, 2757016966, 4209663247, 11819736, 13277038, 1024, 6291098
			},
			.prefetch0 = 28595,
			.prefetch1 = 15733,
			.ram = subb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = subb_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "016 SUB.b (A4)+, D2 941c",
		.initial = {
			.regs = {
				405339202, 721459783, 2246786506, 456228263, 1009388431, 573065607, 2118043601, 1353694140, 1949914747, 193207202, 3123597860, 2993152228, 1792217886, 1034337659, 1968611764, 1729254, 11921628, 40984, 2157458
			},
			.prefetch0 = 37916,
			.prefetch1 = 41145,
			.ram = subb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				405339202, 721459783, 2246786346, 456228263, 1009388431, 573065607, 2118043601, 1353694140, 1949914747, 193207202, 3123597860, 2993152228, 1792217887, 1034337659, 1968611764, 1729254, 11921628, 40960, 2157460
			},
			.prefetch0 = 41145,
			.prefetch1 = 5943,
			.ram = subb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = subb_transactions_16,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "017 SUB.b 8, (d16, A1) 5129",
		.initial = {
			.regs = {
				3548757081, 3830117804, 218868520, 697730323, 168182883, 3007238960, 398124622, 2307580468, 695917002, 3786469911, 3081977874, 2944013593, 2332599860, 3111933496, 162564569, 14286100, 8753524, 42769, 11933224
			},
			.prefetch0 = 20777,
			.prefetch1 = 53217,
			.ram = subb_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3548757081, 3830117804, 218868520, 697730323, 168182883, 3007238960, 398124622, 2307580468, 695917002, 3786469911, 3081977874, 2944013593, 2332599860, 3111933496, 162564569, 14286100, 8753524, 42752, 11933228
			},
			.prefetch0 = 44586,
			.prefetch1 = 5864,
			.ram = subb_final_ram_17,
			.ram_len = 10,
		},
		.transactions = subb_transactions_17,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "018 SUB.b -(A5), D5 9a25",
		.initial = {
			.regs = {
				542380294, 3028383969, 570074630, 3061934285, 880054340, 4013904713, 2085596863, 592644911, 3343325119, 2367365648, 3803858416, 2979236586, 953451017, 3619699748, 1589775875, 14816720, 4556286, 274, 13085488
			},
			.prefetch0 = 39461,
			.prefetch1 = 39,
			.ram = subb_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				542380294, 3028383969, 570074630, 3061934285, 880054340, 4013904877, 2085596863, 592644911, 3343325119, 2367365648, 3803858416, 2979236586, 953451017, 3619699747, 1589775875, 14816720, 4556286, 281, 13085490
			},
			.prefetch0 = 39,
			.prefetch1 = 49197,
			.ram = subb_final_ram_18,
			.ram_len = 8,
		},
		.transactions = subb_transactions_18,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "019 SUB.b 3, (d8, A6, Xn) 5736",
		.initial = {
			.regs = {
				2967798864, 1308724162, 2482423466, 3794373443, 451363482, 569363515, 30212580, 746809489, 1177737905, 3051837232, 1891372856, 759639964, 759630122, 2176005221, 2401463376, 10360712, 10723184, 40966, 7211752
			},
			.prefetch0 = 22326,
			.prefetch1 = 26549,
			.ram = subb_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2967798864, 1308724162, 2482423466, 3794373443, 451363482, 569363515, 30212580, 746809489, 1177737905, 3051837232, 1891372856, 759639964, 759630122, 2176005221, 2401463376, 10360712, 10723184, 40960, 7211756
			},
			.prefetch0 = 16368,
			.prefetch1 = 6127,
			.ram = subb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = subb_transactions_19,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "020 SUB.b D1, (A7) 9317",
		.initial = {
			.regs = {
				826785375, 2421435340, 3825352668, 1687704120, 1418737703, 786446225, 2831511891, 2079356009, 3651105798, 74738885, 1689515559, 4178289618, 4134377041, 3588804820, 2745036597, 6212696, 14291466, 1310, 13680530
			},
			.prefetch0 = 37655,
			.prefetch1 = 63545,
			.ram = subb_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				826785375, 2421435340, 3825352668, 1687704120, 1418737703, 786446225, 2831511891, 2079356009, 3651105798, 74738885, 1689515559, 4178289618, 4134377041, 3588804820, 2745036597, 6212696, 14291466, 1280, 13680532
			},
			.prefetch0 = 63545,
			.prefetch1 = 42889,
			.ram = subb_final_ram_20,
			.ram_len = 8,
		},
		.transactions = subb_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 SUB.b #, D0 903c",
		.initial = {
			.regs = {
				894784960, 1453659923, 2615191439, 3564755487, 684962013, 1682046329, 919334260, 3300733936, 3795946083, 3784685045, 413977855, 249422133, 1248499091, 14047193, 3361156976, 13215030, 12487298, 41732, 15382048
			},
			.prefetch0 = 36924,
			.prefetch1 = 50087,
			.ram = subb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				894784793, 1453659923, 2615191439, 3564755487, 684962013, 1682046329, 919334260, 3300733936, 3795946083, 3784685045, 413977855, 249422133, 1248499091, 14047193, 3361156976, 13215030, 12487298, 41728, 15382052
			},
			.prefetch0 = 17112,
			.prefetch1 = 1790,
			.ram = subb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = subb_transactions_21,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "022 SUB.b 4, (A1)+ 5919",
		.initial = {
			.regs = {
				3605741876, 1546995234, 2487433988, 2270330901, 810104715, 1276808885, 659813273, 1311714503, 120002117, 1016331972, 3832232301, 2317649592, 1191914787, 3771137285, 4230895713, 11865436, 8144494, 41227, 5399542
			},
			.prefetch0 = 22809,
			.prefetch1 = 42971,
			.ram = subb_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3605741876, 1546995234, 2487433988, 2270330901, 810104715, 1276808885, 659813273, 1311714503, 120002117, 1016331973, 3832232301, 2317649592, 1191914787, 3771137285, 4230895713, 11865436, 8144494, 41224, 5399544
			},
			.prefetch0 = 42971,
			.prefetch1 = 45692,
			.ram = subb_final_ram_22,
			.ram_len = 8,
		},
		.transactions = subb_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 SUB.b D5, (A3) 9b13",
		.initial = {
			.regs = {
				3080554173, 2186871347, 2735644196, 751717441, 2390229623, 3889416110, 1030461877, 1645284191, 3216832686, 3315738290, 4283927188, 3377406024, 2803777919, 2979285325, 2647491510, 11653634, 13224858, 34330, 8838392
			},
			.prefetch0 = 39699,
			.prefetch1 = 7501,
			.ram = subb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3080554173, 2186871347, 2735644196, 751717441, 2390229623, 3889416110, 1030461877, 1645284191, 3216832686, 3315738290, 4283927188, 3377406024, 2803777919, 2979285325, 2647491510, 11653634, 13224858, 34331, 8838394
			},
			.prefetch0 = 7501,
			.prefetch1 = 59265,
			.ram = subb_final_ram_23,
			.ram_len = 8,
		},
		.transactions = subb_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 SUB.b (d16, A6), D5 9a2e",
		.initial = {
			.regs = {
				2933790537, 818380581, 2784823635, 1723622663, 889810502, 3666765489, 2768816689, 1498820570, 1811803925, 695268918, 3431057844, 2013925914, 1218063974, 3289666573, 548541311, 1085996, 16404812, 42758, 5045650
			},
			.prefetch0 = 39470,
			.prefetch1 = 720,
			.ram = subb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2933790537, 818380581, 2784823635, 1723622663, 889810502, 3666765313, 2768816689, 1498820570, 1811803925, 695268918, 3431057844, 2013925914, 1218063974, 3289666573, 548541311, 1085996, 16404812, 42752, 5045654
			},
			.prefetch0 = 16544,
			.prefetch1 = 9243,
			.ram = subb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = subb_transactions_24,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "025 SUB.b D6, (d16, A2) 9d2a",
		.initial = {
			.regs = {
				3850640021, 432992037, 1105290653, 3160056181, 1562424175, 1816297800, 3303062404, 695327331, 1981501513, 2694467777, 1081756386, 1571618550, 1570829063, 3536752595, 497182422, 9855440, 12089150, 34068, 6946170
			},
			.prefetch0 = 40234,
			.prefetch1 = 36191,
			.ram = subb_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3850640021, 432992037, 1105290653, 3160056181, 1562424175, 1816297800, 3303062404, 695327331, 1981501513, 2694467777, 1081756386, 1571618550, 1570829063, 3536752595, 497182422, 9855440, 12089150, 34075, 6946174
			},
			.prefetch0 = 38792,
			.prefetch1 = 63263,
			.ram = subb_final_ram_25,
			.ram_len = 10,
		},
		.transactions = subb_transactions_25,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "026 SUB.b D0, (A5) 9115",
		.initial = {
			.regs = {
				2592666240, 1523859323, 879434601, 1929269123, 1036465542, 2050042529, 23551338, 3265789604, 1638026625, 124280883, 4004258855, 3085723526, 2955264417, 3528041042, 3873229276, 12923772, 2476090, 42000, 14994636
			},
			.prefetch0 = 37141,
			.prefetch1 = 48355,
			.ram = subb_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2592666240, 1523859323, 879434601, 1929269123, 1036465542, 2050042529, 23551338, 3265789604, 1638026625, 124280883, 4004258855, 3085723526, 2955264417, 3528041042, 3873229276, 12923772, 2476090, 42011, 14994638
			},
			.prefetch0 = 48355,
			.prefetch1 = 1138,
			.ram = subb_final_ram_26,
			.ram_len = 8,
		},
		.transactions = subb_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 SUB.b (A0)+, D5 9a18",
		.initial = {
			.regs = {
				2528475244, 391247248, 2972021389, 3037097723, 4050252893, 125202698, 191092672, 1063755495, 1220875609, 1168470350, 1215804297, 3708461206, 2894958697, 1439497025, 2006668616, 5344566, 711758, 42009, 7303182
			},
			.prefetch0 = 39448,
			.prefetch1 = 3538,
			.ram = subb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2528475244, 391247248, 2972021389, 3037097723, 4050252893, 125202690, 191092672, 1063755495, 1220875610, 1168470350, 1215804297, 3708461206, 2894958697, 1439497025, 2006668616, 5344566, 711758, 41984, 7303184
			},
			.prefetch0 = 3538,
			.prefetch1 = 34726,
			.ram = subb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = subb_transactions_27,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "028 SUB.b 5, (A0)+ 5b18",
		.initial = {
			.regs = {
				1784973023, 1219055800, 3539970457, 2829931645, 3844930891, 3547783331, 3461428534, 473051009, 2392204909, 2829975040, 2150137491, 269260242, 3395489299, 528452098, 2388788778, 3307252, 14225472, 8706, 2992932
			},
			.prefetch0 = 23320,
			.prefetch1 = 30615,
			.ram = subb_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1784973023, 1219055800, 3539970457, 2829931645, 3844930891, 3547783331, 3461428534, 473051009, 2392204910, 2829975040, 2150137491, 269260242, 3395489299, 528452098, 2388788778, 3307252, 14225472, 8704, 2992934
			},
			.prefetch0 = 30615,
			.prefetch1 = 27963,
			.ram = subb_final_ram_28,
			.ram_len = 8,
		},
		.transactions = subb_transactions_28,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "029 SUB.b 4, (d8, A5, Xn) 5935",
		.initial = {
			.regs = {
				1531968676, 3428666237, 1117404409, 3014751651, 2254880222, 3560990274, 3812330001, 2374106378, 3434456930, 2208658137, 1750488129, 3316071224, 3804494665, 2556743440, 1680651332, 8373434, 2782448, 8476, 8617040
			},
			.prefetch0 = 22837,
			.prefetch1 = 40017,
			.ram = subb_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1531968676, 3428666237, 1117404409, 3014751651, 2254880222, 3560990274, 3812330001, 2374106378, 3434456930, 2208658137, 1750488129, 3316071224, 3804494665, 2556743440, 1680651332, 8373434, 2782448, 8456, 8617044
			},
			.prefetch0 = 38632,
			.prefetch1 = 22457,
			.ram = subb_final_ram_29,
			.ram_len = 10,
		},
		.transactions = subb_transactions_29,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "030 SUB.b (A2)+, D1 921a",
		.initial = {
			.regs = {
				4189522853, 3672997589, 246861738, 374803129, 658098830, 24956356, 3263901689, 264973087, 4217808632, 1951558159, 416630128, 930636646, 2157204450, 1833258935, 3601319160, 5051066, 14234004, 1049, 11734986
			},
			.prefetch0 = 37402,
			.prefetch1 = 42620,
			.ram = subb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4189522853, 3672997516, 246861738, 374803129, 658098830, 24956356, 3263901689, 264973087, 4217808632, 1951558159, 416630129, 930636646, 2157204450, 1833258935, 3601319160, 5051066, 14234004, 1032, 11734988
			},
			.prefetch0 = 42620,
			.prefetch1 = 31035,
			.ram = subb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = subb_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 SUB.b (A2)+, D5 9a1a",
		.initial = {
			.regs = {
				3148102257, 4005546809, 2645097889, 356271137, 2583024068, 1282358361, 336589842, 2913214693, 2720062125, 2042180765, 2427164666, 1096986815, 1732460481, 3265578442, 1465867524, 1342182, 10061956, 34573, 10739042
			},
			.prefetch0 = 39450,
			.prefetch1 = 37644,
			.ram = subb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3148102257, 4005546809, 2645097889, 356271137, 2583024068, 1282358352, 336589842, 2913214693, 2720062125, 2042180765, 2427164667, 1096986815, 1732460481, 3265578442, 1465867524, 1342182, 10061956, 34560, 10739044
			},
			.prefetch0 = 37644,
			.prefetch1 = 6000,
			.ram = subb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = subb_transactions_31,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_SUBB_H */