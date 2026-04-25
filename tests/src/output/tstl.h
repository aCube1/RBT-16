#ifndef RBT_TSTL_H
#define RBT_TSTL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte tstl_initial_ram_0[] = {
		{ .addr = 0x0835bc, .byte = 0x4a },
		{ .addr = 0x0835bd, .byte = 0x9b },
		{ .addr = 0x0835be, .byte = 0x33 },
		{ .addr = 0x0835bf, .byte = 0xdb },
		{ .addr = 0xd6f8f8, .byte = 0xd8 },
		{ .addr = 0xd6f8f9, .byte = 0xe4 },
		{ .addr = 0xd6f8fa, .byte = 0x3f },
		{ .addr = 0xd6f8fb, .byte = 0x0f },
		{ .addr = 0x0835c0, .byte = 0x27 },
		{ .addr = 0x0835c1, .byte = 0xb1 }
};

static const SST_RamByte tstl_final_ram_0[] = {
		{ .addr = 0x0835bc, .byte = 0x4a },
		{ .addr = 0x0835bd, .byte = 0x9b },
		{ .addr = 0x0835be, .byte = 0x33 },
		{ .addr = 0x0835bf, .byte = 0xdb },
		{ .addr = 0xd6f8f8, .byte = 0xd8 },
		{ .addr = 0xd6f8f9, .byte = 0xe4 },
		{ .addr = 0xd6f8fa, .byte = 0x3f },
		{ .addr = 0xd6f8fb, .byte = 0x0f },
		{ .addr = 0x0835c0, .byte = 0x27 },
		{ .addr = 0x0835c1, .byte = 0xb1 }
};

static const SST_Transaction tstl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14088440, .data = 55524, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14088442, .data = 16143, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 538048, .data = 10161, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_1[] = {
		{ .addr = 0x7a9e8a, .byte = 0x4a },
		{ .addr = 0x7a9e8b, .byte = 0xa8 },
		{ .addr = 0x7a9e8c, .byte = 0x7c },
		{ .addr = 0x7a9e8d, .byte = 0x36 },
		{ .addr = 0x7a9e8e, .byte = 0xd5 },
		{ .addr = 0x7a9e8f, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0xd1 },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0xd3 },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0xfed30c, .byte = 0xca },
		{ .addr = 0xfed30d, .byte = 0xc8 },
		{ .addr = 0xfed30e, .byte = 0x3f },
		{ .addr = 0xfed30f, .byte = 0x6c }
};

static const SST_RamByte tstl_final_ram_1[] = {
		{ .addr = 0x7a9e8a, .byte = 0x4a },
		{ .addr = 0x7a9e8b, .byte = 0xa8 },
		{ .addr = 0x7a9e8c, .byte = 0x7c },
		{ .addr = 0x7a9e8d, .byte = 0x36 },
		{ .addr = 0x7a9e8e, .byte = 0xd5 },
		{ .addr = 0x7a9e8f, .byte = 0x36 },
		{ .addr = 0x98b3f0, .byte = 0x9e },
		{ .addr = 0x98b3f1, .byte = 0x8c },
		{ .addr = 0x98b3ec, .byte = 0x05 },
		{ .addr = 0x98b3ed, .byte = 0x06 },
		{ .addr = 0x98b3ee, .byte = 0x00 },
		{ .addr = 0x98b3ef, .byte = 0x7a },
		{ .addr = 0x98b3ea, .byte = 0x4a },
		{ .addr = 0x98b3eb, .byte = 0xa8 },
		{ .addr = 0x98b3e8, .byte = 0x87 },
		{ .addr = 0x98b3e9, .byte = 0x3f },
		{ .addr = 0x98b3e4, .byte = 0x4a },
		{ .addr = 0x98b3e5, .byte = 0xb1 },
		{ .addr = 0x98b3e6, .byte = 0x13 },
		{ .addr = 0x98b3e7, .byte = 0x34 },
		{ .addr = 0x00000c, .byte = 0xd1 },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0xd3 },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0xfed30c, .byte = 0xca },
		{ .addr = 0xfed30d, .byte = 0xc8 },
		{ .addr = 0xfed30e, .byte = 0x3f },
		{ .addr = 0xfed30f, .byte = 0x6c }
};

static const SST_Transaction tstl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8035982, .data = 54582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3442494, .data = 3498, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10007536, .data = 40588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10007532, .data = 1286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10007534, .data = 122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10007530, .data = 19112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10007528, .data = 34623, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10007524, .data = 19121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10007526, .data = 4916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54028, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16700172, .data = 51912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16700174, .data = 16236, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_2[] = {
		{ .addr = 0xeb8ef4, .byte = 0x4a },
		{ .addr = 0xeb8ef5, .byte = 0x87 },
		{ .addr = 0xeb8ef6, .byte = 0xa8 },
		{ .addr = 0xeb8ef7, .byte = 0x57 },
		{ .addr = 0xeb8ef8, .byte = 0xa6 },
		{ .addr = 0xeb8ef9, .byte = 0xc5 }
};

static const SST_RamByte tstl_final_ram_2[] = {
		{ .addr = 0xeb8ef4, .byte = 0x4a },
		{ .addr = 0xeb8ef5, .byte = 0x87 },
		{ .addr = 0xeb8ef6, .byte = 0xa8 },
		{ .addr = 0xeb8ef7, .byte = 0x57 },
		{ .addr = 0xeb8ef8, .byte = 0xa6 },
		{ .addr = 0xeb8ef9, .byte = 0xc5 }
};

static const SST_Transaction tstl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15437560, .data = 42693, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_3[] = {
		{ .addr = 0x972d02, .byte = 0x4a },
		{ .addr = 0x972d03, .byte = 0x97 },
		{ .addr = 0x972d04, .byte = 0x02 },
		{ .addr = 0x972d05, .byte = 0xd0 },
		{ .addr = 0xe82b8e, .byte = 0xce },
		{ .addr = 0xe82b8f, .byte = 0xd9 },
		{ .addr = 0xe82b90, .byte = 0x93 },
		{ .addr = 0xe82b91, .byte = 0x07 },
		{ .addr = 0x972d06, .byte = 0x22 },
		{ .addr = 0x972d07, .byte = 0x51 }
};

static const SST_RamByte tstl_final_ram_3[] = {
		{ .addr = 0x972d02, .byte = 0x4a },
		{ .addr = 0x972d03, .byte = 0x97 },
		{ .addr = 0x972d04, .byte = 0x02 },
		{ .addr = 0x972d05, .byte = 0xd0 },
		{ .addr = 0xe82b8e, .byte = 0xce },
		{ .addr = 0xe82b8f, .byte = 0xd9 },
		{ .addr = 0xe82b90, .byte = 0x93 },
		{ .addr = 0xe82b91, .byte = 0x07 },
		{ .addr = 0x972d06, .byte = 0x22 },
		{ .addr = 0x972d07, .byte = 0x51 }
};

static const SST_Transaction tstl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15215502, .data = 52953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15215504, .data = 37639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9907462, .data = 8785, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_4[] = {
		{ .addr = 0xb35bdc, .byte = 0x4a },
		{ .addr = 0xb35bdd, .byte = 0x87 },
		{ .addr = 0xb35bde, .byte = 0xe6 },
		{ .addr = 0xb35bdf, .byte = 0xc2 },
		{ .addr = 0xb35be0, .byte = 0x02 },
		{ .addr = 0xb35be1, .byte = 0x25 }
};

static const SST_RamByte tstl_final_ram_4[] = {
		{ .addr = 0xb35bdc, .byte = 0x4a },
		{ .addr = 0xb35bdd, .byte = 0x87 },
		{ .addr = 0xb35bde, .byte = 0xe6 },
		{ .addr = 0xb35bdf, .byte = 0xc2 },
		{ .addr = 0xb35be0, .byte = 0x02 },
		{ .addr = 0xb35be1, .byte = 0x25 }
};

static const SST_Transaction tstl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11754464, .data = 549, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_5[] = {
		{ .addr = 0xd64ee2, .byte = 0x4a },
		{ .addr = 0xd64ee3, .byte = 0xb8 },
		{ .addr = 0xd64ee4, .byte = 0x9b },
		{ .addr = 0xd64ee5, .byte = 0x88 },
		{ .addr = 0xd64ee6, .byte = 0x4c },
		{ .addr = 0xd64ee7, .byte = 0xc1 },
		{ .addr = 0xff9b88, .byte = 0x42 },
		{ .addr = 0xff9b89, .byte = 0x2c },
		{ .addr = 0xff9b8a, .byte = 0x94 },
		{ .addr = 0xff9b8b, .byte = 0x61 },
		{ .addr = 0xd64ee8, .byte = 0xcf },
		{ .addr = 0xd64ee9, .byte = 0x93 }
};

static const SST_RamByte tstl_final_ram_5[] = {
		{ .addr = 0xd64ee2, .byte = 0x4a },
		{ .addr = 0xd64ee3, .byte = 0xb8 },
		{ .addr = 0xd64ee4, .byte = 0x9b },
		{ .addr = 0xd64ee5, .byte = 0x88 },
		{ .addr = 0xd64ee6, .byte = 0x4c },
		{ .addr = 0xd64ee7, .byte = 0xc1 },
		{ .addr = 0xff9b88, .byte = 0x42 },
		{ .addr = 0xff9b89, .byte = 0x2c },
		{ .addr = 0xff9b8a, .byte = 0x94 },
		{ .addr = 0xff9b8b, .byte = 0x61 },
		{ .addr = 0xd64ee8, .byte = 0xcf },
		{ .addr = 0xd64ee9, .byte = 0x93 }
};

static const SST_Transaction tstl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14044902, .data = 19649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16751496, .data = 16940, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16751498, .data = 37985, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14044904, .data = 53139, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_6[] = {
		{ .addr = 0x32e64c, .byte = 0x4a },
		{ .addr = 0x32e64d, .byte = 0x9a },
		{ .addr = 0x32e64e, .byte = 0x3a },
		{ .addr = 0x32e64f, .byte = 0x8d },
		{ .addr = 0x7ba6aa, .byte = 0x21 },
		{ .addr = 0x7ba6ab, .byte = 0xc6 },
		{ .addr = 0x7ba6ac, .byte = 0x72 },
		{ .addr = 0x7ba6ad, .byte = 0xcc },
		{ .addr = 0x32e650, .byte = 0x3a },
		{ .addr = 0x32e651, .byte = 0xac }
};

static const SST_RamByte tstl_final_ram_6[] = {
		{ .addr = 0x32e64c, .byte = 0x4a },
		{ .addr = 0x32e64d, .byte = 0x9a },
		{ .addr = 0x32e64e, .byte = 0x3a },
		{ .addr = 0x32e64f, .byte = 0x8d },
		{ .addr = 0x7ba6aa, .byte = 0x21 },
		{ .addr = 0x7ba6ab, .byte = 0xc6 },
		{ .addr = 0x7ba6ac, .byte = 0x72 },
		{ .addr = 0x7ba6ad, .byte = 0xcc },
		{ .addr = 0x32e650, .byte = 0x3a },
		{ .addr = 0x32e651, .byte = 0xac }
};

