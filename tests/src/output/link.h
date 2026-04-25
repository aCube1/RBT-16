#ifndef RBT_LINK_H
#define RBT_LINK_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte link_initial_ram_0[] = {
		{ .addr = 0x5a6ea2, .byte = 0x4e },
		{ .addr = 0x5a6ea3, .byte = 0x51 },
		{ .addr = 0x5a6ea4, .byte = 0x53 },
		{ .addr = 0x5a6ea5, .byte = 0xdd },
		{ .addr = 0x5a6ea6, .byte = 0x44 },
		{ .addr = 0x5a6ea7, .byte = 0x4d },
		{ .addr = 0x5a6ea8, .byte = 0xa9 },
		{ .addr = 0x5a6ea9, .byte = 0x3a }
};

static const SST_RamByte link_final_ram_0[] = {
		{ .addr = 0x5a6ea2, .byte = 0x4e },
		{ .addr = 0x5a6ea3, .byte = 0x51 },
		{ .addr = 0x5a6ea4, .byte = 0x53 },
		{ .addr = 0x5a6ea5, .byte = 0xdd },
		{ .addr = 0x5a6ea6, .byte = 0x44 },
		{ .addr = 0x5a6ea7, .byte = 0x4d },
		{ .addr = 0x2c8bfa, .byte = 0x8b },
		{ .addr = 0x2c8bfb, .byte = 0xbc },
		{ .addr = 0x2c8bfc, .byte = 0x3a },
		{ .addr = 0x2c8bfd, .byte = 0xd7 },
		{ .addr = 0x5a6ea8, .byte = 0xa9 },
		{ .addr = 0x5a6ea9, .byte = 0x3a }
};

static const SST_Transaction link_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5926566, .data = 17485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2919418, .data = 35772, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2919420, .data = 15063, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5926568, .data = 43322, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_1[] = {
		{ .addr = 0x8a2c0a, .byte = 0x4e },
		{ .addr = 0x8a2c0b, .byte = 0x51 },
		{ .addr = 0x8a2c0c, .byte = 0x8e },
		{ .addr = 0x8a2c0d, .byte = 0xe5 },
		{ .addr = 0x8a2c0e, .byte = 0xbe },
		{ .addr = 0x8a2c0f, .byte = 0xcc },
		{ .addr = 0x8a2c10, .byte = 0x79 },
		{ .addr = 0x8a2c11, .byte = 0x7a }
};

static const SST_RamByte link_final_ram_1[] = {
		{ .addr = 0x8a2c0a, .byte = 0x4e },
		{ .addr = 0x8a2c0b, .byte = 0x51 },
		{ .addr = 0x8a2c0c, .byte = 0x8e },
		{ .addr = 0x8a2c0d, .byte = 0xe5 },
		{ .addr = 0x8a2c0e, .byte = 0xbe },
		{ .addr = 0x8a2c0f, .byte = 0xcc },
		{ .addr = 0x50e33a, .byte = 0x51 },
		{ .addr = 0x50e33b, .byte = 0x54 },
		{ .addr = 0x50e33c, .byte = 0x31 },
		{ .addr = 0x50e33d, .byte = 0x89 },
		{ .addr = 0x8a2c10, .byte = 0x79 },
		{ .addr = 0x8a2c11, .byte = 0x7a }
};

static const SST_Transaction link_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9055246, .data = 48844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5301050, .data = 20820, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5301052, .data = 12681, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9055248, .data = 31098, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_2[] = {
		{ .addr = 0x3fe0ec, .byte = 0x4e },
		{ .addr = 0x3fe0ed, .byte = 0x53 },
		{ .addr = 0x3fe0ee, .byte = 0xbb },
		{ .addr = 0x3fe0ef, .byte = 0x65 },
		{ .addr = 0x3fe0f0, .byte = 0xd3 },
		{ .addr = 0x3fe0f1, .byte = 0x8e },
		{ .addr = 0x3fe0f2, .byte = 0xe2 },
		{ .addr = 0x3fe0f3, .byte = 0xfc }
};

static const SST_RamByte link_final_ram_2[] = {
		{ .addr = 0x3fe0ec, .byte = 0x4e },
		{ .addr = 0x3fe0ed, .byte = 0x53 },
		{ .addr = 0x3fe0ee, .byte = 0xbb },
		{ .addr = 0x3fe0ef, .byte = 0x65 },
		{ .addr = 0x3fe0f0, .byte = 0xd3 },
		{ .addr = 0x3fe0f1, .byte = 0x8e },
		{ .addr = 0x358ce8, .byte = 0x54 },
		{ .addr = 0x358ce9, .byte = 0xe4 },
		{ .addr = 0x358cea, .byte = 0x65 },
		{ .addr = 0x358ceb, .byte = 0xd6 },
		{ .addr = 0x3fe0f2, .byte = 0xe2 },
		{ .addr = 0x3fe0f3, .byte = 0xfc }
};

static const SST_Transaction link_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4186352, .data = 54158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3509480, .data = 21732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3509482, .data = 26070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4186354, .data = 58108, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_3[] = {
		{ .addr = 0xfd424a, .byte = 0x4e },
		{ .addr = 0xfd424b, .byte = 0x51 },
		{ .addr = 0xfd424c, .byte = 0xb7 },
		{ .addr = 0xfd424d, .byte = 0x2a },
		{ .addr = 0xfd424e, .byte = 0xb6 },
		{ .addr = 0xfd424f, .byte = 0xd0 },
		{ .addr = 0xfd4250, .byte = 0x74 },
		{ .addr = 0xfd4251, .byte = 0x98 }
};

static const SST_RamByte link_final_ram_3[] = {
		{ .addr = 0xfd424a, .byte = 0x4e },
		{ .addr = 0xfd424b, .byte = 0x51 },
		{ .addr = 0xfd424c, .byte = 0xb7 },
		{ .addr = 0xfd424d, .byte = 0x2a },
		{ .addr = 0xfd424e, .byte = 0xb6 },
		{ .addr = 0xfd424f, .byte = 0xd0 },
		{ .addr = 0x21a5a8, .byte = 0xad },
		{ .addr = 0x21a5a9, .byte = 0x2a },
		{ .addr = 0x21a5aa, .byte = 0x5c },
		{ .addr = 0x21a5ab, .byte = 0xdf },
		{ .addr = 0xfd4250, .byte = 0x74 },
		{ .addr = 0xfd4251, .byte = 0x98 }
};

static const SST_Transaction link_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16597582, .data = 46800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2205096, .data = 44330, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2205098, .data = 23775, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16597584, .data = 29848, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_4[] = {
		{ .addr = 0x21b1f2, .byte = 0x4e },
		{ .addr = 0x21b1f3, .byte = 0x51 },
		{ .addr = 0x21b1f4, .byte = 0x4d },
		{ .addr = 0x21b1f5, .byte = 0xd1 },
		{ .addr = 0x21b1f6, .byte = 0xd1 },
		{ .addr = 0x21b1f7, .byte = 0x0d },
		{ .addr = 0x21b1f8, .byte = 0x04 },
		{ .addr = 0x21b1f9, .byte = 0xb6 }
};

static const SST_RamByte link_final_ram_4[] = {
		{ .addr = 0x21b1f2, .byte = 0x4e },
		{ .addr = 0x21b1f3, .byte = 0x51 },
		{ .addr = 0x21b1f4, .byte = 0x4d },
		{ .addr = 0x21b1f5, .byte = 0xd1 },
		{ .addr = 0x21b1f6, .byte = 0xd1 },
		{ .addr = 0x21b1f7, .byte = 0x0d },
		{ .addr = 0x4dc69e, .byte = 0xef },
		{ .addr = 0x4dc69f, .byte = 0x22 },
		{ .addr = 0x4dc6a0, .byte = 0xd2 },
		{ .addr = 0x4dc6a1, .byte = 0xff },
		{ .addr = 0x21b1f8, .byte = 0x04 },
		{ .addr = 0x21b1f9, .byte = 0xb6 }
};

static const SST_Transaction link_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2208246, .data = 53517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5097118, .data = 61218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5097120, .data = 54015, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2208248, .data = 1206, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_5[] = {
		{ .addr = 0xaade92, .byte = 0x4e },
		{ .addr = 0xaade93, .byte = 0x55 },
		{ .addr = 0xaade94, .byte = 0x43 },
		{ .addr = 0xaade95, .byte = 0x75 },
		{ .addr = 0xaade96, .byte = 0xc3 },
		{ .addr = 0xaade97, .byte = 0x93 },
		{ .addr = 0xaade98, .byte = 0x52 },
		{ .addr = 0xaade99, .byte = 0x33 }
};

static const SST_RamByte link_final_ram_5[] = {
		{ .addr = 0xaade92, .byte = 0x4e },
		{ .addr = 0xaade93, .byte = 0x55 },
		{ .addr = 0xaade94, .byte = 0x43 },
		{ .addr = 0xaade95, .byte = 0x75 },
		{ .addr = 0xaade96, .byte = 0xc3 },
		{ .addr = 0xaade97, .byte = 0x93 },
		{ .addr = 0x569092, .byte = 0xb7 },
		{ .addr = 0x569093, .byte = 0xd3 },
		{ .addr = 0x569094, .byte = 0x18 },
		{ .addr = 0x569095, .byte = 0xa6 },
		{ .addr = 0xaade98, .byte = 0x52 },
		{ .addr = 0xaade99, .byte = 0x33 }
};

