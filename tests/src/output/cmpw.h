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

static const SST_RamByte cmpw_initial_ram_16[] = {
		{ .addr = 0x75cef6, .byte = 0xb4 },
		{ .addr = 0x75cef7, .byte = 0x4f },
		{ .addr = 0x75cef8, .byte = 0x03 },
		{ .addr = 0x75cef9, .byte = 0x06 },
		{ .addr = 0x75cefa, .byte = 0x27 },
		{ .addr = 0x75cefb, .byte = 0xfb }
};

static const SST_RamByte cmpw_final_ram_16[] = {
		{ .addr = 0x75cef6, .byte = 0xb4 },
		{ .addr = 0x75cef7, .byte = 0x4f },
		{ .addr = 0x75cef8, .byte = 0x03 },
		{ .addr = 0x75cef9, .byte = 0x06 },
		{ .addr = 0x75cefa, .byte = 0x27 },
		{ .addr = 0x75cefb, .byte = 0xfb }
};

static const SST_Transaction cmpw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7720698, .data = 10235, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_17[] = {
		{ .addr = 0xd5b756, .byte = 0xb0 },
		{ .addr = 0xd5b757, .byte = 0x4a },
		{ .addr = 0xd5b758, .byte = 0xc0 },
		{ .addr = 0xd5b759, .byte = 0xe8 },
		{ .addr = 0xd5b75a, .byte = 0x0c },
		{ .addr = 0xd5b75b, .byte = 0x84 }
};

static const SST_RamByte cmpw_final_ram_17[] = {
		{ .addr = 0xd5b756, .byte = 0xb0 },
		{ .addr = 0xd5b757, .byte = 0x4a },
		{ .addr = 0xd5b758, .byte = 0xc0 },
		{ .addr = 0xd5b759, .byte = 0xe8 },
		{ .addr = 0xd5b75a, .byte = 0x0c },
		{ .addr = 0xd5b75b, .byte = 0x84 }
};

static const SST_Transaction cmpw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14006106, .data = 3204, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_18[] = {
		{ .addr = 0x93d032, .byte = 0xb4 },
		{ .addr = 0x93d033, .byte = 0x6b },
		{ .addr = 0x93d034, .byte = 0x84 },
		{ .addr = 0x93d035, .byte = 0x9b },
		{ .addr = 0x93d036, .byte = 0xb7 },
		{ .addr = 0x93d037, .byte = 0x25 },
		{ .addr = 0x336254, .byte = 0xe2 },
		{ .addr = 0x336255, .byte = 0xaa },
		{ .addr = 0x93d038, .byte = 0x67 },
		{ .addr = 0x93d039, .byte = 0xb7 }
};

static const SST_RamByte cmpw_final_ram_18[] = {
		{ .addr = 0x93d032, .byte = 0xb4 },
		{ .addr = 0x93d033, .byte = 0x6b },
		{ .addr = 0x93d034, .byte = 0x84 },
		{ .addr = 0x93d035, .byte = 0x9b },
		{ .addr = 0x93d036, .byte = 0xb7 },
		{ .addr = 0x93d037, .byte = 0x25 },
		{ .addr = 0x336254, .byte = 0xe2 },
		{ .addr = 0x336255, .byte = 0xaa },
		{ .addr = 0x93d038, .byte = 0x67 },
		{ .addr = 0x93d039, .byte = 0xb7 }
};

static const SST_Transaction cmpw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9687094, .data = 46885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3367508, .data = 58026, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9687096, .data = 26551, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_19[] = {
		{ .addr = 0x131550, .byte = 0x0c },
		{ .addr = 0x131551, .byte = 0x50 },
		{ .addr = 0x131552, .byte = 0x7f },
		{ .addr = 0x131553, .byte = 0x98 },
		{ .addr = 0x131554, .byte = 0x6a },
		{ .addr = 0x131555, .byte = 0xbe },
		{ .addr = 0xb81b04, .byte = 0x86 },
		{ .addr = 0xb81b05, .byte = 0x67 },
		{ .addr = 0x131556, .byte = 0x70 },
		{ .addr = 0x131557, .byte = 0x3d }
};

static const SST_RamByte cmpw_final_ram_19[] = {
		{ .addr = 0x131550, .byte = 0x0c },
		{ .addr = 0x131551, .byte = 0x50 },
		{ .addr = 0x131552, .byte = 0x7f },
		{ .addr = 0x131553, .byte = 0x98 },
		{ .addr = 0x131554, .byte = 0x6a },
		{ .addr = 0x131555, .byte = 0xbe },
		{ .addr = 0xb81b04, .byte = 0x86 },
		{ .addr = 0xb81b05, .byte = 0x67 },
		{ .addr = 0x131556, .byte = 0x70 },
		{ .addr = 0x131557, .byte = 0x3d }
};

static const SST_Transaction cmpw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1250644, .data = 27326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12065540, .data = 34407, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1250646, .data = 28733, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_20[] = {
		{ .addr = 0xba01a8, .byte = 0xb8 },
		{ .addr = 0xba01a9, .byte = 0x64 },
		{ .addr = 0xba01aa, .byte = 0x48 },
		{ .addr = 0xba01ab, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x55 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x2055ac, .byte = 0x61 },
		{ .addr = 0x2055ad, .byte = 0x9b },
		{ .addr = 0x2055ae, .byte = 0x6f },
		{ .addr = 0x2055af, .byte = 0x42 }
};

