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

const uint32_t MOVEML_TEST_COUNT = 16;
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
};

#endif /* RBT_MOVEML_H */