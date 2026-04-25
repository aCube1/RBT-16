#ifndef RBT_NEGXB_H
#define RBT_NEGXB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte negxb_initial_ram_0[] = {
		{ .addr = 0xc41cd4, .byte = 0x40 },
		{ .addr = 0xc41cd5, .byte = 0x04 },
		{ .addr = 0xc41cd6, .byte = 0xaa },
		{ .addr = 0xc41cd7, .byte = 0x98 },
		{ .addr = 0xc41cd8, .byte = 0xce },
		{ .addr = 0xc41cd9, .byte = 0xe6 }
};

static const SST_RamByte negxb_final_ram_0[] = {
		{ .addr = 0xc41cd4, .byte = 0x40 },
		{ .addr = 0xc41cd5, .byte = 0x04 },
		{ .addr = 0xc41cd6, .byte = 0xaa },
		{ .addr = 0xc41cd7, .byte = 0x98 },
		{ .addr = 0xc41cd8, .byte = 0xce },
		{ .addr = 0xc41cd9, .byte = 0xe6 }
};

static const SST_Transaction negxb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12852440, .data = 52966, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_1[] = {
		{ .addr = 0xbafee2, .byte = 0x40 },
		{ .addr = 0xbafee3, .byte = 0x31 },
		{ .addr = 0xbafee4, .byte = 0xa4 },
		{ .addr = 0xbafee5, .byte = 0xae },
		{ .addr = 0xbafee6, .byte = 0x26 },
		{ .addr = 0xbafee7, .byte = 0x1e },
		{ .addr = 0x8c0312, .byte = 0x53 },
		{ .addr = 0x8c0313, .byte = 0x6e },
		{ .addr = 0xbafee8, .byte = 0x57 },
		{ .addr = 0xbafee9, .byte = 0xa7 }
};

static const SST_RamByte negxb_final_ram_1[] = {
		{ .addr = 0xbafee2, .byte = 0x40 },
		{ .addr = 0xbafee3, .byte = 0x31 },
		{ .addr = 0xbafee4, .byte = 0xa4 },
		{ .addr = 0xbafee5, .byte = 0xae },
		{ .addr = 0xbafee6, .byte = 0x26 },
		{ .addr = 0xbafee7, .byte = 0x1e },
		{ .addr = 0x8c0312, .byte = 0xac },
		{ .addr = 0x8c0313, .byte = 0x6e },
		{ .addr = 0xbafee8, .byte = 0x57 },
		{ .addr = 0xbafee9, .byte = 0xa7 }
};

static const SST_Transaction negxb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12254950, .data = 9758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9175826, .data = 21248, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12254952, .data = 22439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9175826, .data = 44032, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_2[] = {
		{ .addr = 0xb3fc8e, .byte = 0x40 },
		{ .addr = 0xb3fc8f, .byte = 0x24 },
		{ .addr = 0xb3fc90, .byte = 0x84 },
		{ .addr = 0xb3fc91, .byte = 0x7d },
		{ .addr = 0x21d43a, .byte = 0x89 },
		{ .addr = 0x21d43b, .byte = 0xd7 },
		{ .addr = 0xb3fc92, .byte = 0x98 },
		{ .addr = 0xb3fc93, .byte = 0x95 }
};

static const SST_RamByte negxb_final_ram_2[] = {
		{ .addr = 0xb3fc8e, .byte = 0x40 },
		{ .addr = 0xb3fc8f, .byte = 0x24 },
		{ .addr = 0xb3fc90, .byte = 0x84 },
		{ .addr = 0xb3fc91, .byte = 0x7d },
		{ .addr = 0x21d43a, .byte = 0x77 },
		{ .addr = 0x21d43b, .byte = 0xd7 },
		{ .addr = 0xb3fc92, .byte = 0x98 },
		{ .addr = 0xb3fc93, .byte = 0x95 }
};

static const SST_Transaction negxb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2217018, .data = 35072, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11795602, .data = 39061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2217018, .data = 30464, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_3[] = {
		{ .addr = 0xd35774, .byte = 0x40 },
		{ .addr = 0xd35775, .byte = 0x04 },
		{ .addr = 0xd35776, .byte = 0x05 },
		{ .addr = 0xd35777, .byte = 0xa7 },
		{ .addr = 0xd35778, .byte = 0xbc },
		{ .addr = 0xd35779, .byte = 0xa6 }
};

static const SST_RamByte negxb_final_ram_3[] = {
		{ .addr = 0xd35774, .byte = 0x40 },
		{ .addr = 0xd35775, .byte = 0x04 },
		{ .addr = 0xd35776, .byte = 0x05 },
		{ .addr = 0xd35777, .byte = 0xa7 },
		{ .addr = 0xd35778, .byte = 0xbc },
		{ .addr = 0xd35779, .byte = 0xa6 }
};

static const SST_Transaction negxb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13850488, .data = 48294, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_4[] = {
		{ .addr = 0x366050, .byte = 0x40 },
		{ .addr = 0x366051, .byte = 0x2a },
		{ .addr = 0x366052, .byte = 0x5e },
		{ .addr = 0x366053, .byte = 0x88 },
		{ .addr = 0x366054, .byte = 0x7d },
		{ .addr = 0x366055, .byte = 0x13 },
		{ .addr = 0x5a29f8, .byte = 0x6c },
		{ .addr = 0x5a29f9, .byte = 0x79 },
		{ .addr = 0x366056, .byte = 0xa5 },
		{ .addr = 0x366057, .byte = 0x25 }
};

static const SST_RamByte negxb_final_ram_4[] = {
		{ .addr = 0x366050, .byte = 0x40 },
		{ .addr = 0x366051, .byte = 0x2a },
		{ .addr = 0x366052, .byte = 0x5e },
		{ .addr = 0x366053, .byte = 0x88 },
		{ .addr = 0x366054, .byte = 0x7d },
		{ .addr = 0x366055, .byte = 0x13 },
		{ .addr = 0x5a29f8, .byte = 0x93 },
		{ .addr = 0x5a29f9, .byte = 0x79 },
		{ .addr = 0x366056, .byte = 0xa5 },
		{ .addr = 0x366057, .byte = 0x25 }
};

static const SST_Transaction negxb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3563604, .data = 32019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5908984, .data = 27648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3563606, .data = 42277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5908984, .data = 37632, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_5[] = {
		{ .addr = 0x3bf04a, .byte = 0x40 },
		{ .addr = 0x3bf04b, .byte = 0x29 },
		{ .addr = 0x3bf04c, .byte = 0x00 },
		{ .addr = 0x3bf04d, .byte = 0x98 },
		{ .addr = 0x3bf04e, .byte = 0x48 },
		{ .addr = 0x3bf04f, .byte = 0x45 },
		{ .addr = 0xb9268e, .byte = 0x4e },
		{ .addr = 0xb9268f, .byte = 0x8a },
		{ .addr = 0x3bf050, .byte = 0xb9 },
		{ .addr = 0x3bf051, .byte = 0x6a }
};

static const SST_RamByte negxb_final_ram_5[] = {
		{ .addr = 0x3bf04a, .byte = 0x40 },
		{ .addr = 0x3bf04b, .byte = 0x29 },
		{ .addr = 0x3bf04c, .byte = 0x00 },
		{ .addr = 0x3bf04d, .byte = 0x98 },
		{ .addr = 0x3bf04e, .byte = 0x48 },
		{ .addr = 0x3bf04f, .byte = 0x45 },
		{ .addr = 0xb9268e, .byte = 0xb1 },
		{ .addr = 0xb9268f, .byte = 0x8a },
		{ .addr = 0x3bf050, .byte = 0xb9 },
		{ .addr = 0x3bf051, .byte = 0x6a }
};

static const SST_Transaction negxb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3928142, .data = 18501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12134030, .data = 19968, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3928144, .data = 47466, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12134030, .data = 45312, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_6[] = {
		{ .addr = 0x80cb6e, .byte = 0x40 },
		{ .addr = 0x80cb6f, .byte = 0x2e },
		{ .addr = 0x80cb70, .byte = 0xa8 },
		{ .addr = 0x80cb71, .byte = 0x5e },
		{ .addr = 0x80cb72, .byte = 0x0b },
		{ .addr = 0x80cb73, .byte = 0x2c },
		{ .addr = 0xc25496, .byte = 0xe6 },
		{ .addr = 0xc25497, .byte = 0xc4 },
		{ .addr = 0x80cb74, .byte = 0xfa },
		{ .addr = 0x80cb75, .byte = 0x08 }
};

