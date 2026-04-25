#ifndef RBT_MULU_H
#define RBT_MULU_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte mulu_initial_ram_0[] = {
		{ .addr = 0xe31202, .byte = 0xcc },
		{ .addr = 0xe31203, .byte = 0xc7 },
		{ .addr = 0xe31204, .byte = 0x74 },
		{ .addr = 0xe31205, .byte = 0x25 },
		{ .addr = 0xe31206, .byte = 0x22 },
		{ .addr = 0xe31207, .byte = 0xe2 }
};

static const SST_RamByte mulu_final_ram_0[] = {
		{ .addr = 0xe31202, .byte = 0xcc },
		{ .addr = 0xe31203, .byte = 0xc7 },
		{ .addr = 0xe31204, .byte = 0x74 },
		{ .addr = 0xe31205, .byte = 0x25 },
		{ .addr = 0xe31206, .byte = 0x22 },
		{ .addr = 0xe31207, .byte = 0xe2 }
};

static const SST_Transaction mulu_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14881286, .data = 8930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte mulu_initial_ram_1[] = {
		{ .addr = 0xdac912, .byte = 0xce },
		{ .addr = 0xdac913, .byte = 0xe1 },
		{ .addr = 0xdac914, .byte = 0xc3 },
		{ .addr = 0xdac915, .byte = 0x17 },
		{ .addr = 0x973e80, .byte = 0xdc },
		{ .addr = 0x973e81, .byte = 0x4f },
		{ .addr = 0xdac916, .byte = 0x95 },
		{ .addr = 0xdac917, .byte = 0x10 }
};

static const SST_RamByte mulu_final_ram_1[] = {
		{ .addr = 0xdac912, .byte = 0xce },
		{ .addr = 0xdac913, .byte = 0xe1 },
		{ .addr = 0xdac914, .byte = 0xc3 },
		{ .addr = 0xdac915, .byte = 0x17 },
		{ .addr = 0x973e80, .byte = 0xdc },
		{ .addr = 0x973e81, .byte = 0x4f },
		{ .addr = 0xdac916, .byte = 0x95 },
		{ .addr = 0xdac917, .byte = 0x10 }
};

static const SST_Transaction mulu_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9911936, .data = 56399, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14338326, .data = 38160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 54 },
};

static const SST_RamByte mulu_initial_ram_2[] = {
		{ .addr = 0x4f7b16, .byte = 0xca },
		{ .addr = 0x4f7b17, .byte = 0xe5 },
		{ .addr = 0x4f7b18, .byte = 0xd0 },
		{ .addr = 0x4f7b19, .byte = 0x8a },
		{ .addr = 0xb7f184, .byte = 0x17 },
		{ .addr = 0xb7f185, .byte = 0xb9 },
		{ .addr = 0x4f7b1a, .byte = 0xfd },
		{ .addr = 0x4f7b1b, .byte = 0xb8 }
};

static const SST_RamByte mulu_final_ram_2[] = {
		{ .addr = 0x4f7b16, .byte = 0xca },
		{ .addr = 0x4f7b17, .byte = 0xe5 },
		{ .addr = 0x4f7b18, .byte = 0xd0 },
		{ .addr = 0x4f7b19, .byte = 0x8a },
		{ .addr = 0xb7f184, .byte = 0x17 },
		{ .addr = 0xb7f185, .byte = 0xb9 },
		{ .addr = 0x4f7b1a, .byte = 0xfd },
		{ .addr = 0x4f7b1b, .byte = 0xb8 }
};

static const SST_Transaction mulu_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12054916, .data = 6073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5208858, .data = 64952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte mulu_initial_ram_3[] = {
		{ .addr = 0x577634, .byte = 0xc6 },
		{ .addr = 0x577635, .byte = 0xe9 },
		{ .addr = 0x577636, .byte = 0x53 },
		{ .addr = 0x577637, .byte = 0xc1 },
		{ .addr = 0x577638, .byte = 0x63 },
		{ .addr = 0x577639, .byte = 0x37 },
		{ .addr = 0x40fda4, .byte = 0x01 },
		{ .addr = 0x40fda5, .byte = 0xe1 },
		{ .addr = 0x57763a, .byte = 0xb5 },
		{ .addr = 0x57763b, .byte = 0xb5 }
};

static const SST_RamByte mulu_final_ram_3[] = {
		{ .addr = 0x577634, .byte = 0xc6 },
		{ .addr = 0x577635, .byte = 0xe9 },
		{ .addr = 0x577636, .byte = 0x53 },
		{ .addr = 0x577637, .byte = 0xc1 },
		{ .addr = 0x577638, .byte = 0x63 },
		{ .addr = 0x577639, .byte = 0x37 },
		{ .addr = 0x40fda4, .byte = 0x01 },
		{ .addr = 0x40fda5, .byte = 0xe1 },
		{ .addr = 0x57763a, .byte = 0xb5 },
		{ .addr = 0x57763b, .byte = 0xb5 }
};

static const SST_Transaction mulu_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5731896, .data = 25399, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4259236, .data = 481, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5731898, .data = 46517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte mulu_initial_ram_4[] = {
		{ .addr = 0xed38c2, .byte = 0xc8 },
		{ .addr = 0xed38c3, .byte = 0xda },
		{ .addr = 0xed38c4, .byte = 0x0d },
		{ .addr = 0xed38c5, .byte = 0x81 },
		{ .addr = 0x00000c, .byte = 0x26 },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0xa8 },
		{ .addr = 0x0021a8, .byte = 0x79 },
		{ .addr = 0x0021a9, .byte = 0x00 },
		{ .addr = 0x0021aa, .byte = 0x27 },
		{ .addr = 0x0021ab, .byte = 0xca }
};

static const SST_RamByte mulu_final_ram_4[] = {
		{ .addr = 0xed38c2, .byte = 0xc8 },
		{ .addr = 0xed38c3, .byte = 0xda },
		{ .addr = 0xed38c4, .byte = 0x0d },
		{ .addr = 0xed38c5, .byte = 0x81 },
		{ .addr = 0x7a26de, .byte = 0x38 },
		{ .addr = 0x7a26df, .byte = 0xc4 },
		{ .addr = 0x7a26da, .byte = 0x86 },
		{ .addr = 0x7a26db, .byte = 0x11 },
		{ .addr = 0x7a26dc, .byte = 0x00 },
		{ .addr = 0x7a26dd, .byte = 0xed },
		{ .addr = 0x7a26d8, .byte = 0xc8 },
		{ .addr = 0x7a26d9, .byte = 0xda },
		{ .addr = 0x7a26d6, .byte = 0x9e },
		{ .addr = 0x7a26d7, .byte = 0xf9 },
		{ .addr = 0x7a26d2, .byte = 0xc8 },
		{ .addr = 0x7a26d3, .byte = 0xd1 },
		{ .addr = 0x7a26d4, .byte = 0xa1 },
		{ .addr = 0x7a26d5, .byte = 0x34 },
		{ .addr = 0x00000c, .byte = 0x26 },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0xa8 },
		{ .addr = 0x0021a8, .byte = 0x79 },
		{ .addr = 0x0021a9, .byte = 0x00 },
		{ .addr = 0x0021aa, .byte = 0x27 },
		{ .addr = 0x0021ab, .byte = 0xca }
};

static const SST_Transaction mulu_transactions_4[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3448568, .data = 29002, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8005342, .data = 14532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8005338, .data = 34321, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8005340, .data = 237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8005336, .data = 51418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8005334, .data = 40697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8005330, .data = 51409, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8005332, .data = 41268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8616, .data = 30976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8618, .data = 10186, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_5[] = {
		{ .addr = 0xfc71f2, .byte = 0xc0 },
		{ .addr = 0xfc71f3, .byte = 0xc5 },
		{ .addr = 0xfc71f4, .byte = 0xc1 },
		{ .addr = 0xfc71f5, .byte = 0x27 },
		{ .addr = 0xfc71f6, .byte = 0xc3 },
		{ .addr = 0xfc71f7, .byte = 0x45 }
};

static const SST_RamByte mulu_final_ram_5[] = {
		{ .addr = 0xfc71f2, .byte = 0xc0 },
		{ .addr = 0xfc71f3, .byte = 0xc5 },
		{ .addr = 0xfc71f4, .byte = 0xc1 },
		{ .addr = 0xfc71f5, .byte = 0x27 },
		{ .addr = 0xfc71f6, .byte = 0xc3 },
		{ .addr = 0xfc71f7, .byte = 0x45 }
};

static const SST_Transaction mulu_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16544246, .data = 49989, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte mulu_initial_ram_6[] = {
		{ .addr = 0xf51be6, .byte = 0xc4 },
		{ .addr = 0xf51be7, .byte = 0xf9 },
		{ .addr = 0xf51be8, .byte = 0xe5 },
		{ .addr = 0xf51be9, .byte = 0x43 },
		{ .addr = 0xf51bea, .byte = 0x89 },
		{ .addr = 0xf51beb, .byte = 0x19 },
		{ .addr = 0xf51bec, .byte = 0x35 },
		{ .addr = 0xf51bed, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xb5 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xbab5a2, .byte = 0x01 },
		{ .addr = 0xbab5a3, .byte = 0x25 },
		{ .addr = 0xbab5a4, .byte = 0x21 },
		{ .addr = 0xbab5a5, .byte = 0xea }
};

static const SST_RamByte mulu_final_ram_6[] = {
		{ .addr = 0xf51be6, .byte = 0xc4 },
		{ .addr = 0xf51be7, .byte = 0xf9 },
		{ .addr = 0xf51be8, .byte = 0xe5 },
		{ .addr = 0xf51be9, .byte = 0x43 },
		{ .addr = 0xf51bea, .byte = 0x89 },
		{ .addr = 0xf51beb, .byte = 0x19 },
		{ .addr = 0xf51bec, .byte = 0x35 },
		{ .addr = 0xf51bed, .byte = 0x3e },
		{ .addr = 0x8f9206, .byte = 0x1b },
		{ .addr = 0x8f9207, .byte = 0xec },
		{ .addr = 0x8f9202, .byte = 0x81 },
		{ .addr = 0x8f9203, .byte = 0x1d },
		{ .addr = 0x8f9204, .byte = 0x00 },
		{ .addr = 0x8f9205, .byte = 0xf5 },
		{ .addr = 0x8f9200, .byte = 0xc4 },
		{ .addr = 0x8f9201, .byte = 0xf9 },
		{ .addr = 0x8f91fe, .byte = 0x89 },
		{ .addr = 0x8f91ff, .byte = 0x19 },
		{ .addr = 0x8f91fa, .byte = 0xc4 },
		{ .addr = 0x8f91fb, .byte = 0xf1 },
		{ .addr = 0x8f91fc, .byte = 0xe5 },
		{ .addr = 0x8f91fd, .byte = 0x43 },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xb5 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xbab5a2, .byte = 0x01 },
		{ .addr = 0xbab5a3, .byte = 0x25 },
		{ .addr = 0xbab5a4, .byte = 0x21 },
		{ .addr = 0xbab5a5, .byte = 0xea }
};

