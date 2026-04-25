#ifndef RBT_BTST_H
#define RBT_BTST_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte btst_initial_ram_0[] = {
		{ .addr = 0x53c66e, .byte = 0x0b },
		{ .addr = 0x53c66f, .byte = 0x1e },
		{ .addr = 0x53c670, .byte = 0xf2 },
		{ .addr = 0x53c671, .byte = 0xcc },
		{ .addr = 0x557e7a, .byte = 0x7c },
		{ .addr = 0x557e7b, .byte = 0xbd },
		{ .addr = 0x53c672, .byte = 0xaa },
		{ .addr = 0x53c673, .byte = 0x9b }
};

static const SST_RamByte btst_final_ram_0[] = {
		{ .addr = 0x53c66e, .byte = 0x0b },
		{ .addr = 0x53c66f, .byte = 0x1e },
		{ .addr = 0x53c670, .byte = 0xf2 },
		{ .addr = 0x53c671, .byte = 0xcc },
		{ .addr = 0x557e7a, .byte = 0x7c },
		{ .addr = 0x557e7b, .byte = 0xbd },
		{ .addr = 0x53c672, .byte = 0xaa },
		{ .addr = 0x53c673, .byte = 0x9b }
};

static const SST_Transaction btst_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5602938, .data = 31744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5490290, .data = 43675, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_1[] = {
		{ .addr = 0x73825e, .byte = 0x07 },
		{ .addr = 0x73825f, .byte = 0x39 },
		{ .addr = 0x738260, .byte = 0x5d },
		{ .addr = 0x738261, .byte = 0xdb },
		{ .addr = 0x738262, .byte = 0x29 },
		{ .addr = 0x738263, .byte = 0x0c },
		{ .addr = 0x738264, .byte = 0x4c },
		{ .addr = 0x738265, .byte = 0xc0 },
		{ .addr = 0xdb290c, .byte = 0xb5 },
		{ .addr = 0xdb290d, .byte = 0x40 },
		{ .addr = 0x738266, .byte = 0xb4 },
		{ .addr = 0x738267, .byte = 0x0f }
};

static const SST_RamByte btst_final_ram_1[] = {
		{ .addr = 0x73825e, .byte = 0x07 },
		{ .addr = 0x73825f, .byte = 0x39 },
		{ .addr = 0x738260, .byte = 0x5d },
		{ .addr = 0x738261, .byte = 0xdb },
		{ .addr = 0x738262, .byte = 0x29 },
		{ .addr = 0x738263, .byte = 0x0c },
		{ .addr = 0x738264, .byte = 0x4c },
		{ .addr = 0x738265, .byte = 0xc0 },
		{ .addr = 0xdb290c, .byte = 0xb5 },
		{ .addr = 0xdb290d, .byte = 0x40 },
		{ .addr = 0x738266, .byte = 0xb4 },
		{ .addr = 0x738267, .byte = 0x0f }
};

static const SST_Transaction btst_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7570018, .data = 10508, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7570020, .data = 19648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14362892, .data = 46336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7570022, .data = 46095, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_2[] = {
		{ .addr = 0x2b32c6, .byte = 0x0d },
		{ .addr = 0x2b32c7, .byte = 0x15 },
		{ .addr = 0x2b32c8, .byte = 0xe3 },
		{ .addr = 0x2b32c9, .byte = 0xd2 },
		{ .addr = 0xb6431a, .byte = 0xad },
		{ .addr = 0xb6431b, .byte = 0x30 },
		{ .addr = 0x2b32ca, .byte = 0xf8 },
		{ .addr = 0x2b32cb, .byte = 0x4c }
};

static const SST_RamByte btst_final_ram_2[] = {
		{ .addr = 0x2b32c6, .byte = 0x0d },
		{ .addr = 0x2b32c7, .byte = 0x15 },
		{ .addr = 0x2b32c8, .byte = 0xe3 },
		{ .addr = 0x2b32c9, .byte = 0xd2 },
		{ .addr = 0xb6431a, .byte = 0xad },
		{ .addr = 0xb6431b, .byte = 0x30 },
		{ .addr = 0x2b32ca, .byte = 0xf8 },
		{ .addr = 0x2b32cb, .byte = 0x4c }
};

static const SST_Transaction btst_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11944730, .data = 48, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2831050, .data = 63564, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_3[] = {
		{ .addr = 0x3dade0, .byte = 0x0f },
		{ .addr = 0x3dade1, .byte = 0x11 },
		{ .addr = 0x3dade2, .byte = 0x31 },
		{ .addr = 0x3dade3, .byte = 0xf7 },
		{ .addr = 0x41a12e, .byte = 0x6b },
		{ .addr = 0x41a12f, .byte = 0x9a },
		{ .addr = 0x3dade4, .byte = 0xfc },
		{ .addr = 0x3dade5, .byte = 0x79 }
};