static const SST_RamByte negxb_final_ram_6[] = {
		{ .addr = 0x80cb6e, .byte = 0x40 },
		{ .addr = 0x80cb6f, .byte = 0x2e },
		{ .addr = 0x80cb70, .byte = 0xa8 },
		{ .addr = 0x80cb71, .byte = 0x5e },
		{ .addr = 0x80cb72, .byte = 0x0b },
		{ .addr = 0x80cb73, .byte = 0x2c },
		{ .addr = 0xc25496, .byte = 0x1a },
		{ .addr = 0xc25497, .byte = 0xc4 },
		{ .addr = 0x80cb74, .byte = 0xfa },
		{ .addr = 0x80cb75, .byte = 0x08 }
};

static const SST_Transaction negxb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8440690, .data = 2860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12735638, .data = 58880, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8440692, .data = 64008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12735638, .data = 6656, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_7[] = {
		{ .addr = 0x2c8b54, .byte = 0x40 },
		{ .addr = 0x2c8b55, .byte = 0x2c },
		{ .addr = 0x2c8b56, .byte = 0xb9 },
		{ .addr = 0x2c8b57, .byte = 0x4a },
		{ .addr = 0x2c8b58, .byte = 0x5d },
		{ .addr = 0x2c8b59, .byte = 0xa4 },
		{ .addr = 0x6d65c4, .byte = 0x32 },
		{ .addr = 0x6d65c5, .byte = 0x1f },
		{ .addr = 0x2c8b5a, .byte = 0x7a },
		{ .addr = 0x2c8b5b, .byte = 0xe5 }
};

static const SST_RamByte negxb_final_ram_7[] = {
		{ .addr = 0x2c8b54, .byte = 0x40 },
		{ .addr = 0x2c8b55, .byte = 0x2c },
		{ .addr = 0x2c8b56, .byte = 0xb9 },
		{ .addr = 0x2c8b57, .byte = 0x4a },
		{ .addr = 0x2c8b58, .byte = 0x5d },
		{ .addr = 0x2c8b59, .byte = 0xa4 },
		{ .addr = 0x6d65c4, .byte = 0x32 },
		{ .addr = 0x6d65c5, .byte = 0xe0 },
		{ .addr = 0x2c8b5a, .byte = 0x7a },
		{ .addr = 0x2c8b5b, .byte = 0xe5 }
};

static const SST_Transaction negxb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2919256, .data = 23972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7169476, .data = 31, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2919258, .data = 31461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7169476, .data = 224, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_8[] = {
		{ .addr = 0xe435b2, .byte = 0x40 },
		{ .addr = 0xe435b3, .byte = 0x2b },
		{ .addr = 0xe435b4, .byte = 0xec },
		{ .addr = 0xe435b5, .byte = 0x63 },
		{ .addr = 0xe435b6, .byte = 0x2e },
		{ .addr = 0xe435b7, .byte = 0x66 },
		{ .addr = 0x824532, .byte = 0xb3 },
		{ .addr = 0x824533, .byte = 0x77 },
		{ .addr = 0xe435b8, .byte = 0x3c },
		{ .addr = 0xe435b9, .byte = 0x28 }
};

static const SST_RamByte negxb_final_ram_8[] = {
		{ .addr = 0xe435b2, .byte = 0x40 },
		{ .addr = 0xe435b3, .byte = 0x2b },
		{ .addr = 0xe435b4, .byte = 0xec },
		{ .addr = 0xe435b5, .byte = 0x63 },
		{ .addr = 0xe435b6, .byte = 0x2e },
		{ .addr = 0xe435b7, .byte = 0x66 },
		{ .addr = 0x824532, .byte = 0x4d },
		{ .addr = 0x824533, .byte = 0x77 },
		{ .addr = 0xe435b8, .byte = 0x3c },
		{ .addr = 0xe435b9, .byte = 0x28 }
};

static const SST_Transaction negxb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14955958, .data = 11878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8537394, .data = 45824, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14955960, .data = 15400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8537394, .data = 19712, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_9[] = {
		{ .addr = 0x1fd10c, .byte = 0x40 },
		{ .addr = 0x1fd10d, .byte = 0x24 },
		{ .addr = 0x1fd10e, .byte = 0x08 },
		{ .addr = 0x1fd10f, .byte = 0x1c },
		{ .addr = 0xf6a31e, .byte = 0xd3 },
		{ .addr = 0xf6a31f, .byte = 0xb8 },
		{ .addr = 0x1fd110, .byte = 0x35 },
		{ .addr = 0x1fd111, .byte = 0xba }
};

static const SST_RamByte negxb_final_ram_9[] = {
		{ .addr = 0x1fd10c, .byte = 0x40 },
		{ .addr = 0x1fd10d, .byte = 0x24 },
		{ .addr = 0x1fd10e, .byte = 0x08 },
		{ .addr = 0x1fd10f, .byte = 0x1c },
		{ .addr = 0xf6a31e, .byte = 0xd3 },
		{ .addr = 0xf6a31f, .byte = 0x47 },
		{ .addr = 0x1fd110, .byte = 0x35 },
		{ .addr = 0x1fd111, .byte = 0xba }
};

static const SST_Transaction negxb_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16163614, .data = 184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2085136, .data = 13754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16163614, .data = 71, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_10[] = {
		{ .addr = 0xedbb98, .byte = 0x40 },
		{ .addr = 0xedbb99, .byte = 0x10 },
		{ .addr = 0xedbb9a, .byte = 0x19 },
		{ .addr = 0xedbb9b, .byte = 0xdc },
		{ .addr = 0xcf0166, .byte = 0x69 },
		{ .addr = 0xcf0167, .byte = 0xf1 },
		{ .addr = 0xedbb9c, .byte = 0x1b },
		{ .addr = 0xedbb9d, .byte = 0x0a }
};

static const SST_RamByte negxb_final_ram_10[] = {
		{ .addr = 0xedbb98, .byte = 0x40 },
		{ .addr = 0xedbb99, .byte = 0x10 },
		{ .addr = 0xedbb9a, .byte = 0x19 },
		{ .addr = 0xedbb9b, .byte = 0xdc },
		{ .addr = 0xcf0166, .byte = 0x97 },
		{ .addr = 0xcf0167, .byte = 0xf1 },
		{ .addr = 0xedbb9c, .byte = 0x1b },
		{ .addr = 0xedbb9d, .byte = 0x0a }
};

static const SST_Transaction negxb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13566310, .data = 26880, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15580060, .data = 6922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13566310, .data = 38656, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_11[] = {
		{ .addr = 0x203ca6, .byte = 0x40 },
		{ .addr = 0x203ca7, .byte = 0x35 },
		{ .addr = 0x203ca8, .byte = 0x7e },
		{ .addr = 0x203ca9, .byte = 0x71 },
		{ .addr = 0x203caa, .byte = 0xb7 },
		{ .addr = 0x203cab, .byte = 0x03 },
		{ .addr = 0xef6b9c, .byte = 0x94 },
		{ .addr = 0xef6b9d, .byte = 0x21 },
		{ .addr = 0x203cac, .byte = 0x30 },
		{ .addr = 0x203cad, .byte = 0x72 }
};

static const SST_RamByte negxb_final_ram_11[] = {
		{ .addr = 0x203ca6, .byte = 0x40 },
		{ .addr = 0x203ca7, .byte = 0x35 },
		{ .addr = 0x203ca8, .byte = 0x7e },
		{ .addr = 0x203ca9, .byte = 0x71 },
		{ .addr = 0x203caa, .byte = 0xb7 },
		{ .addr = 0x203cab, .byte = 0x03 },
		{ .addr = 0xef6b9c, .byte = 0x94 },
		{ .addr = 0xef6b9d, .byte = 0xde },
		{ .addr = 0x203cac, .byte = 0x30 },
		{ .addr = 0x203cad, .byte = 0x72 }
};

static const SST_Transaction negxb_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2112682, .data = 46851, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15690652, .data = 33, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2112684, .data = 12402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15690652, .data = 222, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_12[] = {
		{ .addr = 0x24e4c4, .byte = 0x40 },
		{ .addr = 0x24e4c5, .byte = 0x27 },
		{ .addr = 0x24e4c6, .byte = 0x87 },
		{ .addr = 0x24e4c7, .byte = 0xbc },
		{ .addr = 0x90e728, .byte = 0x74 },
		{ .addr = 0x90e729, .byte = 0xe9 },
		{ .addr = 0x24e4c8, .byte = 0x58 },
		{ .addr = 0x24e4c9, .byte = 0x6b }
};

static const SST_RamByte negxb_final_ram_12[] = {
		{ .addr = 0x24e4c4, .byte = 0x40 },
		{ .addr = 0x24e4c5, .byte = 0x27 },
		{ .addr = 0x24e4c6, .byte = 0x87 },
		{ .addr = 0x24e4c7, .byte = 0xbc },
		{ .addr = 0x90e728, .byte = 0x8b },
		{ .addr = 0x90e729, .byte = 0xe9 },
		{ .addr = 0x24e4c8, .byte = 0x58 },
		{ .addr = 0x24e4c9, .byte = 0x6b }
};

