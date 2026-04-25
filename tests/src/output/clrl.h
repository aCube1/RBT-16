#ifndef RBT_CLRL_H
#define RBT_CLRL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte clrl_initial_ram_0[] = {
		{ .addr = 0x057c30, .byte = 0x42 },
		{ .addr = 0x057c31, .byte = 0x9b },
		{ .addr = 0x057c32, .byte = 0x8b },
		{ .addr = 0x057c33, .byte = 0x39 },
		{ .addr = 0x00000c, .byte = 0x0d },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0xb0 },
		{ .addr = 0x00000f, .byte = 0xc2 },
		{ .addr = 0x46b0c2, .byte = 0x01 },
		{ .addr = 0x46b0c3, .byte = 0x12 },
		{ .addr = 0x46b0c4, .byte = 0x6d },
		{ .addr = 0x46b0c5, .byte = 0xb0 }
};

static const SST_RamByte clrl_final_ram_0[] = {
		{ .addr = 0x057c30, .byte = 0x42 },
		{ .addr = 0x057c31, .byte = 0x9b },
		{ .addr = 0x057c32, .byte = 0x8b },
		{ .addr = 0x057c33, .byte = 0x39 },
		{ .addr = 0xfe3cf8, .byte = 0x7c },
		{ .addr = 0xfe3cf9, .byte = 0x32 },
		{ .addr = 0xfe3cf4, .byte = 0x02 },
		{ .addr = 0xfe3cf5, .byte = 0x0c },
		{ .addr = 0xfe3cf6, .byte = 0x00 },
		{ .addr = 0xfe3cf7, .byte = 0x05 },
		{ .addr = 0xfe3cf2, .byte = 0x42 },
		{ .addr = 0xfe3cf3, .byte = 0x9b },
		{ .addr = 0xfe3cf0, .byte = 0xf5 },
		{ .addr = 0xfe3cf1, .byte = 0xb1 },
		{ .addr = 0xfe3cec, .byte = 0x42 },
		{ .addr = 0xfe3ced, .byte = 0x91 },
		{ .addr = 0xfe3cee, .byte = 0x83 },
		{ .addr = 0xfe3cef, .byte = 0xcb },
		{ .addr = 0x00000c, .byte = 0x0d },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0xb0 },
		{ .addr = 0x00000f, .byte = 0xc2 },
		{ .addr = 0x46b0c2, .byte = 0x01 },
		{ .addr = 0x46b0c3, .byte = 0x12 },
		{ .addr = 0x46b0c4, .byte = 0x6d },
		{ .addr = 0x46b0c5, .byte = 0xb0 }
};

static const SST_Transaction clrl_transactions_0[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13366704, .data = 35575, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16661752, .data = 31794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16661748, .data = 524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16661750, .data = 5, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16661746, .data = 17051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16661744, .data = 62897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16661740, .data = 17041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16661742, .data = 33739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 45250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4632770, .data = 274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4632772, .data = 28080, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_1[] = {
		{ .addr = 0x4ca4bc, .byte = 0x42 },
		{ .addr = 0x4ca4bd, .byte = 0x82 },
		{ .addr = 0x4ca4be, .byte = 0x41 },
		{ .addr = 0x4ca4bf, .byte = 0x1d },
		{ .addr = 0x4ca4c0, .byte = 0xaa },
		{ .addr = 0x4ca4c1, .byte = 0xb7 }
};

static const SST_RamByte clrl_final_ram_1[] = {
		{ .addr = 0x4ca4bc, .byte = 0x42 },
		{ .addr = 0x4ca4bd, .byte = 0x82 },
		{ .addr = 0x4ca4be, .byte = 0x41 },
		{ .addr = 0x4ca4bf, .byte = 0x1d },
		{ .addr = 0x4ca4c0, .byte = 0xaa },
		{ .addr = 0x4ca4c1, .byte = 0xb7 }
};

static const SST_Transaction clrl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5022912, .data = 43703, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte clrl_initial_ram_2[] = {
		{ .addr = 0x6bc62e, .byte = 0x42 },
		{ .addr = 0x6bc62f, .byte = 0x9d },
		{ .addr = 0x6bc630, .byte = 0x41 },
		{ .addr = 0x6bc631, .byte = 0x2a },
		{ .addr = 0xba0576, .byte = 0xc9 },
		{ .addr = 0xba0577, .byte = 0x25 },
		{ .addr = 0xba0578, .byte = 0x2e },
		{ .addr = 0xba0579, .byte = 0x72 },
		{ .addr = 0x6bc632, .byte = 0x0b },
		{ .addr = 0x6bc633, .byte = 0x8e }
};

static const SST_RamByte clrl_final_ram_2[] = {
		{ .addr = 0x6bc62e, .byte = 0x42 },
		{ .addr = 0x6bc62f, .byte = 0x9d },
		{ .addr = 0x6bc630, .byte = 0x41 },
		{ .addr = 0x6bc631, .byte = 0x2a },
		{ .addr = 0xba0576, .byte = 0x00 },
		{ .addr = 0xba0577, .byte = 0x00 },
		{ .addr = 0xba0578, .byte = 0x00 },
		{ .addr = 0xba0579, .byte = 0x00 },
		{ .addr = 0x6bc632, .byte = 0x0b },
		{ .addr = 0x6bc633, .byte = 0x8e }
};

static const SST_Transaction clrl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12191094, .data = 51493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12191096, .data = 11890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7063090, .data = 2958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12191096, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12191094, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_3[] = {
		{ .addr = 0x0be336, .byte = 0x42 },
		{ .addr = 0x0be337, .byte = 0xa6 },
		{ .addr = 0x0be338, .byte = 0x4d },
		{ .addr = 0x0be339, .byte = 0x0e },
		{ .addr = 0x00000c, .byte = 0x30 },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0xeb },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xa8ebac, .byte = 0x2a },
		{ .addr = 0xa8ebad, .byte = 0x23 },
		{ .addr = 0xa8ebae, .byte = 0x53 },
		{ .addr = 0xa8ebaf, .byte = 0x73 }
};

static const SST_RamByte clrl_final_ram_3[] = {
		{ .addr = 0x0be336, .byte = 0x42 },
		{ .addr = 0x0be337, .byte = 0xa6 },
		{ .addr = 0x0be338, .byte = 0x4d },
		{ .addr = 0x0be339, .byte = 0x0e },
		{ .addr = 0x9bdb20, .byte = 0xe3 },
		{ .addr = 0x9bdb21, .byte = 0x38 },
		{ .addr = 0x9bdb1c, .byte = 0xa1 },
		{ .addr = 0x9bdb1d, .byte = 0x00 },
		{ .addr = 0x9bdb1e, .byte = 0x00 },
		{ .addr = 0x9bdb1f, .byte = 0x0b },
		{ .addr = 0x9bdb1a, .byte = 0x42 },
		{ .addr = 0x9bdb1b, .byte = 0xa6 },
		{ .addr = 0x9bdb18, .byte = 0x38 },
		{ .addr = 0x9bdb19, .byte = 0x27 },
		{ .addr = 0x9bdb14, .byte = 0x42 },
		{ .addr = 0x9bdb15, .byte = 0xb5 },
		{ .addr = 0x9bdb16, .byte = 0x87 },
		{ .addr = 0x9bdb17, .byte = 0x5a },
		{ .addr = 0x00000c, .byte = 0x30 },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0xeb },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xa8ebac, .byte = 0x2a },
		{ .addr = 0xa8ebad, .byte = 0x23 },
		{ .addr = 0xa8ebae, .byte = 0x53 },
		{ .addr = 0xa8ebaf, .byte = 0x73 }
};

static const SST_Transaction clrl_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5912614, .data = 64587, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10214176, .data = 58168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10214172, .data = 41216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10214174, .data = 11, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10214170, .data = 17062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10214168, .data = 14375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10214164, .data = 17077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10214166, .data = 34650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 12456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11070380, .data = 10787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11070382, .data = 21363, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_4[] = {
		{ .addr = 0xbbe234, .byte = 0x42 },
		{ .addr = 0xbbe235, .byte = 0xaa },
		{ .addr = 0xbbe236, .byte = 0xe5 },
		{ .addr = 0xbbe237, .byte = 0xa1 },
		{ .addr = 0xbbe238, .byte = 0x8e },
		{ .addr = 0xbbe239, .byte = 0xe8 },
		{ .addr = 0x00000c, .byte = 0x6a },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x5d },
		{ .addr = 0x00000f, .byte = 0x6c },
		{ .addr = 0x465d6c, .byte = 0x45 },
		{ .addr = 0x465d6d, .byte = 0x54 },
		{ .addr = 0x465d6e, .byte = 0x18 },
		{ .addr = 0x465d6f, .byte = 0xbe }
};

static const SST_RamByte clrl_final_ram_4[] = {
		{ .addr = 0xbbe234, .byte = 0x42 },
		{ .addr = 0xbbe235, .byte = 0xaa },
		{ .addr = 0xbbe236, .byte = 0xe5 },
		{ .addr = 0xbbe237, .byte = 0xa1 },
		{ .addr = 0xbbe238, .byte = 0x8e },
		{ .addr = 0xbbe239, .byte = 0xe8 },
		{ .addr = 0xbadbb4, .byte = 0xe2 },
		{ .addr = 0xbadbb5, .byte = 0x36 },
		{ .addr = 0xbadbb0, .byte = 0x22 },
		{ .addr = 0xbadbb1, .byte = 0x1d },
		{ .addr = 0xbadbb2, .byte = 0x00 },
		{ .addr = 0xbadbb3, .byte = 0xbb },
		{ .addr = 0xbadbae, .byte = 0x42 },
		{ .addr = 0xbadbaf, .byte = 0xaa },
		{ .addr = 0xbadbac, .byte = 0x2d },
		{ .addr = 0xbadbad, .byte = 0xad },
		{ .addr = 0xbadba8, .byte = 0x42 },
		{ .addr = 0xbadba9, .byte = 0xb5 },
		{ .addr = 0xbadbaa, .byte = 0xb2 },
		{ .addr = 0xbadbab, .byte = 0xf2 },
		{ .addr = 0x00000c, .byte = 0x6a },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x5d },
		{ .addr = 0x00000f, .byte = 0x6c },
		{ .addr = 0x465d6c, .byte = 0x45 },
		{ .addr = 0x465d6d, .byte = 0x54 },
		{ .addr = 0x465d6e, .byte = 0x18 },
		{ .addr = 0x465d6f, .byte = 0xbe }
};

static const SST_Transaction clrl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12313144, .data = 36584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15871404, .data = 16307, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12245940, .data = 57910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12245936, .data = 8733, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12245938, .data = 187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12245934, .data = 17066, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12245932, .data = 11693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12245928, .data = 17077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12245930, .data = 45810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 27206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 23916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4611436, .data = 17748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4611438, .data = 6334, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_5[] = {
		{ .addr = 0xa4e030, .byte = 0x42 },
		{ .addr = 0xa4e031, .byte = 0x9c },
		{ .addr = 0xa4e032, .byte = 0x18 },
		{ .addr = 0xa4e033, .byte = 0xce },
		{ .addr = 0x00000c, .byte = 0xe6 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0xf0 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x50f034, .byte = 0xdf },
		{ .addr = 0x50f035, .byte = 0x2b },
		{ .addr = 0x50f036, .byte = 0x93 },
		{ .addr = 0x50f037, .byte = 0xf9 }
};

