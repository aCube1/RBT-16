#ifndef RBT_MOVEML_H
#define RBT_MOVEML_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte moveml_initial_ram_0[] = {
		{ .addr = 0xdb0482, .byte = 0x4c },
		{ .addr = 0xdb0483, .byte = 0xd0 },
		{ .addr = 0xdb0484, .byte = 0x38 },
		{ .addr = 0xdb0485, .byte = 0x13 },
		{ .addr = 0xdb0486, .byte = 0xc4 },
		{ .addr = 0xdb0487, .byte = 0xd9 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0xd9 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0x9ad912, .byte = 0x67 },
		{ .addr = 0x9ad913, .byte = 0xc3 },
		{ .addr = 0x9ad914, .byte = 0x71 },
		{ .addr = 0x9ad915, .byte = 0x5e }
};

static const SST_RamByte moveml_final_ram_0[] = {
		{ .addr = 0xdb0482, .byte = 0x4c },
		{ .addr = 0xdb0483, .byte = 0xd0 },
		{ .addr = 0xdb0484, .byte = 0x38 },
		{ .addr = 0xdb0485, .byte = 0x13 },
		{ .addr = 0xdb0486, .byte = 0xc4 },
		{ .addr = 0xdb0487, .byte = 0xd9 },
		{ .addr = 0x317b32, .byte = 0x04 },
		{ .addr = 0x317b33, .byte = 0x88 },
		{ .addr = 0x317b2e, .byte = 0x23 },
		{ .addr = 0x317b2f, .byte = 0x1f },
		{ .addr = 0x317b30, .byte = 0x00 },
		{ .addr = 0x317b31, .byte = 0xdb },
		{ .addr = 0x317b2c, .byte = 0x4c },
		{ .addr = 0x317b2d, .byte = 0xd0 },
		{ .addr = 0x317b2a, .byte = 0x74 },
		{ .addr = 0x317b2b, .byte = 0x49 },
		{ .addr = 0x317b26, .byte = 0x4c },
		{ .addr = 0x317b27, .byte = 0xd5 },
		{ .addr = 0x317b28, .byte = 0x4c },
		{ .addr = 0x317b29, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0xd9 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0x9ad912, .byte = 0x67 },
		{ .addr = 0x9ad913, .byte = 0xc3 },
		{ .addr = 0x9ad914, .byte = 0x71 },
		{ .addr = 0x9ad915, .byte = 0x5e }
};

static const SST_Transaction moveml_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14353542, .data = 50393, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16610376, .data = 9333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3242802, .data = 1160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3242798, .data = 8991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3242800, .data = 219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3242796, .data = 19664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3242794, .data = 29769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3242790, .data = 19669, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3242792, .data = 19709, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 55570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10148114, .data = 26563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10148116, .data = 29022, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_1[] = {
		{ .addr = 0xe637bc, .byte = 0x4c },
		{ .addr = 0xe637bd, .byte = 0xf4 },
		{ .addr = 0xe637be, .byte = 0x2d },
		{ .addr = 0xe637bf, .byte = 0x9c },
		{ .addr = 0xe637c0, .byte = 0x5a },
		{ .addr = 0xe637c1, .byte = 0xf3 },
		{ .addr = 0xe637c2, .byte = 0x55 },
		{ .addr = 0xe637c3, .byte = 0xf2 },
		{ .addr = 0xb6fde6, .byte = 0x73 },
		{ .addr = 0xb6fde7, .byte = 0xcf },
		{ .addr = 0xb6fde8, .byte = 0xfa },
		{ .addr = 0xb6fde9, .byte = 0xe1 },
		{ .addr = 0xb6fdea, .byte = 0x04 },
		{ .addr = 0xb6fdeb, .byte = 0x2d },
		{ .addr = 0xb6fdec, .byte = 0x9a },
		{ .addr = 0xb6fded, .byte = 0x8a },
		{ .addr = 0xb6fdee, .byte = 0x93 },
		{ .addr = 0xb6fdef, .byte = 0x3a },
		{ .addr = 0xb6fdf0, .byte = 0xc0 },
		{ .addr = 0xb6fdf1, .byte = 0xb9 },
		{ .addr = 0xb6fdf2, .byte = 0x52 },
		{ .addr = 0xb6fdf3, .byte = 0x90 },
		{ .addr = 0xb6fdf4, .byte = 0x58 },
		{ .addr = 0xb6fdf5, .byte = 0x7a },
		{ .addr = 0xb6fdf6, .byte = 0x05 },
		{ .addr = 0xb6fdf7, .byte = 0x1d },
		{ .addr = 0xb6fdf8, .byte = 0x32 },
		{ .addr = 0xb6fdf9, .byte = 0x73 },
		{ .addr = 0xb6fdfa, .byte = 0x60 },
		{ .addr = 0xb6fdfb, .byte = 0x8f },
		{ .addr = 0xb6fdfc, .byte = 0xab },
		{ .addr = 0xb6fdfd, .byte = 0x0f },
		{ .addr = 0xb6fdfe, .byte = 0xc2 },
		{ .addr = 0xb6fdff, .byte = 0xdd },
		{ .addr = 0xb6fe00, .byte = 0x43 },
		{ .addr = 0xb6fe01, .byte = 0x53 },
		{ .addr = 0xb6fe02, .byte = 0xc9 },
		{ .addr = 0xb6fe03, .byte = 0x05 },
		{ .addr = 0xb6fe04, .byte = 0x9e },
		{ .addr = 0xb6fe05, .byte = 0x26 },
		{ .addr = 0xb6fe06, .byte = 0x39 },
		{ .addr = 0xb6fe07, .byte = 0x38 },
		{ .addr = 0xe637c4, .byte = 0x88 },
		{ .addr = 0xe637c5, .byte = 0x1e }
};

static const SST_RamByte moveml_final_ram_1[] = {
		{ .addr = 0xe637bc, .byte = 0x4c },
		{ .addr = 0xe637bd, .byte = 0xf4 },
		{ .addr = 0xe637be, .byte = 0x2d },
		{ .addr = 0xe637bf, .byte = 0x9c },
		{ .addr = 0xe637c0, .byte = 0x5a },
		{ .addr = 0xe637c1, .byte = 0xf3 },
		{ .addr = 0xe637c2, .byte = 0x55 },
		{ .addr = 0xe637c3, .byte = 0xf2 },
		{ .addr = 0xb6fde6, .byte = 0x73 },
		{ .addr = 0xb6fde7, .byte = 0xcf },
		{ .addr = 0xb6fde8, .byte = 0xfa },
		{ .addr = 0xb6fde9, .byte = 0xe1 },
		{ .addr = 0xb6fdea, .byte = 0x04 },
		{ .addr = 0xb6fdeb, .byte = 0x2d },
		{ .addr = 0xb6fdec, .byte = 0x9a },
		{ .addr = 0xb6fded, .byte = 0x8a },
		{ .addr = 0xb6fdee, .byte = 0x93 },
		{ .addr = 0xb6fdef, .byte = 0x3a },
		{ .addr = 0xb6fdf0, .byte = 0xc0 },
		{ .addr = 0xb6fdf1, .byte = 0xb9 },
		{ .addr = 0xb6fdf2, .byte = 0x52 },
		{ .addr = 0xb6fdf3, .byte = 0x90 },
		{ .addr = 0xb6fdf4, .byte = 0x58 },
		{ .addr = 0xb6fdf5, .byte = 0x7a },
		{ .addr = 0xb6fdf6, .byte = 0x05 },
		{ .addr = 0xb6fdf7, .byte = 0x1d },
		{ .addr = 0xb6fdf8, .byte = 0x32 },
		{ .addr = 0xb6fdf9, .byte = 0x73 },
		{ .addr = 0xb6fdfa, .byte = 0x60 },
		{ .addr = 0xb6fdfb, .byte = 0x8f },
		{ .addr = 0xb6fdfc, .byte = 0xab },
		{ .addr = 0xb6fdfd, .byte = 0x0f },
		{ .addr = 0xb6fdfe, .byte = 0xc2 },
		{ .addr = 0xb6fdff, .byte = 0xdd },
		{ .addr = 0xb6fe00, .byte = 0x43 },
		{ .addr = 0xb6fe01, .byte = 0x53 },
		{ .addr = 0xb6fe02, .byte = 0xc9 },
		{ .addr = 0xb6fe03, .byte = 0x05 },
		{ .addr = 0xb6fe04, .byte = 0x9e },
		{ .addr = 0xb6fe05, .byte = 0x26 },
		{ .addr = 0xb6fe06, .byte = 0x39 },
		{ .addr = 0xb6fe07, .byte = 0x38 },
		{ .addr = 0xe637c4, .byte = 0x88 },
		{ .addr = 0xe637c5, .byte = 0x1e }
};

static const SST_Transaction moveml_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15087552, .data = 23283, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15087554, .data = 22002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992550, .data = 29647, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992552, .data = 64225, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992554, .data = 1069, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992556, .data = 39562, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992558, .data = 37690, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992560, .data = 49337, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992562, .data = 21136, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992564, .data = 22650, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992566, .data = 1309, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992568, .data = 12915, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992570, .data = 24719, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992572, .data = 43791, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992574, .data = 49885, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992576, .data = 17235, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992578, .data = 51461, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992580, .data = 40486, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11992582, .data = 14648, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15087556, .data = 34846, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_2[] = {
		{ .addr = 0xe13702, .byte = 0x4c },
		{ .addr = 0xe13703, .byte = 0xf4 },
		{ .addr = 0xe13704, .byte = 0xaf },
		{ .addr = 0xe13705, .byte = 0xac },
		{ .addr = 0xe13706, .byte = 0x5d },
		{ .addr = 0xe13707, .byte = 0xdd },
		{ .addr = 0xe13708, .byte = 0x76 },
		{ .addr = 0xe13709, .byte = 0xe6 },
		{ .addr = 0x00000c, .byte = 0x41 },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x17 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0xa017de, .byte = 0x85 },
		{ .addr = 0xa017df, .byte = 0x50 },
		{ .addr = 0xa017e0, .byte = 0x8c },
		{ .addr = 0xa017e1, .byte = 0x67 }
};

static const SST_RamByte moveml_final_ram_2[] = {
		{ .addr = 0xe13702, .byte = 0x4c },
		{ .addr = 0xe13703, .byte = 0xf4 },
		{ .addr = 0xe13704, .byte = 0xaf },
		{ .addr = 0xe13705, .byte = 0xac },
		{ .addr = 0xe13706, .byte = 0x5d },
		{ .addr = 0xe13707, .byte = 0xdd },
		{ .addr = 0xe13708, .byte = 0x76 },
		{ .addr = 0xe13709, .byte = 0xe6 },
		{ .addr = 0xf90198, .byte = 0x37 },
		{ .addr = 0xf90199, .byte = 0x0a },
		{ .addr = 0xf90194, .byte = 0x04 },
		{ .addr = 0xf90195, .byte = 0x1a },
		{ .addr = 0xf90196, .byte = 0x00 },
		{ .addr = 0xf90197, .byte = 0xe1 },
		{ .addr = 0xf90192, .byte = 0x4c },
		{ .addr = 0xf90193, .byte = 0xf4 },
		{ .addr = 0xf90190, .byte = 0x4d },
		{ .addr = 0xf90191, .byte = 0x43 },
		{ .addr = 0xf9018c, .byte = 0x4c },
		{ .addr = 0xf9018d, .byte = 0xf1 },
		{ .addr = 0xf9018e, .byte = 0xf2 },
		{ .addr = 0xf9018f, .byte = 0x9b },
		{ .addr = 0x00000c, .byte = 0x41 },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x17 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0xa017de, .byte = 0x85 },
		{ .addr = 0xa017df, .byte = 0x50 },
		{ .addr = 0xa017e0, .byte = 0x8c },
		{ .addr = 0xa017e1, .byte = 0x67 }
};

static const SST_Transaction moveml_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14759686, .data = 24029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14759688, .data = 30438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10177858, .data = 7658, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16318872, .data = 14090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16318868, .data = 1050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16318870, .data = 225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16318866, .data = 19700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16318864, .data = 19779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16318860, .data = 19697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16318862, .data = 62107, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10491870, .data = 34128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10491872, .data = 35943, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_3[] = {
		{ .addr = 0x466a72, .byte = 0x48 },
		{ .addr = 0x466a73, .byte = 0xd0 },
		{ .addr = 0x466a74, .byte = 0x10 },
		{ .addr = 0x466a75, .byte = 0xbf },
		{ .addr = 0x466a76, .byte = 0x88 },
		{ .addr = 0x466a77, .byte = 0x29 },
		{ .addr = 0x00000c, .byte = 0x90 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0xe8f7c0, .byte = 0x29 },
		{ .addr = 0xe8f7c1, .byte = 0xe5 },
		{ .addr = 0xe8f7c2, .byte = 0x44 },
		{ .addr = 0xe8f7c3, .byte = 0xe2 }
};

static const SST_RamByte moveml_final_ram_3[] = {
		{ .addr = 0x466a72, .byte = 0x48 },
		{ .addr = 0x466a73, .byte = 0xd0 },
		{ .addr = 0x466a74, .byte = 0x10 },
		{ .addr = 0x466a75, .byte = 0xbf },
		{ .addr = 0x466a76, .byte = 0x88 },
		{ .addr = 0x466a77, .byte = 0x29 },
		{ .addr = 0xdae4ba, .byte = 0x6a },
		{ .addr = 0xdae4bb, .byte = 0x78 },
		{ .addr = 0xdae4b6, .byte = 0x27 },
		{ .addr = 0xdae4b7, .byte = 0x1c },
		{ .addr = 0xdae4b8, .byte = 0x00 },
		{ .addr = 0xdae4b9, .byte = 0x46 },
		{ .addr = 0xdae4b4, .byte = 0x48 },
		{ .addr = 0xdae4b5, .byte = 0xd0 },
		{ .addr = 0xdae4b2, .byte = 0x10 },
		{ .addr = 0xdae4b3, .byte = 0x27 },
		{ .addr = 0xdae4ae, .byte = 0x48 },
		{ .addr = 0xdae4af, .byte = 0xc5 },
		{ .addr = 0xdae4b0, .byte = 0xc0 },
		{ .addr = 0xdae4b1, .byte = 0xe8 },
		{ .addr = 0x00000c, .byte = 0x90 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0xe8f7c0, .byte = 0x29 },
		{ .addr = 0xe8f7c1, .byte = 0xe5 },
		{ .addr = 0xe8f7c2, .byte = 0x44 },
		{ .addr = 0xe8f7c3, .byte = 0xe2 }
};

static const SST_Transaction moveml_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4614774, .data = 34857, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15208486, .data = 1184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14345402, .data = 27256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14345398, .data = 10012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14345400, .data = 70, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14345396, .data = 18640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14345394, .data = 4135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14345390, .data = 18629, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14345392, .data = 49384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15267776, .data = 10725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15267778, .data = 17634, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_4[] = {
		{ .addr = 0xc34a90, .byte = 0x4c },
		{ .addr = 0xc34a91, .byte = 0xdd },
		{ .addr = 0xc34a92, .byte = 0x2a },
		{ .addr = 0xc34a93, .byte = 0xdf },
		{ .addr = 0xc34a94, .byte = 0xd9 },
		{ .addr = 0xc34a95, .byte = 0xe5 },
		{ .addr = 0x1687aa, .byte = 0x5b },
		{ .addr = 0x1687ab, .byte = 0x58 },
		{ .addr = 0x1687ac, .byte = 0x04 },
		{ .addr = 0x1687ad, .byte = 0x00 },
		{ .addr = 0x1687ae, .byte = 0x97 },
		{ .addr = 0x1687af, .byte = 0x6e },
		{ .addr = 0x1687b0, .byte = 0x51 },
		{ .addr = 0x1687b1, .byte = 0xc7 },
		{ .addr = 0x1687b2, .byte = 0x58 },
		{ .addr = 0x1687b3, .byte = 0xf7 },
		{ .addr = 0x1687b4, .byte = 0x64 },
		{ .addr = 0x1687b5, .byte = 0x3e },
		{ .addr = 0x1687b6, .byte = 0x8c },
		{ .addr = 0x1687b7, .byte = 0x79 },
		{ .addr = 0x1687b8, .byte = 0x4d },
		{ .addr = 0x1687b9, .byte = 0xfe },
		{ .addr = 0x1687ba, .byte = 0xdf },
		{ .addr = 0x1687bb, .byte = 0xb8 },
		{ .addr = 0x1687bc, .byte = 0xf4 },
		{ .addr = 0x1687bd, .byte = 0x6f },
		{ .addr = 0x1687be, .byte = 0xeb },
		{ .addr = 0x1687bf, .byte = 0x81 },
		{ .addr = 0x1687c0, .byte = 0x86 },
		{ .addr = 0x1687c1, .byte = 0x3c },
		{ .addr = 0x1687c2, .byte = 0xd9 },
		{ .addr = 0x1687c3, .byte = 0x13 },
		{ .addr = 0x1687c4, .byte = 0x25 },
		{ .addr = 0x1687c5, .byte = 0xda },
		{ .addr = 0x1687c6, .byte = 0x9a },
		{ .addr = 0x1687c7, .byte = 0xa4 },
		{ .addr = 0x1687c8, .byte = 0x22 },
		{ .addr = 0x1687c9, .byte = 0x7a },
		{ .addr = 0x1687ca, .byte = 0x11 },
		{ .addr = 0x1687cb, .byte = 0xa2 },
		{ .addr = 0x1687cc, .byte = 0x2d },
		{ .addr = 0x1687cd, .byte = 0xbe },
		{ .addr = 0x1687ce, .byte = 0xaa },
		{ .addr = 0x1687cf, .byte = 0xc8 },
		{ .addr = 0x1687d0, .byte = 0xb2 },
		{ .addr = 0x1687d1, .byte = 0xce },
		{ .addr = 0x1687d2, .byte = 0x22 },
		{ .addr = 0x1687d3, .byte = 0x66 },
		{ .addr = 0xc34a96, .byte = 0xee },
		{ .addr = 0xc34a97, .byte = 0x4b }
};

static const SST_RamByte moveml_final_ram_4[] = {
		{ .addr = 0xc34a90, .byte = 0x4c },
		{ .addr = 0xc34a91, .byte = 0xdd },
		{ .addr = 0xc34a92, .byte = 0x2a },
		{ .addr = 0xc34a93, .byte = 0xdf },
		{ .addr = 0xc34a94, .byte = 0xd9 },
		{ .addr = 0xc34a95, .byte = 0xe5 },
		{ .addr = 0x1687aa, .byte = 0x5b },
		{ .addr = 0x1687ab, .byte = 0x58 },
		{ .addr = 0x1687ac, .byte = 0x04 },
		{ .addr = 0x1687ad, .byte = 0x00 },
		{ .addr = 0x1687ae, .byte = 0x97 },
		{ .addr = 0x1687af, .byte = 0x6e },
		{ .addr = 0x1687b0, .byte = 0x51 },
		{ .addr = 0x1687b1, .byte = 0xc7 },
		{ .addr = 0x1687b2, .byte = 0x58 },
		{ .addr = 0x1687b3, .byte = 0xf7 },
		{ .addr = 0x1687b4, .byte = 0x64 },
		{ .addr = 0x1687b5, .byte = 0x3e },
		{ .addr = 0x1687b6, .byte = 0x8c },
		{ .addr = 0x1687b7, .byte = 0x79 },
		{ .addr = 0x1687b8, .byte = 0x4d },
		{ .addr = 0x1687b9, .byte = 0xfe },
		{ .addr = 0x1687ba, .byte = 0xdf },
		{ .addr = 0x1687bb, .byte = 0xb8 },
		{ .addr = 0x1687bc, .byte = 0xf4 },
		{ .addr = 0x1687bd, .byte = 0x6f },
		{ .addr = 0x1687be, .byte = 0xeb },
		{ .addr = 0x1687bf, .byte = 0x81 },
		{ .addr = 0x1687c0, .byte = 0x86 },
		{ .addr = 0x1687c1, .byte = 0x3c },
		{ .addr = 0x1687c2, .byte = 0xd9 },
		{ .addr = 0x1687c3, .byte = 0x13 },
		{ .addr = 0x1687c4, .byte = 0x25 },
		{ .addr = 0x1687c5, .byte = 0xda },
		{ .addr = 0x1687c6, .byte = 0x9a },
		{ .addr = 0x1687c7, .byte = 0xa4 },
		{ .addr = 0x1687c8, .byte = 0x22 },
		{ .addr = 0x1687c9, .byte = 0x7a },
		{ .addr = 0x1687ca, .byte = 0x11 },
		{ .addr = 0x1687cb, .byte = 0xa2 },
		{ .addr = 0x1687cc, .byte = 0x2d },
		{ .addr = 0x1687cd, .byte = 0xbe },
		{ .addr = 0x1687ce, .byte = 0xaa },
		{ .addr = 0x1687cf, .byte = 0xc8 },
		{ .addr = 0x1687d0, .byte = 0xb2 },
		{ .addr = 0x1687d1, .byte = 0xce },
		{ .addr = 0x1687d2, .byte = 0x22 },
		{ .addr = 0x1687d3, .byte = 0x66 },
		{ .addr = 0xc34a96, .byte = 0xee },
		{ .addr = 0xc34a97, .byte = 0x4b }
};