static const SST_Transaction link_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11198102, .data = 50067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5673106, .data = 47059, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5673108, .data = 6310, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11198104, .data = 21043, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_6[] = {
		{ .addr = 0x85cf0c, .byte = 0x4e },
		{ .addr = 0x85cf0d, .byte = 0x52 },
		{ .addr = 0x85cf0e, .byte = 0xf9 },
		{ .addr = 0x85cf0f, .byte = 0x2a },
		{ .addr = 0x85cf10, .byte = 0x9e },
		{ .addr = 0x85cf11, .byte = 0xe1 },
		{ .addr = 0x85cf12, .byte = 0x15 },
		{ .addr = 0x85cf13, .byte = 0x9e }
};

static const SST_RamByte link_final_ram_6[] = {
		{ .addr = 0x85cf0c, .byte = 0x4e },
		{ .addr = 0x85cf0d, .byte = 0x52 },
		{ .addr = 0x85cf0e, .byte = 0xf9 },
		{ .addr = 0x85cf0f, .byte = 0x2a },
		{ .addr = 0x85cf10, .byte = 0x9e },
		{ .addr = 0x85cf11, .byte = 0xe1 },
		{ .addr = 0xd2c8ba, .byte = 0xdc },
		{ .addr = 0xd2c8bb, .byte = 0xde },
		{ .addr = 0xd2c8bc, .byte = 0x82 },
		{ .addr = 0xd2c8bd, .byte = 0x2b },
		{ .addr = 0x85cf12, .byte = 0x15 },
		{ .addr = 0x85cf13, .byte = 0x9e }
};

static const SST_Transaction link_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8769296, .data = 40673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13813946, .data = 56542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13813948, .data = 33323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8769298, .data = 5534, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_7[] = {
		{ .addr = 0xabd7c0, .byte = 0x4e },
		{ .addr = 0xabd7c1, .byte = 0x55 },
		{ .addr = 0xabd7c2, .byte = 0x0b },
		{ .addr = 0xabd7c3, .byte = 0x18 },
		{ .addr = 0xabd7c4, .byte = 0xd9 },
		{ .addr = 0xabd7c5, .byte = 0xf5 },
		{ .addr = 0xabd7c6, .byte = 0x30 },
		{ .addr = 0xabd7c7, .byte = 0x7d }
};

static const SST_RamByte link_final_ram_7[] = {
		{ .addr = 0xabd7c0, .byte = 0x4e },
		{ .addr = 0xabd7c1, .byte = 0x55 },
		{ .addr = 0xabd7c2, .byte = 0x0b },
		{ .addr = 0xabd7c3, .byte = 0x18 },
		{ .addr = 0xabd7c4, .byte = 0xd9 },
		{ .addr = 0xabd7c5, .byte = 0xf5 },
		{ .addr = 0x5c3cd0, .byte = 0x5c },
		{ .addr = 0x5c3cd1, .byte = 0x42 },
		{ .addr = 0x5c3cd2, .byte = 0xd4 },
		{ .addr = 0x5c3cd3, .byte = 0xbe },
		{ .addr = 0xabd7c6, .byte = 0x30 },
		{ .addr = 0xabd7c7, .byte = 0x7d }
};

static const SST_Transaction link_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11261892, .data = 55797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6044880, .data = 23618, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6044882, .data = 54462, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11261894, .data = 12413, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_8[] = {
		{ .addr = 0xa143f8, .byte = 0x4e },
		{ .addr = 0xa143f9, .byte = 0x51 },
		{ .addr = 0xa143fa, .byte = 0x41 },
		{ .addr = 0xa143fb, .byte = 0xbb },
		{ .addr = 0xa143fc, .byte = 0xd5 },
		{ .addr = 0xa143fd, .byte = 0x7a },
		{ .addr = 0xa143fe, .byte = 0x40 },
		{ .addr = 0xa143ff, .byte = 0xe2 }
};

static const SST_RamByte link_final_ram_8[] = {
		{ .addr = 0xa143f8, .byte = 0x4e },
		{ .addr = 0xa143f9, .byte = 0x51 },
		{ .addr = 0xa143fa, .byte = 0x41 },
		{ .addr = 0xa143fb, .byte = 0xbb },
		{ .addr = 0xa143fc, .byte = 0xd5 },
		{ .addr = 0xa143fd, .byte = 0x7a },
		{ .addr = 0xe92d2e, .byte = 0xca },
		{ .addr = 0xe92d2f, .byte = 0x43 },
		{ .addr = 0xe92d30, .byte = 0x71 },
		{ .addr = 0xe92d31, .byte = 0xa7 },
		{ .addr = 0xa143fe, .byte = 0x40 },
		{ .addr = 0xa143ff, .byte = 0xe2 }
};

static const SST_Transaction link_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10568700, .data = 54650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15281454, .data = 51779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15281456, .data = 29095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10568702, .data = 16610, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_9[] = {
		{ .addr = 0x1e19e8, .byte = 0x4e },
		{ .addr = 0x1e19e9, .byte = 0x57 },
		{ .addr = 0x1e19ea, .byte = 0xf6 },
		{ .addr = 0x1e19eb, .byte = 0x72 },
		{ .addr = 0x1e19ec, .byte = 0x10 },
		{ .addr = 0x1e19ed, .byte = 0x57 },
		{ .addr = 0x1e19ee, .byte = 0x5a },
		{ .addr = 0x1e19ef, .byte = 0x25 }
};

static const SST_RamByte link_final_ram_9[] = {
		{ .addr = 0x1e19e8, .byte = 0x4e },
		{ .addr = 0x1e19e9, .byte = 0x57 },
		{ .addr = 0x1e19ea, .byte = 0xf6 },
		{ .addr = 0x1e19eb, .byte = 0x72 },
		{ .addr = 0x1e19ec, .byte = 0x10 },
		{ .addr = 0x1e19ed, .byte = 0x57 },
		{ .addr = 0xf4a38c, .byte = 0x00 },
		{ .addr = 0xf4a38d, .byte = 0xf4 },
		{ .addr = 0xf4a38e, .byte = 0xa3 },
		{ .addr = 0xf4a38f, .byte = 0x90 },
		{ .addr = 0x1e19ee, .byte = 0x5a },
		{ .addr = 0x1e19ef, .byte = 0x25 }
};

static const SST_Transaction link_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1972716, .data = 4183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16032652, .data = 244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16032654, .data = 41872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1972718, .data = 23077, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_10[] = {
		{ .addr = 0x3de180, .byte = 0x4e },
		{ .addr = 0x3de181, .byte = 0x55 },
		{ .addr = 0x3de182, .byte = 0x52 },
		{ .addr = 0x3de183, .byte = 0xf0 },
		{ .addr = 0x3de184, .byte = 0x06 },
		{ .addr = 0x3de185, .byte = 0x4c },
		{ .addr = 0x3de186, .byte = 0x2d },
		{ .addr = 0x3de187, .byte = 0x4a }
};

static const SST_RamByte link_final_ram_10[] = {
		{ .addr = 0x3de180, .byte = 0x4e },
		{ .addr = 0x3de181, .byte = 0x55 },
		{ .addr = 0x3de182, .byte = 0x52 },
		{ .addr = 0x3de183, .byte = 0xf0 },
		{ .addr = 0x3de184, .byte = 0x06 },
		{ .addr = 0x3de185, .byte = 0x4c },
		{ .addr = 0x6b470e, .byte = 0xbb },
		{ .addr = 0x6b470f, .byte = 0x89 },
		{ .addr = 0x6b4710, .byte = 0x37 },
		{ .addr = 0x6b4711, .byte = 0x8d },
		{ .addr = 0x3de186, .byte = 0x2d },
		{ .addr = 0x3de187, .byte = 0x4a }
};

static const SST_Transaction link_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4055428, .data = 1612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7030542, .data = 48009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7030544, .data = 14221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4055430, .data = 11594, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_11[] = {
		{ .addr = 0x6f34b2, .byte = 0x4e },
		{ .addr = 0x6f34b3, .byte = 0x51 },
		{ .addr = 0x6f34b4, .byte = 0xaf },
		{ .addr = 0x6f34b5, .byte = 0x01 },
		{ .addr = 0x6f34b6, .byte = 0xc5 },
		{ .addr = 0x6f34b7, .byte = 0xdf },
		{ .addr = 0x6f34b8, .byte = 0xf9 },
		{ .addr = 0x6f34b9, .byte = 0x5a }
};

static const SST_RamByte link_final_ram_11[] = {
		{ .addr = 0x6f34b2, .byte = 0x4e },
		{ .addr = 0x6f34b3, .byte = 0x51 },
		{ .addr = 0x6f34b4, .byte = 0xaf },
		{ .addr = 0x6f34b5, .byte = 0x01 },
		{ .addr = 0x6f34b6, .byte = 0xc5 },
		{ .addr = 0x6f34b7, .byte = 0xdf },
		{ .addr = 0x73923e, .byte = 0x2c },
		{ .addr = 0x73923f, .byte = 0xdf },
		{ .addr = 0x739240, .byte = 0x40 },
		{ .addr = 0x739241, .byte = 0xe5 },
		{ .addr = 0x6f34b8, .byte = 0xf9 },
		{ .addr = 0x6f34b9, .byte = 0x5a }
};

static const SST_Transaction link_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7287990, .data = 50655, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7574078, .data = 11487, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7574080, .data = 16613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7287992, .data = 63834, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_12[] = {
		{ .addr = 0xa41afc, .byte = 0x4e },
		{ .addr = 0xa41afd, .byte = 0x51 },
		{ .addr = 0xa41afe, .byte = 0xdb },
		{ .addr = 0xa41aff, .byte = 0xd8 },
		{ .addr = 0xa41b00, .byte = 0x20 },
		{ .addr = 0xa41b01, .byte = 0xfb },
		{ .addr = 0xa41b02, .byte = 0xd4 },
		{ .addr = 0xa41b03, .byte = 0x71 }
};