static const SST_RamByte clrl_final_ram_5[] = {
		{ .addr = 0xa4e030, .byte = 0x42 },
		{ .addr = 0xa4e031, .byte = 0x9c },
		{ .addr = 0xa4e032, .byte = 0x18 },
		{ .addr = 0xa4e033, .byte = 0xce },
		{ .addr = 0xcabb78, .byte = 0xe0 },
		{ .addr = 0xcabb79, .byte = 0x32 },
		{ .addr = 0xcabb74, .byte = 0x80 },
		{ .addr = 0xcabb75, .byte = 0x06 },
		{ .addr = 0xcabb76, .byte = 0x00 },
		{ .addr = 0xcabb77, .byte = 0xa4 },
		{ .addr = 0xcabb72, .byte = 0x42 },
		{ .addr = 0xcabb73, .byte = 0x9c },
		{ .addr = 0xcabb70, .byte = 0x19 },
		{ .addr = 0xcabb71, .byte = 0x17 },
		{ .addr = 0xcabb6c, .byte = 0x42 },
		{ .addr = 0xcabb6d, .byte = 0x91 },
		{ .addr = 0xcabb6e, .byte = 0x9c },
		{ .addr = 0xcabb6f, .byte = 0x43 },
		{ .addr = 0x00000c, .byte = 0xe6 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0xf0 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x50f034, .byte = 0xdf },
		{ .addr = 0x50f035, .byte = 0x2b },
		{ .addr = 0x50f036, .byte = 0x93 },
		{ .addr = 0x50f037, .byte = 0xf9 }
};

static const SST_Transaction clrl_transactions_5[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4397334, .data = 27762, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286264, .data = 57394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286260, .data = 32774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286262, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286258, .data = 17052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286256, .data = 6423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286252, .data = 17041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13286254, .data = 40003, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5304372, .data = 57131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5304374, .data = 37881, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_6[] = {
		{ .addr = 0xc0e708, .byte = 0x42 },
		{ .addr = 0xc0e709, .byte = 0x95 },
		{ .addr = 0xc0e70a, .byte = 0x0e },
		{ .addr = 0xc0e70b, .byte = 0xf3 },
		{ .addr = 0x00000c, .byte = 0x6a },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0xf4 },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x0af44c, .byte = 0x14 },
		{ .addr = 0x0af44d, .byte = 0x7c },
		{ .addr = 0x0af44e, .byte = 0x31 },
		{ .addr = 0x0af44f, .byte = 0xa3 }
};

static const SST_RamByte clrl_final_ram_6[] = {
		{ .addr = 0xc0e708, .byte = 0x42 },
		{ .addr = 0xc0e709, .byte = 0x95 },
		{ .addr = 0xc0e70a, .byte = 0x0e },
		{ .addr = 0xc0e70b, .byte = 0xf3 },
		{ .addr = 0xee76e2, .byte = 0xe7 },
		{ .addr = 0xee76e3, .byte = 0x0a },
		{ .addr = 0xee76de, .byte = 0xa0 },
		{ .addr = 0xee76df, .byte = 0x02 },
		{ .addr = 0xee76e0, .byte = 0x00 },
		{ .addr = 0xee76e1, .byte = 0xc0 },
		{ .addr = 0xee76dc, .byte = 0x42 },
		{ .addr = 0xee76dd, .byte = 0x95 },
		{ .addr = 0xee76da, .byte = 0x2d },
		{ .addr = 0xee76db, .byte = 0x97 },
		{ .addr = 0xee76d6, .byte = 0x42 },
		{ .addr = 0xee76d7, .byte = 0x95 },
		{ .addr = 0xee76d8, .byte = 0x0e },
		{ .addr = 0xee76d9, .byte = 0xb6 },
		{ .addr = 0x00000c, .byte = 0x6a },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0xf4 },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x0af44c, .byte = 0x14 },
		{ .addr = 0x0af44d, .byte = 0x7c },
		{ .addr = 0x0af44e, .byte = 0x31 },
		{ .addr = 0x0af44f, .byte = 0xa3 }
};

static const SST_Transaction clrl_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939222, .data = 49925, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15628002, .data = 59146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15627998, .data = 40962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15628000, .data = 192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15627996, .data = 17045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15627994, .data = 11671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15627990, .data = 17045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15627992, .data = 3766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 27146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 62540, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 717900, .data = 5244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 717902, .data = 12707, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_7[] = {
		{ .addr = 0x9c6686, .byte = 0x42 },
		{ .addr = 0x9c6687, .byte = 0xa2 },
		{ .addr = 0x9c6688, .byte = 0x88 },
		{ .addr = 0x9c6689, .byte = 0x02 },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x1610ac, .byte = 0x94 },
		{ .addr = 0x1610ad, .byte = 0xdb },
		{ .addr = 0x1610ae, .byte = 0x71 },
		{ .addr = 0x1610af, .byte = 0x85 }
};

static const SST_RamByte clrl_final_ram_7[] = {
		{ .addr = 0x9c6686, .byte = 0x42 },
		{ .addr = 0x9c6687, .byte = 0xa2 },
		{ .addr = 0x9c6688, .byte = 0x88 },
		{ .addr = 0x9c6689, .byte = 0x02 },
		{ .addr = 0xb55826, .byte = 0x66 },
		{ .addr = 0xb55827, .byte = 0x88 },
		{ .addr = 0xb55822, .byte = 0x85 },
		{ .addr = 0xb55823, .byte = 0x05 },
		{ .addr = 0xb55824, .byte = 0x00 },
		{ .addr = 0xb55825, .byte = 0x9c },
		{ .addr = 0xb55820, .byte = 0x42 },
		{ .addr = 0xb55821, .byte = 0xa2 },
		{ .addr = 0xb5581e, .byte = 0x7d },
		{ .addr = 0xb5581f, .byte = 0x27 },
		{ .addr = 0xb5581a, .byte = 0x42 },
		{ .addr = 0xb5581b, .byte = 0xb1 },
		{ .addr = 0xb5581c, .byte = 0x16 },
		{ .addr = 0xb5581d, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x1610ac, .byte = 0x94 },
		{ .addr = 0x1610ad, .byte = 0xdb },
		{ .addr = 0x1610ae, .byte = 0x71 },
		{ .addr = 0x1610af, .byte = 0x85 }
};

static const SST_Transaction clrl_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16612646, .data = 41933, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11884582, .data = 26248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11884578, .data = 34053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11884580, .data = 156, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11884576, .data = 17058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11884574, .data = 32039, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11884570, .data = 17073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11884572, .data = 5885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1446060, .data = 38107, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1446062, .data = 29061, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_8[] = {
		{ .addr = 0x312ea0, .byte = 0x42 },
		{ .addr = 0x312ea1, .byte = 0x82 },
		{ .addr = 0x312ea2, .byte = 0x30 },
		{ .addr = 0x312ea3, .byte = 0x11 },
		{ .addr = 0x312ea4, .byte = 0x89 },
		{ .addr = 0x312ea5, .byte = 0x09 }
};

static const SST_RamByte clrl_final_ram_8[] = {
		{ .addr = 0x312ea0, .byte = 0x42 },
		{ .addr = 0x312ea1, .byte = 0x82 },
		{ .addr = 0x312ea2, .byte = 0x30 },
		{ .addr = 0x312ea3, .byte = 0x11 },
		{ .addr = 0x312ea4, .byte = 0x89 },
		{ .addr = 0x312ea5, .byte = 0x09 }
};

static const SST_Transaction clrl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3223204, .data = 35081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte clrl_initial_ram_9[] = {
		{ .addr = 0xdf7472, .byte = 0x42 },
		{ .addr = 0xdf7473, .byte = 0xa8 },
		{ .addr = 0xdf7474, .byte = 0xf4 },
		{ .addr = 0xdf7475, .byte = 0xdb },
		{ .addr = 0xdf7476, .byte = 0x1b },
		{ .addr = 0xdf7477, .byte = 0x62 },
		{ .addr = 0x152994, .byte = 0x58 },
		{ .addr = 0x152995, .byte = 0x38 },
		{ .addr = 0x152996, .byte = 0x1c },
		{ .addr = 0x152997, .byte = 0xd4 },
		{ .addr = 0xdf7478, .byte = 0x2f },
		{ .addr = 0xdf7479, .byte = 0xb1 }
};

static const SST_RamByte clrl_final_ram_9[] = {
		{ .addr = 0xdf7472, .byte = 0x42 },
		{ .addr = 0xdf7473, .byte = 0xa8 },
		{ .addr = 0xdf7474, .byte = 0xf4 },
		{ .addr = 0xdf7475, .byte = 0xdb },
		{ .addr = 0xdf7476, .byte = 0x1b },
		{ .addr = 0xdf7477, .byte = 0x62 },
		{ .addr = 0x152994, .byte = 0x00 },
		{ .addr = 0x152995, .byte = 0x00 },
		{ .addr = 0x152996, .byte = 0x00 },
		{ .addr = 0x152997, .byte = 0x00 },
		{ .addr = 0xdf7478, .byte = 0x2f },
		{ .addr = 0xdf7479, .byte = 0xb1 }
};

static const SST_Transaction clrl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14644342, .data = 7010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1386900, .data = 22584, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1386902, .data = 7380, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14644344, .data = 12209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1386902, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1386900, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_10[] = {
		{ .addr = 0x84f59e, .byte = 0x42 },
		{ .addr = 0x84f59f, .byte = 0x9a },
		{ .addr = 0x84f5a0, .byte = 0x69 },
		{ .addr = 0x84f5a1, .byte = 0x78 },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xe8 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0x38e8e0, .byte = 0x19 },
		{ .addr = 0x38e8e1, .byte = 0xd5 },
		{ .addr = 0x38e8e2, .byte = 0x2e },
		{ .addr = 0x38e8e3, .byte = 0xb6 }
};

static const SST_RamByte clrl_final_ram_10[] = {
		{ .addr = 0x84f59e, .byte = 0x42 },
		{ .addr = 0x84f59f, .byte = 0x9a },
		{ .addr = 0x84f5a0, .byte = 0x69 },
		{ .addr = 0x84f5a1, .byte = 0x78 },
		{ .addr = 0x1c7b96, .byte = 0xf5 },
		{ .addr = 0x1c7b97, .byte = 0xa0 },
		{ .addr = 0x1c7b92, .byte = 0x05 },
		{ .addr = 0x1c7b93, .byte = 0x09 },
		{ .addr = 0x1c7b94, .byte = 0x00 },
		{ .addr = 0x1c7b95, .byte = 0x84 },
		{ .addr = 0x1c7b90, .byte = 0x42 },
		{ .addr = 0x1c7b91, .byte = 0x9a },
		{ .addr = 0x1c7b8e, .byte = 0x7b },
		{ .addr = 0x1c7b8f, .byte = 0x0b },
		{ .addr = 0x1c7b8a, .byte = 0x42 },
		{ .addr = 0x1c7b8b, .byte = 0x91 },
		{ .addr = 0x1c7b8c, .byte = 0x5e },
		{ .addr = 0x1c7b8d, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xe8 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0x38e8e0, .byte = 0x19 },
		{ .addr = 0x38e8e1, .byte = 0xd5 },
		{ .addr = 0x38e8e2, .byte = 0x2e },
		{ .addr = 0x38e8e3, .byte = 0xb6 }
};