static const SST_Transaction moveml_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12798612, .data = 55781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476522, .data = 23384, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476524, .data = 1024, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476526, .data = 38766, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476528, .data = 20935, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476530, .data = 22775, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476532, .data = 25662, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476534, .data = 35961, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476536, .data = 19966, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476538, .data = 57272, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476540, .data = 62575, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476542, .data = 60289, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476544, .data = 34364, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476546, .data = 55571, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476548, .data = 9690, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476550, .data = 39588, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476552, .data = 8826, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476554, .data = 4514, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476556, .data = 11710, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476558, .data = 43720, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476560, .data = 45774, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1476562, .data = 8806, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12798614, .data = 61003, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_5[] = {
		{ .addr = 0x537e98, .byte = 0x48 },
		{ .addr = 0x537e99, .byte = 0xed },
		{ .addr = 0x537e9a, .byte = 0x51 },
		{ .addr = 0x537e9b, .byte = 0x19 },
		{ .addr = 0x537e9c, .byte = 0x72 },
		{ .addr = 0x537e9d, .byte = 0x15 },
		{ .addr = 0x537e9e, .byte = 0xf9 },
		{ .addr = 0x537e9f, .byte = 0x74 },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0xee },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0x9aee00, .byte = 0x37 },
		{ .addr = 0x9aee01, .byte = 0x30 },
		{ .addr = 0x9aee02, .byte = 0xdb },
		{ .addr = 0x9aee03, .byte = 0x2e }
};

static const SST_RamByte moveml_final_ram_5[] = {
		{ .addr = 0x537e98, .byte = 0x48 },
		{ .addr = 0x537e99, .byte = 0xed },
		{ .addr = 0x537e9a, .byte = 0x51 },
		{ .addr = 0x537e9b, .byte = 0x19 },
		{ .addr = 0x537e9c, .byte = 0x72 },
		{ .addr = 0x537e9d, .byte = 0x15 },
		{ .addr = 0x537e9e, .byte = 0xf9 },
		{ .addr = 0x537e9f, .byte = 0x74 },
		{ .addr = 0x9fdb42, .byte = 0x7e },
		{ .addr = 0x9fdb43, .byte = 0xa0 },
		{ .addr = 0x9fdb3e, .byte = 0x25 },
		{ .addr = 0x9fdb3f, .byte = 0x08 },
		{ .addr = 0x9fdb40, .byte = 0x00 },
		{ .addr = 0x9fdb41, .byte = 0x53 },
		{ .addr = 0x9fdb3c, .byte = 0x48 },
		{ .addr = 0x9fdb3d, .byte = 0xed },
		{ .addr = 0x9fdb3a, .byte = 0x1a },
		{ .addr = 0x9fdb3b, .byte = 0xe1 },
		{ .addr = 0x9fdb36, .byte = 0x48 },
		{ .addr = 0x9fdb37, .byte = 0xe5 },
		{ .addr = 0x9fdb38, .byte = 0x0b },
		{ .addr = 0x9fdb39, .byte = 0x9a },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0xee },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0x9aee00, .byte = 0x37 },
		{ .addr = 0x9aee01, .byte = 0x30 },
		{ .addr = 0x9aee02, .byte = 0xdb },
		{ .addr = 0x9aee03, .byte = 0x2e }
};

static const SST_Transaction moveml_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5471900, .data = 29205, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5471902, .data = 63860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10099424, .data = 34710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10476354, .data = 32416, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10476350, .data = 9480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10476352, .data = 83, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10476348, .data = 18669, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10476346, .data = 6881, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10476342, .data = 18661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10476344, .data = 2970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10153472, .data = 14128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10153474, .data = 56110, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_6[] = {
		{ .addr = 0x57e4d4, .byte = 0x48 },
		{ .addr = 0x57e4d5, .byte = 0xee },
		{ .addr = 0x57e4d6, .byte = 0x15 },
		{ .addr = 0x57e4d7, .byte = 0x50 },
		{ .addr = 0x57e4d8, .byte = 0x7b },
		{ .addr = 0x57e4d9, .byte = 0x0a },
		{ .addr = 0x57e4da, .byte = 0xf2 },
		{ .addr = 0x57e4db, .byte = 0xf7 },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xac },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0xac3a0e, .byte = 0x2e },
		{ .addr = 0xac3a0f, .byte = 0xbc },
		{ .addr = 0xac3a10, .byte = 0x82 },
		{ .addr = 0xac3a11, .byte = 0x2e }
};

static const SST_RamByte moveml_final_ram_6[] = {
		{ .addr = 0x57e4d4, .byte = 0x48 },
		{ .addr = 0x57e4d5, .byte = 0xee },
		{ .addr = 0x57e4d6, .byte = 0x15 },
		{ .addr = 0x57e4d7, .byte = 0x50 },
		{ .addr = 0x57e4d8, .byte = 0x7b },
		{ .addr = 0x57e4d9, .byte = 0x0a },
		{ .addr = 0x57e4da, .byte = 0xf2 },
		{ .addr = 0x57e4db, .byte = 0xf7 },
		{ .addr = 0xc24312, .byte = 0xe4 },
		{ .addr = 0xc24313, .byte = 0xdc },
		{ .addr = 0xc2430e, .byte = 0xa3 },
		{ .addr = 0xc2430f, .byte = 0x1e },
		{ .addr = 0xc24310, .byte = 0x00 },
		{ .addr = 0xc24311, .byte = 0x57 },
		{ .addr = 0xc2430c, .byte = 0x48 },
		{ .addr = 0xc2430d, .byte = 0xee },
		{ .addr = 0xc2430a, .byte = 0x3d },
		{ .addr = 0xc2430b, .byte = 0x05 },
		{ .addr = 0xc24306, .byte = 0x48 },
		{ .addr = 0xc24307, .byte = 0xe5 },
		{ .addr = 0xc24308, .byte = 0xbd },
		{ .addr = 0xc24309, .byte = 0xa7 },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xac },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0xac3a0e, .byte = 0x2e },
		{ .addr = 0xac3a0f, .byte = 0xbc },
		{ .addr = 0xac3a10, .byte = 0x82 },
		{ .addr = 0xac3a11, .byte = 0x2e }
};

static const SST_Transaction moveml_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5760216, .data = 31498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5760218, .data = 62199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10960132, .data = 31053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12731154, .data = 58588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12731150, .data = 41758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12731152, .data = 87, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12731148, .data = 18670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12731146, .data = 15621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12731142, .data = 18661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12731144, .data = 48551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11287054, .data = 11964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11287056, .data = 33326, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_7[] = {
		{ .addr = 0xa5750c, .byte = 0x4c },
		{ .addr = 0xa5750d, .byte = 0xea },
		{ .addr = 0xa5750e, .byte = 0x6c },
		{ .addr = 0xa5750f, .byte = 0xef },
		{ .addr = 0xa57510, .byte = 0xf5 },
		{ .addr = 0xa57511, .byte = 0xaa },
		{ .addr = 0xa57512, .byte = 0x1e },
		{ .addr = 0xa57513, .byte = 0x6e },
		{ .addr = 0x6e8b2e, .byte = 0x40 },
		{ .addr = 0x6e8b2f, .byte = 0x72 },
		{ .addr = 0x6e8b30, .byte = 0x03 },
		{ .addr = 0x6e8b31, .byte = 0x24 },
		{ .addr = 0x6e8b32, .byte = 0x32 },
		{ .addr = 0x6e8b33, .byte = 0xd7 },
		{ .addr = 0x6e8b34, .byte = 0x11 },
		{ .addr = 0x6e8b35, .byte = 0xf2 },
		{ .addr = 0x6e8b36, .byte = 0x1e },
		{ .addr = 0x6e8b37, .byte = 0xdc },
		{ .addr = 0x6e8b38, .byte = 0x26 },
		{ .addr = 0x6e8b39, .byte = 0xc2 },
		{ .addr = 0x6e8b3a, .byte = 0x61 },
		{ .addr = 0x6e8b3b, .byte = 0x8a },
		{ .addr = 0x6e8b3c, .byte = 0x58 },
		{ .addr = 0x6e8b3d, .byte = 0x6a },
		{ .addr = 0x6e8b3e, .byte = 0x47 },
		{ .addr = 0x6e8b3f, .byte = 0x1f },
		{ .addr = 0x6e8b40, .byte = 0x21 },
		{ .addr = 0x6e8b41, .byte = 0x1c },
		{ .addr = 0x6e8b42, .byte = 0x58 },
		{ .addr = 0x6e8b43, .byte = 0x43 },
		{ .addr = 0x6e8b44, .byte = 0x5e },
		{ .addr = 0x6e8b45, .byte = 0x12 },
		{ .addr = 0x6e8b46, .byte = 0x8d },
		{ .addr = 0x6e8b47, .byte = 0x76 },
		{ .addr = 0x6e8b48, .byte = 0x29 },
		{ .addr = 0x6e8b49, .byte = 0xfd },
		{ .addr = 0x6e8b4a, .byte = 0xcb },
		{ .addr = 0x6e8b4b, .byte = 0x10 },
		{ .addr = 0x6e8b4c, .byte = 0xd0 },
		{ .addr = 0x6e8b4d, .byte = 0x0b },
		{ .addr = 0x6e8b4e, .byte = 0x24 },
		{ .addr = 0x6e8b4f, .byte = 0x53 },
		{ .addr = 0x6e8b50, .byte = 0xed },
		{ .addr = 0x6e8b51, .byte = 0x0f },
		{ .addr = 0x6e8b52, .byte = 0x07 },
		{ .addr = 0x6e8b53, .byte = 0xcd },
		{ .addr = 0x6e8b54, .byte = 0x5e },
		{ .addr = 0x6e8b55, .byte = 0x59 },
		{ .addr = 0x6e8b56, .byte = 0x7d },
		{ .addr = 0x6e8b57, .byte = 0x27 },
		{ .addr = 0x6e8b58, .byte = 0xa9 },
		{ .addr = 0x6e8b59, .byte = 0x0e },
		{ .addr = 0x6e8b5a, .byte = 0xc8 },
		{ .addr = 0x6e8b5b, .byte = 0x82 },
		{ .addr = 0xa57514, .byte = 0x0b },
		{ .addr = 0xa57515, .byte = 0x15 }
};

static const SST_RamByte moveml_final_ram_7[] = {
		{ .addr = 0xa5750c, .byte = 0x4c },
		{ .addr = 0xa5750d, .byte = 0xea },
		{ .addr = 0xa5750e, .byte = 0x6c },
		{ .addr = 0xa5750f, .byte = 0xef },
		{ .addr = 0xa57510, .byte = 0xf5 },
		{ .addr = 0xa57511, .byte = 0xaa },
		{ .addr = 0xa57512, .byte = 0x1e },
		{ .addr = 0xa57513, .byte = 0x6e },
		{ .addr = 0x6e8b2e, .byte = 0x40 },
		{ .addr = 0x6e8b2f, .byte = 0x72 },
		{ .addr = 0x6e8b30, .byte = 0x03 },
		{ .addr = 0x6e8b31, .byte = 0x24 },
		{ .addr = 0x6e8b32, .byte = 0x32 },
		{ .addr = 0x6e8b33, .byte = 0xd7 },
		{ .addr = 0x6e8b34, .byte = 0x11 },
		{ .addr = 0x6e8b35, .byte = 0xf2 },
		{ .addr = 0x6e8b36, .byte = 0x1e },
		{ .addr = 0x6e8b37, .byte = 0xdc },
		{ .addr = 0x6e8b38, .byte = 0x26 },
		{ .addr = 0x6e8b39, .byte = 0xc2 },
		{ .addr = 0x6e8b3a, .byte = 0x61 },
		{ .addr = 0x6e8b3b, .byte = 0x8a },
		{ .addr = 0x6e8b3c, .byte = 0x58 },
		{ .addr = 0x6e8b3d, .byte = 0x6a },
		{ .addr = 0x6e8b3e, .byte = 0x47 },
		{ .addr = 0x6e8b3f, .byte = 0x1f },
		{ .addr = 0x6e8b40, .byte = 0x21 },
		{ .addr = 0x6e8b41, .byte = 0x1c },
		{ .addr = 0x6e8b42, .byte = 0x58 },
		{ .addr = 0x6e8b43, .byte = 0x43 },
		{ .addr = 0x6e8b44, .byte = 0x5e },
		{ .addr = 0x6e8b45, .byte = 0x12 },
		{ .addr = 0x6e8b46, .byte = 0x8d },
		{ .addr = 0x6e8b47, .byte = 0x76 },
		{ .addr = 0x6e8b48, .byte = 0x29 },
		{ .addr = 0x6e8b49, .byte = 0xfd },
		{ .addr = 0x6e8b4a, .byte = 0xcb },
		{ .addr = 0x6e8b4b, .byte = 0x10 },
		{ .addr = 0x6e8b4c, .byte = 0xd0 },
		{ .addr = 0x6e8b4d, .byte = 0x0b },
		{ .addr = 0x6e8b4e, .byte = 0x24 },
		{ .addr = 0x6e8b4f, .byte = 0x53 },
		{ .addr = 0x6e8b50, .byte = 0xed },
		{ .addr = 0x6e8b51, .byte = 0x0f },
		{ .addr = 0x6e8b52, .byte = 0x07 },
		{ .addr = 0x6e8b53, .byte = 0xcd },
		{ .addr = 0x6e8b54, .byte = 0x5e },
		{ .addr = 0x6e8b55, .byte = 0x59 },
		{ .addr = 0x6e8b56, .byte = 0x7d },
		{ .addr = 0x6e8b57, .byte = 0x27 },
		{ .addr = 0x6e8b58, .byte = 0xa9 },
		{ .addr = 0x6e8b59, .byte = 0x0e },
		{ .addr = 0x6e8b5a, .byte = 0xc8 },
		{ .addr = 0x6e8b5b, .byte = 0x82 },
		{ .addr = 0xa57514, .byte = 0x0b },
		{ .addr = 0xa57515, .byte = 0x15 }
};

static const SST_Transaction moveml_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10843408, .data = 62890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10843410, .data = 7790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244590, .data = 16498, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244592, .data = 804, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244594, .data = 13015, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244596, .data = 4594, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244598, .data = 7900, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244600, .data = 9922, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244602, .data = 24970, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244604, .data = 22634, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244606, .data = 18207, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244608, .data = 8476, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244610, .data = 22595, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244612, .data = 24082, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244614, .data = 36214, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244616, .data = 10749, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244618, .data = 51984, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244620, .data = 53259, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244622, .data = 9299, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244624, .data = 60687, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244626, .data = 1997, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244628, .data = 24153, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244630, .data = 32039, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244632, .data = 43278, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7244634, .data = 51330, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10843412, .data = 2837, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_8[] = {
		{ .addr = 0x48415c, .byte = 0x48 },
		{ .addr = 0x48415d, .byte = 0xf9 },
		{ .addr = 0x48415e, .byte = 0x1d },
		{ .addr = 0x48415f, .byte = 0x76 },
		{ .addr = 0x484160, .byte = 0x30 },
		{ .addr = 0x484161, .byte = 0x37 },
		{ .addr = 0x484162, .byte = 0x53 },
		{ .addr = 0x484163, .byte = 0x44 },
		{ .addr = 0x484164, .byte = 0x40 },
		{ .addr = 0x484165, .byte = 0x53 },
		{ .addr = 0x484166, .byte = 0x4a },
		{ .addr = 0x484167, .byte = 0x1a }
};

static const SST_RamByte moveml_final_ram_8[] = {
		{ .addr = 0x48415c, .byte = 0x48 },
		{ .addr = 0x48415d, .byte = 0xf9 },
		{ .addr = 0x48415e, .byte = 0x1d },
		{ .addr = 0x48415f, .byte = 0x76 },
		{ .addr = 0x484160, .byte = 0x30 },
		{ .addr = 0x484161, .byte = 0x37 },
		{ .addr = 0x484162, .byte = 0x53 },
		{ .addr = 0x484163, .byte = 0x44 },
		{ .addr = 0x484164, .byte = 0x40 },
		{ .addr = 0x484165, .byte = 0x53 },
		{ .addr = 0x375344, .byte = 0x9a },
		{ .addr = 0x375345, .byte = 0x01 },
		{ .addr = 0x375346, .byte = 0x77 },
		{ .addr = 0x375347, .byte = 0x25 },
		{ .addr = 0x375348, .byte = 0xd5 },
		{ .addr = 0x375349, .byte = 0x06 },
		{ .addr = 0x37534a, .byte = 0x27 },
		{ .addr = 0x37534b, .byte = 0xf7 },
		{ .addr = 0x37534c, .byte = 0x8d },
		{ .addr = 0x37534d, .byte = 0xe8 },
		{ .addr = 0x37534e, .byte = 0xef },
		{ .addr = 0x37534f, .byte = 0x57 },
		{ .addr = 0x375350, .byte = 0x44 },
		{ .addr = 0x375351, .byte = 0xd2 },
		{ .addr = 0x375352, .byte = 0xaf },
		{ .addr = 0x375353, .byte = 0x4b },
		{ .addr = 0x375354, .byte = 0x6a },
		{ .addr = 0x375355, .byte = 0x0d },
		{ .addr = 0x375356, .byte = 0xfc },
		{ .addr = 0x375357, .byte = 0x54 },
		{ .addr = 0x375358, .byte = 0xe0 },
		{ .addr = 0x375359, .byte = 0x21 },
		{ .addr = 0x37535a, .byte = 0xba },
		{ .addr = 0x37535b, .byte = 0xce },
		{ .addr = 0x37535c, .byte = 0xd4 },
		{ .addr = 0x37535d, .byte = 0x55 },
		{ .addr = 0x37535e, .byte = 0xac },
		{ .addr = 0x37535f, .byte = 0xdc },
		{ .addr = 0x375360, .byte = 0x89 },
		{ .addr = 0x375361, .byte = 0xf2 },
		{ .addr = 0x375362, .byte = 0x0a },
		{ .addr = 0x375363, .byte = 0x93 },
		{ .addr = 0x375364, .byte = 0x02 },
		{ .addr = 0x375365, .byte = 0xde },
		{ .addr = 0x375366, .byte = 0x4e },
		{ .addr = 0x375367, .byte = 0xd1 },
		{ .addr = 0x484166, .byte = 0x4a },
		{ .addr = 0x484167, .byte = 0x1a }
};

static const SST_Transaction moveml_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4735328, .data = 12343, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4735330, .data = 21316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4735332, .data = 16467, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625796, .data = 39425, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625798, .data = 30501, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625800, .data = 54534, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625802, .data = 10231, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625804, .data = 36328, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625806, .data = 61271, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625808, .data = 17618, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625810, .data = 44875, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625812, .data = 27149, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625814, .data = 64596, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625816, .data = 57377, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625818, .data = 47822, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625820, .data = 54357, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625822, .data = 44252, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625824, .data = 35314, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625826, .data = 2707, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625828, .data = 734, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3625830, .data = 20177, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4735334, .data = 18970, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_9[] = {
		{ .addr = 0xb37884, .byte = 0x48 },
		{ .addr = 0xb37885, .byte = 0xd0 },
		{ .addr = 0xb37886, .byte = 0x9f },
		{ .addr = 0xb37887, .byte = 0xa7 },
		{ .addr = 0xb37888, .byte = 0x59 },
		{ .addr = 0xb37889, .byte = 0x8e },
		{ .addr = 0xb3788a, .byte = 0x4c },
		{ .addr = 0xb3788b, .byte = 0x93 }
};

