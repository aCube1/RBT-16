#ifndef RBT_CMPW_H
#define RBT_CMPW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte cmpw_initial_ram_0[] = {
		{ .addr = 0x418a92, .byte = 0xbe },
		{ .addr = 0x418a93, .byte = 0x40 },
		{ .addr = 0x418a94, .byte = 0x11 },
		{ .addr = 0x418a95, .byte = 0x28 },
		{ .addr = 0x418a96, .byte = 0x9c },
		{ .addr = 0x418a97, .byte = 0x2f }
};

static const SST_RamByte cmpw_final_ram_0[] = {
		{ .addr = 0x418a92, .byte = 0xbe },
		{ .addr = 0x418a93, .byte = 0x40 },
		{ .addr = 0x418a94, .byte = 0x11 },
		{ .addr = 0x418a95, .byte = 0x28 },
		{ .addr = 0x418a96, .byte = 0x9c },
		{ .addr = 0x418a97, .byte = 0x2f }
};

static const SST_Transaction cmpw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4295318, .data = 39983, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_1[] = {
		{ .addr = 0x1b8516, .byte = 0xb1 },
		{ .addr = 0x1b8517, .byte = 0x4c },
		{ .addr = 0x1b8518, .byte = 0x68 },
		{ .addr = 0x1b8519, .byte = 0x65 },
		{ .addr = 0x00000c, .byte = 0x84 },
		{ .addr = 0x00000d, .byte = 0x78 },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x7833d0, .byte = 0xea },
		{ .addr = 0x7833d1, .byte = 0x32 },
		{ .addr = 0x7833d2, .byte = 0x01 },
		{ .addr = 0x7833d3, .byte = 0x25 }
};

static const SST_RamByte cmpw_final_ram_1[] = {
		{ .addr = 0x1b8516, .byte = 0xb1 },
		{ .addr = 0x1b8517, .byte = 0x4c },
		{ .addr = 0x1b8518, .byte = 0x68 },
		{ .addr = 0x1b8519, .byte = 0x65 },
		{ .addr = 0xa3aa28, .byte = 0x85 },
		{ .addr = 0xa3aa29, .byte = 0x1a },
		{ .addr = 0xa3aa24, .byte = 0x06 },
		{ .addr = 0xa3aa25, .byte = 0x1c },
		{ .addr = 0xa3aa26, .byte = 0x00 },
		{ .addr = 0xa3aa27, .byte = 0x1b },
		{ .addr = 0xa3aa22, .byte = 0xb1 },
		{ .addr = 0xa3aa23, .byte = 0x4c },
		{ .addr = 0xa3aa20, .byte = 0x04 },
		{ .addr = 0xa3aa21, .byte = 0x77 },
		{ .addr = 0xa3aa1c, .byte = 0xb1 },
		{ .addr = 0xa3aa1d, .byte = 0x51 },
		{ .addr = 0xa3aa1e, .byte = 0x18 },
		{ .addr = 0xa3aa1f, .byte = 0x1d },
		{ .addr = 0x00000c, .byte = 0x84 },
		{ .addr = 0x00000d, .byte = 0x78 },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x7833d0, .byte = 0xea },
		{ .addr = 0x7833d1, .byte = 0x32 },
		{ .addr = 0x7833d2, .byte = 0x01 },
		{ .addr = 0x7833d3, .byte = 0x25 }
};