static const SST_Transaction clrl_transactions_10[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2521866, .data = 61857, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1866646, .data = 62880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1866642, .data = 1289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1866644, .data = 132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1866640, .data = 17050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1866638, .data = 31499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1866634, .data = 17041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1866636, .data = 24102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 59616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3729632, .data = 6613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3729634, .data = 11958, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_11[] = {
		{ .addr = 0x708752, .byte = 0x42 },
		{ .addr = 0x708753, .byte = 0x9b },
		{ .addr = 0x708754, .byte = 0x72 },
		{ .addr = 0x708755, .byte = 0x59 },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0x2a },
		{ .addr = 0x00000e, .byte = 0xdc },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0x2adc7e, .byte = 0x59 },
		{ .addr = 0x2adc7f, .byte = 0x62 },
		{ .addr = 0x2adc80, .byte = 0x62 },
		{ .addr = 0x2adc81, .byte = 0x88 }
};

static const SST_RamByte clrl_final_ram_11[] = {
		{ .addr = 0x708752, .byte = 0x42 },
		{ .addr = 0x708753, .byte = 0x9b },
		{ .addr = 0x708754, .byte = 0x72 },
		{ .addr = 0x708755, .byte = 0x59 },
		{ .addr = 0x26dff0, .byte = 0x87 },
		{ .addr = 0x26dff1, .byte = 0x54 },
		{ .addr = 0x26dfec, .byte = 0x00 },
		{ .addr = 0x26dfed, .byte = 0x17 },
		{ .addr = 0x26dfee, .byte = 0x00 },
		{ .addr = 0x26dfef, .byte = 0x70 },
		{ .addr = 0x26dfea, .byte = 0x42 },
		{ .addr = 0x26dfeb, .byte = 0x9b },
		{ .addr = 0x26dfe8, .byte = 0x2b },
		{ .addr = 0x26dfe9, .byte = 0x61 },
		{ .addr = 0x26dfe4, .byte = 0x42 },
		{ .addr = 0x26dfe5, .byte = 0x91 },
		{ .addr = 0x26dfe6, .byte = 0x7f },
		{ .addr = 0x26dfe7, .byte = 0x49 },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0x2a },
		{ .addr = 0x00000e, .byte = 0xdc },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0x2adc7e, .byte = 0x59 },
		{ .addr = 0x2adc7f, .byte = 0x62 },
		{ .addr = 0x2adc80, .byte = 0x62 },
		{ .addr = 0x2adc81, .byte = 0x88 }
};

static const SST_Transaction clrl_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4795232, .data = 34074, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2547696, .data = 34644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2547692, .data = 23, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2547694, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2547690, .data = 17051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2547688, .data = 11105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2547684, .data = 17041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2547686, .data = 32585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2808958, .data = 22882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2808960, .data = 25224, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_12[] = {
		{ .addr = 0xbc6ac8, .byte = 0x42 },
		{ .addr = 0xbc6ac9, .byte = 0xa8 },
		{ .addr = 0xbc6aca, .byte = 0xd0 },
		{ .addr = 0xbc6acb, .byte = 0x87 },
		{ .addr = 0xbc6acc, .byte = 0xbe },
		{ .addr = 0xbc6acd, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x16dd8e, .byte = 0x4e },
		{ .addr = 0x16dd8f, .byte = 0xc9 },
		{ .addr = 0x16dd90, .byte = 0xaf },
		{ .addr = 0x16dd91, .byte = 0x5f }
};

static const SST_RamByte clrl_final_ram_12[] = {
		{ .addr = 0xbc6ac8, .byte = 0x42 },
		{ .addr = 0xbc6ac9, .byte = 0xa8 },
		{ .addr = 0xbc6aca, .byte = 0xd0 },
		{ .addr = 0xbc6acb, .byte = 0x87 },
		{ .addr = 0xbc6acc, .byte = 0xbe },
		{ .addr = 0xbc6acd, .byte = 0x36 },
		{ .addr = 0x6ba53c, .byte = 0x6a },
		{ .addr = 0x6ba53d, .byte = 0xca },
		{ .addr = 0x6ba538, .byte = 0xa1 },
		{ .addr = 0x6ba539, .byte = 0x0b },
		{ .addr = 0x6ba53a, .byte = 0x00 },
		{ .addr = 0x6ba53b, .byte = 0xbc },
		{ .addr = 0x6ba536, .byte = 0x42 },
		{ .addr = 0x6ba537, .byte = 0xa8 },
		{ .addr = 0x6ba534, .byte = 0xea },
		{ .addr = 0x6ba535, .byte = 0xf7 },
		{ .addr = 0x6ba530, .byte = 0x42 },
		{ .addr = 0x6ba531, .byte = 0xb5 },
		{ .addr = 0x6ba532, .byte = 0xf9 },
		{ .addr = 0x6ba533, .byte = 0x6a },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x16dd8e, .byte = 0x4e },
		{ .addr = 0x16dd8f, .byte = 0xc9 },
		{ .addr = 0x16dd90, .byte = 0xaf },
		{ .addr = 0x16dd91, .byte = 0x5f }
};

static const SST_Transaction clrl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12348108, .data = 48694, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7006966, .data = 37829, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7054652, .data = 27338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7054648, .data = 41227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7054650, .data = 188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7054646, .data = 17064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7054644, .data = 60151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7054640, .data = 17077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7054642, .data = 63850, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1498510, .data = 20169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1498512, .data = 44895, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_13[] = {
		{ .addr = 0x84445a, .byte = 0x42 },
		{ .addr = 0x84445b, .byte = 0x9c },
		{ .addr = 0x84445c, .byte = 0x35 },
		{ .addr = 0x84445d, .byte = 0x2f },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x77 },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xf477bc, .byte = 0xf4 },
		{ .addr = 0xf477bd, .byte = 0xd3 },
		{ .addr = 0xf477be, .byte = 0xee },
		{ .addr = 0xf477bf, .byte = 0xd3 }
};

static const SST_RamByte clrl_final_ram_13[] = {
		{ .addr = 0x84445a, .byte = 0x42 },
		{ .addr = 0x84445b, .byte = 0x9c },
		{ .addr = 0x84445c, .byte = 0x35 },
		{ .addr = 0x84445d, .byte = 0x2f },
		{ .addr = 0xa51bf0, .byte = 0x44 },
		{ .addr = 0xa51bf1, .byte = 0x5c },
		{ .addr = 0xa51bec, .byte = 0x24 },
		{ .addr = 0xa51bed, .byte = 0x06 },
		{ .addr = 0xa51bee, .byte = 0x00 },
		{ .addr = 0xa51bef, .byte = 0x84 },
		{ .addr = 0xa51bea, .byte = 0x42 },
		{ .addr = 0xa51beb, .byte = 0x9c },
		{ .addr = 0xa51be8, .byte = 0x79 },
		{ .addr = 0xa51be9, .byte = 0xf3 },
		{ .addr = 0xa51be4, .byte = 0x42 },
		{ .addr = 0xa51be5, .byte = 0x95 },
		{ .addr = 0xa51be6, .byte = 0xf5 },
		{ .addr = 0xa51be7, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x77 },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xf477bc, .byte = 0xf4 },
		{ .addr = 0xf477bd, .byte = 0xd3 },
		{ .addr = 0xf477be, .byte = 0xee },
		{ .addr = 0xf477bf, .byte = 0xd3 }
};

static const SST_Transaction clrl_transactions_13[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4356594, .data = 11937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10820592, .data = 17500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10820588, .data = 9222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10820590, .data = 132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10820586, .data = 17052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10820584, .data = 31219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10820580, .data = 17045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10820582, .data = 62786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16021436, .data = 62675, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16021438, .data = 61139, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_14[] = {
		{ .addr = 0x0da88c, .byte = 0x42 },
		{ .addr = 0x0da88d, .byte = 0x9d },
		{ .addr = 0x0da88e, .byte = 0x2f },
		{ .addr = 0x0da88f, .byte = 0xa7 },
		{ .addr = 0xe3b5f6, .byte = 0xa5 },
		{ .addr = 0xe3b5f7, .byte = 0x5f },
		{ .addr = 0xe3b5f8, .byte = 0x0a },
		{ .addr = 0xe3b5f9, .byte = 0x05 },
		{ .addr = 0x0da890, .byte = 0xf4 },
		{ .addr = 0x0da891, .byte = 0x31 }
};

static const SST_RamByte clrl_final_ram_14[] = {
		{ .addr = 0x0da88c, .byte = 0x42 },
		{ .addr = 0x0da88d, .byte = 0x9d },
		{ .addr = 0x0da88e, .byte = 0x2f },
		{ .addr = 0x0da88f, .byte = 0xa7 },
		{ .addr = 0xe3b5f6, .byte = 0x00 },
		{ .addr = 0xe3b5f7, .byte = 0x00 },
		{ .addr = 0xe3b5f8, .byte = 0x00 },
		{ .addr = 0xe3b5f9, .byte = 0x00 },
		{ .addr = 0x0da890, .byte = 0xf4 },
		{ .addr = 0x0da891, .byte = 0x31 }
};

static const SST_Transaction clrl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14923254, .data = 42335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14923256, .data = 2565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 895120, .data = 62513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14923256, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14923254, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_15[] = {
		{ .addr = 0x8d80bc, .byte = 0x42 },
		{ .addr = 0x8d80bd, .byte = 0x9d },
		{ .addr = 0x8d80be, .byte = 0x7b },
		{ .addr = 0x8d80bf, .byte = 0x9a },
		{ .addr = 0x00000c, .byte = 0x7e },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0x48cd0c, .byte = 0x73 },
		{ .addr = 0x48cd0d, .byte = 0xe4 },
		{ .addr = 0x48cd0e, .byte = 0xa9 },
		{ .addr = 0x48cd0f, .byte = 0xa8 }
};

static const SST_RamByte clrl_final_ram_15[] = {
		{ .addr = 0x8d80bc, .byte = 0x42 },
		{ .addr = 0x8d80bd, .byte = 0x9d },
		{ .addr = 0x8d80be, .byte = 0x7b },
		{ .addr = 0x8d80bf, .byte = 0x9a },
		{ .addr = 0x0581c2, .byte = 0x80 },
		{ .addr = 0x0581c3, .byte = 0xbe },
		{ .addr = 0x0581be, .byte = 0x26 },
		{ .addr = 0x0581bf, .byte = 0x0d },
		{ .addr = 0x0581c0, .byte = 0x00 },
		{ .addr = 0x0581c1, .byte = 0x8d },
		{ .addr = 0x0581bc, .byte = 0x42 },
		{ .addr = 0x0581bd, .byte = 0x9d },
		{ .addr = 0x0581ba, .byte = 0xcb },
		{ .addr = 0x0581bb, .byte = 0x9d },
		{ .addr = 0x0581b6, .byte = 0x42 },
		{ .addr = 0x0581b7, .byte = 0x95 },
		{ .addr = 0x0581b8, .byte = 0x0b },
		{ .addr = 0x0581b9, .byte = 0xb0 },
		{ .addr = 0x00000c, .byte = 0x7e },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0x48cd0c, .byte = 0x73 },
		{ .addr = 0x48cd0d, .byte = 0xe4 },
		{ .addr = 0x48cd0e, .byte = 0xa9 },
		{ .addr = 0x48cd0f, .byte = 0xa8 }
};

static const SST_Transaction clrl_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11586460, .data = 58264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 360898, .data = 32958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 360894, .data = 9741, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 360896, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 360892, .data = 17053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 360890, .data = 52125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 360886, .data = 17045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 360888, .data = 2992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32328, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4771084, .data = 29668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4771086, .data = 43432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_16[] = {
		{ .addr = 0x319dd2, .byte = 0x42 },
		{ .addr = 0x319dd3, .byte = 0x9f },
		{ .addr = 0x319dd4, .byte = 0xcb },
		{ .addr = 0x319dd5, .byte = 0x79 },
		{ .addr = 0xe677aa, .byte = 0x7c },
		{ .addr = 0xe677ab, .byte = 0xa6 },
		{ .addr = 0xe677ac, .byte = 0x96 },
		{ .addr = 0xe677ad, .byte = 0xed },
		{ .addr = 0x319dd6, .byte = 0x0d },
		{ .addr = 0x319dd7, .byte = 0xe1 }
};

