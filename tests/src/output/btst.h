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

static const SST_RamByte btst_initial_ram_16[] = {
		{ .addr = 0x3fb1be, .byte = 0x03 },
		{ .addr = 0x3fb1bf, .byte = 0x3c },
		{ .addr = 0x3fb1c0, .byte = 0x3f },
		{ .addr = 0x3fb1c1, .byte = 0xc2 },
		{ .addr = 0x3fb1c2, .byte = 0x09 },
		{ .addr = 0x3fb1c3, .byte = 0x22 },
		{ .addr = 0x3fb1c4, .byte = 0x0b },
		{ .addr = 0x3fb1c5, .byte = 0xb2 }
};

static const SST_RamByte btst_final_ram_16[] = {
		{ .addr = 0x3fb1be, .byte = 0x03 },
		{ .addr = 0x3fb1bf, .byte = 0x3c },
		{ .addr = 0x3fb1c0, .byte = 0x3f },
		{ .addr = 0x3fb1c1, .byte = 0xc2 },
		{ .addr = 0x3fb1c2, .byte = 0x09 },
		{ .addr = 0x3fb1c3, .byte = 0x22 },
		{ .addr = 0x3fb1c4, .byte = 0x0b },
		{ .addr = 0x3fb1c5, .byte = 0xb2 }
};

static const SST_Transaction btst_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4174274, .data = 2338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4174276, .data = 2994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte btst_initial_ram_17[] = {
		{ .addr = 0xc2cc78, .byte = 0x0f },
		{ .addr = 0xc2cc79, .byte = 0x02 },
		{ .addr = 0xc2cc7a, .byte = 0x1b },
		{ .addr = 0xc2cc7b, .byte = 0xe3 },
		{ .addr = 0xc2cc7c, .byte = 0x69 },
		{ .addr = 0xc2cc7d, .byte = 0x24 }
};

static const SST_RamByte btst_final_ram_17[] = {
		{ .addr = 0xc2cc78, .byte = 0x0f },
		{ .addr = 0xc2cc79, .byte = 0x02 },
		{ .addr = 0xc2cc7a, .byte = 0x1b },
		{ .addr = 0xc2cc7b, .byte = 0xe3 },
		{ .addr = 0xc2cc7c, .byte = 0x69 },
		{ .addr = 0xc2cc7d, .byte = 0x24 }
};

static const SST_Transaction btst_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12766332, .data = 26916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte btst_initial_ram_18[] = {
		{ .addr = 0x2ceb00, .byte = 0x01 },
		{ .addr = 0x2ceb01, .byte = 0x12 },
		{ .addr = 0x2ceb02, .byte = 0x30 },
		{ .addr = 0x2ceb03, .byte = 0x6d },
		{ .addr = 0xb6d678, .byte = 0x74 },
		{ .addr = 0xb6d679, .byte = 0x9b },
		{ .addr = 0x2ceb04, .byte = 0x63 },
		{ .addr = 0x2ceb05, .byte = 0x43 }
};

static const SST_RamByte btst_final_ram_18[] = {
		{ .addr = 0x2ceb00, .byte = 0x01 },
		{ .addr = 0x2ceb01, .byte = 0x12 },
		{ .addr = 0x2ceb02, .byte = 0x30 },
		{ .addr = 0x2ceb03, .byte = 0x6d },
		{ .addr = 0xb6d678, .byte = 0x74 },
		{ .addr = 0xb6d679, .byte = 0x9b },
		{ .addr = 0x2ceb04, .byte = 0x63 },
		{ .addr = 0x2ceb05, .byte = 0x43 }
};

static const SST_Transaction btst_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11982456, .data = 29696, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2943748, .data = 25411, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_19[] = {
		{ .addr = 0x9ba46e, .byte = 0x0f },
		{ .addr = 0x9ba46f, .byte = 0x1a },
		{ .addr = 0x9ba470, .byte = 0x6b },
		{ .addr = 0x9ba471, .byte = 0x6f },
		{ .addr = 0x069150, .byte = 0x40 },
		{ .addr = 0x069151, .byte = 0xd9 },
		{ .addr = 0x9ba472, .byte = 0x74 },
		{ .addr = 0x9ba473, .byte = 0xc1 }
};

static const SST_RamByte btst_final_ram_19[] = {
		{ .addr = 0x9ba46e, .byte = 0x0f },
		{ .addr = 0x9ba46f, .byte = 0x1a },
		{ .addr = 0x9ba470, .byte = 0x6b },
		{ .addr = 0x9ba471, .byte = 0x6f },
		{ .addr = 0x069150, .byte = 0x40 },
		{ .addr = 0x069151, .byte = 0xd9 },
		{ .addr = 0x9ba472, .byte = 0x74 },
		{ .addr = 0x9ba473, .byte = 0xc1 }
};