static const SST_RamByte btst_final_ram_3[] = {
		{ .addr = 0x3dade0, .byte = 0x0f },
		{ .addr = 0x3dade1, .byte = 0x11 },
		{ .addr = 0x3dade2, .byte = 0x31 },
		{ .addr = 0x3dade3, .byte = 0xf7 },
		{ .addr = 0x41a12e, .byte = 0x6b },
		{ .addr = 0x41a12f, .byte = 0x9a },
		{ .addr = 0x3dade4, .byte = 0xfc },
		{ .addr = 0x3dade5, .byte = 0x79 }
};

static const SST_Transaction btst_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4301102, .data = 27392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4042212, .data = 64633, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_4[] = {
		{ .addr = 0xe99090, .byte = 0x08 },
		{ .addr = 0xe99091, .byte = 0x33 },
		{ .addr = 0xe99092, .byte = 0x11 },
		{ .addr = 0xe99093, .byte = 0xf8 },
		{ .addr = 0xe99094, .byte = 0x64 },
		{ .addr = 0xe99095, .byte = 0xaa },
		{ .addr = 0xe99096, .byte = 0x92 },
		{ .addr = 0xe99097, .byte = 0x96 },
		{ .addr = 0x3181fc, .byte = 0x5b },
		{ .addr = 0x3181fd, .byte = 0x49 },
		{ .addr = 0xe99098, .byte = 0x2c },
		{ .addr = 0xe99099, .byte = 0x7d }
};

static const SST_RamByte btst_final_ram_4[] = {
		{ .addr = 0xe99090, .byte = 0x08 },
		{ .addr = 0xe99091, .byte = 0x33 },
		{ .addr = 0xe99092, .byte = 0x11 },
		{ .addr = 0xe99093, .byte = 0xf8 },
		{ .addr = 0xe99094, .byte = 0x64 },
		{ .addr = 0xe99095, .byte = 0xaa },
		{ .addr = 0xe99096, .byte = 0x92 },
		{ .addr = 0xe99097, .byte = 0x96 },
		{ .addr = 0x3181fc, .byte = 0x5b },
		{ .addr = 0x3181fd, .byte = 0x49 },
		{ .addr = 0xe99098, .byte = 0x2c },
		{ .addr = 0xe99099, .byte = 0x7d }
};

static const SST_Transaction btst_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15306900, .data = 25770, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15306902, .data = 37526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3244540, .data = 73, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15306904, .data = 11389, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_5[] = {
		{ .addr = 0x880db4, .byte = 0x08 },
		{ .addr = 0x880db5, .byte = 0x2f },
		{ .addr = 0x880db6, .byte = 0xfb },
		{ .addr = 0x880db7, .byte = 0xc6 },
		{ .addr = 0x880db8, .byte = 0xcb },
		{ .addr = 0x880db9, .byte = 0xc9 },
		{ .addr = 0x880dba, .byte = 0x34 },
		{ .addr = 0x880dbb, .byte = 0x24 },
		{ .addr = 0x662098, .byte = 0x7d },
		{ .addr = 0x662099, .byte = 0x99 },
		{ .addr = 0x880dbc, .byte = 0x3b },
		{ .addr = 0x880dbd, .byte = 0x62 }
};

static const SST_RamByte btst_final_ram_5[] = {
		{ .addr = 0x880db4, .byte = 0x08 },
		{ .addr = 0x880db5, .byte = 0x2f },
		{ .addr = 0x880db6, .byte = 0xfb },
		{ .addr = 0x880db7, .byte = 0xc6 },
		{ .addr = 0x880db8, .byte = 0xcb },
		{ .addr = 0x880db9, .byte = 0xc9 },
		{ .addr = 0x880dba, .byte = 0x34 },
		{ .addr = 0x880dbb, .byte = 0x24 },
		{ .addr = 0x662098, .byte = 0x7d },
		{ .addr = 0x662099, .byte = 0x99 },
		{ .addr = 0x880dbc, .byte = 0x3b },
		{ .addr = 0x880dbd, .byte = 0x62 }
};

