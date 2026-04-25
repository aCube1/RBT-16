#ifndef RBT_CLRB_H
#define RBT_CLRB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte clrb_initial_ram_0[] = {
		{ .addr = 0xf67a02, .byte = 0x42 },
		{ .addr = 0xf67a03, .byte = 0x14 },
		{ .addr = 0xf67a04, .byte = 0x41 },
		{ .addr = 0xf67a05, .byte = 0x1c },
		{ .addr = 0xfcb02e, .byte = 0xb3 },
		{ .addr = 0xfcb02f, .byte = 0x73 },
		{ .addr = 0xf67a06, .byte = 0xec },
		{ .addr = 0xf67a07, .byte = 0xcf }
};

static const SST_RamByte clrb_final_ram_0[] = {
		{ .addr = 0xf67a02, .byte = 0x42 },
		{ .addr = 0xf67a03, .byte = 0x14 },
		{ .addr = 0xf67a04, .byte = 0x41 },
		{ .addr = 0xf67a05, .byte = 0x1c },
		{ .addr = 0xfcb02e, .byte = 0xb3 },
		{ .addr = 0xfcb02f, .byte = 0x00 },
		{ .addr = 0xf67a06, .byte = 0xec },
		{ .addr = 0xf67a07, .byte = 0xcf }
};

static const SST_Transaction clrb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16560174, .data = 115, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16153094, .data = 60623, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16560174, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_1[] = {
		{ .addr = 0xcd17c4, .byte = 0x42 },
		{ .addr = 0xcd17c5, .byte = 0x32 },
		{ .addr = 0xcd17c6, .byte = 0xa7 },
		{ .addr = 0xcd17c7, .byte = 0x3a },
		{ .addr = 0xcd17c8, .byte = 0xbc },
		{ .addr = 0xcd17c9, .byte = 0x7b },
		{ .addr = 0x2622f8, .byte = 0x34 },
		{ .addr = 0x2622f9, .byte = 0xef },
		{ .addr = 0xcd17ca, .byte = 0x0f },
		{ .addr = 0xcd17cb, .byte = 0x0f }
};

static const SST_RamByte clrb_final_ram_1[] = {
		{ .addr = 0xcd17c4, .byte = 0x42 },
		{ .addr = 0xcd17c5, .byte = 0x32 },
		{ .addr = 0xcd17c6, .byte = 0xa7 },
		{ .addr = 0xcd17c7, .byte = 0x3a },
		{ .addr = 0xcd17c8, .byte = 0xbc },
		{ .addr = 0xcd17c9, .byte = 0x7b },
		{ .addr = 0x2622f8, .byte = 0x00 },
		{ .addr = 0x2622f9, .byte = 0xef },
		{ .addr = 0xcd17ca, .byte = 0x0f },
		{ .addr = 0xcd17cb, .byte = 0x0f }
};

static const SST_Transaction clrb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13440968, .data = 48251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2499320, .data = 13312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13440970, .data = 3855, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2499320, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_2[] = {
		{ .addr = 0x8b3222, .byte = 0x42 },
		{ .addr = 0x8b3223, .byte = 0x36 },
		{ .addr = 0x8b3224, .byte = 0xcd },
		{ .addr = 0x8b3225, .byte = 0x66 },
		{ .addr = 0x8b3226, .byte = 0xcf },
		{ .addr = 0x8b3227, .byte = 0x66 },
		{ .addr = 0x3e3474, .byte = 0x30 },
		{ .addr = 0x3e3475, .byte = 0x59 },
		{ .addr = 0x8b3228, .byte = 0xfe },
		{ .addr = 0x8b3229, .byte = 0x39 }
};

static const SST_RamByte clrb_final_ram_2[] = {
		{ .addr = 0x8b3222, .byte = 0x42 },
		{ .addr = 0x8b3223, .byte = 0x36 },
		{ .addr = 0x8b3224, .byte = 0xcd },
		{ .addr = 0x8b3225, .byte = 0x66 },
		{ .addr = 0x8b3226, .byte = 0xcf },
		{ .addr = 0x8b3227, .byte = 0x66 },
		{ .addr = 0x3e3474, .byte = 0x30 },
		{ .addr = 0x3e3475, .byte = 0x00 },
		{ .addr = 0x8b3228, .byte = 0xfe },
		{ .addr = 0x8b3229, .byte = 0x39 }
};

static const SST_Transaction clrb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9122342, .data = 53094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4076660, .data = 89, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9122344, .data = 65081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4076660, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_3[] = {
		{ .addr = 0xf2d866, .byte = 0x42 },
		{ .addr = 0xf2d867, .byte = 0x1f },
		{ .addr = 0xf2d868, .byte = 0xdf },
		{ .addr = 0xf2d869, .byte = 0xb6 },
		{ .addr = 0x797fc8, .byte = 0x7e },
		{ .addr = 0x797fc9, .byte = 0x74 },
		{ .addr = 0xf2d86a, .byte = 0x54 },
		{ .addr = 0xf2d86b, .byte = 0x4d }
};

static const SST_RamByte clrb_final_ram_3[] = {
		{ .addr = 0xf2d866, .byte = 0x42 },
		{ .addr = 0xf2d867, .byte = 0x1f },
		{ .addr = 0xf2d868, .byte = 0xdf },
		{ .addr = 0xf2d869, .byte = 0xb6 },
		{ .addr = 0x797fc8, .byte = 0x00 },
		{ .addr = 0x797fc9, .byte = 0x74 },
		{ .addr = 0xf2d86a, .byte = 0x54 },
		{ .addr = 0xf2d86b, .byte = 0x4d }
};

static const SST_Transaction clrb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7962568, .data = 32256, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15915114, .data = 21581, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7962568, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_4[] = {
		{ .addr = 0x1437dc, .byte = 0x42 },
		{ .addr = 0x1437dd, .byte = 0x05 },
		{ .addr = 0x1437de, .byte = 0xf1 },
		{ .addr = 0x1437df, .byte = 0x17 },
		{ .addr = 0x1437e0, .byte = 0xaa },
		{ .addr = 0x1437e1, .byte = 0xa0 }
};

static const SST_RamByte clrb_final_ram_4[] = {
		{ .addr = 0x1437dc, .byte = 0x42 },
		{ .addr = 0x1437dd, .byte = 0x05 },
		{ .addr = 0x1437de, .byte = 0xf1 },
		{ .addr = 0x1437df, .byte = 0x17 },
		{ .addr = 0x1437e0, .byte = 0xaa },
		{ .addr = 0x1437e1, .byte = 0xa0 }
};

static const SST_Transaction clrb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1325024, .data = 43680, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_5[] = {
		{ .addr = 0x83cec0, .byte = 0x42 },
		{ .addr = 0x83cec1, .byte = 0x13 },
		{ .addr = 0x83cec2, .byte = 0xd0 },
		{ .addr = 0x83cec3, .byte = 0x00 },
		{ .addr = 0x4d518c, .byte = 0xca },
		{ .addr = 0x4d518d, .byte = 0x41 },
		{ .addr = 0x83cec4, .byte = 0x80 },
		{ .addr = 0x83cec5, .byte = 0xcc }
};

static const SST_RamByte clrb_final_ram_5[] = {
		{ .addr = 0x83cec0, .byte = 0x42 },
		{ .addr = 0x83cec1, .byte = 0x13 },
		{ .addr = 0x83cec2, .byte = 0xd0 },
		{ .addr = 0x83cec3, .byte = 0x00 },
		{ .addr = 0x4d518c, .byte = 0xca },
		{ .addr = 0x4d518d, .byte = 0x00 },
		{ .addr = 0x83cec4, .byte = 0x80 },
		{ .addr = 0x83cec5, .byte = 0xcc }
};

static const SST_Transaction clrb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5067148, .data = 65, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8638148, .data = 32972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5067148, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_6[] = {
		{ .addr = 0xfd5218, .byte = 0x42 },
		{ .addr = 0xfd5219, .byte = 0x11 },
		{ .addr = 0xfd521a, .byte = 0xaf },
		{ .addr = 0xfd521b, .byte = 0xdd },
		{ .addr = 0x4e9cb6, .byte = 0x83 },
		{ .addr = 0x4e9cb7, .byte = 0xd2 },
		{ .addr = 0xfd521c, .byte = 0x4d },
		{ .addr = 0xfd521d, .byte = 0xea }
};