static const SST_Transaction mulu_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16063466, .data = 35097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16063468, .data = 13630, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4426008, .data = 44964, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9409030, .data = 7148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9409026, .data = 33053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9409028, .data = 245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9409024, .data = 50425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9409022, .data = 35097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9409018, .data = 50417, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9409020, .data = 58691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12236194, .data = 293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12236196, .data = 8682, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_7[] = {
		{ .addr = 0x5e59ec, .byte = 0xcc },
		{ .addr = 0x5e59ed, .byte = 0xd8 },
		{ .addr = 0x5e59ee, .byte = 0xf8 },
		{ .addr = 0x5e59ef, .byte = 0xd9 },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x58 },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x1a58ca, .byte = 0xd0 },
		{ .addr = 0x1a58cb, .byte = 0xbf },
		{ .addr = 0x1a58cc, .byte = 0xf5 },
		{ .addr = 0x1a58cd, .byte = 0x9c }
};

static const SST_RamByte mulu_final_ram_7[] = {
		{ .addr = 0x5e59ec, .byte = 0xcc },
		{ .addr = 0x5e59ed, .byte = 0xd8 },
		{ .addr = 0x5e59ee, .byte = 0xf8 },
		{ .addr = 0x5e59ef, .byte = 0xd9 },
		{ .addr = 0x9ba412, .byte = 0x59 },
		{ .addr = 0x9ba413, .byte = 0xee },
		{ .addr = 0x9ba40e, .byte = 0x02 },
		{ .addr = 0x9ba40f, .byte = 0x02 },
		{ .addr = 0x9ba410, .byte = 0x00 },
		{ .addr = 0x9ba411, .byte = 0x5e },
		{ .addr = 0x9ba40c, .byte = 0xcc },
		{ .addr = 0x9ba40d, .byte = 0xd8 },
		{ .addr = 0x9ba40a, .byte = 0xf6 },
		{ .addr = 0x9ba40b, .byte = 0xed },
		{ .addr = 0x9ba406, .byte = 0xcc },
		{ .addr = 0x9ba407, .byte = 0xd1 },
		{ .addr = 0x9ba408, .byte = 0xb0 },
		{ .addr = 0x9ba409, .byte = 0x3a },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x58 },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x1a58ca, .byte = 0xd0 },
		{ .addr = 0x1a58cb, .byte = 0xbf },
		{ .addr = 0x1a58cc, .byte = 0xf5 },
		{ .addr = 0x1a58cd, .byte = 0x9c }
};

static const SST_Transaction mulu_transactions_7[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3864300, .data = 12582, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10200082, .data = 23022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10200078, .data = 514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10200080, .data = 94, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10200076, .data = 52440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10200074, .data = 63213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10200070, .data = 52433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10200072, .data = 45114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1726666, .data = 53439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1726668, .data = 62876, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_8[] = {
		{ .addr = 0x009942, .byte = 0xc6 },
		{ .addr = 0x009943, .byte = 0xfc },
		{ .addr = 0x009944, .byte = 0x7a },
		{ .addr = 0x009945, .byte = 0x2c },
		{ .addr = 0x009946, .byte = 0x0c },
		{ .addr = 0x009947, .byte = 0x18 },
		{ .addr = 0x009948, .byte = 0x14 },
		{ .addr = 0x009949, .byte = 0xbb }
};

static const SST_RamByte mulu_final_ram_8[] = {
		{ .addr = 0x009942, .byte = 0xc6 },
		{ .addr = 0x009943, .byte = 0xfc },
		{ .addr = 0x009944, .byte = 0x7a },
		{ .addr = 0x009945, .byte = 0x2c },
		{ .addr = 0x009946, .byte = 0x0c },
		{ .addr = 0x009947, .byte = 0x18 },
		{ .addr = 0x009948, .byte = 0x14 },
		{ .addr = 0x009949, .byte = 0xbb }
};

static const SST_Transaction mulu_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 39238, .data = 3096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 39240, .data = 5307, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte mulu_initial_ram_9[] = {
		{ .addr = 0xc2859e, .byte = 0xcc },
		{ .addr = 0xc2859f, .byte = 0xd8 },
		{ .addr = 0xc285a0, .byte = 0xd0 },
		{ .addr = 0xc285a1, .byte = 0x25 },
		{ .addr = 0xd6eee0, .byte = 0xcd },
		{ .addr = 0xd6eee1, .byte = 0x71 },
		{ .addr = 0xc285a2, .byte = 0x8c },
		{ .addr = 0xc285a3, .byte = 0x1c }
};

static const SST_RamByte mulu_final_ram_9[] = {
		{ .addr = 0xc2859e, .byte = 0xcc },
		{ .addr = 0xc2859f, .byte = 0xd8 },
		{ .addr = 0xc285a0, .byte = 0xd0 },
		{ .addr = 0xc285a1, .byte = 0x25 },
		{ .addr = 0xd6eee0, .byte = 0xcd },
		{ .addr = 0xd6eee1, .byte = 0x71 },
		{ .addr = 0xc285a2, .byte = 0x8c },
		{ .addr = 0xc285a3, .byte = 0x1c }
};

static const SST_Transaction mulu_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14085856, .data = 52593, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12748194, .data = 35868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte mulu_initial_ram_10[] = {
		{ .addr = 0xbf57e2, .byte = 0xc8 },
		{ .addr = 0xbf57e3, .byte = 0xf1 },
		{ .addr = 0xbf57e4, .byte = 0xda },
		{ .addr = 0xbf57e5, .byte = 0x1c },
		{ .addr = 0xbf57e6, .byte = 0x0c },
		{ .addr = 0xbf57e7, .byte = 0x10 },
		{ .addr = 0x00000c, .byte = 0x62 },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0x82 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x108298, .byte = 0x88 },
		{ .addr = 0x108299, .byte = 0x51 },
		{ .addr = 0x10829a, .byte = 0xf2 },
		{ .addr = 0x10829b, .byte = 0xda }
};

static const SST_RamByte mulu_final_ram_10[] = {
		{ .addr = 0xbf57e2, .byte = 0xc8 },
		{ .addr = 0xbf57e3, .byte = 0xf1 },
		{ .addr = 0xbf57e4, .byte = 0xda },
		{ .addr = 0xbf57e5, .byte = 0x1c },
		{ .addr = 0xbf57e6, .byte = 0x0c },
		{ .addr = 0xbf57e7, .byte = 0x10 },
		{ .addr = 0x3822b0, .byte = 0x57 },
		{ .addr = 0x3822b1, .byte = 0xe4 },
		{ .addr = 0x3822ac, .byte = 0xa5 },
		{ .addr = 0x3822ad, .byte = 0x09 },
		{ .addr = 0x3822ae, .byte = 0x00 },
		{ .addr = 0x3822af, .byte = 0xbf },
		{ .addr = 0x3822aa, .byte = 0xc8 },
		{ .addr = 0x3822ab, .byte = 0xf1 },
		{ .addr = 0x3822a8, .byte = 0x4e },
		{ .addr = 0x3822a9, .byte = 0xc1 },
		{ .addr = 0x3822a4, .byte = 0xc8 },
		{ .addr = 0x3822a5, .byte = 0xf5 },
		{ .addr = 0x3822a6, .byte = 0xf1 },
		{ .addr = 0x3822a7, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0x62 },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0x82 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x108298, .byte = 0x88 },
		{ .addr = 0x108299, .byte = 0x51 },
		{ .addr = 0x10829a, .byte = 0xf2 },
		{ .addr = 0x10829b, .byte = 0xda }
};

static const SST_Transaction mulu_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12539878, .data = 3088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9588416, .data = 16923, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3678896, .data = 22500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3678892, .data = 42249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3678894, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3678890, .data = 51441, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3678888, .data = 20161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3678884, .data = 51445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3678886, .data = 61842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1082008, .data = 34897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1082010, .data = 62170, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_11[] = {
		{ .addr = 0x45d9a0, .byte = 0xca },
		{ .addr = 0x45d9a1, .byte = 0xd7 },
		{ .addr = 0x45d9a2, .byte = 0x19 },
		{ .addr = 0x45d9a3, .byte = 0x4f },
		{ .addr = 0xbfbf36, .byte = 0xb5 },
		{ .addr = 0xbfbf37, .byte = 0x23 },
		{ .addr = 0x45d9a4, .byte = 0x75 },
		{ .addr = 0x45d9a5, .byte = 0xdf }
};

static const SST_RamByte mulu_final_ram_11[] = {
		{ .addr = 0x45d9a0, .byte = 0xca },
		{ .addr = 0x45d9a1, .byte = 0xd7 },
		{ .addr = 0x45d9a2, .byte = 0x19 },
		{ .addr = 0x45d9a3, .byte = 0x4f },
		{ .addr = 0xbfbf36, .byte = 0xb5 },
		{ .addr = 0xbfbf37, .byte = 0x23 },
		{ .addr = 0x45d9a4, .byte = 0x75 },
		{ .addr = 0x45d9a5, .byte = 0xdf }
};

static const SST_Transaction mulu_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12566326, .data = 46371, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4577700, .data = 30175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte mulu_initial_ram_12[] = {
		{ .addr = 0xc6d2b8, .byte = 0xca },
		{ .addr = 0xc6d2b9, .byte = 0xc4 },
		{ .addr = 0xc6d2ba, .byte = 0xac },
		{ .addr = 0xc6d2bb, .byte = 0x53 },
		{ .addr = 0xc6d2bc, .byte = 0x9e },
		{ .addr = 0xc6d2bd, .byte = 0x2b }
};

static const SST_RamByte mulu_final_ram_12[] = {
		{ .addr = 0xc6d2b8, .byte = 0xca },
		{ .addr = 0xc6d2b9, .byte = 0xc4 },
		{ .addr = 0xc6d2ba, .byte = 0xac },
		{ .addr = 0xc6d2bb, .byte = 0x53 },
		{ .addr = 0xc6d2bc, .byte = 0x9e },
		{ .addr = 0xc6d2bd, .byte = 0x2b }
};