static const SST_RamByte cmpw_final_ram_20[] = {
		{ .addr = 0xba01a8, .byte = 0xb8 },
		{ .addr = 0xba01a9, .byte = 0x64 },
		{ .addr = 0xba01aa, .byte = 0x48 },
		{ .addr = 0xba01ab, .byte = 0x5f },
		{ .addr = 0x34d85a, .byte = 0x01 },
		{ .addr = 0x34d85b, .byte = 0xac },
		{ .addr = 0x34d856, .byte = 0x00 },
		{ .addr = 0x34d857, .byte = 0x07 },
		{ .addr = 0x34d858, .byte = 0x00 },
		{ .addr = 0x34d859, .byte = 0xba },
		{ .addr = 0x34d854, .byte = 0xb8 },
		{ .addr = 0x34d855, .byte = 0x64 },
		{ .addr = 0x34d852, .byte = 0x77 },
		{ .addr = 0x34d853, .byte = 0x47 },
		{ .addr = 0x34d84e, .byte = 0xb8 },
		{ .addr = 0x34d84f, .byte = 0x71 },
		{ .addr = 0x34d850, .byte = 0xab },
		{ .addr = 0x34d851, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x55 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x2055ac, .byte = 0x61 },
		{ .addr = 0x2055ad, .byte = 0x9b },
		{ .addr = 0x2055ae, .byte = 0x6f },
		{ .addr = 0x2055af, .byte = 0x42 }
};

static const SST_Transaction cmpw_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4093766, .data = 22596, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3463258, .data = 428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3463254, .data = 7, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3463256, .data = 186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3463252, .data = 47204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3463250, .data = 30535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3463246, .data = 47217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3463248, .data = 43838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2119084, .data = 24987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2119086, .data = 28482, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_21[] = {
		{ .addr = 0x85c6c2, .byte = 0xb0 },
		{ .addr = 0x85c6c3, .byte = 0x65 },
		{ .addr = 0x85c6c4, .byte = 0xe4 },
		{ .addr = 0x85c6c5, .byte = 0x2d },
		{ .addr = 0xe943ba, .byte = 0xa3 },
		{ .addr = 0xe943bb, .byte = 0xe4 },
		{ .addr = 0x85c6c6, .byte = 0x58 },
		{ .addr = 0x85c6c7, .byte = 0xa3 }
};

static const SST_RamByte cmpw_final_ram_21[] = {
		{ .addr = 0x85c6c2, .byte = 0xb0 },
		{ .addr = 0x85c6c3, .byte = 0x65 },
		{ .addr = 0x85c6c4, .byte = 0xe4 },
		{ .addr = 0x85c6c5, .byte = 0x2d },
		{ .addr = 0xe943ba, .byte = 0xa3 },
		{ .addr = 0xe943bb, .byte = 0xe4 },
		{ .addr = 0x85c6c6, .byte = 0x58 },
		{ .addr = 0x85c6c7, .byte = 0xa3 }
};

static const SST_Transaction cmpw_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15287226, .data = 41956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8767174, .data = 22691, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_22[] = {
		{ .addr = 0x55e526, .byte = 0xb2 },
		{ .addr = 0x55e527, .byte = 0x4d },
		{ .addr = 0x55e528, .byte = 0xa5 },
		{ .addr = 0x55e529, .byte = 0xc8 },
		{ .addr = 0x55e52a, .byte = 0x48 },
		{ .addr = 0x55e52b, .byte = 0x6e }
};

static const SST_RamByte cmpw_final_ram_22[] = {
		{ .addr = 0x55e526, .byte = 0xb2 },
		{ .addr = 0x55e527, .byte = 0x4d },
		{ .addr = 0x55e528, .byte = 0xa5 },
		{ .addr = 0x55e529, .byte = 0xc8 },
		{ .addr = 0x55e52a, .byte = 0x48 },
		{ .addr = 0x55e52b, .byte = 0x6e }
};

static const SST_Transaction cmpw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5629226, .data = 18542, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_23[] = {
		{ .addr = 0xa1cd28, .byte = 0xb9 },
		{ .addr = 0xa1cd29, .byte = 0x4d },
		{ .addr = 0xa1cd2a, .byte = 0x60 },
		{ .addr = 0xa1cd2b, .byte = 0x02 },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0x601e2a, .byte = 0xcd },
		{ .addr = 0x601e2b, .byte = 0xfc },
		{ .addr = 0x601e2c, .byte = 0x3b },
		{ .addr = 0x601e2d, .byte = 0x4a }
};

static const SST_RamByte cmpw_final_ram_23[] = {
		{ .addr = 0xa1cd28, .byte = 0xb9 },
		{ .addr = 0xa1cd29, .byte = 0x4d },
		{ .addr = 0xa1cd2a, .byte = 0x60 },
		{ .addr = 0xa1cd2b, .byte = 0x02 },
		{ .addr = 0xea7a12, .byte = 0xcd },
		{ .addr = 0xea7a13, .byte = 0x2c },
		{ .addr = 0xea7a0e, .byte = 0x86 },
		{ .addr = 0xea7a0f, .byte = 0x0b },
		{ .addr = 0xea7a10, .byte = 0x00 },
		{ .addr = 0xea7a11, .byte = 0xa1 },
		{ .addr = 0xea7a0c, .byte = 0xb9 },
		{ .addr = 0xea7a0d, .byte = 0x4d },
		{ .addr = 0xea7a0a, .byte = 0xee },
		{ .addr = 0xea7a0b, .byte = 0xcd },
		{ .addr = 0xea7a06, .byte = 0xb9 },
		{ .addr = 0xea7a07, .byte = 0x51 },
		{ .addr = 0xea7a08, .byte = 0xed },
		{ .addr = 0xea7a09, .byte = 0x85 },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0x601e2a, .byte = 0xcd },
		{ .addr = 0x601e2b, .byte = 0xfc },
		{ .addr = 0x601e2c, .byte = 0x3b },
		{ .addr = 0x601e2d, .byte = 0x4a }
};