static const SST_Transaction negxb_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9496360, .data = 29696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2417864, .data = 22635, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9496360, .data = 35584, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_13[] = {
		{ .addr = 0x79d7ce, .byte = 0x40 },
		{ .addr = 0x79d7cf, .byte = 0x14 },
		{ .addr = 0x79d7d0, .byte = 0x0f },
		{ .addr = 0x79d7d1, .byte = 0xce },
		{ .addr = 0x82e18c, .byte = 0xf7 },
		{ .addr = 0x82e18d, .byte = 0x26 },
		{ .addr = 0x79d7d2, .byte = 0x55 },
		{ .addr = 0x79d7d3, .byte = 0xcb }
};

static const SST_RamByte negxb_final_ram_13[] = {
		{ .addr = 0x79d7ce, .byte = 0x40 },
		{ .addr = 0x79d7cf, .byte = 0x14 },
		{ .addr = 0x79d7d0, .byte = 0x0f },
		{ .addr = 0x79d7d1, .byte = 0xce },
		{ .addr = 0x82e18c, .byte = 0xf7 },
		{ .addr = 0x82e18d, .byte = 0xd9 },
		{ .addr = 0x79d7d2, .byte = 0x55 },
		{ .addr = 0x79d7d3, .byte = 0xcb }
};

static const SST_Transaction negxb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8577420, .data = 38, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7985106, .data = 21963, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8577420, .data = 217, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_14[] = {
		{ .addr = 0xad9702, .byte = 0x40 },
		{ .addr = 0xad9703, .byte = 0x29 },
		{ .addr = 0xad9704, .byte = 0xed },
		{ .addr = 0xad9705, .byte = 0xa8 },
		{ .addr = 0xad9706, .byte = 0xc8 },
		{ .addr = 0xad9707, .byte = 0x48 },
		{ .addr = 0x890772, .byte = 0xa0 },
		{ .addr = 0x890773, .byte = 0xc2 },
		{ .addr = 0xad9708, .byte = 0x21 },
		{ .addr = 0xad9709, .byte = 0x12 }
};

static const SST_RamByte negxb_final_ram_14[] = {
		{ .addr = 0xad9702, .byte = 0x40 },
		{ .addr = 0xad9703, .byte = 0x29 },
		{ .addr = 0xad9704, .byte = 0xed },
		{ .addr = 0xad9705, .byte = 0xa8 },
		{ .addr = 0xad9706, .byte = 0xc8 },
		{ .addr = 0xad9707, .byte = 0x48 },
		{ .addr = 0x890772, .byte = 0x5f },
		{ .addr = 0x890773, .byte = 0xc2 },
		{ .addr = 0xad9708, .byte = 0x21 },
		{ .addr = 0xad9709, .byte = 0x12 }
};

static const SST_Transaction negxb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11376390, .data = 51272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8980338, .data = 40960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11376392, .data = 8466, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8980338, .data = 24320, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_15[] = {
		{ .addr = 0x4b486a, .byte = 0x40 },
		{ .addr = 0x4b486b, .byte = 0x30 },
		{ .addr = 0x4b486c, .byte = 0xc2 },
		{ .addr = 0x4b486d, .byte = 0x57 },
		{ .addr = 0x4b486e, .byte = 0x06 },
		{ .addr = 0x4b486f, .byte = 0x1e },
		{ .addr = 0x8587a6, .byte = 0x92 },
		{ .addr = 0x8587a7, .byte = 0x2d },
		{ .addr = 0x4b4870, .byte = 0x8a },
		{ .addr = 0x4b4871, .byte = 0xe1 }
};

static const SST_RamByte negxb_final_ram_15[] = {
		{ .addr = 0x4b486a, .byte = 0x40 },
		{ .addr = 0x4b486b, .byte = 0x30 },
		{ .addr = 0x4b486c, .byte = 0xc2 },
		{ .addr = 0x4b486d, .byte = 0x57 },
		{ .addr = 0x4b486e, .byte = 0x06 },
		{ .addr = 0x4b486f, .byte = 0x1e },
		{ .addr = 0x8587a6, .byte = 0x92 },
		{ .addr = 0x8587a7, .byte = 0xd3 },
		{ .addr = 0x4b4870, .byte = 0x8a },
		{ .addr = 0x4b4871, .byte = 0xe1 }
};

static const SST_Transaction negxb_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4933742, .data = 1566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8751014, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4933744, .data = 35553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8751014, .data = 211, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_16[] = {
		{ .addr = 0x03db1e, .byte = 0x40 },
		{ .addr = 0x03db1f, .byte = 0x1b },
		{ .addr = 0x03db20, .byte = 0xd5 },
		{ .addr = 0x03db21, .byte = 0x39 },
		{ .addr = 0x720fd4, .byte = 0xbb },
		{ .addr = 0x720fd5, .byte = 0xf7 },
		{ .addr = 0x03db22, .byte = 0xfc },
		{ .addr = 0x03db23, .byte = 0xab }
};

static const SST_RamByte negxb_final_ram_16[] = {
		{ .addr = 0x03db1e, .byte = 0x40 },
		{ .addr = 0x03db1f, .byte = 0x1b },
		{ .addr = 0x03db20, .byte = 0xd5 },
		{ .addr = 0x03db21, .byte = 0x39 },
		{ .addr = 0x720fd4, .byte = 0x44 },
		{ .addr = 0x720fd5, .byte = 0xf7 },
		{ .addr = 0x03db22, .byte = 0xfc },
		{ .addr = 0x03db23, .byte = 0xab }
};

static const SST_Transaction negxb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7475156, .data = 47872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 252706, .data = 64683, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7475156, .data = 17408, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_17[] = {
		{ .addr = 0x44ce80, .byte = 0x40 },
		{ .addr = 0x44ce81, .byte = 0x15 },
		{ .addr = 0x44ce82, .byte = 0xf4 },
		{ .addr = 0x44ce83, .byte = 0xd1 },
		{ .addr = 0xb22ea6, .byte = 0x79 },
		{ .addr = 0xb22ea7, .byte = 0x53 },
		{ .addr = 0x44ce84, .byte = 0x39 },
		{ .addr = 0x44ce85, .byte = 0x62 }
};

static const SST_RamByte negxb_final_ram_17[] = {
		{ .addr = 0x44ce80, .byte = 0x40 },
		{ .addr = 0x44ce81, .byte = 0x15 },
		{ .addr = 0x44ce82, .byte = 0xf4 },
		{ .addr = 0x44ce83, .byte = 0xd1 },
		{ .addr = 0xb22ea6, .byte = 0x79 },
		{ .addr = 0xb22ea7, .byte = 0xac },
		{ .addr = 0x44ce84, .byte = 0x39 },
		{ .addr = 0x44ce85, .byte = 0x62 }
};

static const SST_Transaction negxb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11677350, .data = 83, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4509316, .data = 14690, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11677350, .data = 172, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_18[] = {
		{ .addr = 0xe2fbb4, .byte = 0x40 },
		{ .addr = 0xe2fbb5, .byte = 0x01 },
		{ .addr = 0xe2fbb6, .byte = 0x2f },
		{ .addr = 0xe2fbb7, .byte = 0xda },
		{ .addr = 0xe2fbb8, .byte = 0x0f },
		{ .addr = 0xe2fbb9, .byte = 0xb4 }
};

static const SST_RamByte negxb_final_ram_18[] = {
		{ .addr = 0xe2fbb4, .byte = 0x40 },
		{ .addr = 0xe2fbb5, .byte = 0x01 },
		{ .addr = 0xe2fbb6, .byte = 0x2f },
		{ .addr = 0xe2fbb7, .byte = 0xda },
		{ .addr = 0xe2fbb8, .byte = 0x0f },
		{ .addr = 0xe2fbb9, .byte = 0xb4 }
};

static const SST_Transaction negxb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14875576, .data = 4020, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_19[] = {
		{ .addr = 0x3a7508, .byte = 0x40 },
		{ .addr = 0x3a7509, .byte = 0x32 },
		{ .addr = 0x3a750a, .byte = 0x1f },
		{ .addr = 0x3a750b, .byte = 0x53 },
		{ .addr = 0x3a750c, .byte = 0x94 },
		{ .addr = 0x3a750d, .byte = 0xd4 },
		{ .addr = 0x9194d8, .byte = 0x4d },
		{ .addr = 0x9194d9, .byte = 0x9f },
		{ .addr = 0x3a750e, .byte = 0xd0 },
		{ .addr = 0x3a750f, .byte = 0xbc }
};