static const SST_Transaction btst_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8916408, .data = 52169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8916410, .data = 13348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6693016, .data = 153, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8916412, .data = 15202, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_6[] = {
		{ .addr = 0xe890bc, .byte = 0x0f },
		{ .addr = 0xe890bd, .byte = 0x16 },
		{ .addr = 0xe890be, .byte = 0x3f },
		{ .addr = 0xe890bf, .byte = 0xe1 },
		{ .addr = 0x62b0a4, .byte = 0x38 },
		{ .addr = 0x62b0a5, .byte = 0xa0 },
		{ .addr = 0xe890c0, .byte = 0x69 },
		{ .addr = 0xe890c1, .byte = 0xc1 }
};

static const SST_RamByte btst_final_ram_6[] = {
		{ .addr = 0xe890bc, .byte = 0x0f },
		{ .addr = 0xe890bd, .byte = 0x16 },
		{ .addr = 0xe890be, .byte = 0x3f },
		{ .addr = 0xe890bf, .byte = 0xe1 },
		{ .addr = 0x62b0a4, .byte = 0x38 },
		{ .addr = 0x62b0a5, .byte = 0xa0 },
		{ .addr = 0xe890c0, .byte = 0x69 },
		{ .addr = 0xe890c1, .byte = 0xc1 }
};

static const SST_Transaction btst_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6467748, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15241408, .data = 27073, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_7[] = {
		{ .addr = 0x6da8da, .byte = 0x03 },
		{ .addr = 0x6da8db, .byte = 0x1b },
		{ .addr = 0x6da8dc, .byte = 0xe4 },
		{ .addr = 0x6da8dd, .byte = 0x41 },
		{ .addr = 0x74dbac, .byte = 0x70 },
		{ .addr = 0x74dbad, .byte = 0x7e },
		{ .addr = 0x6da8de, .byte = 0x0b },
		{ .addr = 0x6da8df, .byte = 0x6f }
};

static const SST_RamByte btst_final_ram_7[] = {
		{ .addr = 0x6da8da, .byte = 0x03 },
		{ .addr = 0x6da8db, .byte = 0x1b },
		{ .addr = 0x6da8dc, .byte = 0xe4 },
		{ .addr = 0x6da8dd, .byte = 0x41 },
		{ .addr = 0x74dbac, .byte = 0x70 },
		{ .addr = 0x74dbad, .byte = 0x7e },
		{ .addr = 0x6da8de, .byte = 0x0b },
		{ .addr = 0x6da8df, .byte = 0x6f }
};

static const SST_Transaction btst_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7658412, .data = 126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7186654, .data = 2927, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_8[] = {
		{ .addr = 0xf1670a, .byte = 0x03 },
		{ .addr = 0xf1670b, .byte = 0x3b },
		{ .addr = 0xf1670c, .byte = 0x8f },
		{ .addr = 0xf1670d, .byte = 0xe3 },
		{ .addr = 0xf1670e, .byte = 0x90 },
		{ .addr = 0xf1670f, .byte = 0x55 },
		{ .addr = 0xf27900, .byte = 0xb5 },
		{ .addr = 0xf27901, .byte = 0x63 },
		{ .addr = 0xf16710, .byte = 0x7d },
		{ .addr = 0xf16711, .byte = 0xf0 }
};

static const SST_RamByte btst_final_ram_8[] = {
		{ .addr = 0xf1670a, .byte = 0x03 },
		{ .addr = 0xf1670b, .byte = 0x3b },
		{ .addr = 0xf1670c, .byte = 0x8f },
		{ .addr = 0xf1670d, .byte = 0xe3 },
		{ .addr = 0xf1670e, .byte = 0x90 },
		{ .addr = 0xf1670f, .byte = 0x55 },
		{ .addr = 0xf27900, .byte = 0xb5 },
		{ .addr = 0xf27901, .byte = 0x63 },
		{ .addr = 0xf16710, .byte = 0x7d },
		{ .addr = 0xf16711, .byte = 0xf0 }
};

static const SST_Transaction btst_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15820558, .data = 36949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15890688, .data = 99, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15820560, .data = 32240, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_9[] = {
		{ .addr = 0xd1137a, .byte = 0x03 },
		{ .addr = 0xd1137b, .byte = 0x2f },
		{ .addr = 0xd1137c, .byte = 0x43 },
		{ .addr = 0xd1137d, .byte = 0x6c },
		{ .addr = 0xd1137e, .byte = 0x32 },
		{ .addr = 0xd1137f, .byte = 0xdc },
		{ .addr = 0xf788b6, .byte = 0x64 },
		{ .addr = 0xf788b7, .byte = 0xe3 },
		{ .addr = 0xd11380, .byte = 0x7f },
		{ .addr = 0xd11381, .byte = 0x0d }
};

