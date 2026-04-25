#ifndef RBT_EORL_H
#define RBT_EORL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte eorl_initial_ram_0[] = {
		{ .addr = 0x98ca12, .byte = 0xb5 },
		{ .addr = 0x98ca13, .byte = 0xa5 },
		{ .addr = 0x98ca14, .byte = 0xa4 },
		{ .addr = 0x98ca15, .byte = 0xd9 },
		{ .addr = 0x8afa5e, .byte = 0x25 },
		{ .addr = 0x8afa5f, .byte = 0x58 },
		{ .addr = 0x8afa60, .byte = 0x21 },
		{ .addr = 0x8afa61, .byte = 0x1e },
		{ .addr = 0x98ca16, .byte = 0xc1 },
		{ .addr = 0x98ca17, .byte = 0xe0 }
};

static const SST_RamByte eorl_final_ram_0[] = {
		{ .addr = 0x98ca12, .byte = 0xb5 },
		{ .addr = 0x98ca13, .byte = 0xa5 },
		{ .addr = 0x98ca14, .byte = 0xa4 },
		{ .addr = 0x98ca15, .byte = 0xd9 },
		{ .addr = 0x8afa5e, .byte = 0xba },
		{ .addr = 0x8afa5f, .byte = 0xb2 },
		{ .addr = 0x8afa60, .byte = 0x08 },
		{ .addr = 0x8afa61, .byte = 0x01 },
		{ .addr = 0x98ca16, .byte = 0xc1 },
		{ .addr = 0x98ca17, .byte = 0xe0 }
};

static const SST_Transaction eorl_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9108062, .data = 9560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9108064, .data = 8478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10013206, .data = 49632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9108064, .data = 2049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9108062, .data = 47794, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_1[] = {
		{ .addr = 0xa39e82, .byte = 0xbd },
		{ .addr = 0xa39e83, .byte = 0x94 },
		{ .addr = 0xa39e84, .byte = 0x63 },
		{ .addr = 0xa39e85, .byte = 0xee },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x26 },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x26691a, .byte = 0x9e },
		{ .addr = 0x26691b, .byte = 0x60 },
		{ .addr = 0x26691c, .byte = 0xb9 },
		{ .addr = 0x26691d, .byte = 0x82 }
};

static const SST_RamByte eorl_final_ram_1[] = {
		{ .addr = 0xa39e82, .byte = 0xbd },
		{ .addr = 0xa39e83, .byte = 0x94 },
		{ .addr = 0xa39e84, .byte = 0x63 },
		{ .addr = 0xa39e85, .byte = 0xee },
		{ .addr = 0x633506, .byte = 0x9e },
		{ .addr = 0x633507, .byte = 0x84 },
		{ .addr = 0x633502, .byte = 0x21 },
		{ .addr = 0x633503, .byte = 0x03 },
		{ .addr = 0x633504, .byte = 0x00 },
		{ .addr = 0x633505, .byte = 0xa3 },
		{ .addr = 0x633500, .byte = 0xbd },
		{ .addr = 0x633501, .byte = 0x94 },
		{ .addr = 0x6334fe, .byte = 0x1d },
		{ .addr = 0x6334ff, .byte = 0xa9 },
		{ .addr = 0x6334fa, .byte = 0xbd },
		{ .addr = 0x6334fb, .byte = 0x95 },
		{ .addr = 0x6334fc, .byte = 0x56 },
		{ .addr = 0x6334fd, .byte = 0x44 },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x26 },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x26691a, .byte = 0x9e },
		{ .addr = 0x26691b, .byte = 0x60 },
		{ .addr = 0x26691c, .byte = 0xb9 },
		{ .addr = 0x26691d, .byte = 0x82 }
};

static const SST_Transaction eorl_transactions_1[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4464040, .data = 40872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6501638, .data = 40580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6501634, .data = 8451, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6501636, .data = 163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6501632, .data = 48532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6501630, .data = 7593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6501626, .data = 48533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6501628, .data = 22084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2517274, .data = 40544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2517276, .data = 47490, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_2[] = {
		{ .addr = 0xa55764, .byte = 0xb7 },
		{ .addr = 0xa55765, .byte = 0x81 },
		{ .addr = 0xa55766, .byte = 0x89 },
		{ .addr = 0xa55767, .byte = 0x6c },
		{ .addr = 0xa55768, .byte = 0xce },
		{ .addr = 0xa55769, .byte = 0x9b }
};

static const SST_RamByte eorl_final_ram_2[] = {
		{ .addr = 0xa55764, .byte = 0xb7 },
		{ .addr = 0xa55765, .byte = 0x81 },
		{ .addr = 0xa55766, .byte = 0x89 },
		{ .addr = 0xa55767, .byte = 0x6c },
		{ .addr = 0xa55768, .byte = 0xce },
		{ .addr = 0xa55769, .byte = 0x9b }
};

static const SST_Transaction eorl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10835816, .data = 52891, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte eorl_initial_ram_3[] = {
		{ .addr = 0x28d292, .byte = 0xb7 },
		{ .addr = 0x28d293, .byte = 0x96 },
		{ .addr = 0x28d294, .byte = 0x66 },
		{ .addr = 0x28d295, .byte = 0xe4 },
		{ .addr = 0x00000c, .byte = 0x32 },
		{ .addr = 0x00000d, .byte = 0x4e },
		{ .addr = 0x00000e, .byte = 0xde },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x4edea0, .byte = 0xb7 },
		{ .addr = 0x4edea1, .byte = 0x63 },
		{ .addr = 0x4edea2, .byte = 0x01 },
		{ .addr = 0x4edea3, .byte = 0xf4 }
};