static const SST_RamByte moveml_final_ram_9[] = {
		{ .addr = 0xb37884, .byte = 0x48 },
		{ .addr = 0xb37885, .byte = 0xd0 },
		{ .addr = 0xb37886, .byte = 0x9f },
		{ .addr = 0xb37887, .byte = 0xa7 },
		{ .addr = 0xb37888, .byte = 0x59 },
		{ .addr = 0xb37889, .byte = 0x8e },
		{ .addr = 0xf453ec, .byte = 0xfb },
		{ .addr = 0xf453ed, .byte = 0xd1 },
		{ .addr = 0xf453ee, .byte = 0x52 },
		{ .addr = 0xf453ef, .byte = 0x48 },
		{ .addr = 0xf453f0, .byte = 0x5d },
		{ .addr = 0xf453f1, .byte = 0x35 },
		{ .addr = 0xf453f2, .byte = 0xdf },
		{ .addr = 0xf453f3, .byte = 0x6b },
		{ .addr = 0xf453f4, .byte = 0xd7 },
		{ .addr = 0xf453f5, .byte = 0xe7 },
		{ .addr = 0xf453f6, .byte = 0x1b },
		{ .addr = 0xf453f7, .byte = 0x32 },
		{ .addr = 0xf453f8, .byte = 0xca },
		{ .addr = 0xf453f9, .byte = 0x93 },
		{ .addr = 0xf453fa, .byte = 0x84 },
		{ .addr = 0xf453fb, .byte = 0xa4 },
		{ .addr = 0xf453fc, .byte = 0xc3 },
		{ .addr = 0xf453fd, .byte = 0xf3 },
		{ .addr = 0xf453fe, .byte = 0x5d },
		{ .addr = 0xf453ff, .byte = 0xc1 },
		{ .addr = 0xf45400, .byte = 0x46 },
		{ .addr = 0xf45401, .byte = 0xf4 },
		{ .addr = 0xf45402, .byte = 0x53 },
		{ .addr = 0xf45403, .byte = 0xec },
		{ .addr = 0xf45404, .byte = 0xf2 },
		{ .addr = 0xf45405, .byte = 0x89 },
		{ .addr = 0xf45406, .byte = 0x16 },
		{ .addr = 0xf45407, .byte = 0x4d },
		{ .addr = 0xf45408, .byte = 0x6f },
		{ .addr = 0xf45409, .byte = 0x75 },
		{ .addr = 0xf4540a, .byte = 0x27 },
		{ .addr = 0xf4540b, .byte = 0xc9 },
		{ .addr = 0xf4540c, .byte = 0xeb },
		{ .addr = 0xf4540d, .byte = 0x48 },
		{ .addr = 0xf4540e, .byte = 0x0c },
		{ .addr = 0xf4540f, .byte = 0x5c },
		{ .addr = 0xf45410, .byte = 0xa8 },
		{ .addr = 0xf45411, .byte = 0x97 },
		{ .addr = 0xf45412, .byte = 0xf3 },
		{ .addr = 0xf45413, .byte = 0x5f },
		{ .addr = 0xf45414, .byte = 0x00 },
		{ .addr = 0xf45415, .byte = 0x4f },
		{ .addr = 0xf45416, .byte = 0x85 },
		{ .addr = 0xf45417, .byte = 0x96 },
		{ .addr = 0xb3788a, .byte = 0x4c },
		{ .addr = 0xb3788b, .byte = 0x93 }
};

static const SST_Transaction moveml_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11761800, .data = 22926, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012268, .data = 64465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012270, .data = 21064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012272, .data = 23861, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012274, .data = 57195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012276, .data = 55271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012278, .data = 6962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012280, .data = 51859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012282, .data = 33956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012284, .data = 50163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012286, .data = 24001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012288, .data = 18164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012290, .data = 21484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012292, .data = 62089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012294, .data = 5709, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012296, .data = 28533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012298, .data = 10185, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012300, .data = 60232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012302, .data = 3164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012304, .data = 43159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012306, .data = 62303, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012308, .data = 79, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16012310, .data = 34198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11761802, .data = 19603, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_10[] = {
		{ .addr = 0xe73738, .byte = 0x4c },
		{ .addr = 0xe73739, .byte = 0xf6 },
		{ .addr = 0xe7373a, .byte = 0x3a },
		{ .addr = 0xe7373b, .byte = 0xe5 },
		{ .addr = 0xe7373c, .byte = 0x77 },
		{ .addr = 0xe7373d, .byte = 0x0f },
		{ .addr = 0xe7373e, .byte = 0xd7 },
		{ .addr = 0xe7373f, .byte = 0x29 },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xd4 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x7cd408, .byte = 0x34 },
		{ .addr = 0x7cd409, .byte = 0x64 },
		{ .addr = 0x7cd40a, .byte = 0x06 },
		{ .addr = 0x7cd40b, .byte = 0x3a }
};

static const SST_RamByte moveml_final_ram_10[] = {
		{ .addr = 0xe73738, .byte = 0x4c },
		{ .addr = 0xe73739, .byte = 0xf6 },
		{ .addr = 0xe7373a, .byte = 0x3a },
		{ .addr = 0xe7373b, .byte = 0xe5 },
		{ .addr = 0xe7373c, .byte = 0x77 },
		{ .addr = 0xe7373d, .byte = 0x0f },
		{ .addr = 0xe7373e, .byte = 0xd7 },
		{ .addr = 0xe7373f, .byte = 0x29 },
		{ .addr = 0xd4919c, .byte = 0x37 },
		{ .addr = 0xd4919d, .byte = 0x40 },
		{ .addr = 0xd49198, .byte = 0x01 },
		{ .addr = 0xd49199, .byte = 0x18 },
		{ .addr = 0xd4919a, .byte = 0x00 },
		{ .addr = 0xd4919b, .byte = 0xe7 },
		{ .addr = 0xd49196, .byte = 0x4c },
		{ .addr = 0xd49197, .byte = 0xf6 },
		{ .addr = 0xd49194, .byte = 0xcf },
		{ .addr = 0xd49195, .byte = 0x3f },
		{ .addr = 0xd49190, .byte = 0x4c },
		{ .addr = 0xd49191, .byte = 0xf1 },
		{ .addr = 0xd49192, .byte = 0xc7 },
		{ .addr = 0xd49193, .byte = 0x2b },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xd4 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x7cd408, .byte = 0x34 },
		{ .addr = 0x7cd409, .byte = 0x64 },
		{ .addr = 0x7cd40a, .byte = 0x06 },
		{ .addr = 0x7cd40b, .byte = 0x3a }
};

static const SST_Transaction moveml_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15152956, .data = 30479, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15152958, .data = 55081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2871102, .data = 33441, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13930908, .data = 14144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13930904, .data = 280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13930906, .data = 231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13930902, .data = 19702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13930900, .data = 53055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13930896, .data = 19697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13930898, .data = 50987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8180744, .data = 13412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8180746, .data = 1594, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_11[] = {
		{ .addr = 0x2ad60c, .byte = 0x4c },
		{ .addr = 0x2ad60d, .byte = 0xea },
		{ .addr = 0x2ad60e, .byte = 0xb8 },
		{ .addr = 0x2ad60f, .byte = 0x4a },
		{ .addr = 0x2ad610, .byte = 0x9d },
		{ .addr = 0x2ad611, .byte = 0x14 },
		{ .addr = 0x2ad612, .byte = 0x4b },
		{ .addr = 0x2ad613, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0xa4 },
		{ .addr = 0x7ae0a4, .byte = 0xe9 },
		{ .addr = 0x7ae0a5, .byte = 0x4d },
		{ .addr = 0x7ae0a6, .byte = 0x32 },
		{ .addr = 0x7ae0a7, .byte = 0x94 }
};

static const SST_RamByte moveml_final_ram_11[] = {
		{ .addr = 0x2ad60c, .byte = 0x4c },
		{ .addr = 0x2ad60d, .byte = 0xea },
		{ .addr = 0x2ad60e, .byte = 0xb8 },
		{ .addr = 0x2ad60f, .byte = 0x4a },
		{ .addr = 0x2ad610, .byte = 0x9d },
		{ .addr = 0x2ad611, .byte = 0x14 },
		{ .addr = 0x2ad612, .byte = 0x4b },
		{ .addr = 0x2ad613, .byte = 0x09 },
		{ .addr = 0x3f6558, .byte = 0xd6 },
		{ .addr = 0x3f6559, .byte = 0x14 },
		{ .addr = 0x3f6554, .byte = 0x83 },
		{ .addr = 0x3f6555, .byte = 0x12 },
		{ .addr = 0x3f6556, .byte = 0x00 },
		{ .addr = 0x3f6557, .byte = 0x2a },
		{ .addr = 0x3f6552, .byte = 0x4c },
		{ .addr = 0x3f6553, .byte = 0xea },
		{ .addr = 0x3f6550, .byte = 0xf0 },
		{ .addr = 0x3f6551, .byte = 0xfb },
		{ .addr = 0x3f654c, .byte = 0x4c },
		{ .addr = 0x3f654d, .byte = 0xf1 },
		{ .addr = 0x3f654e, .byte = 0x4e },
		{ .addr = 0x3f654f, .byte = 0x35 },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0xa4 },
		{ .addr = 0x7ae0a4, .byte = 0xe9 },
		{ .addr = 0x7ae0a5, .byte = 0x4d },
		{ .addr = 0x7ae0a6, .byte = 0x32 },
		{ .addr = 0x7ae0a7, .byte = 0x94 }
};

static const SST_Transaction moveml_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2807312, .data = 40212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2807314, .data = 19209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3535098, .data = 60721, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4154712, .data = 54804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4154708, .data = 33554, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4154710, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4154706, .data = 19690, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4154704, .data = 61691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4154700, .data = 19697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4154702, .data = 20021, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57508, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8052900, .data = 59725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8052902, .data = 12948, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_12[] = {
		{ .addr = 0xfd6058, .byte = 0x4c },
		{ .addr = 0xfd6059, .byte = 0xf3 },
		{ .addr = 0xfd605a, .byte = 0x77 },
		{ .addr = 0xfd605b, .byte = 0x21 },
		{ .addr = 0xfd605c, .byte = 0x00 },
		{ .addr = 0xfd605d, .byte = 0xdb },
		{ .addr = 0xfd605e, .byte = 0x81 },
		{ .addr = 0xfd605f, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0x3c },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0xd23cd2, .byte = 0x4a },
		{ .addr = 0xd23cd3, .byte = 0x9f },
		{ .addr = 0xd23cd4, .byte = 0x54 },
		{ .addr = 0xd23cd5, .byte = 0x7d }
};

static const SST_RamByte moveml_final_ram_12[] = {
		{ .addr = 0xfd6058, .byte = 0x4c },
		{ .addr = 0xfd6059, .byte = 0xf3 },
		{ .addr = 0xfd605a, .byte = 0x77 },
		{ .addr = 0xfd605b, .byte = 0x21 },
		{ .addr = 0xfd605c, .byte = 0x00 },
		{ .addr = 0xfd605d, .byte = 0xdb },
		{ .addr = 0xfd605e, .byte = 0x81 },
		{ .addr = 0xfd605f, .byte = 0x5e },
		{ .addr = 0xfbf728, .byte = 0x60 },
		{ .addr = 0xfbf729, .byte = 0x60 },
		{ .addr = 0xfbf724, .byte = 0x26 },
		{ .addr = 0xfbf725, .byte = 0x11 },
		{ .addr = 0xfbf726, .byte = 0x00 },
		{ .addr = 0xfbf727, .byte = 0xfd },
		{ .addr = 0xfbf722, .byte = 0x4c },
		{ .addr = 0xfbf723, .byte = 0xf3 },
		{ .addr = 0xfbf720, .byte = 0x64 },
		{ .addr = 0xfbf721, .byte = 0xcf },
		{ .addr = 0xfbf71c, .byte = 0x4c },
		{ .addr = 0xfbf71d, .byte = 0xf5 },
		{ .addr = 0xfbf71e, .byte = 0xaf },
		{ .addr = 0xfbf71f, .byte = 0x87 },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0x3c },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0xd23cd2, .byte = 0x4a },
		{ .addr = 0xd23cd3, .byte = 0x9f },
		{ .addr = 0xd23cd4, .byte = 0x54 },
		{ .addr = 0xd23cd5, .byte = 0x7d }
};

static const SST_Transaction moveml_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16605276, .data = 219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16605278, .data = 33118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8873166, .data = 59462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16512808, .data = 24672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16512804, .data = 9745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16512806, .data = 253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16512802, .data = 19699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16512800, .data = 25807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16512796, .data = 19701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16512798, .data = 44935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13778130, .data = 19103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13778132, .data = 21629, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_13[] = {
		{ .addr = 0x86abbc, .byte = 0x48 },
		{ .addr = 0x86abbd, .byte = 0xe2 },
		{ .addr = 0x86abbe, .byte = 0xe8 },
		{ .addr = 0x86abbf, .byte = 0xa1 },
		{ .addr = 0x86abc0, .byte = 0x14 },
		{ .addr = 0x86abc1, .byte = 0x47 },
		{ .addr = 0x86abc2, .byte = 0x68 },
		{ .addr = 0x86abc3, .byte = 0xae }
};

static const SST_RamByte moveml_final_ram_13[] = {
		{ .addr = 0x86abbc, .byte = 0x48 },
		{ .addr = 0x86abbd, .byte = 0xe2 },
		{ .addr = 0x86abbe, .byte = 0xe8 },
		{ .addr = 0x86abbf, .byte = 0xa1 },
		{ .addr = 0x86abc0, .byte = 0x14 },
		{ .addr = 0x86abc1, .byte = 0x47 },
		{ .addr = 0xdbd100, .byte = 0x50 },
		{ .addr = 0xdbd101, .byte = 0x22 },
		{ .addr = 0xdbd0fe, .byte = 0x00 },
		{ .addr = 0xdbd0ff, .byte = 0x48 },
		{ .addr = 0xdbd0fc, .byte = 0xd1 },
		{ .addr = 0xdbd0fd, .byte = 0x02 },
		{ .addr = 0xdbd0fa, .byte = 0x66 },
		{ .addr = 0xdbd0fb, .byte = 0xdb },
		{ .addr = 0xdbd0f8, .byte = 0x22 },
		{ .addr = 0xdbd0f9, .byte = 0x54 },
		{ .addr = 0xdbd0f6, .byte = 0x5b },
		{ .addr = 0xdbd0f7, .byte = 0xb9 },
		{ .addr = 0xdbd0f4, .byte = 0x23 },
		{ .addr = 0xdbd0f5, .byte = 0x35 },
		{ .addr = 0xdbd0f2, .byte = 0xf0 },
		{ .addr = 0xdbd0f3, .byte = 0xec },
		{ .addr = 0xdbd0f0, .byte = 0xae },
		{ .addr = 0xdbd0f1, .byte = 0xba },
		{ .addr = 0xdbd0ee, .byte = 0x18 },
		{ .addr = 0xdbd0ef, .byte = 0xbb },
		{ .addr = 0xdbd0ec, .byte = 0x83 },
		{ .addr = 0xdbd0ed, .byte = 0xa0 },
		{ .addr = 0xdbd0ea, .byte = 0x59 },
		{ .addr = 0xdbd0eb, .byte = 0x5a },
		{ .addr = 0xdbd0e8, .byte = 0x57 },
		{ .addr = 0xdbd0e9, .byte = 0x25 },
		{ .addr = 0xdbd0e6, .byte = 0xef },
		{ .addr = 0xdbd0e7, .byte = 0x7f },
		{ .addr = 0x86abc2, .byte = 0x68 },
		{ .addr = 0x86abc3, .byte = 0xae }
};

static const SST_Transaction moveml_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8825792, .data = 5191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405888, .data = 20514, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405886, .data = 72, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405884, .data = 53506, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405882, .data = 26331, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405880, .data = 8788, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405878, .data = 23481, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405876, .data = 9013, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405874, .data = 61676, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405872, .data = 44730, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405870, .data = 6331, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405868, .data = 33696, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405866, .data = 22874, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405864, .data = 22309, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14405862, .data = 61311, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8825794, .data = 26798, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_14[] = {
		{ .addr = 0x48c980, .byte = 0x48 },
		{ .addr = 0x48c981, .byte = 0xf5 },
		{ .addr = 0x48c982, .byte = 0x8c },
		{ .addr = 0x48c983, .byte = 0xa9 },
		{ .addr = 0x48c984, .byte = 0x87 },
		{ .addr = 0x48c985, .byte = 0x71 },
		{ .addr = 0x48c986, .byte = 0x42 },
		{ .addr = 0x48c987, .byte = 0xaf },
		{ .addr = 0x48c988, .byte = 0x9d },
		{ .addr = 0x48c989, .byte = 0x8e }
};

static const SST_RamByte moveml_final_ram_14[] = {
		{ .addr = 0x48c980, .byte = 0x48 },
		{ .addr = 0x48c981, .byte = 0xf5 },
		{ .addr = 0x48c982, .byte = 0x8c },
		{ .addr = 0x48c983, .byte = 0xa9 },
		{ .addr = 0x48c984, .byte = 0x87 },
		{ .addr = 0x48c985, .byte = 0x71 },
		{ .addr = 0x48c986, .byte = 0x42 },
		{ .addr = 0x48c987, .byte = 0xaf },
		{ .addr = 0x53c530, .byte = 0xa9 },
		{ .addr = 0x53c531, .byte = 0xfa },
		{ .addr = 0x53c532, .byte = 0xed },
		{ .addr = 0x53c533, .byte = 0x9e },
		{ .addr = 0x53c534, .byte = 0xf1 },
		{ .addr = 0x53c535, .byte = 0xae },
		{ .addr = 0x53c536, .byte = 0xaa },
		{ .addr = 0x53c537, .byte = 0x73 },
		{ .addr = 0x53c538, .byte = 0xdb },
		{ .addr = 0x53c539, .byte = 0x8d },
		{ .addr = 0x53c53a, .byte = 0x1c },
		{ .addr = 0x53c53b, .byte = 0x96 },
		{ .addr = 0x53c53c, .byte = 0xd0 },
		{ .addr = 0x53c53d, .byte = 0x59 },
		{ .addr = 0x53c53e, .byte = 0x85 },
		{ .addr = 0x53c53f, .byte = 0x37 },
		{ .addr = 0x53c540, .byte = 0x38 },
		{ .addr = 0x53c541, .byte = 0x34 },
		{ .addr = 0x53c542, .byte = 0x0b },
		{ .addr = 0x53c543, .byte = 0x96 },
		{ .addr = 0x53c544, .byte = 0x39 },
		{ .addr = 0x53c545, .byte = 0x75 },
		{ .addr = 0x53c546, .byte = 0x7b },
		{ .addr = 0x53c547, .byte = 0xea },
		{ .addr = 0x53c548, .byte = 0x00 },
		{ .addr = 0x53c549, .byte = 0xff },
		{ .addr = 0x53c54a, .byte = 0xac },
		{ .addr = 0x53c54b, .byte = 0xe0 },
		{ .addr = 0x48c988, .byte = 0x9d },
		{ .addr = 0x48c989, .byte = 0x8e }
};

static const SST_Transaction moveml_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4770180, .data = 34673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4770182, .data = 17071, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489968, .data = 43514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489970, .data = 60830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489972, .data = 61870, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489974, .data = 43635, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489976, .data = 56205, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489978, .data = 7318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489980, .data = 53337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489982, .data = 34103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489984, .data = 14388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489986, .data = 2966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489988, .data = 14709, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489990, .data = 31722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489992, .data = 255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5489994, .data = 44256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4770184, .data = 40334, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_15[] = {
		{ .addr = 0x449298, .byte = 0x48 },
		{ .addr = 0x449299, .byte = 0xe5 },
		{ .addr = 0x44929a, .byte = 0x0d },
		{ .addr = 0x44929b, .byte = 0xe0 },
		{ .addr = 0x44929c, .byte = 0xa6 },
		{ .addr = 0x44929d, .byte = 0x76 },
		{ .addr = 0x00000c, .byte = 0xd7 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0x1aa4b8, .byte = 0xea },
		{ .addr = 0x1aa4b9, .byte = 0x9c },
		{ .addr = 0x1aa4ba, .byte = 0x8d },
		{ .addr = 0x1aa4bb, .byte = 0x31 }
};