static const SST_RamByte link_final_ram_12[] = {
		{ .addr = 0xa41afc, .byte = 0x4e },
		{ .addr = 0xa41afd, .byte = 0x51 },
		{ .addr = 0xa41afe, .byte = 0xdb },
		{ .addr = 0xa41aff, .byte = 0xd8 },
		{ .addr = 0xa41b00, .byte = 0x20 },
		{ .addr = 0xa41b01, .byte = 0xfb },
		{ .addr = 0x899774, .byte = 0x86 },
		{ .addr = 0x899775, .byte = 0x82 },
		{ .addr = 0x899776, .byte = 0x36 },
		{ .addr = 0x899777, .byte = 0x0f },
		{ .addr = 0xa41b02, .byte = 0xd4 },
		{ .addr = 0xa41b03, .byte = 0x71 }
};

static const SST_Transaction link_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10754816, .data = 8443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9017204, .data = 34434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9017206, .data = 13839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10754818, .data = 54385, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_13[] = {
		{ .addr = 0xfd95c2, .byte = 0x4e },
		{ .addr = 0xfd95c3, .byte = 0x56 },
		{ .addr = 0xfd95c4, .byte = 0x77 },
		{ .addr = 0xfd95c5, .byte = 0xa0 },
		{ .addr = 0xfd95c6, .byte = 0x22 },
		{ .addr = 0xfd95c7, .byte = 0x26 },
		{ .addr = 0xfd95c8, .byte = 0x69 },
		{ .addr = 0xfd95c9, .byte = 0xa7 }
};

static const SST_RamByte link_final_ram_13[] = {
		{ .addr = 0xfd95c2, .byte = 0x4e },
		{ .addr = 0xfd95c3, .byte = 0x56 },
		{ .addr = 0xfd95c4, .byte = 0x77 },
		{ .addr = 0xfd95c5, .byte = 0xa0 },
		{ .addr = 0xfd95c6, .byte = 0x22 },
		{ .addr = 0xfd95c7, .byte = 0x26 },
		{ .addr = 0x4f61ea, .byte = 0x86 },
		{ .addr = 0x4f61eb, .byte = 0x4d },
		{ .addr = 0x4f61ec, .byte = 0x58 },
		{ .addr = 0x4f61ed, .byte = 0xe3 },
		{ .addr = 0xfd95c8, .byte = 0x69 },
		{ .addr = 0xfd95c9, .byte = 0xa7 }
};

static const SST_Transaction link_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16618950, .data = 8742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202410, .data = 34381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202412, .data = 22755, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16618952, .data = 27047, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_14[] = {
		{ .addr = 0x33b432, .byte = 0x4e },
		{ .addr = 0x33b433, .byte = 0x52 },
		{ .addr = 0x33b434, .byte = 0x7c },
		{ .addr = 0x33b435, .byte = 0x81 },
		{ .addr = 0x33b436, .byte = 0x94 },
		{ .addr = 0x33b437, .byte = 0x35 },
		{ .addr = 0x33b438, .byte = 0x86 },
		{ .addr = 0x33b439, .byte = 0xdb }
};

static const SST_RamByte link_final_ram_14[] = {
		{ .addr = 0x33b432, .byte = 0x4e },
		{ .addr = 0x33b433, .byte = 0x52 },
		{ .addr = 0x33b434, .byte = 0x7c },
		{ .addr = 0x33b435, .byte = 0x81 },
		{ .addr = 0x33b436, .byte = 0x94 },
		{ .addr = 0x33b437, .byte = 0x35 },
		{ .addr = 0xce10b6, .byte = 0x3e },
		{ .addr = 0xce10b7, .byte = 0xaa },
		{ .addr = 0xce10b8, .byte = 0xf4 },
		{ .addr = 0xce10b9, .byte = 0x68 },
		{ .addr = 0x33b438, .byte = 0x86 },
		{ .addr = 0x33b439, .byte = 0xdb }
};

static const SST_Transaction link_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3388470, .data = 37941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13504694, .data = 16042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13504696, .data = 62568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3388472, .data = 34523, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_15[] = {
		{ .addr = 0x946d52, .byte = 0x4e },
		{ .addr = 0x946d53, .byte = 0x50 },
		{ .addr = 0x946d54, .byte = 0x33 },
		{ .addr = 0x946d55, .byte = 0xf2 },
		{ .addr = 0x946d56, .byte = 0xca },
		{ .addr = 0x946d57, .byte = 0xda },
		{ .addr = 0x946d58, .byte = 0x54 },
		{ .addr = 0x946d59, .byte = 0xee }
};

static const SST_RamByte link_final_ram_15[] = {
		{ .addr = 0x946d52, .byte = 0x4e },
		{ .addr = 0x946d53, .byte = 0x50 },
		{ .addr = 0x946d54, .byte = 0x33 },
		{ .addr = 0x946d55, .byte = 0xf2 },
		{ .addr = 0x946d56, .byte = 0xca },
		{ .addr = 0x946d57, .byte = 0xda },
		{ .addr = 0x615498, .byte = 0x85 },
		{ .addr = 0x615499, .byte = 0xbb },
		{ .addr = 0x61549a, .byte = 0xe9 },
		{ .addr = 0x61549b, .byte = 0x85 },
		{ .addr = 0x946d58, .byte = 0x54 },
		{ .addr = 0x946d59, .byte = 0xee }
};

static const SST_Transaction link_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9727318, .data = 51930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6378648, .data = 34235, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6378650, .data = 59781, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9727320, .data = 21742, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_16[] = {
		{ .addr = 0x16f470, .byte = 0x4e },
		{ .addr = 0x16f471, .byte = 0x57 },
		{ .addr = 0x16f472, .byte = 0x2e },
		{ .addr = 0x16f473, .byte = 0x54 },
		{ .addr = 0x16f474, .byte = 0x2b },
		{ .addr = 0x16f475, .byte = 0xcb },
		{ .addr = 0x16f476, .byte = 0xf9 },
		{ .addr = 0x16f477, .byte = 0x1a }
};

static const SST_RamByte link_final_ram_16[] = {
		{ .addr = 0x16f470, .byte = 0x4e },
		{ .addr = 0x16f471, .byte = 0x57 },
		{ .addr = 0x16f472, .byte = 0x2e },
		{ .addr = 0x16f473, .byte = 0x54 },
		{ .addr = 0x16f474, .byte = 0x2b },
		{ .addr = 0x16f475, .byte = 0xcb },
		{ .addr = 0x612298, .byte = 0x00 },
		{ .addr = 0x612299, .byte = 0x61 },
		{ .addr = 0x61229a, .byte = 0x22 },
		{ .addr = 0x61229b, .byte = 0x9c },
		{ .addr = 0x16f476, .byte = 0xf9 },
		{ .addr = 0x16f477, .byte = 0x1a }
};

static const SST_Transaction link_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1504372, .data = 11211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6365848, .data = 97, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6365850, .data = 8860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1504374, .data = 63770, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_17[] = {
		{ .addr = 0x7c5da4, .byte = 0x4e },
		{ .addr = 0x7c5da5, .byte = 0x56 },
		{ .addr = 0x7c5da6, .byte = 0xdb },
		{ .addr = 0x7c5da7, .byte = 0x7f },
		{ .addr = 0x7c5da8, .byte = 0x87 },
		{ .addr = 0x7c5da9, .byte = 0xd4 },
		{ .addr = 0x7c5daa, .byte = 0x4d },
		{ .addr = 0x7c5dab, .byte = 0x8c }
};

static const SST_RamByte link_final_ram_17[] = {
		{ .addr = 0x7c5da4, .byte = 0x4e },
		{ .addr = 0x7c5da5, .byte = 0x56 },
		{ .addr = 0x7c5da6, .byte = 0xdb },
		{ .addr = 0x7c5da7, .byte = 0x7f },
		{ .addr = 0x7c5da8, .byte = 0x87 },
		{ .addr = 0x7c5da9, .byte = 0xd4 },
		{ .addr = 0x5c0dc2, .byte = 0x1a },
		{ .addr = 0x5c0dc3, .byte = 0xc5 },
		{ .addr = 0x5c0dc4, .byte = 0x85 },
		{ .addr = 0x5c0dc5, .byte = 0x21 },
		{ .addr = 0x7c5daa, .byte = 0x4d },
		{ .addr = 0x7c5dab, .byte = 0x8c }
};

static const SST_Transaction link_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8150440, .data = 34772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6032834, .data = 6853, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6032836, .data = 34081, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8150442, .data = 19852, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_18[] = {
		{ .addr = 0xf1d648, .byte = 0x4e },
		{ .addr = 0xf1d649, .byte = 0x51 },
		{ .addr = 0xf1d64a, .byte = 0xa0 },
		{ .addr = 0xf1d64b, .byte = 0x58 },
		{ .addr = 0xf1d64c, .byte = 0x3b },
		{ .addr = 0xf1d64d, .byte = 0xcc },
		{ .addr = 0xf1d64e, .byte = 0xca },
		{ .addr = 0xf1d64f, .byte = 0x70 }
};

static const SST_RamByte link_final_ram_18[] = {
		{ .addr = 0xf1d648, .byte = 0x4e },
		{ .addr = 0xf1d649, .byte = 0x51 },
		{ .addr = 0xf1d64a, .byte = 0xa0 },
		{ .addr = 0xf1d64b, .byte = 0x58 },
		{ .addr = 0xf1d64c, .byte = 0x3b },
		{ .addr = 0xf1d64d, .byte = 0xcc },
		{ .addr = 0xbe1582, .byte = 0xbc },
		{ .addr = 0xbe1583, .byte = 0x25 },
		{ .addr = 0xbe1584, .byte = 0xba },
		{ .addr = 0xbe1585, .byte = 0x7e },
		{ .addr = 0xf1d64e, .byte = 0xca },
		{ .addr = 0xf1d64f, .byte = 0x70 }
};

