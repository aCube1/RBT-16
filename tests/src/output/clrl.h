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

const uint32_t CLRL_TEST_COUNT = 16;
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
};

#endif /* RBT_CLRL_H */