static const SST_RamByte negxb_final_ram_19[] = {
		{ .addr = 0x3a7508, .byte = 0x40 },
		{ .addr = 0x3a7509, .byte = 0x32 },
		{ .addr = 0x3a750a, .byte = 0x1f },
		{ .addr = 0x3a750b, .byte = 0x53 },
		{ .addr = 0x3a750c, .byte = 0x94 },
		{ .addr = 0x3a750d, .byte = 0xd4 },
		{ .addr = 0x9194d8, .byte = 0x4d },
		{ .addr = 0x9194d9, .byte = 0x61 },
		{ .addr = 0x3a750e, .byte = 0xd0 },
		{ .addr = 0x3a750f, .byte = 0xbc }
};

static const SST_Transaction negxb_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3831052, .data = 38100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9540824, .data = 159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3831054, .data = 53436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9540824, .data = 97, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_20[] = {
		{ .addr = 0xef2a6a, .byte = 0x40 },
		{ .addr = 0xef2a6b, .byte = 0x12 },
		{ .addr = 0xef2a6c, .byte = 0x8c },
		{ .addr = 0xef2a6d, .byte = 0xda },
		{ .addr = 0x878d36, .byte = 0xf4 },
		{ .addr = 0x878d37, .byte = 0xe0 },
		{ .addr = 0xef2a6e, .byte = 0x97 },
		{ .addr = 0xef2a6f, .byte = 0x36 }
};

static const SST_RamByte negxb_final_ram_20[] = {
		{ .addr = 0xef2a6a, .byte = 0x40 },
		{ .addr = 0xef2a6b, .byte = 0x12 },
		{ .addr = 0xef2a6c, .byte = 0x8c },
		{ .addr = 0xef2a6d, .byte = 0xda },
		{ .addr = 0x878d36, .byte = 0xf4 },
		{ .addr = 0x878d37, .byte = 0x20 },
		{ .addr = 0xef2a6e, .byte = 0x97 },
		{ .addr = 0xef2a6f, .byte = 0x36 }
};

static const SST_Transaction negxb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8883510, .data = 224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15673966, .data = 38710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8883510, .data = 32, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_21[] = {
		{ .addr = 0x241b1e, .byte = 0x40 },
		{ .addr = 0x241b1f, .byte = 0x31 },
		{ .addr = 0x241b20, .byte = 0xd7 },
		{ .addr = 0x241b21, .byte = 0xb8 },
		{ .addr = 0x241b22, .byte = 0x4e },
		{ .addr = 0x241b23, .byte = 0xd7 },
		{ .addr = 0xac421c, .byte = 0xb9 },
		{ .addr = 0xac421d, .byte = 0xfe },
		{ .addr = 0x241b24, .byte = 0xef },
		{ .addr = 0x241b25, .byte = 0x1f }
};

static const SST_RamByte negxb_final_ram_21[] = {
		{ .addr = 0x241b1e, .byte = 0x40 },
		{ .addr = 0x241b1f, .byte = 0x31 },
		{ .addr = 0x241b20, .byte = 0xd7 },
		{ .addr = 0x241b21, .byte = 0xb8 },
		{ .addr = 0x241b22, .byte = 0x4e },
		{ .addr = 0x241b23, .byte = 0xd7 },
		{ .addr = 0xac421c, .byte = 0x47 },
		{ .addr = 0xac421d, .byte = 0xfe },
		{ .addr = 0x241b24, .byte = 0xef },
		{ .addr = 0x241b25, .byte = 0x1f }
};

static const SST_Transaction negxb_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2366242, .data = 20183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11289116, .data = 47360, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2366244, .data = 61215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11289116, .data = 18176, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_22[] = {
		{ .addr = 0xc67b04, .byte = 0x40 },
		{ .addr = 0xc67b05, .byte = 0x04 },
		{ .addr = 0xc67b06, .byte = 0x04 },
		{ .addr = 0xc67b07, .byte = 0x5e },
		{ .addr = 0xc67b08, .byte = 0x36 },
		{ .addr = 0xc67b09, .byte = 0x88 }
};

static const SST_RamByte negxb_final_ram_22[] = {
		{ .addr = 0xc67b04, .byte = 0x40 },
		{ .addr = 0xc67b05, .byte = 0x04 },
		{ .addr = 0xc67b06, .byte = 0x04 },
		{ .addr = 0xc67b07, .byte = 0x5e },
		{ .addr = 0xc67b08, .byte = 0x36 },
		{ .addr = 0xc67b09, .byte = 0x88 }
};

static const SST_Transaction negxb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13007624, .data = 13960, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_23[] = {
		{ .addr = 0x77870e, .byte = 0x40 },
		{ .addr = 0x77870f, .byte = 0x27 },
		{ .addr = 0x778710, .byte = 0x13 },
		{ .addr = 0x778711, .byte = 0xca },
		{ .addr = 0x25853a, .byte = 0x9b },
		{ .addr = 0x25853b, .byte = 0x8b },
		{ .addr = 0x778712, .byte = 0x9c },
		{ .addr = 0x778713, .byte = 0xf5 }
};

static const SST_RamByte negxb_final_ram_23[] = {
		{ .addr = 0x77870e, .byte = 0x40 },
		{ .addr = 0x77870f, .byte = 0x27 },
		{ .addr = 0x778710, .byte = 0x13 },
		{ .addr = 0x778711, .byte = 0xca },
		{ .addr = 0x25853a, .byte = 0x64 },
		{ .addr = 0x25853b, .byte = 0x8b },
		{ .addr = 0x778712, .byte = 0x9c },
		{ .addr = 0x778713, .byte = 0xf5 }
};

static const SST_Transaction negxb_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2458938, .data = 39680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7833362, .data = 40181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2458938, .data = 25600, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_24[] = {
		{ .addr = 0x156b5c, .byte = 0x40 },
		{ .addr = 0x156b5d, .byte = 0x32 },
		{ .addr = 0x156b5e, .byte = 0xb6 },
		{ .addr = 0x156b5f, .byte = 0x49 },
		{ .addr = 0x156b60, .byte = 0x87 },
		{ .addr = 0x156b61, .byte = 0x35 },
		{ .addr = 0xb02486, .byte = 0x19 },
		{ .addr = 0xb02487, .byte = 0x5d },
		{ .addr = 0x156b62, .byte = 0xaa },
		{ .addr = 0x156b63, .byte = 0x16 }
};

static const SST_RamByte negxb_final_ram_24[] = {
		{ .addr = 0x156b5c, .byte = 0x40 },
		{ .addr = 0x156b5d, .byte = 0x32 },
		{ .addr = 0x156b5e, .byte = 0xb6 },
		{ .addr = 0x156b5f, .byte = 0x49 },
		{ .addr = 0x156b60, .byte = 0x87 },
		{ .addr = 0x156b61, .byte = 0x35 },
		{ .addr = 0xb02486, .byte = 0xe6 },
		{ .addr = 0xb02487, .byte = 0x5d },
		{ .addr = 0x156b62, .byte = 0xaa },
		{ .addr = 0x156b63, .byte = 0x16 }
};

static const SST_Transaction negxb_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1403744, .data = 34613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11543686, .data = 6400, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1403746, .data = 43542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11543686, .data = 58880, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_25[] = {
		{ .addr = 0x63b5c8, .byte = 0x40 },
		{ .addr = 0x63b5c9, .byte = 0x01 },
		{ .addr = 0x63b5ca, .byte = 0x92 },
		{ .addr = 0x63b5cb, .byte = 0x82 },
		{ .addr = 0x63b5cc, .byte = 0x0f },
		{ .addr = 0x63b5cd, .byte = 0x91 }
};

static const SST_RamByte negxb_final_ram_25[] = {
		{ .addr = 0x63b5c8, .byte = 0x40 },
		{ .addr = 0x63b5c9, .byte = 0x01 },
		{ .addr = 0x63b5ca, .byte = 0x92 },
		{ .addr = 0x63b5cb, .byte = 0x82 },
		{ .addr = 0x63b5cc, .byte = 0x0f },
		{ .addr = 0x63b5cd, .byte = 0x91 }
};

static const SST_Transaction negxb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6534604, .data = 3985, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_26[] = {
		{ .addr = 0x1aaa38, .byte = 0x40 },
		{ .addr = 0x1aaa39, .byte = 0x35 },
		{ .addr = 0x1aaa3a, .byte = 0x7a },
		{ .addr = 0x1aaa3b, .byte = 0x08 },
		{ .addr = 0x1aaa3c, .byte = 0x1a },
		{ .addr = 0x1aaa3d, .byte = 0x02 },
		{ .addr = 0xd6a7a4, .byte = 0xda },
		{ .addr = 0xd6a7a5, .byte = 0x30 },
		{ .addr = 0x1aaa3e, .byte = 0xcf },
		{ .addr = 0x1aaa3f, .byte = 0xb2 }
};