static const SST_RamByte clrb_final_ram_6[] = {
		{ .addr = 0xfd5218, .byte = 0x42 },
		{ .addr = 0xfd5219, .byte = 0x11 },
		{ .addr = 0xfd521a, .byte = 0xaf },
		{ .addr = 0xfd521b, .byte = 0xdd },
		{ .addr = 0x4e9cb6, .byte = 0x83 },
		{ .addr = 0x4e9cb7, .byte = 0x00 },
		{ .addr = 0xfd521c, .byte = 0x4d },
		{ .addr = 0xfd521d, .byte = 0xea }
};

static const SST_Transaction clrb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5151926, .data = 210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16601628, .data = 19946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5151926, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_7[] = {
		{ .addr = 0x74b3f8, .byte = 0x42 },
		{ .addr = 0x74b3f9, .byte = 0x02 },
		{ .addr = 0x74b3fa, .byte = 0xfd },
		{ .addr = 0x74b3fb, .byte = 0x19 },
		{ .addr = 0x74b3fc, .byte = 0x53 },
		{ .addr = 0x74b3fd, .byte = 0xfd }
};

static const SST_RamByte clrb_final_ram_7[] = {
		{ .addr = 0x74b3f8, .byte = 0x42 },
		{ .addr = 0x74b3f9, .byte = 0x02 },
		{ .addr = 0x74b3fa, .byte = 0xfd },
		{ .addr = 0x74b3fb, .byte = 0x19 },
		{ .addr = 0x74b3fc, .byte = 0x53 },
		{ .addr = 0x74b3fd, .byte = 0xfd }
};

static const SST_Transaction clrb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7648252, .data = 21501, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_8[] = {
		{ .addr = 0xe488a0, .byte = 0x42 },
		{ .addr = 0xe488a1, .byte = 0x03 },
		{ .addr = 0xe488a2, .byte = 0x3b },
		{ .addr = 0xe488a3, .byte = 0x48 },
		{ .addr = 0xe488a4, .byte = 0xb3 },
		{ .addr = 0xe488a5, .byte = 0x3b }
};

static const SST_RamByte clrb_final_ram_8[] = {
		{ .addr = 0xe488a0, .byte = 0x42 },
		{ .addr = 0xe488a1, .byte = 0x03 },
		{ .addr = 0xe488a2, .byte = 0x3b },
		{ .addr = 0xe488a3, .byte = 0x48 },
		{ .addr = 0xe488a4, .byte = 0xb3 },
		{ .addr = 0xe488a5, .byte = 0x3b }
};

static const SST_Transaction clrb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14977188, .data = 45883, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_9[] = {
		{ .addr = 0xade772, .byte = 0x42 },
		{ .addr = 0xade773, .byte = 0x03 },
		{ .addr = 0xade774, .byte = 0x1c },
		{ .addr = 0xade775, .byte = 0x2e },
		{ .addr = 0xade776, .byte = 0x03 },
		{ .addr = 0xade777, .byte = 0xc4 }
};

static const SST_RamByte clrb_final_ram_9[] = {
		{ .addr = 0xade772, .byte = 0x42 },
		{ .addr = 0xade773, .byte = 0x03 },
		{ .addr = 0xade774, .byte = 0x1c },
		{ .addr = 0xade775, .byte = 0x2e },
		{ .addr = 0xade776, .byte = 0x03 },
		{ .addr = 0xade777, .byte = 0xc4 }
};

static const SST_Transaction clrb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11396982, .data = 964, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_10[] = {
		{ .addr = 0x86291a, .byte = 0x42 },
		{ .addr = 0x86291b, .byte = 0x20 },
		{ .addr = 0x86291c, .byte = 0xab },
		{ .addr = 0x86291d, .byte = 0x78 },
		{ .addr = 0xf50570, .byte = 0xbe },
		{ .addr = 0xf50571, .byte = 0x98 },
		{ .addr = 0x86291e, .byte = 0xa6 },
		{ .addr = 0x86291f, .byte = 0xb7 }
};

static const SST_RamByte clrb_final_ram_10[] = {
		{ .addr = 0x86291a, .byte = 0x42 },
		{ .addr = 0x86291b, .byte = 0x20 },
		{ .addr = 0x86291c, .byte = 0xab },
		{ .addr = 0x86291d, .byte = 0x78 },
		{ .addr = 0xf50570, .byte = 0x00 },
		{ .addr = 0xf50571, .byte = 0x98 },
		{ .addr = 0x86291e, .byte = 0xa6 },
		{ .addr = 0x86291f, .byte = 0xb7 }
};

static const SST_Transaction clrb_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16057712, .data = 48640, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8792350, .data = 42679, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16057712, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_11[] = {
		{ .addr = 0x00360e, .byte = 0x42 },
		{ .addr = 0x00360f, .byte = 0x01 },
		{ .addr = 0x003610, .byte = 0x4d },
		{ .addr = 0x003611, .byte = 0xed },
		{ .addr = 0x003612, .byte = 0x04 },
		{ .addr = 0x003613, .byte = 0x59 }
};

static const SST_RamByte clrb_final_ram_11[] = {
		{ .addr = 0x00360e, .byte = 0x42 },
		{ .addr = 0x00360f, .byte = 0x01 },
		{ .addr = 0x003610, .byte = 0x4d },
		{ .addr = 0x003611, .byte = 0xed },
		{ .addr = 0x003612, .byte = 0x04 },
		{ .addr = 0x003613, .byte = 0x59 }
};

static const SST_Transaction clrb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13842, .data = 1113, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_12[] = {
		{ .addr = 0x8111fc, .byte = 0x42 },
		{ .addr = 0x8111fd, .byte = 0x22 },
		{ .addr = 0x8111fe, .byte = 0xce },
		{ .addr = 0x8111ff, .byte = 0xe2 },
		{ .addr = 0xa88606, .byte = 0xeb },
		{ .addr = 0xa88607, .byte = 0x0a },
		{ .addr = 0x811200, .byte = 0x16 },
		{ .addr = 0x811201, .byte = 0x7b }
};

static const SST_RamByte clrb_final_ram_12[] = {
		{ .addr = 0x8111fc, .byte = 0x42 },
		{ .addr = 0x8111fd, .byte = 0x22 },
		{ .addr = 0x8111fe, .byte = 0xce },
		{ .addr = 0x8111ff, .byte = 0xe2 },
		{ .addr = 0xa88606, .byte = 0x00 },
		{ .addr = 0xa88607, .byte = 0x0a },
		{ .addr = 0x811200, .byte = 0x16 },
		{ .addr = 0x811201, .byte = 0x7b }
};

static const SST_Transaction clrb_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11044358, .data = 60160, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8458752, .data = 5755, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11044358, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_13[] = {
		{ .addr = 0xd1eeae, .byte = 0x42 },
		{ .addr = 0xd1eeaf, .byte = 0x24 },
		{ .addr = 0xd1eeb0, .byte = 0x45 },
		{ .addr = 0xd1eeb1, .byte = 0x29 },
		{ .addr = 0xd5c9c6, .byte = 0x1c },
		{ .addr = 0xd5c9c7, .byte = 0x9e },
		{ .addr = 0xd1eeb2, .byte = 0x4f },
		{ .addr = 0xd1eeb3, .byte = 0xa9 }
};

static const SST_RamByte clrb_final_ram_13[] = {
		{ .addr = 0xd1eeae, .byte = 0x42 },
		{ .addr = 0xd1eeaf, .byte = 0x24 },
		{ .addr = 0xd1eeb0, .byte = 0x45 },
		{ .addr = 0xd1eeb1, .byte = 0x29 },
		{ .addr = 0xd5c9c6, .byte = 0x00 },
		{ .addr = 0xd5c9c7, .byte = 0x9e },
		{ .addr = 0xd1eeb2, .byte = 0x4f },
		{ .addr = 0xd1eeb3, .byte = 0xa9 }
};

static const SST_Transaction clrb_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14010822, .data = 7168, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13758130, .data = 20393, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14010822, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_14[] = {
		{ .addr = 0xba2fb2, .byte = 0x42 },
		{ .addr = 0xba2fb3, .byte = 0x38 },
		{ .addr = 0xba2fb4, .byte = 0xc1 },
		{ .addr = 0xba2fb5, .byte = 0xf3 },
		{ .addr = 0xba2fb6, .byte = 0x08 },
		{ .addr = 0xba2fb7, .byte = 0xce },
		{ .addr = 0xffc1f2, .byte = 0x91 },
		{ .addr = 0xffc1f3, .byte = 0xbf },
		{ .addr = 0xba2fb8, .byte = 0x5d },
		{ .addr = 0xba2fb9, .byte = 0x29 }
};