static const SST_Transaction tstl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8103594, .data = 8646, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8103596, .data = 29388, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3335760, .data = 15020, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_7[] = {
		{ .addr = 0x97b6c4, .byte = 0x4a },
		{ .addr = 0x97b6c5, .byte = 0xa5 },
		{ .addr = 0x97b6c6, .byte = 0xa0 },
		{ .addr = 0x97b6c7, .byte = 0xb8 },
		{ .addr = 0x969852, .byte = 0x4b },
		{ .addr = 0x969853, .byte = 0xe8 },
		{ .addr = 0x969854, .byte = 0x7c },
		{ .addr = 0x969855, .byte = 0x1f },
		{ .addr = 0x97b6c8, .byte = 0xdd },
		{ .addr = 0x97b6c9, .byte = 0xa1 }
};

static const SST_RamByte tstl_final_ram_7[] = {
		{ .addr = 0x97b6c4, .byte = 0x4a },
		{ .addr = 0x97b6c5, .byte = 0xa5 },
		{ .addr = 0x97b6c6, .byte = 0xa0 },
		{ .addr = 0x97b6c7, .byte = 0xb8 },
		{ .addr = 0x969852, .byte = 0x4b },
		{ .addr = 0x969853, .byte = 0xe8 },
		{ .addr = 0x969854, .byte = 0x7c },
		{ .addr = 0x969855, .byte = 0x1f },
		{ .addr = 0x97b6c8, .byte = 0xdd },
		{ .addr = 0x97b6c9, .byte = 0xa1 }
};

static const SST_Transaction tstl_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9869394, .data = 19432, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9869396, .data = 31775, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9942728, .data = 56737, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_8[] = {
		{ .addr = 0x24d72e, .byte = 0x4a },
		{ .addr = 0x24d72f, .byte = 0x97 },
		{ .addr = 0x24d730, .byte = 0x61 },
		{ .addr = 0x24d731, .byte = 0x1d },
		{ .addr = 0x3ca350, .byte = 0xf8 },
		{ .addr = 0x3ca351, .byte = 0x30 },
		{ .addr = 0x3ca352, .byte = 0x92 },
		{ .addr = 0x3ca353, .byte = 0x5d },
		{ .addr = 0x24d732, .byte = 0xc3 },
		{ .addr = 0x24d733, .byte = 0x2e }
};

static const SST_RamByte tstl_final_ram_8[] = {
		{ .addr = 0x24d72e, .byte = 0x4a },
		{ .addr = 0x24d72f, .byte = 0x97 },
		{ .addr = 0x24d730, .byte = 0x61 },
		{ .addr = 0x24d731, .byte = 0x1d },
		{ .addr = 0x3ca350, .byte = 0xf8 },
		{ .addr = 0x3ca351, .byte = 0x30 },
		{ .addr = 0x3ca352, .byte = 0x92 },
		{ .addr = 0x3ca353, .byte = 0x5d },
		{ .addr = 0x24d732, .byte = 0xc3 },
		{ .addr = 0x24d733, .byte = 0x2e }
};

static const SST_Transaction tstl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3973968, .data = 63536, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3973970, .data = 37469, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2414386, .data = 49966, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_9[] = {
		{ .addr = 0x05587a, .byte = 0x4a },
		{ .addr = 0x05587b, .byte = 0x9a },
		{ .addr = 0x05587c, .byte = 0xa0 },
		{ .addr = 0x05587d, .byte = 0xcc },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x3239a0, .byte = 0xb0 },
		{ .addr = 0x3239a1, .byte = 0xd7 },
		{ .addr = 0x3239a2, .byte = 0x25 },
		{ .addr = 0x3239a3, .byte = 0x61 }
};

static const SST_RamByte tstl_final_ram_9[] = {
		{ .addr = 0x05587a, .byte = 0x4a },
		{ .addr = 0x05587b, .byte = 0x9a },
		{ .addr = 0x05587c, .byte = 0xa0 },
		{ .addr = 0x05587d, .byte = 0xcc },
		{ .addr = 0x078d0e, .byte = 0x58 },
		{ .addr = 0x078d0f, .byte = 0x7c },
		{ .addr = 0x078d0a, .byte = 0x05 },
		{ .addr = 0x078d0b, .byte = 0x1f },
		{ .addr = 0x078d0c, .byte = 0x00 },
		{ .addr = 0x078d0d, .byte = 0x05 },
		{ .addr = 0x078d08, .byte = 0x4a },
		{ .addr = 0x078d09, .byte = 0x9a },
		{ .addr = 0x078d06, .byte = 0x09 },
		{ .addr = 0x078d07, .byte = 0xe9 },
		{ .addr = 0x078d02, .byte = 0x4a },
		{ .addr = 0x078d03, .byte = 0x91 },
		{ .addr = 0x078d04, .byte = 0x5d },
		{ .addr = 0x078d05, .byte = 0x0b },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x3239a0, .byte = 0xb0 },
		{ .addr = 0x3239a1, .byte = 0xd7 },
		{ .addr = 0x3239a2, .byte = 0x25 },
		{ .addr = 0x3239a3, .byte = 0x61 }
};

static const SST_Transaction tstl_transactions_9[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 723432, .data = 15344, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 494862, .data = 22652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 494858, .data = 1311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 494860, .data = 5, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 494856, .data = 19098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 494854, .data = 2537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 494850, .data = 19089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 494852, .data = 23819, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3291552, .data = 45271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3291554, .data = 9569, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_10[] = {
		{ .addr = 0x6b13d2, .byte = 0x4a },
		{ .addr = 0x6b13d3, .byte = 0xa4 },
		{ .addr = 0x6b13d4, .byte = 0x61 },
		{ .addr = 0x6b13d5, .byte = 0xe1 },
		{ .addr = 0x00000c, .byte = 0x9a },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0x16 },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0xe416ba, .byte = 0xa0 },
		{ .addr = 0xe416bb, .byte = 0x4e },
		{ .addr = 0xe416bc, .byte = 0x49 },
		{ .addr = 0xe416bd, .byte = 0xca }
};

static const SST_RamByte tstl_final_ram_10[] = {
		{ .addr = 0x6b13d2, .byte = 0x4a },
		{ .addr = 0x6b13d3, .byte = 0xa4 },
		{ .addr = 0x6b13d4, .byte = 0x61 },
		{ .addr = 0x6b13d5, .byte = 0xe1 },
		{ .addr = 0xad229a, .byte = 0x13 },
		{ .addr = 0xad229b, .byte = 0xd4 },
		{ .addr = 0xad2296, .byte = 0x05 },
		{ .addr = 0xad2297, .byte = 0x1a },
		{ .addr = 0xad2298, .byte = 0x00 },
		{ .addr = 0xad2299, .byte = 0x6b },
		{ .addr = 0xad2294, .byte = 0x4a },
		{ .addr = 0xad2295, .byte = 0xa4 },
		{ .addr = 0xad2292, .byte = 0xe3 },
		{ .addr = 0xad2293, .byte = 0xdb },
		{ .addr = 0xad228e, .byte = 0x4a },
		{ .addr = 0xad228f, .byte = 0xb1 },
		{ .addr = 0xad2290, .byte = 0xa4 },
		{ .addr = 0xad2291, .byte = 0x9f },
		{ .addr = 0x00000c, .byte = 0x9a },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0x16 },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0xe416ba, .byte = 0xa0 },
		{ .addr = 0xe416bb, .byte = 0x4e },
		{ .addr = 0xe416bc, .byte = 0x49 },
		{ .addr = 0xe416bd, .byte = 0xca }
};

static const SST_Transaction tstl_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10478554, .data = 11473, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11346586, .data = 5076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11346582, .data = 1306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11346584, .data = 107, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11346580, .data = 19108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11346578, .data = 58331, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11346574, .data = 19121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11346576, .data = 42143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 5818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14948026, .data = 41038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14948028, .data = 18890, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_11[] = {
		{ .addr = 0x9c35b8, .byte = 0x4a },
		{ .addr = 0x9c35b9, .byte = 0xac },
		{ .addr = 0x9c35ba, .byte = 0x8e },
		{ .addr = 0x9c35bb, .byte = 0x67 },
		{ .addr = 0x9c35bc, .byte = 0x3a },
		{ .addr = 0x9c35bd, .byte = 0xdd },
		{ .addr = 0x87c7bc, .byte = 0x6e },
		{ .addr = 0x87c7bd, .byte = 0xeb },
		{ .addr = 0x87c7be, .byte = 0x8e },
		{ .addr = 0x87c7bf, .byte = 0xe7 },
		{ .addr = 0x9c35be, .byte = 0x14 },
		{ .addr = 0x9c35bf, .byte = 0x44 }
};

static const SST_RamByte tstl_final_ram_11[] = {
		{ .addr = 0x9c35b8, .byte = 0x4a },
		{ .addr = 0x9c35b9, .byte = 0xac },
		{ .addr = 0x9c35ba, .byte = 0x8e },
		{ .addr = 0x9c35bb, .byte = 0x67 },
		{ .addr = 0x9c35bc, .byte = 0x3a },
		{ .addr = 0x9c35bd, .byte = 0xdd },
		{ .addr = 0x87c7bc, .byte = 0x6e },
		{ .addr = 0x87c7bd, .byte = 0xeb },
		{ .addr = 0x87c7be, .byte = 0x8e },
		{ .addr = 0x87c7bf, .byte = 0xe7 },
		{ .addr = 0x9c35be, .byte = 0x14 },
		{ .addr = 0x9c35bf, .byte = 0x44 }
};

static const SST_Transaction tstl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10237372, .data = 15069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8898492, .data = 28395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8898494, .data = 36583, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10237374, .data = 5188, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_12[] = {
		{ .addr = 0xf51ce4, .byte = 0x4a },
		{ .addr = 0xf51ce5, .byte = 0xb3 },
		{ .addr = 0xf51ce6, .byte = 0x94 },
		{ .addr = 0xf51ce7, .byte = 0x66 },
		{ .addr = 0xf51ce8, .byte = 0x82 },
		{ .addr = 0xf51ce9, .byte = 0xbd },
		{ .addr = 0x00000c, .byte = 0xc3 },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0x72 },
		{ .addr = 0x6c4c72, .byte = 0x6e },
		{ .addr = 0x6c4c73, .byte = 0xe4 },
		{ .addr = 0x6c4c74, .byte = 0x2e },
		{ .addr = 0x6c4c75, .byte = 0xc4 }
};