static const SST_RamByte clrl_final_ram_16[] = {
		{ .addr = 0x319dd2, .byte = 0x42 },
		{ .addr = 0x319dd3, .byte = 0x9f },
		{ .addr = 0x319dd4, .byte = 0xcb },
		{ .addr = 0x319dd5, .byte = 0x79 },
		{ .addr = 0xe677aa, .byte = 0x00 },
		{ .addr = 0xe677ab, .byte = 0x00 },
		{ .addr = 0xe677ac, .byte = 0x00 },
		{ .addr = 0xe677ad, .byte = 0x00 },
		{ .addr = 0x319dd6, .byte = 0x0d },
		{ .addr = 0x319dd7, .byte = 0xe1 }
};

static const SST_Transaction clrl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15103914, .data = 31910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15103916, .data = 38637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3251670, .data = 3553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15103916, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15103914, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_17[] = {
		{ .addr = 0xdade06, .byte = 0x42 },
		{ .addr = 0xdade07, .byte = 0x86 },
		{ .addr = 0xdade08, .byte = 0x23 },
		{ .addr = 0xdade09, .byte = 0x29 },
		{ .addr = 0xdade0a, .byte = 0xc6 },
		{ .addr = 0xdade0b, .byte = 0x23 }
};

static const SST_RamByte clrl_final_ram_17[] = {
		{ .addr = 0xdade06, .byte = 0x42 },
		{ .addr = 0xdade07, .byte = 0x86 },
		{ .addr = 0xdade08, .byte = 0x23 },
		{ .addr = 0xdade09, .byte = 0x29 },
		{ .addr = 0xdade0a, .byte = 0xc6 },
		{ .addr = 0xdade0b, .byte = 0x23 }
};

static const SST_Transaction clrl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14343690, .data = 50723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte clrl_initial_ram_18[] = {
		{ .addr = 0xcc22c6, .byte = 0x42 },
		{ .addr = 0xcc22c7, .byte = 0xa5 },
		{ .addr = 0xcc22c8, .byte = 0xa1 },
		{ .addr = 0xcc22c9, .byte = 0xa1 },
		{ .addr = 0x00000c, .byte = 0x89 },
		{ .addr = 0x00000d, .byte = 0x0c },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x3c },
		{ .addr = 0x0cc53c, .byte = 0x53 },
		{ .addr = 0x0cc53d, .byte = 0xc5 },
		{ .addr = 0x0cc53e, .byte = 0xee },
		{ .addr = 0x0cc53f, .byte = 0x06 }
};

static const SST_RamByte clrl_final_ram_18[] = {
		{ .addr = 0xcc22c6, .byte = 0x42 },
		{ .addr = 0xcc22c7, .byte = 0xa5 },
		{ .addr = 0xcc22c8, .byte = 0xa1 },
		{ .addr = 0xcc22c9, .byte = 0xa1 },
		{ .addr = 0x791448, .byte = 0x22 },
		{ .addr = 0x791449, .byte = 0xc8 },
		{ .addr = 0x791444, .byte = 0x86 },
		{ .addr = 0x791445, .byte = 0x0c },
		{ .addr = 0x791446, .byte = 0x00 },
		{ .addr = 0x791447, .byte = 0xcc },
		{ .addr = 0x791442, .byte = 0x42 },
		{ .addr = 0x791443, .byte = 0xa5 },
		{ .addr = 0x791440, .byte = 0xa7 },
		{ .addr = 0x791441, .byte = 0x71 },
		{ .addr = 0x79143c, .byte = 0x42 },
		{ .addr = 0x79143d, .byte = 0xb1 },
		{ .addr = 0x79143e, .byte = 0xd0 },
		{ .addr = 0x79143f, .byte = 0x70 },
		{ .addr = 0x00000c, .byte = 0x89 },
		{ .addr = 0x00000d, .byte = 0x0c },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x3c },
		{ .addr = 0x0cc53c, .byte = 0x53 },
		{ .addr = 0x0cc53d, .byte = 0xc5 },
		{ .addr = 0x0cc53e, .byte = 0xee },
		{ .addr = 0x0cc53f, .byte = 0x06 }
};

static const SST_Transaction clrl_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7382896, .data = 38085, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7935048, .data = 8904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7935044, .data = 34316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7935046, .data = 204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7935042, .data = 17061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7935040, .data = 42865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7935036, .data = 17073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7935038, .data = 53360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 836924, .data = 21445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 836926, .data = 60934, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_19[] = {
		{ .addr = 0x4561c8, .byte = 0x42 },
		{ .addr = 0x4561c9, .byte = 0xb1 },
		{ .addr = 0x4561ca, .byte = 0x47 },
		{ .addr = 0x4561cb, .byte = 0xac },
		{ .addr = 0x4561cc, .byte = 0x69 },
		{ .addr = 0x4561cd, .byte = 0xb6 },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xcc },
		{ .addr = 0x00000f, .byte = 0xb2 },
		{ .addr = 0x7accb2, .byte = 0xaa },
		{ .addr = 0x7accb3, .byte = 0x0e },
		{ .addr = 0x7accb4, .byte = 0x90 },
		{ .addr = 0x7accb5, .byte = 0xd5 }
};

static const SST_RamByte clrl_final_ram_19[] = {
		{ .addr = 0x4561c8, .byte = 0x42 },
		{ .addr = 0x4561c9, .byte = 0xb1 },
		{ .addr = 0x4561ca, .byte = 0x47 },
		{ .addr = 0x4561cb, .byte = 0xac },
		{ .addr = 0x4561cc, .byte = 0x69 },
		{ .addr = 0x4561cd, .byte = 0xb6 },
		{ .addr = 0x81fbea, .byte = 0x61 },
		{ .addr = 0x81fbeb, .byte = 0xca },
		{ .addr = 0x81fbe6, .byte = 0x22 },
		{ .addr = 0x81fbe7, .byte = 0x17 },
		{ .addr = 0x81fbe8, .byte = 0x00 },
		{ .addr = 0x81fbe9, .byte = 0x45 },
		{ .addr = 0x81fbe4, .byte = 0x42 },
		{ .addr = 0x81fbe5, .byte = 0xb1 },
		{ .addr = 0x81fbe2, .byte = 0x42 },
		{ .addr = 0x81fbe3, .byte = 0x7b },
		{ .addr = 0x81fbde, .byte = 0x42 },
		{ .addr = 0x81fbdf, .byte = 0xb5 },
		{ .addr = 0x81fbe0, .byte = 0xfe },
		{ .addr = 0x81fbe1, .byte = 0x63 },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xcc },
		{ .addr = 0x00000f, .byte = 0xb2 },
		{ .addr = 0x7accb2, .byte = 0xaa },
		{ .addr = 0x7accb3, .byte = 0x0e },
		{ .addr = 0x7accb4, .byte = 0x90 },
		{ .addr = 0x7accb5, .byte = 0xd5 }
};

static const SST_Transaction clrl_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4547020, .data = 27062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6505082, .data = 36137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8518634, .data = 25034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8518630, .data = 8727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8518632, .data = 69, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8518628, .data = 17073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8518626, .data = 17019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8518622, .data = 17077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8518624, .data = 65123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13690, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8047794, .data = 43534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8047796, .data = 37077, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_20[] = {
		{ .addr = 0x6881f4, .byte = 0x42 },
		{ .addr = 0x6881f5, .byte = 0x9e },
		{ .addr = 0x6881f6, .byte = 0xb8 },
		{ .addr = 0x6881f7, .byte = 0x80 },
		{ .addr = 0x09a46c, .byte = 0x12 },
		{ .addr = 0x09a46d, .byte = 0xbe },
		{ .addr = 0x09a46e, .byte = 0xb0 },
		{ .addr = 0x09a46f, .byte = 0xb4 },
		{ .addr = 0x6881f8, .byte = 0x56 },
		{ .addr = 0x6881f9, .byte = 0x87 }
};

static const SST_RamByte clrl_final_ram_20[] = {
		{ .addr = 0x6881f4, .byte = 0x42 },
		{ .addr = 0x6881f5, .byte = 0x9e },
		{ .addr = 0x6881f6, .byte = 0xb8 },
		{ .addr = 0x6881f7, .byte = 0x80 },
		{ .addr = 0x09a46c, .byte = 0x00 },
		{ .addr = 0x09a46d, .byte = 0x00 },
		{ .addr = 0x09a46e, .byte = 0x00 },
		{ .addr = 0x09a46f, .byte = 0x00 },
		{ .addr = 0x6881f8, .byte = 0x56 },
		{ .addr = 0x6881f9, .byte = 0x87 }
};

static const SST_Transaction clrl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 631916, .data = 4798, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 631918, .data = 45236, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6849016, .data = 22151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 631918, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 631916, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_21[] = {
		{ .addr = 0xbe4b04, .byte = 0x42 },
		{ .addr = 0xbe4b05, .byte = 0xa9 },
		{ .addr = 0xbe4b06, .byte = 0x58 },
		{ .addr = 0xbe4b07, .byte = 0x71 },
		{ .addr = 0xbe4b08, .byte = 0x65 },
		{ .addr = 0xbe4b09, .byte = 0x3c },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0xc3 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0x60c35c, .byte = 0x60 },
		{ .addr = 0x60c35d, .byte = 0xd1 },
		{ .addr = 0x60c35e, .byte = 0xa3 },
		{ .addr = 0x60c35f, .byte = 0xf4 }
};

static const SST_RamByte clrl_final_ram_21[] = {
		{ .addr = 0xbe4b04, .byte = 0x42 },
		{ .addr = 0xbe4b05, .byte = 0xa9 },
		{ .addr = 0xbe4b06, .byte = 0x58 },
		{ .addr = 0xbe4b07, .byte = 0x71 },
		{ .addr = 0xbe4b08, .byte = 0x65 },
		{ .addr = 0xbe4b09, .byte = 0x3c },
		{ .addr = 0x151f50, .byte = 0x4b },
		{ .addr = 0x151f51, .byte = 0x06 },
		{ .addr = 0x151f4c, .byte = 0x02 },
		{ .addr = 0x151f4d, .byte = 0x09 },
		{ .addr = 0x151f4e, .byte = 0x00 },
		{ .addr = 0x151f4f, .byte = 0xbe },
		{ .addr = 0x151f4a, .byte = 0x42 },
		{ .addr = 0x151f4b, .byte = 0xa9 },
		{ .addr = 0x151f48, .byte = 0x99 },
		{ .addr = 0x151f49, .byte = 0x2f },
		{ .addr = 0x151f44, .byte = 0x42 },
		{ .addr = 0x151f45, .byte = 0xb1 },
		{ .addr = 0x151f46, .byte = 0xa1 },
		{ .addr = 0x151f47, .byte = 0xc2 },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0xc3 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0x60c35c, .byte = 0x60 },
		{ .addr = 0x60c35d, .byte = 0xd1 },
		{ .addr = 0x60c35e, .byte = 0xa3 },
		{ .addr = 0x60c35f, .byte = 0xf4 }
};

