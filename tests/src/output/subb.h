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

const uint32_t SUBB_TEST_COUNT = 16;
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
};

#endif /* RBT_SUBB_H */