static const SST_RamByte btst_final_ram_9[] = {
		{ .addr = 0xd1137a, .byte = 0x03 },
		{ .addr = 0xd1137b, .byte = 0x2f },
		{ .addr = 0xd1137c, .byte = 0x43 },
		{ .addr = 0xd1137d, .byte = 0x6c },
		{ .addr = 0xd1137e, .byte = 0x32 },
		{ .addr = 0xd1137f, .byte = 0xdc },
		{ .addr = 0xf788b6, .byte = 0x64 },
		{ .addr = 0xf788b7, .byte = 0xe3 },
		{ .addr = 0xd11380, .byte = 0x7f },
		{ .addr = 0xd11381, .byte = 0x0d }
};

static const SST_Transaction btst_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13702014, .data = 13020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16222390, .data = 25600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13702016, .data = 32525, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_10[] = {
		{ .addr = 0x305ef8, .byte = 0x0f },
		{ .addr = 0x305ef9, .byte = 0x20 },
		{ .addr = 0x305efa, .byte = 0x90 },
		{ .addr = 0x305efb, .byte = 0x91 },
		{ .addr = 0x5d1b14, .byte = 0x0a },
		{ .addr = 0x5d1b15, .byte = 0x64 },
		{ .addr = 0x305efc, .byte = 0x44 },
		{ .addr = 0x305efd, .byte = 0x0e }
};

static const SST_RamByte btst_final_ram_10[] = {
		{ .addr = 0x305ef8, .byte = 0x0f },
		{ .addr = 0x305ef9, .byte = 0x20 },
		{ .addr = 0x305efa, .byte = 0x90 },
		{ .addr = 0x305efb, .byte = 0x91 },
		{ .addr = 0x5d1b14, .byte = 0x0a },
		{ .addr = 0x5d1b15, .byte = 0x64 },
		{ .addr = 0x305efc, .byte = 0x44 },
		{ .addr = 0x305efd, .byte = 0x0e }
};

static const SST_Transaction btst_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6101780, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3170044, .data = 17422, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_11[] = {
		{ .addr = 0x0b3dfe, .byte = 0x0d },
		{ .addr = 0x0b3dff, .byte = 0x36 },
		{ .addr = 0x0b3e00, .byte = 0x50 },
		{ .addr = 0x0b3e01, .byte = 0xef },
		{ .addr = 0x0b3e02, .byte = 0xae },
		{ .addr = 0x0b3e03, .byte = 0x91 },
		{ .addr = 0x1408ba, .byte = 0x72 },
		{ .addr = 0x1408bb, .byte = 0xf0 },
		{ .addr = 0x0b3e04, .byte = 0x3c },
		{ .addr = 0x0b3e05, .byte = 0x95 }
};

static const SST_RamByte btst_final_ram_11[] = {
		{ .addr = 0x0b3dfe, .byte = 0x0d },
		{ .addr = 0x0b3dff, .byte = 0x36 },
		{ .addr = 0x0b3e00, .byte = 0x50 },
		{ .addr = 0x0b3e01, .byte = 0xef },
		{ .addr = 0x0b3e02, .byte = 0xae },
		{ .addr = 0x0b3e03, .byte = 0x91 },
		{ .addr = 0x1408ba, .byte = 0x72 },
		{ .addr = 0x1408bb, .byte = 0xf0 },
		{ .addr = 0x0b3e04, .byte = 0x3c },
		{ .addr = 0x0b3e05, .byte = 0x95 }
};

static const SST_Transaction btst_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 736770, .data = 44689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1312954, .data = 29184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 736772, .data = 15509, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_12[] = {
		{ .addr = 0xfb3432, .byte = 0x01 },
		{ .addr = 0xfb3433, .byte = 0x04 },
		{ .addr = 0xfb3434, .byte = 0x56 },
		{ .addr = 0xfb3435, .byte = 0xb3 },
		{ .addr = 0xfb3436, .byte = 0x22 },
		{ .addr = 0xfb3437, .byte = 0xe5 }
};

static const SST_RamByte btst_final_ram_12[] = {
		{ .addr = 0xfb3432, .byte = 0x01 },
		{ .addr = 0xfb3433, .byte = 0x04 },
		{ .addr = 0xfb3434, .byte = 0x56 },
		{ .addr = 0xfb3435, .byte = 0xb3 },
		{ .addr = 0xfb3436, .byte = 0x22 },
		{ .addr = 0xfb3437, .byte = 0xe5 }
};