static const SST_Transaction cmpw_transactions_1[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1901686, .data = 41610, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10725928, .data = 34074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10725924, .data = 1564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10725926, .data = 27, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10725922, .data = 45388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10725920, .data = 1143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10725916, .data = 45393, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10725918, .data = 6173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7877584, .data = 59954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7877586, .data = 293, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_2[] = {
		{ .addr = 0xbb514a, .byte = 0xb0 },
		{ .addr = 0xbb514b, .byte = 0x54 },
		{ .addr = 0xbb514c, .byte = 0x76 },
		{ .addr = 0xbb514d, .byte = 0x6a },
		{ .addr = 0x376092, .byte = 0x2d },
		{ .addr = 0x376093, .byte = 0xaf },
		{ .addr = 0xbb514e, .byte = 0x4a },
		{ .addr = 0xbb514f, .byte = 0xb3 }
};

static const SST_RamByte cmpw_final_ram_2[] = {
		{ .addr = 0xbb514a, .byte = 0xb0 },
		{ .addr = 0xbb514b, .byte = 0x54 },
		{ .addr = 0xbb514c, .byte = 0x76 },
		{ .addr = 0xbb514d, .byte = 0x6a },
		{ .addr = 0x376092, .byte = 0x2d },
		{ .addr = 0x376093, .byte = 0xaf },
		{ .addr = 0xbb514e, .byte = 0x4a },
		{ .addr = 0xbb514f, .byte = 0xb3 }
};

static const SST_Transaction cmpw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3629202, .data = 11695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12276046, .data = 19123, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_3[] = {
		{ .addr = 0xb6f73e, .byte = 0x0c },
		{ .addr = 0xb6f73f, .byte = 0x47 },
		{ .addr = 0xb6f740, .byte = 0xba },
		{ .addr = 0xb6f741, .byte = 0x83 },
		{ .addr = 0xb6f742, .byte = 0x4a },
		{ .addr = 0xb6f743, .byte = 0xb3 },
		{ .addr = 0xb6f744, .byte = 0x40 },
		{ .addr = 0xb6f745, .byte = 0x78 }
};

static const SST_RamByte cmpw_final_ram_3[] = {
		{ .addr = 0xb6f73e, .byte = 0x0c },
		{ .addr = 0xb6f73f, .byte = 0x47 },
		{ .addr = 0xb6f740, .byte = 0xba },
		{ .addr = 0xb6f741, .byte = 0x83 },
		{ .addr = 0xb6f742, .byte = 0x4a },
		{ .addr = 0xb6f743, .byte = 0xb3 },
		{ .addr = 0xb6f744, .byte = 0x40 },
		{ .addr = 0xb6f745, .byte = 0x78 }
};

static const SST_Transaction cmpw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11990850, .data = 19123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11990852, .data = 16504, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_4[] = {
		{ .addr = 0xae53fa, .byte = 0xb2 },
		{ .addr = 0xae53fb, .byte = 0x4f },
		{ .addr = 0xae53fc, .byte = 0x27 },
		{ .addr = 0xae53fd, .byte = 0xfd },
		{ .addr = 0xae53fe, .byte = 0xf7 },
		{ .addr = 0xae53ff, .byte = 0xc3 }
};

static const SST_RamByte cmpw_final_ram_4[] = {
		{ .addr = 0xae53fa, .byte = 0xb2 },
		{ .addr = 0xae53fb, .byte = 0x4f },
		{ .addr = 0xae53fc, .byte = 0x27 },
		{ .addr = 0xae53fd, .byte = 0xfd },
		{ .addr = 0xae53fe, .byte = 0xf7 },
		{ .addr = 0xae53ff, .byte = 0xc3 }
};

static const SST_Transaction cmpw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11424766, .data = 63427, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_5[] = {
		{ .addr = 0xcc29c2, .byte = 0xb2 },
		{ .addr = 0xcc29c3, .byte = 0x41 },
		{ .addr = 0xcc29c4, .byte = 0x0a },
		{ .addr = 0xcc29c5, .byte = 0xaf },
		{ .addr = 0xcc29c6, .byte = 0xcc },
		{ .addr = 0xcc29c7, .byte = 0x5c }
};

static const SST_RamByte cmpw_final_ram_5[] = {
		{ .addr = 0xcc29c2, .byte = 0xb2 },
		{ .addr = 0xcc29c3, .byte = 0x41 },
		{ .addr = 0xcc29c4, .byte = 0x0a },
		{ .addr = 0xcc29c5, .byte = 0xaf },
		{ .addr = 0xcc29c6, .byte = 0xcc },
		{ .addr = 0xcc29c7, .byte = 0x5c }
};

static const SST_Transaction cmpw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13380038, .data = 52316, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_6[] = {
		{ .addr = 0x1ea52e, .byte = 0xba },
		{ .addr = 0x1ea52f, .byte = 0x66 },
		{ .addr = 0x1ea530, .byte = 0x11 },
		{ .addr = 0x1ea531, .byte = 0xae },
		{ .addr = 0x06324c, .byte = 0xcd },
		{ .addr = 0x06324d, .byte = 0x21 },
		{ .addr = 0x1ea532, .byte = 0x0c },
		{ .addr = 0x1ea533, .byte = 0xec }
};

static const SST_RamByte cmpw_final_ram_6[] = {
		{ .addr = 0x1ea52e, .byte = 0xba },
		{ .addr = 0x1ea52f, .byte = 0x66 },
		{ .addr = 0x1ea530, .byte = 0x11 },
		{ .addr = 0x1ea531, .byte = 0xae },
		{ .addr = 0x06324c, .byte = 0xcd },
		{ .addr = 0x06324d, .byte = 0x21 },
		{ .addr = 0x1ea532, .byte = 0x0c },
		{ .addr = 0x1ea533, .byte = 0xec }
};

static const SST_Transaction cmpw_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 406092, .data = 52513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2008370, .data = 3308, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_7[] = {
		{ .addr = 0xfea56e, .byte = 0xba },
		{ .addr = 0xfea56f, .byte = 0x66 },
		{ .addr = 0xfea570, .byte = 0xca },
		{ .addr = 0xfea571, .byte = 0x20 },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0xa8 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0x96a88c, .byte = 0x58 },
		{ .addr = 0x96a88d, .byte = 0x36 },
		{ .addr = 0x96a88e, .byte = 0x87 },
		{ .addr = 0x96a88f, .byte = 0x57 }
};