static const SST_Transaction btst_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 430416, .data = 217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10200178, .data = 29889, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_20[] = {
		{ .addr = 0x5ab712, .byte = 0x09 },
		{ .addr = 0x5ab713, .byte = 0x2e },
		{ .addr = 0x5ab714, .byte = 0xb3 },
		{ .addr = 0x5ab715, .byte = 0x96 },
		{ .addr = 0x5ab716, .byte = 0xe6 },
		{ .addr = 0x5ab717, .byte = 0xbe },
		{ .addr = 0x009d12, .byte = 0x5f },
		{ .addr = 0x009d13, .byte = 0xe4 },
		{ .addr = 0x5ab718, .byte = 0x26 },
		{ .addr = 0x5ab719, .byte = 0x8e }
};

static const SST_RamByte btst_final_ram_20[] = {
		{ .addr = 0x5ab712, .byte = 0x09 },
		{ .addr = 0x5ab713, .byte = 0x2e },
		{ .addr = 0x5ab714, .byte = 0xb3 },
		{ .addr = 0x5ab715, .byte = 0x96 },
		{ .addr = 0x5ab716, .byte = 0xe6 },
		{ .addr = 0x5ab717, .byte = 0xbe },
		{ .addr = 0x009d12, .byte = 0x5f },
		{ .addr = 0x009d13, .byte = 0xe4 },
		{ .addr = 0x5ab718, .byte = 0x26 },
		{ .addr = 0x5ab719, .byte = 0x8e }
};

static const SST_Transaction btst_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5945110, .data = 59070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 40210, .data = 24320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5945112, .data = 9870, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_21[] = {
		{ .addr = 0x109356, .byte = 0x01 },
		{ .addr = 0x109357, .byte = 0x15 },
		{ .addr = 0x109358, .byte = 0xdc },
		{ .addr = 0x109359, .byte = 0x67 },
		{ .addr = 0x43a79e, .byte = 0x6f },
		{ .addr = 0x43a79f, .byte = 0x06 },
		{ .addr = 0x10935a, .byte = 0xc9 },
		{ .addr = 0x10935b, .byte = 0x2b }
};

static const SST_RamByte btst_final_ram_21[] = {
		{ .addr = 0x109356, .byte = 0x01 },
		{ .addr = 0x109357, .byte = 0x15 },
		{ .addr = 0x109358, .byte = 0xdc },
		{ .addr = 0x109359, .byte = 0x67 },
		{ .addr = 0x43a79e, .byte = 0x6f },
		{ .addr = 0x43a79f, .byte = 0x06 },
		{ .addr = 0x10935a, .byte = 0xc9 },
		{ .addr = 0x10935b, .byte = 0x2b }
};

static const SST_Transaction btst_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4433822, .data = 6, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1086298, .data = 51499, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_22[] = {
		{ .addr = 0x391658, .byte = 0x0f },
		{ .addr = 0x391659, .byte = 0x06 },
		{ .addr = 0x39165a, .byte = 0x8f },
		{ .addr = 0x39165b, .byte = 0x39 },
		{ .addr = 0x39165c, .byte = 0xef },
		{ .addr = 0x39165d, .byte = 0x32 }
};

static const SST_RamByte btst_final_ram_22[] = {
		{ .addr = 0x391658, .byte = 0x0f },
		{ .addr = 0x391659, .byte = 0x06 },
		{ .addr = 0x39165a, .byte = 0x8f },
		{ .addr = 0x39165b, .byte = 0x39 },
		{ .addr = 0x39165c, .byte = 0xef },
		{ .addr = 0x39165d, .byte = 0x32 }
};

static const SST_Transaction btst_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3741276, .data = 61234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte btst_initial_ram_23[] = {
		{ .addr = 0xd17996, .byte = 0x0b },
		{ .addr = 0xd17997, .byte = 0x20 },
		{ .addr = 0xd17998, .byte = 0x8f },
		{ .addr = 0xd17999, .byte = 0xad },
		{ .addr = 0x8f0d28, .byte = 0xd5 },
		{ .addr = 0x8f0d29, .byte = 0x34 },
		{ .addr = 0xd1799a, .byte = 0x11 },
		{ .addr = 0xd1799b, .byte = 0x66 }
};