static const SST_Transaction cmpw_transactions_23[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8777420, .data = 5774, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15366674, .data = 52524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15366670, .data = 34315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15366672, .data = 161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15366668, .data = 47437, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15366666, .data = 61133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15366662, .data = 47441, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15366664, .data = 60805, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6299178, .data = 52732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6299180, .data = 15178, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_24[] = {
		{ .addr = 0x093438, .byte = 0xba },
		{ .addr = 0x093439, .byte = 0x5b },
		{ .addr = 0x09343a, .byte = 0xd4 },
		{ .addr = 0x09343b, .byte = 0x39 },
		{ .addr = 0x00000c, .byte = 0xf8 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0xd7 },
		{ .addr = 0x00000f, .byte = 0x3c },
		{ .addr = 0x2cd73c, .byte = 0x19 },
		{ .addr = 0x2cd73d, .byte = 0x3c },
		{ .addr = 0x2cd73e, .byte = 0xf2 },
		{ .addr = 0x2cd73f, .byte = 0x37 }
};

static const SST_RamByte cmpw_final_ram_24[] = {
		{ .addr = 0x093438, .byte = 0xba },
		{ .addr = 0x093439, .byte = 0x5b },
		{ .addr = 0x09343a, .byte = 0xd4 },
		{ .addr = 0x09343b, .byte = 0x39 },
		{ .addr = 0x9098a8, .byte = 0x34 },
		{ .addr = 0x9098a9, .byte = 0x3a },
		{ .addr = 0x9098a4, .byte = 0x05 },
		{ .addr = 0x9098a5, .byte = 0x15 },
		{ .addr = 0x9098a6, .byte = 0x00 },
		{ .addr = 0x9098a7, .byte = 0x09 },
		{ .addr = 0x9098a2, .byte = 0xba },
		{ .addr = 0x9098a3, .byte = 0x5b },
		{ .addr = 0x9098a0, .byte = 0x2d },
		{ .addr = 0x9098a1, .byte = 0xc5 },
		{ .addr = 0x90989c, .byte = 0xba },
		{ .addr = 0x90989d, .byte = 0x51 },
		{ .addr = 0x90989e, .byte = 0x05 },
		{ .addr = 0x90989f, .byte = 0x31 },
		{ .addr = 0x00000c, .byte = 0xf8 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0xd7 },
		{ .addr = 0x00000f, .byte = 0x3c },
		{ .addr = 0x2cd73c, .byte = 0x19 },
		{ .addr = 0x2cd73d, .byte = 0x3c },
		{ .addr = 0x2cd73e, .byte = 0xf2 },
		{ .addr = 0x2cd73f, .byte = 0x37 }
};

static const SST_Transaction cmpw_transactions_24[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3222980, .data = 56537, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9476264, .data = 13370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9476260, .data = 1301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9476262, .data = 9, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9476258, .data = 47707, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9476256, .data = 11717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9476252, .data = 47697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9476254, .data = 1329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 63532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 55100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2938684, .data = 6460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2938686, .data = 62007, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_25[] = {
		{ .addr = 0xd3133e, .byte = 0xb8 },
		{ .addr = 0xd3133f, .byte = 0x44 },
		{ .addr = 0xd31340, .byte = 0xf3 },
		{ .addr = 0xd31341, .byte = 0xca },
		{ .addr = 0xd31342, .byte = 0x28 },
		{ .addr = 0xd31343, .byte = 0x4c }
};

static const SST_RamByte cmpw_final_ram_25[] = {
		{ .addr = 0xd3133e, .byte = 0xb8 },
		{ .addr = 0xd3133f, .byte = 0x44 },
		{ .addr = 0xd31340, .byte = 0xf3 },
		{ .addr = 0xd31341, .byte = 0xca },
		{ .addr = 0xd31342, .byte = 0x28 },
		{ .addr = 0xd31343, .byte = 0x4c }
};

static const SST_Transaction cmpw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13833026, .data = 10316, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_26[] = {
		{ .addr = 0x51081c, .byte = 0xbb },
		{ .addr = 0x51081d, .byte = 0x48 },
		{ .addr = 0x51081e, .byte = 0x4f },
		{ .addr = 0x51081f, .byte = 0x90 },
		{ .addr = 0x00000c, .byte = 0x95 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x4f },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x0e4fba, .byte = 0xe5 },
		{ .addr = 0x0e4fbb, .byte = 0x2c },
		{ .addr = 0x0e4fbc, .byte = 0x13 },
		{ .addr = 0x0e4fbd, .byte = 0x6c }
};

static const SST_RamByte cmpw_final_ram_26[] = {
		{ .addr = 0x51081c, .byte = 0xbb },
		{ .addr = 0x51081d, .byte = 0x48 },
		{ .addr = 0x51081e, .byte = 0x4f },
		{ .addr = 0x51081f, .byte = 0x90 },
		{ .addr = 0xad1892, .byte = 0x08 },
		{ .addr = 0xad1893, .byte = 0x20 },
		{ .addr = 0xad188e, .byte = 0x23 },
		{ .addr = 0xad188f, .byte = 0x04 },
		{ .addr = 0xad1890, .byte = 0x00 },
		{ .addr = 0xad1891, .byte = 0x51 },
		{ .addr = 0xad188c, .byte = 0xbb },
		{ .addr = 0xad188d, .byte = 0x48 },
		{ .addr = 0xad188a, .byte = 0x73 },
		{ .addr = 0xad188b, .byte = 0xcd },
		{ .addr = 0xad1886, .byte = 0xbb },
		{ .addr = 0xad1887, .byte = 0x55 },
		{ .addr = 0xad1888, .byte = 0xd9 },
		{ .addr = 0xad1889, .byte = 0x47 },
		{ .addr = 0x00000c, .byte = 0x95 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x4f },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x0e4fba, .byte = 0xe5 },
		{ .addr = 0x0e4fbb, .byte = 0x2c },
		{ .addr = 0x0e4fbc, .byte = 0x13 },
		{ .addr = 0x0e4fbd, .byte = 0x6c }
};