static const SST_RamByte negxb_final_ram_26[] = {
		{ .addr = 0x1aaa38, .byte = 0x40 },
		{ .addr = 0x1aaa39, .byte = 0x35 },
		{ .addr = 0x1aaa3a, .byte = 0x7a },
		{ .addr = 0x1aaa3b, .byte = 0x08 },
		{ .addr = 0x1aaa3c, .byte = 0x1a },
		{ .addr = 0x1aaa3d, .byte = 0x02 },
		{ .addr = 0xd6a7a4, .byte = 0x25 },
		{ .addr = 0xd6a7a5, .byte = 0x30 },
		{ .addr = 0x1aaa3e, .byte = 0xcf },
		{ .addr = 0x1aaa3f, .byte = 0xb2 }
};

static const SST_Transaction negxb_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1747516, .data = 6658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14067620, .data = 55808, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1747518, .data = 53170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14067620, .data = 9472, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_27[] = {
		{ .addr = 0x1f84d0, .byte = 0x40 },
		{ .addr = 0x1f84d1, .byte = 0x1b },
		{ .addr = 0x1f84d2, .byte = 0x57 },
		{ .addr = 0x1f84d3, .byte = 0xa1 },
		{ .addr = 0xd03cca, .byte = 0x32 },
		{ .addr = 0xd03ccb, .byte = 0x36 },
		{ .addr = 0x1f84d4, .byte = 0xf6 },
		{ .addr = 0x1f84d5, .byte = 0x46 }
};

static const SST_RamByte negxb_final_ram_27[] = {
		{ .addr = 0x1f84d0, .byte = 0x40 },
		{ .addr = 0x1f84d1, .byte = 0x1b },
		{ .addr = 0x1f84d2, .byte = 0x57 },
		{ .addr = 0x1f84d3, .byte = 0xa1 },
		{ .addr = 0xd03cca, .byte = 0x32 },
		{ .addr = 0xd03ccb, .byte = 0xca },
		{ .addr = 0x1f84d4, .byte = 0xf6 },
		{ .addr = 0x1f84d5, .byte = 0x46 }
};

static const SST_Transaction negxb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13647050, .data = 54, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2065620, .data = 63046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13647050, .data = 202, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_28[] = {
		{ .addr = 0x3c62fe, .byte = 0x40 },
		{ .addr = 0x3c62ff, .byte = 0x35 },
		{ .addr = 0x3c6300, .byte = 0x00 },
		{ .addr = 0x3c6301, .byte = 0x54 },
		{ .addr = 0x3c6302, .byte = 0xd1 },
		{ .addr = 0x3c6303, .byte = 0xb7 },
		{ .addr = 0xff2fb8, .byte = 0x52 },
		{ .addr = 0xff2fb9, .byte = 0xbc },
		{ .addr = 0x3c6304, .byte = 0x11 },
		{ .addr = 0x3c6305, .byte = 0xf4 }
};

static const SST_RamByte negxb_final_ram_28[] = {
		{ .addr = 0x3c62fe, .byte = 0x40 },
		{ .addr = 0x3c62ff, .byte = 0x35 },
		{ .addr = 0x3c6300, .byte = 0x00 },
		{ .addr = 0x3c6301, .byte = 0x54 },
		{ .addr = 0x3c6302, .byte = 0xd1 },
		{ .addr = 0x3c6303, .byte = 0xb7 },
		{ .addr = 0xff2fb8, .byte = 0xad },
		{ .addr = 0xff2fb9, .byte = 0xbc },
		{ .addr = 0x3c6304, .byte = 0x11 },
		{ .addr = 0x3c6305, .byte = 0xf4 }
};

static const SST_Transaction negxb_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3957506, .data = 53687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16723896, .data = 20992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3957508, .data = 4596, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16723896, .data = 44288, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_29[] = {
		{ .addr = 0xafe0ee, .byte = 0x40 },
		{ .addr = 0xafe0ef, .byte = 0x22 },
		{ .addr = 0xafe0f0, .byte = 0xf5 },
		{ .addr = 0xafe0f1, .byte = 0x15 },
		{ .addr = 0xaf1388, .byte = 0xcd },
		{ .addr = 0xaf1389, .byte = 0xe4 },
		{ .addr = 0xafe0f2, .byte = 0x3e },
		{ .addr = 0xafe0f3, .byte = 0x82 }
};

static const SST_RamByte negxb_final_ram_29[] = {
		{ .addr = 0xafe0ee, .byte = 0x40 },
		{ .addr = 0xafe0ef, .byte = 0x22 },
		{ .addr = 0xafe0f0, .byte = 0xf5 },
		{ .addr = 0xafe0f1, .byte = 0x15 },
		{ .addr = 0xaf1388, .byte = 0x33 },
		{ .addr = 0xaf1389, .byte = 0xe4 },
		{ .addr = 0xafe0f2, .byte = 0x3e },
		{ .addr = 0xafe0f3, .byte = 0x82 }
};

static const SST_Transaction negxb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11473800, .data = 52480, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11526386, .data = 16002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11473800, .data = 13056, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_30[] = {
		{ .addr = 0xea0a2a, .byte = 0x40 },
		{ .addr = 0xea0a2b, .byte = 0x2e },
		{ .addr = 0xea0a2c, .byte = 0x7b },
		{ .addr = 0xea0a2d, .byte = 0xbf },
		{ .addr = 0xea0a2e, .byte = 0x19 },
		{ .addr = 0xea0a2f, .byte = 0xcf },
		{ .addr = 0xa74060, .byte = 0x64 },
		{ .addr = 0xa74061, .byte = 0xcc },
		{ .addr = 0xea0a30, .byte = 0xef },
		{ .addr = 0xea0a31, .byte = 0xdd }
};

static const SST_RamByte negxb_final_ram_30[] = {
		{ .addr = 0xea0a2a, .byte = 0x40 },
		{ .addr = 0xea0a2b, .byte = 0x2e },
		{ .addr = 0xea0a2c, .byte = 0x7b },
		{ .addr = 0xea0a2d, .byte = 0xbf },
		{ .addr = 0xea0a2e, .byte = 0x19 },
		{ .addr = 0xea0a2f, .byte = 0xcf },
		{ .addr = 0xa74060, .byte = 0x64 },
		{ .addr = 0xa74061, .byte = 0x34 },
		{ .addr = 0xea0a30, .byte = 0xef },
		{ .addr = 0xea0a31, .byte = 0xdd }
};

static const SST_Transaction negxb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15338030, .data = 6607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10960992, .data = 204, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15338032, .data = 61405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10960992, .data = 52, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxb_initial_ram_31[] = {
		{ .addr = 0x3c062e, .byte = 0x40 },
		{ .addr = 0x3c062f, .byte = 0x39 },
		{ .addr = 0x3c0630, .byte = 0x95 },
		{ .addr = 0x3c0631, .byte = 0xef },
		{ .addr = 0x3c0632, .byte = 0xa6 },
		{ .addr = 0x3c0633, .byte = 0x4d },
		{ .addr = 0x3c0634, .byte = 0xc1 },
		{ .addr = 0x3c0635, .byte = 0x3b },
		{ .addr = 0xefa64c, .byte = 0xed },
		{ .addr = 0xefa64d, .byte = 0x8f },
		{ .addr = 0x3c0636, .byte = 0x44 },
		{ .addr = 0x3c0637, .byte = 0x6f }
};

static const SST_RamByte negxb_final_ram_31[] = {
		{ .addr = 0x3c062e, .byte = 0x40 },
		{ .addr = 0x3c062f, .byte = 0x39 },
		{ .addr = 0x3c0630, .byte = 0x95 },
		{ .addr = 0x3c0631, .byte = 0xef },
		{ .addr = 0x3c0632, .byte = 0xa6 },
		{ .addr = 0x3c0633, .byte = 0x4d },
		{ .addr = 0x3c0634, .byte = 0xc1 },
		{ .addr = 0x3c0635, .byte = 0x3b },
		{ .addr = 0xefa64c, .byte = 0xed },
		{ .addr = 0xefa64d, .byte = 0x71 },
		{ .addr = 0x3c0636, .byte = 0x44 },
		{ .addr = 0x3c0637, .byte = 0x6f }
};