static const SST_RamByte tstl_final_ram_12[] = {
		{ .addr = 0xf51ce4, .byte = 0x4a },
		{ .addr = 0xf51ce5, .byte = 0xb3 },
		{ .addr = 0xf51ce6, .byte = 0x94 },
		{ .addr = 0xf51ce7, .byte = 0x66 },
		{ .addr = 0xf51ce8, .byte = 0x82 },
		{ .addr = 0xf51ce9, .byte = 0xbd },
		{ .addr = 0x3931bc, .byte = 0x1c },
		{ .addr = 0x3931bd, .byte = 0xe6 },
		{ .addr = 0x3931b8, .byte = 0x85 },
		{ .addr = 0x3931b9, .byte = 0x13 },
		{ .addr = 0x3931ba, .byte = 0x00 },
		{ .addr = 0x3931bb, .byte = 0xf5 },
		{ .addr = 0x3931b6, .byte = 0x4a },
		{ .addr = 0x3931b7, .byte = 0xb3 },
		{ .addr = 0x3931b4, .byte = 0x86 },
		{ .addr = 0x3931b5, .byte = 0x71 },
		{ .addr = 0x3931b0, .byte = 0x4a },
		{ .addr = 0x3931b1, .byte = 0xb1 },
		{ .addr = 0x3931b2, .byte = 0xf3 },
		{ .addr = 0x3931b3, .byte = 0x5a },
		{ .addr = 0x00000c, .byte = 0xc3 },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0x72 },
		{ .addr = 0x6c4c72, .byte = 0x6e },
		{ .addr = 0x6c4c73, .byte = 0xe4 },
		{ .addr = 0x6c4c74, .byte = 0x2e },
		{ .addr = 0x6c4c75, .byte = 0xc4 }
};

static const SST_Transaction tstl_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16063720, .data = 33469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5932656, .data = 29124, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3748284, .data = 7398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3748280, .data = 34067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3748282, .data = 245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3748278, .data = 19123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3748276, .data = 34417, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3748272, .data = 19121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3748274, .data = 62298, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50028, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 19570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7097458, .data = 28388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7097460, .data = 11972, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_13[] = {
		{ .addr = 0xd315aa, .byte = 0x4a },
		{ .addr = 0xd315ab, .byte = 0xb5 },
		{ .addr = 0xd315ac, .byte = 0x77 },
		{ .addr = 0xd315ad, .byte = 0xb0 },
		{ .addr = 0xd315ae, .byte = 0xe1 },
		{ .addr = 0xd315af, .byte = 0x83 },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0x08043a, .byte = 0xec },
		{ .addr = 0x08043b, .byte = 0x41 },
		{ .addr = 0x08043c, .byte = 0x48 },
		{ .addr = 0x08043d, .byte = 0xd5 }
};

static const SST_RamByte tstl_final_ram_13[] = {
		{ .addr = 0xd315aa, .byte = 0x4a },
		{ .addr = 0xd315ab, .byte = 0xb5 },
		{ .addr = 0xd315ac, .byte = 0x77 },
		{ .addr = 0xd315ad, .byte = 0xb0 },
		{ .addr = 0xd315ae, .byte = 0xe1 },
		{ .addr = 0xd315af, .byte = 0x83 },
		{ .addr = 0xd917d2, .byte = 0x15 },
		{ .addr = 0xd917d3, .byte = 0xac },
		{ .addr = 0xd917ce, .byte = 0x26 },
		{ .addr = 0xd917cf, .byte = 0x1c },
		{ .addr = 0xd917d0, .byte = 0x00 },
		{ .addr = 0xd917d1, .byte = 0xd3 },
		{ .addr = 0xd917cc, .byte = 0x4a },
		{ .addr = 0xd917cd, .byte = 0xb5 },
		{ .addr = 0xd917ca, .byte = 0x02 },
		{ .addr = 0xd917cb, .byte = 0xbb },
		{ .addr = 0xd917c6, .byte = 0x4a },
		{ .addr = 0xd917c7, .byte = 0xb5 },
		{ .addr = 0xd917c8, .byte = 0x53 },
		{ .addr = 0xd917c9, .byte = 0xa4 },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0x08043a, .byte = 0xec },
		{ .addr = 0x08043b, .byte = 0x41 },
		{ .addr = 0x08043c, .byte = 0x48 },
		{ .addr = 0x08043d, .byte = 0xd5 }
};

static const SST_Transaction tstl_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13833646, .data = 57731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10748602, .data = 62787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14227410, .data = 5548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14227406, .data = 9756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14227408, .data = 211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14227404, .data = 19125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14227402, .data = 699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14227398, .data = 19125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14227400, .data = 21412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 525370, .data = 60481, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 525372, .data = 18645, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_14[] = {
		{ .addr = 0x71523e, .byte = 0x4a },
		{ .addr = 0x71523f, .byte = 0xad },
		{ .addr = 0x715240, .byte = 0x72 },
		{ .addr = 0x715241, .byte = 0xca },
		{ .addr = 0x715242, .byte = 0x21 },
		{ .addr = 0x715243, .byte = 0xa9 },
		{ .addr = 0xa43542, .byte = 0x48 },
		{ .addr = 0xa43543, .byte = 0xdb },
		{ .addr = 0xa43544, .byte = 0xac },
		{ .addr = 0xa43545, .byte = 0xa7 },
		{ .addr = 0x715244, .byte = 0x99 },
		{ .addr = 0x715245, .byte = 0xa3 }
};

static const SST_RamByte tstl_final_ram_14[] = {
		{ .addr = 0x71523e, .byte = 0x4a },
		{ .addr = 0x71523f, .byte = 0xad },
		{ .addr = 0x715240, .byte = 0x72 },
		{ .addr = 0x715241, .byte = 0xca },
		{ .addr = 0x715242, .byte = 0x21 },
		{ .addr = 0x715243, .byte = 0xa9 },
		{ .addr = 0xa43542, .byte = 0x48 },
		{ .addr = 0xa43543, .byte = 0xdb },
		{ .addr = 0xa43544, .byte = 0xac },
		{ .addr = 0xa43545, .byte = 0xa7 },
		{ .addr = 0x715244, .byte = 0x99 },
		{ .addr = 0x715245, .byte = 0xa3 }
};

static const SST_Transaction tstl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7426626, .data = 8617, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10761538, .data = 18651, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10761540, .data = 44199, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7426628, .data = 39331, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_15[] = {
		{ .addr = 0xf9c102, .byte = 0x4a },
		{ .addr = 0xf9c103, .byte = 0x94 },
		{ .addr = 0xf9c104, .byte = 0x33 },
		{ .addr = 0xf9c105, .byte = 0x02 },
		{ .addr = 0x00000c, .byte = 0x3a },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x87 },
		{ .addr = 0x00000f, .byte = 0x64 },
		{ .addr = 0x9e8764, .byte = 0x57 },
		{ .addr = 0x9e8765, .byte = 0x8d },
		{ .addr = 0x9e8766, .byte = 0x37 },
		{ .addr = 0x9e8767, .byte = 0x60 }
};

static const SST_RamByte tstl_final_ram_15[] = {
		{ .addr = 0xf9c102, .byte = 0x4a },
		{ .addr = 0xf9c103, .byte = 0x94 },
		{ .addr = 0xf9c104, .byte = 0x33 },
		{ .addr = 0xf9c105, .byte = 0x02 },
		{ .addr = 0x64d302, .byte = 0xc1 },
		{ .addr = 0x64d303, .byte = 0x04 },
		{ .addr = 0x64d2fe, .byte = 0x21 },
		{ .addr = 0x64d2ff, .byte = 0x05 },
		{ .addr = 0x64d300, .byte = 0x00 },
		{ .addr = 0x64d301, .byte = 0xf9 },
		{ .addr = 0x64d2fc, .byte = 0x4a },
		{ .addr = 0x64d2fd, .byte = 0x94 },
		{ .addr = 0x64d2fa, .byte = 0x11 },
		{ .addr = 0x64d2fb, .byte = 0x5b },
		{ .addr = 0x64d2f6, .byte = 0x4a },
		{ .addr = 0x64d2f7, .byte = 0x95 },
		{ .addr = 0x64d2f8, .byte = 0x73 },
		{ .addr = 0x64d2f9, .byte = 0xcb },
		{ .addr = 0x00000c, .byte = 0x3a },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x87 },
		{ .addr = 0x00000f, .byte = 0x64 },
		{ .addr = 0x9e8764, .byte = 0x57 },
		{ .addr = 0x9e8765, .byte = 0x8d },
		{ .addr = 0x9e8766, .byte = 0x37 },
		{ .addr = 0x9e8767, .byte = 0x60 }
};

static const SST_Transaction tstl_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13308250, .data = 14621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6607618, .data = 49412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6607614, .data = 8453, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6607616, .data = 249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6607612, .data = 19092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6607610, .data = 4443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6607606, .data = 19093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6607608, .data = 29643, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 34660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10389348, .data = 22413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10389350, .data = 14176, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_16[] = {
		{ .addr = 0x5aa2d0, .byte = 0x4a },
		{ .addr = 0x5aa2d1, .byte = 0xab },
		{ .addr = 0x5aa2d2, .byte = 0xcc },
		{ .addr = 0x5aa2d3, .byte = 0x60 },
		{ .addr = 0x5aa2d4, .byte = 0x05 },
		{ .addr = 0x5aa2d5, .byte = 0x56 },
		{ .addr = 0x00000c, .byte = 0x1c },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xaa39a2, .byte = 0x8b },
		{ .addr = 0xaa39a3, .byte = 0x74 },
		{ .addr = 0xaa39a4, .byte = 0xb7 },
		{ .addr = 0xaa39a5, .byte = 0xab }
};

static const SST_RamByte tstl_final_ram_16[] = {
		{ .addr = 0x5aa2d0, .byte = 0x4a },
		{ .addr = 0x5aa2d1, .byte = 0xab },
		{ .addr = 0x5aa2d2, .byte = 0xcc },
		{ .addr = 0x5aa2d3, .byte = 0x60 },
		{ .addr = 0x5aa2d4, .byte = 0x05 },
		{ .addr = 0x5aa2d5, .byte = 0x56 },
		{ .addr = 0x75fa10, .byte = 0xa2 },
		{ .addr = 0x75fa11, .byte = 0xd2 },
		{ .addr = 0x75fa0c, .byte = 0x26 },
		{ .addr = 0x75fa0d, .byte = 0x10 },
		{ .addr = 0x75fa0e, .byte = 0x00 },
		{ .addr = 0x75fa0f, .byte = 0x5a },
		{ .addr = 0x75fa0a, .byte = 0x4a },
		{ .addr = 0x75fa0b, .byte = 0xab },
		{ .addr = 0x75fa08, .byte = 0x97 },
		{ .addr = 0x75fa09, .byte = 0x55 },
		{ .addr = 0x75fa04, .byte = 0x4a },
		{ .addr = 0x75fa05, .byte = 0xb5 },
		{ .addr = 0x75fa06, .byte = 0xf8 },
		{ .addr = 0x75fa07, .byte = 0x84 },
		{ .addr = 0x00000c, .byte = 0x1c },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xaa39a2, .byte = 0x8b },
		{ .addr = 0xaa39a3, .byte = 0x74 },
		{ .addr = 0xaa39a4, .byte = 0xb7 },
		{ .addr = 0xaa39a5, .byte = 0xab }
};