static const SST_RamByte clrb_final_ram_14[] = {
		{ .addr = 0xba2fb2, .byte = 0x42 },
		{ .addr = 0xba2fb3, .byte = 0x38 },
		{ .addr = 0xba2fb4, .byte = 0xc1 },
		{ .addr = 0xba2fb5, .byte = 0xf3 },
		{ .addr = 0xba2fb6, .byte = 0x08 },
		{ .addr = 0xba2fb7, .byte = 0xce },
		{ .addr = 0xffc1f2, .byte = 0x91 },
		{ .addr = 0xffc1f3, .byte = 0x00 },
		{ .addr = 0xba2fb8, .byte = 0x5d },
		{ .addr = 0xba2fb9, .byte = 0x29 }
};

static const SST_Transaction clrb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12201910, .data = 2254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16761330, .data = 191, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12201912, .data = 23849, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16761330, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_15[] = {
		{ .addr = 0x4d2508, .byte = 0x42 },
		{ .addr = 0x4d2509, .byte = 0x26 },
		{ .addr = 0x4d250a, .byte = 0xba },
		{ .addr = 0x4d250b, .byte = 0x4b },
		{ .addr = 0x10f64e, .byte = 0xcc },
		{ .addr = 0x10f64f, .byte = 0x17 },
		{ .addr = 0x4d250c, .byte = 0x33 },
		{ .addr = 0x4d250d, .byte = 0xd4 }
};

static const SST_RamByte clrb_final_ram_15[] = {
		{ .addr = 0x4d2508, .byte = 0x42 },
		{ .addr = 0x4d2509, .byte = 0x26 },
		{ .addr = 0x4d250a, .byte = 0xba },
		{ .addr = 0x4d250b, .byte = 0x4b },
		{ .addr = 0x10f64e, .byte = 0xcc },
		{ .addr = 0x10f64f, .byte = 0x00 },
		{ .addr = 0x4d250c, .byte = 0x33 },
		{ .addr = 0x4d250d, .byte = 0xd4 }
};

static const SST_Transaction clrb_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1111630, .data = 23, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5055756, .data = 13268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1111630, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_16[] = {
		{ .addr = 0x021c06, .byte = 0x42 },
		{ .addr = 0x021c07, .byte = 0x01 },
		{ .addr = 0x021c08, .byte = 0x35 },
		{ .addr = 0x021c09, .byte = 0x2b },
		{ .addr = 0x021c0a, .byte = 0x40 },
		{ .addr = 0x021c0b, .byte = 0x3e }
};

static const SST_RamByte clrb_final_ram_16[] = {
		{ .addr = 0x021c06, .byte = 0x42 },
		{ .addr = 0x021c07, .byte = 0x01 },
		{ .addr = 0x021c08, .byte = 0x35 },
		{ .addr = 0x021c09, .byte = 0x2b },
		{ .addr = 0x021c0a, .byte = 0x40 },
		{ .addr = 0x021c0b, .byte = 0x3e }
};

static const SST_Transaction clrb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 138250, .data = 16446, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_17[] = {
		{ .addr = 0xea9366, .byte = 0x42 },
		{ .addr = 0xea9367, .byte = 0x35 },
		{ .addr = 0xea9368, .byte = 0xe6 },
		{ .addr = 0xea9369, .byte = 0x90 },
		{ .addr = 0xea936a, .byte = 0xf6 },
		{ .addr = 0xea936b, .byte = 0xc6 },
		{ .addr = 0xd938f4, .byte = 0xc6 },
		{ .addr = 0xd938f5, .byte = 0xdf },
		{ .addr = 0xea936c, .byte = 0x31 },
		{ .addr = 0xea936d, .byte = 0xbf }
};

static const SST_RamByte clrb_final_ram_17[] = {
		{ .addr = 0xea9366, .byte = 0x42 },
		{ .addr = 0xea9367, .byte = 0x35 },
		{ .addr = 0xea9368, .byte = 0xe6 },
		{ .addr = 0xea9369, .byte = 0x90 },
		{ .addr = 0xea936a, .byte = 0xf6 },
		{ .addr = 0xea936b, .byte = 0xc6 },
		{ .addr = 0xd938f4, .byte = 0x00 },
		{ .addr = 0xd938f5, .byte = 0xdf },
		{ .addr = 0xea936c, .byte = 0x31 },
		{ .addr = 0xea936d, .byte = 0xbf }
};

static const SST_Transaction clrb_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15373162, .data = 63174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14235892, .data = 50688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15373164, .data = 12735, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14235892, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_18[] = {
		{ .addr = 0xd5fc4a, .byte = 0x42 },
		{ .addr = 0xd5fc4b, .byte = 0x1e },
		{ .addr = 0xd5fc4c, .byte = 0xff },
		{ .addr = 0xd5fc4d, .byte = 0x0c },
		{ .addr = 0x9fb9c2, .byte = 0x29 },
		{ .addr = 0x9fb9c3, .byte = 0x3b },
		{ .addr = 0xd5fc4e, .byte = 0x00 },
		{ .addr = 0xd5fc4f, .byte = 0xd2 }
};

static const SST_RamByte clrb_final_ram_18[] = {
		{ .addr = 0xd5fc4a, .byte = 0x42 },
		{ .addr = 0xd5fc4b, .byte = 0x1e },
		{ .addr = 0xd5fc4c, .byte = 0xff },
		{ .addr = 0xd5fc4d, .byte = 0x0c },
		{ .addr = 0x9fb9c2, .byte = 0x00 },
		{ .addr = 0x9fb9c3, .byte = 0x3b },
		{ .addr = 0xd5fc4e, .byte = 0x00 },
		{ .addr = 0xd5fc4f, .byte = 0xd2 }
};

static const SST_Transaction clrb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10467778, .data = 10496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14023758, .data = 210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10467778, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_19[] = {
		{ .addr = 0xc2c5b8, .byte = 0x42 },
		{ .addr = 0xc2c5b9, .byte = 0x30 },
		{ .addr = 0xc2c5ba, .byte = 0xfd },
		{ .addr = 0xc2c5bb, .byte = 0xbe },
		{ .addr = 0xc2c5bc, .byte = 0x98 },
		{ .addr = 0xc2c5bd, .byte = 0xcb },
		{ .addr = 0xb33096, .byte = 0xbc },
		{ .addr = 0xb33097, .byte = 0xda },
		{ .addr = 0xc2c5be, .byte = 0xc5 },
		{ .addr = 0xc2c5bf, .byte = 0x41 }
};

static const SST_RamByte clrb_final_ram_19[] = {
		{ .addr = 0xc2c5b8, .byte = 0x42 },
		{ .addr = 0xc2c5b9, .byte = 0x30 },
		{ .addr = 0xc2c5ba, .byte = 0xfd },
		{ .addr = 0xc2c5bb, .byte = 0xbe },
		{ .addr = 0xc2c5bc, .byte = 0x98 },
		{ .addr = 0xc2c5bd, .byte = 0xcb },
		{ .addr = 0xb33096, .byte = 0x00 },
		{ .addr = 0xb33097, .byte = 0xda },
		{ .addr = 0xc2c5be, .byte = 0xc5 },
		{ .addr = 0xc2c5bf, .byte = 0x41 }
};

static const SST_Transaction clrb_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12764604, .data = 39115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11743382, .data = 48128, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12764606, .data = 50497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11743382, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_20[] = {
		{ .addr = 0xafbdfa, .byte = 0x42 },
		{ .addr = 0xafbdfb, .byte = 0x14 },
		{ .addr = 0xafbdfc, .byte = 0x10 },
		{ .addr = 0xafbdfd, .byte = 0x59 },
		{ .addr = 0xde45c2, .byte = 0x38 },
		{ .addr = 0xde45c3, .byte = 0x9e },
		{ .addr = 0xafbdfe, .byte = 0x63 },
		{ .addr = 0xafbdff, .byte = 0xd1 }
};