static const SST_RamByte btst_final_ram_23[] = {
		{ .addr = 0xd17996, .byte = 0x0b },
		{ .addr = 0xd17997, .byte = 0x20 },
		{ .addr = 0xd17998, .byte = 0x8f },
		{ .addr = 0xd17999, .byte = 0xad },
		{ .addr = 0x8f0d28, .byte = 0xd5 },
		{ .addr = 0x8f0d29, .byte = 0x34 },
		{ .addr = 0xd1799a, .byte = 0x11 },
		{ .addr = 0xd1799b, .byte = 0x66 }
};

static const SST_Transaction btst_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9375016, .data = 54528, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13728154, .data = 4454, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_24[] = {
		{ .addr = 0xac2894, .byte = 0x0b },
		{ .addr = 0xac2895, .byte = 0x21 },
		{ .addr = 0xac2896, .byte = 0x53 },
		{ .addr = 0xac2897, .byte = 0x6e },
		{ .addr = 0x778654, .byte = 0x75 },
		{ .addr = 0x778655, .byte = 0x9d },
		{ .addr = 0xac2898, .byte = 0x51 },
		{ .addr = 0xac2899, .byte = 0xfe }
};

static const SST_RamByte btst_final_ram_24[] = {
		{ .addr = 0xac2894, .byte = 0x0b },
		{ .addr = 0xac2895, .byte = 0x21 },
		{ .addr = 0xac2896, .byte = 0x53 },
		{ .addr = 0xac2897, .byte = 0x6e },
		{ .addr = 0x778654, .byte = 0x75 },
		{ .addr = 0x778655, .byte = 0x9d },
		{ .addr = 0xac2898, .byte = 0x51 },
		{ .addr = 0xac2899, .byte = 0xfe }
};

static const SST_Transaction btst_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7833172, .data = 29952, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11282584, .data = 20990, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_25[] = {
		{ .addr = 0x7c7cd8, .byte = 0x08 },
		{ .addr = 0x7c7cd9, .byte = 0x33 },
		{ .addr = 0x7c7cda, .byte = 0xac },
		{ .addr = 0x7c7cdb, .byte = 0x24 },
		{ .addr = 0x7c7cdc, .byte = 0xec },
		{ .addr = 0x7c7cdd, .byte = 0x9d },
		{ .addr = 0x7c7cde, .byte = 0x4a },
		{ .addr = 0x7c7cdf, .byte = 0x40 },
		{ .addr = 0xac05c8, .byte = 0xd7 },
		{ .addr = 0xac05c9, .byte = 0x78 },
		{ .addr = 0x7c7ce0, .byte = 0x2b },
		{ .addr = 0x7c7ce1, .byte = 0x01 }
};

static const SST_RamByte btst_final_ram_25[] = {
		{ .addr = 0x7c7cd8, .byte = 0x08 },
		{ .addr = 0x7c7cd9, .byte = 0x33 },
		{ .addr = 0x7c7cda, .byte = 0xac },
		{ .addr = 0x7c7cdb, .byte = 0x24 },
		{ .addr = 0x7c7cdc, .byte = 0xec },
		{ .addr = 0x7c7cdd, .byte = 0x9d },
		{ .addr = 0x7c7cde, .byte = 0x4a },
		{ .addr = 0x7c7cdf, .byte = 0x40 },
		{ .addr = 0xac05c8, .byte = 0xd7 },
		{ .addr = 0xac05c9, .byte = 0x78 },
		{ .addr = 0x7c7ce0, .byte = 0x2b },
		{ .addr = 0x7c7ce1, .byte = 0x01 }
};

static const SST_Transaction btst_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8158428, .data = 60573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8158430, .data = 19008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11273672, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8158432, .data = 11009, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_26[] = {
		{ .addr = 0xb86dca, .byte = 0x08 },
		{ .addr = 0xb86dcb, .byte = 0x28 },
		{ .addr = 0xb86dcc, .byte = 0xca },
		{ .addr = 0xb86dcd, .byte = 0x30 },
		{ .addr = 0xb86dce, .byte = 0x95 },
		{ .addr = 0xb86dcf, .byte = 0x87 },
		{ .addr = 0xb86dd0, .byte = 0x0b },
		{ .addr = 0xb86dd1, .byte = 0x9d },
		{ .addr = 0x153e38, .byte = 0x08 },
		{ .addr = 0x153e39, .byte = 0xea },
		{ .addr = 0xb86dd2, .byte = 0xad },
		{ .addr = 0xb86dd3, .byte = 0x6f }
};