static const SST_RamByte moveml_final_ram_15[] = {
		{ .addr = 0x449298, .byte = 0x48 },
		{ .addr = 0x449299, .byte = 0xe5 },
		{ .addr = 0x44929a, .byte = 0x0d },
		{ .addr = 0x44929b, .byte = 0xe0 },
		{ .addr = 0x44929c, .byte = 0xa6 },
		{ .addr = 0x44929d, .byte = 0x76 },
		{ .addr = 0x4640a8, .byte = 0x92 },
		{ .addr = 0x4640a9, .byte = 0x9e },
		{ .addr = 0x4640a4, .byte = 0xa4 },
		{ .addr = 0x4640a5, .byte = 0x05 },
		{ .addr = 0x4640a6, .byte = 0x00 },
		{ .addr = 0x4640a7, .byte = 0x44 },
		{ .addr = 0x4640a2, .byte = 0x48 },
		{ .addr = 0x4640a3, .byte = 0xe5 },
		{ .addr = 0x4640a0, .byte = 0xc9 },
		{ .addr = 0x4640a1, .byte = 0xef },
		{ .addr = 0x46409c, .byte = 0x48 },
		{ .addr = 0x46409d, .byte = 0xe5 },
		{ .addr = 0x46409e, .byte = 0x49 },
		{ .addr = 0x46409f, .byte = 0xc0 },
		{ .addr = 0x00000c, .byte = 0xd7 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0x1aa4b8, .byte = 0xea },
		{ .addr = 0x1aa4b9, .byte = 0x9c },
		{ .addr = 0x1aa4ba, .byte = 0x8d },
		{ .addr = 0x1aa4bb, .byte = 0x31 }
};

static const SST_Transaction moveml_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4493980, .data = 42614, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12634606, .data = 41982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4604072, .data = 37534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4604068, .data = 41989, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4604070, .data = 68, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4604066, .data = 18661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4604064, .data = 51695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4604060, .data = 18661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4604062, .data = 18880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 55066, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1746104, .data = 60060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1746106, .data = 36145, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_16[] = {
		{ .addr = 0xecbc78, .byte = 0x4c },
		{ .addr = 0xecbc79, .byte = 0xf9 },
		{ .addr = 0xecbc7a, .byte = 0xf2 },
		{ .addr = 0xecbc7b, .byte = 0x5d },
		{ .addr = 0xecbc7c, .byte = 0x43 },
		{ .addr = 0xecbc7d, .byte = 0x8e },
		{ .addr = 0xecbc7e, .byte = 0xf3 },
		{ .addr = 0xecbc7f, .byte = 0x20 },
		{ .addr = 0xecbc80, .byte = 0x3f },
		{ .addr = 0xecbc81, .byte = 0x47 },
		{ .addr = 0x8ef320, .byte = 0x95 },
		{ .addr = 0x8ef321, .byte = 0x40 },
		{ .addr = 0x8ef322, .byte = 0x57 },
		{ .addr = 0x8ef323, .byte = 0xce },
		{ .addr = 0x8ef324, .byte = 0xc7 },
		{ .addr = 0x8ef325, .byte = 0x8b },
		{ .addr = 0x8ef326, .byte = 0x01 },
		{ .addr = 0x8ef327, .byte = 0xec },
		{ .addr = 0x8ef328, .byte = 0xae },
		{ .addr = 0x8ef329, .byte = 0x06 },
		{ .addr = 0x8ef32a, .byte = 0x0b },
		{ .addr = 0x8ef32b, .byte = 0x30 },
		{ .addr = 0x8ef32c, .byte = 0x73 },
		{ .addr = 0x8ef32d, .byte = 0x18 },
		{ .addr = 0x8ef32e, .byte = 0x2a },
		{ .addr = 0x8ef32f, .byte = 0x31 },
		{ .addr = 0x8ef330, .byte = 0x27 },
		{ .addr = 0x8ef331, .byte = 0xe4 },
		{ .addr = 0x8ef332, .byte = 0xe7 },
		{ .addr = 0x8ef333, .byte = 0xe8 },
		{ .addr = 0x8ef334, .byte = 0x32 },
		{ .addr = 0x8ef335, .byte = 0x24 },
		{ .addr = 0x8ef336, .byte = 0xaf },
		{ .addr = 0x8ef337, .byte = 0xe0 },
		{ .addr = 0x8ef338, .byte = 0x94 },
		{ .addr = 0x8ef339, .byte = 0xc0 },
		{ .addr = 0x8ef33a, .byte = 0x20 },
		{ .addr = 0x8ef33b, .byte = 0xdc },
		{ .addr = 0x8ef33c, .byte = 0x8e },
		{ .addr = 0x8ef33d, .byte = 0xc5 },
		{ .addr = 0x8ef33e, .byte = 0x88 },
		{ .addr = 0x8ef33f, .byte = 0x2c },
		{ .addr = 0x8ef340, .byte = 0x2b },
		{ .addr = 0x8ef341, .byte = 0xe3 },
		{ .addr = 0x8ef342, .byte = 0x21 },
		{ .addr = 0x8ef343, .byte = 0x8b },
		{ .addr = 0x8ef344, .byte = 0xd9 },
		{ .addr = 0x8ef345, .byte = 0x7e },
		{ .addr = 0x8ef346, .byte = 0x53 },
		{ .addr = 0x8ef347, .byte = 0x09 },
		{ .addr = 0x8ef348, .byte = 0xfd },
		{ .addr = 0x8ef349, .byte = 0x17 },
		{ .addr = 0xecbc82, .byte = 0xdb },
		{ .addr = 0xecbc83, .byte = 0xb5 }
};

static const SST_RamByte moveml_final_ram_16[] = {
		{ .addr = 0xecbc78, .byte = 0x4c },
		{ .addr = 0xecbc79, .byte = 0xf9 },
		{ .addr = 0xecbc7a, .byte = 0xf2 },
		{ .addr = 0xecbc7b, .byte = 0x5d },
		{ .addr = 0xecbc7c, .byte = 0x43 },
		{ .addr = 0xecbc7d, .byte = 0x8e },
		{ .addr = 0xecbc7e, .byte = 0xf3 },
		{ .addr = 0xecbc7f, .byte = 0x20 },
		{ .addr = 0xecbc80, .byte = 0x3f },
		{ .addr = 0xecbc81, .byte = 0x47 },
		{ .addr = 0x8ef320, .byte = 0x95 },
		{ .addr = 0x8ef321, .byte = 0x40 },
		{ .addr = 0x8ef322, .byte = 0x57 },
		{ .addr = 0x8ef323, .byte = 0xce },
		{ .addr = 0x8ef324, .byte = 0xc7 },
		{ .addr = 0x8ef325, .byte = 0x8b },
		{ .addr = 0x8ef326, .byte = 0x01 },
		{ .addr = 0x8ef327, .byte = 0xec },
		{ .addr = 0x8ef328, .byte = 0xae },
		{ .addr = 0x8ef329, .byte = 0x06 },
		{ .addr = 0x8ef32a, .byte = 0x0b },
		{ .addr = 0x8ef32b, .byte = 0x30 },
		{ .addr = 0x8ef32c, .byte = 0x73 },
		{ .addr = 0x8ef32d, .byte = 0x18 },
		{ .addr = 0x8ef32e, .byte = 0x2a },
		{ .addr = 0x8ef32f, .byte = 0x31 },
		{ .addr = 0x8ef330, .byte = 0x27 },
		{ .addr = 0x8ef331, .byte = 0xe4 },
		{ .addr = 0x8ef332, .byte = 0xe7 },
		{ .addr = 0x8ef333, .byte = 0xe8 },
		{ .addr = 0x8ef334, .byte = 0x32 },
		{ .addr = 0x8ef335, .byte = 0x24 },
		{ .addr = 0x8ef336, .byte = 0xaf },
		{ .addr = 0x8ef337, .byte = 0xe0 },
		{ .addr = 0x8ef338, .byte = 0x94 },
		{ .addr = 0x8ef339, .byte = 0xc0 },
		{ .addr = 0x8ef33a, .byte = 0x20 },
		{ .addr = 0x8ef33b, .byte = 0xdc },
		{ .addr = 0x8ef33c, .byte = 0x8e },
		{ .addr = 0x8ef33d, .byte = 0xc5 },
		{ .addr = 0x8ef33e, .byte = 0x88 },
		{ .addr = 0x8ef33f, .byte = 0x2c },
		{ .addr = 0x8ef340, .byte = 0x2b },
		{ .addr = 0x8ef341, .byte = 0xe3 },
		{ .addr = 0x8ef342, .byte = 0x21 },
		{ .addr = 0x8ef343, .byte = 0x8b },
		{ .addr = 0x8ef344, .byte = 0xd9 },
		{ .addr = 0x8ef345, .byte = 0x7e },
		{ .addr = 0x8ef346, .byte = 0x53 },
		{ .addr = 0x8ef347, .byte = 0x09 },
		{ .addr = 0x8ef348, .byte = 0xfd },
		{ .addr = 0x8ef349, .byte = 0x17 },
		{ .addr = 0xecbc82, .byte = 0xdb },
		{ .addr = 0xecbc83, .byte = 0xb5 }
};

static const SST_Transaction moveml_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15514748, .data = 17294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15514750, .data = 62240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15514752, .data = 16199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368352, .data = 38208, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368354, .data = 22478, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368356, .data = 51083, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368358, .data = 492, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368360, .data = 44550, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368362, .data = 2864, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368364, .data = 29464, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368366, .data = 10801, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368368, .data = 10212, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368370, .data = 59368, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368372, .data = 12836, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368374, .data = 45024, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368376, .data = 38080, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368378, .data = 8412, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368380, .data = 36549, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368382, .data = 34860, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368384, .data = 11235, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368386, .data = 8587, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368388, .data = 55678, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368390, .data = 21257, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9368392, .data = 64791, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15514754, .data = 56245, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_17[] = {
		{ .addr = 0xd24c58, .byte = 0x4c },
		{ .addr = 0xd24c59, .byte = 0xf6 },
		{ .addr = 0xd24c5a, .byte = 0xb1 },
		{ .addr = 0xd24c5b, .byte = 0xd4 },
		{ .addr = 0xd24c5c, .byte = 0x1c },
		{ .addr = 0xd24c5d, .byte = 0x8c },
		{ .addr = 0xd24c5e, .byte = 0x87 },
		{ .addr = 0xd24c5f, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x3b },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0xb83bae, .byte = 0xf8 },
		{ .addr = 0xb83baf, .byte = 0xf0 },
		{ .addr = 0xb83bb0, .byte = 0xe0 },
		{ .addr = 0xb83bb1, .byte = 0x4d }
};

static const SST_RamByte moveml_final_ram_17[] = {
		{ .addr = 0xd24c58, .byte = 0x4c },
		{ .addr = 0xd24c59, .byte = 0xf6 },
		{ .addr = 0xd24c5a, .byte = 0xb1 },
		{ .addr = 0xd24c5b, .byte = 0xd4 },
		{ .addr = 0xd24c5c, .byte = 0x1c },
		{ .addr = 0xd24c5d, .byte = 0x8c },
		{ .addr = 0xd24c5e, .byte = 0x87 },
		{ .addr = 0xd24c5f, .byte = 0xef },
		{ .addr = 0xcc6cd8, .byte = 0x4c },
		{ .addr = 0xcc6cd9, .byte = 0x60 },
		{ .addr = 0xcc6cd4, .byte = 0x03 },
		{ .addr = 0xcc6cd5, .byte = 0x1e },
		{ .addr = 0xcc6cd6, .byte = 0x00 },
		{ .addr = 0xcc6cd7, .byte = 0xd2 },
		{ .addr = 0xcc6cd2, .byte = 0x4c },
		{ .addr = 0xcc6cd3, .byte = 0xf6 },
		{ .addr = 0xcc6cd0, .byte = 0x23 },
		{ .addr = 0xcc6cd1, .byte = 0x11 },
		{ .addr = 0xcc6ccc, .byte = 0x4c },
		{ .addr = 0xcc6ccd, .byte = 0xf1 },
		{ .addr = 0xcc6cce, .byte = 0x15 },
		{ .addr = 0xcc6ccf, .byte = 0x65 },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x3b },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0xb83bae, .byte = 0xf8 },
		{ .addr = 0xb83baf, .byte = 0xf0 },
		{ .addr = 0xb83bb0, .byte = 0xe0 },
		{ .addr = 0xb83bb1, .byte = 0x4d }
};

static const SST_Transaction moveml_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13782108, .data = 7308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13782110, .data = 34799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6628112, .data = 22724, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13397208, .data = 19552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13397204, .data = 798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13397206, .data = 210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13397202, .data = 19702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13397200, .data = 8977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13397196, .data = 19697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13397198, .data = 5477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12073902, .data = 63728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12073904, .data = 57421, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_18[] = {
		{ .addr = 0x035a24, .byte = 0x48 },
		{ .addr = 0x035a25, .byte = 0xeb },
		{ .addr = 0x035a26, .byte = 0x10 },
		{ .addr = 0x035a27, .byte = 0x25 },
		{ .addr = 0x035a28, .byte = 0xb5 },
		{ .addr = 0x035a29, .byte = 0xfb },
		{ .addr = 0x035a2a, .byte = 0x35 },
		{ .addr = 0x035a2b, .byte = 0xb5 },
		{ .addr = 0x00000c, .byte = 0x39 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x7e7ccc, .byte = 0xe3 },
		{ .addr = 0x7e7ccd, .byte = 0x69 },
		{ .addr = 0x7e7cce, .byte = 0xbb },
		{ .addr = 0x7e7ccf, .byte = 0xf3 }
};

static const SST_RamByte moveml_final_ram_18[] = {
		{ .addr = 0x035a24, .byte = 0x48 },
		{ .addr = 0x035a25, .byte = 0xeb },
		{ .addr = 0x035a26, .byte = 0x10 },
		{ .addr = 0x035a27, .byte = 0x25 },
		{ .addr = 0x035a28, .byte = 0xb5 },
		{ .addr = 0x035a29, .byte = 0xfb },
		{ .addr = 0x035a2a, .byte = 0x35 },
		{ .addr = 0x035a2b, .byte = 0xb5 },
		{ .addr = 0x746b4e, .byte = 0x5a },
		{ .addr = 0x746b4f, .byte = 0x2c },
		{ .addr = 0x746b4a, .byte = 0x02 },
		{ .addr = 0x746b4b, .byte = 0x0f },
		{ .addr = 0x746b4c, .byte = 0x00 },
		{ .addr = 0x746b4d, .byte = 0x03 },
		{ .addr = 0x746b48, .byte = 0x48 },
		{ .addr = 0x746b49, .byte = 0xeb },
		{ .addr = 0x746b46, .byte = 0x29 },
		{ .addr = 0x746b47, .byte = 0xb1 },
		{ .addr = 0x746b42, .byte = 0x48 },
		{ .addr = 0x746b43, .byte = 0xe1 },
		{ .addr = 0x746b44, .byte = 0x01 },
		{ .addr = 0x746b45, .byte = 0x5b },
		{ .addr = 0x00000c, .byte = 0x39 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x7e7ccc, .byte = 0xe3 },
		{ .addr = 0x7e7ccd, .byte = 0x69 },
		{ .addr = 0x7e7cce, .byte = 0xbb },
		{ .addr = 0x7e7ccf, .byte = 0xf3 }
};

static const SST_Transaction moveml_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 219688, .data = 46587, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 219690, .data = 13749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5974448, .data = 21341, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7629646, .data = 23084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7629642, .data = 527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7629644, .data = 3, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7629640, .data = 18667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7629638, .data = 10673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7629634, .data = 18657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7629636, .data = 347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 14718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8289484, .data = 58217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8289486, .data = 48115, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_19[] = {
		{ .addr = 0x2e56d6, .byte = 0x48 },
		{ .addr = 0x2e56d7, .byte = 0xf7 },
		{ .addr = 0x2e56d8, .byte = 0x00 },
		{ .addr = 0x2e56d9, .byte = 0x6e },
		{ .addr = 0x2e56da, .byte = 0xae },
		{ .addr = 0x2e56db, .byte = 0xb9 },
		{ .addr = 0x2e56dc, .byte = 0x76 },
		{ .addr = 0x2e56dd, .byte = 0x83 },
		{ .addr = 0x00000c, .byte = 0x26 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x66 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0x2c6604, .byte = 0xca },
		{ .addr = 0x2c6605, .byte = 0x03 },
		{ .addr = 0x2c6606, .byte = 0x12 },
		{ .addr = 0x2c6607, .byte = 0x96 }
};

static const SST_RamByte moveml_final_ram_19[] = {
		{ .addr = 0x2e56d6, .byte = 0x48 },
		{ .addr = 0x2e56d7, .byte = 0xf7 },
		{ .addr = 0x2e56d8, .byte = 0x00 },
		{ .addr = 0x2e56d9, .byte = 0x6e },
		{ .addr = 0x2e56da, .byte = 0xae },
		{ .addr = 0x2e56db, .byte = 0xb9 },
		{ .addr = 0x2e56dc, .byte = 0x76 },
		{ .addr = 0x2e56dd, .byte = 0x83 },
		{ .addr = 0x4ce1f0, .byte = 0x56 },
		{ .addr = 0x4ce1f1, .byte = 0xde },
		{ .addr = 0x4ce1ec, .byte = 0x27 },
		{ .addr = 0x4ce1ed, .byte = 0x02 },
		{ .addr = 0x4ce1ee, .byte = 0x00 },
		{ .addr = 0x4ce1ef, .byte = 0x2e },
		{ .addr = 0x4ce1ea, .byte = 0x48 },
		{ .addr = 0x4ce1eb, .byte = 0xf7 },
		{ .addr = 0x4ce1e8, .byte = 0xf1 },
		{ .addr = 0x4ce1e9, .byte = 0xfd },
		{ .addr = 0x4ce1e4, .byte = 0x48 },
		{ .addr = 0x4ce1e5, .byte = 0xe5 },
		{ .addr = 0x4ce1e6, .byte = 0xe2 },
		{ .addr = 0x4ce1e7, .byte = 0x4f },
		{ .addr = 0x00000c, .byte = 0x26 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x66 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0x2c6604, .byte = 0xca },
		{ .addr = 0x2c6605, .byte = 0x03 },
		{ .addr = 0x2c6606, .byte = 0x12 },
		{ .addr = 0x2c6607, .byte = 0x96 }
};

static const SST_Transaction moveml_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3036890, .data = 44729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3036892, .data = 30339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5239292, .data = 60886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5038576, .data = 22238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5038572, .data = 9986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5038574, .data = 46, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5038570, .data = 18679, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5038568, .data = 61949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5038564, .data = 18661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5038566, .data = 57935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2909700, .data = 51715, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2909702, .data = 4758, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_20[] = {
		{ .addr = 0x25d43c, .byte = 0x48 },
		{ .addr = 0x25d43d, .byte = 0xf9 },
		{ .addr = 0x25d43e, .byte = 0xca },
		{ .addr = 0x25d43f, .byte = 0x5f },
		{ .addr = 0x25d440, .byte = 0x31 },
		{ .addr = 0x25d441, .byte = 0xe8 },
		{ .addr = 0x25d442, .byte = 0x0a },
		{ .addr = 0x25d443, .byte = 0x3d },
		{ .addr = 0x25d444, .byte = 0xfb },
		{ .addr = 0x25d445, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0x15 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x442f1a, .byte = 0x09 },
		{ .addr = 0x442f1b, .byte = 0xf7 },
		{ .addr = 0x442f1c, .byte = 0xf8 },
		{ .addr = 0x442f1d, .byte = 0x1e }
};