static const SST_RamByte eorl_final_ram_3[] = {
		{ .addr = 0x28d292, .byte = 0xb7 },
		{ .addr = 0x28d293, .byte = 0x96 },
		{ .addr = 0x28d294, .byte = 0x66 },
		{ .addr = 0x28d295, .byte = 0xe4 },
		{ .addr = 0xf875b4, .byte = 0xd2 },
		{ .addr = 0xf875b5, .byte = 0x94 },
		{ .addr = 0xf875b0, .byte = 0x87 },
		{ .addr = 0xf875b1, .byte = 0x19 },
		{ .addr = 0xf875b2, .byte = 0x00 },
		{ .addr = 0xf875b3, .byte = 0x28 },
		{ .addr = 0xf875ae, .byte = 0xb7 },
		{ .addr = 0xf875af, .byte = 0x96 },
		{ .addr = 0xf875ac, .byte = 0x7a },
		{ .addr = 0xf875ad, .byte = 0x5d },
		{ .addr = 0xf875a8, .byte = 0xb7 },
		{ .addr = 0xf875a9, .byte = 0x91 },
		{ .addr = 0xf875aa, .byte = 0x77 },
		{ .addr = 0xf875ab, .byte = 0xc1 },
		{ .addr = 0x00000c, .byte = 0x32 },
		{ .addr = 0x00000d, .byte = 0x4e },
		{ .addr = 0x00000e, .byte = 0xde },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x4edea0, .byte = 0xb7 },
		{ .addr = 0x4edea1, .byte = 0x63 },
		{ .addr = 0x4edea2, .byte = 0x01 },
		{ .addr = 0x4edea3, .byte = 0xf4 }
};

static const SST_Transaction eorl_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12679772, .data = 24253, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16283060, .data = 53908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16283056, .data = 34585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16283058, .data = 40, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16283054, .data = 46998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16283052, .data = 31325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16283048, .data = 46993, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16283050, .data = 30657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 12878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5168800, .data = 46947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5168802, .data = 500, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_4[] = {
		{ .addr = 0xd985d4, .byte = 0xbd },
		{ .addr = 0xd985d5, .byte = 0x95 },
		{ .addr = 0xd985d6, .byte = 0x50 },
		{ .addr = 0xd985d7, .byte = 0x01 },
		{ .addr = 0x212cfc, .byte = 0x8b },
		{ .addr = 0x212cfd, .byte = 0x9f },
		{ .addr = 0x212cfe, .byte = 0x91 },
		{ .addr = 0x212cff, .byte = 0x1a },
		{ .addr = 0xd985d8, .byte = 0x58 },
		{ .addr = 0xd985d9, .byte = 0xab }
};

static const SST_RamByte eorl_final_ram_4[] = {
		{ .addr = 0xd985d4, .byte = 0xbd },
		{ .addr = 0xd985d5, .byte = 0x95 },
		{ .addr = 0xd985d6, .byte = 0x50 },
		{ .addr = 0xd985d7, .byte = 0x01 },
		{ .addr = 0x212cfc, .byte = 0x38 },
		{ .addr = 0x212cfd, .byte = 0x97 },
		{ .addr = 0x212cfe, .byte = 0x06 },
		{ .addr = 0x212cff, .byte = 0x63 },
		{ .addr = 0xd985d8, .byte = 0x58 },
		{ .addr = 0xd985d9, .byte = 0xab }
};

static const SST_Transaction eorl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2174204, .data = 35743, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2174206, .data = 37146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14255576, .data = 22699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2174206, .data = 1635, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2174204, .data = 14487, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_5[] = {
		{ .addr = 0xdac458, .byte = 0xb7 },
		{ .addr = 0xdac459, .byte = 0xb4 },
		{ .addr = 0xdac45a, .byte = 0x56 },
		{ .addr = 0xdac45b, .byte = 0x37 },
		{ .addr = 0xdac45c, .byte = 0xa6 },
		{ .addr = 0xdac45d, .byte = 0xc3 },
		{ .addr = 0x21428c, .byte = 0xe5 },
		{ .addr = 0x21428d, .byte = 0x0a },
		{ .addr = 0x21428e, .byte = 0x08 },
		{ .addr = 0x21428f, .byte = 0x66 },
		{ .addr = 0xdac45e, .byte = 0xf7 },
		{ .addr = 0xdac45f, .byte = 0x2e }
};

static const SST_RamByte eorl_final_ram_5[] = {
		{ .addr = 0xdac458, .byte = 0xb7 },
		{ .addr = 0xdac459, .byte = 0xb4 },
		{ .addr = 0xdac45a, .byte = 0x56 },
		{ .addr = 0xdac45b, .byte = 0x37 },
		{ .addr = 0xdac45c, .byte = 0xa6 },
		{ .addr = 0xdac45d, .byte = 0xc3 },
		{ .addr = 0x21428c, .byte = 0xca },
		{ .addr = 0x21428d, .byte = 0x55 },
		{ .addr = 0x21428e, .byte = 0xe6 },
		{ .addr = 0x21428f, .byte = 0x78 },
		{ .addr = 0xdac45e, .byte = 0xf7 },
		{ .addr = 0xdac45f, .byte = 0x2e }
};

static const SST_Transaction eorl_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14337116, .data = 42691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2179724, .data = 58634, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2179726, .data = 2150, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14337118, .data = 63278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2179726, .data = 59000, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2179724, .data = 51797, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_6[] = {
		{ .addr = 0x0ae264, .byte = 0xbb },
		{ .addr = 0x0ae265, .byte = 0x82 },
		{ .addr = 0x0ae266, .byte = 0x42 },
		{ .addr = 0x0ae267, .byte = 0x7e },
		{ .addr = 0x0ae268, .byte = 0xa7 },
		{ .addr = 0x0ae269, .byte = 0x8f }
};

static const SST_RamByte eorl_final_ram_6[] = {
		{ .addr = 0x0ae264, .byte = 0xbb },
		{ .addr = 0x0ae265, .byte = 0x82 },
		{ .addr = 0x0ae266, .byte = 0x42 },
		{ .addr = 0x0ae267, .byte = 0x7e },
		{ .addr = 0x0ae268, .byte = 0xa7 },
		{ .addr = 0x0ae269, .byte = 0x8f }
};