static const SST_Transaction link_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15849036, .data = 15308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12457346, .data = 48165, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12457348, .data = 47742, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15849038, .data = 51824, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_19[] = {
		{ .addr = 0xd1c5d2, .byte = 0x4e },
		{ .addr = 0xd1c5d3, .byte = 0x56 },
		{ .addr = 0xd1c5d4, .byte = 0x4f },
		{ .addr = 0xd1c5d5, .byte = 0xbb },
		{ .addr = 0xd1c5d6, .byte = 0x65 },
		{ .addr = 0xd1c5d7, .byte = 0xa9 },
		{ .addr = 0xd1c5d8, .byte = 0x09 },
		{ .addr = 0xd1c5d9, .byte = 0x7f }
};

static const SST_RamByte link_final_ram_19[] = {
		{ .addr = 0xd1c5d2, .byte = 0x4e },
		{ .addr = 0xd1c5d3, .byte = 0x56 },
		{ .addr = 0xd1c5d4, .byte = 0x4f },
		{ .addr = 0xd1c5d5, .byte = 0xbb },
		{ .addr = 0xd1c5d6, .byte = 0x65 },
		{ .addr = 0xd1c5d7, .byte = 0xa9 },
		{ .addr = 0x3cc6cc, .byte = 0xae },
		{ .addr = 0x3cc6cd, .byte = 0x7a },
		{ .addr = 0x3cc6ce, .byte = 0x3e },
		{ .addr = 0x3cc6cf, .byte = 0xd8 },
		{ .addr = 0xd1c5d8, .byte = 0x09 },
		{ .addr = 0xd1c5d9, .byte = 0x7f }
};

static const SST_Transaction link_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13747670, .data = 26025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3983052, .data = 44666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3983054, .data = 16088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13747672, .data = 2431, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_20[] = {
		{ .addr = 0x95e23e, .byte = 0x4e },
		{ .addr = 0x95e23f, .byte = 0x56 },
		{ .addr = 0x95e240, .byte = 0x6a },
		{ .addr = 0x95e241, .byte = 0x38 },
		{ .addr = 0x95e242, .byte = 0xac },
		{ .addr = 0x95e243, .byte = 0x59 },
		{ .addr = 0x95e244, .byte = 0x5f },
		{ .addr = 0x95e245, .byte = 0x7e }
};

static const SST_RamByte link_final_ram_20[] = {
		{ .addr = 0x95e23e, .byte = 0x4e },
		{ .addr = 0x95e23f, .byte = 0x56 },
		{ .addr = 0x95e240, .byte = 0x6a },
		{ .addr = 0x95e241, .byte = 0x38 },
		{ .addr = 0x95e242, .byte = 0xac },
		{ .addr = 0x95e243, .byte = 0x59 },
		{ .addr = 0xfb656c, .byte = 0xdc },
		{ .addr = 0xfb656d, .byte = 0x0a },
		{ .addr = 0xfb656e, .byte = 0x1b },
		{ .addr = 0xfb656f, .byte = 0xa8 },
		{ .addr = 0x95e244, .byte = 0x5f },
		{ .addr = 0x95e245, .byte = 0x7e }
};

static const SST_Transaction link_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9822786, .data = 44121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16475500, .data = 56330, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16475502, .data = 7080, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9822788, .data = 24446, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_21[] = {
		{ .addr = 0x6893e4, .byte = 0x4e },
		{ .addr = 0x6893e5, .byte = 0x57 },
		{ .addr = 0x6893e6, .byte = 0x1d },
		{ .addr = 0x6893e7, .byte = 0x33 },
		{ .addr = 0x6893e8, .byte = 0x37 },
		{ .addr = 0x6893e9, .byte = 0xe0 },
		{ .addr = 0x6893ea, .byte = 0x30 },
		{ .addr = 0x6893eb, .byte = 0x01 }
};

static const SST_RamByte link_final_ram_21[] = {
		{ .addr = 0x6893e4, .byte = 0x4e },
		{ .addr = 0x6893e5, .byte = 0x57 },
		{ .addr = 0x6893e6, .byte = 0x1d },
		{ .addr = 0x6893e7, .byte = 0x33 },
		{ .addr = 0x6893e8, .byte = 0x37 },
		{ .addr = 0x6893e9, .byte = 0xe0 },
		{ .addr = 0x40a726, .byte = 0x00 },
		{ .addr = 0x40a727, .byte = 0x40 },
		{ .addr = 0x40a728, .byte = 0xa7 },
		{ .addr = 0x40a729, .byte = 0x2a },
		{ .addr = 0x6893ea, .byte = 0x30 },
		{ .addr = 0x6893eb, .byte = 0x01 }
};

static const SST_Transaction link_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6853608, .data = 14304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4237094, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4237096, .data = 42794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6853610, .data = 12289, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_22[] = {
		{ .addr = 0x30d9e2, .byte = 0x4e },
		{ .addr = 0x30d9e3, .byte = 0x57 },
		{ .addr = 0x30d9e4, .byte = 0xe5 },
		{ .addr = 0x30d9e5, .byte = 0x9f },
		{ .addr = 0x30d9e6, .byte = 0x72 },
		{ .addr = 0x30d9e7, .byte = 0x91 },
		{ .addr = 0x30d9e8, .byte = 0xaf },
		{ .addr = 0x30d9e9, .byte = 0x7e }
};

static const SST_RamByte link_final_ram_22[] = {
		{ .addr = 0x30d9e2, .byte = 0x4e },
		{ .addr = 0x30d9e3, .byte = 0x57 },
		{ .addr = 0x30d9e4, .byte = 0xe5 },
		{ .addr = 0x30d9e5, .byte = 0x9f },
		{ .addr = 0x30d9e6, .byte = 0x72 },
		{ .addr = 0x30d9e7, .byte = 0x91 },
		{ .addr = 0xf674d2, .byte = 0x00 },
		{ .addr = 0xf674d3, .byte = 0xf6 },
		{ .addr = 0xf674d4, .byte = 0x74 },
		{ .addr = 0xf674d5, .byte = 0xd6 },
		{ .addr = 0x30d9e8, .byte = 0xaf },
		{ .addr = 0x30d9e9, .byte = 0x7e }
};

static const SST_Transaction link_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3201510, .data = 29329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16151762, .data = 246, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16151764, .data = 29910, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3201512, .data = 44926, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_23[] = {
		{ .addr = 0xfce6fe, .byte = 0x4e },
		{ .addr = 0xfce6ff, .byte = 0x57 },
		{ .addr = 0xfce700, .byte = 0x11 },
		{ .addr = 0xfce701, .byte = 0x98 },
		{ .addr = 0xfce702, .byte = 0x5e },
		{ .addr = 0xfce703, .byte = 0x7d },
		{ .addr = 0xfce704, .byte = 0x6b },
		{ .addr = 0xfce705, .byte = 0xce }
};

static const SST_RamByte link_final_ram_23[] = {
		{ .addr = 0xfce6fe, .byte = 0x4e },
		{ .addr = 0xfce6ff, .byte = 0x57 },
		{ .addr = 0xfce700, .byte = 0x11 },
		{ .addr = 0xfce701, .byte = 0x98 },
		{ .addr = 0xfce702, .byte = 0x5e },
		{ .addr = 0xfce703, .byte = 0x7d },
		{ .addr = 0x896996, .byte = 0x00 },
		{ .addr = 0x896997, .byte = 0x89 },
		{ .addr = 0x896998, .byte = 0x69 },
		{ .addr = 0x896999, .byte = 0x9a },
		{ .addr = 0xfce704, .byte = 0x6b },
		{ .addr = 0xfce705, .byte = 0xce }
};

static const SST_Transaction link_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16574210, .data = 24189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9005462, .data = 137, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9005464, .data = 27034, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16574212, .data = 27598, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_24[] = {
		{ .addr = 0x7986ae, .byte = 0x4e },
		{ .addr = 0x7986af, .byte = 0x52 },
		{ .addr = 0x7986b0, .byte = 0x4e },
		{ .addr = 0x7986b1, .byte = 0xa0 },
		{ .addr = 0x7986b2, .byte = 0xb6 },
		{ .addr = 0x7986b3, .byte = 0x7c },
		{ .addr = 0x7986b4, .byte = 0xce },
		{ .addr = 0x7986b5, .byte = 0x26 }
};

static const SST_RamByte link_final_ram_24[] = {
		{ .addr = 0x7986ae, .byte = 0x4e },
		{ .addr = 0x7986af, .byte = 0x52 },
		{ .addr = 0x7986b0, .byte = 0x4e },
		{ .addr = 0x7986b1, .byte = 0xa0 },
		{ .addr = 0x7986b2, .byte = 0xb6 },
		{ .addr = 0x7986b3, .byte = 0x7c },
		{ .addr = 0xa83fe0, .byte = 0x81 },
		{ .addr = 0xa83fe1, .byte = 0x87 },
		{ .addr = 0xa83fe2, .byte = 0x90 },
		{ .addr = 0xa83fe3, .byte = 0x31 },
		{ .addr = 0x7986b4, .byte = 0xce },
		{ .addr = 0x7986b5, .byte = 0x26 }
};