static const SST_Transaction mulu_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13030076, .data = 40491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte mulu_initial_ram_13[] = {
		{ .addr = 0x8c9410, .byte = 0xce },
		{ .addr = 0x8c9411, .byte = 0xd7 },
		{ .addr = 0x8c9412, .byte = 0x01 },
		{ .addr = 0x8c9413, .byte = 0x4c },
		{ .addr = 0xb89cd8, .byte = 0x6e },
		{ .addr = 0xb89cd9, .byte = 0xc0 },
		{ .addr = 0x8c9414, .byte = 0xd6 },
		{ .addr = 0x8c9415, .byte = 0x3a }
};

static const SST_RamByte mulu_final_ram_13[] = {
		{ .addr = 0x8c9410, .byte = 0xce },
		{ .addr = 0x8c9411, .byte = 0xd7 },
		{ .addr = 0x8c9412, .byte = 0x01 },
		{ .addr = 0x8c9413, .byte = 0x4c },
		{ .addr = 0xb89cd8, .byte = 0x6e },
		{ .addr = 0xb89cd9, .byte = 0xc0 },
		{ .addr = 0x8c9414, .byte = 0xd6 },
		{ .addr = 0x8c9415, .byte = 0x3a }
};

static const SST_Transaction mulu_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12098776, .data = 28352, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9212948, .data = 54842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte mulu_initial_ram_14[] = {
		{ .addr = 0xbba6a4, .byte = 0xca },
		{ .addr = 0xbba6a5, .byte = 0xd6 },
		{ .addr = 0xbba6a6, .byte = 0x84 },
		{ .addr = 0xbba6a7, .byte = 0x84 },
		{ .addr = 0xb52768, .byte = 0x03 },
		{ .addr = 0xb52769, .byte = 0x1c },
		{ .addr = 0xbba6a8, .byte = 0x49 },
		{ .addr = 0xbba6a9, .byte = 0x8a }
};

static const SST_RamByte mulu_final_ram_14[] = {
		{ .addr = 0xbba6a4, .byte = 0xca },
		{ .addr = 0xbba6a5, .byte = 0xd6 },
		{ .addr = 0xbba6a6, .byte = 0x84 },
		{ .addr = 0xbba6a7, .byte = 0x84 },
		{ .addr = 0xb52768, .byte = 0x03 },
		{ .addr = 0xb52769, .byte = 0x1c },
		{ .addr = 0xbba6a8, .byte = 0x49 },
		{ .addr = 0xbba6a9, .byte = 0x8a }
};

static const SST_Transaction mulu_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11872104, .data = 796, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12297896, .data = 18826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte mulu_initial_ram_15[] = {
		{ .addr = 0xa305c2, .byte = 0xc2 },
		{ .addr = 0xa305c3, .byte = 0xd4 },
		{ .addr = 0xa305c4, .byte = 0x3f },
		{ .addr = 0xa305c5, .byte = 0x49 },
		{ .addr = 0x3ae85c, .byte = 0xda },
		{ .addr = 0x3ae85d, .byte = 0xfc },
		{ .addr = 0xa305c6, .byte = 0x7e },
		{ .addr = 0xa305c7, .byte = 0x27 }
};

static const SST_RamByte mulu_final_ram_15[] = {
		{ .addr = 0xa305c2, .byte = 0xc2 },
		{ .addr = 0xa305c3, .byte = 0xd4 },
		{ .addr = 0xa305c4, .byte = 0x3f },
		{ .addr = 0xa305c5, .byte = 0x49 },
		{ .addr = 0x3ae85c, .byte = 0xda },
		{ .addr = 0x3ae85d, .byte = 0xfc },
		{ .addr = 0xa305c6, .byte = 0x7e },
		{ .addr = 0xa305c7, .byte = 0x27 }
};

static const SST_Transaction mulu_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3860572, .data = 56060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10683846, .data = 32295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte mulu_initial_ram_16[] = {
		{ .addr = 0x68a3d8, .byte = 0xc8 },
		{ .addr = 0x68a3d9, .byte = 0xc4 },
		{ .addr = 0x68a3da, .byte = 0xa0 },
		{ .addr = 0x68a3db, .byte = 0x65 },
		{ .addr = 0x68a3dc, .byte = 0xb3 },
		{ .addr = 0x68a3dd, .byte = 0x26 }
};

static const SST_RamByte mulu_final_ram_16[] = {
		{ .addr = 0x68a3d8, .byte = 0xc8 },
		{ .addr = 0x68a3d9, .byte = 0xc4 },
		{ .addr = 0x68a3da, .byte = 0xa0 },
		{ .addr = 0x68a3db, .byte = 0x65 },
		{ .addr = 0x68a3dc, .byte = 0xb3 },
		{ .addr = 0x68a3dd, .byte = 0x26 }
};

static const SST_Transaction mulu_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6857692, .data = 45862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 42 },
};

static const SST_RamByte mulu_initial_ram_17[] = {
		{ .addr = 0x6dad86, .byte = 0xc8 },
		{ .addr = 0x6dad87, .byte = 0xd8 },
		{ .addr = 0x6dad88, .byte = 0x17 },
		{ .addr = 0x6dad89, .byte = 0x0f },
		{ .addr = 0x4685d8, .byte = 0x71 },
		{ .addr = 0x4685d9, .byte = 0x8c },
		{ .addr = 0x6dad8a, .byte = 0xad },
		{ .addr = 0x6dad8b, .byte = 0x7a }
};

static const SST_RamByte mulu_final_ram_17[] = {
		{ .addr = 0x6dad86, .byte = 0xc8 },
		{ .addr = 0x6dad87, .byte = 0xd8 },
		{ .addr = 0x6dad88, .byte = 0x17 },
		{ .addr = 0x6dad89, .byte = 0x0f },
		{ .addr = 0x4685d8, .byte = 0x71 },
		{ .addr = 0x4685d9, .byte = 0x8c },
		{ .addr = 0x6dad8a, .byte = 0xad },
		{ .addr = 0x6dad8b, .byte = 0x7a }
};

static const SST_Transaction mulu_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621784, .data = 29068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7187850, .data = 44410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte mulu_initial_ram_18[] = {
		{ .addr = 0x94a54e, .byte = 0xc8 },
		{ .addr = 0x94a54f, .byte = 0xd1 },
		{ .addr = 0x94a550, .byte = 0x29 },
		{ .addr = 0x94a551, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0xbc },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0x8b },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x9c8b82, .byte = 0x1c },
		{ .addr = 0x9c8b83, .byte = 0xed },
		{ .addr = 0x9c8b84, .byte = 0xd2 },
		{ .addr = 0x9c8b85, .byte = 0x01 }
};

static const SST_RamByte mulu_final_ram_18[] = {
		{ .addr = 0x94a54e, .byte = 0xc8 },
		{ .addr = 0x94a54f, .byte = 0xd1 },
		{ .addr = 0x94a550, .byte = 0x29 },
		{ .addr = 0x94a551, .byte = 0x97 },
		{ .addr = 0xbc015c, .byte = 0xa5 },
		{ .addr = 0xbc015d, .byte = 0x50 },
		{ .addr = 0xbc0158, .byte = 0xa3 },
		{ .addr = 0xbc0159, .byte = 0x1f },
		{ .addr = 0xbc015a, .byte = 0x00 },
		{ .addr = 0xbc015b, .byte = 0x94 },
		{ .addr = 0xbc0156, .byte = 0xc8 },
		{ .addr = 0xbc0157, .byte = 0xd1 },
		{ .addr = 0xbc0154, .byte = 0xde },
		{ .addr = 0xbc0155, .byte = 0x7f },
		{ .addr = 0xbc0150, .byte = 0xc8 },
		{ .addr = 0xbc0151, .byte = 0xd5 },
		{ .addr = 0xbc0152, .byte = 0xeb },
		{ .addr = 0xbc0153, .byte = 0xcc },
		{ .addr = 0x00000c, .byte = 0xbc },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0x8b },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x9c8b82, .byte = 0x1c },
		{ .addr = 0x9c8b83, .byte = 0xed },
		{ .addr = 0x9c8b84, .byte = 0xd2 },
		{ .addr = 0x9c8b85, .byte = 0x01 }
};

static const SST_Transaction mulu_transactions_18[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13426302, .data = 33227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12321116, .data = 42320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12321112, .data = 41759, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12321114, .data = 148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12321110, .data = 51409, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12321108, .data = 56959, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12321104, .data = 51413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12321106, .data = 60364, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 48284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 35714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10259330, .data = 7405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10259332, .data = 53761, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_19[] = {
		{ .addr = 0x71ffa0, .byte = 0xcc },
		{ .addr = 0x71ffa1, .byte = 0xf1 },
		{ .addr = 0x71ffa2, .byte = 0xe5 },
		{ .addr = 0x71ffa3, .byte = 0x8a },
		{ .addr = 0x71ffa4, .byte = 0x48 },
		{ .addr = 0x71ffa5, .byte = 0x28 },
		{ .addr = 0x00000c, .byte = 0x47 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0x50 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xda508a, .byte = 0x02 },
		{ .addr = 0xda508b, .byte = 0xa5 },
		{ .addr = 0xda508c, .byte = 0x98 },
		{ .addr = 0xda508d, .byte = 0xbb }
};

static const SST_RamByte mulu_final_ram_19[] = {
		{ .addr = 0x71ffa0, .byte = 0xcc },
		{ .addr = 0x71ffa1, .byte = 0xf1 },
		{ .addr = 0x71ffa2, .byte = 0xe5 },
		{ .addr = 0x71ffa3, .byte = 0x8a },
		{ .addr = 0x71ffa4, .byte = 0x48 },
		{ .addr = 0x71ffa5, .byte = 0x28 },
		{ .addr = 0x5a2d8e, .byte = 0xff },
		{ .addr = 0x5a2d8f, .byte = 0xa2 },
		{ .addr = 0x5a2d8a, .byte = 0xa3 },
		{ .addr = 0x5a2d8b, .byte = 0x03 },
		{ .addr = 0x5a2d8c, .byte = 0x00 },
		{ .addr = 0x5a2d8d, .byte = 0x71 },
		{ .addr = 0x5a2d88, .byte = 0xcc },
		{ .addr = 0x5a2d89, .byte = 0xf1 },
		{ .addr = 0x5a2d86, .byte = 0x8a },
		{ .addr = 0x5a2d87, .byte = 0x0d },
		{ .addr = 0x5a2d82, .byte = 0xcc },
		{ .addr = 0x5a2d83, .byte = 0xf5 },
		{ .addr = 0x5a2d84, .byte = 0x34 },
		{ .addr = 0x5a2d85, .byte = 0x9e },
		{ .addr = 0x00000c, .byte = 0x47 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0x50 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xda508a, .byte = 0x02 },
		{ .addr = 0xda508b, .byte = 0xa5 },
		{ .addr = 0xda508c, .byte = 0x98 },
		{ .addr = 0xda508d, .byte = 0xbb }
};

static const SST_Transaction mulu_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7471012, .data = 18472, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10390028, .data = 20425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5909902, .data = 65442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5909898, .data = 41731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5909900, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5909896, .data = 52465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5909894, .data = 35341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5909890, .data = 52469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5909892, .data = 13470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 18394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 20618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14307466, .data = 677, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14307468, .data = 39099, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_20[] = {
		{ .addr = 0x783ee6, .byte = 0xce },
		{ .addr = 0x783ee7, .byte = 0xf6 },
		{ .addr = 0x783ee8, .byte = 0x61 },
		{ .addr = 0x783ee9, .byte = 0xba },
		{ .addr = 0x783eea, .byte = 0x1f },
		{ .addr = 0x783eeb, .byte = 0x70 },
		{ .addr = 0x00000c, .byte = 0xe7 },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x70 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xb870fe, .byte = 0x6a },
		{ .addr = 0xb870ff, .byte = 0x1d },
		{ .addr = 0xb87100, .byte = 0x54 },
		{ .addr = 0xb87101, .byte = 0x78 }
};