static const SST_Transaction eorl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 713320, .data = 42895, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte eorl_initial_ram_7[] = {
		{ .addr = 0xdb0958, .byte = 0x0a },
		{ .addr = 0xdb0959, .byte = 0xb0 },
		{ .addr = 0xdb095a, .byte = 0x01 },
		{ .addr = 0xdb095b, .byte = 0x56 },
		{ .addr = 0xdb095c, .byte = 0xb2 },
		{ .addr = 0xdb095d, .byte = 0x9b },
		{ .addr = 0xdb095e, .byte = 0x92 },
		{ .addr = 0xdb095f, .byte = 0x33 },
		{ .addr = 0xdb0960, .byte = 0xfb },
		{ .addr = 0xdb0961, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0x7c },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x5e },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0xf65e66, .byte = 0x98 },
		{ .addr = 0xf65e67, .byte = 0xd6 },
		{ .addr = 0xf65e68, .byte = 0xef },
		{ .addr = 0xf65e69, .byte = 0x15 }
};

static const SST_RamByte eorl_final_ram_7[] = {
		{ .addr = 0xdb0958, .byte = 0x0a },
		{ .addr = 0xdb0959, .byte = 0xb0 },
		{ .addr = 0xdb095a, .byte = 0x01 },
		{ .addr = 0xdb095b, .byte = 0x56 },
		{ .addr = 0xdb095c, .byte = 0xb2 },
		{ .addr = 0xdb095d, .byte = 0x9b },
		{ .addr = 0xdb095e, .byte = 0x92 },
		{ .addr = 0xdb095f, .byte = 0x33 },
		{ .addr = 0xdb0960, .byte = 0xfb },
		{ .addr = 0xdb0961, .byte = 0xdc },
		{ .addr = 0x24f588, .byte = 0x09 },
		{ .addr = 0x24f589, .byte = 0x5e },
		{ .addr = 0x24f584, .byte = 0x04 },
		{ .addr = 0x24f585, .byte = 0x18 },
		{ .addr = 0x24f586, .byte = 0x00 },
		{ .addr = 0x24f587, .byte = 0xdb },
		{ .addr = 0x24f582, .byte = 0x0a },
		{ .addr = 0x24f583, .byte = 0xb0 },
		{ .addr = 0x24f580, .byte = 0xdf },
		{ .addr = 0x24f581, .byte = 0x2f },
		{ .addr = 0x24f57c, .byte = 0x0a },
		{ .addr = 0x24f57d, .byte = 0xb1 },
		{ .addr = 0x24f57e, .byte = 0x23 },
		{ .addr = 0x24f57f, .byte = 0x33 },
		{ .addr = 0x00000c, .byte = 0x7c },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x5e },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0xf65e66, .byte = 0x98 },
		{ .addr = 0xf65e67, .byte = 0xd6 },
		{ .addr = 0xf65e68, .byte = 0xef },
		{ .addr = 0xf65e69, .byte = 0x15 }
};

static const SST_Transaction eorl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14354780, .data = 45723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14354782, .data = 37427, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14354784, .data = 64476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3399470, .data = 44145, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2422152, .data = 2398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2422148, .data = 1048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2422150, .data = 219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2422146, .data = 2736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2422144, .data = 57135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2422140, .data = 2737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2422142, .data = 9011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16146022, .data = 39126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16146024, .data = 61205, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_8[] = {
		{ .addr = 0x07e4b0, .byte = 0xb3 },
		{ .addr = 0x07e4b1, .byte = 0x99 },
		{ .addr = 0x07e4b2, .byte = 0x3b },
		{ .addr = 0x07e4b3, .byte = 0x77 },
		{ .addr = 0x00000c, .byte = 0x8f },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x08d652, .byte = 0xf6 },
		{ .addr = 0x08d653, .byte = 0xc3 },
		{ .addr = 0x08d654, .byte = 0x11 },
		{ .addr = 0x08d655, .byte = 0xd6 }
};

static const SST_RamByte eorl_final_ram_8[] = {
		{ .addr = 0x07e4b0, .byte = 0xb3 },
		{ .addr = 0x07e4b1, .byte = 0x99 },
		{ .addr = 0x07e4b2, .byte = 0x3b },
		{ .addr = 0x07e4b3, .byte = 0x77 },
		{ .addr = 0xe459d2, .byte = 0xe4 },
		{ .addr = 0xe459d3, .byte = 0xb2 },
		{ .addr = 0xe459ce, .byte = 0x81 },
		{ .addr = 0xe459cf, .byte = 0x19 },
		{ .addr = 0xe459d0, .byte = 0x00 },
		{ .addr = 0xe459d1, .byte = 0x07 },
		{ .addr = 0xe459cc, .byte = 0xb3 },
		{ .addr = 0xe459cd, .byte = 0x99 },
		{ .addr = 0xe459ca, .byte = 0x2a },
		{ .addr = 0xe459cb, .byte = 0xbf },
		{ .addr = 0xe459c6, .byte = 0xb3 },
		{ .addr = 0xe459c7, .byte = 0x91 },
		{ .addr = 0xe459c8, .byte = 0x19 },
		{ .addr = 0xe459c9, .byte = 0xec },
		{ .addr = 0x00000c, .byte = 0x8f },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x08d652, .byte = 0xf6 },
		{ .addr = 0x08d653, .byte = 0xc3 },
		{ .addr = 0x08d654, .byte = 0x11 },
		{ .addr = 0x08d655, .byte = 0xd6 }
};

static const SST_Transaction eorl_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15477438, .data = 25683, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14965202, .data = 58546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14965198, .data = 33049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14965200, .data = 7, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14965196, .data = 45977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14965194, .data = 10943, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14965190, .data = 45969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14965192, .data = 6636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 36616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 579154, .data = 63171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 579156, .data = 4566, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_9[] = {
		{ .addr = 0x3eaeb2, .byte = 0xbb },
		{ .addr = 0x3eaeb3, .byte = 0xa1 },
		{ .addr = 0x3eaeb4, .byte = 0xb8 },
		{ .addr = 0x3eaeb5, .byte = 0x2a },
		{ .addr = 0x7cdf80, .byte = 0x01 },
		{ .addr = 0x7cdf81, .byte = 0xee },
		{ .addr = 0x7cdf82, .byte = 0x3a },
		{ .addr = 0x7cdf83, .byte = 0x9f },
		{ .addr = 0x3eaeb6, .byte = 0x7a },
		{ .addr = 0x3eaeb7, .byte = 0xff }
};