static const SST_Transaction clrl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12471048, .data = 25916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12753198, .data = 3997, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1384272, .data = 19206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1384268, .data = 521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1384270, .data = 190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1384266, .data = 17065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1384264, .data = 39215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1384260, .data = 17073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1384262, .data = 41410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6341468, .data = 24785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6341470, .data = 41972, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_22[] = {
		{ .addr = 0xf966a8, .byte = 0x42 },
		{ .addr = 0xf966a9, .byte = 0x90 },
		{ .addr = 0xf966aa, .byte = 0x75 },
		{ .addr = 0xf966ab, .byte = 0x32 },
		{ .addr = 0x5334d0, .byte = 0x96 },
		{ .addr = 0x5334d1, .byte = 0x21 },
		{ .addr = 0x5334d2, .byte = 0x64 },
		{ .addr = 0x5334d3, .byte = 0x5c },
		{ .addr = 0xf966ac, .byte = 0x65 },
		{ .addr = 0xf966ad, .byte = 0xfd }
};

static const SST_RamByte clrl_final_ram_22[] = {
		{ .addr = 0xf966a8, .byte = 0x42 },
		{ .addr = 0xf966a9, .byte = 0x90 },
		{ .addr = 0xf966aa, .byte = 0x75 },
		{ .addr = 0xf966ab, .byte = 0x32 },
		{ .addr = 0x5334d0, .byte = 0x00 },
		{ .addr = 0x5334d1, .byte = 0x00 },
		{ .addr = 0x5334d2, .byte = 0x00 },
		{ .addr = 0x5334d3, .byte = 0x00 },
		{ .addr = 0xf966ac, .byte = 0x65 },
		{ .addr = 0xf966ad, .byte = 0xfd }
};

static const SST_Transaction clrl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5453008, .data = 38433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5453010, .data = 25692, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16344748, .data = 26109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5453010, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5453008, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_23[] = {
		{ .addr = 0x4e501a, .byte = 0x42 },
		{ .addr = 0x4e501b, .byte = 0xa8 },
		{ .addr = 0x4e501c, .byte = 0xa8 },
		{ .addr = 0x4e501d, .byte = 0x0f },
		{ .addr = 0x4e501e, .byte = 0x78 },
		{ .addr = 0x4e501f, .byte = 0xbd },
		{ .addr = 0x4789ba, .byte = 0x8a },
		{ .addr = 0x4789bb, .byte = 0x17 },
		{ .addr = 0x4789bc, .byte = 0xa7 },
		{ .addr = 0x4789bd, .byte = 0xdf },
		{ .addr = 0x4e5020, .byte = 0x0d },
		{ .addr = 0x4e5021, .byte = 0x4e }
};

static const SST_RamByte clrl_final_ram_23[] = {
		{ .addr = 0x4e501a, .byte = 0x42 },
		{ .addr = 0x4e501b, .byte = 0xa8 },
		{ .addr = 0x4e501c, .byte = 0xa8 },
		{ .addr = 0x4e501d, .byte = 0x0f },
		{ .addr = 0x4e501e, .byte = 0x78 },
		{ .addr = 0x4e501f, .byte = 0xbd },
		{ .addr = 0x4789ba, .byte = 0x00 },
		{ .addr = 0x4789bb, .byte = 0x00 },
		{ .addr = 0x4789bc, .byte = 0x00 },
		{ .addr = 0x4789bd, .byte = 0x00 },
		{ .addr = 0x4e5020, .byte = 0x0d },
		{ .addr = 0x4e5021, .byte = 0x4e }
};

static const SST_Transaction clrl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5132318, .data = 30909, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688314, .data = 35351, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688316, .data = 42975, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5132320, .data = 3406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688316, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688314, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_24[] = {
		{ .addr = 0x398d3a, .byte = 0x42 },
		{ .addr = 0x398d3b, .byte = 0xb8 },
		{ .addr = 0x398d3c, .byte = 0x38 },
		{ .addr = 0x398d3d, .byte = 0x1f },
		{ .addr = 0x398d3e, .byte = 0x58 },
		{ .addr = 0x398d3f, .byte = 0x9a },
		{ .addr = 0x00000c, .byte = 0x55 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x8e },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xba8ea2, .byte = 0xe2 },
		{ .addr = 0xba8ea3, .byte = 0x2d },
		{ .addr = 0xba8ea4, .byte = 0xf3 },
		{ .addr = 0xba8ea5, .byte = 0xba }
};

static const SST_RamByte clrl_final_ram_24[] = {
		{ .addr = 0x398d3a, .byte = 0x42 },
		{ .addr = 0x398d3b, .byte = 0xb8 },
		{ .addr = 0x398d3c, .byte = 0x38 },
		{ .addr = 0x398d3d, .byte = 0x1f },
		{ .addr = 0x398d3e, .byte = 0x58 },
		{ .addr = 0x398d3f, .byte = 0x9a },
		{ .addr = 0xf3c302, .byte = 0x8d },
		{ .addr = 0xf3c303, .byte = 0x3e },
		{ .addr = 0xf3c2fe, .byte = 0xa1 },
		{ .addr = 0xf3c2ff, .byte = 0x14 },
		{ .addr = 0xf3c300, .byte = 0x00 },
		{ .addr = 0xf3c301, .byte = 0x39 },
		{ .addr = 0xf3c2fc, .byte = 0x42 },
		{ .addr = 0xf3c2fd, .byte = 0xb8 },
		{ .addr = 0xf3c2fa, .byte = 0x38 },
		{ .addr = 0xf3c2fb, .byte = 0x1f },
		{ .addr = 0xf3c2f6, .byte = 0x42 },
		{ .addr = 0xf3c2f7, .byte = 0xb5 },
		{ .addr = 0xf3c2f8, .byte = 0x00 },
		{ .addr = 0xf3c2f9, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0x55 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x8e },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xba8ea2, .byte = 0xe2 },
		{ .addr = 0xba8ea3, .byte = 0x2d },
		{ .addr = 0xba8ea4, .byte = 0xf3 },
		{ .addr = 0xba8ea5, .byte = 0xba }
};

static const SST_Transaction clrl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3771710, .data = 22682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14366, .data = 42659, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15975170, .data = 36158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15975166, .data = 41236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15975168, .data = 57, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15975164, .data = 17080, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15975162, .data = 14367, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15975158, .data = 17077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15975160, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12226210, .data = 57901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12226212, .data = 62394, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_25[] = {
		{ .addr = 0x505be6, .byte = 0x42 },
		{ .addr = 0x505be7, .byte = 0x94 },
		{ .addr = 0x505be8, .byte = 0x28 },
		{ .addr = 0x505be9, .byte = 0x66 },
		{ .addr = 0x413eaa, .byte = 0x70 },
		{ .addr = 0x413eab, .byte = 0xf4 },
		{ .addr = 0x413eac, .byte = 0x02 },
		{ .addr = 0x413ead, .byte = 0x10 },
		{ .addr = 0x505bea, .byte = 0x2e },
		{ .addr = 0x505beb, .byte = 0x51 }
};

static const SST_RamByte clrl_final_ram_25[] = {
		{ .addr = 0x505be6, .byte = 0x42 },
		{ .addr = 0x505be7, .byte = 0x94 },
		{ .addr = 0x505be8, .byte = 0x28 },
		{ .addr = 0x505be9, .byte = 0x66 },
		{ .addr = 0x413eaa, .byte = 0x00 },
		{ .addr = 0x413eab, .byte = 0x00 },
		{ .addr = 0x413eac, .byte = 0x00 },
		{ .addr = 0x413ead, .byte = 0x00 },
		{ .addr = 0x505bea, .byte = 0x2e },
		{ .addr = 0x505beb, .byte = 0x51 }
};

static const SST_Transaction clrl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4275882, .data = 28916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4275884, .data = 528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5266410, .data = 11857, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4275884, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4275882, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_26[] = {
		{ .addr = 0x3d963c, .byte = 0x42 },
		{ .addr = 0x3d963d, .byte = 0x94 },
		{ .addr = 0x3d963e, .byte = 0x04 },
		{ .addr = 0x3d963f, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0x29 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0xad },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x66ad42, .byte = 0xaf },
		{ .addr = 0x66ad43, .byte = 0xe9 },
		{ .addr = 0x66ad44, .byte = 0xec },
		{ .addr = 0x66ad45, .byte = 0xa7 }
};

static const SST_RamByte clrl_final_ram_26[] = {
		{ .addr = 0x3d963c, .byte = 0x42 },
		{ .addr = 0x3d963d, .byte = 0x94 },
		{ .addr = 0x3d963e, .byte = 0x04 },
		{ .addr = 0x3d963f, .byte = 0x5f },
		{ .addr = 0x111eb4, .byte = 0x96 },
		{ .addr = 0x111eb5, .byte = 0x3e },
		{ .addr = 0x111eb0, .byte = 0x22 },
		{ .addr = 0x111eb1, .byte = 0x13 },
		{ .addr = 0x111eb2, .byte = 0x00 },
		{ .addr = 0x111eb3, .byte = 0x3d },
		{ .addr = 0x111eae, .byte = 0x42 },
		{ .addr = 0x111eaf, .byte = 0x94 },
		{ .addr = 0x111eac, .byte = 0x80 },
		{ .addr = 0x111ead, .byte = 0x85 },
		{ .addr = 0x111ea8, .byte = 0x42 },
		{ .addr = 0x111ea9, .byte = 0x95 },
		{ .addr = 0x111eaa, .byte = 0xce },
		{ .addr = 0x111eab, .byte = 0x80 },
		{ .addr = 0x00000c, .byte = 0x29 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0xad },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x66ad42, .byte = 0xaf },
		{ .addr = 0x66ad43, .byte = 0xe9 },
		{ .addr = 0x66ad44, .byte = 0xec },
		{ .addr = 0x66ad45, .byte = 0xa7 }
};