static const SST_RamByte mulu_final_ram_20[] = {
		{ .addr = 0x783ee6, .byte = 0xce },
		{ .addr = 0x783ee7, .byte = 0xf6 },
		{ .addr = 0x783ee8, .byte = 0x61 },
		{ .addr = 0x783ee9, .byte = 0xba },
		{ .addr = 0x783eea, .byte = 0x1f },
		{ .addr = 0x783eeb, .byte = 0x70 },
		{ .addr = 0xb4f952, .byte = 0x3e },
		{ .addr = 0xb4f953, .byte = 0xe8 },
		{ .addr = 0xb4f94e, .byte = 0x02 },
		{ .addr = 0xb4f94f, .byte = 0x10 },
		{ .addr = 0xb4f950, .byte = 0x00 },
		{ .addr = 0xb4f951, .byte = 0x78 },
		{ .addr = 0xb4f94c, .byte = 0xce },
		{ .addr = 0xb4f94d, .byte = 0xf6 },
		{ .addr = 0xb4f94a, .byte = 0xf3 },
		{ .addr = 0xb4f94b, .byte = 0x45 },
		{ .addr = 0xb4f946, .byte = 0xce },
		{ .addr = 0xb4f947, .byte = 0xf1 },
		{ .addr = 0xb4f948, .byte = 0xca },
		{ .addr = 0xb4f949, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0xe7 },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x70 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xb870fe, .byte = 0x6a },
		{ .addr = 0xb870ff, .byte = 0x1d },
		{ .addr = 0xb87100, .byte = 0x54 },
		{ .addr = 0xb87101, .byte = 0x78 }
};

static const SST_Transaction mulu_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7880426, .data = 8048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15725380, .data = 26343, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11860306, .data = 16104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11860302, .data = 528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11860304, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11860300, .data = 52982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11860298, .data = 62277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11860294, .data = 52977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11860296, .data = 51951, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 28926, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12087550, .data = 27165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12087552, .data = 21624, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_21[] = {
		{ .addr = 0xfa7fa0, .byte = 0xcc },
		{ .addr = 0xfa7fa1, .byte = 0xfc },
		{ .addr = 0xfa7fa2, .byte = 0x6f },
		{ .addr = 0xfa7fa3, .byte = 0x19 },
		{ .addr = 0xfa7fa4, .byte = 0xa1 },
		{ .addr = 0xfa7fa5, .byte = 0x9f },
		{ .addr = 0xfa7fa6, .byte = 0x80 },
		{ .addr = 0xfa7fa7, .byte = 0xd9 }
};

static const SST_RamByte mulu_final_ram_21[] = {
		{ .addr = 0xfa7fa0, .byte = 0xcc },
		{ .addr = 0xfa7fa1, .byte = 0xfc },
		{ .addr = 0xfa7fa2, .byte = 0x6f },
		{ .addr = 0xfa7fa3, .byte = 0x19 },
		{ .addr = 0xfa7fa4, .byte = 0xa1 },
		{ .addr = 0xfa7fa5, .byte = 0x9f },
		{ .addr = 0xfa7fa6, .byte = 0x80 },
		{ .addr = 0xfa7fa7, .byte = 0xd9 }
};

static const SST_Transaction mulu_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16416676, .data = 41375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16416678, .data = 32985, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte mulu_initial_ram_22[] = {
		{ .addr = 0xe19d7c, .byte = 0xc0 },
		{ .addr = 0xe19d7d, .byte = 0xf4 },
		{ .addr = 0xe19d7e, .byte = 0xe5 },
		{ .addr = 0xe19d7f, .byte = 0x00 },
		{ .addr = 0xe19d80, .byte = 0xfa },
		{ .addr = 0xe19d81, .byte = 0x3b },
		{ .addr = 0xa8c5aa, .byte = 0x49 },
		{ .addr = 0xa8c5ab, .byte = 0x85 },
		{ .addr = 0xe19d82, .byte = 0xff },
		{ .addr = 0xe19d83, .byte = 0x7e }
};

static const SST_RamByte mulu_final_ram_22[] = {
		{ .addr = 0xe19d7c, .byte = 0xc0 },
		{ .addr = 0xe19d7d, .byte = 0xf4 },
		{ .addr = 0xe19d7e, .byte = 0xe5 },
		{ .addr = 0xe19d7f, .byte = 0x00 },
		{ .addr = 0xe19d80, .byte = 0xfa },
		{ .addr = 0xe19d81, .byte = 0x3b },
		{ .addr = 0xa8c5aa, .byte = 0x49 },
		{ .addr = 0xa8c5ab, .byte = 0x85 },
		{ .addr = 0xe19d82, .byte = 0xff },
		{ .addr = 0xe19d83, .byte = 0x7e }
};

static const SST_Transaction mulu_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14785920, .data = 64059, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11060650, .data = 18821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14785922, .data = 65406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte mulu_initial_ram_23[] = {
		{ .addr = 0xa692ea, .byte = 0xca },
		{ .addr = 0xa692eb, .byte = 0xe2 },
		{ .addr = 0xa692ec, .byte = 0x98 },
		{ .addr = 0xa692ed, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0xfc },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0xaf },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x9caf76, .byte = 0xaa },
		{ .addr = 0x9caf77, .byte = 0xa5 },
		{ .addr = 0x9caf78, .byte = 0x86 },
		{ .addr = 0x9caf79, .byte = 0xd2 }
};

static const SST_RamByte mulu_final_ram_23[] = {
		{ .addr = 0xa692ea, .byte = 0xca },
		{ .addr = 0xa692eb, .byte = 0xe2 },
		{ .addr = 0xa692ec, .byte = 0x98 },
		{ .addr = 0xa692ed, .byte = 0x3e },
		{ .addr = 0xa8d730, .byte = 0x92 },
		{ .addr = 0xa8d731, .byte = 0xee },
		{ .addr = 0xa8d72c, .byte = 0xa7 },
		{ .addr = 0xa8d72d, .byte = 0x15 },
		{ .addr = 0xa8d72e, .byte = 0x00 },
		{ .addr = 0xa8d72f, .byte = 0xa6 },
		{ .addr = 0xa8d72a, .byte = 0xca },
		{ .addr = 0xa8d72b, .byte = 0xe2 },
		{ .addr = 0xa8d728, .byte = 0x7c },
		{ .addr = 0xa8d729, .byte = 0x1d },
		{ .addr = 0xa8d724, .byte = 0xca },
		{ .addr = 0xa8d725, .byte = 0xf5 },
		{ .addr = 0xa8d726, .byte = 0xc5 },
		{ .addr = 0xa8d727, .byte = 0x6b },
		{ .addr = 0x00000c, .byte = 0xfc },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0xaf },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x9caf76, .byte = 0xaa },
		{ .addr = 0x9caf77, .byte = 0xa5 },
		{ .addr = 0x9caf78, .byte = 0x86 },
		{ .addr = 0x9caf79, .byte = 0xd2 }
};

static const SST_Transaction mulu_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7044124, .data = 382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11065136, .data = 37614, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11065132, .data = 42773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11065134, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11065130, .data = 51938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11065128, .data = 31773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11065124, .data = 51957, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11065126, .data = 50539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10268534, .data = 43685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10268536, .data = 34514, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_24[] = {
		{ .addr = 0x876902, .byte = 0xc6 },
		{ .addr = 0x876903, .byte = 0xd8 },
		{ .addr = 0x876904, .byte = 0xd0 },
		{ .addr = 0x876905, .byte = 0x23 },
		{ .addr = 0xf4b290, .byte = 0x85 },
		{ .addr = 0xf4b291, .byte = 0xf9 },
		{ .addr = 0x876906, .byte = 0xd5 },
		{ .addr = 0x876907, .byte = 0x09 }
};

static const SST_RamByte mulu_final_ram_24[] = {
		{ .addr = 0x876902, .byte = 0xc6 },
		{ .addr = 0x876903, .byte = 0xd8 },
		{ .addr = 0x876904, .byte = 0xd0 },
		{ .addr = 0x876905, .byte = 0x23 },
		{ .addr = 0xf4b290, .byte = 0x85 },
		{ .addr = 0xf4b291, .byte = 0xf9 },
		{ .addr = 0x876906, .byte = 0xd5 },
		{ .addr = 0x876907, .byte = 0x09 }
};

static const SST_Transaction mulu_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16036496, .data = 34297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8874246, .data = 54537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte mulu_initial_ram_25[] = {
		{ .addr = 0x7d3c72, .byte = 0xca },
		{ .addr = 0x7d3c73, .byte = 0xf0 },
		{ .addr = 0x7d3c74, .byte = 0x36 },
		{ .addr = 0x7d3c75, .byte = 0x33 },
		{ .addr = 0x7d3c76, .byte = 0x27 },
		{ .addr = 0x7d3c77, .byte = 0xda },
		{ .addr = 0x71c484, .byte = 0xa0 },
		{ .addr = 0x71c485, .byte = 0xcb },
		{ .addr = 0x7d3c78, .byte = 0x2e },
		{ .addr = 0x7d3c79, .byte = 0xd7 }
};