static const SST_RamByte cmpw_final_ram_7[] = {
		{ .addr = 0xfea56e, .byte = 0xba },
		{ .addr = 0xfea56f, .byte = 0x66 },
		{ .addr = 0xfea570, .byte = 0xca },
		{ .addr = 0xfea571, .byte = 0x20 },
		{ .addr = 0x13191a, .byte = 0xa5 },
		{ .addr = 0x13191b, .byte = 0x72 },
		{ .addr = 0x131916, .byte = 0x82 },
		{ .addr = 0x131917, .byte = 0x10 },
		{ .addr = 0x131918, .byte = 0x00 },
		{ .addr = 0x131919, .byte = 0xfe },
		{ .addr = 0x131914, .byte = 0xba },
		{ .addr = 0x131915, .byte = 0x66 },
		{ .addr = 0x131912, .byte = 0x41 },
		{ .addr = 0x131913, .byte = 0xfb },
		{ .addr = 0x13190e, .byte = 0xba },
		{ .addr = 0x13190f, .byte = 0x71 },
		{ .addr = 0x131910, .byte = 0x86 },
		{ .addr = 0x131911, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0xa8 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0x96a88c, .byte = 0x58 },
		{ .addr = 0x96a88d, .byte = 0x36 },
		{ .addr = 0x96a88e, .byte = 0x87 },
		{ .addr = 0x96a88f, .byte = 0x57 }
};

static const SST_Transaction cmpw_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2048506, .data = 55783, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1251610, .data = 42354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1251606, .data = 33296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1251608, .data = 254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1251604, .data = 47718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1251602, .data = 16891, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1251598, .data = 47729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1251600, .data = 34335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9873548, .data = 22582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9873550, .data = 34647, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_8[] = {
		{ .addr = 0x2f61a4, .byte = 0xb2 },
		{ .addr = 0x2f61a5, .byte = 0x5a },
		{ .addr = 0x2f61a6, .byte = 0xb6 },
		{ .addr = 0x2f61a7, .byte = 0xf9 },
		{ .addr = 0x00000c, .byte = 0xe8 },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0xda },
		{ .addr = 0x28f7da, .byte = 0x0c },
		{ .addr = 0x28f7db, .byte = 0xf6 },
		{ .addr = 0x28f7dc, .byte = 0xa8 },
		{ .addr = 0x28f7dd, .byte = 0xf1 }
};

static const SST_RamByte cmpw_final_ram_8[] = {
		{ .addr = 0x2f61a4, .byte = 0xb2 },
		{ .addr = 0x2f61a5, .byte = 0x5a },
		{ .addr = 0x2f61a6, .byte = 0xb6 },
		{ .addr = 0x2f61a7, .byte = 0xf9 },
		{ .addr = 0xf38f26, .byte = 0x61 },
		{ .addr = 0xf38f27, .byte = 0xa6 },
		{ .addr = 0xf38f22, .byte = 0x03 },
		{ .addr = 0xf38f23, .byte = 0x15 },
		{ .addr = 0xf38f24, .byte = 0x00 },
		{ .addr = 0xf38f25, .byte = 0x2f },
		{ .addr = 0xf38f20, .byte = 0xb2 },
		{ .addr = 0xf38f21, .byte = 0x5a },
		{ .addr = 0xf38f1e, .byte = 0x5b },
		{ .addr = 0xf38f1f, .byte = 0xb5 },
		{ .addr = 0xf38f1a, .byte = 0xb2 },
		{ .addr = 0xf38f1b, .byte = 0x51 },
		{ .addr = 0xf38f1c, .byte = 0x00 },
		{ .addr = 0xf38f1d, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0xe8 },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0xda },
		{ .addr = 0x28f7da, .byte = 0x0c },
		{ .addr = 0x28f7db, .byte = 0xf6 },
		{ .addr = 0x28f7dc, .byte = 0xa8 },
		{ .addr = 0x28f7dd, .byte = 0xf1 }
};

static const SST_Transaction cmpw_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2055092, .data = 36639, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15961894, .data = 24998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15961890, .data = 789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15961892, .data = 47, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15961888, .data = 45658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15961886, .data = 23477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15961882, .data = 45649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15961884, .data = 31, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2684890, .data = 3318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2684892, .data = 43249, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_9[] = {
		{ .addr = 0x42848a, .byte = 0xb0 },
		{ .addr = 0x42848b, .byte = 0x76 },
		{ .addr = 0x42848c, .byte = 0xf1 },
		{ .addr = 0x42848d, .byte = 0xe3 },
		{ .addr = 0x42848e, .byte = 0x9c },
		{ .addr = 0x42848f, .byte = 0xd1 },
		{ .addr = 0x8d8b0e, .byte = 0xa8 },
		{ .addr = 0x8d8b0f, .byte = 0xb2 },
		{ .addr = 0x428490, .byte = 0x3c },
		{ .addr = 0x428491, .byte = 0xa4 }
};

