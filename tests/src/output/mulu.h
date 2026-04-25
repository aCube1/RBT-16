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

const uint32_t MULU_TEST_COUNT = 16;
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
};

#endif /* RBT_MULU_H */