static const SST_RamByte eorl_final_ram_9[] = {
		{ .addr = 0x3eaeb2, .byte = 0xbb },
		{ .addr = 0x3eaeb3, .byte = 0xa1 },
		{ .addr = 0x3eaeb4, .byte = 0xb8 },
		{ .addr = 0x3eaeb5, .byte = 0x2a },
		{ .addr = 0x7cdf80, .byte = 0xf1 },
		{ .addr = 0x7cdf81, .byte = 0xee },
		{ .addr = 0x7cdf82, .byte = 0x79 },
		{ .addr = 0x7cdf83, .byte = 0xa7 },
		{ .addr = 0x3eaeb6, .byte = 0x7a },
		{ .addr = 0x3eaeb7, .byte = 0xff }
};

static const SST_Transaction eorl_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8183680, .data = 494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8183682, .data = 15007, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4107958, .data = 31487, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8183682, .data = 31143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8183680, .data = 61934, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_10[] = {
		{ .addr = 0xb97db8, .byte = 0xbd },
		{ .addr = 0xb97db9, .byte = 0xa9 },
		{ .addr = 0xb97dba, .byte = 0x8c },
		{ .addr = 0xb97dbb, .byte = 0xff },
		{ .addr = 0xb97dbc, .byte = 0x76 },
		{ .addr = 0xb97dbd, .byte = 0x96 },
		{ .addr = 0xe42ae4, .byte = 0x47 },
		{ .addr = 0xe42ae5, .byte = 0x6f },
		{ .addr = 0xe42ae6, .byte = 0x3c },
		{ .addr = 0xe42ae7, .byte = 0x54 },
		{ .addr = 0xb97dbe, .byte = 0x93 },
		{ .addr = 0xb97dbf, .byte = 0xe1 }
};

static const SST_RamByte eorl_final_ram_10[] = {
		{ .addr = 0xb97db8, .byte = 0xbd },
		{ .addr = 0xb97db9, .byte = 0xa9 },
		{ .addr = 0xb97dba, .byte = 0x8c },
		{ .addr = 0xb97dbb, .byte = 0xff },
		{ .addr = 0xb97dbc, .byte = 0x76 },
		{ .addr = 0xb97dbd, .byte = 0x96 },
		{ .addr = 0xe42ae4, .byte = 0x79 },
		{ .addr = 0xe42ae5, .byte = 0xe0 },
		{ .addr = 0xe42ae6, .byte = 0xfa },
		{ .addr = 0xe42ae7, .byte = 0x8c },
		{ .addr = 0xb97dbe, .byte = 0x93 },
		{ .addr = 0xb97dbf, .byte = 0xe1 }
};

static const SST_Transaction eorl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12156348, .data = 30358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14953188, .data = 18287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14953190, .data = 15444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12156350, .data = 37857, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14953190, .data = 64140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14953188, .data = 31200, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_11[] = {
		{ .addr = 0x0af40a, .byte = 0x0a },
		{ .addr = 0x0af40b, .byte = 0xb4 },
		{ .addr = 0x0af40c, .byte = 0x40 },
		{ .addr = 0x0af40d, .byte = 0xa0 },
		{ .addr = 0x0af40e, .byte = 0x34 },
		{ .addr = 0x0af40f, .byte = 0xf3 },
		{ .addr = 0x0af410, .byte = 0x17 },
		{ .addr = 0x0af411, .byte = 0x66 },
		{ .addr = 0x0af412, .byte = 0x80 },
		{ .addr = 0x0af413, .byte = 0xec },
		{ .addr = 0x00000c, .byte = 0x2b },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0x6a2124, .byte = 0xa9 },
		{ .addr = 0x6a2125, .byte = 0xb6 },
		{ .addr = 0x6a2126, .byte = 0x95 },
		{ .addr = 0x6a2127, .byte = 0xe2 }
};

static const SST_RamByte eorl_final_ram_11[] = {
		{ .addr = 0x0af40a, .byte = 0x0a },
		{ .addr = 0x0af40b, .byte = 0xb4 },
		{ .addr = 0x0af40c, .byte = 0x40 },
		{ .addr = 0x0af40d, .byte = 0xa0 },
		{ .addr = 0x0af40e, .byte = 0x34 },
		{ .addr = 0x0af40f, .byte = 0xf3 },
		{ .addr = 0x0af410, .byte = 0x17 },
		{ .addr = 0x0af411, .byte = 0x66 },
		{ .addr = 0x0af412, .byte = 0x80 },
		{ .addr = 0x0af413, .byte = 0xec },
		{ .addr = 0xda6f50, .byte = 0xf4 },
		{ .addr = 0xda6f51, .byte = 0x10 },
		{ .addr = 0xda6f4c, .byte = 0x01 },
		{ .addr = 0xda6f4d, .byte = 0x1f },
		{ .addr = 0xda6f4e, .byte = 0x00 },
		{ .addr = 0xda6f4f, .byte = 0x0a },
		{ .addr = 0xda6f4a, .byte = 0x0a },
		{ .addr = 0xda6f4b, .byte = 0xb4 },
		{ .addr = 0xda6f48, .byte = 0x1e },
		{ .addr = 0xda6f49, .byte = 0xff },
		{ .addr = 0xda6f44, .byte = 0x0a },
		{ .addr = 0xda6f45, .byte = 0xb1 },
		{ .addr = 0xda6f46, .byte = 0x14 },
		{ .addr = 0xda6f47, .byte = 0x70 },
		{ .addr = 0x00000c, .byte = 0x2b },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0x6a2124, .byte = 0xa9 },
		{ .addr = 0x6a2125, .byte = 0xb6 },
		{ .addr = 0x6a2126, .byte = 0x95 },
		{ .addr = 0x6a2127, .byte = 0xe2 }
};