static const SST_RamByte clrb_final_ram_20[] = {
		{ .addr = 0xafbdfa, .byte = 0x42 },
		{ .addr = 0xafbdfb, .byte = 0x14 },
		{ .addr = 0xafbdfc, .byte = 0x10 },
		{ .addr = 0xafbdfd, .byte = 0x59 },
		{ .addr = 0xde45c2, .byte = 0x00 },
		{ .addr = 0xde45c3, .byte = 0x9e },
		{ .addr = 0xafbdfe, .byte = 0x63 },
		{ .addr = 0xafbdff, .byte = 0xd1 }
};

static const SST_Transaction clrb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14566850, .data = 14336, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11517438, .data = 25553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14566850, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_21[] = {
		{ .addr = 0x844aa0, .byte = 0x42 },
		{ .addr = 0x844aa1, .byte = 0x23 },
		{ .addr = 0x844aa2, .byte = 0x09 },
		{ .addr = 0x844aa3, .byte = 0x10 },
		{ .addr = 0xbe7cf6, .byte = 0x39 },
		{ .addr = 0xbe7cf7, .byte = 0xa6 },
		{ .addr = 0x844aa4, .byte = 0xab },
		{ .addr = 0x844aa5, .byte = 0x36 }
};

static const SST_RamByte clrb_final_ram_21[] = {
		{ .addr = 0x844aa0, .byte = 0x42 },
		{ .addr = 0x844aa1, .byte = 0x23 },
		{ .addr = 0x844aa2, .byte = 0x09 },
		{ .addr = 0x844aa3, .byte = 0x10 },
		{ .addr = 0xbe7cf6, .byte = 0x00 },
		{ .addr = 0xbe7cf7, .byte = 0xa6 },
		{ .addr = 0x844aa4, .byte = 0xab },
		{ .addr = 0x844aa5, .byte = 0x36 }
};

static const SST_Transaction clrb_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12483830, .data = 14592, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8669860, .data = 43830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12483830, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_22[] = {
		{ .addr = 0xce9ee4, .byte = 0x42 },
		{ .addr = 0xce9ee5, .byte = 0x2f },
		{ .addr = 0xce9ee6, .byte = 0xf9 },
		{ .addr = 0xce9ee7, .byte = 0xc9 },
		{ .addr = 0xce9ee8, .byte = 0xee },
		{ .addr = 0xce9ee9, .byte = 0x60 },
		{ .addr = 0x4ea650, .byte = 0xb4 },
		{ .addr = 0x4ea651, .byte = 0x3e },
		{ .addr = 0xce9eea, .byte = 0xbf },
		{ .addr = 0xce9eeb, .byte = 0x5d }
};

static const SST_RamByte clrb_final_ram_22[] = {
		{ .addr = 0xce9ee4, .byte = 0x42 },
		{ .addr = 0xce9ee5, .byte = 0x2f },
		{ .addr = 0xce9ee6, .byte = 0xf9 },
		{ .addr = 0xce9ee7, .byte = 0xc9 },
		{ .addr = 0xce9ee8, .byte = 0xee },
		{ .addr = 0xce9ee9, .byte = 0x60 },
		{ .addr = 0x4ea650, .byte = 0xb4 },
		{ .addr = 0x4ea651, .byte = 0x00 },
		{ .addr = 0xce9eea, .byte = 0xbf },
		{ .addr = 0xce9eeb, .byte = 0x5d }
};

static const SST_Transaction clrb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13541096, .data = 61024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5154384, .data = 62, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13541098, .data = 48989, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5154384, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_23[] = {
		{ .addr = 0x39be5e, .byte = 0x42 },
		{ .addr = 0x39be5f, .byte = 0x39 },
		{ .addr = 0x39be60, .byte = 0xc4 },
		{ .addr = 0x39be61, .byte = 0x38 },
		{ .addr = 0x39be62, .byte = 0x6c },
		{ .addr = 0x39be63, .byte = 0x38 },
		{ .addr = 0x39be64, .byte = 0x05 },
		{ .addr = 0x39be65, .byte = 0xae },
		{ .addr = 0x386c38, .byte = 0x64 },
		{ .addr = 0x386c39, .byte = 0x87 },
		{ .addr = 0x39be66, .byte = 0x89 },
		{ .addr = 0x39be67, .byte = 0xa0 }
};

static const SST_RamByte clrb_final_ram_23[] = {
		{ .addr = 0x39be5e, .byte = 0x42 },
		{ .addr = 0x39be5f, .byte = 0x39 },
		{ .addr = 0x39be60, .byte = 0xc4 },
		{ .addr = 0x39be61, .byte = 0x38 },
		{ .addr = 0x39be62, .byte = 0x6c },
		{ .addr = 0x39be63, .byte = 0x38 },
		{ .addr = 0x39be64, .byte = 0x05 },
		{ .addr = 0x39be65, .byte = 0xae },
		{ .addr = 0x386c38, .byte = 0x00 },
		{ .addr = 0x386c39, .byte = 0x87 },
		{ .addr = 0x39be66, .byte = 0x89 },
		{ .addr = 0x39be67, .byte = 0xa0 }
};

static const SST_Transaction clrb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3784290, .data = 27704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3784292, .data = 1454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3697720, .data = 25600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3784294, .data = 35232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3697720, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_24[] = {
		{ .addr = 0x8a8e48, .byte = 0x42 },
		{ .addr = 0x8a8e49, .byte = 0x2c },
		{ .addr = 0x8a8e4a, .byte = 0xaa },
		{ .addr = 0x8a8e4b, .byte = 0x87 },
		{ .addr = 0x8a8e4c, .byte = 0x76 },
		{ .addr = 0x8a8e4d, .byte = 0xf9 },
		{ .addr = 0x3d4d1e, .byte = 0x0d },
		{ .addr = 0x3d4d1f, .byte = 0x43 },
		{ .addr = 0x8a8e4e, .byte = 0xd1 },
		{ .addr = 0x8a8e4f, .byte = 0xae }
};

static const SST_RamByte clrb_final_ram_24[] = {
		{ .addr = 0x8a8e48, .byte = 0x42 },
		{ .addr = 0x8a8e49, .byte = 0x2c },
		{ .addr = 0x8a8e4a, .byte = 0xaa },
		{ .addr = 0x8a8e4b, .byte = 0x87 },
		{ .addr = 0x8a8e4c, .byte = 0x76 },
		{ .addr = 0x8a8e4d, .byte = 0xf9 },
		{ .addr = 0x3d4d1e, .byte = 0x00 },
		{ .addr = 0x3d4d1f, .byte = 0x43 },
		{ .addr = 0x8a8e4e, .byte = 0xd1 },
		{ .addr = 0x8a8e4f, .byte = 0xae }
};

static const SST_Transaction clrb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9080396, .data = 30457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4017438, .data = 3328, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9080398, .data = 53678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4017438, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_25[] = {
		{ .addr = 0x2089bc, .byte = 0x42 },
		{ .addr = 0x2089bd, .byte = 0x2f },
		{ .addr = 0x2089be, .byte = 0x88 },
		{ .addr = 0x2089bf, .byte = 0x39 },
		{ .addr = 0x2089c0, .byte = 0x10 },
		{ .addr = 0x2089c1, .byte = 0xc2 },
		{ .addr = 0xd595d8, .byte = 0xdd },
		{ .addr = 0xd595d9, .byte = 0x9c },
		{ .addr = 0x2089c2, .byte = 0x83 },
		{ .addr = 0x2089c3, .byte = 0xf7 }
};

static const SST_RamByte clrb_final_ram_25[] = {
		{ .addr = 0x2089bc, .byte = 0x42 },
		{ .addr = 0x2089bd, .byte = 0x2f },
		{ .addr = 0x2089be, .byte = 0x88 },
		{ .addr = 0x2089bf, .byte = 0x39 },
		{ .addr = 0x2089c0, .byte = 0x10 },
		{ .addr = 0x2089c1, .byte = 0xc2 },
		{ .addr = 0xd595d8, .byte = 0xdd },
		{ .addr = 0xd595d9, .byte = 0x00 },
		{ .addr = 0x2089c2, .byte = 0x83 },
		{ .addr = 0x2089c3, .byte = 0xf7 }
};

static const SST_Transaction clrb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2132416, .data = 4290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13997528, .data = 156, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2132418, .data = 33783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13997528, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_26[] = {
		{ .addr = 0xc143a0, .byte = 0x42 },
		{ .addr = 0xc143a1, .byte = 0x1b },
		{ .addr = 0xc143a2, .byte = 0xcb },
		{ .addr = 0xc143a3, .byte = 0x5a },
		{ .addr = 0x8ab0de, .byte = 0x15 },
		{ .addr = 0x8ab0df, .byte = 0xe4 },
		{ .addr = 0xc143a4, .byte = 0x9c },
		{ .addr = 0xc143a5, .byte = 0xc3 }
};