static const SST_Transaction link_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7964338, .data = 46716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11026400, .data = 33159, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11026402, .data = 36913, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7964340, .data = 52774, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_25[] = {
		{ .addr = 0x41d306, .byte = 0x4e },
		{ .addr = 0x41d307, .byte = 0x51 },
		{ .addr = 0x41d308, .byte = 0x0c },
		{ .addr = 0x41d309, .byte = 0x15 },
		{ .addr = 0x41d30a, .byte = 0xd1 },
		{ .addr = 0x41d30b, .byte = 0x18 },
		{ .addr = 0x41d30c, .byte = 0xda },
		{ .addr = 0x41d30d, .byte = 0xfd }
};

static const SST_RamByte link_final_ram_25[] = {
		{ .addr = 0x41d306, .byte = 0x4e },
		{ .addr = 0x41d307, .byte = 0x51 },
		{ .addr = 0x41d308, .byte = 0x0c },
		{ .addr = 0x41d309, .byte = 0x15 },
		{ .addr = 0x41d30a, .byte = 0xd1 },
		{ .addr = 0x41d30b, .byte = 0x18 },
		{ .addr = 0x7ce534, .byte = 0xdd },
		{ .addr = 0x7ce535, .byte = 0xc5 },
		{ .addr = 0x7ce536, .byte = 0xb2 },
		{ .addr = 0x7ce537, .byte = 0xdc },
		{ .addr = 0x41d30c, .byte = 0xda },
		{ .addr = 0x41d30d, .byte = 0xfd }
};

static const SST_Transaction link_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4313866, .data = 53528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8185140, .data = 56773, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8185142, .data = 45788, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4313868, .data = 56061, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_26[] = {
		{ .addr = 0x379326, .byte = 0x4e },
		{ .addr = 0x379327, .byte = 0x55 },
		{ .addr = 0x379328, .byte = 0x9d },
		{ .addr = 0x379329, .byte = 0x99 },
		{ .addr = 0x37932a, .byte = 0x83 },
		{ .addr = 0x37932b, .byte = 0x1b },
		{ .addr = 0x37932c, .byte = 0x36 },
		{ .addr = 0x37932d, .byte = 0xb1 }
};

static const SST_RamByte link_final_ram_26[] = {
		{ .addr = 0x379326, .byte = 0x4e },
		{ .addr = 0x379327, .byte = 0x55 },
		{ .addr = 0x379328, .byte = 0x9d },
		{ .addr = 0x379329, .byte = 0x99 },
		{ .addr = 0x37932a, .byte = 0x83 },
		{ .addr = 0x37932b, .byte = 0x1b },
		{ .addr = 0x4d9ee4, .byte = 0xbe },
		{ .addr = 0x4d9ee5, .byte = 0x6c },
		{ .addr = 0x4d9ee6, .byte = 0x92 },
		{ .addr = 0x4d9ee7, .byte = 0x41 },
		{ .addr = 0x37932c, .byte = 0x36 },
		{ .addr = 0x37932d, .byte = 0xb1 }
};

static const SST_Transaction link_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3642154, .data = 33563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5086948, .data = 48748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5086950, .data = 37441, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3642156, .data = 14001, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_27[] = {
		{ .addr = 0x5e72e8, .byte = 0x4e },
		{ .addr = 0x5e72e9, .byte = 0x55 },
		{ .addr = 0x5e72ea, .byte = 0xf8 },
		{ .addr = 0x5e72eb, .byte = 0x4f },
		{ .addr = 0x5e72ec, .byte = 0xca },
		{ .addr = 0x5e72ed, .byte = 0xc8 },
		{ .addr = 0x5e72ee, .byte = 0xcf },
		{ .addr = 0x5e72ef, .byte = 0xb2 }
};

static const SST_RamByte link_final_ram_27[] = {
		{ .addr = 0x5e72e8, .byte = 0x4e },
		{ .addr = 0x5e72e9, .byte = 0x55 },
		{ .addr = 0x5e72ea, .byte = 0xf8 },
		{ .addr = 0x5e72eb, .byte = 0x4f },
		{ .addr = 0x5e72ec, .byte = 0xca },
		{ .addr = 0x5e72ed, .byte = 0xc8 },
		{ .addr = 0x698726, .byte = 0x50 },
		{ .addr = 0x698727, .byte = 0x5e },
		{ .addr = 0x698728, .byte = 0xb1 },
		{ .addr = 0x698729, .byte = 0x3e },
		{ .addr = 0x5e72ee, .byte = 0xcf },
		{ .addr = 0x5e72ef, .byte = 0xb2 }
};

static const SST_Transaction link_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6189804, .data = 51912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6915878, .data = 20574, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6915880, .data = 45374, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6189806, .data = 53170, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_28[] = {
		{ .addr = 0x43c670, .byte = 0x4e },
		{ .addr = 0x43c671, .byte = 0x54 },
		{ .addr = 0x43c672, .byte = 0x63 },
		{ .addr = 0x43c673, .byte = 0x12 },
		{ .addr = 0x43c674, .byte = 0xe9 },
		{ .addr = 0x43c675, .byte = 0x7e },
		{ .addr = 0x43c676, .byte = 0x56 },
		{ .addr = 0x43c677, .byte = 0xde }
};

static const SST_RamByte link_final_ram_28[] = {
		{ .addr = 0x43c670, .byte = 0x4e },
		{ .addr = 0x43c671, .byte = 0x54 },
		{ .addr = 0x43c672, .byte = 0x63 },
		{ .addr = 0x43c673, .byte = 0x12 },
		{ .addr = 0x43c674, .byte = 0xe9 },
		{ .addr = 0x43c675, .byte = 0x7e },
		{ .addr = 0x2e8a56, .byte = 0x33 },
		{ .addr = 0x2e8a57, .byte = 0x54 },
		{ .addr = 0x2e8a58, .byte = 0x41 },
		{ .addr = 0x2e8a59, .byte = 0x47 },
		{ .addr = 0x43c676, .byte = 0x56 },
		{ .addr = 0x43c677, .byte = 0xde }
};

static const SST_Transaction link_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4441716, .data = 59774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3050070, .data = 13140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3050072, .data = 16711, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4441718, .data = 22238, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_29[] = {
		{ .addr = 0x0691a2, .byte = 0x4e },
		{ .addr = 0x0691a3, .byte = 0x52 },
		{ .addr = 0x0691a4, .byte = 0x95 },
		{ .addr = 0x0691a5, .byte = 0x68 },
		{ .addr = 0x0691a6, .byte = 0xbc },
		{ .addr = 0x0691a7, .byte = 0x9e },
		{ .addr = 0x0691a8, .byte = 0xb3 },
		{ .addr = 0x0691a9, .byte = 0x47 }
};

static const SST_RamByte link_final_ram_29[] = {
		{ .addr = 0x0691a2, .byte = 0x4e },
		{ .addr = 0x0691a3, .byte = 0x52 },
		{ .addr = 0x0691a4, .byte = 0x95 },
		{ .addr = 0x0691a5, .byte = 0x68 },
		{ .addr = 0x0691a6, .byte = 0xbc },
		{ .addr = 0x0691a7, .byte = 0x9e },
		{ .addr = 0x72b0a6, .byte = 0x55 },
		{ .addr = 0x72b0a7, .byte = 0x43 },
		{ .addr = 0x72b0a8, .byte = 0xc7 },
		{ .addr = 0x72b0a9, .byte = 0xa0 },
		{ .addr = 0x0691a8, .byte = 0xb3 },
		{ .addr = 0x0691a9, .byte = 0x47 }
};

static const SST_Transaction link_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 430502, .data = 48286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7516326, .data = 21827, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7516328, .data = 51104, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 430504, .data = 45895, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_30[] = {
		{ .addr = 0xa47402, .byte = 0x4e },
		{ .addr = 0xa47403, .byte = 0x56 },
		{ .addr = 0xa47404, .byte = 0x13 },
		{ .addr = 0xa47405, .byte = 0x62 },
		{ .addr = 0xa47406, .byte = 0x57 },
		{ .addr = 0xa47407, .byte = 0x37 },
		{ .addr = 0xa47408, .byte = 0x51 },
		{ .addr = 0xa47409, .byte = 0xda }
};

static const SST_RamByte link_final_ram_30[] = {
		{ .addr = 0xa47402, .byte = 0x4e },
		{ .addr = 0xa47403, .byte = 0x56 },
		{ .addr = 0xa47404, .byte = 0x13 },
		{ .addr = 0xa47405, .byte = 0x62 },
		{ .addr = 0xa47406, .byte = 0x57 },
		{ .addr = 0xa47407, .byte = 0x37 },
		{ .addr = 0x98142a, .byte = 0x01 },
		{ .addr = 0x98142b, .byte = 0x63 },
		{ .addr = 0x98142c, .byte = 0x9b },
		{ .addr = 0x98142d, .byte = 0x92 },
		{ .addr = 0xa47408, .byte = 0x51 },
		{ .addr = 0xa47409, .byte = 0xda }
};

static const SST_Transaction link_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10777606, .data = 22327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9966634, .data = 355, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9966636, .data = 39826, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10777608, .data = 20954, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte link_initial_ram_31[] = {
		{ .addr = 0xb0590a, .byte = 0x4e },
		{ .addr = 0xb0590b, .byte = 0x57 },
		{ .addr = 0xb0590c, .byte = 0x84 },
		{ .addr = 0xb0590d, .byte = 0x58 },
		{ .addr = 0xb0590e, .byte = 0xed },
		{ .addr = 0xb0590f, .byte = 0x7f },
		{ .addr = 0xb05910, .byte = 0x29 },
		{ .addr = 0xb05911, .byte = 0xfd }
};