static const SST_RamByte mulu_final_ram_25[] = {
		{ .addr = 0x7d3c72, .byte = 0xca },
		{ .addr = 0x7d3c73, .byte = 0xf0 },
		{ .addr = 0x7d3c74, .byte = 0x36 },
		{ .addr = 0x7d3c75, .byte = 0x33 },
		{ .addr = 0x7d3c76, .byte = 0x27 },
		{ .addr = 0x7d3c77, .byte = 0xda },
		{ .addr = 0x71c484, .byte = 0xa0 },
		{ .addr = 0x71c485, .byte = 0xcb },
		{ .addr = 0x7d3c78, .byte = 0x2e },
		{ .addr = 0x7d3c79, .byte = 0xd7 }
};

static const SST_Transaction mulu_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8207478, .data = 10202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7455876, .data = 41163, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8207480, .data = 11991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte mulu_initial_ram_26[] = {
		{ .addr = 0x886436, .byte = 0xc0 },
		{ .addr = 0x886437, .byte = 0xc5 },
		{ .addr = 0x886438, .byte = 0xfe },
		{ .addr = 0x886439, .byte = 0x45 },
		{ .addr = 0x88643a, .byte = 0x0e },
		{ .addr = 0x88643b, .byte = 0x58 }
};

static const SST_RamByte mulu_final_ram_26[] = {
		{ .addr = 0x886436, .byte = 0xc0 },
		{ .addr = 0x886437, .byte = 0xc5 },
		{ .addr = 0x886438, .byte = 0xfe },
		{ .addr = 0x886439, .byte = 0x45 },
		{ .addr = 0x88643a, .byte = 0x0e },
		{ .addr = 0x88643b, .byte = 0x58 }
};

static const SST_Transaction mulu_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8938554, .data = 3672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte mulu_initial_ram_27[] = {
		{ .addr = 0x73b126, .byte = 0xca },
		{ .addr = 0x73b127, .byte = 0xf0 },
		{ .addr = 0x73b128, .byte = 0xb3 },
		{ .addr = 0x73b129, .byte = 0x3f },
		{ .addr = 0x73b12a, .byte = 0x27 },
		{ .addr = 0x73b12b, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0xe7 },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0xf4 },
		{ .addr = 0x00000f, .byte = 0x9c },
		{ .addr = 0x28f49c, .byte = 0x28 },
		{ .addr = 0x28f49d, .byte = 0x48 },
		{ .addr = 0x28f49e, .byte = 0x3f },
		{ .addr = 0x28f49f, .byte = 0x0a }
};

static const SST_RamByte mulu_final_ram_27[] = {
		{ .addr = 0x73b126, .byte = 0xca },
		{ .addr = 0x73b127, .byte = 0xf0 },
		{ .addr = 0x73b128, .byte = 0xb3 },
		{ .addr = 0x73b129, .byte = 0x3f },
		{ .addr = 0x73b12a, .byte = 0x27 },
		{ .addr = 0x73b12b, .byte = 0x26 },
		{ .addr = 0x96778c, .byte = 0xb1 },
		{ .addr = 0x96778d, .byte = 0x28 },
		{ .addr = 0x967788, .byte = 0x03 },
		{ .addr = 0x967789, .byte = 0x18 },
		{ .addr = 0x96778a, .byte = 0x00 },
		{ .addr = 0x96778b, .byte = 0x73 },
		{ .addr = 0x967786, .byte = 0xca },
		{ .addr = 0x967787, .byte = 0xf0 },
		{ .addr = 0x967784, .byte = 0xd6 },
		{ .addr = 0x967785, .byte = 0xbd },
		{ .addr = 0x967780, .byte = 0xca },
		{ .addr = 0x967781, .byte = 0xf1 },
		{ .addr = 0x967782, .byte = 0x90 },
		{ .addr = 0x967783, .byte = 0xd3 },
		{ .addr = 0x00000c, .byte = 0xe7 },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0xf4 },
		{ .addr = 0x00000f, .byte = 0x9c },
		{ .addr = 0x28f49c, .byte = 0x28 },
		{ .addr = 0x28f49d, .byte = 0x48 },
		{ .addr = 0x28f49e, .byte = 0x3f },
		{ .addr = 0x28f49f, .byte = 0x0a }
};

static const SST_Transaction mulu_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7581994, .data = 10022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13883068, .data = 35657, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9861004, .data = 45352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9861000, .data = 792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9861002, .data = 115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9860998, .data = 51952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9860996, .data = 54973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9860992, .data = 51953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9860994, .data = 37075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 62620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2684060, .data = 10312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2684062, .data = 16138, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_28[] = {
		{ .addr = 0x3b9d9a, .byte = 0xc0 },
		{ .addr = 0x3b9d9b, .byte = 0xee },
		{ .addr = 0x3b9d9c, .byte = 0x11 },
		{ .addr = 0x3b9d9d, .byte = 0xd3 },
		{ .addr = 0x3b9d9e, .byte = 0x71 },
		{ .addr = 0x3b9d9f, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0x44 },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0xd8d5b8, .byte = 0x74 },
		{ .addr = 0xd8d5b9, .byte = 0x03 },
		{ .addr = 0xd8d5ba, .byte = 0xb1 },
		{ .addr = 0xd8d5bb, .byte = 0xf7 }
};

static const SST_RamByte mulu_final_ram_28[] = {
		{ .addr = 0x3b9d9a, .byte = 0xc0 },
		{ .addr = 0x3b9d9b, .byte = 0xee },
		{ .addr = 0x3b9d9c, .byte = 0x11 },
		{ .addr = 0x3b9d9d, .byte = 0xd3 },
		{ .addr = 0x3b9d9e, .byte = 0x71 },
		{ .addr = 0x3b9d9f, .byte = 0xf5 },
		{ .addr = 0x71764e, .byte = 0x9d },
		{ .addr = 0x71764f, .byte = 0x9c },
		{ .addr = 0x71764a, .byte = 0xa3 },
		{ .addr = 0x71764b, .byte = 0x00 },
		{ .addr = 0x71764c, .byte = 0x00 },
		{ .addr = 0x71764d, .byte = 0x3b },
		{ .addr = 0x717648, .byte = 0xc0 },
		{ .addr = 0x717649, .byte = 0xee },
		{ .addr = 0x717646, .byte = 0xa2 },
		{ .addr = 0x717647, .byte = 0x5b },
		{ .addr = 0x717642, .byte = 0xc0 },
		{ .addr = 0x717643, .byte = 0xf5 },
		{ .addr = 0x717644, .byte = 0x05 },
		{ .addr = 0x717645, .byte = 0x8f },
		{ .addr = 0x00000c, .byte = 0x44 },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0xd8d5b8, .byte = 0x74 },
		{ .addr = 0xd8d5b9, .byte = 0x03 },
		{ .addr = 0xd8d5ba, .byte = 0xb1 },
		{ .addr = 0xd8d5bb, .byte = 0xf7 }
};

static const SST_Transaction mulu_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3906974, .data = 29173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413210, .data = 28348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7435854, .data = 40348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7435850, .data = 41728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7435852, .data = 59, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7435848, .data = 49390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7435846, .data = 41563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7435842, .data = 49397, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7435844, .data = 1423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 17624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14210488, .data = 29699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14210490, .data = 45559, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_29[] = {
		{ .addr = 0x5ac4fc, .byte = 0xcc },
		{ .addr = 0x5ac4fd, .byte = 0xda },
		{ .addr = 0x5ac4fe, .byte = 0xec },
		{ .addr = 0x5ac4ff, .byte = 0x17 },
		{ .addr = 0xf3b908, .byte = 0x4e },
		{ .addr = 0xf3b909, .byte = 0x21 },
		{ .addr = 0x5ac500, .byte = 0xf9 },
		{ .addr = 0x5ac501, .byte = 0xcb }
};

static const SST_RamByte mulu_final_ram_29[] = {
		{ .addr = 0x5ac4fc, .byte = 0xcc },
		{ .addr = 0x5ac4fd, .byte = 0xda },
		{ .addr = 0x5ac4fe, .byte = 0xec },
		{ .addr = 0x5ac4ff, .byte = 0x17 },
		{ .addr = 0xf3b908, .byte = 0x4e },
		{ .addr = 0xf3b909, .byte = 0x21 },
		{ .addr = 0x5ac500, .byte = 0xf9 },
		{ .addr = 0x5ac501, .byte = 0xcb }
};

static const SST_Transaction mulu_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15972616, .data = 20001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5948672, .data = 63947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte mulu_initial_ram_30[] = {
		{ .addr = 0x8b2f48, .byte = 0xce },
		{ .addr = 0x8b2f49, .byte = 0xdc },
		{ .addr = 0x8b2f4a, .byte = 0x0e },
		{ .addr = 0x8b2f4b, .byte = 0x45 },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0xc1 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0x6ac1c8, .byte = 0xa1 },
		{ .addr = 0x6ac1c9, .byte = 0x91 },
		{ .addr = 0x6ac1ca, .byte = 0x44 },
		{ .addr = 0x6ac1cb, .byte = 0xb3 }
};

static const SST_RamByte mulu_final_ram_30[] = {
		{ .addr = 0x8b2f48, .byte = 0xce },
		{ .addr = 0x8b2f49, .byte = 0xdc },
		{ .addr = 0x8b2f4a, .byte = 0x0e },
		{ .addr = 0x8b2f4b, .byte = 0x45 },
		{ .addr = 0xcc52a2, .byte = 0x2f },
		{ .addr = 0xcc52a3, .byte = 0x4a },
		{ .addr = 0xcc529e, .byte = 0xa2 },
		{ .addr = 0xcc529f, .byte = 0x05 },
		{ .addr = 0xcc52a0, .byte = 0x00 },
		{ .addr = 0xcc52a1, .byte = 0x8b },
		{ .addr = 0xcc529c, .byte = 0xce },
		{ .addr = 0xcc529d, .byte = 0xdc },
		{ .addr = 0xcc529a, .byte = 0xc5 },
		{ .addr = 0xcc529b, .byte = 0xb3 },
		{ .addr = 0xcc5296, .byte = 0xce },
		{ .addr = 0xcc5297, .byte = 0xd5 },
		{ .addr = 0xcc5298, .byte = 0x9f },
		{ .addr = 0xcc5299, .byte = 0x54 },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0xc1 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0x6ac1c8, .byte = 0xa1 },
		{ .addr = 0x6ac1c9, .byte = 0x91 },
		{ .addr = 0x6ac1ca, .byte = 0x44 },
		{ .addr = 0x6ac1cb, .byte = 0xb3 }
};