static const SST_RamByte btst_final_ram_26[] = {
		{ .addr = 0xb86dca, .byte = 0x08 },
		{ .addr = 0xb86dcb, .byte = 0x28 },
		{ .addr = 0xb86dcc, .byte = 0xca },
		{ .addr = 0xb86dcd, .byte = 0x30 },
		{ .addr = 0xb86dce, .byte = 0x95 },
		{ .addr = 0xb86dcf, .byte = 0x87 },
		{ .addr = 0xb86dd0, .byte = 0x0b },
		{ .addr = 0xb86dd1, .byte = 0x9d },
		{ .addr = 0x153e38, .byte = 0x08 },
		{ .addr = 0x153e39, .byte = 0xea },
		{ .addr = 0xb86dd2, .byte = 0xad },
		{ .addr = 0xb86dd3, .byte = 0x6f }
};

static const SST_Transaction btst_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12086734, .data = 38279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12086736, .data = 2973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1392184, .data = 234, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12086738, .data = 44399, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_27[] = {
		{ .addr = 0xec4830, .byte = 0x01 },
		{ .addr = 0xec4831, .byte = 0x25 },
		{ .addr = 0xec4832, .byte = 0xbb },
		{ .addr = 0xec4833, .byte = 0x87 },
		{ .addr = 0xd15804, .byte = 0xa3 },
		{ .addr = 0xd15805, .byte = 0xa8 },
		{ .addr = 0xec4834, .byte = 0x5c },
		{ .addr = 0xec4835, .byte = 0x71 }
};

static const SST_RamByte btst_final_ram_27[] = {
		{ .addr = 0xec4830, .byte = 0x01 },
		{ .addr = 0xec4831, .byte = 0x25 },
		{ .addr = 0xec4832, .byte = 0xbb },
		{ .addr = 0xec4833, .byte = 0x87 },
		{ .addr = 0xd15804, .byte = 0xa3 },
		{ .addr = 0xd15805, .byte = 0xa8 },
		{ .addr = 0xec4834, .byte = 0x5c },
		{ .addr = 0xec4835, .byte = 0x71 }
};

static const SST_Transaction btst_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13719556, .data = 41728, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15484980, .data = 23665, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_28[] = {
		{ .addr = 0xfc6b20, .byte = 0x05 },
		{ .addr = 0xfc6b21, .byte = 0x1f },
		{ .addr = 0xfc6b22, .byte = 0x9d },
		{ .addr = 0xfc6b23, .byte = 0xaf },
		{ .addr = 0xe0a248, .byte = 0xc4 },
		{ .addr = 0xe0a249, .byte = 0xb8 },
		{ .addr = 0xfc6b24, .byte = 0x60 },
		{ .addr = 0xfc6b25, .byte = 0x9f }
};

static const SST_RamByte btst_final_ram_28[] = {
		{ .addr = 0xfc6b20, .byte = 0x05 },
		{ .addr = 0xfc6b21, .byte = 0x1f },
		{ .addr = 0xfc6b22, .byte = 0x9d },
		{ .addr = 0xfc6b23, .byte = 0xaf },
		{ .addr = 0xe0a248, .byte = 0xc4 },
		{ .addr = 0xe0a249, .byte = 0xb8 },
		{ .addr = 0xfc6b24, .byte = 0x60 },
		{ .addr = 0xfc6b25, .byte = 0x9f }
};

static const SST_Transaction btst_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14721608, .data = 50176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16542500, .data = 24735, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_29[] = {
		{ .addr = 0x730d52, .byte = 0x08 },
		{ .addr = 0x730d53, .byte = 0x2e },
		{ .addr = 0x730d54, .byte = 0x00 },
		{ .addr = 0x730d55, .byte = 0xdd },
		{ .addr = 0x730d56, .byte = 0x17 },
		{ .addr = 0x730d57, .byte = 0x58 },
		{ .addr = 0x730d58, .byte = 0x8d },
		{ .addr = 0x730d59, .byte = 0x93 },
		{ .addr = 0x1e6b5a, .byte = 0x0e },
		{ .addr = 0x1e6b5b, .byte = 0xc3 },
		{ .addr = 0x730d5a, .byte = 0xc9 },
		{ .addr = 0x730d5b, .byte = 0x36 }
};