static const SST_Transaction tstl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5939924, .data = 1366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689492, .data = 60764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731728, .data = 41682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731724, .data = 9744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731726, .data = 90, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731722, .data = 19115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731720, .data = 38741, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731716, .data = 19125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7731718, .data = 63620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11155874, .data = 35700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11155876, .data = 47019, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_17[] = {
		{ .addr = 0xc9dee0, .byte = 0x4a },
		{ .addr = 0xc9dee1, .byte = 0xb5 },
		{ .addr = 0xc9dee2, .byte = 0xa5 },
		{ .addr = 0xc9dee3, .byte = 0x74 },
		{ .addr = 0xc9dee4, .byte = 0x42 },
		{ .addr = 0xc9dee5, .byte = 0xb3 },
		{ .addr = 0xcb9d44, .byte = 0x7f },
		{ .addr = 0xcb9d45, .byte = 0x38 },
		{ .addr = 0xcb9d46, .byte = 0x74 },
		{ .addr = 0xcb9d47, .byte = 0xbc },
		{ .addr = 0xc9dee6, .byte = 0xed },
		{ .addr = 0xc9dee7, .byte = 0xf7 }
};

static const SST_RamByte tstl_final_ram_17[] = {
		{ .addr = 0xc9dee0, .byte = 0x4a },
		{ .addr = 0xc9dee1, .byte = 0xb5 },
		{ .addr = 0xc9dee2, .byte = 0xa5 },
		{ .addr = 0xc9dee3, .byte = 0x74 },
		{ .addr = 0xc9dee4, .byte = 0x42 },
		{ .addr = 0xc9dee5, .byte = 0xb3 },
		{ .addr = 0xcb9d44, .byte = 0x7f },
		{ .addr = 0xcb9d45, .byte = 0x38 },
		{ .addr = 0xcb9d46, .byte = 0x74 },
		{ .addr = 0xcb9d47, .byte = 0xbc },
		{ .addr = 0xc9dee6, .byte = 0xed },
		{ .addr = 0xc9dee7, .byte = 0xf7 }
};

static const SST_Transaction tstl_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13229796, .data = 17075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13344068, .data = 32568, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13344070, .data = 29884, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13229798, .data = 60919, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_18[] = {
		{ .addr = 0x29675a, .byte = 0x4a },
		{ .addr = 0x29675b, .byte = 0x87 },
		{ .addr = 0x29675c, .byte = 0xe1 },
		{ .addr = 0x29675d, .byte = 0xe7 },
		{ .addr = 0x29675e, .byte = 0xec },
		{ .addr = 0x29675f, .byte = 0xe2 }
};

static const SST_RamByte tstl_final_ram_18[] = {
		{ .addr = 0x29675a, .byte = 0x4a },
		{ .addr = 0x29675b, .byte = 0x87 },
		{ .addr = 0x29675c, .byte = 0xe1 },
		{ .addr = 0x29675d, .byte = 0xe7 },
		{ .addr = 0x29675e, .byte = 0xec },
		{ .addr = 0x29675f, .byte = 0xe2 }
};

static const SST_Transaction tstl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2713438, .data = 60642, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_19[] = {
		{ .addr = 0x631b4a, .byte = 0x4a },
		{ .addr = 0x631b4b, .byte = 0xa0 },
		{ .addr = 0x631b4c, .byte = 0xf2 },
		{ .addr = 0x631b4d, .byte = 0xc6 },
		{ .addr = 0x00000c, .byte = 0xe8 },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xd2c24e, .byte = 0x59 },
		{ .addr = 0xd2c24f, .byte = 0x27 },
		{ .addr = 0xd2c250, .byte = 0x31 },
		{ .addr = 0xd2c251, .byte = 0x9e }
};

static const SST_RamByte tstl_final_ram_19[] = {
		{ .addr = 0x631b4a, .byte = 0x4a },
		{ .addr = 0x631b4b, .byte = 0xa0 },
		{ .addr = 0x631b4c, .byte = 0xf2 },
		{ .addr = 0x631b4d, .byte = 0xc6 },
		{ .addr = 0xb87164, .byte = 0x1b },
		{ .addr = 0xb87165, .byte = 0x4c },
		{ .addr = 0xb87160, .byte = 0x86 },
		{ .addr = 0xb87161, .byte = 0x17 },
		{ .addr = 0xb87162, .byte = 0x00 },
		{ .addr = 0xb87163, .byte = 0x63 },
		{ .addr = 0xb8715e, .byte = 0x4a },
		{ .addr = 0xb8715f, .byte = 0xa0 },
		{ .addr = 0xb8715c, .byte = 0xe9 },
		{ .addr = 0xb8715d, .byte = 0xcd },
		{ .addr = 0xb87158, .byte = 0x4a },
		{ .addr = 0xb87159, .byte = 0xb1 },
		{ .addr = 0xb8715a, .byte = 0xff },
		{ .addr = 0xb8715b, .byte = 0x66 },
		{ .addr = 0x00000c, .byte = 0xe8 },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xd2c24e, .byte = 0x59 },
		{ .addr = 0xd2c24f, .byte = 0x27 },
		{ .addr = 0xd2c250, .byte = 0x31 },
		{ .addr = 0xd2c251, .byte = 0x9e }
};

static const SST_Transaction tstl_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6744524, .data = 2083, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087652, .data = 6988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087648, .data = 34327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087650, .data = 99, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087646, .data = 19104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087644, .data = 59853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087640, .data = 19121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087642, .data = 65382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13812302, .data = 22823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13812304, .data = 12702, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_20[] = {
		{ .addr = 0x5b8026, .byte = 0x4a },
		{ .addr = 0x5b8027, .byte = 0xa2 },
		{ .addr = 0x5b8028, .byte = 0xc0 },
		{ .addr = 0x5b8029, .byte = 0x2f },
		{ .addr = 0x00000c, .byte = 0x86 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0xdf },
		{ .addr = 0x00000f, .byte = 0x36 },
		{ .addr = 0xd0df36, .byte = 0xbe },
		{ .addr = 0xd0df37, .byte = 0xa6 },
		{ .addr = 0xd0df38, .byte = 0x35 },
		{ .addr = 0xd0df39, .byte = 0xb2 }
};

static const SST_RamByte tstl_final_ram_20[] = {
		{ .addr = 0x5b8026, .byte = 0x4a },
		{ .addr = 0x5b8027, .byte = 0xa2 },
		{ .addr = 0x5b8028, .byte = 0xc0 },
		{ .addr = 0x5b8029, .byte = 0x2f },
		{ .addr = 0x551660, .byte = 0x80 },
		{ .addr = 0x551661, .byte = 0x28 },
		{ .addr = 0x55165c, .byte = 0xa5 },
		{ .addr = 0x55165d, .byte = 0x11 },
		{ .addr = 0x55165e, .byte = 0x00 },
		{ .addr = 0x55165f, .byte = 0x5b },
		{ .addr = 0x55165a, .byte = 0x4a },
		{ .addr = 0x55165b, .byte = 0xa2 },
		{ .addr = 0x551658, .byte = 0x2f },
		{ .addr = 0x551659, .byte = 0x23 },
		{ .addr = 0x551654, .byte = 0x4a },
		{ .addr = 0x551655, .byte = 0xb5 },
		{ .addr = 0x551656, .byte = 0xfc },
		{ .addr = 0x551657, .byte = 0xb4 },
		{ .addr = 0x00000c, .byte = 0x86 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0xdf },
		{ .addr = 0x00000f, .byte = 0x36 },
		{ .addr = 0xd0df36, .byte = 0xbe },
		{ .addr = 0xd0df37, .byte = 0xa6 },
		{ .addr = 0xd0df38, .byte = 0x35 },
		{ .addr = 0xd0df39, .byte = 0xb2 }
};

static const SST_Transaction tstl_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11808546, .data = 22576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5576288, .data = 32808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5576284, .data = 42257, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5576286, .data = 91, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5576282, .data = 19106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5576280, .data = 12067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5576276, .data = 19125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5576278, .data = 64692, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13688630, .data = 48806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13688632, .data = 13746, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_21[] = {
		{ .addr = 0xe02260, .byte = 0x4a },
		{ .addr = 0xe02261, .byte = 0x97 },
		{ .addr = 0xe02262, .byte = 0x1b },
		{ .addr = 0xe02263, .byte = 0xca },
		{ .addr = 0xd5e9f2, .byte = 0x40 },
		{ .addr = 0xd5e9f3, .byte = 0x6b },
		{ .addr = 0xd5e9f4, .byte = 0x06 },
		{ .addr = 0xd5e9f5, .byte = 0x9b },
		{ .addr = 0xe02264, .byte = 0x97 },
		{ .addr = 0xe02265, .byte = 0x06 }
};

static const SST_RamByte tstl_final_ram_21[] = {
		{ .addr = 0xe02260, .byte = 0x4a },
		{ .addr = 0xe02261, .byte = 0x97 },
		{ .addr = 0xe02262, .byte = 0x1b },
		{ .addr = 0xe02263, .byte = 0xca },
		{ .addr = 0xd5e9f2, .byte = 0x40 },
		{ .addr = 0xd5e9f3, .byte = 0x6b },
		{ .addr = 0xd5e9f4, .byte = 0x06 },
		{ .addr = 0xd5e9f5, .byte = 0x9b },
		{ .addr = 0xe02264, .byte = 0x97 },
		{ .addr = 0xe02265, .byte = 0x06 }
};

static const SST_Transaction tstl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14019058, .data = 16491, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14019060, .data = 1691, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14688868, .data = 38662, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_22[] = {
		{ .addr = 0x8e964e, .byte = 0x4a },
		{ .addr = 0x8e964f, .byte = 0x83 },
		{ .addr = 0x8e9650, .byte = 0xca },
		{ .addr = 0x8e9651, .byte = 0xd0 },
		{ .addr = 0x8e9652, .byte = 0x08 },
		{ .addr = 0x8e9653, .byte = 0x43 }
};

static const SST_RamByte tstl_final_ram_22[] = {
		{ .addr = 0x8e964e, .byte = 0x4a },
		{ .addr = 0x8e964f, .byte = 0x83 },
		{ .addr = 0x8e9650, .byte = 0xca },
		{ .addr = 0x8e9651, .byte = 0xd0 },
		{ .addr = 0x8e9652, .byte = 0x08 },
		{ .addr = 0x8e9653, .byte = 0x43 }
};