static const SST_Transaction cmpw_transactions_26[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4682700, .data = 42771, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11344018, .data = 2080, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11344014, .data = 8964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11344016, .data = 81, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11344012, .data = 47944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11344010, .data = 29645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11344006, .data = 47957, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11344008, .data = 55623, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 20410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 937914, .data = 58668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 937916, .data = 4972, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_27[] = {
		{ .addr = 0x570568, .byte = 0xb8 },
		{ .addr = 0x570569, .byte = 0x63 },
		{ .addr = 0x57056a, .byte = 0xf1 },
		{ .addr = 0x57056b, .byte = 0xaa },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0xa3 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x52a3f0, .byte = 0x98 },
		{ .addr = 0x52a3f1, .byte = 0x3c },
		{ .addr = 0x52a3f2, .byte = 0x6e },
		{ .addr = 0x52a3f3, .byte = 0xfe }
};

static const SST_RamByte cmpw_final_ram_27[] = {
		{ .addr = 0x570568, .byte = 0xb8 },
		{ .addr = 0x570569, .byte = 0x63 },
		{ .addr = 0x57056a, .byte = 0xf1 },
		{ .addr = 0x57056b, .byte = 0xaa },
		{ .addr = 0x4d632a, .byte = 0x05 },
		{ .addr = 0x4d632b, .byte = 0x6c },
		{ .addr = 0x4d6326, .byte = 0x24 },
		{ .addr = 0x4d6327, .byte = 0x00 },
		{ .addr = 0x4d6328, .byte = 0x00 },
		{ .addr = 0x4d6329, .byte = 0x57 },
		{ .addr = 0x4d6324, .byte = 0xb8 },
		{ .addr = 0x4d6325, .byte = 0x63 },
		{ .addr = 0x4d6322, .byte = 0xc3 },
		{ .addr = 0x4d6323, .byte = 0x83 },
		{ .addr = 0x4d631e, .byte = 0xb8 },
		{ .addr = 0x4d631f, .byte = 0x75 },
		{ .addr = 0x4d6320, .byte = 0xec },
		{ .addr = 0x4d6321, .byte = 0x8d },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0xa3 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x52a3f0, .byte = 0x98 },
		{ .addr = 0x52a3f1, .byte = 0x3c },
		{ .addr = 0x52a3f2, .byte = 0x6e },
		{ .addr = 0x52a3f3, .byte = 0xfe }
};

static const SST_Transaction cmpw_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9290626, .data = 6673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5071658, .data = 1388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5071654, .data = 9216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5071656, .data = 87, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5071652, .data = 47203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5071650, .data = 50051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5071646, .data = 47221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5071648, .data = 60557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5415920, .data = 38972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5415922, .data = 28414, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_28[] = {
		{ .addr = 0x47d3b2, .byte = 0xbb },
		{ .addr = 0x47d3b3, .byte = 0x4e },
		{ .addr = 0x47d3b4, .byte = 0xc0 },
		{ .addr = 0x47d3b5, .byte = 0x10 },
		{ .addr = 0x00000c, .byte = 0xc0 },
		{ .addr = 0x00000d, .byte = 0xd6 },
		{ .addr = 0x00000e, .byte = 0xea },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0xd6ea90, .byte = 0xef },
		{ .addr = 0xd6ea91, .byte = 0xf3 },
		{ .addr = 0xd6ea92, .byte = 0x28 },
		{ .addr = 0xd6ea93, .byte = 0x45 }
};

static const SST_RamByte cmpw_final_ram_28[] = {
		{ .addr = 0x47d3b2, .byte = 0xbb },
		{ .addr = 0x47d3b3, .byte = 0x4e },
		{ .addr = 0x47d3b4, .byte = 0xc0 },
		{ .addr = 0x47d3b5, .byte = 0x10 },
		{ .addr = 0x434930, .byte = 0xd3 },
		{ .addr = 0x434931, .byte = 0xb6 },
		{ .addr = 0x43492c, .byte = 0x06 },
		{ .addr = 0x43492d, .byte = 0x05 },
		{ .addr = 0x43492e, .byte = 0x00 },
		{ .addr = 0x43492f, .byte = 0x47 },
		{ .addr = 0x43492a, .byte = 0xbb },
		{ .addr = 0x43492b, .byte = 0x4e },
		{ .addr = 0x434928, .byte = 0x53 },
		{ .addr = 0x434929, .byte = 0x8d },
		{ .addr = 0x434924, .byte = 0xbb },
		{ .addr = 0x434925, .byte = 0x51 },
		{ .addr = 0x434926, .byte = 0x92 },
		{ .addr = 0x434927, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xc0 },
		{ .addr = 0x00000d, .byte = 0xd6 },
		{ .addr = 0x00000e, .byte = 0xea },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0xd6ea90, .byte = 0xef },
		{ .addr = 0xd6ea91, .byte = 0xf3 },
		{ .addr = 0xd6ea92, .byte = 0x28 },
		{ .addr = 0xd6ea93, .byte = 0x45 }
};