static const SST_RamByte cmpw_final_ram_9[] = {
		{ .addr = 0x42848a, .byte = 0xb0 },
		{ .addr = 0x42848b, .byte = 0x76 },
		{ .addr = 0x42848c, .byte = 0xf1 },
		{ .addr = 0x42848d, .byte = 0xe3 },
		{ .addr = 0x42848e, .byte = 0x9c },
		{ .addr = 0x42848f, .byte = 0xd1 },
		{ .addr = 0x8d8b0e, .byte = 0xa8 },
		{ .addr = 0x8d8b0f, .byte = 0xb2 },
		{ .addr = 0x428490, .byte = 0x3c },
		{ .addr = 0x428491, .byte = 0xa4 }
};

static const SST_Transaction cmpw_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4359310, .data = 40145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9276174, .data = 43186, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4359312, .data = 15524, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_10[] = {
		{ .addr = 0x9a9112, .byte = 0x0c },
		{ .addr = 0x9a9113, .byte = 0x75 },
		{ .addr = 0x9a9114, .byte = 0x94 },
		{ .addr = 0x9a9115, .byte = 0x42 },
		{ .addr = 0x9a9116, .byte = 0x79 },
		{ .addr = 0x9a9117, .byte = 0xc0 },
		{ .addr = 0x9a9118, .byte = 0x02 },
		{ .addr = 0x9a9119, .byte = 0xfe },
		{ .addr = 0x0c4a34, .byte = 0xd5 },
		{ .addr = 0x0c4a35, .byte = 0x64 },
		{ .addr = 0x9a911a, .byte = 0x8e },
		{ .addr = 0x9a911b, .byte = 0x28 }
};

static const SST_RamByte cmpw_final_ram_10[] = {
		{ .addr = 0x9a9112, .byte = 0x0c },
		{ .addr = 0x9a9113, .byte = 0x75 },
		{ .addr = 0x9a9114, .byte = 0x94 },
		{ .addr = 0x9a9115, .byte = 0x42 },
		{ .addr = 0x9a9116, .byte = 0x79 },
		{ .addr = 0x9a9117, .byte = 0xc0 },
		{ .addr = 0x9a9118, .byte = 0x02 },
		{ .addr = 0x9a9119, .byte = 0xfe },
		{ .addr = 0x0c4a34, .byte = 0xd5 },
		{ .addr = 0x0c4a35, .byte = 0x64 },
		{ .addr = 0x9a911a, .byte = 0x8e },
		{ .addr = 0x9a911b, .byte = 0x28 }
};

static const SST_Transaction cmpw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10129686, .data = 31168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10129688, .data = 766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 805428, .data = 54628, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10129690, .data = 36392, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_11[] = {
		{ .addr = 0x2b7f44, .byte = 0xb7 },
		{ .addr = 0x2b7f45, .byte = 0x4f },
		{ .addr = 0x2b7f46, .byte = 0xf6 },
		{ .addr = 0x2b7f47, .byte = 0x36 },
		{ .addr = 0x0b1b06, .byte = 0x14 },
		{ .addr = 0x0b1b07, .byte = 0x34 },
		{ .addr = 0x5ff516, .byte = 0xee },
		{ .addr = 0x5ff517, .byte = 0x39 },
		{ .addr = 0x2b7f48, .byte = 0xdb },
		{ .addr = 0x2b7f49, .byte = 0x26 }
};

static const SST_RamByte cmpw_final_ram_11[] = {
		{ .addr = 0x2b7f44, .byte = 0xb7 },
		{ .addr = 0x2b7f45, .byte = 0x4f },
		{ .addr = 0x2b7f46, .byte = 0xf6 },
		{ .addr = 0x2b7f47, .byte = 0x36 },
		{ .addr = 0x0b1b06, .byte = 0x14 },
		{ .addr = 0x0b1b07, .byte = 0x34 },
		{ .addr = 0x5ff516, .byte = 0xee },
		{ .addr = 0x5ff517, .byte = 0x39 },
		{ .addr = 0x2b7f48, .byte = 0xdb },
		{ .addr = 0x2b7f49, .byte = 0x26 }
};

static const SST_Transaction cmpw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 727814, .data = 5172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6288662, .data = 60985, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2850632, .data = 56102, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_12[] = {
		{ .addr = 0x4824b8, .byte = 0xb2 },
		{ .addr = 0x4824b9, .byte = 0x58 },
		{ .addr = 0x4824ba, .byte = 0x50 },
		{ .addr = 0x4824bb, .byte = 0x72 },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0x80 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x8046e2, .byte = 0x4e },
		{ .addr = 0x8046e3, .byte = 0xde },
		{ .addr = 0x8046e4, .byte = 0xe2 },
		{ .addr = 0x8046e5, .byte = 0x26 }
};