static const SST_RamByte clrb_final_ram_26[] = {
		{ .addr = 0xc143a0, .byte = 0x42 },
		{ .addr = 0xc143a1, .byte = 0x1b },
		{ .addr = 0xc143a2, .byte = 0xcb },
		{ .addr = 0xc143a3, .byte = 0x5a },
		{ .addr = 0x8ab0de, .byte = 0x00 },
		{ .addr = 0x8ab0df, .byte = 0xe4 },
		{ .addr = 0xc143a4, .byte = 0x9c },
		{ .addr = 0xc143a5, .byte = 0xc3 }
};

static const SST_Transaction clrb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9089246, .data = 5376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12665764, .data = 40131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9089246, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_27[] = {
		{ .addr = 0xa51110, .byte = 0x42 },
		{ .addr = 0xa51111, .byte = 0x22 },
		{ .addr = 0xa51112, .byte = 0x22 },
		{ .addr = 0xa51113, .byte = 0xa7 },
		{ .addr = 0x71d392, .byte = 0xf5 },
		{ .addr = 0x71d393, .byte = 0x22 },
		{ .addr = 0xa51114, .byte = 0xdd },
		{ .addr = 0xa51115, .byte = 0x3f }
};

static const SST_RamByte clrb_final_ram_27[] = {
		{ .addr = 0xa51110, .byte = 0x42 },
		{ .addr = 0xa51111, .byte = 0x22 },
		{ .addr = 0xa51112, .byte = 0x22 },
		{ .addr = 0xa51113, .byte = 0xa7 },
		{ .addr = 0x71d392, .byte = 0xf5 },
		{ .addr = 0x71d393, .byte = 0x00 },
		{ .addr = 0xa51114, .byte = 0xdd },
		{ .addr = 0xa51115, .byte = 0x3f }
};

static const SST_Transaction clrb_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7459730, .data = 34, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10817812, .data = 56639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7459730, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_28[] = {
		{ .addr = 0xe14c6a, .byte = 0x42 },
		{ .addr = 0xe14c6b, .byte = 0x1d },
		{ .addr = 0xe14c6c, .byte = 0x6c },
		{ .addr = 0xe14c6d, .byte = 0xcf },
		{ .addr = 0x92c250, .byte = 0x48 },
		{ .addr = 0x92c251, .byte = 0xa3 },
		{ .addr = 0xe14c6e, .byte = 0x16 },
		{ .addr = 0xe14c6f, .byte = 0xa3 }
};

static const SST_RamByte clrb_final_ram_28[] = {
		{ .addr = 0xe14c6a, .byte = 0x42 },
		{ .addr = 0xe14c6b, .byte = 0x1d },
		{ .addr = 0xe14c6c, .byte = 0x6c },
		{ .addr = 0xe14c6d, .byte = 0xcf },
		{ .addr = 0x92c250, .byte = 0x48 },
		{ .addr = 0x92c251, .byte = 0x00 },
		{ .addr = 0xe14c6e, .byte = 0x16 },
		{ .addr = 0xe14c6f, .byte = 0xa3 }
};

static const SST_Transaction clrb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9618000, .data = 163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14765166, .data = 5795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9618000, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_29[] = {
		{ .addr = 0xc4e3f6, .byte = 0x42 },
		{ .addr = 0xc4e3f7, .byte = 0x29 },
		{ .addr = 0xc4e3f8, .byte = 0x39 },
		{ .addr = 0xc4e3f9, .byte = 0xc1 },
		{ .addr = 0xc4e3fa, .byte = 0x5b },
		{ .addr = 0xc4e3fb, .byte = 0x36 },
		{ .addr = 0x2e8c4e, .byte = 0x05 },
		{ .addr = 0x2e8c4f, .byte = 0xdd },
		{ .addr = 0xc4e3fc, .byte = 0x5e },
		{ .addr = 0xc4e3fd, .byte = 0x2e }
};

static const SST_RamByte clrb_final_ram_29[] = {
		{ .addr = 0xc4e3f6, .byte = 0x42 },
		{ .addr = 0xc4e3f7, .byte = 0x29 },
		{ .addr = 0xc4e3f8, .byte = 0x39 },
		{ .addr = 0xc4e3f9, .byte = 0xc1 },
		{ .addr = 0xc4e3fa, .byte = 0x5b },
		{ .addr = 0xc4e3fb, .byte = 0x36 },
		{ .addr = 0x2e8c4e, .byte = 0x05 },
		{ .addr = 0x2e8c4f, .byte = 0x00 },
		{ .addr = 0xc4e3fc, .byte = 0x5e },
		{ .addr = 0xc4e3fd, .byte = 0x2e }
};

static const SST_Transaction clrb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12903418, .data = 23350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3050574, .data = 221, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12903420, .data = 24110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3050574, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_30[] = {
		{ .addr = 0x483fbe, .byte = 0x42 },
		{ .addr = 0x483fbf, .byte = 0x14 },
		{ .addr = 0x483fc0, .byte = 0x82 },
		{ .addr = 0x483fc1, .byte = 0xfe },
		{ .addr = 0xe75e6a, .byte = 0xca },
		{ .addr = 0xe75e6b, .byte = 0xf8 },
		{ .addr = 0x483fc2, .byte = 0x30 },
		{ .addr = 0x483fc3, .byte = 0x33 }
};

static const SST_RamByte clrb_final_ram_30[] = {
		{ .addr = 0x483fbe, .byte = 0x42 },
		{ .addr = 0x483fbf, .byte = 0x14 },
		{ .addr = 0x483fc0, .byte = 0x82 },
		{ .addr = 0x483fc1, .byte = 0xfe },
		{ .addr = 0xe75e6a, .byte = 0xca },
		{ .addr = 0xe75e6b, .byte = 0x00 },
		{ .addr = 0x483fc2, .byte = 0x30 },
		{ .addr = 0x483fc3, .byte = 0x33 }
};

static const SST_Transaction clrb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15162986, .data = 248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4734914, .data = 12339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15162986, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte clrb_initial_ram_31[] = {
		{ .addr = 0xe4594a, .byte = 0x42 },
		{ .addr = 0xe4594b, .byte = 0x07 },
		{ .addr = 0xe4594c, .byte = 0x45 },
		{ .addr = 0xe4594d, .byte = 0xf9 },
		{ .addr = 0xe4594e, .byte = 0xbc },
		{ .addr = 0xe4594f, .byte = 0x0c }
};

static const SST_RamByte clrb_final_ram_31[] = {
		{ .addr = 0xe4594a, .byte = 0x42 },
		{ .addr = 0xe4594b, .byte = 0x07 },
		{ .addr = 0xe4594c, .byte = 0x45 },
		{ .addr = 0xe4594d, .byte = 0xf9 },
		{ .addr = 0xe4594e, .byte = 0xbc },
		{ .addr = 0xe4594f, .byte = 0x0c }
};