static const SST_Transaction btst_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16462902, .data = 8933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte btst_initial_ram_13[] = {
		{ .addr = 0xa3bad0, .byte = 0x01 },
		{ .addr = 0xa3bad1, .byte = 0x15 },
		{ .addr = 0xa3bad2, .byte = 0x00 },
		{ .addr = 0xa3bad3, .byte = 0x38 },
		{ .addr = 0x40ddd2, .byte = 0xf8 },
		{ .addr = 0x40ddd3, .byte = 0x97 },
		{ .addr = 0xa3bad4, .byte = 0x5f },
		{ .addr = 0xa3bad5, .byte = 0xbe }
};

static const SST_RamByte btst_final_ram_13[] = {
		{ .addr = 0xa3bad0, .byte = 0x01 },
		{ .addr = 0xa3bad1, .byte = 0x15 },
		{ .addr = 0xa3bad2, .byte = 0x00 },
		{ .addr = 0xa3bad3, .byte = 0x38 },
		{ .addr = 0x40ddd2, .byte = 0xf8 },
		{ .addr = 0x40ddd3, .byte = 0x97 },
		{ .addr = 0xa3bad4, .byte = 0x5f },
		{ .addr = 0xa3bad5, .byte = 0xbe }
};

static const SST_Transaction btst_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4251090, .data = 63488, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10730196, .data = 24510, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_14[] = {
		{ .addr = 0x05a84a, .byte = 0x0d },
		{ .addr = 0x05a84b, .byte = 0x1e },
		{ .addr = 0x05a84c, .byte = 0x4b },
		{ .addr = 0x05a84d, .byte = 0x15 },
		{ .addr = 0x9f1cdc, .byte = 0x0c },
		{ .addr = 0x9f1cdd, .byte = 0xb4 },
		{ .addr = 0x05a84e, .byte = 0x4c },
		{ .addr = 0x05a84f, .byte = 0x61 }
};

static const SST_RamByte btst_final_ram_14[] = {
		{ .addr = 0x05a84a, .byte = 0x0d },
		{ .addr = 0x05a84b, .byte = 0x1e },
		{ .addr = 0x05a84c, .byte = 0x4b },
		{ .addr = 0x05a84d, .byte = 0x15 },
		{ .addr = 0x9f1cdc, .byte = 0x0c },
		{ .addr = 0x9f1cdd, .byte = 0xb4 },
		{ .addr = 0x05a84e, .byte = 0x4c },
		{ .addr = 0x05a84f, .byte = 0x61 }
};

static const SST_Transaction btst_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10427612, .data = 3072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 370766, .data = 19553, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_15[] = {
		{ .addr = 0x9a953c, .byte = 0x0b },
		{ .addr = 0x9a953d, .byte = 0x21 },
		{ .addr = 0x9a953e, .byte = 0x5a },
		{ .addr = 0x9a953f, .byte = 0xed },
		{ .addr = 0x3e70d4, .byte = 0x4f },
		{ .addr = 0x3e70d5, .byte = 0x8b },
		{ .addr = 0x9a9540, .byte = 0x87 },
		{ .addr = 0x9a9541, .byte = 0x18 }
};

static const SST_RamByte btst_final_ram_15[] = {
		{ .addr = 0x9a953c, .byte = 0x0b },
		{ .addr = 0x9a953d, .byte = 0x21 },
		{ .addr = 0x9a953e, .byte = 0x5a },
		{ .addr = 0x9a953f, .byte = 0xed },
		{ .addr = 0x3e70d4, .byte = 0x4f },
		{ .addr = 0x3e70d5, .byte = 0x8b },
		{ .addr = 0x9a9540, .byte = 0x87 },
		{ .addr = 0x9a9541, .byte = 0x18 }
};