static const SST_RamByte cmpw_final_ram_12[] = {
		{ .addr = 0x4824b8, .byte = 0xb2 },
		{ .addr = 0x4824b9, .byte = 0x58 },
		{ .addr = 0x4824ba, .byte = 0x50 },
		{ .addr = 0x4824bb, .byte = 0x72 },
		{ .addr = 0x349450, .byte = 0x24 },
		{ .addr = 0x349451, .byte = 0xba },
		{ .addr = 0x34944c, .byte = 0x01 },
		{ .addr = 0x34944d, .byte = 0x18 },
		{ .addr = 0x34944e, .byte = 0x00 },
		{ .addr = 0x34944f, .byte = 0x48 },
		{ .addr = 0x34944a, .byte = 0xb2 },
		{ .addr = 0x34944b, .byte = 0x58 },
		{ .addr = 0x349448, .byte = 0xd8 },
		{ .addr = 0x349449, .byte = 0x7f },
		{ .addr = 0x349444, .byte = 0xb2 },
		{ .addr = 0x349445, .byte = 0x51 },
		{ .addr = 0x349446, .byte = 0xdf },
		{ .addr = 0x349447, .byte = 0x79 },
		{ .addr = 0x00000c, .byte = 0x22 },
		{ .addr = 0x00000d, .byte = 0x80 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x8046e2, .byte = 0x4e },
		{ .addr = 0x8046e3, .byte = 0xde },
		{ .addr = 0x8046e4, .byte = 0xe2 },
		{ .addr = 0x8046e5, .byte = 0x26 }
};

static const SST_Transaction cmpw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7985278, .data = 30583, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3445840, .data = 9402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3445836, .data = 280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3445838, .data = 72, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3445834, .data = 45656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3445832, .data = 55423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3445828, .data = 45649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3445830, .data = 57209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8406754, .data = 20190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8406756, .data = 57894, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_13[] = {
		{ .addr = 0x2028d4, .byte = 0xb6 },
		{ .addr = 0x2028d5, .byte = 0x47 },
		{ .addr = 0x2028d6, .byte = 0x7a },
		{ .addr = 0x2028d7, .byte = 0xea },
		{ .addr = 0x2028d8, .byte = 0x39 },
		{ .addr = 0x2028d9, .byte = 0xfe }
};

static const SST_RamByte cmpw_final_ram_13[] = {
		{ .addr = 0x2028d4, .byte = 0xb6 },
		{ .addr = 0x2028d5, .byte = 0x47 },
		{ .addr = 0x2028d6, .byte = 0x7a },
		{ .addr = 0x2028d7, .byte = 0xea },
		{ .addr = 0x2028d8, .byte = 0x39 },
		{ .addr = 0x2028d9, .byte = 0xfe }
};

static const SST_Transaction cmpw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2107608, .data = 14846, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_14[] = {
		{ .addr = 0x905978, .byte = 0xb0 },
		{ .addr = 0x905979, .byte = 0x4e },
		{ .addr = 0x90597a, .byte = 0x68 },
		{ .addr = 0x90597b, .byte = 0x20 },
		{ .addr = 0x90597c, .byte = 0x2a },
		{ .addr = 0x90597d, .byte = 0x1f }
};

static const SST_RamByte cmpw_final_ram_14[] = {
		{ .addr = 0x905978, .byte = 0xb0 },
		{ .addr = 0x905979, .byte = 0x4e },
		{ .addr = 0x90597a, .byte = 0x68 },
		{ .addr = 0x90597b, .byte = 0x20 },
		{ .addr = 0x90597c, .byte = 0x2a },
		{ .addr = 0x90597d, .byte = 0x1f }
};

static const SST_Transaction cmpw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9460092, .data = 10783, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_15[] = {
		{ .addr = 0x455f3e, .byte = 0xb5 },
		{ .addr = 0x455f3f, .byte = 0x49 },
		{ .addr = 0x455f40, .byte = 0x47 },
		{ .addr = 0x455f41, .byte = 0x06 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0xc86124, .byte = 0xc0 },
		{ .addr = 0xc86125, .byte = 0x4d },
		{ .addr = 0xc86126, .byte = 0x37 },
		{ .addr = 0xc86127, .byte = 0x5b }
};

static const SST_RamByte cmpw_final_ram_15[] = {
		{ .addr = 0x455f3e, .byte = 0xb5 },
		{ .addr = 0x455f3f, .byte = 0x49 },
		{ .addr = 0x455f40, .byte = 0x47 },
		{ .addr = 0x455f41, .byte = 0x06 },
		{ .addr = 0x9a096e, .byte = 0x5f },
		{ .addr = 0x9a096f, .byte = 0x42 },
		{ .addr = 0x9a096a, .byte = 0x06 },
		{ .addr = 0x9a096b, .byte = 0x0e },
		{ .addr = 0x9a096c, .byte = 0x00 },
		{ .addr = 0x9a096d, .byte = 0x45 },
		{ .addr = 0x9a0968, .byte = 0xb5 },
		{ .addr = 0x9a0969, .byte = 0x49 },
		{ .addr = 0x9a0966, .byte = 0x9a },
		{ .addr = 0x9a0967, .byte = 0xd1 },
		{ .addr = 0x9a0962, .byte = 0xb5 },
		{ .addr = 0x9a0963, .byte = 0x51 },
		{ .addr = 0x9a0964, .byte = 0x21 },
		{ .addr = 0x9a0965, .byte = 0x78 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0xc86124, .byte = 0xc0 },
		{ .addr = 0xc86125, .byte = 0x4d },
		{ .addr = 0xc86126, .byte = 0x37 },
		{ .addr = 0xc86127, .byte = 0x5b }
};