static const SST_Transaction clrb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14965070, .data = 48140, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase clrb[] = {
	{
		.name = "000 CLR.b (A4) 4214",
		.initial = {
			.regs = {
				542462093, 2134690401, 1123704793, 2392395773, 758553190, 1953436813, 3741710315, 23122916, 3860978724, 2240138486, 2915247362, 3439621469, 83669039, 456444398, 466748201, 12914376, 877856, 1815, 16153094
			},
			.prefetch0 = 16916,
			.prefetch1 = 16668,
			.ram = clrb_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				542462093, 2134690401, 1123704793, 2392395773, 758553190, 1953436813, 3741710315, 23122916, 3860978724, 2240138486, 2915247362, 3439621469, 83669039, 456444398, 466748201, 12914376, 877856, 1812, 16153096
			},
			.prefetch0 = 16668,
			.prefetch1 = 60623,
			.ram = clrb_final_ram_0,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 CLR.b (d8, A2, Xn) 4232",
		.initial = {
			.regs = {
				1816555772, 418310705, 539858850, 377278236, 1816935381, 3503134126, 2966777215, 574784707, 813817518, 2816827591, 942018911, 3009567081, 880099689, 1622858762, 1874071022, 12957942, 959192, 9998, 13440968
			},
			.prefetch0 = 16946,
			.prefetch1 = 42810,
			.ram = clrb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1816555772, 418310705, 539858850, 377278236, 1816935381, 3503134126, 2966777215, 574784707, 813817518, 2816827591, 942018911, 3009567081, 880099689, 1622858762, 1874071022, 12957942, 959192, 9988, 13440972
			},
			.prefetch0 = 48251,
			.prefetch1 = 3855,
			.ram = clrb_final_ram_1,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 CLR.b (d8, A6, Xn) 4236",
		.initial = {
			.regs = {
				2691947590, 2027452499, 10866204, 4131956722, 1335252776, 2397267862, 4183108421, 3718988370, 488903236, 509632681, 266734080, 262602939, 3526220512, 156162549, 907041071, 11105214, 11888362, 1798, 9122342
			},
			.prefetch0 = 16950,
			.prefetch1 = 52582,
			.ram = clrb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2691947590, 2027452499, 10866204, 4131956722, 1335252776, 2397267862, 4183108421, 3718988370, 488903236, 509632681, 266734080, 262602939, 3526220512, 156162549, 907041071, 11105214, 11888362, 1796, 9122346
			},
			.prefetch0 = 53094,
			.prefetch1 = 65081,
			.ram = clrb_final_ram_2,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 CLR.b (A7)+ 421f",
		.initial = {
			.regs = {
				2802017884, 4059569093, 4114574415, 95789667, 2542297870, 3185736070, 515929251, 1450583477, 3200466085, 2222455836, 69798293, 4270180933, 4243045073, 3840749796, 3216527794, 7962568, 14707572, 1542, 15915114
			},
			.prefetch0 = 16927,
			.prefetch1 = 57270,
			.ram = clrb_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2802017884, 4059569093, 4114574415, 95789667, 2542297870, 3185736070, 515929251, 1450583477, 3200466085, 2222455836, 69798293, 4270180933, 4243045073, 3840749796, 3216527794, 7962570, 14707572, 1540, 15915116
			},
			.prefetch0 = 57270,
			.prefetch1 = 21581,
			.ram = clrb_final_ram_3,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 CLR.b D5 4205",
		.initial = {
			.regs = {
				4135791127, 3626139368, 1185110538, 823472767, 1546920173, 765176583, 1031509654, 4008870539, 1224754885, 1057927258, 4222493670, 2377205092, 1944154290, 80426193, 3754081989, 14945390, 7425150, 1034, 1325024
			},
			.prefetch0 = 16901,
			.prefetch1 = 61719,
			.ram = clrb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4135791127, 3626139368, 1185110538, 823472767, 1546920173, 765176576, 1031509654, 4008870539, 1224754885, 1057927258, 4222493670, 2377205092, 1944154290, 80426193, 3754081989, 14945390, 7425150, 1028, 1325026
			},
			.prefetch0 = 61719,
			.prefetch1 = 43680,
			.ram = clrb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = clrb_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 CLR.b (A3) 4213",
		.initial = {
			.regs = {
				3089677369, 1820678117, 2640403170, 452819450, 2630766874, 2473672015, 609984884, 2830207148, 113222202, 3737301774, 899018504, 709710221, 3290444310, 3259035763, 4245684441, 9663118, 13264692, 41756, 8638148
			},
			.prefetch0 = 16915,
			.prefetch1 = 53248,
			.ram = clrb_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3089677369, 1820678117, 2640403170, 452819450, 2630766874, 2473672015, 609984884, 2830207148, 113222202, 3737301774, 899018504, 709710221, 3290444310, 3259035763, 4245684441, 9663118, 13264692, 41748, 8638150
			},
			.prefetch0 = 53248,
			.prefetch1 = 32972,
			.ram = clrb_final_ram_5,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 CLR.b (A1) 4211",
		.initial = {
			.regs = {
				4098815982, 4244826988, 3237686178, 916240648, 1762883647, 1295683357, 794619147, 2533382702, 2127869769, 2622397623, 2559949643, 383960126, 2994882915, 2039658770, 3864130660, 7182614, 4844114, 8219, 16601628
			},
			.prefetch0 = 16913,
			.prefetch1 = 45021,
			.ram = clrb_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4098815982, 4244826988, 3237686178, 916240648, 1762883647, 1295683357, 794619147, 2533382702, 2127869769, 2622397623, 2559949643, 383960126, 2994882915, 2039658770, 3864130660, 7182614, 4844114, 8212, 16601630
			},
			.prefetch0 = 45021,
			.prefetch1 = 19946,
			.ram = clrb_final_ram_6,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 CLR.b D2 4202",
		.initial = {
			.regs = {
				3583988344, 4065395489, 3192089485, 1471466653, 1716875723, 2474253210, 2765524872, 145621403, 1376969866, 15214645, 3998797761, 2278739801, 1294162482, 756587962, 3130088840, 14920974, 11155900, 41995, 7648252
			},
			.prefetch0 = 16898,
			.prefetch1 = 64793,
			.ram = clrb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3583988344, 4065395489, 3192089344, 1471466653, 1716875723, 2474253210, 2765524872, 145621403, 1376969866, 15214645, 3998797761, 2278739801, 1294162482, 756587962, 3130088840, 14920974, 11155900, 41988, 7648254
			},
			.prefetch0 = 64793,
			.prefetch1 = 21501,
			.ram = clrb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = clrb_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 CLR.b D3 4203",
		.initial = {
			.regs = {
				3169345558, 942674832, 1314375309, 2159316180, 3076137186, 3462601715, 2485841223, 973426678, 2427516973, 4030953545, 1416679275, 3966330164, 309731971, 3208260080, 4097140656, 11375072, 14337438, 8204, 14977188
			},
			.prefetch0 = 16899,
			.prefetch1 = 15176,
			.ram = clrb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3169345558, 942674832, 1314375309, 2159315968, 3076137186, 3462601715, 2485841223, 973426678, 2427516973, 4030953545, 1416679275, 3966330164, 309731971, 3208260080, 4097140656, 11375072, 14337438, 8196, 14977190
			},
			.prefetch0 = 15176,
			.prefetch1 = 45883,
			.ram = clrb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = clrb_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 CLR.b D3 4203",
		.initial = {
			.regs = {
				574943087, 2443496524, 2387167182, 3704391066, 3334148338, 3936514028, 2459796375, 1716783497, 505136424, 4070303126, 26215064, 2156767994, 789369352, 1902147149, 2903324906, 15560702, 6407700, 42265, 11396982
			},
			.prefetch0 = 16899,
			.prefetch1 = 7214,
			.ram = clrb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				574943087, 2443496524, 2387167182, 3704390912, 3334148338, 3936514028, 2459796375, 1716783497, 505136424, 4070303126, 26215064, 2156767994, 789369352, 1902147149, 2903324906, 15560702, 6407700, 42260, 11396984
			},
			.prefetch0 = 7214,
			.prefetch1 = 964,
			.ram = clrb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = clrb_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 CLR.b -(A0) 4220",
		.initial = {
			.regs = {
				1518417854, 1745211307, 1460669169, 63129360, 2095915589, 3691930227, 2083300802, 392699714, 1123353969, 2088088934, 638123195, 3430363852, 1638725310, 2951099394, 1524812967, 11594272, 12314520, 34309, 8792350
			},
			.prefetch0 = 16928,
			.prefetch1 = 43896,
			.ram = clrb_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1518417854, 1745211307, 1460669169, 63129360, 2095915589, 3691930227, 2083300802, 392699714, 1123353968, 2088088934, 638123195, 3430363852, 1638725310, 2951099394, 1524812967, 11594272, 12314520, 34308, 8792352
			},
			.prefetch0 = 43896,
			.prefetch1 = 42679,
			.ram = clrb_final_ram_10,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_10,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "011 CLR.b D1 4201",
		.initial = {
			.regs = {
				4207402555, 680571880, 1874513790, 2700305724, 1466128650, 1279871205, 3242331036, 3648498810, 1816479884, 386115415, 1484943392, 249536787, 2259791452, 3901891694, 402562516, 13349962, 9664184, 9757, 13842
			},
			.prefetch0 = 16897,
			.prefetch1 = 19949,
			.ram = clrb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4207402555, 680571648, 1874513790, 2700305724, 1466128650, 1279871205, 3242331036, 3648498810, 1816479884, 386115415, 1484943392, 249536787, 2259791452, 3901891694, 402562516, 13349962, 9664184, 9748, 13844
			},
			.prefetch0 = 19949,
			.prefetch1 = 1113,
			.ram = clrb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = clrb_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 CLR.b -(A2) 4222",
		.initial = {
			.regs = {
				795190725, 3246205800, 1798953169, 3328897647, 2585490103, 1929185351, 3666539090, 517099058, 111269865, 1271381094, 2494072327, 347974171, 38342506, 745520907, 282162402, 5970218, 14530210, 1306, 8458752
			},
			.prefetch0 = 16930,
			.prefetch1 = 52962,
			.ram = clrb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				795190725, 3246205800, 1798953169, 3328897647, 2585490103, 1929185351, 3666539090, 517099058, 111269865, 1271381094, 2494072326, 347974171, 38342506, 745520907, 282162402, 5970218, 14530210, 1300, 8458754
			},
			.prefetch0 = 52962,
			.prefetch1 = 5755,
			.ram = clrb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_12,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "013 CLR.b -(A4) 4224",
		.initial = {
			.regs = {
				393658651, 1221421742, 838388894, 2685203857, 3386248428, 3848012269, 1427565769, 2870924434, 2700340123, 3902998350, 1806462883, 2351167121, 3889547719, 4076141578, 1323516045, 450462, 1489454, 32795, 13758130
			},
			.prefetch0 = 16932,
			.prefetch1 = 17705,
			.ram = clrb_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				393658651, 1221421742, 838388894, 2685203857, 3386248428, 3848012269, 1427565769, 2870924434, 2700340123, 3902998350, 1806462883, 2351167121, 3889547718, 4076141578, 1323516045, 450462, 1489454, 32788, 13758132
			},
			.prefetch0 = 17705,
			.prefetch1 = 20393,
			.ram = clrb_final_ram_13,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_13,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "014 CLR.b (xxx).w 4238",
		.initial = {
			.regs = {
				1154340732, 1657465148, 1574168229, 3147729378, 2178116545, 998391161, 1899043421, 2729950769, 1087285328, 2202780208, 1200120790, 1868135768, 848320474, 1997969846, 2181726742, 7124960, 14477946, 33559, 12201910
			},
			.prefetch0 = 16952,
			.prefetch1 = 49651,
			.ram = clrb_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1154340732, 1657465148, 1574168229, 3147729378, 2178116545, 998391161, 1899043421, 2729950769, 1087285328, 2202780208, 1200120790, 1868135768, 848320474, 1997969846, 2181726742, 7124960, 14477946, 33556, 12201914
			},
			.prefetch0 = 2254,
			.prefetch1 = 23849,
			.ram = clrb_final_ram_14,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 CLR.b -(A6) 4226",
		.initial = {
			.regs = {
				3112625654, 479234762, 366655535, 3051020109, 3940559977, 2612242880, 3410592124, 3014488650, 3524748547, 238467337, 2706623801, 311376065, 765147246, 4207955135, 3742430800, 7729144, 6013002, 40980, 5055756
			},
			.prefetch0 = 16934,
			.prefetch1 = 47691,
			.ram = clrb_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3112625654, 479234762, 366655535, 3051020109, 3940559977, 2612242880, 3410592124, 3014488650, 3524748547, 238467337, 2706623801, 311376065, 765147246, 4207955135, 3742430799, 7729144, 6013002, 40980, 5055758
			},
			.prefetch0 = 47691,
			.prefetch1 = 13268,
			.ram = clrb_final_ram_15,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_15,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "016 CLR.b D1 4201",
		.initial = {
			.regs = {
				2959696824, 1844224500, 1825277714, 1407399218, 126676447, 804116360, 4240098337, 1319889972, 1079702077, 753051170, 199883157, 3735283348, 1271950133, 3641730144, 3813159052, 9459130, 2171424, 1808, 138250
			},
			.prefetch0 = 16897,
			.prefetch1 = 13611,
			.ram = clrb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2959696824, 1844224256, 1825277714, 1407399218, 126676447, 804116360, 4240098337, 1319889972, 1079702077, 753051170, 199883157, 3735283348, 1271950133, 3641730144, 3813159052, 9459130, 2171424, 1812, 138252
			},
			.prefetch0 = 13611,
			.prefetch1 = 16446,
			.ram = clrb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = clrb_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 CLR.b (d8, A5, Xn) 4235",
		.initial = {
			.regs = {
				3005818146, 652057343, 1442404461, 524445706, 684005357, 330229032, 597992118, 2034983360, 481872437, 3799381956, 3207340073, 3650893366, 1719602690, 2765691280, 4293861332, 1084858, 2575150, 8982, 15373162
			},
			.prefetch0 = 16949,
			.prefetch1 = 59024,
			.ram = clrb_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3005818146, 652057343, 1442404461, 524445706, 684005357, 330229032, 597992118, 2034983360, 481872437, 3799381956, 3207340073, 3650893366, 1719602690, 2765691280, 4293861332, 1084858, 2575150, 8980, 15373166
			},
			.prefetch0 = 63174,
			.prefetch1 = 12735,
			.ram = clrb_final_ram_17,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_17,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "018 CLR.b (A6)+ 421e",
		.initial = {
			.regs = {
				1208889641, 1249761908, 1487671256, 2897248082, 2192396067, 3946735794, 4191118434, 2624834864, 3069402177, 4009096454, 154701146, 1479906016, 1144223230, 3014971486, 1134541250, 13304306, 12079236, 8968, 14023758
			},
			.prefetch0 = 16926,
			.prefetch1 = 65292,
			.ram = clrb_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1208889641, 1249761908, 1487671256, 2897248082, 2192396067, 3946735794, 4191118434, 2624834864, 3069402177, 4009096454, 154701146, 1479906016, 1144223230, 3014971486, 1134541251, 13304306, 12079236, 8964, 14023760
			},
			.prefetch0 = 65292,
			.prefetch1 = 210,
			.ram = clrb_final_ram_18,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_18,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "019 CLR.b (d8, A0, Xn) 4230",
		.initial = {
			.regs = {
				3199011642, 1349782754, 2266114080, 2679631733, 61619903, 3216848789, 3626719426, 1642979332, 255640558, 3482162371, 2744743201, 2977872501, 799943761, 836669001, 451230307, 7761130, 3444634, 33302, 12764604
			},
			.prefetch0 = 16944,
			.prefetch1 = 64958,
			.ram = clrb_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3199011642, 1349782754, 2266114080, 2679631733, 61619903, 3216848789, 3626719426, 1642979332, 255640558, 3482162371, 2744743201, 2977872501, 799943761, 836669001, 451230307, 7761130, 3444634, 33300, 12764608
			},
			.prefetch0 = 39115,
			.prefetch1 = 50497,
			.ram = clrb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_19,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "020 CLR.b (A4) 4214",
		.initial = {
			.regs = {
				1463649373, 4134598887, 610124296, 4245100971, 2534691476, 1624172458, 3310733395, 1338827016, 3090459865, 655346459, 1180539655, 2079948763, 316556738, 3302346831, 1814851371, 12102230, 3163652, 33566, 11517438
			},
			.prefetch0 = 16916,
			.prefetch1 = 4185,
			.ram = clrb_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1463649373, 4134598887, 610124296, 4245100971, 2534691476, 1624172458, 3310733395, 1338827016, 3090459865, 655346459, 1180539655, 2079948763, 316556738, 3302346831, 1814851371, 12102230, 3163652, 33556, 11517440
			},
			.prefetch0 = 4185,
			.prefetch1 = 25553,
			.ram = clrb_final_ram_20,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 CLR.b -(A3) 4223",
		.initial = {
			.regs = {
				676822140, 3685813884, 3571651813, 458430565, 1067012523, 3395056040, 3105620151, 4289253605, 2377782744, 511969661, 4092672134, 180255991, 1427088412, 1524681501, 3929249709, 13584326, 14587506, 33794, 8669860
			},
			.prefetch0 = 16931,
			.prefetch1 = 2320,
			.ram = clrb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				676822140, 3685813884, 3571651813, 458430565, 1067012523, 3395056040, 3105620151, 4289253605, 2377782744, 511969661, 4092672134, 180255990, 1427088412, 1524681501, 3929249709, 13584326, 14587506, 33796, 8669862
			},
			.prefetch0 = 2320,
			.prefetch1 = 43830,
			.ram = clrb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_21,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "022 CLR.b (d16, A7) 422f",
		.initial = {
			.regs = {
				2946511750, 3712138956, 2225434422, 2801554118, 4223971877, 358481457, 9925140, 3630558193, 4100913353, 1534657599, 1877330950, 3364318349, 1220280322, 3290093049, 3031157460, 5155976, 8229448, 1054, 13541096
			},
			.prefetch0 = 16943,
			.prefetch1 = 63945,
			.ram = clrb_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2946511750, 3712138956, 2225434422, 2801554118, 4223971877, 358481457, 9925140, 3630558193, 4100913353, 1534657599, 1877330950, 3364318349, 1220280322, 3290093049, 3031157460, 5155976, 8229448, 1044, 13541100
			},
			.prefetch0 = 61024,
			.prefetch1 = 48989,
			.ram = clrb_final_ram_22,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_22,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "023 CLR.b (xxx).l 4239",
		.initial = {
			.regs = {
				4075152689, 352916580, 1561312001, 2221053924, 1662965952, 852641749, 1693997458, 3315990946, 3942639994, 2267194206, 4113909344, 2267777826, 2640296205, 4197006334, 2561113122, 4669318, 10075078, 42752, 3784290
			},
			.prefetch0 = 16953,
			.prefetch1 = 50232,
			.ram = clrb_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4075152689, 352916580, 1561312001, 2221053924, 1662965952, 852641749, 1693997458, 3315990946, 3942639994, 2267194206, 4113909344, 2267777826, 2640296205, 4197006334, 2561113122, 4669318, 10075078, 42756, 3784296
			},
			.prefetch0 = 1454,
			.prefetch1 = 35232,
			.ram = clrb_final_ram_23,
			.ram_len = 12,
		},
		.transactions = clrb_transactions_23,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "024 CLR.b (d16, A4) 422c",
		.initial = {
			.regs = {
				865854885, 3221142757, 1505798403, 451285176, 2651606178, 32646343, 2922122319, 3185325227, 315678406, 1454073775, 1157642073, 2616942664, 3896353431, 167514527, 1473934011, 15448460, 16071662, 34585, 9080396
			},
			.prefetch0 = 16940,
			.prefetch1 = 43655,
			.ram = clrb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				865854885, 3221142757, 1505798403, 451285176, 2651606178, 32646343, 2922122319, 3185325227, 315678406, 1454073775, 1157642073, 2616942664, 3896353431, 167514527, 1473934011, 15448460, 16071662, 34580, 9080400
			},
			.prefetch0 = 30457,
			.prefetch1 = 53678,
			.ram = clrb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_24,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "025 CLR.b (d16, A7) 422f",
		.initial = {
			.regs = {
				1957091338, 3685566486, 809565083, 1509081721, 2151258232, 4158843139, 163116399, 739401031, 2775830830, 2979186950, 2359279039, 1925677887, 90298944, 4012677973, 1475798440, 6351870, 14028192, 41216, 2132416
			},
			.prefetch0 = 16943,
			.prefetch1 = 34873,
			.ram = clrb_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1957091338, 3685566486, 809565083, 1509081721, 2151258232, 4158843139, 163116399, 739401031, 2775830830, 2979186950, 2359279039, 1925677887, 90298944, 4012677973, 1475798440, 6351870, 14028192, 41220, 2132420
			},
			.prefetch0 = 4290,
			.prefetch1 = 33783,
			.ram = clrb_final_ram_25,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_25,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "026 CLR.b (A3)+ 421b",
		.initial = {
			.regs = {
				416413664, 2826749282, 1457448632, 3151726101, 3911743008, 822490364, 592976275, 381340426, 2120679762, 813720421, 1926118842, 1670033630, 674785306, 2746653680, 578635620, 1224110, 5644734, 8448, 12665764
			},
			.prefetch0 = 16923,
			.prefetch1 = 52058,
			.ram = clrb_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				416413664, 2826749282, 1457448632, 3151726101, 3911743008, 822490364, 592976275, 381340426, 2120679762, 813720421, 1926118842, 1670033631, 674785306, 2746653680, 578635620, 1224110, 5644734, 8452, 12665766
			},
			.prefetch0 = 52058,
			.prefetch1 = 40131,
			.ram = clrb_final_ram_26,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 CLR.b -(A2) 4222",
		.initial = {
			.regs = {
				2843397469, 2904624960, 2098237804, 3408476729, 1356099992, 2998661043, 4237370646, 3331812289, 2004546078, 1140193900, 124900244, 2765033143, 2600984977, 3290462232, 4092699075, 2490626, 93652, 1554, 10817812
			},
			.prefetch0 = 16930,
			.prefetch1 = 8871,
			.ram = clrb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2843397469, 2904624960, 2098237804, 3408476729, 1356099992, 2998661043, 4237370646, 3331812289, 2004546078, 1140193900, 124900243, 2765033143, 2600984977, 3290462232, 4092699075, 2490626, 93652, 1556, 10817814
			},
			.prefetch0 = 8871,
			.prefetch1 = 56639,
			.ram = clrb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_27,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "028 CLR.b (A5)+ 421d",
		.initial = {
			.regs = {
				3051813567, 4125050155, 1459981467, 1434255504, 2127318026, 2241296648, 1038735398, 716157068, 2422226650, 1294672762, 1285355072, 123505156, 2024860711, 3365061201, 2044015392, 6208628, 13789474, 8467, 14765166
			},
			.prefetch0 = 16925,
			.prefetch1 = 27855,
			.ram = clrb_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3051813567, 4125050155, 1459981467, 1434255504, 2127318026, 2241296648, 1038735398, 716157068, 2422226650, 1294672762, 1285355072, 123505156, 2024860711, 3365061202, 2044015392, 6208628, 13789474, 8468, 14765168
			},
			.prefetch0 = 27855,
			.prefetch1 = 5795,
			.ram = clrb_final_ram_28,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_28,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "029 CLR.b (d16, A1) 4229",
		.initial = {
			.regs = {
				570281158, 577663696, 3638055320, 259683013, 3192941503, 3118463551, 165997501, 1298244721, 1377238491, 808342158, 4101520048, 1263177765, 2642517729, 1930998113, 4095545151, 4203434, 15344468, 1285, 12903418
			},
			.prefetch0 = 16937,
			.prefetch1 = 14785,
			.ram = clrb_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				570281158, 577663696, 3638055320, 259683013, 3192941503, 3118463551, 165997501, 1298244721, 1377238491, 808342158, 4101520048, 1263177765, 2642517729, 1930998113, 4095545151, 4203434, 15344468, 1284, 12903422
			},
			.prefetch0 = 23350,
			.prefetch1 = 24110,
			.ram = clrb_final_ram_29,
			.ram_len = 10,
		},
		.transactions = clrb_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 CLR.b (A4) 4214",
		.initial = {
			.regs = {
				558472896, 2072594708, 431845957, 2421196188, 2091906709, 2223247761, 957923206, 3421509085, 311697747, 1731846557, 3500996786, 2389902422, 786914923, 474237850, 2736197118, 15853328, 16291082, 42255, 4734914
			},
			.prefetch0 = 16916,
			.prefetch1 = 33534,
			.ram = clrb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				558472896, 2072594708, 431845957, 2421196188, 2091906709, 2223247761, 957923206, 3421509085, 311697747, 1731846557, 3500996786, 2389902422, 786914923, 474237850, 2736197118, 15853328, 16291082, 42244, 4734916
			},
			.prefetch0 = 33534,
			.prefetch1 = 12339,
			.ram = clrb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = clrb_transactions_30,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "031 CLR.b D7 4207",
		.initial = {
			.regs = {
				2654996438, 225715939, 3220131010, 1903383607, 1996715873, 1999359889, 2150103706, 3917538552, 234980265, 997786580, 995856752, 2881417063, 3483147269, 2454103141, 2791017719, 10272750, 2131756, 40982, 14965070
			},
			.prefetch0 = 16903,
			.prefetch1 = 17913,
			.ram = clrb_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2654996438, 225715939, 3220131010, 1903383607, 1996715873, 1999359889, 2150103706, 3917538304, 234980265, 997786580, 995856752, 2881417063, 3483147269, 2454103141, 2791017719, 10272750, 2131756, 40980, 14965072
			},
			.prefetch0 = 17913,
			.prefetch1 = 48140,
			.ram = clrb_final_ram_31,
			.ram_len = 6,
		},
		.transactions = clrb_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_CLRB_H */