static const SST_Transaction cmpw_transactions_28[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 21388, .data = 16202, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4409648, .data = 54198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4409644, .data = 1541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4409646, .data = 71, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4409642, .data = 47950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4409640, .data = 21389, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4409636, .data = 47953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4409638, .data = 37376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 49366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14084752, .data = 61427, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14084754, .data = 10309, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_29[] = {
		{ .addr = 0x276946, .byte = 0xbe },
		{ .addr = 0x276947, .byte = 0x52 },
		{ .addr = 0x276948, .byte = 0x1c },
		{ .addr = 0x276949, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0x1640b8, .byte = 0xd1 },
		{ .addr = 0x1640b9, .byte = 0x81 },
		{ .addr = 0x1640ba, .byte = 0x96 },
		{ .addr = 0x1640bb, .byte = 0x3f }
};

static const SST_RamByte cmpw_final_ram_29[] = {
		{ .addr = 0x276946, .byte = 0xbe },
		{ .addr = 0x276947, .byte = 0x52 },
		{ .addr = 0x276948, .byte = 0x1c },
		{ .addr = 0x276949, .byte = 0x26 },
		{ .addr = 0xeb2022, .byte = 0x69 },
		{ .addr = 0xeb2023, .byte = 0x48 },
		{ .addr = 0xeb201e, .byte = 0xa6 },
		{ .addr = 0xeb201f, .byte = 0x14 },
		{ .addr = 0xeb2020, .byte = 0x00 },
		{ .addr = 0xeb2021, .byte = 0x27 },
		{ .addr = 0xeb201c, .byte = 0xbe },
		{ .addr = 0xeb201d, .byte = 0x52 },
		{ .addr = 0xeb201a, .byte = 0xdb },
		{ .addr = 0xeb201b, .byte = 0x85 },
		{ .addr = 0xeb2016, .byte = 0xbe },
		{ .addr = 0xeb2017, .byte = 0x55 },
		{ .addr = 0xeb2018, .byte = 0x7e },
		{ .addr = 0xeb2019, .byte = 0xed },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x16 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0x1640b8, .byte = 0xd1 },
		{ .addr = 0x1640b9, .byte = 0x81 },
		{ .addr = 0x1640ba, .byte = 0x96 },
		{ .addr = 0x1640bb, .byte = 0x3f }
};

static const SST_Transaction cmpw_transactions_29[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15588228, .data = 9158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15409186, .data = 26952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15409182, .data = 42516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15409184, .data = 39, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15409180, .data = 48722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15409178, .data = 56197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15409174, .data = 48725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15409176, .data = 32493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 28950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1458360, .data = 53633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1458362, .data = 38463, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_30[] = {
		{ .addr = 0xdbee4e, .byte = 0x0c },
		{ .addr = 0xdbee4f, .byte = 0x70 },
		{ .addr = 0xdbee50, .byte = 0xf2 },
		{ .addr = 0xdbee51, .byte = 0xdb },
		{ .addr = 0xdbee52, .byte = 0xee },
		{ .addr = 0xdbee53, .byte = 0x97 },
		{ .addr = 0xdbee54, .byte = 0x2a },
		{ .addr = 0xdbee55, .byte = 0xd2 },
		{ .addr = 0x00000c, .byte = 0x0d },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0x6c },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x686cea, .byte = 0xe6 },
		{ .addr = 0x686ceb, .byte = 0xb6 },
		{ .addr = 0x686cec, .byte = 0x77 },
		{ .addr = 0x686ced, .byte = 0x49 }
};

static const SST_RamByte cmpw_final_ram_30[] = {
		{ .addr = 0xdbee4e, .byte = 0x0c },
		{ .addr = 0xdbee4f, .byte = 0x70 },
		{ .addr = 0xdbee50, .byte = 0xf2 },
		{ .addr = 0xdbee51, .byte = 0xdb },
		{ .addr = 0xdbee52, .byte = 0xee },
		{ .addr = 0xdbee53, .byte = 0x97 },
		{ .addr = 0xdbee54, .byte = 0x2a },
		{ .addr = 0xdbee55, .byte = 0xd2 },
		{ .addr = 0xda374c, .byte = 0xee },
		{ .addr = 0xda374d, .byte = 0x52 },
		{ .addr = 0xda3748, .byte = 0x23 },
		{ .addr = 0xda3749, .byte = 0x0a },
		{ .addr = 0xda374a, .byte = 0x00 },
		{ .addr = 0xda374b, .byte = 0xdb },
		{ .addr = 0xda3746, .byte = 0x0c },
		{ .addr = 0xda3747, .byte = 0x70 },
		{ .addr = 0xda3744, .byte = 0xa6 },
		{ .addr = 0xda3745, .byte = 0xc7 },
		{ .addr = 0xda3740, .byte = 0x0c },
		{ .addr = 0xda3741, .byte = 0x75 },
		{ .addr = 0xda3742, .byte = 0xc6 },
		{ .addr = 0xda3743, .byte = 0xfe },
		{ .addr = 0x00000c, .byte = 0x0d },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0x6c },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x686cea, .byte = 0xe6 },
		{ .addr = 0x686ceb, .byte = 0xb6 },
		{ .addr = 0x686cec, .byte = 0x77 },
		{ .addr = 0x686ced, .byte = 0x49 }
};