static const SST_Transaction mulu_transactions_30[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5555634, .data = 1715, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13390498, .data = 12106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13390494, .data = 41477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13390496, .data = 139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13390492, .data = 52956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13390490, .data = 50611, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13390486, .data = 52949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13390488, .data = 40788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6996424, .data = 41361, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6996426, .data = 17587, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte mulu_initial_ram_31[] = {
		{ .addr = 0x2f780e, .byte = 0xc6 },
		{ .addr = 0x2f780f, .byte = 0xc2 },
		{ .addr = 0x2f7810, .byte = 0x81 },
		{ .addr = 0x2f7811, .byte = 0x7b },
		{ .addr = 0x2f7812, .byte = 0xc2 },
		{ .addr = 0x2f7813, .byte = 0x53 }
};

static const SST_RamByte mulu_final_ram_31[] = {
		{ .addr = 0x2f780e, .byte = 0xc6 },
		{ .addr = 0x2f780f, .byte = 0xc2 },
		{ .addr = 0x2f7810, .byte = 0x81 },
		{ .addr = 0x2f7811, .byte = 0x7b },
		{ .addr = 0x2f7812, .byte = 0xc2 },
		{ .addr = 0x2f7813, .byte = 0x53 }
};

static const SST_Transaction mulu_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3110930, .data = 49747, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_TestCase mulu[] = {
	{
		.name = "000 MULU D7, D6 ccc7",
		.initial = {
			.regs = {
				2909375531, 45066297, 2272781739, 3284563293, 222391173, 2171116808, 1410154944, 3340024981, 3471851701, 600322505, 4058441337, 3860183758, 245925844, 2792002862, 3063616133, 2770922, 14958, 33543, 14881286
			},
			.prefetch0 = 52423,
			.prefetch1 = 29733,
			.ram = mulu_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2909375531, 45066297, 2272781739, 3284563293, 222391173, 2171116808, 812598464, 3340024981, 3471851701, 600322505, 4058441337, 3860183758, 245925844, 2792002862, 3063616133, 2770922, 14958, 33536, 14881288
			},
			.prefetch0 = 29733,
			.prefetch1 = 8930,
			.ram = mulu_final_ram_0,
			.ram_len = 6,
		},
		.transactions = mulu_transactions_0,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "001 MULU -(A1), D7 cee1",
		.initial = {
			.regs = {
				1315198159, 902315066, 157072743, 3720484852, 2938192116, 2925844144, 1996925972, 2610936829, 500701953, 2392276610, 99865811, 2657752381, 3305813636, 660355225, 2805834601, 1551740, 7164324, 270, 14338326
			},
			.prefetch0 = 52961,
			.prefetch1 = 49943,
			.ram = mulu_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1315198159, 902315066, 157072743, 3720484852, 2938192116, 2925844144, 1996925972, 2714201875, 500701953, 2392276608, 99865811, 2657752381, 3305813636, 660355225, 2805834601, 1551740, 7164324, 264, 14338328
			},
			.prefetch0 = 49943,
			.prefetch1 = 38160,
			.ram = mulu_final_ram_1,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_1,
		.transactions_len = 4,
		.lenght = 64,
	},
	{
		.name = "002 MULU -(A5), D5 cae5",
		.initial = {
			.regs = {
				844522578, 2815554514, 2553381559, 2561418574, 545625782, 4005918605, 1829728891, 3496807163, 1975100686, 2573103179, 477350422, 3804877973, 1537403339, 2058875270, 679598995, 6725740, 7865314, 42240, 5208858
			},
			.prefetch0 = 51941,
			.prefetch1 = 53386,
			.ram = mulu_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				844522578, 2815554514, 2553381559, 2561418574, 545625782, 185864165, 1829728891, 3496807163, 1975100686, 2573103179, 477350422, 3804877973, 1537403339, 2058875268, 679598995, 6725740, 7865314, 42240, 5208860
			},
			.prefetch0 = 53386,
			.prefetch1 = 64952,
			.ram = mulu_final_ram_2,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_2,
		.transactions_len = 4,
		.lenght = 62,
	},
	{
		.name = "003 MULU (d16, A1), D3 c6e9",
		.initial = {
			.regs = {
				3700081405, 777611551, 1929250142, 1785799576, 1429693960, 1490521101, 1673778717, 3477007613, 2675264685, 3275794915, 1210561101, 2438145091, 2853502892, 3844406361, 799865024, 7484688, 14449488, 10011, 5731896
			},
			.prefetch0 = 50921,
			.prefetch1 = 21441,
			.ram = mulu_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3700081405, 777611551, 1929250142, 4382872, 1429693960, 1490521101, 1673778717, 3477007613, 2675264685, 3275794915, 1210561101, 2438145091, 2853502892, 3844406361, 799865024, 7484688, 14449488, 10000, 5731900
			},
			.prefetch0 = 25399,
			.prefetch1 = 46517,
			.ram = mulu_final_ram_3,
			.ram_len = 10,
		},
		.transactions = mulu_transactions_3,
		.transactions_len = 4,
		.lenght = 56,
	},
	{
		.name = "004 MULU (A2)+, D4 c8da",
		.initial = {
			.regs = {
				3523013733, 1216191622, 1837948836, 2793604560, 4133868565, 3919600982, 2586014969, 3097753847, 1914324401, 3933200375, 2704580345, 1792930508, 2379081809, 3824480270, 3923861825, 15814840, 8005344, 34321, 15546566
			},
			.prefetch0 = 51418,
			.prefetch1 = 3457,
			.ram = mulu_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3523013733, 1216191622, 1837948836, 2793604560, 4133868565, 3919600982, 2586014969, 3097753847, 1914324401, 3933200375, 2704580347, 1792930508, 2379081809, 3824480270, 3923861825, 15814840, 8005330, 9745, 637542828
			},
			.prefetch0 = 30976,
			.prefetch1 = 10186,
			.ram = mulu_final_ram_4,
			.ram_len = 26,
		},
		.transactions = mulu_transactions_4,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "005 MULU D5, D0 c0c5",
		.initial = {
			.regs = {
				3779609306, 1352587882, 2529279887, 3657311414, 4091229170, 2522129781, 1507284952, 1686864096, 3047179088, 1156960576, 2955037137, 919487487, 981162105, 1361002004, 334504675, 9166816, 11023812, 529, 16544246
			},
			.prefetch0 = 49349,
			.prefetch1 = 49447,
			.ram = mulu_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				724897698, 1352587882, 2529279887, 3657311414, 4091229170, 2522129781, 1507284952, 1686864096, 3047179088, 1156960576, 2955037137, 919487487, 981162105, 1361002004, 334504675, 9166816, 11023812, 528, 16544248
			},
			.prefetch0 = 49447,
			.prefetch1 = 49989,
			.ram = mulu_final_ram_5,
			.ram_len = 6,
		},
		.transactions = mulu_transactions_5,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "006 MULU (xxx).l, D2 c4f9",
		.initial = {
			.regs = {
				2675680966, 4155356523, 1042570219, 2539140346, 2072067878, 1576869884, 3232956024, 1128568102, 813873936, 707256248, 3604034434, 1572664712, 2270221284, 3290980376, 2165828211, 16634218, 9409032, 33053, 16063466
			},
			.prefetch0 = 50425,
			.prefetch1 = 58691,
			.ram = mulu_initial_ram_6,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2675680966, 4155356523, 1042570219, 2539140346, 2072067878, 1576869884, 3232956024, 1128568102, 813873936, 707256248, 3604034434, 1572664712, 2270221284, 3290980376, 2165828211, 16634218, 9409018, 8477, 431666598
			},
			.prefetch0 = 293,
			.prefetch1 = 8682,
			.ram = mulu_final_ram_6,
			.ram_len = 30,
		},
		.transactions = mulu_transactions_6,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "007 MULU (A0)+, D6 ccd8",
		.initial = {
			.regs = {
				1488045599, 1907422658, 186509824, 1376305562, 1628392937, 3554816629, 2810929891, 2666348738, 2956654317, 4103805742, 74528995, 2860190000, 375758163, 1320451744, 2549828442, 1290760, 10200084, 514, 6183408
			},
			.prefetch0 = 52440,
			.prefetch1 = 63705,
			.ram = mulu_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1488045599, 1907422658, 186509824, 1376305562, 1628392937, 3554816629, 2810929891, 2666348738, 2956654319, 4103805742, 74528995, 2860190000, 375758163, 1320451744, 2549828442, 1290760, 10200070, 8706, 3910817998
			},
			.prefetch0 = 53439,
			.prefetch1 = 62876,
			.ram = mulu_final_ram_7,
			.ram_len = 26,
		},
		.transactions = mulu_transactions_7,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "008 MULU #, D3 c6fc",
		.initial = {
			.regs = {
				918627913, 850554499, 3999925335, 969414665, 1375425761, 817405463, 3854522015, 4227173353, 3834981828, 4050780287, 616785160, 2743301343, 3283005334, 1397661597, 4003865485, 3522120, 7750182, 1048, 39238
			},
			.prefetch0 = 50940,
			.prefetch1 = 31276,
			.ram = mulu_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				918627913, 850554499, 3999925335, 192441228, 1375425761, 817405463, 3854522015, 4227173353, 3834981828, 4050780287, 616785160, 2743301343, 3283005334, 1397661597, 4003865485, 3522120, 7750182, 1040, 39242
			},
			.prefetch0 = 3096,
			.prefetch1 = 5307,
			.ram = mulu_final_ram_8,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_8,
		.transactions_len = 3,
		.lenght = 58,
	},
	{
		.name = "009 MULU (A0)+, D6 ccd8",
		.initial = {
			.regs = {
				392992045, 1584424405, 3900819773, 22823668, 1244074957, 3570491828, 27450317, 3518231368, 2211901152, 2094419790, 1664010300, 1858657374, 2344860418, 3516056394, 2600872819, 13305326, 6693322, 256, 12748194
			},
			.prefetch0 = 52440,
			.prefetch1 = 53285,
			.ram = mulu_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				392992045, 1584424405, 3900819773, 22823668, 1244074957, 3570491828, 2959355517, 3518231368, 2211901154, 2094419790, 1664010300, 1858657374, 2344860418, 3516056394, 2600872819, 13305326, 6693322, 264, 12748196
			},
			.prefetch0 = 53285,
			.prefetch1 = 35868,
			.ram = mulu_final_ram_9,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_9,
		.transactions_len = 3,
		.lenght = 60,
	},
	{
		.name = "010 MULU (d8, A1, Xn), D4 c8f1",
		.initial = {
			.regs = {
				522017082, 1213770922, 2783413883, 3945687456, 2759661360, 2564794394, 3319695633, 1749069239, 3391776650, 887037687, 825826335, 329489539, 2899230114, 3165859758, 671524236, 11288754, 3678898, 42249, 12539878
			},
			.prefetch0 = 51441,
			.prefetch1 = 55836,
			.ram = mulu_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				522017082, 1213770922, 2783413883, 3945687456, 2759661360, 2564794394, 3319695633, 1749069239, 3391776650, 887037687, 825826335, 329489539, 2899230114, 3165859758, 671524236, 11288754, 3678884, 9481, 1645249180
			},
			.prefetch0 = 34897,
			.prefetch1 = 62170,
			.ram = mulu_final_ram_10,
			.ram_len = 28,
		},
		.transactions = mulu_transactions_10,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "011 MULU (A7), D5 cad7",
		.initial = {
			.regs = {
				2111048853, 1858283015, 3988222, 2972243998, 1042186417, 3299077428, 3951315125, 2955687137, 225717226, 3466256413, 2663113899, 1821866318, 1329400426, 4128381694, 3354288806, 12566326, 6518854, 34589, 4577700
			},
			.prefetch0 = 51927,
			.prefetch1 = 6479,
			.ram = mulu_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2111048853, 1858283015, 3988222, 2972243998, 1042186417, 2815832604, 3951315125, 2955687137, 225717226, 3466256413, 2663113899, 1821866318, 1329400426, 4128381694, 3354288806, 12566326, 6518854, 34584, 4577702
			},
			.prefetch0 = 6479,
			.prefetch1 = 30175,
			.ram = mulu_final_ram_11,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_11,
		.transactions_len = 3,
		.lenght = 58,
	},
	{
		.name = "012 MULU D4, D5 cac4",
		.initial = {
			.regs = {
				1775014392, 4078842226, 3772061264, 2174540127, 3134811274, 2719570434, 658034435, 3371952173, 1196970366, 3051457606, 817946421, 3679771863, 570277268, 1361782639, 4155120058, 16522872, 15139436, 9486, 13030076
			},
			.prefetch0 = 51908,
			.prefetch1 = 44115,
			.ram = mulu_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1775014392, 4078842226, 3772061264, 2174540127, 3134811274, 640245012, 658034435, 3371952173, 1196970366, 3051457606, 817946421, 3679771863, 570277268, 1361782639, 4155120058, 16522872, 15139436, 9472, 13030078
			},
			.prefetch0 = 44115,
			.prefetch1 = 40491,
			.ram = mulu_final_ram_12,
			.ram_len = 6,
		},
		.transactions = mulu_transactions_12,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "013 MULU (A7), D7 ced7",
		.initial = {
			.regs = {
				3823689570, 2897842448, 2781035987, 4088321471, 1929172850, 2904525124, 1477425915, 4239681414, 3400572114, 2324391645, 4019531443, 4289773301, 3923200653, 1073324349, 1629469601, 12098776, 9647266, 1550, 9212948
			},
			.prefetch0 = 52951,
			.prefetch1 = 332,
			.ram = mulu_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3823689570, 2897842448, 2781035987, 4088321471, 1929172850, 2904525124, 1477425915, 751384704, 3400572114, 2324391645, 4019531443, 4289773301, 3923200653, 1073324349, 1629469601, 12098776, 9647266, 1536, 9212950
			},
			.prefetch0 = 332,
			.prefetch1 = 54842,
			.ram = mulu_final_ram_13,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_13,
		.transactions_len = 3,
		.lenght = 56,
	},
	{
		.name = "014 MULU (A6), D5 cad6",
		.initial = {
			.regs = {
				2305599928, 1874088588, 67769302, 3060972231, 3556998373, 1944019707, 3640961476, 4053814480, 4176722479, 1478651, 381369480, 3974489136, 2751786775, 488999259, 3954517864, 13820758, 5441090, 33561, 12297896
			},
			.prefetch0 = 51926,
			.prefetch1 = 33924,
			.ram = mulu_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2305599928, 1874088588, 67769302, 3060972231, 3556998373, 20169844, 3640961476, 4053814480, 4176722479, 1478651, 381369480, 3974489136, 2751786775, 488999259, 3954517864, 13820758, 5441090, 33552, 12297898
			},
			.prefetch0 = 33924,
			.prefetch1 = 18826,
			.ram = mulu_final_ram_14,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_14,
		.transactions_len = 3,
		.lenght = 52,
	},
	{
		.name = "015 MULU (A4), D1 c2d4",
		.initial = {
			.regs = {
				1589716616, 2882178381, 597576986, 906905208, 2139905463, 2289419663, 4116812916, 1138324433, 149241248, 301810263, 3870651229, 2150318002, 3610962012, 1150741510, 1955643644, 2336632, 9269556, 40991, 10683846
			},
			.prefetch0 = 49876,
			.prefetch1 = 16201,
			.ram = mulu_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1589716616, 2027858380, 597576986, 906905208, 2139905463, 2289419663, 4116812916, 1138324433, 149241248, 301810263, 3870651229, 2150318002, 3610962012, 1150741510, 1955643644, 2336632, 9269556, 40976, 10683848
			},
			.prefetch0 = 16201,
			.prefetch1 = 32295,
			.ram = mulu_final_ram_15,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_15,
		.transactions_len = 3,
		.lenght = 64,
	},
	{
		.name = "016 MULU D4, D4 c8c4",
		.initial = {
			.regs = {
				1882603346, 1045756598, 2083593360, 1034862061, 3675396225, 3540015449, 3526283411, 4217707890, 526308351, 3550789366, 2247285899, 731558879, 3280441825, 4005306305, 4121933384, 6106180, 5938668, 8212, 6857692
			},
			.prefetch0 = 51396,
			.prefetch1 = 41061,
			.ram = mulu_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1882603346, 1045756598, 2083593360, 1034862061, 39350529, 3540015449, 3526283411, 4217707890, 526308351, 3550789366, 2247285899, 731558879, 3280441825, 4005306305, 4121933384, 6106180, 5938668, 8208, 6857694
			},
			.prefetch0 = 41061,
			.prefetch1 = 45862,
			.ram = mulu_final_ram_16,
			.ram_len = 6,
		},
		.transactions = mulu_transactions_16,
		.transactions_len = 2,
		.lenght = 46,
	},
	{
		.name = "017 MULU (A0)+, D4 c8d8",
		.initial = {
			.regs = {
				2113519100, 876682802, 802947655, 1221876101, 1012083802, 526428423, 2154555444, 3509662600, 2588313048, 437823135, 629582598, 384672045, 1084893846, 3968254743, 4147096395, 3721406, 11037460, 9237, 7187850
			},
			.prefetch0 = 51416,
			.prefetch1 = 5903,
			.ram = mulu_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2113519100, 876682802, 802947655, 1221876101, 330038072, 526428423, 2154555444, 3509662600, 2588313050, 437823135, 629582598, 384672045, 1084893846, 3968254743, 4147096395, 3721406, 11037460, 9232, 7187852
			},
			.prefetch0 = 5903,
			.prefetch1 = 44410,
			.ram = mulu_final_ram_17,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_17,
		.transactions_len = 3,
		.lenght = 56,
	},
	{
		.name = "018 MULU (A1), D4 c8d1",
		.initial = {
			.regs = {
				3665422178, 2155474054, 2027099804, 2790303591, 2423650030, 3362784160, 1502519905, 2358916922, 2529563389, 3956072063, 706191246, 2611529552, 1081206587, 1604650075, 2673699816, 10519046, 12321118, 41759, 9741650
			},
			.prefetch0 = 51409,
			.prefetch1 = 10647,
			.ram = mulu_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3665422178, 2155474054, 2027099804, 2790303591, 2423650030, 3362784160, 1502519905, 2358916922, 2529563389, 3956072063, 706191246, 2611529552, 1081206587, 1604650075, 2673699816, 10519046, 12321104, 8991, 3164375942
			},
			.prefetch0 = 7405,
			.prefetch1 = 53761,
			.ram = mulu_final_ram_18,
			.ram_len = 26,
		},
		.transactions = mulu_transactions_18,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "019 MULU (d8, A1, Xn), D6 ccf1",
		.initial = {
			.regs = {
				784948057, 2729103203, 3715037145, 2588272867, 3981702696, 376564957, 1123233832, 3794318200, 3606969687, 882774689, 2332394135, 3441528328, 3463007696, 3234704290, 2764142562, 13687534, 5909904, 41731, 7471012
			},
			.prefetch0 = 52465,
			.prefetch1 = 58762,
			.ram = mulu_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				784948057, 2729103203, 3715037145, 2588272867, 3981702696, 376564957, 1123233832, 3794318200, 3606969687, 882774689, 2332394135, 3441528328, 3463007696, 3234704290, 2764142562, 13687534, 5909890, 8963, 1205489806
			},
			.prefetch0 = 677,
			.prefetch1 = 39099,
			.ram = mulu_final_ram_19,
			.ram_len = 28,
		},
		.transactions = mulu_transactions_19,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "020 MULU (d8, A6, Xn), D7 cef6",
		.initial = {
			.regs = {
				1871122828, 1774483979, 2022542685, 1724345851, 3747029980, 3430747854, 2436215768, 4260314625, 3939945152, 2397650686, 1306987242, 4254799563, 4020058524, 371865176, 3404742579, 12540830, 11860308, 528, 7880426
			},
			.prefetch0 = 52982,
			.prefetch1 = 25018,
			.ram = mulu_initial_ram_20,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1871122828, 1774483979, 2022542685, 1724345851, 3747029980, 3430747854, 2436215768, 4260314625, 3939945152, 2397650686, 1306987242, 4254799563, 4020058524, 371865176, 3404742579, 12540830, 11860294, 8720, 3887624450
			},
			.prefetch0 = 27165,
			.prefetch1 = 21624,
			.ram = mulu_final_ram_20,
			.ram_len = 28,
		},
		.transactions = mulu_transactions_20,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "021 MULU #, D6 ccfc",
		.initial = {
			.regs = {
				3220724286, 168493880, 2951240566, 1946909900, 9948607, 1604403314, 866703951, 3013551145, 3168925359, 1263790857, 686630455, 988568296, 1913707740, 2227094669, 4284335759, 4425518, 8881210, 32783, 16416676
			},
			.prefetch0 = 52476,
			.prefetch1 = 28441,
			.ram = mulu_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3220724286, 168493880, 2951240566, 1946909900, 9948607, 1604403314, 1589482167, 3013551145, 3168925359, 1263790857, 686630455, 988568296, 1913707740, 2227094669, 4284335759, 4425518, 8881210, 32768, 16416680
			},
			.prefetch0 = 41375,
			.prefetch1 = 32985,
			.ram = mulu_final_ram_21,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_21,
		.transactions_len = 3,
		.lenght = 60,
	},
	{
		.name = "022 MULU (d8, A4, Xn), D0 c0f4",
		.initial = {
			.regs = {
				3603799508, 1068106353, 3443456906, 3227163320, 3627942580, 631391628, 549645797, 1794906197, 4190874370, 3923812067, 3282891648, 397613380, 1487465632, 1311905057, 3549813002, 14785664, 8742750, 8723, 14785920
			},
			.prefetch0 = 49396,
			.prefetch1 = 58624,
			.ram = mulu_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				760443684, 1068106353, 3443456906, 3227163320, 3627942580, 631391628, 549645797, 1794906197, 4190874370, 3923812067, 3282891648, 397613380, 1487465632, 1311905057, 3549813002, 14785664, 8742750, 8720, 14785924
			},
			.prefetch0 = 64059,
			.prefetch1 = 65406,
			.ram = mulu_final_ram_22,
			.ram_len = 10,
		},
		.transactions = mulu_transactions_22,
		.transactions_len = 5,
		.lenght = 60,
	},
	{
		.name = "023 MULU -(A2), D5 cae2",
		.initial = {
			.regs = {
				1850103814, 3068834576, 3709254957, 185122542, 3105598796, 2300003582, 739180313, 4075310833, 1220292009, 2668068478, 3312155679, 2735394898, 1098696005, 1125074153, 4285134771, 8000938, 11065138, 42773, 10916590
			},
			.prefetch0 = 51938,
			.prefetch1 = 38974,
			.ram = mulu_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1850103814, 3068834576, 3709254957, 185122542, 3105598796, 2300003582, 739180313, 4075310833, 1220292009, 2668068478, 3312155677, 2735394898, 1098696005, 1125074153, 4285134771, 8000938, 11065124, 10005, 4238126970
			},
			.prefetch0 = 43685,
			.prefetch1 = 34514,
			.ram = mulu_final_ram_23,
			.ram_len = 26,
		},
		.transactions = mulu_transactions_23,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "024 MULU (A0)+, D3 c6d8",
		.initial = {
			.regs = {
				319392417, 2422203851, 3242264892, 11976754, 1245965711, 204535453, 1178676793, 3373839738, 2297737872, 585213429, 4050389848, 2084020597, 3560094007, 3825497737, 3339707927, 4742910, 3370430, 8719, 8874246
			},
			.prefetch0 = 50904,
			.prefetch1 = 53283,
			.ram = mulu_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				319392417, 2422203851, 3242264892, 1687480994, 1245965711, 204535453, 1178676793, 3373839738, 2297737874, 585213429, 4050389848, 2084020597, 3560094007, 3825497737, 3339707927, 4742910, 3370430, 8704, 8874248
			},
			.prefetch0 = 53283,
			.prefetch1 = 54537,
			.ram = mulu_final_ram_24,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_24,
		.transactions_len = 3,
		.lenght = 60,
	},
	{
		.name = "025 MULU (d8, A0, Xn), D5 caf0",
		.initial = {
			.regs = {
				2369786138, 1364234455, 3362858559, 902011993, 2230779489, 1044447504, 4215263883, 3090559907, 544352248, 230235056, 1317447775, 356445434, 522005800, 1053694173, 604675720, 4484516, 9247352, 34332, 8207478
			},
			.prefetch0 = 51952,
			.prefetch1 = 13875,
			.ram = mulu_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2369786138, 1364234455, 3362858559, 902011993, 2230779489, 11196336, 4215263883, 3090559907, 544352248, 230235056, 1317447775, 356445434, 522005800, 1053694173, 604675720, 4484516, 9247352, 34320, 8207482
			},
			.prefetch0 = 10202,
			.prefetch1 = 11991,
			.ram = mulu_final_ram_25,
			.ram_len = 10,
		},
		.transactions = mulu_transactions_25,
		.transactions_len = 5,
		.lenght = 62,
	},
	{
		.name = "026 MULU D5, D0 c0c5",
		.initial = {
			.regs = {
				21740380, 1127483347, 4026416123, 1455230651, 1266081969, 1018042039, 1744542277, 784109125, 4088880242, 2274491997, 1329670730, 3911070877, 3549582314, 1120344357, 2231383409, 70210, 3661522, 42014, 8938554
			},
			.prefetch0 = 49349,
			.prefetch1 = 65093,
			.ram = mulu_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				278910660, 1127483347, 4026416123, 1455230651, 1266081969, 1018042039, 1744542277, 784109125, 4088880242, 2274491997, 1329670730, 3911070877, 3549582314, 1120344357, 2231383409, 70210, 3661522, 42000, 8938556
			},
			.prefetch0 = 65093,
			.prefetch1 = 3672,
			.ram = mulu_final_ram_26,
			.ram_len = 6,
		},
		.transactions = mulu_transactions_26,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "027 MULU (d8, A0, Xn), D5 caf0",
		.initial = {
			.regs = {
				4208869485, 2319151213, 2382879020, 3731657208, 4177385594, 2076166840, 20222412, 2545796089, 2429770943, 2255373115, 2257070463, 692877759, 2981267026, 938007711, 3386031510, 15204796, 9861006, 792, 7581994
			},
			.prefetch0 = 51952,
			.prefetch1 = 45887,
			.ram = mulu_initial_ram_27,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4208869485, 2319151213, 2382879020, 3731657208, 4177385594, 2076166840, 20222412, 2545796089, 2429770943, 2255373115, 2257070463, 692877759, 2981267026, 938007711, 3386031510, 15204796, 9860992, 8984, 3878220960
			},
			.prefetch0 = 10312,
			.prefetch1 = 16138,
			.ram = mulu_final_ram_27,
			.ram_len = 28,
		},
		.transactions = mulu_transactions_27,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "028 MULU (d16, A6), D0 c0ee",
		.initial = {
			.regs = {
				200204976, 1034357538, 2314629410, 2821404733, 3617466503, 2365152722, 716991398, 781862443, 3371591002, 516256182, 4070233091, 2359192787, 4291481558, 1516603383, 93294728, 7156446, 7435856, 41728, 3906974
			},
			.prefetch0 = 49390,
			.prefetch1 = 4563,
			.ram = mulu_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				200204976, 1034357538, 2314629410, 2821404733, 3617466503, 2365152722, 716991398, 781862443, 3371591002, 516256182, 4070233091, 2359192787, 4291481558, 1516603383, 93294728, 7156446, 7435842, 8960, 1155061180
			},
			.prefetch0 = 29699,
			.prefetch1 = 45559,
			.ram = mulu_final_ram_28,
			.ram_len = 28,
		},
		.transactions = mulu_transactions_28,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "029 MULU (A2)+, D6 ccda",
		.initial = {
			.regs = {
				3983842884, 3774847739, 1112445472, 3836701392, 578169218, 3971149485, 4150171095, 4196188184, 1475405020, 466847751, 3673405704, 126263914, 2133207130, 1607760572, 857597068, 7670382, 10610264, 40974, 5948672
			},
			.prefetch0 = 52442,
			.prefetch1 = 60439,
			.ram = mulu_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3983842884, 3774847739, 1112445472, 3836701392, 578169218, 3971149485, 767218359, 4196188184, 1475405020, 466847751, 3673405706, 126263914, 2133207130, 1607760572, 857597068, 7670382, 10610264, 40960, 5948674
			},
			.prefetch0 = 60439,
			.prefetch1 = 63947,
			.ram = mulu_final_ram_29,
			.ram_len = 8,
		},
		.transactions = mulu_transactions_29,
		.transactions_len = 3,
		.lenght = 54,
	},
	{
		.name = "030 MULU (A4)+, D7 cedc",
		.initial = {
			.regs = {
				2825615778, 253849842, 1798893802, 4159310681, 1136504034, 2966768546, 814700675, 1352867389, 2525253674, 1947638361, 572462650, 3427360474, 2673132979, 2198452781, 3136452908, 9906238, 13390500, 41477, 9121612
			},
			.prefetch0 = 52956,
			.prefetch1 = 3653,
			.ram = mulu_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2825615778, 253849842, 1798893802, 4159310681, 1136504034, 2966768546, 814700675, 1352867389, 2525253674, 1947638361, 572462650, 3427360474, 2673132981, 2198452781, 3136452908, 9906238, 13390486, 8709, 1047183820
			},
			.prefetch0 = 41361,
			.prefetch1 = 17587,
			.ram = mulu_final_ram_30,
			.ram_len = 26,
		},
		.transactions = mulu_transactions_30,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "031 MULU D2, D3 c6c2",
		.initial = {
			.regs = {
				1907588486, 3594607546, 1111116964, 2380484474, 987358850, 3546470159, 2963848712, 3434173300, 1360264844, 878697359, 491796223, 25765016, 3392845941, 1864663609, 35300654, 10218454, 8135042, 33555, 3110930
			},
			.prefetch0 = 50882,
			.prefetch1 = 33147,
			.ram = mulu_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1907588486, 3594607546, 1111116964, 399188520, 987358850, 3546470159, 2963848712, 3434173300, 1360264844, 878697359, 491796223, 25765016, 3392845941, 1864663609, 35300654, 10218454, 8135042, 33552, 3110932
			},
			.prefetch0 = 33147,
			.prefetch1 = 49747,
			.ram = mulu_final_ram_31,
			.ram_len = 6,
		},
		.transactions = mulu_transactions_31,
		.transactions_len = 2,
		.lenght = 50,
	},
};

#endif /* RBT_MULU_H */