static const SST_RamByte moveml_final_ram_20[] = {
		{ .addr = 0x25d43c, .byte = 0x48 },
		{ .addr = 0x25d43d, .byte = 0xf9 },
		{ .addr = 0x25d43e, .byte = 0xca },
		{ .addr = 0x25d43f, .byte = 0x5f },
		{ .addr = 0x25d440, .byte = 0x31 },
		{ .addr = 0x25d441, .byte = 0xe8 },
		{ .addr = 0x25d442, .byte = 0x0a },
		{ .addr = 0x25d443, .byte = 0x3d },
		{ .addr = 0x25d444, .byte = 0xfb },
		{ .addr = 0x25d445, .byte = 0xdc },
		{ .addr = 0xf472de, .byte = 0xd4 },
		{ .addr = 0xf472df, .byte = 0x46 },
		{ .addr = 0xf472da, .byte = 0x26 },
		{ .addr = 0xf472db, .byte = 0x1a },
		{ .addr = 0xf472dc, .byte = 0x00 },
		{ .addr = 0xf472dd, .byte = 0x25 },
		{ .addr = 0xf472d8, .byte = 0x48 },
		{ .addr = 0xf472d9, .byte = 0xf9 },
		{ .addr = 0xf472d6, .byte = 0x0a },
		{ .addr = 0xf472d7, .byte = 0x3d },
		{ .addr = 0xf472d2, .byte = 0x48 },
		{ .addr = 0xf472d3, .byte = 0xe5 },
		{ .addr = 0xf472d4, .byte = 0x31 },
		{ .addr = 0xf472d5, .byte = 0xe8 },
		{ .addr = 0x00000c, .byte = 0x15 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x442f1a, .byte = 0x09 },
		{ .addr = 0x442f1b, .byte = 0xf7 },
		{ .addr = 0x442f1c, .byte = 0xf8 },
		{ .addr = 0x442f1d, .byte = 0x1e }
};

static const SST_Transaction moveml_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2479168, .data = 12776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2479170, .data = 2621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2479172, .data = 64476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15206972, .data = 34676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16020190, .data = 54342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16020186, .data = 9754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16020188, .data = 37, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16020184, .data = 18681, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16020182, .data = 2621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16020178, .data = 18661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16020180, .data = 12776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4468506, .data = 2551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4468508, .data = 63518, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_21[] = {
		{ .addr = 0xda8200, .byte = 0x4c },
		{ .addr = 0xda8201, .byte = 0xda },
		{ .addr = 0xda8202, .byte = 0x77 },
		{ .addr = 0xda8203, .byte = 0x29 },
		{ .addr = 0xda8204, .byte = 0xd2 },
		{ .addr = 0xda8205, .byte = 0x06 },
		{ .addr = 0x7648f0, .byte = 0xe4 },
		{ .addr = 0x7648f1, .byte = 0x45 },
		{ .addr = 0x7648f2, .byte = 0x7a },
		{ .addr = 0x7648f3, .byte = 0x41 },
		{ .addr = 0x7648f4, .byte = 0xf5 },
		{ .addr = 0x7648f5, .byte = 0x70 },
		{ .addr = 0x7648f6, .byte = 0xa2 },
		{ .addr = 0x7648f7, .byte = 0x73 },
		{ .addr = 0x7648f8, .byte = 0x89 },
		{ .addr = 0x7648f9, .byte = 0xa9 },
		{ .addr = 0x7648fa, .byte = 0xde },
		{ .addr = 0x7648fb, .byte = 0x80 },
		{ .addr = 0x7648fc, .byte = 0xf4 },
		{ .addr = 0x7648fd, .byte = 0xa9 },
		{ .addr = 0x7648fe, .byte = 0x41 },
		{ .addr = 0x7648ff, .byte = 0x22 },
		{ .addr = 0x764900, .byte = 0x10 },
		{ .addr = 0x764901, .byte = 0x2a },
		{ .addr = 0x764902, .byte = 0xb9 },
		{ .addr = 0x764903, .byte = 0xec },
		{ .addr = 0x764904, .byte = 0xf3 },
		{ .addr = 0x764905, .byte = 0x8b },
		{ .addr = 0x764906, .byte = 0xa1 },
		{ .addr = 0x764907, .byte = 0x8d },
		{ .addr = 0x764908, .byte = 0x40 },
		{ .addr = 0x764909, .byte = 0xd8 },
		{ .addr = 0x76490a, .byte = 0xcb },
		{ .addr = 0x76490b, .byte = 0xf8 },
		{ .addr = 0x76490c, .byte = 0x9a },
		{ .addr = 0x76490d, .byte = 0x01 },
		{ .addr = 0x76490e, .byte = 0x01 },
		{ .addr = 0x76490f, .byte = 0xf7 },
		{ .addr = 0x764910, .byte = 0xbd },
		{ .addr = 0x764911, .byte = 0x3a },
		{ .addr = 0x764912, .byte = 0xfd },
		{ .addr = 0x764913, .byte = 0x55 },
		{ .addr = 0x764914, .byte = 0x00 },
		{ .addr = 0x764915, .byte = 0xe7 },
		{ .addr = 0xda8206, .byte = 0x26 },
		{ .addr = 0xda8207, .byte = 0x15 }
};

static const SST_RamByte moveml_final_ram_21[] = {
		{ .addr = 0xda8200, .byte = 0x4c },
		{ .addr = 0xda8201, .byte = 0xda },
		{ .addr = 0xda8202, .byte = 0x77 },
		{ .addr = 0xda8203, .byte = 0x29 },
		{ .addr = 0xda8204, .byte = 0xd2 },
		{ .addr = 0xda8205, .byte = 0x06 },
		{ .addr = 0x7648f0, .byte = 0xe4 },
		{ .addr = 0x7648f1, .byte = 0x45 },
		{ .addr = 0x7648f2, .byte = 0x7a },
		{ .addr = 0x7648f3, .byte = 0x41 },
		{ .addr = 0x7648f4, .byte = 0xf5 },
		{ .addr = 0x7648f5, .byte = 0x70 },
		{ .addr = 0x7648f6, .byte = 0xa2 },
		{ .addr = 0x7648f7, .byte = 0x73 },
		{ .addr = 0x7648f8, .byte = 0x89 },
		{ .addr = 0x7648f9, .byte = 0xa9 },
		{ .addr = 0x7648fa, .byte = 0xde },
		{ .addr = 0x7648fb, .byte = 0x80 },
		{ .addr = 0x7648fc, .byte = 0xf4 },
		{ .addr = 0x7648fd, .byte = 0xa9 },
		{ .addr = 0x7648fe, .byte = 0x41 },
		{ .addr = 0x7648ff, .byte = 0x22 },
		{ .addr = 0x764900, .byte = 0x10 },
		{ .addr = 0x764901, .byte = 0x2a },
		{ .addr = 0x764902, .byte = 0xb9 },
		{ .addr = 0x764903, .byte = 0xec },
		{ .addr = 0x764904, .byte = 0xf3 },
		{ .addr = 0x764905, .byte = 0x8b },
		{ .addr = 0x764906, .byte = 0xa1 },
		{ .addr = 0x764907, .byte = 0x8d },
		{ .addr = 0x764908, .byte = 0x40 },
		{ .addr = 0x764909, .byte = 0xd8 },
		{ .addr = 0x76490a, .byte = 0xcb },
		{ .addr = 0x76490b, .byte = 0xf8 },
		{ .addr = 0x76490c, .byte = 0x9a },
		{ .addr = 0x76490d, .byte = 0x01 },
		{ .addr = 0x76490e, .byte = 0x01 },
		{ .addr = 0x76490f, .byte = 0xf7 },
		{ .addr = 0x764910, .byte = 0xbd },
		{ .addr = 0x764911, .byte = 0x3a },
		{ .addr = 0x764912, .byte = 0xfd },
		{ .addr = 0x764913, .byte = 0x55 },
		{ .addr = 0x764914, .byte = 0x00 },
		{ .addr = 0x764915, .byte = 0xe7 },
		{ .addr = 0xda8206, .byte = 0x26 },
		{ .addr = 0xda8207, .byte = 0x15 }
};

static const SST_Transaction moveml_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14320132, .data = 53766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751920, .data = 58437, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751922, .data = 31297, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751924, .data = 62832, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751926, .data = 41587, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751928, .data = 35241, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751930, .data = 56960, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751932, .data = 62633, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751934, .data = 16674, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751936, .data = 4138, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751938, .data = 47596, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751940, .data = 62347, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751942, .data = 41357, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751944, .data = 16600, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751946, .data = 52216, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751948, .data = 39425, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751950, .data = 503, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751952, .data = 48442, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751954, .data = 64853, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7751956, .data = 231, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14320134, .data = 9749, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_22[] = {
		{ .addr = 0x9a656a, .byte = 0x4c },
		{ .addr = 0x9a656b, .byte = 0xf9 },
		{ .addr = 0x9a656c, .byte = 0x93 },
		{ .addr = 0x9a656d, .byte = 0xff },
		{ .addr = 0x9a656e, .byte = 0x3c },
		{ .addr = 0x9a656f, .byte = 0x84 },
		{ .addr = 0x9a6570, .byte = 0x74 },
		{ .addr = 0x9a6571, .byte = 0xeb },
		{ .addr = 0x9a6572, .byte = 0x86 },
		{ .addr = 0x9a6573, .byte = 0x8e },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0xa2 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xa2cd3a, .byte = 0xc3 },
		{ .addr = 0xa2cd3b, .byte = 0x8a },
		{ .addr = 0xa2cd3c, .byte = 0x68 },
		{ .addr = 0xa2cd3d, .byte = 0x30 }
};

static const SST_RamByte moveml_final_ram_22[] = {
		{ .addr = 0x9a656a, .byte = 0x4c },
		{ .addr = 0x9a656b, .byte = 0xf9 },
		{ .addr = 0x9a656c, .byte = 0x93 },
		{ .addr = 0x9a656d, .byte = 0xff },
		{ .addr = 0x9a656e, .byte = 0x3c },
		{ .addr = 0x9a656f, .byte = 0x84 },
		{ .addr = 0x9a6570, .byte = 0x74 },
		{ .addr = 0x9a6571, .byte = 0xeb },
		{ .addr = 0x9a6572, .byte = 0x86 },
		{ .addr = 0x9a6573, .byte = 0x8e },
		{ .addr = 0xff355a, .byte = 0x65 },
		{ .addr = 0xff355b, .byte = 0x74 },
		{ .addr = 0xff3556, .byte = 0x22 },
		{ .addr = 0xff3557, .byte = 0x0a },
		{ .addr = 0xff3558, .byte = 0x00 },
		{ .addr = 0xff3559, .byte = 0x9a },
		{ .addr = 0xff3554, .byte = 0x4c },
		{ .addr = 0xff3555, .byte = 0xf9 },
		{ .addr = 0xff3552, .byte = 0x74 },
		{ .addr = 0xff3553, .byte = 0xeb },
		{ .addr = 0xff354e, .byte = 0x4c },
		{ .addr = 0xff354f, .byte = 0xf5 },
		{ .addr = 0xff3550, .byte = 0x3c },
		{ .addr = 0xff3551, .byte = 0x84 },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0xa2 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xa2cd3a, .byte = 0xc3 },
		{ .addr = 0xa2cd3b, .byte = 0x8a },
		{ .addr = 0xa2cd3c, .byte = 0x68 },
		{ .addr = 0xa2cd3d, .byte = 0x30 }
};

static const SST_Transaction moveml_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10118510, .data = 15492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10118512, .data = 29931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10118514, .data = 34446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8680682, .data = 38944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16725338, .data = 25972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16725334, .data = 8714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16725336, .data = 154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16725332, .data = 19705, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16725330, .data = 29931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16725326, .data = 19701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16725328, .data = 15492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10669370, .data = 50058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10669372, .data = 26672, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_23[] = {
		{ .addr = 0x088a8a, .byte = 0x48 },
		{ .addr = 0x088a8b, .byte = 0xea },
		{ .addr = 0x088a8c, .byte = 0x0e },
		{ .addr = 0x088a8d, .byte = 0xf4 },
		{ .addr = 0x088a8e, .byte = 0x85 },
		{ .addr = 0x088a8f, .byte = 0x5e },
		{ .addr = 0x088a90, .byte = 0xa3 },
		{ .addr = 0x088a91, .byte = 0xb2 },
		{ .addr = 0x088a92, .byte = 0xc0 },
		{ .addr = 0x088a93, .byte = 0x40 }
};

static const SST_RamByte moveml_final_ram_23[] = {
		{ .addr = 0x088a8a, .byte = 0x48 },
		{ .addr = 0x088a8b, .byte = 0xea },
		{ .addr = 0x088a8c, .byte = 0x0e },
		{ .addr = 0x088a8d, .byte = 0xf4 },
		{ .addr = 0x088a8e, .byte = 0x85 },
		{ .addr = 0x088a8f, .byte = 0x5e },
		{ .addr = 0x088a90, .byte = 0xa3 },
		{ .addr = 0x088a91, .byte = 0xb2 },
		{ .addr = 0x2fe10c, .byte = 0xc9 },
		{ .addr = 0x2fe10d, .byte = 0x95 },
		{ .addr = 0x2fe10e, .byte = 0xb7 },
		{ .addr = 0x2fe10f, .byte = 0x22 },
		{ .addr = 0x2fe110, .byte = 0x66 },
		{ .addr = 0x2fe111, .byte = 0xbe },
		{ .addr = 0x2fe112, .byte = 0x38 },
		{ .addr = 0x2fe113, .byte = 0xe7 },
		{ .addr = 0x2fe114, .byte = 0x64 },
		{ .addr = 0x2fe115, .byte = 0x80 },
		{ .addr = 0x2fe116, .byte = 0x73 },
		{ .addr = 0x2fe117, .byte = 0xbf },
		{ .addr = 0x2fe118, .byte = 0xf7 },
		{ .addr = 0x2fe119, .byte = 0xcf },
		{ .addr = 0x2fe11a, .byte = 0xd9 },
		{ .addr = 0x2fe11b, .byte = 0x02 },
		{ .addr = 0x2fe11c, .byte = 0x95 },
		{ .addr = 0x2fe11d, .byte = 0xa8 },
		{ .addr = 0x2fe11e, .byte = 0x55 },
		{ .addr = 0x2fe11f, .byte = 0xd9 },
		{ .addr = 0x2fe120, .byte = 0x8d },
		{ .addr = 0x2fe121, .byte = 0x28 },
		{ .addr = 0x2fe122, .byte = 0x40 },
		{ .addr = 0x2fe123, .byte = 0x92 },
		{ .addr = 0x2fe124, .byte = 0x97 },
		{ .addr = 0x2fe125, .byte = 0x30 },
		{ .addr = 0x2fe126, .byte = 0x5b },
		{ .addr = 0x2fe127, .byte = 0xae },
		{ .addr = 0x2fe128, .byte = 0x0d },
		{ .addr = 0x2fe129, .byte = 0xce },
		{ .addr = 0x2fe12a, .byte = 0x81 },
		{ .addr = 0x2fe12b, .byte = 0xca },
		{ .addr = 0x088a92, .byte = 0xc0 },
		{ .addr = 0x088a93, .byte = 0x40 }
};

static const SST_Transaction moveml_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 559758, .data = 34142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 559760, .data = 41906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137804, .data = 51605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137806, .data = 46882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137808, .data = 26302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137810, .data = 14567, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137812, .data = 25728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137814, .data = 29631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137816, .data = 63439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137818, .data = 55554, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137820, .data = 38312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137822, .data = 21977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137824, .data = 36136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137826, .data = 16530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137828, .data = 38704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137830, .data = 23470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137832, .data = 3534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3137834, .data = 33226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 559762, .data = 49216, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_24[] = {
		{ .addr = 0x484b4a, .byte = 0x4c },
		{ .addr = 0x484b4b, .byte = 0xef },
		{ .addr = 0x484b4c, .byte = 0x71 },
		{ .addr = 0x484b4d, .byte = 0xf5 },
		{ .addr = 0x484b4e, .byte = 0x8c },
		{ .addr = 0x484b4f, .byte = 0x28 },
		{ .addr = 0x484b50, .byte = 0x8e },
		{ .addr = 0x484b51, .byte = 0xaa },
		{ .addr = 0xde4656, .byte = 0xa9 },
		{ .addr = 0xde4657, .byte = 0x64 },
		{ .addr = 0xde4658, .byte = 0x75 },
		{ .addr = 0xde4659, .byte = 0x46 },
		{ .addr = 0xde465a, .byte = 0xe7 },
		{ .addr = 0xde465b, .byte = 0x85 },
		{ .addr = 0xde465c, .byte = 0x8f },
		{ .addr = 0xde465d, .byte = 0x9c },
		{ .addr = 0xde465e, .byte = 0x18 },
		{ .addr = 0xde465f, .byte = 0x21 },
		{ .addr = 0xde4660, .byte = 0x04 },
		{ .addr = 0xde4661, .byte = 0x9c },
		{ .addr = 0xde4662, .byte = 0x75 },
		{ .addr = 0xde4663, .byte = 0x20 },
		{ .addr = 0xde4664, .byte = 0x66 },
		{ .addr = 0xde4665, .byte = 0xc6 },
		{ .addr = 0xde4666, .byte = 0xd1 },
		{ .addr = 0xde4667, .byte = 0x28 },
		{ .addr = 0xde4668, .byte = 0x20 },
		{ .addr = 0xde4669, .byte = 0xb7 },
		{ .addr = 0xde466a, .byte = 0x09 },
		{ .addr = 0xde466b, .byte = 0x6e },
		{ .addr = 0xde466c, .byte = 0x9c },
		{ .addr = 0xde466d, .byte = 0xc4 },
		{ .addr = 0xde466e, .byte = 0xa0 },
		{ .addr = 0xde466f, .byte = 0xdd },
		{ .addr = 0xde4670, .byte = 0x6c },
		{ .addr = 0xde4671, .byte = 0x47 },
		{ .addr = 0xde4672, .byte = 0x99 },
		{ .addr = 0xde4673, .byte = 0xdd },
		{ .addr = 0xde4674, .byte = 0x16 },
		{ .addr = 0xde4675, .byte = 0x2e },
		{ .addr = 0xde4676, .byte = 0xcf },
		{ .addr = 0xde4677, .byte = 0x7d },
		{ .addr = 0xde4678, .byte = 0x92 },
		{ .addr = 0xde4679, .byte = 0x79 },
		{ .addr = 0xde467a, .byte = 0xe7 },
		{ .addr = 0xde467b, .byte = 0x59 },
		{ .addr = 0xde467c, .byte = 0xb3 },
		{ .addr = 0xde467d, .byte = 0xcf },
		{ .addr = 0xde467e, .byte = 0x2c },
		{ .addr = 0xde467f, .byte = 0x3b },
		{ .addr = 0x484b52, .byte = 0xda },
		{ .addr = 0x484b53, .byte = 0x7b }
};

static const SST_RamByte moveml_final_ram_24[] = {
		{ .addr = 0x484b4a, .byte = 0x4c },
		{ .addr = 0x484b4b, .byte = 0xef },
		{ .addr = 0x484b4c, .byte = 0x71 },
		{ .addr = 0x484b4d, .byte = 0xf5 },
		{ .addr = 0x484b4e, .byte = 0x8c },
		{ .addr = 0x484b4f, .byte = 0x28 },
		{ .addr = 0x484b50, .byte = 0x8e },
		{ .addr = 0x484b51, .byte = 0xaa },
		{ .addr = 0xde4656, .byte = 0xa9 },
		{ .addr = 0xde4657, .byte = 0x64 },
		{ .addr = 0xde4658, .byte = 0x75 },
		{ .addr = 0xde4659, .byte = 0x46 },
		{ .addr = 0xde465a, .byte = 0xe7 },
		{ .addr = 0xde465b, .byte = 0x85 },
		{ .addr = 0xde465c, .byte = 0x8f },
		{ .addr = 0xde465d, .byte = 0x9c },
		{ .addr = 0xde465e, .byte = 0x18 },
		{ .addr = 0xde465f, .byte = 0x21 },
		{ .addr = 0xde4660, .byte = 0x04 },
		{ .addr = 0xde4661, .byte = 0x9c },
		{ .addr = 0xde4662, .byte = 0x75 },
		{ .addr = 0xde4663, .byte = 0x20 },
		{ .addr = 0xde4664, .byte = 0x66 },
		{ .addr = 0xde4665, .byte = 0xc6 },
		{ .addr = 0xde4666, .byte = 0xd1 },
		{ .addr = 0xde4667, .byte = 0x28 },
		{ .addr = 0xde4668, .byte = 0x20 },
		{ .addr = 0xde4669, .byte = 0xb7 },
		{ .addr = 0xde466a, .byte = 0x09 },
		{ .addr = 0xde466b, .byte = 0x6e },
		{ .addr = 0xde466c, .byte = 0x9c },
		{ .addr = 0xde466d, .byte = 0xc4 },
		{ .addr = 0xde466e, .byte = 0xa0 },
		{ .addr = 0xde466f, .byte = 0xdd },
		{ .addr = 0xde4670, .byte = 0x6c },
		{ .addr = 0xde4671, .byte = 0x47 },
		{ .addr = 0xde4672, .byte = 0x99 },
		{ .addr = 0xde4673, .byte = 0xdd },
		{ .addr = 0xde4674, .byte = 0x16 },
		{ .addr = 0xde4675, .byte = 0x2e },
		{ .addr = 0xde4676, .byte = 0xcf },
		{ .addr = 0xde4677, .byte = 0x7d },
		{ .addr = 0xde4678, .byte = 0x92 },
		{ .addr = 0xde4679, .byte = 0x79 },
		{ .addr = 0xde467a, .byte = 0xe7 },
		{ .addr = 0xde467b, .byte = 0x59 },
		{ .addr = 0xde467c, .byte = 0xb3 },
		{ .addr = 0xde467d, .byte = 0xcf },
		{ .addr = 0xde467e, .byte = 0x2c },
		{ .addr = 0xde467f, .byte = 0x3b },
		{ .addr = 0x484b52, .byte = 0xda },
		{ .addr = 0x484b53, .byte = 0x7b }
};