static const SST_Transaction cmpw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14413394, .data = 61079, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14413396, .data = 10962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16688838, .data = 26793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14301004, .data = 61010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14301000, .data = 8970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14301002, .data = 219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14300998, .data = 3184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14300996, .data = 42695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14300992, .data = 3189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14300994, .data = 50942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6843626, .data = 59062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6843628, .data = 30537, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpw_initial_ram_31[] = {
		{ .addr = 0x8c4a6e, .byte = 0xbc },
		{ .addr = 0x8c4a6f, .byte = 0x65 },
		{ .addr = 0x8c4a70, .byte = 0x61 },
		{ .addr = 0x8c4a71, .byte = 0xee },
		{ .addr = 0x00000c, .byte = 0x27 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x0ad6a0, .byte = 0xe5 },
		{ .addr = 0x0ad6a1, .byte = 0xc4 },
		{ .addr = 0x0ad6a2, .byte = 0xf1 },
		{ .addr = 0x0ad6a3, .byte = 0xa6 }
};

static const SST_RamByte cmpw_final_ram_31[] = {
		{ .addr = 0x8c4a6e, .byte = 0xbc },
		{ .addr = 0x8c4a6f, .byte = 0x65 },
		{ .addr = 0x8c4a70, .byte = 0x61 },
		{ .addr = 0x8c4a71, .byte = 0xee },
		{ .addr = 0x91ed2c, .byte = 0x4a },
		{ .addr = 0x91ed2d, .byte = 0x72 },
		{ .addr = 0x91ed28, .byte = 0x86 },
		{ .addr = 0x91ed29, .byte = 0x0e },
		{ .addr = 0x91ed2a, .byte = 0x00 },
		{ .addr = 0x91ed2b, .byte = 0x8c },
		{ .addr = 0x91ed26, .byte = 0xbc },
		{ .addr = 0x91ed27, .byte = 0x65 },
		{ .addr = 0x91ed24, .byte = 0xe3 },
		{ .addr = 0x91ed25, .byte = 0x9d },
		{ .addr = 0x91ed20, .byte = 0xbc },
		{ .addr = 0x91ed21, .byte = 0x71 },
		{ .addr = 0x91ed22, .byte = 0x8e },
		{ .addr = 0x91ed23, .byte = 0x3d },
		{ .addr = 0x00000c, .byte = 0x27 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x0ad6a0, .byte = 0xe5 },
		{ .addr = 0x0ad6a1, .byte = 0xc4 },
		{ .addr = 0x0ad6a2, .byte = 0xf1 },
		{ .addr = 0x0ad6a3, .byte = 0xa6 }
};