static const SST_Transaction tstl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9344594, .data = 2115, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_23[] = {
		{ .addr = 0xbe877e, .byte = 0x4a },
		{ .addr = 0xbe877f, .byte = 0x92 },
		{ .addr = 0xbe8780, .byte = 0x6a },
		{ .addr = 0xbe8781, .byte = 0x21 },
		{ .addr = 0xe24978, .byte = 0xae },
		{ .addr = 0xe24979, .byte = 0xc4 },
		{ .addr = 0xe2497a, .byte = 0x2c },
		{ .addr = 0xe2497b, .byte = 0xc9 },
		{ .addr = 0xbe8782, .byte = 0xba },
		{ .addr = 0xbe8783, .byte = 0x1e }
};

static const SST_RamByte tstl_final_ram_23[] = {
		{ .addr = 0xbe877e, .byte = 0x4a },
		{ .addr = 0xbe877f, .byte = 0x92 },
		{ .addr = 0xbe8780, .byte = 0x6a },
		{ .addr = 0xbe8781, .byte = 0x21 },
		{ .addr = 0xe24978, .byte = 0xae },
		{ .addr = 0xe24979, .byte = 0xc4 },
		{ .addr = 0xe2497a, .byte = 0x2c },
		{ .addr = 0xe2497b, .byte = 0xc9 },
		{ .addr = 0xbe8782, .byte = 0xba },
		{ .addr = 0xbe8783, .byte = 0x1e }
};

static const SST_Transaction tstl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14829944, .data = 44740, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14829946, .data = 11465, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12486530, .data = 47646, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_24[] = {
		{ .addr = 0xa7d098, .byte = 0x4a },
		{ .addr = 0xa7d099, .byte = 0xb4 },
		{ .addr = 0xa7d09a, .byte = 0x86 },
		{ .addr = 0xa7d09b, .byte = 0x14 },
		{ .addr = 0xa7d09c, .byte = 0x14 },
		{ .addr = 0xa7d09d, .byte = 0xb1 },
		{ .addr = 0xffb120, .byte = 0x0b },
		{ .addr = 0xffb121, .byte = 0xee },
		{ .addr = 0xffb122, .byte = 0x85 },
		{ .addr = 0xffb123, .byte = 0xc3 },
		{ .addr = 0xa7d09e, .byte = 0x2a },
		{ .addr = 0xa7d09f, .byte = 0x5e }
};

static const SST_RamByte tstl_final_ram_24[] = {
		{ .addr = 0xa7d098, .byte = 0x4a },
		{ .addr = 0xa7d099, .byte = 0xb4 },
		{ .addr = 0xa7d09a, .byte = 0x86 },
		{ .addr = 0xa7d09b, .byte = 0x14 },
		{ .addr = 0xa7d09c, .byte = 0x14 },
		{ .addr = 0xa7d09d, .byte = 0xb1 },
		{ .addr = 0xffb120, .byte = 0x0b },
		{ .addr = 0xffb121, .byte = 0xee },
		{ .addr = 0xffb122, .byte = 0x85 },
		{ .addr = 0xffb123, .byte = 0xc3 },
		{ .addr = 0xa7d09e, .byte = 0x2a },
		{ .addr = 0xa7d09f, .byte = 0x5e }
};

static const SST_Transaction tstl_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10997916, .data = 5297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16757024, .data = 3054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16757026, .data = 34243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10997918, .data = 10846, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_25[] = {
		{ .addr = 0x23634a, .byte = 0x4a },
		{ .addr = 0x23634b, .byte = 0x85 },
		{ .addr = 0x23634c, .byte = 0x95 },
		{ .addr = 0x23634d, .byte = 0x09 },
		{ .addr = 0x23634e, .byte = 0x42 },
		{ .addr = 0x23634f, .byte = 0xbb }
};

static const SST_RamByte tstl_final_ram_25[] = {
		{ .addr = 0x23634a, .byte = 0x4a },
		{ .addr = 0x23634b, .byte = 0x85 },
		{ .addr = 0x23634c, .byte = 0x95 },
		{ .addr = 0x23634d, .byte = 0x09 },
		{ .addr = 0x23634e, .byte = 0x42 },
		{ .addr = 0x23634f, .byte = 0xbb }
};

static const SST_Transaction tstl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2319182, .data = 17083, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_26[] = {
		{ .addr = 0x9bdd28, .byte = 0x4a },
		{ .addr = 0x9bdd29, .byte = 0x9b },
		{ .addr = 0x9bdd2a, .byte = 0xef },
		{ .addr = 0x9bdd2b, .byte = 0xae },
		{ .addr = 0xb1edc4, .byte = 0x65 },
		{ .addr = 0xb1edc5, .byte = 0x1b },
		{ .addr = 0xb1edc6, .byte = 0x6c },
		{ .addr = 0xb1edc7, .byte = 0x69 },
		{ .addr = 0x9bdd2c, .byte = 0xd1 },
		{ .addr = 0x9bdd2d, .byte = 0xdd }
};

static const SST_RamByte tstl_final_ram_26[] = {
		{ .addr = 0x9bdd28, .byte = 0x4a },
		{ .addr = 0x9bdd29, .byte = 0x9b },
		{ .addr = 0x9bdd2a, .byte = 0xef },
		{ .addr = 0x9bdd2b, .byte = 0xae },
		{ .addr = 0xb1edc4, .byte = 0x65 },
		{ .addr = 0xb1edc5, .byte = 0x1b },
		{ .addr = 0xb1edc6, .byte = 0x6c },
		{ .addr = 0xb1edc7, .byte = 0x69 },
		{ .addr = 0x9bdd2c, .byte = 0xd1 },
		{ .addr = 0x9bdd2d, .byte = 0xdd }
};

static const SST_Transaction tstl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11660740, .data = 25883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11660742, .data = 27753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10214700, .data = 53725, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_27[] = {
		{ .addr = 0xce11ca, .byte = 0x4a },
		{ .addr = 0xce11cb, .byte = 0x92 },
		{ .addr = 0xce11cc, .byte = 0xcf },
		{ .addr = 0xce11cd, .byte = 0x7f },
		{ .addr = 0x430814, .byte = 0x85 },
		{ .addr = 0x430815, .byte = 0x9f },
		{ .addr = 0x430816, .byte = 0x37 },
		{ .addr = 0x430817, .byte = 0x9b },
		{ .addr = 0xce11ce, .byte = 0x40 },
		{ .addr = 0xce11cf, .byte = 0xcd }
};

static const SST_RamByte tstl_final_ram_27[] = {
		{ .addr = 0xce11ca, .byte = 0x4a },
		{ .addr = 0xce11cb, .byte = 0x92 },
		{ .addr = 0xce11cc, .byte = 0xcf },
		{ .addr = 0xce11cd, .byte = 0x7f },
		{ .addr = 0x430814, .byte = 0x85 },
		{ .addr = 0x430815, .byte = 0x9f },
		{ .addr = 0x430816, .byte = 0x37 },
		{ .addr = 0x430817, .byte = 0x9b },
		{ .addr = 0xce11ce, .byte = 0x40 },
		{ .addr = 0xce11cf, .byte = 0xcd }
};

static const SST_Transaction tstl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4392980, .data = 34207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4392982, .data = 14235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13504974, .data = 16589, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_28[] = {
		{ .addr = 0x9991ac, .byte = 0x4a },
		{ .addr = 0x9991ad, .byte = 0x84 },
		{ .addr = 0x9991ae, .byte = 0x7c },
		{ .addr = 0x9991af, .byte = 0x5e },
		{ .addr = 0x9991b0, .byte = 0x58 },
		{ .addr = 0x9991b1, .byte = 0xda }
};

static const SST_RamByte tstl_final_ram_28[] = {
		{ .addr = 0x9991ac, .byte = 0x4a },
		{ .addr = 0x9991ad, .byte = 0x84 },
		{ .addr = 0x9991ae, .byte = 0x7c },
		{ .addr = 0x9991af, .byte = 0x5e },
		{ .addr = 0x9991b0, .byte = 0x58 },
		{ .addr = 0x9991b1, .byte = 0xda }
};

static const SST_Transaction tstl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10064304, .data = 22746, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_29[] = {
		{ .addr = 0xb826a6, .byte = 0x4a },
		{ .addr = 0xb826a7, .byte = 0xb5 },
		{ .addr = 0xb826a8, .byte = 0x8c },
		{ .addr = 0xb826a9, .byte = 0x3f },
		{ .addr = 0xb826aa, .byte = 0xcc },
		{ .addr = 0xb826ab, .byte = 0x2b },
		{ .addr = 0x00000c, .byte = 0x57 },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xd83f52, .byte = 0xfa },
		{ .addr = 0xd83f53, .byte = 0x3f },
		{ .addr = 0xd83f54, .byte = 0x49 },
		{ .addr = 0xd83f55, .byte = 0x92 }
};

static const SST_RamByte tstl_final_ram_29[] = {
		{ .addr = 0xb826a6, .byte = 0x4a },
		{ .addr = 0xb826a7, .byte = 0xb5 },
		{ .addr = 0xb826a8, .byte = 0x8c },
		{ .addr = 0xb826a9, .byte = 0x3f },
		{ .addr = 0xb826aa, .byte = 0xcc },
		{ .addr = 0xb826ab, .byte = 0x2b },
		{ .addr = 0x7f52da, .byte = 0x26 },
		{ .addr = 0x7f52db, .byte = 0xa8 },
		{ .addr = 0x7f52d6, .byte = 0x06 },
		{ .addr = 0x7f52d7, .byte = 0x02 },
		{ .addr = 0x7f52d8, .byte = 0x00 },
		{ .addr = 0x7f52d9, .byte = 0xb8 },
		{ .addr = 0x7f52d4, .byte = 0x4a },
		{ .addr = 0x7f52d5, .byte = 0xb5 },
		{ .addr = 0x7f52d2, .byte = 0xd4 },
		{ .addr = 0x7f52d3, .byte = 0x3d },
		{ .addr = 0x7f52ce, .byte = 0x4a },
		{ .addr = 0x7f52cf, .byte = 0xb1 },
		{ .addr = 0x7f52d0, .byte = 0x7e },
		{ .addr = 0x7f52d1, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0x57 },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xd83f52, .byte = 0xfa },
		{ .addr = 0xd83f53, .byte = 0x3f },
		{ .addr = 0xd83f54, .byte = 0x49 },
		{ .addr = 0xd83f55, .byte = 0x92 }
};

static const SST_Transaction tstl_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12068522, .data = 52267, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1299516, .data = 5119, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8344282, .data = 9896, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8344278, .data = 1538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8344280, .data = 184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8344276, .data = 19125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8344274, .data = 54333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8344270, .data = 19121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8344272, .data = 32275, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 22488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14171986, .data = 64063, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14171988, .data = 18834, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_30[] = {
		{ .addr = 0x5b3d82, .byte = 0x4a },
		{ .addr = 0x5b3d83, .byte = 0xa5 },
		{ .addr = 0x5b3d84, .byte = 0x59 },
		{ .addr = 0x5b3d85, .byte = 0x63 },
		{ .addr = 0x00000c, .byte = 0xeb },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0xb0b4be, .byte = 0xc3 },
		{ .addr = 0xb0b4bf, .byte = 0x88 },
		{ .addr = 0xb0b4c0, .byte = 0x3a },
		{ .addr = 0xb0b4c1, .byte = 0xb6 }
};