static const SST_Transaction btst_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4092116, .data = 139, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10130752, .data = 34584, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t BTST_TEST_COUNT = 16;
static const SST_TestCase btst[] = {
	{
		.name = "000 BTST D5, (A6)+ 0b1e",
		.initial = {
			.regs = {
				2523688281, 1363789769, 1188369638, 2993727786, 279620357, 3573410688, 2527466190, 1477735605, 1530248351, 1247542487, 1509796885, 974589700, 2585694170, 2885404392, 4082466426, 13634230, 14137736, 9247, 5490290
			},
			.prefetch0 = 2846,
			.prefetch1 = 62156,
			.ram = btst_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2523688281, 1363789769, 1188369638, 2993727786, 279620357, 3573410688, 2527466190, 1477735605, 1530248351, 1247542487, 1509796885, 974589700, 2585694170, 2885404392, 4082466427, 13634230, 14137736, 9247, 5490292
			},
			.prefetch0 = 62156,
			.prefetch1 = 43675,
			.ram = btst_final_ram_0,
			.ram_len = 8,
		},
		.transactions = btst_transactions_0,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "001 BTST D3, (xxx).l 0739",
		.initial = {
			.regs = {
				746515687, 2900026243, 3662522579, 3779414235, 3317712913, 3131526088, 544829093, 3465450395, 1003752939, 261853236, 1455114031, 2807908720, 3644082441, 2427035915, 3267791013, 1367108, 9509234, 9475, 7570018
			},
			.prefetch0 = 1849,
			.prefetch1 = 24027,
			.ram = btst_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				746515687, 2900026243, 3662522579, 3779414235, 3317712913, 3131526088, 544829093, 3465450395, 1003752939, 261853236, 1455114031, 2807908720, 3644082441, 2427035915, 3267791013, 1367108, 9509234, 9479, 7570024
			},
			.prefetch0 = 19648,
			.prefetch1 = 46095,
			.ram = btst_final_ram_1,
			.ram_len = 12,
		},
		.transactions = btst_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 BTST D6, (A5) 0d15",
		.initial = {
			.regs = {
				2780241890, 1502881185, 3759601634, 2647144775, 301498504, 3145981067, 64215387, 1878319905, 323288512, 3241776083, 3452780269, 389199296, 574045853, 2343977755, 4096710188, 5794192, 13054772, 7, 2831050
			},
			.prefetch0 = 3349,
			.prefetch1 = 58322,
			.ram = btst_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2780241890, 1502881185, 3759601634, 2647144775, 301498504, 3145981067, 64215387, 1878319905, 323288512, 3241776083, 3452780269, 389199296, 574045853, 2343977755, 4096710188, 5794192, 13054772, 7, 2831052
			},
			.prefetch0 = 58322,
			.prefetch1 = 63564,
			.ram = btst_final_ram_2,
			.ram_len = 8,
		},
		.transactions = btst_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 BTST D7, (A1) 0f11",
		.initial = {
			.regs = {
				3501726063, 3920437759, 3046562790, 2938020160, 1644187764, 2623226884, 3287539943, 4216643833, 2136862562, 1514250542, 2770702571, 172686343, 371784132, 2983851199, 459554603, 5737630, 1460930, 9226, 4042212
			},
			.prefetch0 = 3857,
			.prefetch1 = 12791,
			.ram = btst_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3501726063, 3920437759, 3046562790, 2938020160, 1644187764, 2623226884, 3287539943, 4216643833, 2136862562, 1514250542, 2770702571, 172686343, 371784132, 2983851199, 459554603, 5737630, 1460930, 9226, 4042214
			},
			.prefetch0 = 12791,
			.prefetch1 = 64633,
			.ram = btst_final_ram_3,
			.ram_len = 8,
		},
		.transactions = btst_transactions_3,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "004 BTST #, (d8, A3, Xn) 0833",
		.initial = {
			.regs = {
				3398767699, 4283963173, 1674399549, 3711139380, 2315586234, 2449612844, 1136028812, 790631372, 3802874675, 3905293645, 888942227, 1932596679, 3612056530, 1891242916, 2511307715, 413690, 10829828, 42755, 15306900
			},
			.prefetch0 = 2099,
			.prefetch1 = 4600,
			.ram = btst_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3398767699, 4283963173, 1674399549, 3711139380, 2315586234, 2449612844, 1136028812, 790631372, 3802874675, 3905293645, 888942227, 1932596679, 3612056530, 1891242916, 2511307715, 413690, 10829828, 42755, 15306906
			},
			.prefetch0 = 37526,
			.prefetch1 = 11389,
			.ram = btst_final_ram_4,
			.ram_len = 12,
		},
		.transactions = btst_transactions_4,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "005 BTST #, (d16, A7) 082f",
		.initial = {
			.regs = {
				3679811851, 2770997890, 1753695634, 24408399, 569734823, 1547371517, 3365374455, 1378510843, 3392691024, 957738310, 2080454647, 232659449, 937363274, 787683194, 1103357546, 6706384, 6307680, 33301, 8916408
			},
			.prefetch0 = 2095,
			.prefetch1 = 64454,
			.ram = btst_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3679811851, 2770997890, 1753695634, 24408399, 569734823, 1547371517, 3365374455, 1378510843, 3392691024, 957738310, 2080454647, 232659449, 937363274, 787683194, 1103357546, 6706384, 6307680, 33301, 8916414
			},
			.prefetch0 = 13348,
			.prefetch1 = 15202,
			.ram = btst_final_ram_5,
			.ram_len = 12,
		},
		.transactions = btst_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 BTST D7, (A6) 0f16",
		.initial = {
			.regs = {
				3973572165, 3570610991, 3921297857, 4024203368, 3770577704, 2585823933, 2618344858, 3102149831, 701819354, 1791146626, 1926412765, 3416746756, 3524561526, 2507387709, 1063432357, 1352424, 12786988, 8469, 15241408
			},
			.prefetch0 = 3862,
			.prefetch1 = 16353,
			.ram = btst_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3973572165, 3570610991, 3921297857, 4024203368, 3770577704, 2585823933, 2618344858, 3102149831, 701819354, 1791146626, 1926412765, 3416746756, 3524561526, 2507387709, 1063432357, 1352424, 12786988, 8465, 15241410
			},
			.prefetch0 = 16353,
			.prefetch1 = 27073,
			.ram = btst_final_ram_6,
			.ram_len = 8,
		},
		.transactions = btst_transactions_6,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "007 BTST D1, (A3)+ 031b",
		.initial = {
			.regs = {
				153157706, 471577010, 3258299816, 3271824907, 864065773, 1569657873, 1911686668, 70328742, 4228069224, 3223291728, 1714790601, 1148509101, 1713141043, 3071092326, 3483264690, 12214490, 12074570, 8200, 7186654
			},
			.prefetch0 = 795,
			.prefetch1 = 58433,
			.ram = btst_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				153157706, 471577010, 3258299816, 3271824907, 864065773, 1569657873, 1911686668, 70328742, 4228069224, 3223291728, 1714790601, 1148509102, 1713141043, 3071092326, 3483264690, 12214490, 12074570, 8200, 7186656
			},
			.prefetch0 = 58433,
			.prefetch1 = 2927,
			.ram = btst_final_ram_7,
			.ram_len = 8,
		},
		.transactions = btst_transactions_7,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "008 BTST D1, (d8, PC, Xn) 033b",
		.initial = {
			.regs = {
				962913418, 593083455, 680937189, 3592105247, 886283908, 2014984039, 2010390392, 2866383530, 3741389330, 1882905976, 572160167, 1154897611, 2777714655, 1190972308, 1892486829, 12894834, 8038458, 1558, 15820558
			},
			.prefetch0 = 827,
			.prefetch1 = 36835,
			.ram = btst_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				962913418, 593083455, 680937189, 3592105247, 886283908, 2014984039, 2010390392, 2866383530, 3741389330, 1882905976, 572160167, 1154897611, 2777714655, 1190972308, 1892486829, 12894834, 8038458, 1558, 15820562
			},
			.prefetch0 = 36949,
			.prefetch1 = 32240,
			.ram = btst_final_ram_8,
			.ram_len = 10,
		},
		.transactions = btst_transactions_8,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "009 BTST D1, (d16, A7) 032f",
		.initial = {
			.regs = {
				1283464352, 3559522465, 2167732164, 235599683, 2058159340, 1353620965, 4054046750, 804535412, 2177262449, 3311953199, 323895739, 3663210027, 876810186, 3951552548, 2089657382, 8955150, 16205130, 42518, 13702014
			},
			.prefetch0 = 815,
			.prefetch1 = 17260,
			.ram = btst_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1283464352, 3559522465, 2167732164, 235599683, 2058159340, 1353620965, 4054046750, 804535412, 2177262449, 3311953199, 323895739, 3663210027, 876810186, 3951552548, 2089657382, 8955150, 16205130, 42518, 13702018
			},
			.prefetch0 = 13020,
			.prefetch1 = 32525,
			.ram = btst_final_ram_9,
			.ram_len = 10,
		},
		.transactions = btst_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 BTST D7, -(A0) 0f20",
		.initial = {
			.regs = {
				4281081375, 580765822, 2434193817, 3523223261, 1613333819, 576791438, 2407431373, 1556610515, 4099742486, 3178499071, 3081991871, 3755406940, 1454430475, 489380405, 1177152948, 1612982, 16150592, 41225, 3170044
			},
			.prefetch0 = 3872,
			.prefetch1 = 37009,
			.ram = btst_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4281081375, 580765822, 2434193817, 3523223261, 1613333819, 576791438, 2407431373, 1556610515, 4099742485, 3178499071, 3081991871, 3755406940, 1454430475, 489380405, 1177152948, 1612982, 16150592, 41229, 3170046
			},
			.prefetch0 = 37009,
			.prefetch1 = 17422,
			.ram = btst_final_ram_10,
			.ram_len = 8,
		},
		.transactions = btst_transactions_10,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "011 BTST D6, (d8, A6, Xn) 0d36",
		.initial = {
			.regs = {
				2344095179, 762995549, 4243546521, 3565794218, 1964002216, 1203875242, 3454078515, 1085885433, 2705801327, 1329001546, 2245433503, 634089952, 3540145734, 3944359248, 672422689, 4428964, 5302108, 10002, 736770
			},
			.prefetch0 = 3382,
			.prefetch1 = 20719,
			.ram = btst_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2344095179, 762995549, 4243546521, 3565794218, 1964002216, 1203875242, 3454078515, 1085885433, 2705801327, 1329001546, 2245433503, 634089952, 3540145734, 3944359248, 672422689, 4428964, 5302108, 10006, 736774
			},
			.prefetch0 = 44689,
			.prefetch1 = 15509,
			.ram = btst_final_ram_11,
			.ram_len = 10,
		},
		.transactions = btst_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 BTST D0, D4 0104",
		.initial = {
			.regs = {
				2858207075, 2477160127, 1900731606, 3232258784, 2569213540, 1956493102, 1211730523, 3770705278, 139584527, 1142871676, 809108782, 4186558696, 3300336731, 2931636017, 3028175246, 2525390, 16693126, 1041, 16462902
			},
			.prefetch0 = 260,
			.prefetch1 = 22195,
			.ram = btst_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2858207075, 2477160127, 1900731606, 3232258784, 2569213540, 1956493102, 1211730523, 3770705278, 139584527, 1142871676, 809108782, 4186558696, 3300336731, 2931636017, 3028175246, 2525390, 16693126, 1045, 16462904
			},
			.prefetch0 = 22195,
			.prefetch1 = 8933,
			.ram = btst_final_ram_12,
			.ram_len = 6,
		},
		.transactions = btst_transactions_12,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "013 BTST D0, (A5) 0115",
		.initial = {
			.regs = {
				3076185096, 598670443, 1692957951, 3458040588, 1860573010, 295937808, 1396909778, 3663454834, 2202430486, 2791483366, 3872293575, 474944086, 825261004, 2738937298, 226157668, 4119652, 6108608, 1818, 10730196
			},
			.prefetch0 = 277,
			.prefetch1 = 56,
			.ram = btst_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3076185096, 598670443, 1692957951, 3458040588, 1860573010, 295937808, 1396909778, 3663454834, 2202430486, 2791483366, 3872293575, 474944086, 825261004, 2738937298, 226157668, 4119652, 6108608, 1822, 10730198
			},
			.prefetch0 = 56,
			.prefetch1 = 24510,
			.ram = btst_final_ram_13,
			.ram_len = 8,
		},
		.transactions = btst_transactions_13,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "014 BTST D6, (A6)+ 0d1e",
		.initial = {
			.regs = {
				1946109801, 3557571751, 1276539456, 472978115, 3042181544, 2446239752, 2964928353, 750543160, 3178867166, 3598768317, 1907516522, 488339637, 4046605345, 2632612663, 1755258076, 7537630, 11299766, 9475, 370766
			},
			.prefetch0 = 3358,
			.prefetch1 = 19221,
			.ram = btst_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1946109801, 3557571751, 1276539456, 472978115, 3042181544, 2446239752, 2964928353, 750543160, 3178867166, 3598768317, 1907516522, 488339637, 4046605345, 2632612663, 1755258077, 7537630, 11299766, 9479, 370768
			},
			.prefetch0 = 19221,
			.prefetch1 = 19553,
			.ram = btst_final_ram_14,
			.ram_len = 8,
		},
		.transactions = btst_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 BTST D5, -(A1) 0b21",
		.initial = {
			.regs = {
				2229807744, 1983268484, 2492760962, 3542259800, 2075266513, 3560619669, 1078136132, 4167636722, 1064583294, 2621337814, 2392814968, 4261724025, 2270600922, 3114113367, 2541322393, 654442, 6929066, 34564, 10130752
			},
			.prefetch0 = 2849,
			.prefetch1 = 23277,
			.ram = btst_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2229807744, 1983268484, 2492760962, 3542259800, 2075266513, 3560619669, 1078136132, 4167636722, 1064583294, 2621337813, 2392814968, 4261724025, 2270600922, 3114113367, 2541322393, 654442, 6929066, 34564, 10130754
			},
			.prefetch0 = 23277,
			.prefetch1 = 34584,
			.ram = btst_final_ram_15,
			.ram_len = 8,
		},
		.transactions = btst_transactions_15,
		.transactions_len = 3,
		.lenght = 10,
	},
};

#endif /* RBT_BTST_H */