static const SST_Transaction negxb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3933746, .data = 42573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3933748, .data = 49467, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15705676, .data = 143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3933750, .data = 17519, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15705676, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase negxb[] = {
	{
		.name = "000 NEGX.b D4 4004",
		.initial = {
			.regs = {
				3980333592, 874802409, 3547105131, 2086528331, 3516025262, 4018885167, 3021613333, 725556595, 4135520359, 4262412885, 3628678038, 1903614322, 1837529438, 1174442293, 258316547, 18164, 506524, 9473, 12852440
			},
			.prefetch0 = 16388,
			.prefetch1 = 43672,
			.ram = negxb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3980333592, 874802409, 3547105131, 2086528331, 3516025170, 4018885167, 3021613333, 725556595, 4135520359, 4262412885, 3628678038, 1903614322, 1837529438, 1174442293, 258316547, 18164, 506524, 9489, 12852442
			},
			.prefetch0 = 43672,
			.prefetch1 = 52966,
			.ram = negxb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = negxb_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 NEGX.b (d8, A1, Xn) 4031",
		.initial = {
			.regs = {
				3055521137, 3466465156, 34229981, 3044806033, 865390728, 3786561113, 1471572538, 3559170719, 4010134732, 965504390, 2462946782, 1548350283, 2262102445, 3127093732, 3354554673, 1872332, 1607140, 33566, 12254950
			},
			.prefetch0 = 16433,
			.prefetch1 = 42158,
			.ram = negxb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3055521137, 3466465156, 34229981, 3044806033, 865390728, 3786561113, 1471572538, 3559170719, 4010134732, 965504390, 2462946782, 1548350283, 2262102445, 3127093732, 3354554673, 1872332, 1607140, 33561, 12254954
			},
			.prefetch0 = 9758,
			.prefetch1 = 22439,
			.ram = negxb_final_ram_1,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 NEGX.b -(A4) 4024",
		.initial = {
			.regs = {
				3125090859, 3118354489, 1136350604, 3393787694, 3238491954, 4005497426, 2891118263, 1004346531, 3764900287, 2862348789, 555255301, 3869339978, 1562498107, 2499551444, 3153125524, 8655462, 15772006, 1805, 11795602
			},
			.prefetch0 = 16420,
			.prefetch1 = 33917,
			.ram = negxb_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3125090859, 3118354489, 1136350604, 3393787694, 3238491954, 4005497426, 2891118263, 1004346531, 3764900287, 2862348789, 555255301, 3869339978, 1562498106, 2499551444, 3153125524, 8655462, 15772006, 1809, 11795604
			},
			.prefetch0 = 33917,
			.prefetch1 = 39061,
			.ram = negxb_final_ram_2,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 NEGX.b D4 4004",
		.initial = {
			.regs = {
				90055716, 568128738, 3321592209, 2553859477, 4149175188, 482633286, 2288226882, 1637028649, 816591969, 2957978730, 2207127804, 806712622, 3669121621, 4024690689, 582714623, 12714424, 10568548, 8457, 13850488
			},
			.prefetch0 = 16388,
			.prefetch1 = 1447,
			.ram = negxb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				90055716, 568128738, 3321592209, 2553859477, 4149175148, 482633286, 2288226882, 1637028649, 816591969, 2957978730, 2207127804, 806712622, 3669121621, 4024690689, 582714623, 12714424, 10568548, 8465, 13850490
			},
			.prefetch0 = 1447,
			.prefetch1 = 48294,
			.ram = negxb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = negxb_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 NEGX.b (d16, A2) 402a",
		.initial = {
			.regs = {
				998443904, 2259111368, 1228843639, 3810506441, 1437941792, 2328424090, 1444964719, 2152481312, 2805098589, 2072396419, 2824457072, 3910612013, 2818190966, 36383053, 2218400538, 3554128, 14739698, 8989, 3563604
			},
			.prefetch0 = 16426,
			.prefetch1 = 24200,
			.ram = negxb_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				998443904, 2259111368, 1228843639, 3810506441, 1437941792, 2328424090, 1444964719, 2152481312, 2805098589, 2072396419, 2824457072, 3910612013, 2818190966, 36383053, 2218400538, 3554128, 14739698, 8985, 3563608
			},
			.prefetch0 = 32019,
			.prefetch1 = 42277,
			.ram = negxb_final_ram_4,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 NEGX.b (d16, A1) 4029",
		.initial = {
			.regs = {
				2008001250, 2678209083, 2450012599, 3794843476, 1601281445, 1992275720, 3159984875, 2850857083, 3864680344, 2545493494, 2399163059, 787370372, 2504137126, 83601877, 2601949247, 3714546, 4827094, 34587, 3928142
			},
			.prefetch0 = 16425,
			.prefetch1 = 152,
			.ram = negxb_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2008001250, 2678209083, 2450012599, 3794843476, 1601281445, 1992275720, 3159984875, 2850857083, 3864680344, 2545493494, 2399163059, 787370372, 2504137126, 83601877, 2601949247, 3714546, 4827094, 34585, 3928146
			},
			.prefetch0 = 18501,
			.prefetch1 = 47466,
			.ram = negxb_final_ram_5,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 NEGX.b (d16, A6) 402e",
		.initial = {
			.regs = {
				1349095242, 286005377, 476599640, 2015972904, 498149045, 2804880488, 2954639948, 4034019785, 3699993335, 75181681, 1821821469, 2645883689, 4083024158, 344441261, 3485641784, 7673828, 7684590, 33546, 8440690
			},
			.prefetch0 = 16430,
			.prefetch1 = 43102,
			.ram = negxb_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1349095242, 286005377, 476599640, 2015972904, 498149045, 2804880488, 2954639948, 4034019785, 3699993335, 75181681, 1821821469, 2645883689, 4083024158, 344441261, 3485641784, 7673828, 7684590, 33553, 8440694
			},
			.prefetch0 = 2860,
			.prefetch1 = 64008,
			.ram = negxb_final_ram_6,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_6,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "007 NEGX.b (d16, A4) 402c",
		.initial = {
			.regs = {
				3210955366, 344866354, 3848782077, 1269448822, 4095686624, 2518272786, 769136344, 2467261046, 213679401, 3089546035, 788868689, 3671719760, 1097706619, 293010601, 3252923831, 2768966, 12925846, 9498, 2919256
			},
			.prefetch0 = 16428,
			.prefetch1 = 47434,
			.ram = negxb_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3210955366, 344866354, 3848782077, 1269448822, 4095686624, 2518272786, 769136344, 2467261046, 213679401, 3089546035, 788868689, 3671719760, 1097706619, 293010601, 3252923831, 2768966, 12925846, 9497, 2919260
			},
			.prefetch0 = 23972,
			.prefetch1 = 31461,
			.ram = negxb_final_ram_7,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 NEGX.b (d16, A3) 402b",
		.initial = {
			.regs = {
				727331514, 2129904542, 1431898769, 1377672566, 3195588847, 3355095482, 2043444571, 4087963902, 3327069310, 3084917647, 1642332960, 2458015951, 117001456, 926412525, 262629423, 9669904, 10859630, 34055, 14955958
			},
			.prefetch0 = 16427,
			.prefetch1 = 60515,
			.ram = negxb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				727331514, 2129904542, 1431898769, 1377672566, 3195588847, 3355095482, 2043444571, 4087963902, 3327069310, 3084917647, 1642332960, 2458015951, 117001456, 926412525, 262629423, 9669904, 10859630, 34065, 14955962
			},
			.prefetch0 = 11878,
			.prefetch1 = 15400,
			.ram = negxb_final_ram_8,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_8,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "009 NEGX.b -(A4) 4024",
		.initial = {
			.regs = {
				3093131903, 1023839092, 3537678522, 4023702418, 428700789, 2346847446, 3133283557, 3104242941, 3875640752, 2932610880, 692436683, 1918156335, 1442226976, 1592805651, 2314830692, 334864, 2525442, 42768, 2085136
			},
			.prefetch0 = 16420,
			.prefetch1 = 2076,
			.ram = negxb_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3093131903, 1023839092, 3537678522, 4023702418, 428700789, 2346847446, 3133283557, 3104242941, 3875640752, 2932610880, 692436683, 1918156335, 1442226975, 1592805651, 2314830692, 334864, 2525442, 42769, 2085138
			},
			.prefetch0 = 2076,
			.prefetch1 = 13754,
			.ram = negxb_final_ram_9,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 NEGX.b (A0) 4010",
		.initial = {
			.regs = {
				940540825, 2741637478, 2770775338, 3057418180, 3853950694, 1419505064, 3618758893, 2695065884, 2362376550, 1308071214, 506187088, 3558783993, 3107879728, 4008446045, 2429977749, 9772306, 938818, 1032, 15580060
			},
			.prefetch0 = 16400,
			.prefetch1 = 6620,
			.ram = negxb_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				940540825, 2741637478, 2770775338, 3057418180, 3853950694, 1419505064, 3618758893, 2695065884, 2362376550, 1308071214, 506187088, 3558783993, 3107879728, 4008446045, 2429977749, 9772306, 938818, 1049, 15580062
			},
			.prefetch0 = 6620,
			.prefetch1 = 6922,
			.ram = negxb_final_ram_10,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 NEGX.b (d8, A5, Xn) 4035",
		.initial = {
			.regs = {
				2706381863, 2449946077, 3685503788, 4152512479, 323815923, 1628336818, 575003298, 1409761647, 1899512675, 1057112528, 2082722096, 2891256414, 3876709383, 3571984829, 1792306273, 12707038, 15620278, 9748, 2112682
			},
			.prefetch0 = 16437,
			.prefetch1 = 32369,
			.ram = negxb_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2706381863, 2449946077, 3685503788, 4152512479, 323815923, 1628336818, 575003298, 1409761647, 1899512675, 1057112528, 2082722096, 2891256414, 3876709383, 3571984829, 1792306273, 12707038, 15620278, 9753, 2112686
			},
			.prefetch0 = 46851,
			.prefetch1 = 12402,
			.ram = negxb_final_ram_11,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 NEGX.b -(A7) 4027",
		.initial = {
			.regs = {
				1044735808, 3470341676, 1927540508, 2226238467, 498442679, 350592227, 3350901712, 3918496318, 1733564432, 3206535259, 303819003, 4249707061, 3789701550, 2129703311, 1593163147, 10103592, 9496362, 41759, 2417864
			},
			.prefetch0 = 16423,
			.prefetch1 = 34748,
			.ram = negxb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1044735808, 3470341676, 1927540508, 2226238467, 498442679, 350592227, 3350901712, 3918496318, 1733564432, 3206535259, 303819003, 4249707061, 3789701550, 2129703311, 1593163147, 10103592, 9496360, 41753, 2417866
			},
			.prefetch0 = 34748,
			.prefetch1 = 22635,
			.ram = negxb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_12,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "013 NEGX.b (A4) 4014",
		.initial = {
			.regs = {
				1720301337, 3864452069, 3118351328, 1956002692, 901523912, 2146594133, 2190411656, 3361210671, 1474395858, 2082136990, 528202344, 1964810996, 1451417997, 2238843021, 1533866435, 16493236, 12993958, 1559, 7985106
			},
			.prefetch0 = 16404,
			.prefetch1 = 4046,
			.ram = negxb_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1720301337, 3864452069, 3118351328, 1956002692, 901523912, 2146594133, 2190411656, 3361210671, 1474395858, 2082136990, 528202344, 1964810996, 1451417997, 2238843021, 1533866435, 16493236, 12993958, 1561, 7985108
			},
			.prefetch0 = 4046,
			.prefetch1 = 21963,
			.ram = negxb_final_ram_13,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_13,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "014 NEGX.b (d16, A1) 4029",
		.initial = {
			.regs = {
				3204518498, 3454323677, 2094910548, 4031856691, 2757628678, 1582862093, 3080723090, 4053187037, 2116240077, 1250499018, 4212045790, 4048440709, 807483530, 3213593472, 4260386876, 6018550, 1394642, 9247, 11376390
			},
			.prefetch0 = 16425,
			.prefetch1 = 60840,
			.ram = negxb_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3204518498, 3454323677, 2094910548, 4031856691, 2757628678, 1582862093, 3080723090, 4053187037, 2116240077, 1250499018, 4212045790, 4048440709, 807483530, 3213593472, 4260386876, 6018550, 1394642, 9233, 11376394
			},
			.prefetch0 = 51272,
			.prefetch1 = 8466,
			.ram = negxb_final_ram_14,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 NEGX.b (d8, A0, Xn) 4030",
		.initial = {
			.regs = {
				3613594370, 2432136758, 1070080356, 2907016408, 3456211499, 2541583991, 665773318, 423886235, 1720010088, 2377296700, 4065018313, 63863612, 2639413736, 977189683, 2921057270, 8433092, 16515792, 42757, 4933742
			},
			.prefetch0 = 16432,
			.prefetch1 = 49751,
			.ram = negxb_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3613594370, 2432136758, 1070080356, 2907016408, 3456211499, 2541583991, 665773318, 423886235, 1720010088, 2377296700, 4065018313, 63863612, 2639413736, 977189683, 2921057270, 8433092, 16515792, 42777, 4933746
			},
			.prefetch0 = 1566,
			.prefetch1 = 35553,
			.ram = negxb_final_ram_15,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "016 NEGX.b (A3)+ 401b",
		.initial = {
			.regs = {
				3781073874, 1706409012, 2081373363, 1676277313, 1737969794, 3768504559, 876503816, 2778033775, 4047498973, 279357013, 2003425474, 1869746132, 125373692, 3239373979, 2211094431, 10623356, 6544824, 40983, 252706
			},
			.prefetch0 = 16411,
			.prefetch1 = 54585,
			.ram = negxb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3781073874, 1706409012, 2081373363, 1676277313, 1737969794, 3768504559, 876503816, 2778033775, 4047498973, 279357013, 2003425474, 1869746133, 125373692, 3239373979, 2211094431, 10623356, 6544824, 40977, 252708
			},
			.prefetch0 = 54585,
			.prefetch1 = 64683,
			.ram = negxb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_16,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "017 NEGX.b (A5) 4015",
		.initial = {
			.regs = {
				2485958510, 400103473, 2945151085, 2178969995, 2592034655, 2303546897, 2587756733, 280410486, 3698616628, 2619019549, 1203307878, 4261381565, 1631092228, 4172426919, 2517811671, 942512, 11971798, 34064, 4509316
			},
			.prefetch0 = 16405,
			.prefetch1 = 62673,
			.ram = negxb_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2485958510, 400103473, 2945151085, 2178969995, 2592034655, 2303546897, 2587756733, 280410486, 3698616628, 2619019549, 1203307878, 4261381565, 1631092228, 4172426919, 2517811671, 942512, 11971798, 34073, 4509318
			},
			.prefetch0 = 62673,
			.prefetch1 = 14690,
			.ram = negxb_final_ram_17,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 NEGX.b D1 4001",
		.initial = {
			.regs = {
				2578959130, 1793776572, 3924749748, 2620679705, 2126047856, 3394746054, 3946808039, 3023593247, 733320998, 966273008, 896591014, 274482281, 1736480484, 658861147, 578793679, 9535102, 83582, 41729, 14875576
			},
			.prefetch0 = 16385,
			.prefetch1 = 12250,
			.ram = negxb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2578959130, 1793776452, 3924749748, 2620679705, 2126047856, 3394746054, 3946808039, 3023593247, 733320998, 966273008, 896591014, 274482281, 1736480484, 658861147, 578793679, 9535102, 83582, 41745, 14875578
			},
			.prefetch0 = 12250,
			.prefetch1 = 4020,
			.ram = negxb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = negxb_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 NEGX.b (d8, A2, Xn) 4032",
		.initial = {
			.regs = {
				757652463, 1380631198, 1895323631, 2509183820, 3906410318, 2874479378, 2398693905, 2902919057, 780810823, 2781532387, 2538000872, 4165602606, 1523993590, 1100812777, 2779507249, 495566, 12282194, 9730, 3831052
			},
			.prefetch0 = 16434,
			.prefetch1 = 8019,
			.ram = negxb_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				757652463, 1380631198, 1895323631, 2509183820, 3906410318, 2874479378, 2398693905, 2902919057, 780810823, 2781532387, 2538000872, 4165602606, 1523993590, 1100812777, 2779507249, 495566, 12282194, 9745, 3831056
			},
			.prefetch0 = 38100,
			.prefetch1 = 53436,
			.ram = negxb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_19,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "020 NEGX.b (A2) 4012",
		.initial = {
			.regs = {
				3573075089, 2819812432, 2556488761, 631556265, 1008944876, 7437446, 3036666512, 2253250436, 1572782874, 605064671, 1837600055, 3225882636, 2481120383, 1078642050, 4201926899, 9185340, 10975038, 8717, 15673966
			},
			.prefetch0 = 16402,
			.prefetch1 = 36058,
			.ram = negxb_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3573075089, 2819812432, 2556488761, 631556265, 1008944876, 7437446, 3036666512, 2253250436, 1572782874, 605064671, 1837600055, 3225882636, 2481120383, 1078642050, 4201926899, 9185340, 10975038, 8721, 15673968
			},
			.prefetch0 = 36058,
			.prefetch1 = 38710,
			.ram = negxb_final_ram_20,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 NEGX.b (d8, A1, Xn) 4031",
		.initial = {
			.regs = {
				766904748, 2609936296, 3556009354, 249418182, 3432387469, 3979411424, 3781101477, 1332808374, 2266004990, 363613905, 477631681, 170977066, 3655150881, 283374483, 530224204, 13826510, 13887842, 34060, 2366242
			},
			.prefetch0 = 16433,
			.prefetch1 = 55224,
			.ram = negxb_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				766904748, 2609936296, 3556009354, 249418182, 3432387469, 3979411424, 3781101477, 1332808374, 2266004990, 363613905, 477631681, 170977066, 3655150881, 283374483, 530224204, 13826510, 13887842, 34065, 2366246
			},
			.prefetch0 = 20183,
			.prefetch1 = 61215,
			.ram = negxb_final_ram_21,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_21,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "022 NEGX.b D4 4004",
		.initial = {
			.regs = {
				2696727435, 3409320164, 1900629003, 4220714862, 3130291374, 1554637467, 2543117650, 3636082449, 818265004, 3982799714, 3486892784, 1459335280, 1545533432, 1028380484, 1582623957, 8682850, 9943466, 32773, 13007624
			},
			.prefetch0 = 16388,
			.prefetch1 = 1118,
			.ram = negxb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2696727435, 3409320164, 1900629003, 4220714862, 3130291282, 1554637467, 2543117650, 3636082449, 818265004, 3982799714, 3486892784, 1459335280, 1545533432, 1028380484, 1582623957, 8682850, 9943466, 32785, 13007626
			},
			.prefetch0 = 1118,
			.prefetch1 = 13960,
			.ram = negxb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = negxb_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 NEGX.b -(A7) 4027",
		.initial = {
			.regs = {
				3619301075, 616762398, 1285275797, 1575339913, 1746541541, 1627402101, 286848946, 3394842194, 2494126738, 1701529809, 2573057401, 1075642944, 2433897696, 2277463879, 2365413086, 2986100, 2458940, 8984, 7833362
			},
			.prefetch0 = 16423,
			.prefetch1 = 5066,
			.ram = negxb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3619301075, 616762398, 1285275797, 1575339913, 1746541541, 1627402101, 286848946, 3394842194, 2494126738, 1701529809, 2573057401, 1075642944, 2433897696, 2277463879, 2365413086, 2986100, 2458938, 8977, 7833364
			},
			.prefetch0 = 5066,
			.prefetch1 = 40181,
			.ram = negxb_final_ram_23,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_23,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "024 NEGX.b (d8, A2, Xn) 4032",
		.initial = {
			.regs = {
				1766390117, 1462974616, 698940030, 1214520827, 4252122262, 479842680, 1830603466, 3401225194, 1282856728, 2287686936, 279962758, 3163439031, 4227505241, 2156708945, 2227105682, 12473276, 6038538, 34334, 1403744
			},
			.prefetch0 = 16434,
			.prefetch1 = 46665,
			.ram = negxb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1766390117, 1462974616, 698940030, 1214520827, 4252122262, 479842680, 1830603466, 3401225194, 1282856728, 2287686936, 279962758, 3163439031, 4227505241, 2156708945, 2227105682, 12473276, 6038538, 34329, 1403748
			},
			.prefetch0 = 34613,
			.prefetch1 = 43542,
			.ram = negxb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 NEGX.b D1 4001",
		.initial = {
			.regs = {
				616198138, 3939210777, 4220184331, 519427779, 3230486346, 2605402201, 2876637754, 3780654300, 857054175, 1362871232, 2607202851, 3172272658, 3251261378, 3791726236, 1007506024, 4476910, 13482194, 10012, 6534604
			},
			.prefetch0 = 16385,
			.prefetch1 = 37506,
			.ram = negxb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				616198138, 3939210982, 4220184331, 519427779, 3230486346, 2605402201, 2876637754, 3780654300, 857054175, 1362871232, 2607202851, 3172272658, 3251261378, 3791726236, 1007506024, 4476910, 13482194, 10009, 6534606
			},
			.prefetch0 = 37506,
			.prefetch1 = 3985,
			.ram = negxb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = negxb_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 NEGX.b (d8, A5, Xn) 4035",
		.initial = {
			.regs = {
				392703802, 1407771004, 4017826021, 4242132831, 1636229030, 384560939, 2262427925, 1524617443, 3452545401, 3743629788, 1859185721, 2045533387, 2423565136, 2079774393, 2990158750, 13488628, 8850344, 33042, 1747516
			},
			.prefetch0 = 16437,
			.prefetch1 = 31240,
			.ram = negxb_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				392703802, 1407771004, 4017826021, 4242132831, 1636229030, 384560939, 2262427925, 1524617443, 3452545401, 3743629788, 1859185721, 2045533387, 2423565136, 2079774393, 2990158750, 13488628, 8850344, 33041, 1747520
			},
			.prefetch0 = 6658,
			.prefetch1 = 53170,
			.ram = negxb_final_ram_26,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_26,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "027 NEGX.b (A3)+ 401b",
		.initial = {
			.regs = {
				2557252032, 3662995009, 880164046, 315815643, 3463434560, 4204125717, 1126585472, 2897419717, 2358797796, 1604209176, 3447578071, 1406155979, 3486309284, 201243694, 825546986, 12682356, 13319270, 41735, 2065620
			},
			.prefetch0 = 16411,
			.prefetch1 = 22433,
			.ram = negxb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2557252032, 3662995009, 880164046, 315815643, 3463434560, 4204125717, 1126585472, 2897419717, 2358797796, 1604209176, 3447578071, 1406155980, 3486309284, 201243694, 825546986, 12682356, 13319270, 41753, 2065622
			},
			.prefetch0 = 22433,
			.prefetch1 = 63046,
			.ram = negxb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 NEGX.b (d8, A5, Xn) 4035",
		.initial = {
			.regs = {
				1772913192, 2861635328, 1489479414, 3838198030, 3103939116, 1543726089, 2462424834, 2765322809, 3589152694, 486610978, 686912072, 3405112855, 221669738, 1275047228, 714237755, 5797828, 7368624, 8212, 3957506
			},
			.prefetch0 = 16437,
			.prefetch1 = 84,
			.ram = negxb_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1772913192, 2861635328, 1489479414, 3838198030, 3103939116, 1543726089, 2462424834, 2765322809, 3589152694, 486610978, 686912072, 3405112855, 221669738, 1275047228, 714237755, 5797828, 7368624, 8217, 3957510
			},
			.prefetch0 = 53687,
			.prefetch1 = 4596,
			.ram = negxb_final_ram_28,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_28,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "029 NEGX.b -(A2) 4022",
		.initial = {
			.regs = {
				2830051802, 1029810865, 249447393, 2383524397, 1718699761, 1507105780, 3653206979, 2815457034, 2036114939, 3518729602, 1135547273, 2772371491, 1146910953, 1781219346, 1405802440, 868232, 11787140, 34563, 11526386
			},
			.prefetch0 = 16418,
			.prefetch1 = 62741,
			.ram = negxb_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2830051802, 1029810865, 249447393, 2383524397, 1718699761, 1507105780, 3653206979, 2815457034, 2036114939, 3518729602, 1135547272, 2772371491, 1146910953, 1781219346, 1405802440, 868232, 11787140, 34577, 11526388
			},
			.prefetch0 = 62741,
			.prefetch1 = 16002,
			.ram = negxb_final_ram_29,
			.ram_len = 8,
		},
		.transactions = negxb_transactions_29,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "030 NEGX.b (d16, A6) 402e",
		.initial = {
			.regs = {
				2172609612, 2708166738, 2050148142, 1175339575, 2472845319, 2393536800, 1868336482, 346571493, 1456530186, 1391903664, 4010285911, 3459298717, 1118397271, 3761277868, 531023010, 6696316, 9657144, 259, 15338030
			},
			.prefetch0 = 16430,
			.prefetch1 = 31679,
			.ram = negxb_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2172609612, 2708166738, 2050148142, 1175339575, 2472845319, 2393536800, 1868336482, 346571493, 1456530186, 1391903664, 4010285911, 3459298717, 1118397271, 3761277868, 531023010, 6696316, 9657144, 273, 15338034
			},
			.prefetch0 = 6607,
			.prefetch1 = 61405,
			.ram = negxb_final_ram_30,
			.ram_len = 10,
		},
		.transactions = negxb_transactions_30,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "031 NEGX.b (xxx).l 4039",
		.initial = {
			.regs = {
				1731055710, 152239789, 1971399444, 2417273913, 2038722521, 256031231, 2535213366, 773190286, 1183063099, 911361287, 530931513, 2927936518, 2721330403, 2206037540, 3144893195, 4228260, 9459990, 9219, 3933746
			},
			.prefetch0 = 16441,
			.prefetch1 = 38383,
			.ram = negxb_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1731055710, 152239789, 1971399444, 2417273913, 2038722521, 256031231, 2535213366, 773190286, 1183063099, 911361287, 530931513, 2927936518, 2721330403, 2206037540, 3144893195, 4228260, 9459990, 9233, 3933752
			},
			.prefetch0 = 49467,
			.prefetch1 = 17519,
			.ram = negxb_final_ram_31,
			.ram_len = 12,
		},
		.transactions = negxb_transactions_31,
		.transactions_len = 5,
		.lenght = 20,
	},
};

#endif /* RBT_NEGXB_H */