static const SST_Transaction eorl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 717838, .data = 13555, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 717840, .data = 5990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 717842, .data = 33004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7347966, .data = 18872, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14315344, .data = 62480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14315340, .data = 287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14315342, .data = 10, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14315338, .data = 2740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14315336, .data = 7935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14315332, .data = 2737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14315334, .data = 5232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 11114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6955300, .data = 43446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6955302, .data = 38370, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_12[] = {
		{ .addr = 0x070634, .byte = 0xb1 },
		{ .addr = 0x070635, .byte = 0xb6 },
		{ .addr = 0x070636, .byte = 0xaf },
		{ .addr = 0x070637, .byte = 0x67 },
		{ .addr = 0x070638, .byte = 0xbd },
		{ .addr = 0x070639, .byte = 0x18 },
		{ .addr = 0xa61d5a, .byte = 0x44 },
		{ .addr = 0xa61d5b, .byte = 0xd3 },
		{ .addr = 0xa61d5c, .byte = 0x01 },
		{ .addr = 0xa61d5d, .byte = 0x4d },
		{ .addr = 0x07063a, .byte = 0x76 },
		{ .addr = 0x07063b, .byte = 0x49 }
};

static const SST_RamByte eorl_final_ram_12[] = {
		{ .addr = 0x070634, .byte = 0xb1 },
		{ .addr = 0x070635, .byte = 0xb6 },
		{ .addr = 0x070636, .byte = 0xaf },
		{ .addr = 0x070637, .byte = 0x67 },
		{ .addr = 0x070638, .byte = 0xbd },
		{ .addr = 0x070639, .byte = 0x18 },
		{ .addr = 0xa61d5a, .byte = 0x1a },
		{ .addr = 0xa61d5b, .byte = 0xa9 },
		{ .addr = 0xa61d5c, .byte = 0xb1 },
		{ .addr = 0xa61d5d, .byte = 0x07 },
		{ .addr = 0x07063a, .byte = 0x76 },
		{ .addr = 0x07063b, .byte = 0x49 }
};

static const SST_Transaction eorl_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 460344, .data = 48408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10886490, .data = 17619, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10886492, .data = 333, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 460346, .data = 30281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10886492, .data = 45319, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10886490, .data = 6825, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_13[] = {
		{ .addr = 0x56d34e, .byte = 0x0a },
		{ .addr = 0x56d34f, .byte = 0xaa },
		{ .addr = 0x56d350, .byte = 0x4f },
		{ .addr = 0x56d351, .byte = 0x77 },
		{ .addr = 0x56d352, .byte = 0xa9 },
		{ .addr = 0x56d353, .byte = 0xec },
		{ .addr = 0x56d354, .byte = 0x86 },
		{ .addr = 0x56d355, .byte = 0xbb },
		{ .addr = 0x56d356, .byte = 0x41 },
		{ .addr = 0x56d357, .byte = 0xec },
		{ .addr = 0x00000c, .byte = 0xe4 },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x70d644, .byte = 0xb6 },
		{ .addr = 0x70d645, .byte = 0x91 },
		{ .addr = 0x70d646, .byte = 0x23 },
		{ .addr = 0x70d647, .byte = 0x16 }
};

static const SST_RamByte eorl_final_ram_13[] = {
		{ .addr = 0x56d34e, .byte = 0x0a },
		{ .addr = 0x56d34f, .byte = 0xaa },
		{ .addr = 0x56d350, .byte = 0x4f },
		{ .addr = 0x56d351, .byte = 0x77 },
		{ .addr = 0x56d352, .byte = 0xa9 },
		{ .addr = 0x56d353, .byte = 0xec },
		{ .addr = 0x56d354, .byte = 0x86 },
		{ .addr = 0x56d355, .byte = 0xbb },
		{ .addr = 0x56d356, .byte = 0x41 },
		{ .addr = 0x56d357, .byte = 0xec },
		{ .addr = 0x8c7c7e, .byte = 0xd3 },
		{ .addr = 0x8c7c7f, .byte = 0x54 },
		{ .addr = 0x8c7c7a, .byte = 0x21 },
		{ .addr = 0x8c7c7b, .byte = 0x0d },
		{ .addr = 0x8c7c7c, .byte = 0x00 },
		{ .addr = 0x8c7c7d, .byte = 0x56 },
		{ .addr = 0x8c7c78, .byte = 0x0a },
		{ .addr = 0x8c7c79, .byte = 0xaa },
		{ .addr = 0x8c7c76, .byte = 0x57 },
		{ .addr = 0x8c7c77, .byte = 0x97 },
		{ .addr = 0x8c7c72, .byte = 0x0a },
		{ .addr = 0x8c7c73, .byte = 0xb5 },
		{ .addr = 0x8c7c74, .byte = 0x7e },
		{ .addr = 0x8c7c75, .byte = 0x37 },
		{ .addr = 0x00000c, .byte = 0xe4 },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x70d644, .byte = 0xb6 },
		{ .addr = 0x70d645, .byte = 0x91 },
		{ .addr = 0x70d646, .byte = 0x23 },
		{ .addr = 0x70d647, .byte = 0x16 }
};

static const SST_Transaction eorl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5690194, .data = 43500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5690196, .data = 34491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5690198, .data = 16876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3626902, .data = 22068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206910, .data = 54100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206906, .data = 8461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206908, .data = 86, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206904, .data = 2730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206902, .data = 22423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206898, .data = 2741, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206900, .data = 32311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7394884, .data = 46737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7394886, .data = 8982, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_14[] = {
		{ .addr = 0x150a96, .byte = 0xbd },
		{ .addr = 0x150a97, .byte = 0x96 },
		{ .addr = 0x150a98, .byte = 0xf7 },
		{ .addr = 0x150a99, .byte = 0xcc },
		{ .addr = 0x00000c, .byte = 0x0f },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0x6c },
		{ .addr = 0x00000f, .byte = 0xf6 },
		{ .addr = 0xca6cf6, .byte = 0x72 },
		{ .addr = 0xca6cf7, .byte = 0x08 },
		{ .addr = 0xca6cf8, .byte = 0xb5 },
		{ .addr = 0xca6cf9, .byte = 0x78 }
};