static const SST_RamByte link_final_ram_31[] = {
		{ .addr = 0xb0590a, .byte = 0x4e },
		{ .addr = 0xb0590b, .byte = 0x57 },
		{ .addr = 0xb0590c, .byte = 0x84 },
		{ .addr = 0xb0590d, .byte = 0x58 },
		{ .addr = 0xb0590e, .byte = 0xed },
		{ .addr = 0xb0590f, .byte = 0x7f },
		{ .addr = 0x84cf9c, .byte = 0x00 },
		{ .addr = 0x84cf9d, .byte = 0x84 },
		{ .addr = 0x84cf9e, .byte = 0xcf },
		{ .addr = 0x84cf9f, .byte = 0xa0 },
		{ .addr = 0xb05910, .byte = 0x29 },
		{ .addr = 0xb05911, .byte = 0xfd }
};

static const SST_Transaction link_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11557134, .data = 60799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8703900, .data = 132, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8703902, .data = 53152, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11557136, .data = 10749, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase link[] = {
	{
		.name = "000 LINK A1, # 4e51",
		.initial = {
			.regs = {
				1549680510, 3529549349, 402953891, 2836331597, 3505705563, 595564642, 2848265625, 2797936031, 918023106, 2344368855, 3956781094, 1306461531, 2621107024, 522755042, 756702087, 2919422, 6008204, 34077, 5926566
			},
			.prefetch0 = 20049,
			.prefetch1 = 21469,
			.ram = link_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1549680510, 3529549349, 402953891, 2836331597, 3505705563, 595564642, 2848265625, 2797936031, 918023106, 2919418, 3956781094, 1306461531, 2621107024, 522755042, 756702087, 2940887, 6008204, 34077, 5926570
			},
			.prefetch0 = 17485,
			.prefetch1 = 43322,
			.ram = link_final_ram_0,
			.ram_len = 12,
		},
		.transactions = link_transactions_0,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "001 LINK A1, # 4e51",
		.initial = {
			.regs = {
				2802016042, 3185309223, 1686476435, 1623455193, 1680777257, 2334901933, 115598779, 3275254735, 918229246, 1364472201, 1030114137, 4181831082, 3580438921, 2390702482, 2276973688, 5301054, 13038298, 33794, 9055246
			},
			.prefetch0 = 20049,
			.prefetch1 = 36581,
			.ram = link_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2802016042, 3185309223, 1686476435, 1623455193, 1680777257, 2334901933, 115598779, 3275254735, 918229246, 5301050, 1030114137, 4181831082, 3580438921, 2390702482, 2276973688, 5272095, 13038298, 33794, 9055250
			},
			.prefetch0 = 48844,
			.prefetch1 = 31098,
			.ram = link_final_ram_1,
			.ram_len = 12,
		},
		.transactions = link_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 LINK A3, # 4e53",
		.initial = {
			.regs = {
				2667183812, 3399638647, 4014732477, 695003667, 1763891362, 1595715932, 4214313363, 705659706, 3470612388, 1301243456, 3274127731, 1424254422, 3189289549, 1436625593, 4094502481, 2669740, 3509484, 8965, 4186352
			},
			.prefetch0 = 20051,
			.prefetch1 = 47973,
			.ram = link_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2667183812, 3399638647, 4014732477, 695003667, 1763891362, 1595715932, 4214313363, 705659706, 3470612388, 1301243456, 3274127731, 3509480, 3189289549, 1436625593, 4094502481, 2669740, 3491917, 8965, 4186356
			},
			.prefetch0 = 54158,
			.prefetch1 = 58108,
			.ram = link_final_ram_2,
			.ram_len = 12,
		},
		.transactions = link_transactions_2,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "003 LINK A1, # 4e51",
		.initial = {
			.regs = {
				3832885944, 149945363, 2040518108, 1682747044, 1253183928, 729758243, 207002028, 134455799, 1273817141, 2905234655, 4070226444, 1001805994, 1279563610, 938288564, 1084236153, 2205100, 2317200, 1282, 16597582
			},
			.prefetch0 = 20049,
			.prefetch1 = 46890,
			.ram = link_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3832885944, 149945363, 2040518108, 1682747044, 1253183928, 729758243, 207002028, 134455799, 1273817141, 2205096, 4070226444, 1001805994, 1279563610, 938288564, 1084236153, 2186450, 2317200, 1282, 16597586
			},
			.prefetch0 = 46800,
			.prefetch1 = 29848,
			.ram = link_final_ram_3,
			.ram_len = 12,
		},
		.transactions = link_transactions_3,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "004 LINK A1, # 4e51",
		.initial = {
			.regs = {
				836304070, 546110961, 3944424955, 2243347886, 3481186891, 2624356230, 1445468771, 3965855941, 3577651028, 4012036863, 2887512408, 4220610261, 537182143, 2075890748, 3682445735, 6386728, 5097122, 10012, 2208246
			},
			.prefetch0 = 20049,
			.prefetch1 = 19921,
			.ram = link_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				836304070, 546110961, 3944424955, 2243347886, 3481186891, 2624356230, 1445468771, 3965855941, 3577651028, 5097118, 2887512408, 4220610261, 537182143, 2075890748, 3682445735, 6386728, 5117039, 10012, 2208250
			},
			.prefetch0 = 53517,
			.prefetch1 = 1206,
			.ram = link_final_ram_4,
			.ram_len = 12,
		},
		.transactions = link_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 LINK A5, # 4e55",
		.initial = {
			.regs = {
				4011744668, 2449151113, 2946433555, 2890007106, 588547310, 3512926653, 4249775936, 1179215956, 525947754, 333867919, 2617866502, 1984948558, 1736183699, 3084064934, 2686980853, 5673110, 3023248, 280, 11198102
			},
			.prefetch0 = 20053,
			.prefetch1 = 17269,
			.ram = link_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4011744668, 2449151113, 2946433555, 2890007106, 588547310, 3512926653, 4249775936, 1179215956, 525947754, 333867919, 2617866502, 1984948558, 1736183699, 5673106, 2686980853, 5690375, 3023248, 280, 11198106
			},
			.prefetch0 = 50067,
			.prefetch1 = 21043,
			.ram = link_final_ram_5,
			.ram_len = 12,
		},
		.transactions = link_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 LINK A2, # 4e52",
		.initial = {
			.regs = {
				2559194656, 1967386471, 3062936701, 3236075773, 729322607, 1999772372, 3057561566, 3900426122, 365747295, 203101422, 3705569835, 2183703316, 3435729135, 1452459018, 206923308, 15536338, 13813950, 8449, 8769296
			},
			.prefetch0 = 20050,
			.prefetch1 = 63786,
			.ram = link_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2559194656, 1967386471, 3062936701, 3236075773, 729322607, 1999772372, 3057561566, 3900426122, 365747295, 203101422, 13813946, 2183703316, 3435729135, 1452459018, 206923308, 15536338, 13812196, 8449, 8769300
			},
			.prefetch0 = 40673,
			.prefetch1 = 5534,
			.ram = link_final_ram_6,
			.ram_len = 12,
		},
		.transactions = link_transactions_6,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "007 LINK A5, # 4e55",
		.initial = {
			.regs = {
				910483167, 576280962, 458328972, 104347203, 3964794664, 776787735, 4102778717, 1450264855, 378735517, 218973965, 4168314229, 3991545992, 2598025305, 1547883710, 641635092, 6044884, 10062146, 33536, 11261892
			},
			.prefetch0 = 20053,
			.prefetch1 = 2840,
			.ram = link_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				910483167, 576280962, 458328972, 104347203, 3964794664, 776787735, 4102778717, 1450264855, 378735517, 218973965, 4168314229, 3991545992, 2598025305, 6044880, 641635092, 6047720, 10062146, 33536, 11261896
			},
			.prefetch0 = 55797,
			.prefetch1 = 12413,
			.ram = link_final_ram_7,
			.ram_len = 12,
		},
		.transactions = link_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 LINK A1, # 4e51",
		.initial = {
			.regs = {
				631893089, 3209862942, 1513454476, 4100975621, 2994704658, 3334113017, 3440531563, 2272966990, 2535379471, 3393417639, 2011846351, 2362692004, 1735411837, 658865437, 1928708809, 5448684, 15281458, 9245, 10568700
			},
			.prefetch0 = 20049,
			.prefetch1 = 16827,
			.ram = link_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				631893089, 3209862942, 1513454476, 4100975621, 2994704658, 3334113017, 3440531563, 2272966990, 2535379471, 15281454, 2011846351, 2362692004, 1735411837, 658865437, 1928708809, 5448684, 15298281, 9245, 10568704
			},
			.prefetch0 = 54650,
			.prefetch1 = 16610,
			.ram = link_final_ram_8,
			.ram_len = 12,
		},
		.transactions = link_transactions_8,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "009 LINK A7, # 4e57",
		.initial = {
			.regs = {
				3378760390, 4240408586, 732329881, 705910560, 2748281446, 2614509249, 2888056543, 1004384322, 1391288779, 1377820191, 2248645312, 1516094919, 3592626083, 4083490051, 2572158983, 11860606, 16032656, 8221, 1972716
			},
			.prefetch0 = 20055,
			.prefetch1 = 63090,
			.ram = link_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3378760390, 4240408586, 732329881, 705910560, 2748281446, 2614509249, 2888056543, 1004384322, 1391288779, 1377820191, 2248645312, 1516094919, 3592626083, 4083490051, 2572158983, 11860606, 16030206, 8221, 1972720
			},
			.prefetch0 = 4183,
			.prefetch1 = 23077,
			.ram = link_final_ram_9,
			.ram_len = 12,
		},
		.transactions = link_transactions_9,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "010 LINK A5, # 4e55",
		.initial = {
			.regs = {
				4035960121, 2729211714, 4272786291, 1204262040, 1227851540, 639624190, 3252434747, 1651499210, 195378491, 1682058238, 529558849, 657985868, 3303763613, 3146332045, 3719293087, 4086244, 7030546, 42509, 4055428
			},
			.prefetch0 = 20053,
			.prefetch1 = 21232,
			.ram = link_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4035960121, 2729211714, 4272786291, 1204262040, 1227851540, 639624190, 3252434747, 1651499210, 195378491, 1682058238, 529558849, 657985868, 3303763613, 7030542, 3719293087, 4086244, 7051774, 42509, 4055432
			},
			.prefetch0 = 1612,
			.prefetch1 = 11594,
			.ram = link_final_ram_10,
			.ram_len = 12,
		},
		.transactions = link_transactions_10,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "011 LINK A1, # 4e51",
		.initial = {
			.regs = {
				3210707934, 1619914674, 1439179714, 2258204653, 1991969701, 3634152468, 2930708485, 3751834493, 1553776454, 752828645, 2731733480, 2946885570, 3253653938, 2556538014, 4156172629, 15523096, 7574082, 40971, 7287990
			},
			.prefetch0 = 20049,
			.prefetch1 = 44801,
			.ram = link_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3210707934, 1619914674, 1439179714, 2258204653, 1991969701, 3634152468, 2930708485, 3751834493, 1553776454, 7574078, 2731733480, 2946885570, 3253653938, 2556538014, 4156172629, 15523096, 7553343, 40971, 7287994
			},
			.prefetch0 = 50655,
			.prefetch1 = 63834,
			.ram = link_final_ram_11,
			.ram_len = 12,
		},
		.transactions = link_transactions_11,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "012 LINK A1, # 4e51",
		.initial = {
			.regs = {
				1181355103, 149959107, 3885934834, 3445711946, 3448291745, 3892461390, 2728706526, 3731175758, 2663349368, 2256680463, 997324738, 698876715, 1554369681, 1702230561, 2940016052, 4343096, 9017208, 8723, 10754816
			},
			.prefetch0 = 20049,
			.prefetch1 = 56280,
			.ram = link_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1181355103, 149959107, 3885934834, 3445711946, 3448291745, 3892461390, 2728706526, 3731175758, 2663349368, 9017204, 997324738, 698876715, 1554369681, 1702230561, 2940016052, 4343096, 9007948, 8723, 10754820
			},
			.prefetch0 = 8443,
			.prefetch1 = 54385,
			.ram = link_final_ram_12,
			.ram_len = 12,
		},
		.transactions = link_transactions_12,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "013 LINK A6, # 4e56",
		.initial = {
			.regs = {
				4091493400, 1637632563, 2319501691, 3754792404, 3165562510, 1896346746, 2843668515, 93694450, 2475076944, 1907469104, 4191794955, 3941434849, 3608057706, 243209977, 2253215971, 11702682, 5202414, 41991, 16618950
			},
			.prefetch0 = 20054,
			.prefetch1 = 30624,
			.ram = link_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4091493400, 1637632563, 2319501691, 3754792404, 3165562510, 1896346746, 2843668515, 93694450, 2475076944, 1907469104, 4191794955, 3941434849, 3608057706, 243209977, 5202410, 11702682, 5233034, 41991, 16618954
			},
			.prefetch0 = 8742,
			.prefetch1 = 27047,
			.ram = link_final_ram_13,
			.ram_len = 12,
		},
		.transactions = link_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 LINK A2, # 4e52",
		.initial = {
			.regs = {
				2834904967, 50509814, 4123115987, 940359555, 4013875938, 392313300, 3962800586, 676152164, 3636725698, 299242887, 1051391080, 549039818, 1078768433, 529283025, 3794345014, 4382642, 13504698, 8961, 3388470
			},
			.prefetch0 = 20050,
			.prefetch1 = 31873,
			.ram = link_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2834904967, 50509814, 4123115987, 940359555, 4013875938, 392313300, 3962800586, 676152164, 3636725698, 299242887, 13504694, 549039818, 1078768433, 529283025, 3794345014, 4382642, 13536567, 8961, 3388474
			},
			.prefetch0 = 37941,
			.prefetch1 = 34523,
			.ram = link_final_ram_14,
			.ram_len = 12,
		},
		.transactions = link_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 LINK A0, # 4e50",
		.initial = {
			.regs = {
				3794587868, 2098555954, 2106782092, 3368121437, 815183217, 2540315407, 197360487, 2038968452, 2243684741, 3523936878, 3600687864, 129611739, 2584960316, 382780110, 494874250, 6378652, 11970620, 32769, 9727318
			},
			.prefetch0 = 20048,
			.prefetch1 = 13298,
			.ram = link_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3794587868, 2098555954, 2106782092, 3368121437, 815183217, 2540315407, 197360487, 2038968452, 6378648, 3523936878, 3600687864, 129611739, 2584960316, 382780110, 494874250, 6391946, 11970620, 32769, 9727322
			},
			.prefetch0 = 51930,
			.prefetch1 = 21742,
			.ram = link_final_ram_15,
			.ram_len = 12,
		},
		.transactions = link_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "016 LINK A7, # 4e57",
		.initial = {
			.regs = {
				3154292749, 1162982703, 941422766, 2535757867, 1003344668, 1669888478, 1788154310, 1986404210, 2308836010, 198221753, 3453497375, 701049763, 991901895, 3362437124, 4168628215, 1240584, 6365852, 10007, 1504372
			},
			.prefetch0 = 20055,
			.prefetch1 = 11860,
			.ram = link_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3154292749, 1162982703, 941422766, 2535757867, 1003344668, 1669888478, 1788154310, 1986404210, 2308836010, 198221753, 3453497375, 701049763, 991901895, 3362437124, 4168628215, 1240584, 6377708, 10007, 1504376
			},
			.prefetch0 = 11211,
			.prefetch1 = 63770,
			.ram = link_final_ram_16,
			.ram_len = 12,
		},
		.transactions = link_transactions_16,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "017 LINK A6, # 4e56",
		.initial = {
			.regs = {
				2771795815, 1116702081, 225493048, 344261891, 757863923, 400335323, 4044221912, 799451202, 516086796, 1897769815, 157925960, 2614872412, 2238706947, 1342415225, 449152289, 6032838, 16294468, 33289, 8150440
			},
			.prefetch0 = 20054,
			.prefetch1 = 56191,
			.ram = link_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2771795815, 1116702081, 225493048, 344261891, 757863923, 400335323, 4044221912, 799451202, 516086796, 1897769815, 157925960, 2614872412, 2238706947, 1342415225, 6032834, 6023489, 16294468, 33289, 8150444
			},
			.prefetch0 = 34772,
			.prefetch1 = 19852,
			.ram = link_final_ram_17,
			.ram_len = 12,
		},
		.transactions = link_transactions_17,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "018 LINK A1, # 4e51",
		.initial = {
			.regs = {
				4236088107, 4143062478, 1229882166, 1850403954, 227691767, 847114604, 3934008084, 3111253422, 758328450, 3156589182, 3829987783, 820028516, 859371986, 739025610, 2209847817, 12457350, 14761036, 33809, 15849036
			},
			.prefetch0 = 20049,
			.prefetch1 = 41048,
			.ram = link_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4236088107, 4143062478, 1229882166, 1850403954, 227691767, 847114604, 3934008084, 3111253422, 758328450, 12457346, 3829987783, 820028516, 859371986, 739025610, 2209847817, 12432858, 14761036, 33809, 15849040
			},
			.prefetch0 = 15308,
			.prefetch1 = 51824,
			.ram = link_final_ram_18,
			.ram_len = 12,
		},
		.transactions = link_transactions_18,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "019 LINK A6, # 4e56",
		.initial = {
			.regs = {
				4019087210, 2796625686, 1714495943, 3485467807, 311019157, 2444495503, 104946987, 3786912391, 2743216988, 1157814175, 760962462, 3547183205, 3084787974, 3612465247, 2927247064, 88712, 3983056, 9984, 13747670
			},
			.prefetch0 = 20054,
			.prefetch1 = 20411,
			.ram = link_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4019087210, 2796625686, 1714495943, 3485467807, 311019157, 2444495503, 104946987, 3786912391, 2743216988, 1157814175, 760962462, 3547183205, 3084787974, 3612465247, 3983052, 88712, 4003463, 9984, 13747674
			},
			.prefetch0 = 26025,
			.prefetch1 = 2431,
			.ram = link_final_ram_19,
			.ram_len = 12,
		},
		.transactions = link_transactions_19,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "020 LINK A6, # 4e56",
		.initial = {
			.regs = {
				2187785089, 438320947, 1528213932, 4036157772, 1305554475, 1689309898, 4141660990, 819661197, 4204876536, 3395000428, 35392640, 1346001813, 4278371060, 1078735846, 3691649960, 16475504, 7333688, 1035, 9822786
			},
			.prefetch0 = 20054,
			.prefetch1 = 27192,
			.ram = link_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2187785089, 438320947, 1528213932, 4036157772, 1305554475, 1689309898, 4141660990, 819661197, 4204876536, 3395000428, 35392640, 1346001813, 4278371060, 1078735846, 16475500, 16502692, 7333688, 1035, 9822790
			},
			.prefetch0 = 44121,
			.prefetch1 = 24446,
			.ram = link_final_ram_20,
			.ram_len = 12,
		},
		.transactions = link_transactions_20,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "021 LINK A7, # 4e57",
		.initial = {
			.regs = {
				595498513, 672278695, 3225379243, 3289396011, 1883935327, 1939796709, 626064698, 2026392898, 412202386, 4259704324, 1208597650, 2351945931, 1689247022, 3866895771, 2539045582, 9491380, 4237098, 9241, 6853608
			},
			.prefetch0 = 20055,
			.prefetch1 = 7475,
			.ram = link_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				595498513, 672278695, 3225379243, 3289396011, 1883935327, 1939796709, 626064698, 2026392898, 412202386, 4259704324, 1208597650, 2351945931, 1689247022, 3866895771, 2539045582, 9491380, 4244569, 9241, 6853612
			},
			.prefetch0 = 14304,
			.prefetch1 = 12289,
			.ram = link_final_ram_21,
			.ram_len = 12,
		},
		.transactions = link_transactions_21,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "022 LINK A7, # 4e57",
		.initial = {
			.regs = {
				3118365640, 10739201, 3263945162, 1651632932, 1450249569, 1483848285, 1094898991, 2926670726, 3172080401, 3696404572, 701664093, 3432256232, 282122878, 3474433946, 2892444905, 16151766, 6929768, 34574, 3201510
			},
			.prefetch0 = 20055,
			.prefetch1 = 58783,
			.ram = link_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3118365640, 10739201, 3263945162, 1651632932, 1450249569, 1483848285, 1094898991, 2926670726, 3172080401, 3696404572, 701664093, 3432256232, 282122878, 3474433946, 2892444905, 16145009, 6929768, 34574, 3201514
			},
			.prefetch0 = 29329,
			.prefetch1 = 44926,
			.ram = link_final_ram_22,
			.ram_len = 12,
		},
		.transactions = link_transactions_22,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "023 LINK A7, # 4e57",
		.initial = {
			.regs = {
				2418677916, 3216363481, 3785042742, 713991521, 2395656645, 1848697208, 2269245767, 3028499604, 825051852, 599968262, 577124806, 3497670, 16113888, 2971467803, 2371249994, 9005466, 1149804, 18, 16574210
			},
			.prefetch0 = 20055,
			.prefetch1 = 4504,
			.ram = link_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2418677916, 3216363481, 3785042742, 713991521, 2395656645, 1848697208, 2269245767, 3028499604, 825051852, 599968262, 577124806, 3497670, 16113888, 2971467803, 2371249994, 9009966, 1149804, 18, 16574214
			},
			.prefetch0 = 24189,
			.prefetch1 = 27598,
			.ram = link_final_ram_23,
			.ram_len = 12,
		},
		.transactions = link_transactions_23,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "024 LINK A2, # 4e52",
		.initial = {
			.regs = {
				178610984, 2099175230, 20323120, 3217042021, 392541884, 2751423573, 2341010165, 1241164470, 1569337238, 4197245052, 2173145137, 1843555592, 2576297051, 463538296, 2494852719, 11026404, 12356558, 1792, 7964338
			},
			.prefetch0 = 20050,
			.prefetch1 = 20128,
			.ram = link_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				178610984, 2099175230, 20323120, 3217042021, 392541884, 2751423573, 2341010165, 1241164470, 1569337238, 4197245052, 11026400, 1843555592, 2576297051, 463538296, 2494852719, 11046528, 12356558, 1792, 7964342
			},
			.prefetch0 = 46716,
			.prefetch1 = 52774,
			.ram = link_final_ram_24,
			.ram_len = 12,
		},
		.transactions = link_transactions_24,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "025 LINK A1, # 4e51",
		.initial = {
			.regs = {
				173568747, 2941887962, 1225202946, 3518443811, 4207541159, 2810747533, 853521498, 215495400, 3515619722, 3720721116, 585965305, 3669150333, 1866680066, 2717279981, 110610248, 8185144, 10557258, 5, 4313866
			},
			.prefetch0 = 20049,
			.prefetch1 = 3093,
			.ram = link_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				173568747, 2941887962, 1225202946, 3518443811, 4207541159, 2810747533, 853521498, 215495400, 3515619722, 8185140, 585965305, 3669150333, 1866680066, 2717279981, 110610248, 8188233, 10557258, 5, 4313870
			},
			.prefetch0 = 53528,
			.prefetch1 = 56061,
			.ram = link_final_ram_25,
			.ram_len = 12,
		},
		.transactions = link_transactions_25,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "026 LINK A5, # 4e55",
		.initial = {
			.regs = {
				3331359577, 1593084801, 3572658677, 922013848, 2642801094, 943843054, 3013180627, 2444410911, 2289899378, 358614269, 1707906454, 1341996079, 77048310, 3194786369, 288083060, 13862718, 5086952, 9753, 3642154
			},
			.prefetch0 = 20053,
			.prefetch1 = 40345,
			.ram = link_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3331359577, 1593084801, 3572658677, 922013848, 2642801094, 943843054, 3013180627, 2444410911, 2289899378, 358614269, 1707906454, 1341996079, 77048310, 5086948, 288083060, 13862718, 5061757, 9753, 3642158
			},
			.prefetch0 = 33563,
			.prefetch1 = 14001,
			.ram = link_final_ram_26,
			.ram_len = 12,
		},
		.transactions = link_transactions_26,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "027 LINK A5, # 4e55",
		.initial = {
			.regs = {
				2255820096, 3147716890, 3281524754, 4201460602, 1302406602, 2689318813, 2415511385, 1439736255, 1428326469, 2803457534, 3751735975, 3435222873, 1504310637, 1348383038, 3375333832, 6915882, 15346278, 258, 6189804
			},
			.prefetch0 = 20053,
			.prefetch1 = 63567,
			.ram = link_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2255820096, 3147716890, 3281524754, 4201460602, 1302406602, 2689318813, 2415511385, 1439736255, 1428326469, 2803457534, 3751735975, 3435222873, 1504310637, 6915878, 3375333832, 6913909, 15346278, 258, 6189808
			},
			.prefetch0 = 51912,
			.prefetch1 = 53170,
			.ram = link_final_ram_27,
			.ram_len = 12,
		},
		.transactions = link_transactions_27,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "028 LINK A4, # 4e54",
		.initial = {
			.regs = {
				1162294119, 905744177, 224198641, 3752017934, 498381124, 1958062725, 3187777164, 874152104, 1272287063, 689719886, 4180267972, 3845410199, 861159751, 663350830, 2183432673, 647608, 3050074, 8990, 4441716
			},
			.prefetch0 = 20052,
			.prefetch1 = 25362,
			.ram = link_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1162294119, 905744177, 224198641, 3752017934, 498381124, 1958062725, 3187777164, 874152104, 1272287063, 689719886, 4180267972, 3845410199, 3050070, 663350830, 2183432673, 647608, 3075432, 8990, 4441720
			},
			.prefetch0 = 59774,
			.prefetch1 = 22238,
			.ram = link_final_ram_28,
			.ram_len = 12,
		},
		.transactions = link_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 LINK A2, # 4e52",
		.initial = {
			.regs = {
				3557298635, 3066970696, 1386027627, 2367445149, 2354025739, 2558708927, 1286778922, 2558090057, 4244627515, 3951087949, 1430505376, 3054105068, 2390954802, 2940016086, 2988886486, 7516330, 7877012, 33040, 430502
			},
			.prefetch0 = 20050,
			.prefetch1 = 38248,
			.ram = link_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3557298635, 3066970696, 1386027627, 2367445149, 2354025739, 2558708927, 1286778922, 2558090057, 4244627515, 3951087949, 7516326, 3054105068, 2390954802, 2940016086, 2988886486, 7489038, 7877012, 33040, 430506
			},
			.prefetch0 = 48286,
			.prefetch1 = 45895,
			.ram = link_final_ram_29,
			.ram_len = 12,
		},
		.transactions = link_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 LINK A6, # 4e56",
		.initial = {
			.regs = {
				2400688376, 841225721, 1694601278, 2270219631, 3581195, 1893026433, 923540107, 2056272138, 1366339561, 1340367978, 2427023462, 2057194621, 3625158175, 930013503, 23305106, 9966638, 862030, 791, 10777606
			},
			.prefetch0 = 20054,
			.prefetch1 = 4962,
			.ram = link_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2400688376, 841225721, 1694601278, 2270219631, 3581195, 1893026433, 923540107, 2056272138, 1366339561, 1340367978, 2427023462, 2057194621, 3625158175, 930013503, 9966634, 9971596, 862030, 791, 10777610
			},
			.prefetch0 = 22327,
			.prefetch1 = 20954,
			.ram = link_final_ram_30,
			.ram_len = 12,
		},
		.transactions = link_transactions_30,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "031 LINK A7, # 4e57",
		.initial = {
			.regs = {
				187045059, 2786752463, 3672100522, 2440532229, 2058029568, 2072116228, 2630471332, 284449886, 1762901906, 52371921, 1097975625, 773804693, 1328493287, 1606381886, 2983816701, 8703904, 7629630, 33043, 11557134
			},
			.prefetch0 = 20055,
			.prefetch1 = 33880,
			.ram = link_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				187045059, 2786752463, 3672100522, 2440532229, 2058029568, 2072116228, 2630471332, 284449886, 1762901906, 52371921, 1097975625, 773804693, 1328493287, 1606381886, 2983816701, 8672244, 7629630, 33043, 11557138
			},
			.prefetch0 = 60799,
			.prefetch1 = 10749,
			.ram = link_final_ram_31,
			.ram_len = 12,
		},
		.transactions = link_transactions_31,
		.transactions_len = 4,
		.lenght = 16,
	},
};

#endif /* RBT_LINK_H */