static const SST_Transaction clrl_transactions_26[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8421508, .data = 28177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1121972, .data = 38462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1121968, .data = 8723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1121970, .data = 61, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1121966, .data = 17044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1121964, .data = 32901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1121960, .data = 17045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1121962, .data = 52864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 10598, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6729026, .data = 45033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6729028, .data = 60583, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_27[] = {
		{ .addr = 0x1e1baa, .byte = 0x42 },
		{ .addr = 0x1e1bab, .byte = 0x97 },
		{ .addr = 0x1e1bac, .byte = 0x75 },
		{ .addr = 0x1e1bad, .byte = 0x58 },
		{ .addr = 0x35e412, .byte = 0xda },
		{ .addr = 0x35e413, .byte = 0x8b },
		{ .addr = 0x35e414, .byte = 0x17 },
		{ .addr = 0x35e415, .byte = 0x27 },
		{ .addr = 0x1e1bae, .byte = 0x70 },
		{ .addr = 0x1e1baf, .byte = 0x9e }
};

static const SST_RamByte clrl_final_ram_27[] = {
		{ .addr = 0x1e1baa, .byte = 0x42 },
		{ .addr = 0x1e1bab, .byte = 0x97 },
		{ .addr = 0x1e1bac, .byte = 0x75 },
		{ .addr = 0x1e1bad, .byte = 0x58 },
		{ .addr = 0x35e412, .byte = 0x00 },
		{ .addr = 0x35e413, .byte = 0x00 },
		{ .addr = 0x35e414, .byte = 0x00 },
		{ .addr = 0x35e415, .byte = 0x00 },
		{ .addr = 0x1e1bae, .byte = 0x70 },
		{ .addr = 0x1e1baf, .byte = 0x9e }
};

static const SST_Transaction clrl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3531794, .data = 55947, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3531796, .data = 5927, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1973166, .data = 28830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3531796, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3531794, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_28[] = {
		{ .addr = 0x3d5734, .byte = 0x42 },
		{ .addr = 0x3d5735, .byte = 0x9d },
		{ .addr = 0x3d5736, .byte = 0x27 },
		{ .addr = 0x3d5737, .byte = 0xc2 },
		{ .addr = 0x00000c, .byte = 0xd8 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x2c7882, .byte = 0xab },
		{ .addr = 0x2c7883, .byte = 0x35 },
		{ .addr = 0x2c7884, .byte = 0x08 },
		{ .addr = 0x2c7885, .byte = 0x10 }
};

static const SST_RamByte clrl_final_ram_28[] = {
		{ .addr = 0x3d5734, .byte = 0x42 },
		{ .addr = 0x3d5735, .byte = 0x9d },
		{ .addr = 0x3d5736, .byte = 0x27 },
		{ .addr = 0x3d5737, .byte = 0xc2 },
		{ .addr = 0x3c3cb6, .byte = 0x57 },
		{ .addr = 0x3c3cb7, .byte = 0x36 },
		{ .addr = 0x3c3cb2, .byte = 0x07 },
		{ .addr = 0x3c3cb3, .byte = 0x0c },
		{ .addr = 0x3c3cb4, .byte = 0x00 },
		{ .addr = 0x3c3cb5, .byte = 0x3d },
		{ .addr = 0x3c3cb0, .byte = 0x42 },
		{ .addr = 0x3c3cb1, .byte = 0x9d },
		{ .addr = 0x3c3cae, .byte = 0x99 },
		{ .addr = 0x3c3caf, .byte = 0xc9 },
		{ .addr = 0x3c3caa, .byte = 0x42 },
		{ .addr = 0x3c3cab, .byte = 0x91 },
		{ .addr = 0x3c3cac, .byte = 0x5e },
		{ .addr = 0x3c3cad, .byte = 0x8e },
		{ .addr = 0x00000c, .byte = 0xd8 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x2c7882, .byte = 0xab },
		{ .addr = 0x2c7883, .byte = 0x35 },
		{ .addr = 0x2c7884, .byte = 0x08 },
		{ .addr = 0x2c7885, .byte = 0x10 }
};

static const SST_Transaction clrl_transactions_28[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9345480, .data = 53754, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3947702, .data = 22326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3947698, .data = 1804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3947700, .data = 61, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3947696, .data = 17053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3947694, .data = 39369, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3947690, .data = 17041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3947692, .data = 24206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 55340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30850, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2914434, .data = 43829, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2914436, .data = 2064, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_29[] = {
		{ .addr = 0xdcc06a, .byte = 0x42 },
		{ .addr = 0xdcc06b, .byte = 0x9c },
		{ .addr = 0xdcc06c, .byte = 0x9f },
		{ .addr = 0xdcc06d, .byte = 0xf9 },
		{ .addr = 0xe8c9f2, .byte = 0x6c },
		{ .addr = 0xe8c9f3, .byte = 0x20 },
		{ .addr = 0xe8c9f4, .byte = 0x7f },
		{ .addr = 0xe8c9f5, .byte = 0x44 },
		{ .addr = 0xdcc06e, .byte = 0x56 },
		{ .addr = 0xdcc06f, .byte = 0x74 }
};

static const SST_RamByte clrl_final_ram_29[] = {
		{ .addr = 0xdcc06a, .byte = 0x42 },
		{ .addr = 0xdcc06b, .byte = 0x9c },
		{ .addr = 0xdcc06c, .byte = 0x9f },
		{ .addr = 0xdcc06d, .byte = 0xf9 },
		{ .addr = 0xe8c9f2, .byte = 0x00 },
		{ .addr = 0xe8c9f3, .byte = 0x00 },
		{ .addr = 0xe8c9f4, .byte = 0x00 },
		{ .addr = 0xe8c9f5, .byte = 0x00 },
		{ .addr = 0xdcc06e, .byte = 0x56 },
		{ .addr = 0xdcc06f, .byte = 0x74 }
};

static const SST_Transaction clrl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15256050, .data = 27680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15256052, .data = 32580, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14467182, .data = 22132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15256052, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15256050, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_30[] = {
		{ .addr = 0x44086a, .byte = 0x42 },
		{ .addr = 0x44086b, .byte = 0xa5 },
		{ .addr = 0x44086c, .byte = 0x4c },
		{ .addr = 0x44086d, .byte = 0x28 },
		{ .addr = 0x27c95a, .byte = 0xd4 },
		{ .addr = 0x27c95b, .byte = 0x78 },
		{ .addr = 0x27c95c, .byte = 0x8b },
		{ .addr = 0x27c95d, .byte = 0x38 },
		{ .addr = 0x44086e, .byte = 0x77 },
		{ .addr = 0x44086f, .byte = 0x04 }
};

static const SST_RamByte clrl_final_ram_30[] = {
		{ .addr = 0x44086a, .byte = 0x42 },
		{ .addr = 0x44086b, .byte = 0xa5 },
		{ .addr = 0x44086c, .byte = 0x4c },
		{ .addr = 0x44086d, .byte = 0x28 },
		{ .addr = 0x27c95a, .byte = 0x00 },
		{ .addr = 0x27c95b, .byte = 0x00 },
		{ .addr = 0x27c95c, .byte = 0x00 },
		{ .addr = 0x27c95d, .byte = 0x00 },
		{ .addr = 0x44086e, .byte = 0x77 },
		{ .addr = 0x44086f, .byte = 0x04 }
};

static const SST_Transaction clrl_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2607450, .data = 54392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2607452, .data = 35640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4458606, .data = 30468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2607452, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2607450, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrl_initial_ram_31[] = {
		{ .addr = 0x9c82ba, .byte = 0x42 },
		{ .addr = 0x9c82bb, .byte = 0xaf },
		{ .addr = 0x9c82bc, .byte = 0xcd },
		{ .addr = 0x9c82bd, .byte = 0x94 },
		{ .addr = 0x9c82be, .byte = 0x33 },
		{ .addr = 0x9c82bf, .byte = 0x35 },
		{ .addr = 0x2c0ac6, .byte = 0x2e },
		{ .addr = 0x2c0ac7, .byte = 0xb0 },
		{ .addr = 0x2c0ac8, .byte = 0x6c },
		{ .addr = 0x2c0ac9, .byte = 0xb2 },
		{ .addr = 0x9c82c0, .byte = 0xd0 },
		{ .addr = 0x9c82c1, .byte = 0x54 }
};

static const SST_RamByte clrl_final_ram_31[] = {
		{ .addr = 0x9c82ba, .byte = 0x42 },
		{ .addr = 0x9c82bb, .byte = 0xaf },
		{ .addr = 0x9c82bc, .byte = 0xcd },
		{ .addr = 0x9c82bd, .byte = 0x94 },
		{ .addr = 0x9c82be, .byte = 0x33 },
		{ .addr = 0x9c82bf, .byte = 0x35 },
		{ .addr = 0x2c0ac6, .byte = 0x00 },
		{ .addr = 0x2c0ac7, .byte = 0x00 },
		{ .addr = 0x2c0ac8, .byte = 0x00 },
		{ .addr = 0x2c0ac9, .byte = 0x00 },
		{ .addr = 0x9c82c0, .byte = 0xd0 },
		{ .addr = 0x9c82c1, .byte = 0x54 }
};

static const SST_Transaction clrl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10257086, .data = 13109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2886342, .data = 11952, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2886344, .data = 27826, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10257088, .data = 53332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2886344, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2886342, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase clrl[] = {
	{
		.name = "000 CLR.l (A3)+ 429b",
		.initial = {
			.regs = {
				2422470949, 2352751603, 3310642392, 2557582276, 380119850, 920096879, 3616229318, 1779579187, 2692427444, 1322854950, 1696773387, 2211182001, 787681578, 2580602796, 847691825, 1864286, 16661754, 524, 359476
			},
			.prefetch0 = 17051,
			.prefetch1 = 35641,
			.ram = clrl_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2422470949, 2352751603, 3310642392, 2557582276, 380119850, 920096879, 3616229318, 1779579187, 2692427444, 1322854950, 1696773387, 2211182001, 787681578, 2580602796, 847691825, 1864286, 16661740, 8716, 222736582
			},
			.prefetch0 = 274,
			.prefetch1 = 28080,
			.ram = clrl_final_ram_0,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_0,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "001 CLR.l D2 4282",
		.initial = {
			.regs = {
				2070980528, 2119110802, 2915390355, 3852744895, 3057843053, 2776989706, 1763716137, 1990550091, 3251286565, 2678251737, 19375115, 1282441041, 2419367266, 1639534866, 1284481535, 9793316, 4526218, 33026, 5022912
			},
			.prefetch0 = 17026,
			.prefetch1 = 16669,
			.ram = clrl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2070980528, 2119110802, 0, 3852744895, 3057843053, 2776989706, 1763716137, 1990550091, 3251286565, 2678251737, 19375115, 1282441041, 2419367266, 1639534866, 1284481535, 9793316, 4526218, 33028, 5022914
			},
			.prefetch0 = 16669,
			.prefetch1 = 43703,
			.ram = clrl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = clrl_transactions_1,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "002 CLR.l (A5)+ 429d",
		.initial = {
			.regs = {
				804597584, 1788051880, 2963960993, 656075005, 536076659, 2261859915, 192108174, 2218826858, 2485189463, 1803536911, 407104902, 644112076, 1067550650, 817497462, 3087054940, 13428026, 7028086, 42780, 7063090
			},
			.prefetch0 = 17053,
			.prefetch1 = 16682,
			.ram = clrl_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				804597584, 1788051880, 2963960993, 656075005, 536076659, 2261859915, 192108174, 2218826858, 2485189463, 1803536911, 407104902, 644112076, 1067550650, 817497466, 3087054940, 13428026, 7028086, 42772, 7063092
			},
			.prefetch0 = 16682,
			.prefetch1 = 2958,
			.ram = clrl_final_ram_2,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_2,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "003 CLR.l -(A6) 42a6",
		.initial = {
			.regs = {
				4024370022, 2982244624, 839097628, 3171383089, 3929310325, 1073291624, 2983569059, 1965015240, 464191928, 4117706250, 3125321220, 2448659896, 2046108317, 133529852, 2270836779, 12948566, 10214178, 41216, 779066
			},
			.prefetch0 = 17062,
			.prefetch1 = 19726,
			.ram = clrl_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4024370022, 2982244624, 839097628, 3171383089, 3929310325, 1073291624, 2983569059, 1965015240, 464191928, 4117706250, 3125321220, 2448659896, 2046108317, 133529852, 2270836775, 12948566, 10214164, 8448, 816376752
			},
			.prefetch0 = 10787,
			.prefetch1 = 21363,
			.ram = clrl_final_ram_3,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 CLR.l (d16, A2) 42aa",
		.initial = {
			.regs = {
				480548610, 3555887210, 160726315, 1746685098, 159775684, 3295282662, 4268531315, 4028624962, 339490875, 1818689168, 3002222604, 1523324707, 451523735, 2567342531, 2221149806, 16141098, 12245942, 8733, 12313144
			},
			.prefetch0 = 17066,
			.prefetch1 = 58785,
			.ram = clrl_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				480548610, 3555887210, 160726315, 1746685098, 159775684, 3295282662, 4268531315, 4028624962, 339490875, 1818689168, 3002222604, 1523324707, 451523735, 2567342531, 2221149806, 16141098, 12245928, 8733, 1782996336
			},
			.prefetch0 = 17748,
			.prefetch1 = 6334,
			.ram = clrl_final_ram_4,
			.ram_len = 28,
		},
		.transactions = clrl_transactions_4,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "005 CLR.l (A4)+ 429c",
		.initial = {
			.regs = {
				669651249, 1174585354, 927933304, 1764003372, 1228153902, 242105619, 360774380, 1418781170, 1014213271, 15144752, 320710960, 4006261503, 2621643031, 2641324326, 924671830, 1551316, 13286266, 32774, 10805300
			},
			.prefetch0 = 17052,
			.prefetch1 = 6350,
			.ram = clrl_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				669651249, 1174585354, 927933304, 1764003372, 1228153902, 242105619, 360774380, 1418781170, 1014213271, 15144752, 320710960, 4006261503, 2621643031, 2641324326, 924671830, 1551316, 13286252, 8198, 3864064056
			},
			.prefetch0 = 57131,
			.prefetch1 = 37881,
			.ram = clrl_final_ram_5,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_5,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "006 CLR.l (A5) 4295",
		.initial = {
			.regs = {
				3610228670, 1155071515, 4159690663, 2053816866, 1743264623, 3520006705, 337408952, 882358754, 1894542337, 854465254, 3574464014, 3218924561, 1977592576, 246820247, 2564836833, 6894444, 15628004, 40962, 12642060
			},
			.prefetch0 = 17045,
			.prefetch1 = 3827,
			.ram = clrl_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3610228670, 1155071515, 4159690663, 2053816866, 1743264623, 3520006705, 337408952, 882358754, 1894542337, 854465254, 3574464014, 3218924561, 1977592576, 246820247, 2564836833, 6894444, 15627990, 8194, 1779102800
			},
			.prefetch0 = 5244,
			.prefetch1 = 12707,
			.ram = clrl_final_ram_6,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 CLR.l -(A2) 42a2",
		.initial = {
			.regs = {
				1059278421, 1644195012, 2906183701, 2119913961, 3711732381, 1501262927, 2662545180, 1797590535, 1520817919, 1601649460, 385711403, 3889301407, 1462434991, 94713654, 2210989718, 8751914, 11884584, 34053, 10249866
			},
			.prefetch0 = 17058,
			.prefetch1 = 34818,
			.ram = clrl_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1059278421, 1644195012, 2906183701, 2119913961, 3711732381, 1501262927, 2662545180, 1797590535, 1520817919, 1601649460, 385711399, 3889301407, 1462434991, 94713654, 2210989718, 8751914, 11884570, 9477, 2484474032
			},
			.prefetch0 = 38107,
			.prefetch1 = 29061,
			.ram = clrl_final_ram_7,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_7,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "008 CLR.l D2 4282",
		.initial = {
			.regs = {
				2079141230, 3079199995, 4075901442, 2984616076, 3247724322, 4058839671, 3857637396, 1849182786, 2437353072, 3747345903, 212595647, 2524811303, 888598052, 644968757, 2055046931, 16213078, 10636516, 6, 3223204
			},
			.prefetch0 = 17026,
			.prefetch1 = 12305,
			.ram = clrl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2079141230, 3079199995, 0, 2984616076, 3247724322, 4058839671, 3857637396, 1849182786, 2437353072, 3747345903, 212595647, 2524811303, 888598052, 644968757, 2055046931, 16213078, 10636516, 4, 3223206
			},
			.prefetch0 = 12305,
			.prefetch1 = 35081,
			.ram = clrl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = clrl_transactions_8,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "009 CLR.l (d16, A0) 42a8",
		.initial = {
			.regs = {
				3314774704, 3927780018, 1403781043, 3208628988, 1567030285, 3458853423, 3554742497, 3083698764, 1645556921, 2697062408, 3581749596, 3820324789, 1581846965, 4184702529, 3932754021, 1772776, 12535862, 32773, 14644342
			},
			.prefetch0 = 17064,
			.prefetch1 = 62683,
			.ram = clrl_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3314774704, 3927780018, 1403781043, 3208628988, 1567030285, 3458853423, 3554742497, 3083698764, 1645556921, 2697062408, 3581749596, 3820324789, 1581846965, 4184702529, 3932754021, 1772776, 12535862, 32772, 14644346
			},
			.prefetch0 = 7010,
			.prefetch1 = 12209,
			.ram = clrl_final_ram_9,
			.ram_len = 12,
		},
		.transactions = clrl_transactions_9,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "010 CLR.l (A2)+ 429a",
		.initial = {
			.regs = {
				3706052893, 333023584, 1682194867, 467404714, 2791290103, 451631705, 2821236187, 1283805857, 781743842, 3947239583, 1579580171, 3224795129, 1837060889, 42754077, 2090385367, 13557576, 1866648, 1289, 8713634
			},
			.prefetch0 = 17050,
			.prefetch1 = 27000,
			.ram = clrl_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3706052893, 333023584, 1682194867, 467404714, 2791290103, 451631705, 2821236187, 1283805857, 781743842, 3947239583, 1579580171, 3224795129, 1837060889, 42754077, 2090385367, 13557576, 1866634, 9481, 188279012
			},
			.prefetch0 = 6613,
			.prefetch1 = 11958,
			.ram = clrl_final_ram_10,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_10,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "011 CLR.l (A3)+ 429b",
		.initial = {
			.regs = {
				2984997938, 1801065949, 122497277, 164490794, 2790189027, 125872291, 1800393452, 1006091304, 1923717732, 3746029464, 4231093102, 2135501665, 4167166982, 2755782517, 3076928387, 2432712, 2547698, 23, 7374678
			},
			.prefetch0 = 17051,
			.prefetch1 = 29273,
			.ram = clrl_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2984997938, 1801065949, 122497277, 164490794, 2790189027, 125872291, 1800393452, 1006091304, 1923717732, 3746029464, 4231093102, 2135501665, 4167166982, 2755782517, 3076928387, 2432712, 2547684, 8215, 3022707842
			},
			.prefetch0 = 22882,
			.prefetch1 = 25224,
			.ram = clrl_final_ram_11,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 CLR.l (d16, A0) 42a8",
		.initial = {
			.regs = {
				2530565858, 3173325970, 3939936856, 2070559037, 3611621183, 3867820002, 832361353, 1801478084, 4184545904, 2899755950, 1624983189, 727958416, 253920014, 976153987, 3211526126, 10265568, 7054654, 41227, 12348108
			},
			.prefetch0 = 17064,
			.prefetch1 = 53383,
			.ram = clrl_initial_ram_12,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2530565858, 3173325970, 3939936856, 2070559037, 3611621183, 3867820002, 832361353, 1801478084, 4184545904, 2899755950, 1624983189, 727958416, 253920014, 976153987, 3211526126, 10265568, 7054640, 8459, 538369426
			},
			.prefetch0 = 20169,
			.prefetch1 = 44895,
			.ram = clrl_final_ram_12,
			.ram_len = 28,
		},
		.transactions = clrl_transactions_12,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "013 CLR.l (A4)+ 429c",
		.initial = {
			.regs = {
				2958892020, 2001551462, 1987489077, 1592823987, 3998972523, 2910613435, 1071463383, 1490913757, 3572763029, 950513293, 4003762744, 1504796584, 4114774515, 2660179349, 4253239286, 7398272, 10820594, 9222, 8668254
			},
			.prefetch0 = 17052,
			.prefetch1 = 13615,
			.ram = clrl_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2958892020, 2001551462, 1987489077, 1592823987, 3998972523, 2910613435, 1071463383, 1490913757, 3572763029, 950513293, 4003762744, 1504796584, 4114774515, 2660179349, 4253239286, 7398272, 10820580, 9222, 1609856960
			},
			.prefetch0 = 62675,
			.prefetch1 = 61139,
			.ram = clrl_final_ram_13,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_13,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "014 CLR.l (A5)+ 429d",
		.initial = {
			.regs = {
				1982622510, 235115243, 4226279256, 2766018101, 1802413617, 1241188201, 1089398803, 2503383807, 54152515, 457335167, 2565120287, 3879573711, 2658931108, 618903030, 1455104100, 8478118, 8599024, 8472, 895120
			},
			.prefetch0 = 17053,
			.prefetch1 = 12199,
			.ram = clrl_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1982622510, 235115243, 4226279256, 2766018101, 1802413617, 1241188201, 1089398803, 2503383807, 54152515, 457335167, 2565120287, 3879573711, 2658931108, 618903034, 1455104100, 8478118, 8599024, 8468, 895122
			},
			.prefetch0 = 12199,
			.prefetch1 = 62513,
			.ram = clrl_final_ram_14,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_14,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "015 CLR.l (A5)+ 429d",
		.initial = {
			.regs = {
				2016453106, 297295399, 3256570819, 4003229732, 3164783262, 4235501757, 1544574309, 2446492694, 3906621246, 858078583, 3314267459, 2014621556, 1200570923, 196135837, 1793775314, 9170622, 360900, 9741, 9273536
			},
			.prefetch0 = 17053,
			.prefetch1 = 31642,
			.ram = clrl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2016453106, 297295399, 3256570819, 4003229732, 3164783262, 4235501757, 1544574309, 2446492694, 3906621246, 858078583, 3314267459, 2014621556, 1200570923, 196135837, 1793775314, 9170622, 360886, 9741, 2118700304
			},
			.prefetch0 = 29668,
			.prefetch1 = 43432,
			.ram = clrl_final_ram_15,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "016 CLR.l (A7)+ 429f",
		.initial = {
			.regs = {
				2130944978, 1811079896, 2338573419, 1913650633, 1323909627, 1958232457, 1902115039, 1937948560, 3095507782, 4045195123, 3236135997, 1867468134, 2741506068, 1096514600, 3269828940, 13722392, 15103914, 40972, 3251670
			},
			.prefetch0 = 17055,
			.prefetch1 = 52089,
			.ram = clrl_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2130944978, 1811079896, 2338573419, 1913650633, 1323909627, 1958232457, 1902115039, 1937948560, 3095507782, 4045195123, 3236135997, 1867468134, 2741506068, 1096514600, 3269828940, 13722392, 15103918, 40964, 3251672
			},
			.prefetch0 = 52089,
			.prefetch1 = 3553,
			.ram = clrl_final_ram_16,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_16,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "017 CLR.l D6 4286",
		.initial = {
			.regs = {
				241025284, 1057724204, 3534673482, 2640281731, 3292727964, 2164901037, 3905285132, 3296293128, 3664488769, 2653627472, 1427026190, 4116330158, 1810810068, 3696344481, 398760018, 10189110, 14893950, 9739, 14343690
			},
			.prefetch0 = 17030,
			.prefetch1 = 9001,
			.ram = clrl_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				241025284, 1057724204, 3534673482, 2640281731, 3292727964, 2164901037, 0, 3296293128, 3664488769, 2653627472, 1427026190, 4116330158, 1810810068, 3696344481, 398760018, 10189110, 14893950, 9732, 14343692
			},
			.prefetch0 = 9001,
			.prefetch1 = 50723,
			.ram = clrl_final_ram_17,
			.ram_len = 6,
		},
		.transactions = clrl_transactions_17,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "018 CLR.l -(A5) 42a5",
		.initial = {
			.regs = {
				1509968735, 2441146574, 1169682026, 800158268, 2019342510, 147678429, 2654608188, 2287270610, 604284993, 778280352, 1626224138, 4109417877, 119120954, 3497043829, 794642141, 6693706, 7935050, 34316, 13378250
			},
			.prefetch0 = 17061,
			.prefetch1 = 41377,
			.ram = clrl_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1509968735, 2441146574, 1169682026, 800158268, 2019342510, 147678429, 2654608188, 2287270610, 604284993, 778280352, 1626224138, 4109417877, 119120954, 3497043825, 794642141, 6693706, 7935036, 9740, 2299315520
			},
			.prefetch0 = 21445,
			.prefetch1 = 60934,
			.ram = clrl_final_ram_18,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_18,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "019 CLR.l (d8, A1, Xn) 42b1",
		.initial = {
			.regs = {
				2132555772, 3884740824, 3470146522, 4135434140, 2782364621, 1812235148, 188188903, 3345787271, 1179706360, 4267949826, 92715594, 359630558, 2106631573, 654573019, 2731650476, 12974262, 8518636, 8727, 4547020
			},
			.prefetch0 = 17073,
			.prefetch1 = 18348,
			.ram = clrl_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2132555772, 3884740824, 3470146522, 4135434140, 2782364621, 1812235148, 188188903, 3345787271, 1179706360, 4267949826, 92715594, 359630558, 2106631573, 654573019, 2731650476, 12974262, 8518622, 8727, 897240246
			},
			.prefetch0 = 43534,
			.prefetch1 = 37077,
			.ram = clrl_final_ram_19,
			.ram_len = 28,
		},
		.transactions = clrl_transactions_19,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "020 CLR.l (A6)+ 429e",
		.initial = {
			.regs = {
				141208611, 3493410187, 1380325119, 2895213860, 1138734623, 1772305053, 691543769, 1407937989, 145887869, 3935128174, 1710614084, 238911032, 2458222247, 478278047, 3305743468, 3834478, 1257340, 771, 6849016
			},
			.prefetch0 = 17054,
			.prefetch1 = 47232,
			.ram = clrl_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				141208611, 3493410187, 1380325119, 2895213860, 1138734623, 1772305053, 691543769, 1407937989, 145887869, 3935128174, 1710614084, 238911032, 2458222247, 478278047, 3305743472, 3834478, 1257340, 772, 6849018
			},
			.prefetch0 = 47232,
			.prefetch1 = 22151,
			.ram = clrl_final_ram_20,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_20,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "021 CLR.l (d16, A1) 42a9",
		.initial = {
			.regs = {
				156882078, 3981120922, 3865634749, 515980276, 458111212, 3103320281, 1917290789, 1109420970, 3817935160, 2713862334, 3230625600, 671332427, 2339744548, 2843134304, 1502404845, 8564570, 1384274, 521, 12471048
			},
			.prefetch0 = 17065,
			.prefetch1 = 22641,
			.ram = clrl_initial_ram_21,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				156882078, 3981120922, 3865634749, 515980276, 458111212, 3103320281, 1917290789, 1109420970, 3817935160, 2713862334, 3230625600, 671332427, 2339744548, 2843134304, 1502404845, 8564570, 1384260, 8713, 2774582112
			},
			.prefetch0 = 24785,
			.prefetch1 = 41972,
			.ram = clrl_final_ram_21,
			.ram_len = 28,
		},
		.transactions = clrl_transactions_21,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "022 CLR.l (A0) 4290",
		.initial = {
			.regs = {
				1921911057, 4202789312, 3834901104, 135859351, 4280023439, 1781059116, 2327293130, 1921312759, 1867723984, 3523740422, 4287933017, 731845053, 3850896169, 2593947672, 2563596603, 3835708, 1990138, 8461, 16344748
			},
			.prefetch0 = 17040,
			.prefetch1 = 30002,
			.ram = clrl_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1921911057, 4202789312, 3834901104, 135859351, 4280023439, 1781059116, 2327293130, 1921312759, 1867723984, 3523740422, 4287933017, 731845053, 3850896169, 2593947672, 2563596603, 3835708, 1990138, 8452, 16344750
			},
			.prefetch0 = 30002,
			.prefetch1 = 26109,
			.ram = clrl_final_ram_22,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_22,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "023 CLR.l (d16, A0) 42a8",
		.initial = {
			.regs = {
				1375335931, 1358095564, 244027756, 3960639865, 2756461085, 2475782967, 1852440293, 767795783, 3813138859, 1764777329, 1811919681, 1722494032, 1817039076, 3850995535, 1113075120, 15205436, 6667214, 8727, 5132318
			},
			.prefetch0 = 17064,
			.prefetch1 = 43023,
			.ram = clrl_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1375335931, 1358095564, 244027756, 3960639865, 2756461085, 2475782967, 1852440293, 767795783, 3813138859, 1764777329, 1811919681, 1722494032, 1817039076, 3850995535, 1113075120, 15205436, 6667214, 8724, 5132322
			},
			.prefetch0 = 30909,
			.prefetch1 = 3406,
			.ram = clrl_final_ram_23,
			.ram_len = 12,
		},
		.transactions = clrl_transactions_23,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "024 CLR.l (xxx).w 42b8",
		.initial = {
			.regs = {
				1801254589, 2433068425, 570990863, 2619587016, 43771719, 960752866, 3062824617, 2533418895, 3556233732, 772185517, 4283852167, 3312445147, 780265906, 2167083396, 4002722799, 2946340, 15975172, 41236, 3771710
			},
			.prefetch0 = 17080,
			.prefetch1 = 14367,
			.ram = clrl_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1801254589, 2433068425, 570990863, 2619587016, 43771719, 960752866, 3062824617, 2533418895, 3556233732, 772185517, 4283852167, 3312445147, 780265906, 2167083396, 4002722799, 2946340, 15975158, 8468, 1438289574
			},
			.prefetch0 = 57901,
			.prefetch1 = 62394,
			.ram = clrl_final_ram_24,
			.ram_len = 28,
		},
		.transactions = clrl_transactions_24,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "025 CLR.l (A4) 4294",
		.initial = {
			.regs = {
				2807850724, 4284118859, 3927133852, 859694797, 1458536644, 3590594942, 828009060, 2511642555, 1439849331, 3631697062, 143755169, 2632166849, 3275833002, 1676638892, 1993734718, 11980208, 7841892, 41499, 5266410
			},
			.prefetch0 = 17044,
			.prefetch1 = 10342,
			.ram = clrl_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2807850724, 4284118859, 3927133852, 859694797, 1458536644, 3590594942, 828009060, 2511642555, 1439849331, 3631697062, 143755169, 2632166849, 3275833002, 1676638892, 1993734718, 11980208, 7841892, 41492, 5266412
			},
			.prefetch0 = 10342,
			.prefetch1 = 11857,
			.ram = clrl_final_ram_25,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_25,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "026 CLR.l (A4) 4294",
		.initial = {
			.regs = {
				2286676152, 1406654430, 3007442528, 4202639641, 3266857196, 2286108823, 1766381033, 1862799647, 143501717, 1723817580, 844326320, 3220720815, 3464528005, 2742305238, 3139020776, 4106798, 1121974, 8723, 4036160
			},
			.prefetch0 = 17044,
			.prefetch1 = 1119,
			.ram = clrl_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2286676152, 1406654430, 3007442528, 4202639641, 3266857196, 2286108823, 1766381033, 1862799647, 143501717, 1723817580, 844326320, 3220720815, 3464528005, 2742305238, 3139020776, 4106798, 1121960, 8723, 694594886
			},
			.prefetch0 = 45033,
			.prefetch1 = 60583,
			.ram = clrl_final_ram_26,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_26,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "027 CLR.l (A7) 4297",
		.initial = {
			.regs = {
				2396820212, 1972984256, 1758407354, 766472309, 4265916276, 847723225, 3393910436, 3836968103, 2921920351, 2919768255, 2425070346, 780568093, 3915006600, 3941254464, 202008548, 3531794, 11288180, 34052, 1973166
			},
			.prefetch0 = 17047,
			.prefetch1 = 30040,
			.ram = clrl_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2396820212, 1972984256, 1758407354, 766472309, 4265916276, 847723225, 3393910436, 3836968103, 2921920351, 2919768255, 2425070346, 780568093, 3915006600, 3941254464, 202008548, 3531794, 11288180, 34052, 1973168
			},
			.prefetch0 = 30040,
			.prefetch1 = 28830,
			.ram = clrl_final_ram_27,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_27,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "028 CLR.l (A5)+ 429d",
		.initial = {
			.regs = {
				517192510, 3402406956, 133480198, 3443965858, 3161642608, 1124466284, 3559498015, 2856450212, 849245460, 2286140403, 1825993409, 3751547341, 3836313889, 1586403785, 1916640708, 1691310, 3947704, 1804, 4020024
			},
			.prefetch0 = 17053,
			.prefetch1 = 10178,
			.ram = clrl_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				517192510, 3402406956, 133480198, 3443965858, 3161642608, 1124466284, 3559498015, 2856450212, 849245460, 2286140403, 1825993409, 3751547341, 3836313889, 1586403785, 1916640708, 1691310, 3947690, 9996, 3626793094
			},
			.prefetch0 = 43829,
			.prefetch1 = 2064,
			.ram = clrl_final_ram_28,
			.ram_len = 26,
		},
		.transactions = clrl_transactions_28,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "029 CLR.l (A4)+ 429c",
		.initial = {
			.regs = {
				2350816090, 1519348559, 81915170, 3863995373, 1455125884, 791081212, 2284495598, 2018148773, 1538971086, 1255969123, 1379363627, 3282988745, 82364914, 3041133959, 3071819540, 963256, 9644304, 1281, 14467182
			},
			.prefetch0 = 17052,
			.prefetch1 = 40953,
			.ram = clrl_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2350816090, 1519348559, 81915170, 3863995373, 1455125884, 791081212, 2284495598, 2018148773, 1538971086, 1255969123, 1379363627, 3282988745, 82364918, 3041133959, 3071819540, 963256, 9644304, 1284, 14467184
			},
			.prefetch0 = 40953,
			.prefetch1 = 22132,
			.ram = clrl_final_ram_29,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_29,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "030 CLR.l -(A5) 42a5",
		.initial = {
			.regs = {
				1367704271, 662572439, 956491440, 964013484, 4053918973, 721713650, 860495787, 1862820813, 2540768379, 2835357839, 4175219683, 2532211194, 1706882662, 4113025374, 1257919688, 7924532, 9862790, 8723, 4458606
			},
			.prefetch0 = 17061,
			.prefetch1 = 19496,
			.ram = clrl_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1367704271, 662572439, 956491440, 964013484, 4053918973, 721713650, 860495787, 1862820813, 2540768379, 2835357839, 4175219683, 2532211194, 1706882662, 4113025370, 1257919688, 7924532, 9862790, 8724, 4458608
			},
			.prefetch0 = 19496,
			.prefetch1 = 30468,
			.ram = clrl_final_ram_30,
			.ram_len = 10,
		},
		.transactions = clrl_transactions_30,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "031 CLR.l (d16, A7) 42af",
		.initial = {
			.regs = {
				3917741339, 2634299297, 337113771, 1868540673, 1116880355, 3380539058, 3830409317, 1666628088, 3606528677, 4249542442, 2931918460, 3690247132, 2357049561, 780592942, 3398496425, 2899250, 7214618, 32774, 10257086
			},
			.prefetch0 = 17071,
			.prefetch1 = 52628,
			.ram = clrl_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3917741339, 2634299297, 337113771, 1868540673, 1116880355, 3380539058, 3830409317, 1666628088, 3606528677, 4249542442, 2931918460, 3690247132, 2357049561, 780592942, 3398496425, 2899250, 7214618, 32772, 10257090
			},
			.prefetch0 = 13109,
			.prefetch1 = 53332,
			.ram = clrl_final_ram_31,
			.ram_len = 12,
		},
		.transactions = clrl_transactions_31,
		.transactions_len = 6,
		.lenght = 24,
	},
};

#endif /* RBT_CLRL_H */