static const SST_RamByte eorl_final_ram_14[] = {
		{ .addr = 0x150a96, .byte = 0xbd },
		{ .addr = 0x150a97, .byte = 0x96 },
		{ .addr = 0x150a98, .byte = 0xf7 },
		{ .addr = 0x150a99, .byte = 0xcc },
		{ .addr = 0xef513c, .byte = 0x0a },
		{ .addr = 0xef513d, .byte = 0x98 },
		{ .addr = 0xef5138, .byte = 0xa2 },
		{ .addr = 0xef5139, .byte = 0x1b },
		{ .addr = 0xef513a, .byte = 0x00 },
		{ .addr = 0xef513b, .byte = 0x15 },
		{ .addr = 0xef5136, .byte = 0xbd },
		{ .addr = 0xef5137, .byte = 0x96 },
		{ .addr = 0xef5134, .byte = 0xb5 },
		{ .addr = 0xef5135, .byte = 0x87 },
		{ .addr = 0xef5130, .byte = 0xbd },
		{ .addr = 0xef5131, .byte = 0x95 },
		{ .addr = 0xef5132, .byte = 0xde },
		{ .addr = 0xef5133, .byte = 0xd2 },
		{ .addr = 0x00000c, .byte = 0x0f },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0x6c },
		{ .addr = 0x00000f, .byte = 0xf6 },
		{ .addr = 0xca6cf6, .byte = 0x72 },
		{ .addr = 0xca6cf7, .byte = 0x08 },
		{ .addr = 0xca6cf8, .byte = 0xb5 },
		{ .addr = 0xca6cf9, .byte = 0x78 }
};