static const SST_RamByte tstl_final_ram_30[] = {
		{ .addr = 0x5b3d82, .byte = 0x4a },
		{ .addr = 0x5b3d83, .byte = 0xa5 },
		{ .addr = 0x5b3d84, .byte = 0x59 },
		{ .addr = 0x5b3d85, .byte = 0x63 },
		{ .addr = 0x85c5bc, .byte = 0x3d },
		{ .addr = 0x85c5bd, .byte = 0x84 },
		{ .addr = 0x85c5b8, .byte = 0x04 },
		{ .addr = 0x85c5b9, .byte = 0x1f },
		{ .addr = 0x85c5ba, .byte = 0x00 },
		{ .addr = 0x85c5bb, .byte = 0x5b },
		{ .addr = 0x85c5b6, .byte = 0x4a },
		{ .addr = 0x85c5b7, .byte = 0xa5 },
		{ .addr = 0x85c5b4, .byte = 0x99 },
		{ .addr = 0x85c5b5, .byte = 0x73 },
		{ .addr = 0x85c5b0, .byte = 0x4a },
		{ .addr = 0x85c5b1, .byte = 0xb1 },
		{ .addr = 0x85c5b2, .byte = 0x4c },
		{ .addr = 0x85c5b3, .byte = 0x71 },
		{ .addr = 0x00000c, .byte = 0xeb },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0xb0b4be, .byte = 0xc3 },
		{ .addr = 0xb0b4bf, .byte = 0x88 },
		{ .addr = 0xb0b4c0, .byte = 0x3a },
		{ .addr = 0xb0b4c1, .byte = 0xb6 }
};

static const SST_Transaction tstl_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7444850, .data = 13014, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8766908, .data = 15748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8766904, .data = 1055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8766906, .data = 91, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8766902, .data = 19109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8766900, .data = 39283, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8766896, .data = 19121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8766898, .data = 19569, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11580606, .data = 50056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11580608, .data = 15030, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstl_initial_ram_31[] = {
		{ .addr = 0x139664, .byte = 0x4a },
		{ .addr = 0x139665, .byte = 0x9a },
		{ .addr = 0x139666, .byte = 0x88 },
		{ .addr = 0x139667, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0x9d },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0x7e },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0xcc7e5c, .byte = 0xc6 },
		{ .addr = 0xcc7e5d, .byte = 0x62 },
		{ .addr = 0xcc7e5e, .byte = 0x56 },
		{ .addr = 0xcc7e5f, .byte = 0x46 }
};

static const SST_RamByte tstl_final_ram_31[] = {
		{ .addr = 0x139664, .byte = 0x4a },
		{ .addr = 0x139665, .byte = 0x9a },
		{ .addr = 0x139666, .byte = 0x88 },
		{ .addr = 0x139667, .byte = 0x5e },
		{ .addr = 0xf629aa, .byte = 0x96 },
		{ .addr = 0xf629ab, .byte = 0x66 },
		{ .addr = 0xf629a6, .byte = 0x84 },
		{ .addr = 0xf629a7, .byte = 0x02 },
		{ .addr = 0xf629a8, .byte = 0x00 },
		{ .addr = 0xf629a9, .byte = 0x13 },
		{ .addr = 0xf629a4, .byte = 0x4a },
		{ .addr = 0xf629a5, .byte = 0x9a },
		{ .addr = 0xf629a2, .byte = 0x06 },
		{ .addr = 0xf629a3, .byte = 0x75 },
		{ .addr = 0xf6299e, .byte = 0x4a },
		{ .addr = 0xf6299f, .byte = 0x91 },
		{ .addr = 0xf629a0, .byte = 0x5f },
		{ .addr = 0xf629a1, .byte = 0x44 },
		{ .addr = 0x00000c, .byte = 0x9d },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0x7e },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0xcc7e5c, .byte = 0xc6 },
		{ .addr = 0xcc7e5d, .byte = 0x62 },
		{ .addr = 0xcc7e5e, .byte = 0x56 },
		{ .addr = 0xcc7e5f, .byte = 0x46 }
};