static const SST_Transaction cmpw_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4055964, .data = 57641, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9563436, .data = 19058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9563432, .data = 34318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9563434, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9563430, .data = 48229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9563428, .data = 58269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9563424, .data = 48241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9563426, .data = 36413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 710304, .data = 58820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 710306, .data = 61862, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 CMP.w A7, D2 b44f",
		.initial = {
			.regs = {
				3152823385, 641280582, 2420195521, 2698663057, 316198047, 171984902, 3050957206, 1730332658, 3226471457, 2003623821, 4118772726, 1360077749, 2419054302, 1209586411, 1335282559, 7222156, 6926128, 33049, 7720698
			},
			.prefetch0 = 46159,
			.prefetch1 = 774,
			.ram = cmpw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3152823385, 641280582, 2420195521, 2698663057, 316198047, 171984902, 3050957206, 1730332658, 3226471457, 2003623821, 4118772726, 1360077749, 2419054302, 1209586411, 1335282559, 7222156, 6926128, 33040, 7720700
			},
			.prefetch0 = 774,
			.prefetch1 = 10235,
			.ram = cmpw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 CMP.w A2, D0 b04a",
		.initial = {
			.regs = {
				3415261751, 745549710, 1505124033, 2641555253, 1785699081, 1364971209, 2662199054, 2518712774, 3657271804, 247206996, 1087617184, 3284434110, 4224955147, 290855683, 2309699124, 323248, 2675718, 9225, 14006106
			},
			.prefetch0 = 45130,
			.prefetch1 = 49384,
			.ram = cmpw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3415261751, 745549710, 1505124033, 2641555253, 1785699081, 1364971209, 2662199054, 2518712774, 3657271804, 247206996, 1087617184, 3284434110, 4224955147, 290855683, 2309699124, 323248, 2675718, 9216, 14006108
			},
			.prefetch0 = 49384,
			.prefetch1 = 3204,
			.ram = cmpw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 CMP.w (d16, A3), D2 b46b",
		.initial = {
			.regs = {
				2485747717, 2429879672, 2395993583, 2697512193, 2819411133, 2274918563, 1709761076, 3459004387, 1960953959, 356595497, 1272460081, 2519981497, 2962044371, 3122832539, 1911557579, 3201192, 1259556, 41490, 9687094
			},
			.prefetch0 = 46187,
			.prefetch1 = 33947,
			.ram = cmpw_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2485747717, 2429879672, 2395993583, 2697512193, 2819411133, 2274918563, 1709761076, 3459004387, 1960953959, 356595497, 1272460081, 2519981497, 2962044371, 3122832539, 1911557579, 3201192, 1259556, 41488, 9687098
			},
			.prefetch0 = 46885,
			.prefetch1 = 26551,
			.ram = cmpw_final_ram_18,
			.ram_len = 10,
		},
		.transactions = cmpw_transactions_18,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "019 CMP.w #, (A0) 0c50",
		.initial = {
			.regs = {
				3152510905, 1841141758, 4203098149, 1920338806, 1449562628, 676462105, 1368739293, 892017070, 1656232708, 2781555917, 1926192156, 538066180, 148431639, 839147058, 1023873070, 1847776, 6311706, 9487, 1250644
			},
			.prefetch0 = 3152,
			.prefetch1 = 32664,
			.ram = cmpw_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3152510905, 1841141758, 4203098149, 1920338806, 1449562628, 676462105, 1368739293, 892017070, 1656232708, 2781555917, 1926192156, 538066180, 148431639, 839147058, 1023873070, 1847776, 6311706, 9474, 1250648
			},
			.prefetch0 = 27326,
			.prefetch1 = 28733,
			.ram = cmpw_final_ram_19,
			.ram_len = 10,
		},
		.transactions = cmpw_transactions_19,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "020 CMP.w -(A4), D4 b864",
		.initial = {
			.regs = {
				3163707357, 1550976781, 949616387, 1229570850, 3702070924, 2869010757, 3004343827, 1285750354, 1259381521, 4051363426, 2371106469, 1398560480, 2872997705, 883093764, 277825679, 8030138, 3463260, 7, 12190124
			},
			.prefetch0 = 47204,
			.prefetch1 = 18527,
			.ram = cmpw_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3163707357, 1550976781, 949616387, 1229570850, 3702070924, 2869010757, 3004343827, 1285750354, 1259381521, 4051363426, 2371106469, 1398560480, 2872997703, 883093764, 277825679, 8030138, 3463246, 8199, 1042306480
			},
			.prefetch0 = 24987,
			.prefetch1 = 28482,
			.ram = cmpw_final_ram_20,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_20,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "021 CMP.w -(A5), D0 b065",
		.initial = {
			.regs = {
				1986938790, 266138543, 429676401, 2836394497, 1838166069, 1464981745, 1801163951, 1017519259, 1594210756, 1586124622, 1610342183, 1386920240, 4104720432, 719930300, 1616047736, 7289970, 3817256, 9740, 8767174
			},
			.prefetch0 = 45157,
			.prefetch1 = 58413,
			.ram = cmpw_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1986938790, 266138543, 429676401, 2836394497, 1838166069, 1464981745, 1801163951, 1017519259, 1594210756, 1586124622, 1610342183, 1386920240, 4104720432, 719930298, 1616047736, 7289970, 3817256, 9739, 8767176
			},
			.prefetch0 = 58413,
			.prefetch1 = 22691,
			.ram = cmpw_final_ram_21,
			.ram_len = 8,
		},
		.transactions = cmpw_transactions_21,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "022 CMP.w A5, D1 b24d",
		.initial = {
			.regs = {
				4049937484, 38798373, 1846669019, 1992679315, 3449934922, 2545721292, 4120377266, 4018569529, 2186173401, 1006326723, 4263721228, 1065228852, 2535900355, 4082588573, 2841286465, 14376694, 7682278, 8980, 5629226
			},
			.prefetch0 = 45645,
			.prefetch1 = 42440,
			.ram = cmpw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4049937484, 38798373, 1846669019, 1992679315, 3449934922, 2545721292, 4120377266, 4018569529, 2186173401, 1006326723, 4263721228, 1065228852, 2535900355, 4082588573, 2841286465, 14376694, 7682278, 8985, 5629228
			},
			.prefetch0 = 42440,
			.prefetch1 = 18542,
			.ram = cmpw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 CMP.w (A5)+, (A4)+ b94d",
		.initial = {
			.regs = {
				2173282971, 4249419132, 1121686810, 4268203372, 970242581, 3802589492, 2784409736, 787924147, 1810547847, 3973551929, 78797945, 3359442178, 333475287, 3984977613, 106749251, 16410896, 15366676, 34315, 10603820
			},
			.prefetch0 = 47437,
			.prefetch1 = 24578,
			.ram = cmpw_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2173282971, 4249419132, 1121686810, 4268203372, 970242581, 3802589492, 2784409736, 787924147, 1810547847, 3973551929, 78797945, 3359442178, 333475287, 3984977615, 106749251, 16410896, 15366662, 9739, 2288000558
			},
			.prefetch0 = 52732,
			.prefetch1 = 15178,
			.ram = cmpw_final_ram_23,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_23,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "024 CMP.w (A3)+, D5 ba5b",
		.initial = {
			.regs = {
				128932593, 1078894465, 1335905891, 3537114850, 3484776226, 2460739901, 3229968574, 4024649793, 3494035195, 2734555602, 1742519817, 87109061, 1212893588, 2292506742, 3001749833, 16657850, 9476266, 1301, 603196
			},
			.prefetch0 = 47707,
			.prefetch1 = 54329,
			.ram = cmpw_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				128932593, 1078894465, 1335905891, 3537114850, 3484776226, 2460739901, 3229968574, 4024649793, 3494035195, 2734555602, 1742519817, 87109063, 1212893588, 2292506742, 3001749833, 16657850, 9476252, 9493, 4163688256
			},
			.prefetch0 = 6460,
			.prefetch1 = 62007,
			.ram = cmpw_final_ram_24,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_24,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "025 CMP.w D4, D4 b844",
		.initial = {
			.regs = {
				727432961, 3271608729, 3002313821, 375855160, 3542477068, 810497206, 1226457638, 1015393991, 268802601, 2394314035, 3896615257, 3431378893, 3341401748, 3756673739, 1840752328, 15335728, 11485390, 512, 13833026
			},
			.prefetch0 = 47172,
			.prefetch1 = 62410,
			.ram = cmpw_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				727432961, 3271608729, 3002313821, 375855160, 3542477068, 810497206, 1226457638, 1015393991, 268802601, 2394314035, 3896615257, 3431378893, 3341401748, 3756673739, 1840752328, 15335728, 11485390, 516, 13833028
			},
			.prefetch0 = 62410,
			.prefetch1 = 10316,
			.ram = cmpw_final_ram_25,
			.ram_len = 6,
		},
		.transactions = cmpw_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 CMP.w (A0)+, (A5)+ bb48",
		.initial = {
			.regs = {
				2156234289, 2478666542, 110364144, 5808936, 1880808863, 4262870637, 3452465976, 4150253608, 3645338573, 769712945, 1189797273, 3496928092, 3735272171, 2774758450, 1913738290, 1002438, 11344020, 8964, 5310496
			},
			.prefetch0 = 47944,
			.prefetch1 = 20368,
			.ram = cmpw_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2156234289, 2478666542, 110364144, 5808936, 1880808863, 4262870637, 3452465976, 4150253608, 3645338575, 769712945, 1189797273, 3496928092, 3735272171, 2774758450, 1913738290, 1002438, 11344006, 8964, 2500743102
			},
			.prefetch0 = 58668,
			.prefetch1 = 4972,
			.ram = cmpw_final_ram_26,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_26,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "027 CMP.w -(A3), D4 b863",
		.initial = {
			.regs = {
				4190341462, 1286625578, 3231052780, 3230157059, 3320373017, 2758879837, 3039185160, 324785842, 2825839962, 2637573335, 2978190488, 3968713605, 3930910293, 1931041564, 1356468651, 12202342, 5071660, 9216, 5703020
			},
			.prefetch0 = 47203,
			.prefetch1 = 61866,
			.ram = cmpw_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4190341462, 1286625578, 3231052780, 3230157059, 3320373017, 2758879837, 3039185160, 324785842, 2825839962, 2637573335, 2978190488, 3968713603, 3930910293, 1931041564, 1356468651, 12202342, 5071646, 9216, 2689770484
			},
			.prefetch0 = 38972,
			.prefetch1 = 28414,
			.ram = cmpw_final_ram_27,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_27,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "028 CMP.w (A6)+, (A5)+ bb4e",
		.initial = {
			.regs = {
				1356293157, 2282821102, 3935892083, 3821429225, 2497927090, 3699995716, 1780208676, 3180822236, 3626047226, 978319091, 752191957, 574564339, 558779089, 1461527087, 2449494925, 14693548, 4409650, 1541, 4707254
			},
			.prefetch0 = 47950,
			.prefetch1 = 49168,
			.ram = cmpw_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1356293157, 2282821102, 3935892083, 3821429225, 2497927090, 3699995716, 1780208676, 3180822236, 3626047226, 978319091, 752191957, 574564339, 558779089, 1461527087, 2449494927, 14693548, 4409636, 9733, 3235310228
			},
			.prefetch0 = 61427,
			.prefetch1 = 10309,
			.ram = cmpw_final_ram_28,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_28,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "029 CMP.w (A2), D7 be52",
		.initial = {
			.regs = {
				2924669281, 3721457895, 1016913391, 1545226885, 538855396, 2665242373, 1644870063, 979514857, 2853856202, 3965290784, 2129517445, 1430955261, 1914471029, 3551989250, 1607714856, 31846, 15409188, 42516, 2582858
			},
			.prefetch0 = 48722,
			.prefetch1 = 7206,
			.ram = cmpw_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2924669281, 3721457895, 1016913391, 1545226885, 538855396, 2665242373, 1644870063, 979514857, 2853856202, 3965290784, 2129517445, 1430955261, 1914471029, 3551989250, 1607714856, 31846, 15409174, 9748, 1897283772
			},
			.prefetch0 = 53633,
			.prefetch1 = 38463,
			.ram = cmpw_final_ram_29,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_29,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "030 CMP.w #, (d8, A0, Xn) 0c70",
		.initial = {
			.regs = {
				1394450166, 2114557262, 2921708028, 550570672, 1468749659, 3307579906, 2136984800, 2309131513, 3380923347, 1197874528, 2808134711, 2170277007, 748812181, 1008299847, 4252621661, 1077776, 14301006, 8970, 14413394
			},
			.prefetch0 = 3184,
			.prefetch1 = 62171,
			.ram = cmpw_initial_ram_30,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1394450166, 2114557262, 2921708028, 550570672, 1468749659, 3307579906, 2136984800, 2309131513, 3380923347, 1197874528, 2808134711, 2170277007, 748812181, 1008299847, 4252621661, 1077776, 14300992, 8970, 224947438
			},
			.prefetch0 = 59062,
			.prefetch1 = 30537,
			.ram = cmpw_final_ram_30,
			.ram_len = 30,
		},
		.transactions = cmpw_transactions_30,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "031 CMP.w -(A5), D6 bc65",
		.initial = {
			.regs = {
				3186124444, 3917360168, 1530867970, 162793597, 2375389851, 30381628, 148687075, 2085334518, 781099333, 2520561591, 459159856, 424900923, 1926428151, 2386420639, 2734357216, 6091164, 9563438, 34318, 9194098
			},
			.prefetch0 = 48229,
			.prefetch1 = 25070,
			.ram = cmpw_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3186124444, 3917360168, 1530867970, 162793597, 2375389851, 30381628, 148687075, 2085334518, 781099333, 2520561591, 459159856, 424900923, 1926428151, 2386420637, 2734357216, 6091164, 9563424, 9742, 655021732
			},
			.prefetch0 = 58820,
			.prefetch1 = 61862,
			.ram = cmpw_final_ram_31,
			.ram_len = 26,
		},
		.transactions = cmpw_transactions_31,
		.transactions_len = 15,
		.lenght = 60,
	},
};

#endif /* RBT_CMPW_H */