static const SST_Transaction eorl_transactions_14[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13809030, .data = 35354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15683900, .data = 2712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15683896, .data = 41499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15683898, .data = 21, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15683894, .data = 48534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15683892, .data = 46471, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15683888, .data = 48533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15683890, .data = 57042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27894, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13266166, .data = 29192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13266168, .data = 46456, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorl_initial_ram_15[] = {
		{ .addr = 0x4ebb0e, .byte = 0xbf },
		{ .addr = 0x4ebb0f, .byte = 0xae },
		{ .addr = 0x4ebb10, .byte = 0xdc },
		{ .addr = 0x4ebb11, .byte = 0xb8 },
		{ .addr = 0x4ebb12, .byte = 0xb2 },
		{ .addr = 0x4ebb13, .byte = 0xf4 },
		{ .addr = 0x112648, .byte = 0x8f },
		{ .addr = 0x112649, .byte = 0x64 },
		{ .addr = 0x11264a, .byte = 0xb3 },
		{ .addr = 0x11264b, .byte = 0xae },
		{ .addr = 0x4ebb14, .byte = 0xd5 },
		{ .addr = 0x4ebb15, .byte = 0x84 }
};

static const SST_RamByte eorl_final_ram_15[] = {
		{ .addr = 0x4ebb0e, .byte = 0xbf },
		{ .addr = 0x4ebb0f, .byte = 0xae },
		{ .addr = 0x4ebb10, .byte = 0xdc },
		{ .addr = 0x4ebb11, .byte = 0xb8 },
		{ .addr = 0x4ebb12, .byte = 0xb2 },
		{ .addr = 0x4ebb13, .byte = 0xf4 },
		{ .addr = 0x112648, .byte = 0x5c },
		{ .addr = 0x112649, .byte = 0x09 },
		{ .addr = 0x11264a, .byte = 0x83 },
		{ .addr = 0x11264b, .byte = 0x73 },
		{ .addr = 0x4ebb14, .byte = 0xd5 },
		{ .addr = 0x4ebb15, .byte = 0x84 }
};

static const SST_Transaction eorl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5159698, .data = 45812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1123912, .data = 36708, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1123914, .data = 45998, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5159700, .data = 54660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1123914, .data = 33651, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1123912, .data = 23561, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t EORL_TEST_COUNT = 16;
static const SST_TestCase eorl[] = {
	{
		.name = "000 EOR.l D2, -(A5) b5a5",
		.initial = {
			.regs = {
				3928778808, 2079352038, 2682923295, 3223726102, 1547726049, 749941974, 823179338, 1733805970, 2821932698, 1563380308, 4179801688, 281515365, 3107417165, 3951753826, 3692718667, 8503530, 1862828, 41499, 10013206
			},
			.prefetch0 = 46501,
			.prefetch1 = 42201,
			.ram = eorl_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3928778808, 2079352038, 2682923295, 3223726102, 1547726049, 749941974, 823179338, 1733805970, 2821932698, 1563380308, 4179801688, 281515365, 3107417165, 3951753822, 3692718667, 8503530, 1862828, 41496, 10013208
			},
			.prefetch0 = 42201,
			.prefetch1 = 49632,
			.ram = eorl_final_ram_0,
			.ram_len = 10,
		},
		.transactions = eorl_transactions_0,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "001 EOR.l D6, (A4) bd94",
		.initial = {
			.regs = {
				3145694221, 4006345633, 3865165418, 3395164096, 1566623296, 3702883863, 3347878857, 1765166558, 1311584203, 3800662206, 2278433639, 3501817676, 1447304617, 1555836184, 3429881610, 15141628, 6501640, 8451, 10722950
			},
			.prefetch0 = 48532,
			.prefetch1 = 25582,
			.ram = eorl_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3145694221, 4006345633, 3865165418, 3395164096, 1566623296, 3702883863, 3347878857, 1765166558, 1311584203, 3800662206, 2278433639, 3501817676, 1447304617, 1555836184, 3429881610, 15141628, 6501626, 8451, 2804312350
			},
			.prefetch0 = 40544,
			.prefetch1 = 47490,
			.ram = eorl_final_ram_1,
			.ram_len = 26,
		},
		.transactions = eorl_transactions_1,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "002 EOR.l D3, D1 b781",
		.initial = {
			.regs = {
				2432111213, 3261350598, 16876828, 3034411567, 3439973651, 1755026124, 3497268160, 2105624319, 2601100941, 3497334875, 4052156768, 3016301952, 2642898969, 2296332553, 6024042, 13344674, 2352814, 32788, 10835816
			},
			.prefetch0 = 46977,
			.prefetch1 = 35180,
			.ram = eorl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2432111213, 1991848169, 16876828, 3034411567, 3439973651, 1755026124, 3497268160, 2105624319, 2601100941, 3497334875, 4052156768, 3016301952, 2642898969, 2296332553, 6024042, 13344674, 2352814, 32784, 10835818
			},
			.prefetch0 = 35180,
			.prefetch1 = 52891,
			.ram = eorl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = eorl_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 EOR.l D3, (A6) b796",
		.initial = {
			.regs = {
				58861430, 2285328359, 2940398605, 1298380507, 577476370, 797891361, 2617783482, 400381741, 2231364221, 1507885754, 3741845640, 1042795367, 1546654562, 873305723, 2009168477, 42140, 16283062, 34585, 2675350
			},
			.prefetch0 = 46998,
			.prefetch1 = 26340,
			.ram = eorl_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				58861430, 2285328359, 2940398605, 1298380507, 577476370, 797891361, 2617783482, 400381741, 2231364221, 1507885754, 3741845640, 1042795367, 1546654562, 873305723, 2009168477, 42140, 16283048, 10009, 844029604
			},
			.prefetch0 = 46947,
			.prefetch1 = 500,
			.ram = eorl_final_ram_3,
			.ram_len = 26,
		},
		.transactions = eorl_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 EOR.l D6, (A5) bd95",
		.initial = {
			.regs = {
				2798740804, 1506092222, 1171837679, 2357011730, 1148611477, 2900787584, 3003684729, 3758573291, 3343114716, 2617351411, 3040947865, 1761994319, 1037485677, 2501979388, 628671557, 14386872, 16315276, 9219, 14255576
			},
			.prefetch0 = 48533,
			.prefetch1 = 20481,
			.ram = eorl_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2798740804, 1506092222, 1171837679, 2357011730, 1148611477, 2900787584, 3003684729, 3758573291, 3343114716, 2617351411, 3040947865, 1761994319, 1037485677, 2501979388, 628671557, 14386872, 16315276, 9216, 14255578
			},
			.prefetch0 = 20481,
			.prefetch1 = 22699,
			.ram = eorl_final_ram_4,
			.ram_len = 10,
		},
		.transactions = eorl_transactions_4,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "005 EOR.l D3, (d8, A4, Xn) b7b4",
		.initial = {
			.regs = {
				340141455, 913885779, 1087187338, 794816030, 3232638573, 4163910740, 2249632525, 2981213699, 2884380732, 28341463, 2573852682, 838140669, 891356673, 1282679173, 2867594299, 4651258, 15973582, 34318, 14337116
			},
			.prefetch0 = 47028,
			.prefetch1 = 22071,
			.ram = eorl_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				340141455, 913885779, 1087187338, 794816030, 3232638573, 4163910740, 2249632525, 2981213699, 2884380732, 28341463, 2573852682, 838140669, 891356673, 1282679173, 2867594299, 4651258, 15973582, 34312, 14337120
			},
			.prefetch0 = 42691,
			.prefetch1 = 63278,
			.ram = eorl_final_ram_5,
			.ram_len = 12,
		},
		.transactions = eorl_transactions_5,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "006 EOR.l D5, D2 bb82",
		.initial = {
			.regs = {
				1391257751, 46583738, 3134593151, 2948653970, 2593840327, 3306974630, 3803684661, 3112528615, 2093265960, 3234214613, 4244190288, 1577307492, 4158356757, 4134602470, 1834011474, 12234914, 247048, 261, 713320
			},
			.prefetch0 = 48002,
			.prefetch1 = 17022,
			.ram = eorl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1391257751, 46583738, 2143974873, 2948653970, 2593840327, 3306974630, 3803684661, 3112528615, 2093265960, 3234214613, 4244190288, 1577307492, 4158356757, 4134602470, 1834011474, 12234914, 247048, 256, 713322
			},
			.prefetch0 = 17022,
			.prefetch1 = 42895,
			.ram = eorl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = eorl_transactions_6,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "007 EOR.l #, (d8, A0, Xn) 0ab0",
		.initial = {
			.regs = {
				4249845445, 1646405340, 1047498046, 2395687714, 4136997313, 3269966581, 3506106656, 1348264222, 590594033, 1510416139, 4237519402, 1027603492, 3432253962, 2936822031, 48367203, 5122196, 2422154, 1048, 14354780
			},
			.prefetch0 = 2736,
			.prefetch1 = 342,
			.ram = eorl_initial_ram_7,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				4249845445, 1646405340, 1047498046, 2395687714, 4136997313, 3269966581, 3506106656, 1348264222, 590594033, 1510416139, 4237519402, 1027603492, 3432253962, 2936822031, 48367203, 5122196, 2422140, 9240, 2096520810
			},
			.prefetch0 = 39126,
			.prefetch1 = 61205,
			.ram = eorl_final_ram_7,
			.ram_len = 32,
		},
		.transactions = eorl_transactions_7,
		.transactions_len = 18,
		.lenght = 72,
	},
	{
		.name = "008 EOR.l D1, (A1)+ b399",
		.initial = {
			.regs = {
				2821762265, 3519476840, 1534458872, 1087296670, 1433051355, 896258563, 4038655551, 1418726194, 1597256171, 434907839, 3746020607, 1496976075, 3604830534, 737290731, 1559770781, 9282612, 14965204, 33049, 517300
			},
			.prefetch0 = 45977,
			.prefetch1 = 15223,
			.ram = eorl_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2821762265, 3519476840, 1534458872, 1087296670, 1433051355, 896258563, 4038655551, 1418726194, 1597256171, 434907839, 3746020607, 1496976075, 3604830534, 737290731, 1559770781, 9282612, 14965190, 8473, 2399721046
			},
			.prefetch0 = 63171,
			.prefetch1 = 4566,
			.ram = eorl_final_ram_8,
			.ram_len = 26,
		},
		.transactions = eorl_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 EOR.l D5, -(A1) bba1",
		.initial = {
			.regs = {
				1742623132, 1158016291, 4143368564, 392188907, 3272480834, 4026549048, 2704289031, 1548811838, 285333166, 2407325572, 224493216, 3297014519, 350890374, 2639468820, 1329029880, 11638116, 735886, 41479, 4107958
			},
			.prefetch0 = 48033,
			.prefetch1 = 47146,
			.ram = eorl_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1742623132, 1158016291, 4143368564, 392188907, 3272480834, 4026549048, 2704289031, 1548811838, 285333166, 2407325568, 224493216, 3297014519, 350890374, 2639468820, 1329029880, 11638116, 735886, 41480, 4107960
			},
			.prefetch0 = 47146,
			.prefetch1 = 31487,
			.ram = eorl_final_ram_9,
			.ram_len = 10,
		},
		.transactions = eorl_transactions_9,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "010 EOR.l D6, (d16, A1) bda9",
		.initial = {
			.regs = {
				1131762510, 1121011879, 740867417, 3083631654, 3104198358, 686525505, 1049609944, 2477998801, 1895096235, 635739621, 2797216514, 3828021223, 3878051476, 3674795448, 1260475649, 14094894, 4838602, 8215, 12156348
			},
			.prefetch0 = 48553,
			.prefetch1 = 36095,
			.ram = eorl_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1131762510, 1121011879, 740867417, 3083631654, 3104198358, 686525505, 1049609944, 2477998801, 1895096235, 635739621, 2797216514, 3828021223, 3878051476, 3674795448, 1260475649, 14094894, 4838602, 8208, 12156352
			},
			.prefetch0 = 30358,
			.prefetch1 = 37857,
			.ram = eorl_final_ram_10,
			.ram_len = 12,
		},
		.transactions = eorl_transactions_10,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "011 EOR.l #, (d8, A4, Xn) 0ab4",
		.initial = {
			.regs = {
				3036366455, 310948249, 2960589026, 445046470, 489978498, 116544878, 25036768, 498723673, 2027268063, 4126610160, 457164149, 1437582711, 342912256, 3704269872, 105259300, 214490, 14315346, 287, 717838
			},
			.prefetch0 = 2740,
			.prefetch1 = 16544,
			.ram = eorl_initial_ram_11,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				3036366455, 310948249, 2960589026, 445046470, 489978498, 116544878, 25036768, 498723673, 2027268063, 4126610160, 457164149, 1437582711, 342912256, 3704269872, 105259300, 214490, 14315332, 8479, 728375592
			},
			.prefetch0 = 43446,
			.prefetch1 = 38370,
			.ram = eorl_final_ram_11,
			.ram_len = 32,
		},
		.transactions = eorl_transactions_11,
		.transactions_len = 18,
		.lenght = 72,
	},
	{
		.name = "012 EOR.l D0, (d8, A6, Xn) b1b6",
		.initial = {
			.regs = {
				1585098826, 2243533537, 2714015246, 3385793545, 1774552059, 3602242033, 3615206486, 3078215330, 175872938, 2468531126, 2070627189, 2708512667, 3331591682, 2649239158, 255515006, 8298710, 3798572, 32789, 460344
			},
			.prefetch0 = 45494,
			.prefetch1 = 44903,
			.ram = eorl_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1585098826, 2243533537, 2714015246, 3385793545, 1774552059, 3602242033, 3615206486, 3078215330, 175872938, 2468531126, 2070627189, 2708512667, 3331591682, 2649239158, 255515006, 8298710, 3798572, 32784, 460348
			},
			.prefetch0 = 48408,
			.prefetch1 = 30281,
			.ram = eorl_final_ram_12,
			.ram_len = 12,
		},
		.transactions = eorl_transactions_12,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "013 EOR.l #, (d16, A2) 0aaa",
		.initial = {
			.regs = {
				745928196, 3690548690, 3395128731, 1016115919, 1727550774, 2315923141, 751675775, 3927928930, 3383711683, 926593663, 2117587164, 2231337616, 2056518719, 3211140191, 2867196449, 5786410, 9206912, 8461, 5690194
			},
			.prefetch0 = 2730,
			.prefetch1 = 20343,
			.ram = eorl_initial_ram_13,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				745928196, 3690548690, 3395128731, 1016115919, 1727550774, 2315923141, 751675775, 3927928930, 3383711683, 926593663, 2117587164, 2231337616, 2056518719, 3211140191, 2867196449, 5786410, 9206898, 8461, 3832600136
			},
			.prefetch0 = 46737,
			.prefetch1 = 8982,
			.ram = eorl_final_ram_13,
			.ram_len = 32,
		},
		.transactions = eorl_transactions_13,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "014 EOR.l D6, (A6) bd96",
		.initial = {
			.regs = {
				3586326811, 817589683, 320331600, 2995612765, 712058187, 758847648, 3454666210, 819846298, 1170965565, 4268131710, 3413425259, 2289245431, 827400927, 32235485, 3738350983, 11317360, 15683902, 41499, 1378970
			},
			.prefetch0 = 48534,
			.prefetch1 = 63436,
			.ram = eorl_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3586326811, 817589683, 320331600, 2995612765, 712058187, 758847648, 3454666210, 819846298, 1170965565, 4268131710, 3413425259, 2289245431, 827400927, 32235485, 3738350983, 11317360, 15683888, 8731, 264924410
			},
			.prefetch0 = 29192,
			.prefetch1 = 46456,
			.ram = eorl_final_ram_14,
			.ram_len = 26,
		},
		.transactions = eorl_transactions_14,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "015 EOR.l D7, (d16, A6) bfae",
		.initial = {
			.regs = {
				3636671961, 74752972, 4237515699, 362429776, 653871225, 2572869458, 911573038, 3547148509, 1415908992, 2359696502, 2896457110, 2325634069, 1863091536, 364669055, 3054586256, 445988, 9496568, 34318, 5159698
			},
			.prefetch0 = 49070,
			.prefetch1 = 56504,
			.ram = eorl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3636671961, 74752972, 4237515699, 362429776, 653871225, 2572869458, 911573038, 3547148509, 1415908992, 2359696502, 2896457110, 2325634069, 1863091536, 364669055, 3054586256, 445988, 9496568, 34304, 5159702
			},
			.prefetch0 = 45812,
			.prefetch1 = 54660,
			.ram = eorl_final_ram_15,
			.ram_len = 12,
		},
		.transactions = eorl_transactions_15,
		.transactions_len = 6,
		.lenght = 24,
	},
};

#endif /* RBT_EORL_H */