static const SST_Transaction moveml_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4737870, .data = 35880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4737872, .data = 36522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14566998, .data = 43364, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567000, .data = 30022, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567002, .data = 59269, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567004, .data = 36764, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567006, .data = 6177, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567008, .data = 1180, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567010, .data = 29984, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567012, .data = 26310, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567014, .data = 53544, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567016, .data = 8375, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567018, .data = 2414, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567020, .data = 40132, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567022, .data = 41181, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567024, .data = 27719, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567026, .data = 39389, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567028, .data = 5678, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567030, .data = 53117, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567032, .data = 37497, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567034, .data = 59225, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567036, .data = 46031, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14567038, .data = 11323, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4737874, .data = 55931, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_25[] = {
		{ .addr = 0xd04cfa, .byte = 0x4c },
		{ .addr = 0xd04cfb, .byte = 0xf7 },
		{ .addr = 0xd04cfc, .byte = 0x1d },
		{ .addr = 0xd04cfd, .byte = 0x73 },
		{ .addr = 0xd04cfe, .byte = 0xc4 },
		{ .addr = 0xd04cff, .byte = 0x14 },
		{ .addr = 0xd04d00, .byte = 0xbb },
		{ .addr = 0xd04d01, .byte = 0xa0 },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0x3a65d6, .byte = 0xd7 },
		{ .addr = 0x3a65d7, .byte = 0x06 },
		{ .addr = 0x3a65d8, .byte = 0x7c },
		{ .addr = 0x3a65d9, .byte = 0x2a }
};

static const SST_RamByte moveml_final_ram_25[] = {
		{ .addr = 0xd04cfa, .byte = 0x4c },
		{ .addr = 0xd04cfb, .byte = 0xf7 },
		{ .addr = 0xd04cfc, .byte = 0x1d },
		{ .addr = 0xd04cfd, .byte = 0x73 },
		{ .addr = 0xd04cfe, .byte = 0xc4 },
		{ .addr = 0xd04cff, .byte = 0x14 },
		{ .addr = 0xd04d00, .byte = 0xbb },
		{ .addr = 0xd04d01, .byte = 0xa0 },
		{ .addr = 0x5f69b6, .byte = 0x4d },
		{ .addr = 0x5f69b7, .byte = 0x02 },
		{ .addr = 0x5f69b2, .byte = 0xa1 },
		{ .addr = 0x5f69b3, .byte = 0x0e },
		{ .addr = 0x5f69b4, .byte = 0x00 },
		{ .addr = 0x5f69b5, .byte = 0xd0 },
		{ .addr = 0x5f69b0, .byte = 0x4c },
		{ .addr = 0x5f69b1, .byte = 0xf7 },
		{ .addr = 0x5f69ae, .byte = 0xe4 },
		{ .addr = 0x5f69af, .byte = 0x13 },
		{ .addr = 0x5f69aa, .byte = 0x4c },
		{ .addr = 0x5f69ab, .byte = 0xf5 },
		{ .addr = 0x5f69ac, .byte = 0x00 },
		{ .addr = 0x5f69ad, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0x3a65d6, .byte = 0xd7 },
		{ .addr = 0x3a65d7, .byte = 0x06 },
		{ .addr = 0x3a65d8, .byte = 0x7c },
		{ .addr = 0x3a65d9, .byte = 0x2a }
};

static const SST_Transaction moveml_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13651198, .data = 50196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13651200, .data = 48032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6284306, .data = 59210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6252982, .data = 19714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6252978, .data = 41230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6252980, .data = 208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6252976, .data = 19703, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6252974, .data = 58387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6252970, .data = 19701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6252972, .data = 95, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 26682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3827158, .data = 55046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3827160, .data = 31786, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_26[] = {
		{ .addr = 0xdc30ea, .byte = 0x48 },
		{ .addr = 0xdc30eb, .byte = 0xf0 },
		{ .addr = 0xdc30ec, .byte = 0xda },
		{ .addr = 0xdc30ed, .byte = 0xb4 },
		{ .addr = 0xdc30ee, .byte = 0xbb },
		{ .addr = 0xdc30ef, .byte = 0x1d },
		{ .addr = 0xdc30f0, .byte = 0x12 },
		{ .addr = 0xdc30f1, .byte = 0x61 },
		{ .addr = 0x00000c, .byte = 0x7d },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0xe8 },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x9ee8e4, .byte = 0x7c },
		{ .addr = 0x9ee8e5, .byte = 0x44 },
		{ .addr = 0x9ee8e6, .byte = 0xd2 },
		{ .addr = 0x9ee8e7, .byte = 0xbc }
};

static const SST_RamByte moveml_final_ram_26[] = {
		{ .addr = 0xdc30ea, .byte = 0x48 },
		{ .addr = 0xdc30eb, .byte = 0xf0 },
		{ .addr = 0xdc30ec, .byte = 0xda },
		{ .addr = 0xdc30ed, .byte = 0xb4 },
		{ .addr = 0xdc30ee, .byte = 0xbb },
		{ .addr = 0xdc30ef, .byte = 0x1d },
		{ .addr = 0xdc30f0, .byte = 0x12 },
		{ .addr = 0xdc30f1, .byte = 0x61 },
		{ .addr = 0x00c110, .byte = 0x30 },
		{ .addr = 0x00c111, .byte = 0xf2 },
		{ .addr = 0x00c10c, .byte = 0x04 },
		{ .addr = 0x00c10d, .byte = 0x11 },
		{ .addr = 0x00c10e, .byte = 0x00 },
		{ .addr = 0x00c10f, .byte = 0xdc },
		{ .addr = 0x00c10a, .byte = 0x48 },
		{ .addr = 0x00c10b, .byte = 0xf0 },
		{ .addr = 0x00c108, .byte = 0x66 },
		{ .addr = 0x00c109, .byte = 0x3f },
		{ .addr = 0x00c104, .byte = 0x48 },
		{ .addr = 0x00c105, .byte = 0xe1 },
		{ .addr = 0x00c106, .byte = 0xc8 },
		{ .addr = 0x00c107, .byte = 0x9a },
		{ .addr = 0x00000c, .byte = 0x7d },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0xe8 },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x9ee8e4, .byte = 0x7c },
		{ .addr = 0x9ee8e5, .byte = 0x44 },
		{ .addr = 0x9ee8e6, .byte = 0xd2 },
		{ .addr = 0x9ee8e7, .byte = 0xbc }
};

static const SST_Transaction moveml_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14430446, .data = 47901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14430448, .data = 4705, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10118718, .data = 65026, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 49424, .data = 12530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 49420, .data = 1041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 49422, .data = 220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 49418, .data = 18672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 49416, .data = 26175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 49412, .data = 18657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 49414, .data = 51354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 59620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10414308, .data = 31812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10414310, .data = 53948, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_27[] = {
		{ .addr = 0x88e05e, .byte = 0x48 },
		{ .addr = 0x88e05f, .byte = 0xf4 },
		{ .addr = 0x88e060, .byte = 0x10 },
		{ .addr = 0x88e061, .byte = 0xd4 },
		{ .addr = 0x88e062, .byte = 0x88 },
		{ .addr = 0x88e063, .byte = 0xe5 },
		{ .addr = 0x88e064, .byte = 0x37 },
		{ .addr = 0x88e065, .byte = 0xf1 },
		{ .addr = 0x00000c, .byte = 0xd9 },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0xe1 },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0xfee1c0, .byte = 0xba },
		{ .addr = 0xfee1c1, .byte = 0xae },
		{ .addr = 0xfee1c2, .byte = 0x35 },
		{ .addr = 0xfee1c3, .byte = 0xab }
};

static const SST_RamByte moveml_final_ram_27[] = {
		{ .addr = 0x88e05e, .byte = 0x48 },
		{ .addr = 0x88e05f, .byte = 0xf4 },
		{ .addr = 0x88e060, .byte = 0x10 },
		{ .addr = 0x88e061, .byte = 0xd4 },
		{ .addr = 0x88e062, .byte = 0x88 },
		{ .addr = 0x88e063, .byte = 0xe5 },
		{ .addr = 0x88e064, .byte = 0x37 },
		{ .addr = 0x88e065, .byte = 0xf1 },
		{ .addr = 0x1a6704, .byte = 0xe0 },
		{ .addr = 0x1a6705, .byte = 0x66 },
		{ .addr = 0x1a6700, .byte = 0xa6 },
		{ .addr = 0x1a6701, .byte = 0x0b },
		{ .addr = 0x1a6702, .byte = 0x00 },
		{ .addr = 0x1a6703, .byte = 0x88 },
		{ .addr = 0x1a66fe, .byte = 0x48 },
		{ .addr = 0x1a66ff, .byte = 0xf4 },
		{ .addr = 0x1a66fc, .byte = 0xed },
		{ .addr = 0x1a66fd, .byte = 0x13 },
		{ .addr = 0x1a66f8, .byte = 0x48 },
		{ .addr = 0x1a66f9, .byte = 0xe5 },
		{ .addr = 0x1a66fa, .byte = 0x46 },
		{ .addr = 0x1a66fb, .byte = 0x20 },
		{ .addr = 0x00000c, .byte = 0xd9 },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0xe1 },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0xfee1c0, .byte = 0xba },
		{ .addr = 0xfee1c1, .byte = 0xae },
		{ .addr = 0xfee1c2, .byte = 0x35 },
		{ .addr = 0xfee1c3, .byte = 0xab }
};

static const SST_Transaction moveml_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8970338, .data = 35045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8970340, .data = 14321, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2157842, .data = 62962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1730308, .data = 57446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1730304, .data = 42507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1730306, .data = 136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1730302, .data = 18676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1730300, .data = 60691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1730296, .data = 18661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1730298, .data = 17952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 55806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16703936, .data = 47790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16703938, .data = 13739, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_28[] = {
		{ .addr = 0x377ae6, .byte = 0x4c },
		{ .addr = 0x377ae7, .byte = 0xd0 },
		{ .addr = 0x377ae8, .byte = 0x5b },
		{ .addr = 0x377ae9, .byte = 0xfc },
		{ .addr = 0x377aea, .byte = 0x00 },
		{ .addr = 0x377aeb, .byte = 0xb2 },
		{ .addr = 0x00000c, .byte = 0x0a },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0xee808c, .byte = 0x66 },
		{ .addr = 0xee808d, .byte = 0x04 },
		{ .addr = 0xee808e, .byte = 0xea },
		{ .addr = 0xee808f, .byte = 0xa3 }
};

static const SST_RamByte moveml_final_ram_28[] = {
		{ .addr = 0x377ae6, .byte = 0x4c },
		{ .addr = 0x377ae7, .byte = 0xd0 },
		{ .addr = 0x377ae8, .byte = 0x5b },
		{ .addr = 0x377ae9, .byte = 0xfc },
		{ .addr = 0x377aea, .byte = 0x00 },
		{ .addr = 0x377aeb, .byte = 0xb2 },
		{ .addr = 0xa234f6, .byte = 0x7a },
		{ .addr = 0xa234f7, .byte = 0xec },
		{ .addr = 0xa234f2, .byte = 0x01 },
		{ .addr = 0xa234f3, .byte = 0x1e },
		{ .addr = 0xa234f4, .byte = 0x00 },
		{ .addr = 0xa234f5, .byte = 0x37 },
		{ .addr = 0xa234f0, .byte = 0x4c },
		{ .addr = 0xa234f1, .byte = 0xd0 },
		{ .addr = 0xa234ee, .byte = 0xf1 },
		{ .addr = 0xa234ef, .byte = 0xcf },
		{ .addr = 0xa234ea, .byte = 0x4c },
		{ .addr = 0xa234eb, .byte = 0xd1 },
		{ .addr = 0xa234ec, .byte = 0x7d },
		{ .addr = 0xa234ed, .byte = 0xbc },
		{ .addr = 0x00000c, .byte = 0x0a },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0xee808c, .byte = 0x66 },
		{ .addr = 0xee808d, .byte = 0x04 },
		{ .addr = 0xee808e, .byte = 0xea },
		{ .addr = 0xee808f, .byte = 0xa3 }
};

static const SST_Transaction moveml_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3635946, .data = 178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12382670, .data = 20503, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10630390, .data = 31468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10630386, .data = 286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10630388, .data = 55, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10630384, .data = 19664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10630382, .data = 61903, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10630378, .data = 19665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10630380, .data = 32188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15630476, .data = 26116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15630478, .data = 60067, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_29[] = {
		{ .addr = 0x5b847c, .byte = 0x48 },
		{ .addr = 0x5b847d, .byte = 0xe2 },
		{ .addr = 0x5b847e, .byte = 0x24 },
		{ .addr = 0x5b847f, .byte = 0xc2 },
		{ .addr = 0x5b8480, .byte = 0xfd },
		{ .addr = 0x5b8481, .byte = 0x1a },
		{ .addr = 0x00000c, .byte = 0xa9 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0x06c666, .byte = 0xa7 },
		{ .addr = 0x06c667, .byte = 0x1e },
		{ .addr = 0x06c668, .byte = 0x95 },
		{ .addr = 0x06c669, .byte = 0x04 }
};

static const SST_RamByte moveml_final_ram_29[] = {
		{ .addr = 0x5b847c, .byte = 0x48 },
		{ .addr = 0x5b847d, .byte = 0xe2 },
		{ .addr = 0x5b847e, .byte = 0x24 },
		{ .addr = 0x5b847f, .byte = 0xc2 },
		{ .addr = 0x5b8480, .byte = 0xfd },
		{ .addr = 0x5b8481, .byte = 0x1a },
		{ .addr = 0x276cee, .byte = 0x84 },
		{ .addr = 0x276cef, .byte = 0x82 },
		{ .addr = 0x276cea, .byte = 0x81 },
		{ .addr = 0x276ceb, .byte = 0x18 },
		{ .addr = 0x276cec, .byte = 0x00 },
		{ .addr = 0x276ced, .byte = 0x5b },
		{ .addr = 0x276ce8, .byte = 0x48 },
		{ .addr = 0x276ce9, .byte = 0xe2 },
		{ .addr = 0x276ce6, .byte = 0x51 },
		{ .addr = 0x276ce7, .byte = 0x75 },
		{ .addr = 0x276ce2, .byte = 0x48 },
		{ .addr = 0x276ce3, .byte = 0xe1 },
		{ .addr = 0x276ce4, .byte = 0x17 },
		{ .addr = 0x276ce5, .byte = 0xe7 },
		{ .addr = 0x00000c, .byte = 0xa9 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0x06c666, .byte = 0xa7 },
		{ .addr = 0x06c667, .byte = 0x1e },
		{ .addr = 0x06c668, .byte = 0x95 },
		{ .addr = 0x06c669, .byte = 0x04 }
};

static const SST_Transaction moveml_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5997696, .data = 64794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15159668, .data = 14094, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2583790, .data = 33922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2583786, .data = 33048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2583788, .data = 91, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2583784, .data = 18658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2583782, .data = 20853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2583778, .data = 18657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2583780, .data = 6119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 444006, .data = 42782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 444008, .data = 38148, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_30[] = {
		{ .addr = 0xabef5e, .byte = 0x4c },
		{ .addr = 0xabef5f, .byte = 0xf5 },
		{ .addr = 0xabef60, .byte = 0x8e },
		{ .addr = 0xabef61, .byte = 0xcd },
		{ .addr = 0xabef62, .byte = 0xf3 },
		{ .addr = 0xabef63, .byte = 0xd5 },
		{ .addr = 0xabef64, .byte = 0x64 },
		{ .addr = 0xabef65, .byte = 0x7b },
		{ .addr = 0x16cd32, .byte = 0x3d },
		{ .addr = 0x16cd33, .byte = 0x31 },
		{ .addr = 0x16cd34, .byte = 0x34 },
		{ .addr = 0x16cd35, .byte = 0x46 },
		{ .addr = 0x16cd36, .byte = 0x0a },
		{ .addr = 0x16cd37, .byte = 0xfa },
		{ .addr = 0x16cd38, .byte = 0x92 },
		{ .addr = 0x16cd39, .byte = 0x28 },
		{ .addr = 0x16cd3a, .byte = 0x09 },
		{ .addr = 0x16cd3b, .byte = 0x86 },
		{ .addr = 0x16cd3c, .byte = 0x1a },
		{ .addr = 0x16cd3d, .byte = 0x5d },
		{ .addr = 0x16cd3e, .byte = 0x32 },
		{ .addr = 0x16cd3f, .byte = 0x76 },
		{ .addr = 0x16cd40, .byte = 0x24 },
		{ .addr = 0x16cd41, .byte = 0x04 },
		{ .addr = 0x16cd42, .byte = 0xe4 },
		{ .addr = 0x16cd43, .byte = 0xfc },
		{ .addr = 0x16cd44, .byte = 0xa1 },
		{ .addr = 0x16cd45, .byte = 0xa6 },
		{ .addr = 0x16cd46, .byte = 0xa5 },
		{ .addr = 0x16cd47, .byte = 0x21 },
		{ .addr = 0x16cd48, .byte = 0x9d },
		{ .addr = 0x16cd49, .byte = 0x48 },
		{ .addr = 0x16cd4a, .byte = 0xfc },
		{ .addr = 0x16cd4b, .byte = 0xd0 },
		{ .addr = 0x16cd4c, .byte = 0x20 },
		{ .addr = 0x16cd4d, .byte = 0x5d },
		{ .addr = 0x16cd4e, .byte = 0xca },
		{ .addr = 0x16cd4f, .byte = 0xe6 },
		{ .addr = 0x16cd50, .byte = 0x06 },
		{ .addr = 0x16cd51, .byte = 0x18 },
		{ .addr = 0x16cd52, .byte = 0xd7 },
		{ .addr = 0x16cd53, .byte = 0x49 },
		{ .addr = 0x16cd54, .byte = 0xfd },
		{ .addr = 0x16cd55, .byte = 0x3c },
		{ .addr = 0x16cd56, .byte = 0x85 },
		{ .addr = 0x16cd57, .byte = 0x20 },
		{ .addr = 0xabef66, .byte = 0xc6 },
		{ .addr = 0xabef67, .byte = 0xae }
};