static const SST_Transaction tstl_transactions_31[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4458100, .data = 7570, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16132522, .data = 38502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16132518, .data = 33794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16132520, .data = 19, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16132516, .data = 19098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16132514, .data = 1653, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16132510, .data = 19089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16132512, .data = 24388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 40396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13401692, .data = 50786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13401694, .data = 22086, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase tstl[] = {
	{
		.name = "000 TST.l (A3)+ 4a9b",
		.initial = {
			.regs = {
				392338856, 575745694, 1285145668, 2889595002, 1934093247, 624730210, 2551632161, 128177730, 3651211208, 65103521, 510446476, 2480339192, 4174934748, 34041163, 3484523032, 15138578, 16253590, 266, 538048
			},
			.prefetch0 = 19099,
			.prefetch1 = 13275,
			.ram = tstl_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				392338856, 575745694, 1285145668, 2889595002, 1934093247, 624730210, 2551632161, 128177730, 3651211208, 65103521, 510446476, 2480339196, 4174934748, 34041163, 3484523032, 15138578, 16253590, 264, 538050
			},
			.prefetch0 = 13275,
			.prefetch1 = 10161,
			.ram = tstl_final_ram_0,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 TST.l (d16, A0) 4aa8",
		.initial = {
			.regs = {
				1908198858, 4031780211, 3209981006, 922429949, 820672097, 2894082248, 49917354, 825139511, 322177801, 2806422640, 497532732, 4192788645, 4084763737, 4150298516, 43586681, 3259012, 10007538, 1286, 8035982
			},
			.prefetch0 = 19112,
			.prefetch1 = 31798,
			.ram = tstl_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1908198858, 4031780211, 3209981006, 922429949, 820672097, 2894082248, 49917354, 825139511, 322177801, 2806422640, 497532732, 4192788645, 4084763737, 4150298516, 43586681, 3259012, 10007524, 9478, 3523138320
			},
			.prefetch0 = 51912,
			.prefetch1 = 16236,
			.ram = tstl_final_ram_1,
			.ram_len = 28,
		},
		.transactions = tstl_transactions_1,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "002 TST.l D7 4a87",
		.initial = {
			.regs = {
				3059869349, 1692362417, 967670932, 3667550651, 4287322083, 4292350814, 3955534833, 3506751493, 2593509768, 3724711234, 230712715, 2164643981, 2768779244, 3793620501, 4145778478, 14635976, 5212890, 8968, 15437560
			},
			.prefetch0 = 19079,
			.prefetch1 = 43095,
			.ram = tstl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3059869349, 1692362417, 967670932, 3667550651, 4287322083, 4292350814, 3955534833, 3506751493, 2593509768, 3724711234, 230712715, 2164643981, 2768779244, 3793620501, 4145778478, 14635976, 5212890, 8968, 15437562
			},
			.prefetch0 = 43095,
			.prefetch1 = 42693,
			.ram = tstl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = tstl_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 TST.l (A7) 4a97",
		.initial = {
			.regs = {
				3786564062, 3013367007, 2809167451, 2363222819, 357826421, 3738744531, 2733214109, 3968554437, 2759793330, 2823921333, 4087755528, 94560990, 3415652281, 699961676, 1074560045, 3437380, 15215502, 41996, 9907462
			},
			.prefetch0 = 19095,
			.prefetch1 = 720,
			.ram = tstl_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3786564062, 3013367007, 2809167451, 2363222819, 357826421, 3738744531, 2733214109, 3968554437, 2759793330, 2823921333, 4087755528, 94560990, 3415652281, 699961676, 1074560045, 3437380, 15215502, 41992, 9907464
			},
			.prefetch0 = 720,
			.prefetch1 = 8785,
			.ram = tstl_final_ram_3,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 TST.l D7 4a87",
		.initial = {
			.regs = {
				2087657127, 3766376606, 2710777241, 49857129, 3487557322, 1670339235, 791035366, 1911947076, 2492377879, 2784701456, 4171749752, 3857431194, 3720771090, 1943254044, 347811502, 13351560, 7981588, 1308, 11754464
			},
			.prefetch0 = 19079,
			.prefetch1 = 59074,
			.ram = tstl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2087657127, 3766376606, 2710777241, 49857129, 3487557322, 1670339235, 791035366, 1911947076, 2492377879, 2784701456, 4171749752, 3857431194, 3720771090, 1943254044, 347811502, 13351560, 7981588, 1296, 11754466
			},
			.prefetch0 = 59074,
			.prefetch1 = 549,
			.ram = tstl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = tstl_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 TST.l (xxx).w 4ab8",
		.initial = {
			.regs = {
				3579266796, 3686847306, 951094494, 1503294803, 1730082308, 364296448, 3727366803, 1464697074, 3237626584, 3838579998, 3213034779, 490523151, 1378683248, 46856863, 1913332942, 4820762, 3130904, 1823, 14044902
			},
			.prefetch0 = 19128,
			.prefetch1 = 39816,
			.ram = tstl_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3579266796, 3686847306, 951094494, 1503294803, 1730082308, 364296448, 3727366803, 1464697074, 3237626584, 3838579998, 3213034779, 490523151, 1378683248, 46856863, 1913332942, 4820762, 3130904, 1808, 14044906
			},
			.prefetch0 = 19649,
			.prefetch1 = 53139,
			.ram = tstl_final_ram_5,
			.ram_len = 12,
		},
		.transactions = tstl_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 TST.l (A2)+ 4a9a",
		.initial = {
			.regs = {
				2542862916, 1584468232, 220338203, 83356345, 2070476257, 1805836682, 887816763, 2907834508, 4167467627, 1320279549, 578528938, 2663686779, 3142170372, 179154316, 3909357622, 9646896, 12270212, 34327, 3335760
			},
			.prefetch0 = 19098,
			.prefetch1 = 14989,
			.ram = tstl_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2542862916, 1584468232, 220338203, 83356345, 2070476257, 1805836682, 887816763, 2907834508, 4167467627, 1320279549, 578528942, 2663686779, 3142170372, 179154316, 3909357622, 9646896, 12270212, 34320, 3335762
			},
			.prefetch0 = 14989,
			.prefetch1 = 15020,
			.ram = tstl_final_ram_6,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 TST.l -(A5) 4aa5",
		.initial = {
			.regs = {
				2252762765, 959135371, 2183194633, 3825939106, 2923818450, 1157590549, 3587541372, 759127551, 3019780758, 2101096336, 3523958750, 1487284385, 3334354297, 3382089814, 3030951456, 16467800, 13237978, 1311, 9942728
			},
			.prefetch0 = 19109,
			.prefetch1 = 41144,
			.ram = tstl_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2252762765, 959135371, 2183194633, 3825939106, 2923818450, 1157590549, 3587541372, 759127551, 3019780758, 2101096336, 3523958750, 1487284385, 3334354297, 3382089810, 3030951456, 16467800, 13237978, 1296, 9942730
			},
			.prefetch0 = 41144,
			.prefetch1 = 56737,
			.ram = tstl_final_ram_7,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 TST.l (A7) 4a97",
		.initial = {
			.regs = {
				789194338, 2030034886, 3639200153, 2359584337, 3710853991, 2225924890, 2338301489, 3083149950, 3730434042, 3296677534, 3217138018, 1567979869, 2774385052, 707261546, 2346879173, 3973968, 3338472, 1024, 2414386
			},
			.prefetch0 = 19095,
			.prefetch1 = 24861,
			.ram = tstl_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				789194338, 2030034886, 3639200153, 2359584337, 3710853991, 2225924890, 2338301489, 3083149950, 3730434042, 3296677534, 3217138018, 1567979869, 2774385052, 707261546, 2346879173, 3973968, 3338472, 1032, 2414388
			},
			.prefetch0 = 24861,
			.prefetch1 = 49966,
			.ram = tstl_final_ram_8,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 TST.l (A2)+ 4a9a",
		.initial = {
			.regs = {
				3428313201, 3465296216, 3127302236, 1071932245, 3702216383, 3154215634, 2442230085, 4069096588, 3063264364, 150416739, 1561004521, 4258642828, 1464973163, 1163709616, 2610165609, 10237916, 494864, 1311, 350334
			},
			.prefetch0 = 19098,
			.prefetch1 = 41164,
			.ram = tstl_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3428313201, 3465296216, 3127302236, 1071932245, 3702216383, 3154215634, 2442230085, 4069096588, 3063264364, 150416739, 1561004521, 4258642828, 1464973163, 1163709616, 2610165609, 10237916, 494850, 9503, 3694279076
			},
			.prefetch0 = 45271,
			.prefetch1 = 9569,
			.ram = tstl_final_ram_9,
			.ram_len = 26,
		},
		.transactions = tstl_transactions_9,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "010 TST.l -(A4) 4aa4",
		.initial = {
			.regs = {
				3939015629, 4005233335, 2899923366, 2080398854, 1761450708, 2587232956, 3847350089, 2143834887, 903169936, 1453754407, 720065893, 1722711756, 2761941983, 4027587781, 1352373155, 12650278, 11346588, 1306, 7017430
			},
			.prefetch0 = 19108,
			.prefetch1 = 25057,
			.ram = tstl_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3939015629, 4005233335, 2899923366, 2080398854, 1761450708, 2587232956, 3847350089, 2143834887, 903169936, 1453754407, 720065893, 1722711756, 2761941979, 4027587781, 1352373155, 12650278, 11346574, 9498, 2598639294
			},
			.prefetch0 = 41038,
			.prefetch1 = 18890,
			.ram = tstl_final_ram_10,
			.ram_len = 26,
		},
		.transactions = tstl_transactions_10,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "011 TST.l (d16, A4) 4aac",
		.initial = {
			.regs = {
				1020750630, 740885163, 2583697240, 736591585, 1768861401, 3644046333, 2434766101, 57019930, 224579310, 1184449898, 1354573582, 1338888217, 2173188437, 1196240604, 236367562, 925866, 12694068, 9757, 10237372
			},
			.prefetch0 = 19116,
			.prefetch1 = 36455,
			.ram = tstl_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1020750630, 740885163, 2583697240, 736591585, 1768861401, 3644046333, 2434766101, 57019930, 224579310, 1184449898, 1354573582, 1338888217, 2173188437, 1196240604, 236367562, 925866, 12694068, 9744, 10237376
			},
			.prefetch0 = 15069,
			.prefetch1 = 5188,
			.ram = tstl_final_ram_11,
			.ram_len = 12,
		},
		.transactions = tstl_transactions_11,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "012 TST.l (d8, A3, Xn) 4ab3",
		.initial = {
			.regs = {
				4068788802, 3311227486, 2338004338, 2437399171, 481609686, 479866881, 1337211997, 3511297764, 1893734616, 2605227341, 2462804083, 4082821310, 3333095831, 1982319978, 1321341350, 4872752, 3748286, 34067, 16063720
			},
			.prefetch0 = 19123,
			.prefetch1 = 37990,
			.ram = tstl_initial_ram_12,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4068788802, 3311227486, 2338004338, 2437399171, 481609686, 479866881, 1337211997, 3511297764, 1893734616, 2605227341, 2462804083, 4082821310, 3333095831, 1982319978, 1321341350, 4872752, 3748272, 9491, 3278654582
			},
			.prefetch0 = 28388,
			.prefetch1 = 11972,
			.ram = tstl_final_ram_12,
			.ram_len = 28,
		},
		.transactions = tstl_transactions_12,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "013 TST.l (d8, A5, Xn) 4ab5",
		.initial = {
			.regs = {
				60133387, 177468882, 2363703604, 706888512, 4285518955, 3877031551, 2469198487, 1836857310, 395353169, 2881843036, 3299845635, 4034833286, 3219370455, 1403243309, 2925574606, 11738106, 14227412, 9756, 13833646
			},
			.prefetch0 = 19125,
			.prefetch1 = 30640,
			.ram = tstl_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				60133387, 177468882, 2363703604, 706888512, 4285518955, 3877031551, 2469198487, 1836857310, 395353169, 2881843036, 3299845635, 4034833286, 3219370455, 1403243309, 2925574606, 11738106, 14227398, 9756, 3137864766
			},
			.prefetch0 = 60481,
			.prefetch1 = 18645,
			.ram = tstl_final_ram_13,
			.ram_len = 28,
		},
		.transactions = tstl_transactions_13,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "014 TST.l (d16, A5) 4aad",
		.initial = {
			.regs = {
				2597039556, 503063462, 806521006, 388103014, 11478611, 2446145513, 1315298341, 3908423631, 635541194, 680222804, 483553104, 560767945, 2859378754, 1571013240, 3689907593, 6311598, 11911714, 282, 7426626
			},
			.prefetch0 = 19117,
			.prefetch1 = 29386,
			.ram = tstl_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2597039556, 503063462, 806521006, 388103014, 11478611, 2446145513, 1315298341, 3908423631, 635541194, 680222804, 483553104, 560767945, 2859378754, 1571013240, 3689907593, 6311598, 11911714, 272, 7426630
			},
			.prefetch0 = 8617,
			.prefetch1 = 39331,
			.ram = tstl_final_ram_14,
			.ram_len = 12,
		},
		.transactions = tstl_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 TST.l (A4) 4a94",
		.initial = {
			.regs = {
				4242906579, 1943001930, 305896361, 565762768, 2163766698, 1130278540, 3009655956, 1550235797, 3411310252, 1113999564, 3941202845, 63865921, 1942688091, 403055888, 2123344164, 12832588, 6607620, 8453, 16367878
			},
			.prefetch0 = 19092,
			.prefetch1 = 13058,
			.ram = tstl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4242906579, 1943001930, 305896361, 565762768, 2163766698, 1130278540, 3009655956, 1550235797, 3411310252, 1113999564, 3941202845, 63865921, 1942688091, 403055888, 2123344164, 12832588, 6607606, 8453, 983467880
			},
			.prefetch0 = 22413,
			.prefetch1 = 14176,
			.ram = tstl_final_ram_15,
			.ram_len = 26,
		},
		.transactions = tstl_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "016 TST.l (d16, A3) 4aab",
		.initial = {
			.regs = {
				1579467115, 277085319, 1695121761, 1781982038, 221815915, 2355625215, 2756362723, 1437678107, 2378298403, 2861636345, 311603319, 4169452277, 3587338761, 2356365688, 1567090078, 10711058, 7731730, 9744, 5939924
			},
			.prefetch0 = 19115,
			.prefetch1 = 52320,
			.ram = tstl_initial_ram_16,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1579467115, 277085319, 1695121761, 1781982038, 221815915, 2355625215, 2756362723, 1437678107, 2378298403, 2861636345, 311603319, 4169452277, 3587338761, 2356365688, 1567090078, 10711058, 7731716, 9744, 480917926
			},
			.prefetch0 = 35700,
			.prefetch1 = 47019,
			.ram = tstl_final_ram_16,
			.ram_len = 28,
		},
		.transactions = tstl_transactions_16,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "017 TST.l (d8, A5, Xn) 4ab5",
		.initial = {
			.regs = {
				2786451801, 2001374435, 1961267691, 3405616802, 1149640579, 1407361247, 837736790, 588237721, 1447618066, 1325470801, 3537221891, 3291644744, 3454108383, 4224443341, 3902787815, 14390436, 2012494, 33288, 13229796
			},
			.prefetch0 = 19125,
			.prefetch1 = 42356,
			.ram = tstl_initial_ram_17,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2786451801, 2001374435, 1961267691, 3405616802, 1149640579, 1407361247, 837736790, 588237721, 1447618066, 1325470801, 3537221891, 3291644744, 3454108383, 4224443341, 3902787815, 14390436, 2012494, 33280, 13229800
			},
			.prefetch0 = 17075,
			.prefetch1 = 60919,
			.ram = tstl_final_ram_17,
			.ram_len = 12,
		},
		.transactions = tstl_transactions_17,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "018 TST.l D7 4a87",
		.initial = {
			.regs = {
				3525315457, 2999125980, 2866585223, 3200088979, 2550459323, 456388873, 2838703662, 2297414171, 1910119301, 3092075405, 4251277256, 1440366834, 2628612176, 2847222165, 3448691629, 119990, 1124784, 41484, 2713438
			},
			.prefetch0 = 19079,
			.prefetch1 = 57831,
			.ram = tstl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3525315457, 2999125980, 2866585223, 3200088979, 2550459323, 456388873, 2838703662, 2297414171, 1910119301, 3092075405, 4251277256, 1440366834, 2628612176, 2847222165, 3448691629, 119990, 1124784, 41480, 2713440
			},
			.prefetch0 = 57831,
			.prefetch1 = 60642,
			.ram = tstl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = tstl_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 TST.l -(A0) 4aa0",
		.initial = {
			.regs = {
				49233006, 3403221202, 1148623746, 706687341, 3324783968, 3149087954, 1132846061, 3462054342, 4284934609, 1202135499, 1990312666, 1386269329, 3239671847, 2886438073, 1754787655, 6350786, 12087654, 34327, 6495054
			},
			.prefetch0 = 19104,
			.prefetch1 = 62150,
			.ram = tstl_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				49233006, 3403221202, 1148623746, 706687341, 3324783968, 3149087954, 1132846061, 3462054342, 4284934605, 1202135499, 1990312666, 1386269329, 3239671847, 2886438073, 1754787655, 6350786, 12087640, 9751, 3906126418
			},
			.prefetch0 = 22823,
			.prefetch1 = 12702,
			.ram = tstl_final_ram_19,
			.ram_len = 26,
		},
		.transactions = tstl_transactions_19,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "020 TST.l -(A2) 4aa2",
		.initial = {
			.regs = {
				1960924757, 2617411534, 1791745759, 3919437783, 132724371, 2247950134, 2081135952, 505886860, 2586158856, 561386736, 4239666983, 3705584984, 1536311677, 2071940766, 2906414683, 15258524, 5576290, 42257, 5996586
			},
			.prefetch0 = 19106,
			.prefetch1 = 49199,
			.ram = tstl_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1960924757, 2617411534, 1791745759, 3919437783, 132724371, 2247950134, 2081135952, 505886860, 2586158856, 561386736, 4239666979, 3705584984, 1536311677, 2071940766, 2906414683, 15258524, 5576276, 9489, 2261835578
			},
			.prefetch0 = 48806,
			.prefetch1 = 13746,
			.ram = tstl_final_ram_20,
			.ram_len = 26,
		},
		.transactions = tstl_transactions_20,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "021 TST.l (A7) 4a97",
		.initial = {
			.regs = {
				502639194, 793314412, 2425626030, 231292092, 3813709645, 3437820551, 3432812912, 1600928920, 2518636450, 2522203288, 577503217, 4010413469, 2860912925, 3777798581, 2747900655, 14019058, 6584080, 1799, 14688868
			},
			.prefetch0 = 19095,
			.prefetch1 = 7114,
			.ram = tstl_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				502639194, 793314412, 2425626030, 231292092, 3813709645, 3437820551, 3432812912, 1600928920, 2518636450, 2522203288, 577503217, 4010413469, 2860912925, 3777798581, 2747900655, 14019058, 6584080, 1792, 14688870
			},
			.prefetch0 = 7114,
			.prefetch1 = 38662,
			.ram = tstl_final_ram_21,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_21,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "022 TST.l D3 4a83",
		.initial = {
			.regs = {
				2201487907, 3743620145, 3093597360, 329069241, 4041389049, 3752919528, 548462103, 2956091615, 602315358, 155671491, 2332303914, 3051884241, 1345950259, 3643784940, 1748183565, 8694060, 9904676, 9745, 9344594
			},
			.prefetch0 = 19075,
			.prefetch1 = 51920,
			.ram = tstl_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2201487907, 3743620145, 3093597360, 329069241, 4041389049, 3752919528, 548462103, 2956091615, 602315358, 155671491, 2332303914, 3051884241, 1345950259, 3643784940, 1748183565, 8694060, 9904676, 9744, 9344596
			},
			.prefetch0 = 51920,
			.prefetch1 = 2115,
			.ram = tstl_final_ram_22,
			.ram_len = 6,
		},
		.transactions = tstl_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 TST.l (A2) 4a92",
		.initial = {
			.regs = {
				2705070562, 1372380313, 4225043743, 2317268736, 626143888, 2182198058, 3067006495, 233164072, 1574286369, 3399717901, 1424116088, 1327715964, 3650146655, 4087020331, 647703669, 11324566, 10421700, 34326, 12486530
			},
			.prefetch0 = 19090,
			.prefetch1 = 27169,
			.ram = tstl_initial_ram_23,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2705070562, 1372380313, 4225043743, 2317268736, 626143888, 2182198058, 3067006495, 233164072, 1574286369, 3399717901, 1424116088, 1327715964, 3650146655, 4087020331, 647703669, 11324566, 10421700, 34328, 12486532
			},
			.prefetch0 = 27169,
			.prefetch1 = 47646,
			.ram = tstl_final_ram_23,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 TST.l (d8, A4, Xn) 4ab4",
		.initial = {
			.regs = {
				2566539834, 3222015957, 3509883491, 2015882148, 2044156132, 3050963601, 3511486612, 3336654308, 3585990015, 3282922861, 2302421682, 84386538, 3456095117, 596064272, 2163099070, 8130806, 15102832, 41484, 10997916
			},
			.prefetch0 = 19124,
			.prefetch1 = 34324,
			.ram = tstl_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2566539834, 3222015957, 3509883491, 2015882148, 2044156132, 3050963601, 3511486612, 3336654308, 3585990015, 3282922861, 2302421682, 84386538, 3456095117, 596064272, 2163099070, 8130806, 15102832, 41472, 10997920
			},
			.prefetch0 = 5297,
			.prefetch1 = 10846,
			.ram = tstl_final_ram_24,
			.ram_len = 12,
		},
		.transactions = tstl_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 TST.l D5 4a85",
		.initial = {
			.regs = {
				3366023916, 3453714830, 1668085537, 3756133079, 1285411917, 2155599695, 1984113283, 1970207735, 3579936009, 711478640, 1307092105, 4117026957, 1163634444, 2091859999, 1405827634, 16525190, 11401676, 9488, 2319182
			},
			.prefetch0 = 19077,
			.prefetch1 = 38153,
			.ram = tstl_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3366023916, 3453714830, 1668085537, 3756133079, 1285411917, 2155599695, 1984113283, 1970207735, 3579936009, 711478640, 1307092105, 4117026957, 1163634444, 2091859999, 1405827634, 16525190, 11401676, 9496, 2319184
			},
			.prefetch0 = 38153,
			.prefetch1 = 17083,
			.ram = tstl_final_ram_25,
			.ram_len = 6,
		},
		.transactions = tstl_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 TST.l (A3)+ 4a9b",
		.initial = {
			.regs = {
				1179493207, 3627262474, 3427803234, 2057156733, 1474517836, 3308429082, 894811177, 761939745, 1432702397, 36834117, 180165622, 3199331780, 2495872914, 3130033349, 1734400585, 13901320, 2628404, 8457, 10214700
			},
			.prefetch0 = 19099,
			.prefetch1 = 61358,
			.ram = tstl_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1179493207, 3627262474, 3427803234, 2057156733, 1474517836, 3308429082, 894811177, 761939745, 1432702397, 36834117, 180165622, 3199331784, 2495872914, 3130033349, 1734400585, 13901320, 2628404, 8448, 10214702
			},
			.prefetch0 = 61358,
			.prefetch1 = 53725,
			.ram = tstl_final_ram_26,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 TST.l (A2) 4a92",
		.initial = {
			.regs = {
				4268211311, 1386727412, 134085299, 436318843, 571999728, 3997491347, 1048287873, 3400772230, 663139375, 3842250485, 2906851348, 264026969, 3251637937, 585002892, 2328737747, 9716358, 5110258, 8962, 13504974
			},
			.prefetch0 = 19090,
			.prefetch1 = 53119,
			.ram = tstl_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4268211311, 1386727412, 134085299, 436318843, 571999728, 3997491347, 1048287873, 3400772230, 663139375, 3842250485, 2906851348, 264026969, 3251637937, 585002892, 2328737747, 9716358, 5110258, 8968, 13504976
			},
			.prefetch0 = 53119,
			.prefetch1 = 16589,
			.ram = tstl_final_ram_27,
			.ram_len = 10,
		},
		.transactions = tstl_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 TST.l D4 4a84",
		.initial = {
			.regs = {
				240699100, 4129806355, 1606552861, 2315369666, 926886442, 3440371450, 405295329, 3435626144, 3512643065, 929053336, 2485721893, 483591981, 3094541693, 3093715590, 1815445110, 1228852, 6960300, 34319, 10064304
			},
			.prefetch0 = 19076,
			.prefetch1 = 31838,
			.ram = tstl_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				240699100, 4129806355, 1606552861, 2315369666, 926886442, 3440371450, 405295329, 3435626144, 3512643065, 929053336, 2485721893, 483591981, 3094541693, 3093715590, 1815445110, 1228852, 6960300, 34304, 10064306
			},
			.prefetch0 = 31838,
			.prefetch1 = 22746,
			.ram = tstl_final_ram_28,
			.ram_len = 6,
		},
		.transactions = tstl_transactions_28,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "029 TST.l (d8, A5, Xn) 4ab5",
		.initial = {
			.regs = {
				2158873781, 2316894488, 2520030718, 2799703937, 1460232949, 3453872599, 815430365, 49467651, 3822064480, 806667869, 3337090285, 3394135631, 1911656003, 2588131486, 1812548206, 8751220, 8344284, 1538, 12068522
			},
			.prefetch0 = 19125,
			.prefetch1 = 35903,
			.ram = tstl_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2158873781, 2316894488, 2520030718, 2799703937, 1460232949, 3453872599, 815430365, 49467651, 3822064480, 806667869, 3337090285, 3394135631, 1911656003, 2588131486, 1812548206, 8751220, 8344270, 9730, 1473789782
			},
			.prefetch0 = 64063,
			.prefetch1 = 18834,
			.ram = tstl_final_ram_29,
			.ram_len = 28,
		},
		.transactions = tstl_transactions_29,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "030 TST.l -(A5) 4aa5",
		.initial = {
			.regs = {
				4096018582, 2206221747, 2323718001, 2798699675, 3390545709, 4201529963, 1897250842, 2907664582, 1461085509, 1089492994, 1903288513, 3166509329, 2200741380, 1282513271, 3822711363, 7955832, 8766910, 1055, 5979526
			},
			.prefetch0 = 19109,
			.prefetch1 = 22883,
			.ram = tstl_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4096018582, 2206221747, 2323718001, 2798699675, 3390545709, 4201529963, 1897250842, 2907664582, 1461085509, 1089492994, 1903288513, 3166509329, 2200741380, 1282513267, 3822711363, 7955832, 8766896, 9247, 3954226370
			},
			.prefetch0 = 50056,
			.prefetch1 = 15030,
			.ram = tstl_final_ram_30,
			.ram_len = 26,
		},
		.transactions = tstl_transactions_30,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "031 TST.l (A2)+ 4a9a",
		.initial = {
			.regs = {
				3806810367, 2780224399, 3246563876, 2245607668, 3487007385, 2288734334, 2144726299, 1056201555, 3784572572, 2102900647, 1598293621, 3288741726, 2977096107, 510906955, 1141130179, 2285474, 16132524, 33794, 1283688
			},
			.prefetch0 = 19098,
			.prefetch1 = 34910,
			.ram = tstl_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3806810367, 2780224399, 3246563876, 2245607668, 3487007385, 2288734334, 2144726299, 1056201555, 3784572572, 2102900647, 1598293621, 3288741726, 2977096107, 510906955, 1141130179, 2285474, 16132510, 9218, 2647424608
			},
			.prefetch0 = 50786,
			.prefetch1 = 22086,
			.ram = tstl_final_ram_31,
			.ram_len = 26,
		},
		.transactions = tstl_transactions_31,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_TSTL_H */