static const SST_RamByte btst_final_ram_29[] = {
		{ .addr = 0x730d52, .byte = 0x08 },
		{ .addr = 0x730d53, .byte = 0x2e },
		{ .addr = 0x730d54, .byte = 0x00 },
		{ .addr = 0x730d55, .byte = 0xdd },
		{ .addr = 0x730d56, .byte = 0x17 },
		{ .addr = 0x730d57, .byte = 0x58 },
		{ .addr = 0x730d58, .byte = 0x8d },
		{ .addr = 0x730d59, .byte = 0x93 },
		{ .addr = 0x1e6b5a, .byte = 0x0e },
		{ .addr = 0x1e6b5b, .byte = 0xc3 },
		{ .addr = 0x730d5a, .byte = 0xc9 },
		{ .addr = 0x730d5b, .byte = 0x36 }
};

static const SST_Transaction btst_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7540054, .data = 5976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7540056, .data = 36243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1993562, .data = 195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7540058, .data = 51510, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_30[] = {
		{ .addr = 0x574e74, .byte = 0x08 },
		{ .addr = 0x574e75, .byte = 0x28 },
		{ .addr = 0x574e76, .byte = 0x04 },
		{ .addr = 0x574e77, .byte = 0x10 },
		{ .addr = 0x574e78, .byte = 0x85 },
		{ .addr = 0x574e79, .byte = 0x4f },
		{ .addr = 0x574e7a, .byte = 0x06 },
		{ .addr = 0x574e7b, .byte = 0x7e },
		{ .addr = 0xa47e3e, .byte = 0xaa },
		{ .addr = 0xa47e3f, .byte = 0x46 },
		{ .addr = 0x574e7c, .byte = 0x44 },
		{ .addr = 0x574e7d, .byte = 0x61 }
};

static const SST_RamByte btst_final_ram_30[] = {
		{ .addr = 0x574e74, .byte = 0x08 },
		{ .addr = 0x574e75, .byte = 0x28 },
		{ .addr = 0x574e76, .byte = 0x04 },
		{ .addr = 0x574e77, .byte = 0x10 },
		{ .addr = 0x574e78, .byte = 0x85 },
		{ .addr = 0x574e79, .byte = 0x4f },
		{ .addr = 0x574e7a, .byte = 0x06 },
		{ .addr = 0x574e7b, .byte = 0x7e },
		{ .addr = 0xa47e3e, .byte = 0xaa },
		{ .addr = 0xa47e3f, .byte = 0x46 },
		{ .addr = 0x574e7c, .byte = 0x44 },
		{ .addr = 0x574e7d, .byte = 0x61 }
};

static const SST_Transaction btst_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5721720, .data = 34127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5721722, .data = 1662, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10780222, .data = 43520, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5721724, .data = 17505, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte btst_initial_ram_31[] = {
		{ .addr = 0x2ecc96, .byte = 0x0b },
		{ .addr = 0x2ecc97, .byte = 0x22 },
		{ .addr = 0x2ecc98, .byte = 0x28 },
		{ .addr = 0x2ecc99, .byte = 0x8a },
		{ .addr = 0x067bd2, .byte = 0xc6 },
		{ .addr = 0x067bd3, .byte = 0xd3 },
		{ .addr = 0x2ecc9a, .byte = 0x5a },
		{ .addr = 0x2ecc9b, .byte = 0x21 }
};

static const SST_RamByte btst_final_ram_31[] = {
		{ .addr = 0x2ecc96, .byte = 0x0b },
		{ .addr = 0x2ecc97, .byte = 0x22 },
		{ .addr = 0x2ecc98, .byte = 0x28 },
		{ .addr = 0x2ecc99, .byte = 0x8a },
		{ .addr = 0x067bd2, .byte = 0xc6 },
		{ .addr = 0x067bd3, .byte = 0xd3 },
		{ .addr = 0x2ecc9a, .byte = 0x5a },
		{ .addr = 0x2ecc9b, .byte = 0x21 }
};