static const SST_RamByte moveml_final_ram_30[] = {
		{ .addr = 0xabef5e, .byte = 0x4c },
		{ .addr = 0xabef5f, .byte = 0xf5 },
		{ .addr = 0xabef60, .byte = 0x8e },
		{ .addr = 0xabef61, .byte = 0xcd },
		{ .addr = 0xabef62, .byte = 0xf3 },
		{ .addr = 0xabef63, .byte = 0xd5 },
		{ .addr = 0xabef64, .byte = 0x64 },
		{ .addr = 0xabef65, .byte = 0x7b },
		{ .addr = 0x16cd32, .byte = 0x3d },
		{ .addr = 0x16cd33, .byte = 0x31 },
		{ .addr = 0x16cd34, .byte = 0x34 },
		{ .addr = 0x16cd35, .byte = 0x46 },
		{ .addr = 0x16cd36, .byte = 0x0a },
		{ .addr = 0x16cd37, .byte = 0xfa },
		{ .addr = 0x16cd38, .byte = 0x92 },
		{ .addr = 0x16cd39, .byte = 0x28 },
		{ .addr = 0x16cd3a, .byte = 0x09 },
		{ .addr = 0x16cd3b, .byte = 0x86 },
		{ .addr = 0x16cd3c, .byte = 0x1a },
		{ .addr = 0x16cd3d, .byte = 0x5d },
		{ .addr = 0x16cd3e, .byte = 0x32 },
		{ .addr = 0x16cd3f, .byte = 0x76 },
		{ .addr = 0x16cd40, .byte = 0x24 },
		{ .addr = 0x16cd41, .byte = 0x04 },
		{ .addr = 0x16cd42, .byte = 0xe4 },
		{ .addr = 0x16cd43, .byte = 0xfc },
		{ .addr = 0x16cd44, .byte = 0xa1 },
		{ .addr = 0x16cd45, .byte = 0xa6 },
		{ .addr = 0x16cd46, .byte = 0xa5 },
		{ .addr = 0x16cd47, .byte = 0x21 },
		{ .addr = 0x16cd48, .byte = 0x9d },
		{ .addr = 0x16cd49, .byte = 0x48 },
		{ .addr = 0x16cd4a, .byte = 0xfc },
		{ .addr = 0x16cd4b, .byte = 0xd0 },
		{ .addr = 0x16cd4c, .byte = 0x20 },
		{ .addr = 0x16cd4d, .byte = 0x5d },
		{ .addr = 0x16cd4e, .byte = 0xca },
		{ .addr = 0x16cd4f, .byte = 0xe6 },
		{ .addr = 0x16cd50, .byte = 0x06 },
		{ .addr = 0x16cd51, .byte = 0x18 },
		{ .addr = 0x16cd52, .byte = 0xd7 },
		{ .addr = 0x16cd53, .byte = 0x49 },
		{ .addr = 0x16cd54, .byte = 0xfd },
		{ .addr = 0x16cd55, .byte = 0x3c },
		{ .addr = 0x16cd56, .byte = 0x85 },
		{ .addr = 0x16cd57, .byte = 0x20 },
		{ .addr = 0xabef66, .byte = 0xc6 },
		{ .addr = 0xabef67, .byte = 0xae }
};

static const SST_Transaction moveml_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11267938, .data = 62421, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11267940, .data = 25723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494322, .data = 15665, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494324, .data = 13382, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494326, .data = 2810, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494328, .data = 37416, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494330, .data = 2438, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494332, .data = 6749, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494334, .data = 12918, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494336, .data = 9220, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494338, .data = 58620, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494340, .data = 41382, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494342, .data = 42273, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494344, .data = 40264, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494346, .data = 64720, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494348, .data = 8285, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494350, .data = 51942, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494352, .data = 1560, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494354, .data = 55113, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494356, .data = 64828, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1494358, .data = 34080, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11267942, .data = 50862, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveml_initial_ram_31[] = {
		{ .addr = 0x110d8c, .byte = 0x4c },
		{ .addr = 0x110d8d, .byte = 0xf9 },
		{ .addr = 0x110d8e, .byte = 0xbd },
		{ .addr = 0x110d8f, .byte = 0x87 },
		{ .addr = 0x110d90, .byte = 0xf9 },
		{ .addr = 0x110d91, .byte = 0x4f },
		{ .addr = 0x110d92, .byte = 0x63 },
		{ .addr = 0x110d93, .byte = 0x26 },
		{ .addr = 0x110d94, .byte = 0x7f },
		{ .addr = 0x110d95, .byte = 0x35 },
		{ .addr = 0x4f6326, .byte = 0xbe },
		{ .addr = 0x4f6327, .byte = 0x42 },
		{ .addr = 0x4f6328, .byte = 0xe1 },
		{ .addr = 0x4f6329, .byte = 0x89 },
		{ .addr = 0x4f632a, .byte = 0x3d },
		{ .addr = 0x4f632b, .byte = 0x77 },
		{ .addr = 0x4f632c, .byte = 0x20 },
		{ .addr = 0x4f632d, .byte = 0x08 },
		{ .addr = 0x4f632e, .byte = 0x39 },
		{ .addr = 0x4f632f, .byte = 0xc2 },
		{ .addr = 0x4f6330, .byte = 0x15 },
		{ .addr = 0x4f6331, .byte = 0x3d },
		{ .addr = 0x4f6332, .byte = 0x05 },
		{ .addr = 0x4f6333, .byte = 0xf1 },
		{ .addr = 0x4f6334, .byte = 0x2b },
		{ .addr = 0x4f6335, .byte = 0x5d },
		{ .addr = 0x4f6336, .byte = 0x3f },
		{ .addr = 0x4f6337, .byte = 0x0e },
		{ .addr = 0x4f6338, .byte = 0xb9 },
		{ .addr = 0x4f6339, .byte = 0x2c },
		{ .addr = 0x4f633a, .byte = 0xa9 },
		{ .addr = 0x4f633b, .byte = 0x08 },
		{ .addr = 0x4f633c, .byte = 0x25 },
		{ .addr = 0x4f633d, .byte = 0x61 },
		{ .addr = 0x4f633e, .byte = 0x26 },
		{ .addr = 0x4f633f, .byte = 0xe2 },
		{ .addr = 0x4f6340, .byte = 0x79 },
		{ .addr = 0x4f6341, .byte = 0x84 },
		{ .addr = 0x4f6342, .byte = 0xe2 },
		{ .addr = 0x4f6343, .byte = 0x7b },
		{ .addr = 0x4f6344, .byte = 0xce },
		{ .addr = 0x4f6345, .byte = 0x8e },
		{ .addr = 0x4f6346, .byte = 0xf2 },
		{ .addr = 0x4f6347, .byte = 0xa4 },
		{ .addr = 0x4f6348, .byte = 0xe5 },
		{ .addr = 0x4f6349, .byte = 0x8a },
		{ .addr = 0x4f634a, .byte = 0x71 },
		{ .addr = 0x4f634b, .byte = 0xa6 },
		{ .addr = 0x4f634c, .byte = 0x6c },
		{ .addr = 0x4f634d, .byte = 0x94 },
		{ .addr = 0x4f634e, .byte = 0x7d },
		{ .addr = 0x4f634f, .byte = 0xd2 },
		{ .addr = 0x110d96, .byte = 0xbe },
		{ .addr = 0x110d97, .byte = 0x3b }
};

static const SST_RamByte moveml_final_ram_31[] = {
		{ .addr = 0x110d8c, .byte = 0x4c },
		{ .addr = 0x110d8d, .byte = 0xf9 },
		{ .addr = 0x110d8e, .byte = 0xbd },
		{ .addr = 0x110d8f, .byte = 0x87 },
		{ .addr = 0x110d90, .byte = 0xf9 },
		{ .addr = 0x110d91, .byte = 0x4f },
		{ .addr = 0x110d92, .byte = 0x63 },
		{ .addr = 0x110d93, .byte = 0x26 },
		{ .addr = 0x110d94, .byte = 0x7f },
		{ .addr = 0x110d95, .byte = 0x35 },
		{ .addr = 0x4f6326, .byte = 0xbe },
		{ .addr = 0x4f6327, .byte = 0x42 },
		{ .addr = 0x4f6328, .byte = 0xe1 },
		{ .addr = 0x4f6329, .byte = 0x89 },
		{ .addr = 0x4f632a, .byte = 0x3d },
		{ .addr = 0x4f632b, .byte = 0x77 },
		{ .addr = 0x4f632c, .byte = 0x20 },
		{ .addr = 0x4f632d, .byte = 0x08 },
		{ .addr = 0x4f632e, .byte = 0x39 },
		{ .addr = 0x4f632f, .byte = 0xc2 },
		{ .addr = 0x4f6330, .byte = 0x15 },
		{ .addr = 0x4f6331, .byte = 0x3d },
		{ .addr = 0x4f6332, .byte = 0x05 },
		{ .addr = 0x4f6333, .byte = 0xf1 },
		{ .addr = 0x4f6334, .byte = 0x2b },
		{ .addr = 0x4f6335, .byte = 0x5d },
		{ .addr = 0x4f6336, .byte = 0x3f },
		{ .addr = 0x4f6337, .byte = 0x0e },
		{ .addr = 0x4f6338, .byte = 0xb9 },
		{ .addr = 0x4f6339, .byte = 0x2c },
		{ .addr = 0x4f633a, .byte = 0xa9 },
		{ .addr = 0x4f633b, .byte = 0x08 },
		{ .addr = 0x4f633c, .byte = 0x25 },
		{ .addr = 0x4f633d, .byte = 0x61 },
		{ .addr = 0x4f633e, .byte = 0x26 },
		{ .addr = 0x4f633f, .byte = 0xe2 },
		{ .addr = 0x4f6340, .byte = 0x79 },
		{ .addr = 0x4f6341, .byte = 0x84 },
		{ .addr = 0x4f6342, .byte = 0xe2 },
		{ .addr = 0x4f6343, .byte = 0x7b },
		{ .addr = 0x4f6344, .byte = 0xce },
		{ .addr = 0x4f6345, .byte = 0x8e },
		{ .addr = 0x4f6346, .byte = 0xf2 },
		{ .addr = 0x4f6347, .byte = 0xa4 },
		{ .addr = 0x4f6348, .byte = 0xe5 },
		{ .addr = 0x4f6349, .byte = 0x8a },
		{ .addr = 0x4f634a, .byte = 0x71 },
		{ .addr = 0x4f634b, .byte = 0xa6 },
		{ .addr = 0x4f634c, .byte = 0x6c },
		{ .addr = 0x4f634d, .byte = 0x94 },
		{ .addr = 0x4f634e, .byte = 0x7d },
		{ .addr = 0x4f634f, .byte = 0xd2 },
		{ .addr = 0x110d96, .byte = 0xbe },
		{ .addr = 0x110d97, .byte = 0x3b }
};

