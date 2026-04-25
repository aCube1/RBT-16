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

const uint32_t NEGXB_TEST_COUNT = 16;
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
};

#endif /* RBT_NEGXB_H */