static const SST_Transaction btst_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 424914, .data = 211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3067034, .data = 23073, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 BTST D1, # 033c",
		.initial = {
			.regs = {
				1875872013, 2562784983, 3649521865, 1957034819, 3036415602, 2035823319, 872552001, 1010160429, 2351338580, 460579906, 1711426014, 1896523713, 120719876, 855970998, 426211470, 14996854, 1961064, 34320, 4174274
			},
			.prefetch0 = 828,
			.prefetch1 = 16322,
			.ram = btst_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1875872013, 2562784983, 3649521865, 1957034819, 3036415602, 2035823319, 872552001, 1010160429, 2351338580, 460579906, 1711426014, 1896523713, 120719876, 855970998, 426211470, 14996854, 1961064, 34320, 4174278
			},
			.prefetch0 = 2338,
			.prefetch1 = 2994,
			.ram = btst_final_ram_16,
			.ram_len = 8,
		},
		.transactions = btst_transactions_16,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "017 BTST D7, D2 0f02",
		.initial = {
			.regs = {
				422458957, 1818328400, 3332435117, 3426153549, 2841690274, 781435768, 665964465, 1895356864, 2814746959, 3465882478, 174225904, 1125142667, 370587085, 3341176832, 1422226507, 683198, 343930, 786, 12766332
			},
			.prefetch0 = 3842,
			.prefetch1 = 7139,
			.ram = btst_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				422458957, 1818328400, 3332435117, 3426153549, 2841690274, 781435768, 665964465, 1895356864, 2814746959, 3465882478, 174225904, 1125142667, 370587085, 3341176832, 1422226507, 683198, 343930, 786, 12766334
			},
			.prefetch0 = 7139,
			.prefetch1 = 26916,
			.ram = btst_final_ram_17,
			.ram_len = 6,
		},
		.transactions = btst_transactions_17,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "018 BTST D0, (A2) 0112",
		.initial = {
			.regs = {
				4018846795, 1009696412, 1856712400, 3099475862, 4195904058, 4263830920, 3877181415, 3068645129, 576649953, 128462140, 179754616, 3729939321, 2918678418, 246477575, 1803813871, 1609672, 3135712, 266, 2943748
			},
			.prefetch0 = 274,
			.prefetch1 = 12397,
			.ram = btst_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4018846795, 1009696412, 1856712400, 3099475862, 4195904058, 4263830920, 3877181415, 3068645129, 576649953, 128462140, 179754616, 3729939321, 2918678418, 246477575, 1803813871, 1609672, 3135712, 270, 2943750
			},
			.prefetch0 = 12397,
			.prefetch1 = 25411,
			.ram = btst_final_ram_18,
			.ram_len = 8,
		},
		.transactions = btst_transactions_18,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "019 BTST D7, (A2)+ 0f1a",
		.initial = {
			.regs = {
				3883819672, 689679293, 143119967, 2062420485, 1227750137, 848726520, 3290079924, 1471645048, 236975335, 1124123941, 3792081233, 2104124213, 3296806382, 4286774055, 2233267868, 967056, 13663818, 8219, 10200178
			},
			.prefetch0 = 3866,
			.prefetch1 = 27503,
			.ram = btst_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3883819672, 689679293, 143119967, 2062420485, 1227750137, 848726520, 3290079924, 1471645048, 236975335, 1124123941, 3792081234, 2104124213, 3296806382, 4286774055, 2233267868, 967056, 13663818, 8219, 10200180
			},
			.prefetch0 = 27503,
			.prefetch1 = 29889,
			.ram = btst_final_ram_19,
			.ram_len = 8,
		},
		.transactions = btst_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 BTST D4, (d16, A6) 092e",
		.initial = {
			.regs = {
				2876312346, 3838057543, 3077605997, 890881774, 1507470129, 205405466, 1286698797, 3712611448, 2409971492, 934429187, 2724333004, 68343962, 1262063412, 326262821, 3942705532, 6709974, 4838020, 42764, 5945110
			},
			.prefetch0 = 2350,
			.prefetch1 = 45974,
			.ram = btst_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2876312346, 3838057543, 3077605997, 890881774, 1507470129, 205405466, 1286698797, 3712611448, 2409971492, 934429187, 2724333004, 68343962, 1262063412, 326262821, 3942705532, 6709974, 4838020, 42760, 5945114
			},
			.prefetch0 = 59070,
			.prefetch1 = 9870,
			.ram = btst_final_ram_20,
			.ram_len = 10,
		},
		.transactions = btst_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 BTST D0, (A5) 0115",
		.initial = {
			.regs = {
				1727287078, 3679034775, 606272882, 2914292631, 2431027958, 519681686, 2368742003, 1273516947, 3215076831, 2639859939, 1404331976, 3260496498, 4019470022, 625190815, 2080072771, 9174964, 8128566, 32784, 1086298
			},
			.prefetch0 = 277,
			.prefetch1 = 56423,
			.ram = btst_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1727287078, 3679034775, 606272882, 2914292631, 2431027958, 519681686, 2368742003, 1273516947, 3215076831, 2639859939, 1404331976, 3260496498, 4019470022, 625190815, 2080072771, 9174964, 8128566, 32788, 1086300
			},
			.prefetch0 = 56423,
			.prefetch1 = 51499,
			.ram = btst_final_ram_21,
			.ram_len = 8,
		},
		.transactions = btst_transactions_21,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "022 BTST D7, D6 0f06",
		.initial = {
			.regs = {
				1840878578, 1028526825, 2553776913, 1372720479, 3824607680, 3541968544, 1322154548, 629508297, 4182677858, 1919742470, 3283083939, 3967805554, 53287136, 1296355690, 669320799, 1810378, 10278694, 41488, 3741276
			},
			.prefetch0 = 3846,
			.prefetch1 = 36665,
			.ram = btst_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1840878578, 1028526825, 2553776913, 1372720479, 3824607680, 3541968544, 1322154548, 629508297, 4182677858, 1919742470, 3283083939, 3967805554, 53287136, 1296355690, 669320799, 1810378, 10278694, 41488, 3741278
			},
			.prefetch0 = 36665,
			.prefetch1 = 61234,
			.ram = btst_final_ram_22,
			.ram_len = 6,
		},
		.transactions = btst_transactions_22,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "023 BTST D5, -(A0) 0b20",
		.initial = {
			.regs = {
				2170396935, 480120956, 909503528, 304678314, 35153046, 2959240415, 634441592, 2923752457, 3280932137, 1760277406, 194547978, 4214919613, 1816834049, 1306887252, 1415394083, 8092064, 6986918, 33025, 13728154
			},
			.prefetch0 = 2848,
			.prefetch1 = 36781,
			.ram = btst_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2170396935, 480120956, 909503528, 304678314, 35153046, 2959240415, 634441592, 2923752457, 3280932136, 1760277406, 194547978, 4214919613, 1816834049, 1306887252, 1415394083, 8092064, 6986918, 33025, 13728156
			},
			.prefetch0 = 36781,
			.prefetch1 = 4454,
			.ram = btst_final_ram_23,
			.ram_len = 8,
		},
		.transactions = btst_transactions_23,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "024 BTST D5, -(A1) 0b21",
		.initial = {
			.regs = {
				2372235810, 4107451332, 1537717662, 3633884551, 782763092, 4031923826, 1286351369, 2264422548, 1677942255, 3665266261, 3392427895, 1947594670, 3405986896, 2750262252, 11382369, 7771440, 13030980, 269, 11282584
			},
			.prefetch0 = 2849,
			.prefetch1 = 21358,
			.ram = btst_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2372235810, 4107451332, 1537717662, 3633884551, 782763092, 4031923826, 1286351369, 2264422548, 1677942255, 3665266260, 3392427895, 1947594670, 3405986896, 2750262252, 11382369, 7771440, 13030980, 265, 11282586
			},
			.prefetch0 = 21358,
			.prefetch1 = 20990,
			.ram = btst_final_ram_24,
			.ram_len = 8,
		},
		.transactions = btst_transactions_24,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "025 BTST #, (d8, A3, Xn) 0833",
		.initial = {
			.regs = {
				3694921094, 3479086220, 822748216, 1807672067, 1417073919, 308858485, 1851139663, 219294164, 1246779103, 3671428923, 527602192, 65077906, 1707926611, 151827296, 2932540314, 5011834, 2734684, 9479, 8158428
			},
			.prefetch0 = 2099,
			.prefetch1 = 44068,
			.ram = btst_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3694921094, 3479086220, 822748216, 1807672067, 1417073919, 308858485, 1851139663, 219294164, 1246779103, 3671428923, 527602192, 65077906, 1707926611, 151827296, 2932540314, 5011834, 2734684, 9475, 8158434
			},
			.prefetch0 = 19008,
			.prefetch1 = 11009,
			.ram = btst_final_ram_25,
			.ram_len = 12,
		},
		.transactions = btst_transactions_25,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "026 BTST #, (d16, A0) 0828",
		.initial = {
			.regs = {
				468259949, 4251070869, 718123710, 590040210, 1610901984, 79064727, 1505489759, 947066614, 3390417074, 517852483, 1541165989, 2365021582, 657187322, 937350406, 3373084832, 10845350, 14611550, 797, 12086734
			},
			.prefetch0 = 2088,
			.prefetch1 = 51760,
			.ram = btst_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				468259949, 4251070869, 718123710, 590040210, 1610901984, 79064727, 1505489759, 947066614, 3390417074, 517852483, 1541165989, 2365021582, 657187322, 937350406, 3373084832, 10845350, 14611550, 797, 12086740
			},
			.prefetch0 = 2973,
			.prefetch1 = 44399,
			.ram = btst_final_ram_26,
			.ram_len = 12,
		},
		.transactions = btst_transactions_26,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "027 BTST D0, -(A5) 0125",
		.initial = {
			.regs = {
				3214329478, 987535849, 617740839, 3236561457, 1740921292, 3496505199, 1356030171, 1467557862, 2936647500, 712562646, 3826913179, 4116305056, 63129075, 953243653, 4183660987, 15788020, 12475036, 1300, 15484980
			},
			.prefetch0 = 293,
			.prefetch1 = 48007,
			.ram = btst_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3214329478, 987535849, 617740839, 3236561457, 1740921292, 3496505199, 1356030171, 1467557862, 2936647500, 712562646, 3826913179, 4116305056, 63129075, 953243652, 4183660987, 15788020, 12475036, 1300, 15484982
			},
			.prefetch0 = 48007,
			.prefetch1 = 23665,
			.ram = btst_final_ram_27,
			.ram_len = 8,
		},
		.transactions = btst_transactions_27,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "028 BTST D2, (A7)+ 051f",
		.initial = {
			.regs = {
				2465086029, 4048183749, 2057887625, 1361661347, 217271190, 3530316657, 2763945440, 2710891999, 3877413426, 1235763656, 299758490, 817168209, 1294149563, 3768523141, 315897105, 16655328, 14721608, 42516, 16542500
			},
			.prefetch0 = 1311,
			.prefetch1 = 40367,
			.ram = btst_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2465086029, 4048183749, 2057887625, 1361661347, 217271190, 3530316657, 2763945440, 2710891999, 3877413426, 1235763656, 299758490, 817168209, 1294149563, 3768523141, 315897105, 16655328, 14721610, 42516, 16542502
			},
			.prefetch0 = 40367,
			.prefetch1 = 24735,
			.ram = btst_final_ram_28,
			.ram_len = 8,
		},
		.transactions = btst_transactions_28,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "029 BTST #, (d16, A6) 082e",
		.initial = {
			.regs = {
				394412860, 4009733751, 3527090285, 2893260841, 3715604820, 2605630176, 3676746456, 184506645, 2048017711, 4240161837, 1948432651, 3500268152, 2611923350, 2038126225, 1713263619, 3170118, 8654054, 42513, 7540054
			},
			.prefetch0 = 2094,
			.prefetch1 = 221,
			.ram = btst_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				394412860, 4009733751, 3527090285, 2893260841, 3715604820, 2605630176, 3676746456, 184506645, 2048017711, 4240161837, 1948432651, 3500268152, 2611923350, 2038126225, 1713263619, 3170118, 8654054, 42517, 7540060
			},
			.prefetch0 = 36243,
			.prefetch1 = 51510,
			.ram = btst_final_ram_29,
			.ram_len = 12,
		},
		.transactions = btst_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 BTST #, (d16, A0) 0828",
		.initial = {
			.regs = {
				2349861420, 3725047471, 3325211443, 3125312613, 287108932, 983638878, 2560958982, 2081990044, 2191849711, 2582363460, 2705714218, 388119207, 1140881947, 2140219368, 680873987, 10603176, 11625774, 34060, 5721720
			},
			.prefetch0 = 2088,
			.prefetch1 = 1040,
			.ram = btst_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2349861420, 3725047471, 3325211443, 3125312613, 287108932, 983638878, 2560958982, 2081990044, 2191849711, 2582363460, 2705714218, 388119207, 1140881947, 2140219368, 680873987, 10603176, 11625774, 34060, 5721726
			},
			.prefetch0 = 1662,
			.prefetch1 = 17505,
			.ram = btst_final_ram_30,
			.ram_len = 12,
		},
		.transactions = btst_transactions_30,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "031 BTST D5, -(A2) 0b22",
		.initial = {
			.regs = {
				647373203, 866419351, 630054887, 2566326231, 1373502678, 2310799242, 1276469974, 4020127326, 3757263160, 541083948, 2818997204, 3293400442, 2255000359, 1519618131, 4193512796, 13224916, 10298372, 8732, 3067034
			},
			.prefetch0 = 2850,
			.prefetch1 = 10378,
			.ram = btst_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				647373203, 866419351, 630054887, 2566326231, 1373502678, 2310799242, 1276469974, 4020127326, 3757263160, 541083948, 2818997203, 3293400442, 2255000359, 1519618131, 4193512796, 13224916, 10298372, 8732, 3067036
			},
			.prefetch0 = 10378,
			.prefetch1 = 23073,
			.ram = btst_final_ram_31,
			.ram_len = 8,
		},
		.transactions = btst_transactions_31,
		.transactions_len = 3,
		.lenght = 10,
	},
};

#endif /* RBT_BTST_H */