static const SST_Transaction moveml_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1117584, .data = 63823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1117586, .data = 25382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1117588, .data = 32565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202726, .data = 48706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202728, .data = 57737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202730, .data = 15735, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202732, .data = 8200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202734, .data = 14786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202736, .data = 5437, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202738, .data = 1521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202740, .data = 11101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202742, .data = 16142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202744, .data = 47404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202746, .data = 43272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202748, .data = 9569, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202750, .data = 9954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202752, .data = 31108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202754, .data = 57979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202756, .data = 52878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202758, .data = 62116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202760, .data = 58762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202762, .data = 29094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202764, .data = 27796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5202766, .data = 32210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1117590, .data = 48699, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase moveml[] = {
	{
		.name = "000 MOVEM.l (A0), # 4cd0",
		.initial = {
			.regs = {
				4145974960, 98666609, 4134305615, 2306122646, 3759942418, 2261160881, 4192929536, 495306415, 1291678793, 1674217383, 3287716855, 1614216120, 530989899, 1794898052, 3703973272, 590824, 3242804, 8991, 14353542
			},
			.prefetch0 = 19664,
			.prefetch1 = 14355,
			.ram = moveml_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4145974960, 98666609, 4134305615, 2306122646, 3759942418, 2261160881, 4192929536, 495306415, 1291678793, 1674217383, 3287716855, 1614216120, 530989899, 1794898052, 3703973272, 590824, 3242790, 8991, 2442844438
			},
			.prefetch0 = 26563,
			.prefetch1 = 29022,
			.ram = moveml_final_ram_0,
			.ram_len = 28,
		},
		.transactions = moveml_transactions_0,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "001 MOVEM.l (d8, A4, Xn), # 4cf4",
		.initial = {
			.regs = {
				1956007451, 1240403900, 1967257468, 531937664, 40152686, 3972398928, 874828324, 2739302825, 1133087284, 1326278158, 1151074100, 2567562883, 1609629347, 528531591, 1979878998, 13990974, 12221174, 1548, 15087552
			},
			.prefetch0 = 19700,
			.prefetch1 = 11676,
			.ram = moveml_initial_ram_1,
			.ram_len = 44,
		},
		.final = {
			.regs = {
				1956007451, 1240403900, 1943010017, 70097546, 2470101177, 3972398928, 874828324, 1385191546, 85799539, 1326278158, 1620028175, 3269280595, 1609629347, 3372588582, 1979878998, 13990974, 12221174, 1548, 15087558
			},
			.prefetch0 = 22002,
			.prefetch1 = 34846,
			.ram = moveml_final_ram_1,
			.ram_len = 44,
		},
		.transactions = moveml_transactions_1,
		.transactions_len = 21,
		.lenght = 82,
	},
	{
		.name = "002 MOVEM.l (d8, A4, Xn), # 4cf4",
		.initial = {
			.regs = {
				1046825026, 854649119, 759441139, 4152325537, 3960836123, 500002614, 1155448271, 2859758076, 3084247223, 3756893720, 1861697201, 861111362, 3570261552, 1806013241, 583013304, 8026878, 16318874, 1050, 14759686
			},
			.prefetch0 = 19700,
			.prefetch1 = 44972,
			.ram = moveml_initial_ram_2,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1046825026, 854649119, 759441139, 4152325537, 3960836123, 500002614, 1155448271, 2859758076, 3084247223, 3756893720, 1861697201, 861111362, 3570261552, 1806013241, 583013304, 8026878, 16318860, 9242, 1101010914
			},
			.prefetch0 = 34128,
			.prefetch1 = 35943,
			.ram = moveml_final_ram_2,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_2,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "003 MOVEM.l #, (A0) 48d0",
		.initial = {
			.regs = {
				77615591, 1657815652, 2791253813, 1096912506, 628397540, 156611183, 1047132485, 2100220009, 3236433959, 2484151438, 895390182, 2196421833, 575630474, 3583281252, 4139063694, 14205734, 14345404, 10012, 4614774
			},
			.prefetch0 = 18640,
			.prefetch1 = 4287,
			.ram = moveml_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				77615591, 1657815652, 2791253813, 1096912506, 628397540, 156611183, 1047132485, 2100220009, 3236433959, 2484151438, 895390182, 2196421833, 575630474, 3583281252, 4139063694, 14205734, 14345390, 10012, 2431186884
			},
			.prefetch0 = 10725,
			.prefetch1 = 17634,
			.ram = moveml_final_ram_3,
			.ram_len = 28,
		},
		.transactions = moveml_transactions_3,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "004 MOVEM.l (A5)+, # 4cdd",
		.initial = {
			.regs = {
				872278185, 954778891, 3697605503, 2955481453, 3348261299, 3586134300, 1702284329, 3285883626, 1717466182, 1973253646, 1739610488, 2523411111, 1588055481, 722896810, 2452534009, 8355788, 8457410, 33561, 12798612
			},
			.prefetch0 = 19677,
			.prefetch1 = 10975,
			.ram = moveml_initial_ram_4,
			.ram_len = 50,
		},
		.final = {
			.regs = {
				1532494848, 2540589511, 1492608062, 2356760062, 3753440367, 3586134300, 3951134268, 3641910746, 1717466182, 2594447994, 1739610488, 295841214, 1588055481, 722896850, 2452534009, 8355788, 8457410, 33561, 12798616
			},
			.prefetch0 = 55781,
			.prefetch1 = 61003,
			.ram = moveml_final_ram_4,
			.ram_len = 50,
		},
		.transactions = moveml_transactions_4,
		.transactions_len = 23,
		.lenght = 92,
	},
	{
		.name = "005 MOVEM.l #, (d16, A5) 48ed",
		.initial = {
			.regs = {
				2274766132, 3840766024, 512260030, 3410659772, 1497213113, 2157400353, 2656604444, 3125717008, 3569727608, 610798457, 2718783602, 2718480567, 665952033, 194619596, 1254168570, 949392, 10476356, 9480, 5471900
			},
			.prefetch0 = 18669,
			.prefetch1 = 20761,
			.ram = moveml_initial_ram_5,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2274766132, 3840766024, 512260030, 3410659772, 1497213113, 2157400353, 2656604444, 3125717008, 3569727608, 610798457, 2718783602, 2718480567, 665952033, 194619596, 1254168570, 949392, 10476342, 9480, 4204457476
			},
			.prefetch0 = 14128,
			.prefetch1 = 56110,
			.ram = moveml_final_ram_5,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_5,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "006 MOVEM.l #, (d16, A6) 48ee",
		.initial = {
			.regs = {
				3023311771, 3488014991, 3129032473, 2671950469, 2035147327, 4163203797, 1201745629, 1145163465, 1942549198, 2290620693, 1060517460, 2032845835, 4252007138, 2168086015, 3181822459, 7943390, 12731156, 41758, 5760216
			},
			.prefetch0 = 18670,
			.prefetch1 = 5456,
			.ram = moveml_initial_ram_6,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3023311771, 3488014991, 3129032473, 2671950469, 2035147327, 4163203797, 1201745629, 1145163465, 1942549198, 2290620693, 1060517460, 2032845835, 4252007138, 2168086015, 3181822459, 7943390, 12731142, 8990, 1353464338
			},
			.prefetch0 = 11964,
			.prefetch1 = 33326,
			.ram = moveml_final_ram_6,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_6,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "007 MOVEM.l (d16, A2), # 4cea",
		.initial = {
			.regs = {
				608126343, 3001634908, 3554704709, 3836116762, 2751248233, 1250863907, 2365988522, 2205449284, 4195535361, 2968175994, 2624492932, 2278804875, 1045755157, 937483573, 3684919630, 15464414, 8488560, 33799, 10843408
			},
			.prefetch0 = 19690,
			.prefetch1 = 27887,
			.ram = moveml_initial_ram_7,
			.ram_len = 56,
		},
		.final = {
			.regs = {
				1081213732, 852955634, 517744322, 1636456554, 2751248233, 1193222428, 1480810002, 2373331453, 4195535361, 2968175994, 3406876683, 609479951, 1045755157, 130899545, 2099751182, 15464414, 8488560, 33799, 10843414
			},
			.prefetch0 = 7790,
			.prefetch1 = 2837,
			.ram = moveml_final_ram_7,
			.ram_len = 56,
		},
		.transactions = moveml_transactions_7,
		.transactions_len = 26,
		.lenght = 104,
	},
	{
		.name = "008 MOVEM.l #, (xxx).l 48f9",
		.initial = {
			.regs = {
				1532140407, 2583787301, 3573950455, 1675581532, 2380853079, 1154658123, 1779301460, 3464157110, 3760306894, 2349458348, 3562384604, 2314341011, 48123601, 1672059507, 1776328001, 1251718, 4363652, 1025, 4735328
			},
			.prefetch0 = 18681,
			.prefetch1 = 7542,
			.ram = moveml_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1532140407, 2583787301, 3573950455, 1675581532, 2380853079, 1154658123, 1779301460, 3464157110, 3760306894, 2349458348, 3562384604, 2314341011, 48123601, 1672059507, 1776328001, 1251718, 4363652, 1025, 4735336
			},
			.prefetch0 = 16467,
			.prefetch1 = 18970,
			.ram = moveml_final_ram_8,
			.ram_len = 48,
		},
		.transactions = moveml_transactions_8,
		.transactions_len = 22,
		.lenght = 88,
	},
	{
		.name = "009 MOVEM.l #, (A0) 48d0",
		.initial = {
			.regs = {
				4224799304, 1563811691, 3622247218, 2924973687, 113296398, 3398665380, 1470020133, 3287506369, 1190417388, 4069070413, 1869948873, 3947367516, 2828530527, 4205047761, 2477089197, 2321984, 5211542, 8218, 11761800
			},
			.prefetch0 = 18640,
			.prefetch1 = 40871,
			.ram = moveml_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4224799304, 1563811691, 3622247218, 2924973687, 113296398, 3398665380, 1470020133, 3287506369, 1190417388, 4069070413, 1869948873, 3947367516, 2828530527, 4205047761, 2477089197, 2321984, 5211542, 8218, 11761804
			},
			.prefetch0 = 22926,
			.prefetch1 = 19603,
			.ram = moveml_final_ram_9,
			.ram_len = 52,
		},
		.transactions = moveml_transactions_9,
		.transactions_len = 24,
		.lenght = 96,
	},
	{
		.name = "010 MOVEM.l (d8, A6, Xn), # 4cf6",
		.initial = {
			.regs = {
				2118960599, 2122753640, 636143189, 939936811, 2492505755, 4168068245, 2445396621, 3997764028, 863062788, 1283380243, 972455047, 960594905, 2603997654, 1536339205, 3341534580, 13240722, 13930910, 280, 15152956
			},
			.prefetch0 = 19702,
			.prefetch1 = 15077,
			.ram = moveml_initial_ram_10,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2118960599, 2122753640, 636143189, 939936811, 2492505755, 4168068245, 2445396621, 3997764028, 863062788, 1283380243, 972455047, 960594905, 2603997654, 1536339205, 3341534580, 13240722, 13930896, 8472, 1249694732
			},
			.prefetch0 = 13412,
			.prefetch1 = 1594,
			.ram = moveml_final_ram_10,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_10,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "011 MOVEM.l (d16, A2), # 4cea",
		.initial = {
			.regs = {
				2008983887, 3326415791, 1877712335, 1888705067, 2848837971, 2989605057, 1580683057, 1651556137, 649340913, 464342466, 1312183271, 1528872623, 924888834, 4208729863, 437075105, 8119520, 4154714, 33554, 2807312
			},
			.prefetch0 = 19690,
			.prefetch1 = 47178,
			.ram = moveml_initial_ram_11,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2008983887, 3326415791, 1877712335, 1888705067, 2848837971, 2989605057, 1580683057, 1651556137, 649340913, 464342466, 1312183271, 1528872623, 924888834, 4208729863, 437075105, 8119520, 4154700, 8978, 863690920
			},
			.prefetch0 = 59725,
			.prefetch1 = 12948,
			.ram = moveml_final_ram_11,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_11,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "012 MOVEM.l (d8, A3, Xn), # 4cf3",
		.initial = {
			.regs = {
				4170521937, 228886820, 2527212074, 2052561865, 3232967574, 4120224839, 1394538835, 2965034308, 3669801234, 268399601, 2207172779, 2944878499, 3699134434, 1956728172, 2275411045, 6802564, 16512810, 9745, 16605276
			},
			.prefetch0 = 19699,
			.prefetch1 = 30497,
			.ram = moveml_initial_ram_12,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				4170521937, 228886820, 2527212074, 2052561865, 3232967574, 4120224839, 1394538835, 2965034308, 3669801234, 268399601, 2207172779, 2944878499, 3699134434, 1956728172, 2275411045, 6802564, 16512796, 9745, 3436330198
			},
			.prefetch0 = 19103,
			.prefetch1 = 21629,
			.ram = moveml_final_ram_12,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_12,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "013 MOVEM.l #, -(A2) 48e2",
		.initial = {
			.regs = {
				4018100005, 1499104160, 414953146, 1839476238, 4042007349, 3814854521, 3268513544, 721729325, 1538859604, 2531034914, 1725681922, 3246620445, 1710751343, 2899858814, 673184121, 4739106, 8667978, 276, 8825792
			},
			.prefetch0 = 18658,
			.prefetch1 = 59553,
			.ram = moveml_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4018100005, 1499104160, 414953146, 1839476238, 4042007349, 3814854521, 3268513544, 721729325, 1538859604, 2531034914, 1725681894, 3246620445, 1710751343, 2899858814, 673184121, 4739106, 8667978, 276, 8825796
			},
			.prefetch0 = 5191,
			.prefetch1 = 26798,
			.ram = moveml_final_ram_13,
			.ram_len = 36,
		},
		.transactions = moveml_transactions_13,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "014 MOVEM.l #, (d8, A5, Xn) 48f5",
		.initial = {
			.regs = {
				2851794334, 3275412095, 3340538844, 4054755955, 3135865700, 3683458198, 1418471529, 3495527735, 31349053, 2384461927, 942934934, 964000746, 4139914957, 4250102658, 2509107481, 12321706, 16755936, 8474, 4770180
			},
			.prefetch0 = 18677,
			.prefetch1 = 36009,
			.ram = moveml_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2851794334, 3275412095, 3340538844, 4054755955, 3135865700, 3683458198, 1418471529, 3495527735, 31349053, 2384461927, 942934934, 964000746, 4139914957, 4250102658, 2509107481, 12321706, 16755936, 8474, 4770186
			},
			.prefetch0 = 17071,
			.prefetch1 = 40334,
			.ram = moveml_final_ram_14,
			.ram_len = 38,
		},
		.transactions = moveml_transactions_14,
		.transactions_len = 18,
		.lenght = 70,
	},
	{
		.name = "015 MOVEM.l #, -(A5) 48e5",
		.initial = {
			.regs = {
				1278513264, 3575646063, 1285744398, 2798249934, 195657227, 563439844, 3194051315, 1970772434, 1780326700, 3601180856, 3843204094, 2436641317, 3997046034, 1237371377, 2096735056, 14849574, 4604074, 41989, 4493980
			},
			.prefetch0 = 18661,
			.prefetch1 = 3552,
			.ram = moveml_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1278513264, 3575646063, 1285744398, 2798249934, 195657227, 563439844, 3194051315, 1970772434, 1780326700, 3601180856, 3843204094, 2436641317, 3997046034, 1237371377, 2096735056, 14849574, 4604060, 9221, 3608847548
			},
			.prefetch0 = 60060,
			.prefetch1 = 36145,
			.ram = moveml_final_ram_15,
			.ram_len = 28,
		},
		.transactions = moveml_transactions_15,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "016 MOVEM.l (xxx).l, # 4cf9",
		.initial = {
			.regs = {
				1184958980, 385947677, 4209925436, 3394126657, 3912169287, 2308721864, 2462205031, 541121696, 2913076411, 3962119492, 2960920381, 3020783394, 3072184513, 3462632360, 3330205068, 5621878, 6807792, 33291, 15514748
			},
			.prefetch0 = 19705,
			.prefetch1 = 62045,
			.ram = moveml_initial_ram_16,
			.ram_len = 54,
		},
		.final = {
			.regs = {
				2504021966, 385947677, 3347775980, 2919631664, 1930963505, 2308721864, 669313000, 541121696, 2913076411, 841265120, 2960920381, 3020783394, 2495619292, 2395310124, 736305547, 3648934665, 6807792, 33291, 15514756
			},
			.prefetch0 = 16199,
			.prefetch1 = 56245,
			.ram = moveml_final_ram_16,
			.ram_len = 54,
		},
		.transactions = moveml_transactions_16,
		.transactions_len = 25,
		.lenght = 100,
	},
	{
		.name = "017 MOVEM.l (d8, A6, Xn), # 4cf6",
		.initial = {
			.regs = {
				898912870, 4245204468, 1516671368, 2850093913, 274067370, 589643798, 1941741280, 3374414446, 4128507898, 2152109295, 2304164032, 998772115, 3814059945, 1754150204, 408712593, 3502158, 13397210, 798, 13782108
			},
			.prefetch0 = 19702,
			.prefetch1 = 45524,
			.ram = moveml_initial_ram_17,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				898912870, 4245204468, 1516671368, 2850093913, 274067370, 589643798, 1941741280, 3374414446, 4128507898, 2152109295, 2304164032, 998772115, 3814059945, 1754150204, 408712593, 3502158, 13397196, 8990, 2864200626
			},
			.prefetch0 = 63728,
			.prefetch1 = 57421,
			.ram = moveml_final_ram_17,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_17,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "018 MOVEM.l #, (d16, A3) 48eb",
		.initial = {
			.regs = {
				1398650090, 3702133038, 269362851, 3229488137, 1309504355, 2881587190, 710464206, 2257120030, 2581645858, 3106760384, 4019467232, 22770614, 150563073, 4144233835, 2034348516, 8012256, 7629648, 527, 219688
			},
			.prefetch0 = 18667,
			.prefetch1 = 4133,
			.ram = moveml_initial_ram_18,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1398650090, 3702133038, 269362851, 3229488137, 1309504355, 2881587190, 710464206, 2257120030, 2581645858, 3106760384, 4019467232, 22770614, 150563073, 4144233835, 2034348516, 8012256, 7629634, 8719, 964590800
			},
			.prefetch0 = 58217,
			.prefetch1 = 48115,
			.ram = moveml_final_ram_18,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_18,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "019 MOVEM.l #, (d8, A7, Xn) 48f7",
		.initial = {
			.regs = {
				4259124231, 3990227430, 2130338340, 1436703567, 2854385153, 3628741738, 1072493967, 3531244577, 3623856072, 2449650792, 3791851602, 3739239508, 2153158399, 755824915, 2539474759, 6363126, 5038578, 9986, 3036890
			},
			.prefetch0 = 18679,
			.prefetch1 = 110,
			.ram = moveml_initial_ram_19,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				4259124231, 3990227430, 2130338340, 1436703567, 2854385153, 3628741738, 1072493967, 3531244577, 3623856072, 2449650792, 3791851602, 3739239508, 2153158399, 755824915, 2539474759, 6363126, 5038564, 9986, 640443912
			},
			.prefetch0 = 51715,
			.prefetch1 = 4758,
			.ram = moveml_final_ram_19,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_19,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "020 MOVEM.l #, (xxx).l 48f9",
		.initial = {
			.regs = {
				2272534173, 3358814888, 538607265, 2891887584, 527669401, 3809809426, 4130914483, 2563758286, 3434711856, 1739097445, 545001170, 306809920, 985001216, 2887711063, 2792008308, 7182282, 16020192, 9754, 2479168
			},
			.prefetch0 = 18681,
			.prefetch1 = 51807,
			.ram = moveml_initial_ram_20,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				2272534173, 3358814888, 538607265, 2891887584, 527669401, 3809809426, 4130914483, 2563758286, 3434711856, 1739097445, 545001170, 306809920, 985001216, 2887711063, 2792008308, 7182282, 16020178, 9754, 356790046
			},
			.prefetch0 = 2551,
			.prefetch1 = 63518,
			.ram = moveml_final_ram_20,
			.ram_len = 32,
		},
		.transactions = moveml_transactions_20,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "021 MOVEM.l (A2)+, # 4cda",
		.initial = {
			.regs = {
				2365748130, 2736784177, 3901938646, 3098854779, 1843428543, 1172315450, 3480059136, 3570340081, 2992007836, 1700742108, 443959536, 1951847613, 910227797, 3380170337, 1177522461, 8652162, 16311360, 34057, 14320132
			},
			.prefetch0 = 19674,
			.prefetch1 = 30505,
			.ram = moveml_initial_ram_21,
			.ram_len = 46,
		},
		.final = {
			.regs = {
				3829758529, 2736784177, 3901938646, 4117799539, 1843428543, 2309611136, 3480059136, 3570340081, 4104732962, 271235564, 443959572, 1951847613, 1087949816, 2583757303, 3174759765, 8652162, 16311360, 34057, 14320136
			},
			.prefetch0 = 53766,
			.prefetch1 = 9749,
			.ram = moveml_final_ram_21,
			.ram_len = 46,
		},
		.transactions = moveml_transactions_21,
		.transactions_len = 21,
		.lenght = 84,
	},
	{
		.name = "022 MOVEM.l (xxx).l, # 4cf9",
		.initial = {
			.regs = {
				1186129407, 60204806, 1431269418, 512098457, 1967719560, 4288068888, 2968092128, 1180944024, 3805764481, 2923746533, 2349576488, 1943733907, 3731804646, 841662076, 3846125121, 15133884, 16725340, 8714, 10118510
			},
			.prefetch0 = 19705,
			.prefetch1 = 37887,
			.ram = moveml_initial_ram_22,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				1186129407, 60204806, 1431269418, 512098457, 1967719560, 4288068888, 2968092128, 1180944024, 3805764481, 2923746533, 2349576488, 1943733907, 3731804646, 841662076, 3846125121, 15133884, 16725326, 8714, 3852651838
			},
			.prefetch0 = 50058,
			.prefetch1 = 26672,
			.ram = moveml_final_ram_22,
			.ram_len = 32,
		},
		.transactions = moveml_transactions_22,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "023 MOVEM.l #, (d16, A2) 48ea",
		.initial = {
			.regs = {
				495926655, 2895005210, 3382032162, 370870299, 1723742439, 1686139839, 4157593858, 2510837209, 3033385020, 2368225426, 2536528814, 231637450, 1241319724, 2785322959, 2473594616, 16258898, 2670066, 41999, 559758
			},
			.prefetch0 = 18666,
			.prefetch1 = 3828,
			.ram = moveml_initial_ram_23,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				495926655, 2895005210, 3382032162, 370870299, 1723742439, 1686139839, 4157593858, 2510837209, 3033385020, 2368225426, 2536528814, 231637450, 1241319724, 2785322959, 2473594616, 16258898, 2670066, 41999, 559764
			},
			.prefetch0 = 41906,
			.prefetch1 = 49216,
			.ram = moveml_final_ram_23,
			.ram_len = 42,
		},
		.transactions = moveml_transactions_23,
		.transactions_len = 19,
		.lenght = 76,
	},
	{
		.name = "024 MOVEM.l (d16, A7), # 4cef",
		.initial = {
			.regs = {
				781904941, 1192605426, 1821316176, 3171337561, 3139557863, 2986370459, 4169381112, 4195235951, 4047036379, 2340529622, 227122042, 3236031821, 1313220823, 2223667265, 459590273, 14596654, 10843576, 286, 4737870
			},
			.prefetch0 = 19695,
			.prefetch1 = 29173,
			.ram = moveml_initial_ram_24,
			.ram_len = 52,
		},
		.final = {
			.regs = {
				2841933126, 1192605426, 3884289948, 3171337561, 404817052, 1965057734, 3509067959, 158244036, 2698865735, 2340529622, 227122042, 3236031821, 2581403182, 3481113209, 3881415631, 14596654, 10843576, 286, 4737876
			},
			.prefetch0 = 36522,
			.prefetch1 = 55931,
			.ram = moveml_final_ram_24,
			.ram_len = 52,
		},
		.transactions = moveml_transactions_24,
		.transactions_len = 24,
		.lenght = 96,
	},
	{
		.name = "025 MOVEM.l (d8, A7, Xn), # 4cf7",
		.initial = {
			.regs = {
				713158465, 3232846091, 2507823513, 3559392250, 41815601, 2206960423, 2953446325, 4007610285, 806460263, 3457388138, 2883162483, 3858778232, 3388045895, 2183882432, 2329393762, 258480, 6252984, 41230, 13651198
			},
			.prefetch0 = 19703,
			.prefetch1 = 7539,
			.ram = moveml_initial_ram_25,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				713158465, 3232846091, 2507823513, 3559392250, 41815601, 2206960423, 2953446325, 4007610285, 806460263, 3457388138, 2883162483, 3858778232, 3388045895, 2183882432, 2329393762, 258480, 6252970, 8462, 1748657626
			},
			.prefetch0 = 55046,
			.prefetch1 = 31786,
			.ram = moveml_final_ram_25,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_25,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "026 MOVEM.l #, (d8, A0, Xn) 48f0",
		.initial = {
			.regs = {
				274321157, 3368223448, 4261590471, 2252853779, 1628997085, 3433672770, 2892285998, 343535719, 2566218803, 4218853562, 1167070469, 799343087, 447952897, 3441626189, 2999269211, 16129546, 49426, 1041, 14430446
			},
			.prefetch0 = 18672,
			.prefetch1 = 55988,
			.ram = moveml_initial_ram_26,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				274321157, 3368223448, 4261590471, 2252853779, 1628997085, 3433672770, 2892285998, 343535719, 2566218803, 4218853562, 1167070469, 799343087, 447952897, 3441626189, 2999269211, 16129546, 49412, 9233, 2107566312
			},
			.prefetch0 = 31812,
			.prefetch1 = 53948,
			.ram = moveml_final_ram_26,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_26,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "027 MOVEM.l #, (d8, A4, Xn) 48f4",
		.initial = {
			.regs = {
				2671117364, 3064808435, 4126287804, 3220013874, 2581685057, 521131853, 808058728, 14903537, 2581325642, 1086069878, 3399693691, 1100947842, 2890204644, 2910612919, 1237277471, 429412, 1730310, 42507, 8970338
			},
			.prefetch0 = 18676,
			.prefetch1 = 4308,
			.ram = moveml_initial_ram_27,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2671117364, 3064808435, 4126287804, 3220013874, 2581685057, 521131853, 808058728, 14903537, 2581325642, 1086069878, 3399693691, 1100947842, 2890204644, 2910612919, 1237277471, 429412, 1730296, 9739, 3657359812
			},
			.prefetch0 = 47790,
			.prefetch1 = 13739,
			.ram = moveml_final_ram_27,
			.ram_len = 30,
		},
		.transactions = moveml_transactions_27,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "028 MOVEM.l (A0), # 4cd0",
		.initial = {
			.regs = {
				1726193839, 2193715914, 3928780240, 2797640300, 3002211983, 1174436932, 3871031340, 3129601574, 2109534671, 260598453, 4279656185, 3528414838, 52078625, 3724182879, 97954553, 7150620, 10630392, 286, 3635946
			},
			.prefetch0 = 19664,
			.prefetch1 = 23548,
			.ram = moveml_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1726193839, 2193715914, 3928780240, 2797640300, 3002211983, 1174436932, 3871031340, 3129601574, 2109534671, 260598453, 4279656185, 3528414838, 52078625, 3724182879, 97954553, 7150620, 10630378, 8478, 183402640
			},
			.prefetch0 = 26116,
			.prefetch1 = 60067,
			.ram = moveml_final_ram_28,
			.ram_len = 28,
		},
		.transactions = moveml_transactions_28,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "029 MOVEM.l #, -(A2) 48e2",
		.initial = {
			.regs = {
				3162758477, 3753646039, 1265073172, 3842572096, 735368455, 2960054142, 3482825660, 4161035773, 3789480327, 1666483478, 401035639, 4078073782, 1352808868, 689674909, 1520187150, 13055146, 2583792, 33048, 5997696
			},
			.prefetch0 = 18658,
			.prefetch1 = 9410,
			.ram = moveml_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3162758477, 3753646039, 1265073172, 3842572096, 735368455, 2960054142, 3482825660, 4161035773, 3789480327, 1666483478, 401035639, 4078073782, 1352808868, 689674909, 1520187150, 13055146, 2583778, 8472, 2835793514
			},
			.prefetch0 = 42782,
			.prefetch1 = 38148,
			.ram = moveml_final_ram_29,
			.ram_len = 28,
		},
		.transactions = moveml_transactions_29,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "030 MOVEM.l (d8, A5, Xn), # 4cf5",
		.initial = {
			.regs = {
				1757018526, 2238990787, 2255015102, 2204663330, 514078221, 2170461230, 2246785879, 514684284, 712644433, 3618073974, 1438118276, 3654760206, 4102885012, 1796625439, 1860730567, 3242302, 1248232, 775, 11267938
			},
			.prefetch0 = 19701,
			.prefetch1 = 36557,
			.ram = moveml_initial_ram_30,
			.ram_len = 48,
		},
		.final = {
			.regs = {
				1026634822, 2238990787, 184193576, 159783517, 514078221, 2170461230, 846603268, 3841761702, 712644433, 2770443592, 4241498205, 3404072472, 4102885012, 1796625439, 1860730567, 3611950396, 1248232, 775, 11267944
			},
			.prefetch0 = 25723,
			.prefetch1 = 50862,
			.ram = moveml_final_ram_30,
			.ram_len = 48,
		},
		.transactions = moveml_transactions_30,
		.transactions_len = 23,
		.lenght = 90,
	},
	{
		.name = "031 MOVEM.l (xxx).l, # 4cf9",
		.initial = {
			.regs = {
				4033005663, 1481638606, 1061473478, 3370218527, 2181948324, 3953433541, 1970503644, 3302065449, 91033608, 3193434131, 4228053436, 2297073072, 3680139529, 2065221260, 2018283666, 10399972, 1684142, 41229, 1117584
			},
			.prefetch0 = 19705,
			.prefetch1 = 48519,
			.ram = moveml_initial_ram_31,
			.ram_len = 54,
		},
		.final = {
			.regs = {
				3192054153, 1031217160, 969020733, 3370218527, 2181948324, 3953433541, 1970503644, 99691357, 1057929516, 3193434131, 2835883361, 652376452, 3799764622, 4070892938, 2018283666, 10399972, 1906732180, 41229, 1117592
			},
			.prefetch0 = 32565,
			.prefetch1 = 48699,
			.ram = moveml_final_ram_31,
			.ram_len = 54,
		},
		.transactions = moveml_transactions_31,
		.transactions_len = 25,
		.lenght = 100,
	},
};

#endif /* RBT_MOVEML_H */