static const SST_Transaction cmpw_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7903952, .data = 30887, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10094958, .data = 24386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10094954, .data = 1550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10094956, .data = 69, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10094952, .data = 46409, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10094950, .data = 39633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10094946, .data = 46417, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10094948, .data = 8568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13132068, .data = 49229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13132070, .data = 14171, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t CMPW_TEST_COUNT = 16;
static const SST_TestCase cmpw[] = {
	{
		.name = "000 CMP.w D0, D7 be40",
		.initial = {
			.regs = {
				475846680, 1619015039, 2261907358, 638950013, 2024958630, 2787497989, 2852434231, 2181996627, 912093076, 3515086865, 685731751, 945725105, 709438987, 719239687, 621681129, 15983202, 14333880, 1553, 4295318
			},
			.prefetch0 = 48704,
			.prefetch1 = 4392,
			.ram = cmpw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				475846680, 1619015039, 2261907358, 638950013, 2024958630, 2787497989, 2852434231, 2181996627, 912093076, 3515086865, 685731751, 945725105, 709438987, 719239687, 621681129, 15983202, 14333880, 1561, 4295320
			},
			.prefetch0 = 4392,
			.prefetch1 = 39983,
			.ram = cmpw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 CMP.w (A4)+, (A0)+ b14c",
		.initial = {
			.regs = {
				3613005946, 1509383191, 3611158620, 1237508195, 1618212634, 2060646679, 1685859507, 2676090018, 3024519413, 3371909087, 25188061, 2011445513, 404554871, 1210482535, 2436782923, 12256166, 10725930, 1564, 1803546
			},
			.prefetch0 = 45388,
			.prefetch1 = 26725,
			.ram = cmpw_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3613005946, 1509383191, 3611158620, 1237508195, 1618212634, 2060646679, 1685859507, 2676090018, 3024519413, 3371909087, 25188061, 2011445513, 404554873, 1210482535, 2436782923, 12256166, 10725916, 9756, 2222470100
			},
			.prefetch0 = 59954,
			.prefetch1 = 293,
			.ram = cmpw_final_ram_1,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_1,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "002 CMP.w (A4), D0 b054",
		.initial = {
			.regs = {
				434485787, 2440022002, 2695129942, 2481606326, 3933517843, 3578261797, 2399630036, 1528466232, 1645485322, 1598346697, 1470456686, 2383404924, 322396306, 1504064952, 1155514384, 6016922, 13908442, 42774, 12276046
			},
			.prefetch0 = 45140,
			.prefetch1 = 30314,
			.ram = cmpw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				434485787, 2440022002, 2695129942, 2481606326, 3933517843, 3578261797, 2399630036, 1528466232, 1645485322, 1598346697, 1470456686, 2383404924, 322396306, 1504064952, 1155514384, 6016922, 13908442, 42776, 12276048
			},
			.prefetch0 = 30314,
			.prefetch1 = 19123,
			.ram = cmpw_final_ram_2,
			.ram_len = 8,
		},
		.transactions = cmpw_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 CMP.w #, D7 0c47",
		.initial = {
			.regs = {
				312775452, 814065400, 2837298480, 3565520973, 2195459914, 1205464684, 2963560881, 4024301465, 1058815273, 1089224563, 1812180485, 2298775191, 1143533357, 3799527848, 2904424657, 3991482, 16431174, 32785, 11990850
			},
			.prefetch0 = 3143,
			.prefetch1 = 47747,
			.ram = cmpw_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				312775452, 814065400, 2837298480, 3565520973, 2195459914, 1205464684, 2963560881, 4024301465, 1058815273, 1089224563, 1812180485, 2298775191, 1143533357, 3799527848, 2904424657, 3991482, 16431174, 32784, 11990854
			},
			.prefetch0 = 19123,
			.prefetch1 = 16504,
			.ram = cmpw_final_ram_3,
			.ram_len = 8,
		},
		.transactions = cmpw_transactions_3,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "004 CMP.w A7, D1 b24f",
		.initial = {
			.regs = {
				4069806603, 3753324041, 2582304153, 82975163, 3218140247, 3743240808, 3389596798, 1969098423, 3679047434, 4054464783, 3924683846, 3523685857, 1966797904, 4178429502, 1523375641, 9050752, 2179360, 1052, 11424766
			},
			.prefetch0 = 45647,
			.prefetch1 = 10237,
			.ram = cmpw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4069806603, 3753324041, 2582304153, 82975163, 3218140247, 3743240808, 3389596798, 1969098423, 3679047434, 4054464783, 3924683846, 3523685857, 1966797904, 4178429502, 1523375641, 9050752, 2179360, 1040, 11424768
			},
			.prefetch0 = 10237,
			.prefetch1 = 63427,
			.ram = cmpw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 CMP.w D1, D1 b241",
		.initial = {
			.regs = {
				3938531530, 230118387, 1576980268, 4076658858, 2850379304, 3332293198, 2866590800, 2228525271, 2010654849, 1678386976, 2687167759, 2992662490, 951104287, 1391462662, 185803957, 1018016, 14992250, 33800, 13380038
			},
			.prefetch0 = 45633,
			.prefetch1 = 2735,
			.ram = cmpw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3938531530, 230118387, 1576980268, 4076658858, 2850379304, 3332293198, 2866590800, 2228525271, 2010654849, 1678386976, 2687167759, 2992662490, 951104287, 1391462662, 185803957, 1018016, 14992250, 33796, 13380040
			},
			.prefetch0 = 2735,
			.prefetch1 = 52316,
			.ram = cmpw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 CMP.w -(A6), D5 ba66",
		.initial = {
			.regs = {
				2416061113, 97954778, 2474581280, 3574423163, 226899493, 685818261, 1846063807, 882041263, 3438147016, 3056588365, 4027527765, 2884393057, 2285550411, 221683837, 3892720206, 5420888, 10214506, 42769, 2008370
			},
			.prefetch0 = 47718,
			.prefetch1 = 4526,
			.ram = cmpw_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2416061113, 97954778, 2474581280, 3574423163, 226899493, 685818261, 1846063807, 882041263, 3438147016, 3056588365, 4027527765, 2884393057, 2285550411, 221683837, 3892720204, 5420888, 10214506, 42777, 2008372
			},
			.prefetch0 = 4526,
			.prefetch1 = 3308,
			.ram = cmpw_final_ram_6,
			.ram_len = 8,
		},
		.transactions = cmpw_transactions_6,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "007 CMP.w -(A6), D5 ba66",
		.initial = {
			.regs = {
				2499798164, 3809036789, 1735858704, 847462927, 3712554157, 3851968437, 2961574737, 2301489186, 3130103299, 2175009989, 817543367, 478023771, 134324092, 604903665, 2250195453, 13551346, 1251612, 33296, 16688498
			},
			.prefetch0 = 47718,
			.prefetch1 = 51744,
			.ram = cmpw_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2499798164, 3809036789, 1735858704, 847462927, 3712554157, 3851968437, 2961574737, 2301489186, 3130103299, 2175009989, 817543367, 478023771, 134324092, 604903665, 2250195451, 13551346, 1251598, 8720, 2341906576
			},
			.prefetch0 = 22582,
			.prefetch1 = 34647,
			.ram = cmpw_final_ram_7,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_7,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "008 CMP.w (A2)+, D1 b25a",
		.initial = {
			.regs = {
				3428749975, 4079557164, 3830985452, 634696775, 2964184984, 272104714, 647725234, 1841084974, 2106667477, 2760918605, 2055093, 4082767779, 2980712918, 847535024, 876440455, 696768, 15961896, 789, 3105192
			},
			.prefetch0 = 45658,
			.prefetch1 = 46841,
			.ram = cmpw_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3428749975, 4079557164, 3830985452, 634696775, 2964184984, 272104714, 647725234, 1841084974, 2106667477, 2760918605, 2055095, 4082767779, 2980712918, 847535024, 876440455, 696768, 15961882, 8981, 3894999006
			},
			.prefetch0 = 3318,
			.prefetch1 = 43249,
			.ram = cmpw_final_ram_8,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 CMP.w (d8, A6, Xn), D0 b076",
		.initial = {
			.regs = {
				665388777, 2970889951, 1647228091, 550384987, 3400265071, 895443336, 895382084, 1798398012, 3137661172, 1079710334, 137841855, 581290782, 1318549298, 1429717233, 3062710217, 11094882, 8790182, 33797, 4359310
			},
			.prefetch0 = 45174,
			.prefetch1 = 61923,
			.ram = cmpw_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				665388777, 2970889951, 1647228091, 550384987, 3400265071, 895443336, 895382084, 1798398012, 3137661172, 1079710334, 137841855, 581290782, 1318549298, 1429717233, 3062710217, 11094882, 8790182, 33793, 4359314
			},
			.prefetch0 = 40145,
			.prefetch1 = 15524,
			.ram = cmpw_final_ram_9,
			.ram_len = 10,
		},
		.transactions = cmpw_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 CMP.w #, (d8, A5, Xn) 0c75",
		.initial = {
			.regs = {
				1643845390, 3472205554, 123474224, 1156513258, 950618814, 2994766081, 1872927958, 4251693295, 2029023018, 3897901863, 2653701500, 2178158788, 1788188844, 346069381, 3215282290, 5289146, 2480248, 34053, 10129686
			},
			.prefetch0 = 3189,
			.prefetch1 = 37954,
			.ram = cmpw_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1643845390, 3472205554, 123474224, 1156513258, 950618814, 2994766081, 1872927958, 4251693295, 2029023018, 3897901863, 2653701500, 2178158788, 1788188844, 346069381, 3215282290, 5289146, 2480248, 34048, 10129692
			},
			.prefetch0 = 766,
			.prefetch1 = 36392,
			.ram = cmpw_final_ram_10,
			.ram_len = 12,
		},
		.transactions = cmpw_transactions_10,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "011 CMP.w (A7)+, (A3)+ b74f",
		.initial = {
			.regs = {
				4262547552, 279743774, 716213474, 3522872709, 1971720908, 715678078, 4105788915, 3191005418, 3526185382, 293635950, 4204349242, 1734341910, 3272385544, 3263166460, 230879777, 13659966, 727814, 42500, 2850632
			},
			.prefetch0 = 46927,
			.prefetch1 = 63030,
			.ram = cmpw_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4262547552, 279743774, 716213474, 3522872709, 1971720908, 715678078, 4105788915, 3191005418, 3526185382, 293635950, 4204349242, 1734341912, 3272385544, 3263166460, 230879777, 13659966, 727816, 42504, 2850634
			},
			.prefetch0 = 63030,
			.prefetch1 = 56102,
			.ram = cmpw_final_ram_11,
			.ram_len = 10,
		},
		.transactions = cmpw_transactions_11,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "012 CMP.w (A0)+, D1 b258",
		.initial = {
			.regs = {
				1924130855, 991578060, 2311348135, 3149274502, 3456991504, 79282643, 2811540886, 561165163, 3749304447, 2403781472, 2543617045, 307442635, 963693364, 3400775605, 1289342279, 15161348, 3445842, 280, 4727996
			},
			.prefetch0 = 45656,
			.prefetch1 = 20594,
			.ram = cmpw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1924130855, 991578060, 2311348135, 3149274502, 3456991504, 79282643, 2811540886, 561165163, 3749304449, 2403781472, 2543617045, 307442635, 963693364, 3400775605, 1289342279, 15161348, 3445828, 8472, 578832102
			},
			.prefetch0 = 20190,
			.prefetch1 = 57894,
			.ram = cmpw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 CMP.w D7, D3 b647",
		.initial = {
			.regs = {
				1894928758, 346816917, 3063454187, 730001279, 656496470, 1288605930, 135520760, 4184206633, 712410486, 35066257, 845726993, 1823213480, 1243653433, 668285739, 2756144765, 14361958, 209768, 41481, 2107608
			},
			.prefetch0 = 46663,
			.prefetch1 = 31466,
			.ram = cmpw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1894928758, 346816917, 3063454187, 730001279, 656496470, 1288605930, 135520760, 4184206633, 712410486, 35066257, 845726993, 1823213480, 1243653433, 668285739, 2756144765, 14361958, 209768, 41472, 2107610
			},
			.prefetch0 = 31466,
			.prefetch1 = 14846,
			.ram = cmpw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 CMP.w A6, D0 b04e",
		.initial = {
			.regs = {
				1412832989, 2992477222, 2598536980, 2750813482, 237280141, 559773189, 3454923173, 1930401325, 1488388731, 3817086056, 4106078181, 2810793370, 2522498212, 2979168780, 218242543, 5136614, 3343902, 40976, 9460092
			},
			.prefetch0 = 45134,
			.prefetch1 = 26656,
			.ram = cmpw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1412832989, 2992477222, 2598536980, 2750813482, 237280141, 559773189, 3454923173, 1930401325, 1488388731, 3817086056, 4106078181, 2810793370, 2522498212, 2979168780, 218242543, 5136614, 3343902, 40976, 9460094
			},
			.prefetch0 = 26656,
			.prefetch1 = 10783,
			.ram = cmpw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 CMP.w (A1)+, (A2)+ b549",
		.initial = {
			.regs = {
				1824736257, 3462591964, 479045437, 55359780, 2759632639, 3129741471, 2836865364, 3268282009, 3007175551, 561552081, 612594417, 987397213, 4048944421, 4199586938, 2528912989, 8011174, 10094960, 1550, 4546370
			},
			.prefetch0 = 46409,
			.prefetch1 = 18182,
			.ram = cmpw_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1824736257, 3462591964, 479045437, 55359780, 2759632639, 3129741471, 2836865364, 3268282009, 3007175551, 561552083, 612594417, 987397213, 4048944421, 4199586938, 2528912989, 8011174, 10094946, 9742, 3402129704
			},
			.prefetch0 = 49229,
			.prefetch1 = 14171,
			.ram = cmpw_final_ram_15,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_CMPW_H */