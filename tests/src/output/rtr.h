#ifndef RBT_RTR_H
#define RBT_RTR_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rtr_initial_ram_0[] = {
		{ .addr = 0x800950, .byte = 0x4e },
		{ .addr = 0x800951, .byte = 0x77 },
		{ .addr = 0x800952, .byte = 0x82 },
		{ .addr = 0x800953, .byte = 0x34 },
		{ .addr = 0xfe5f12, .byte = 0x8b },
		{ .addr = 0xfe5f13, .byte = 0x7b },
		{ .addr = 0xfe5f14, .byte = 0x36 },
		{ .addr = 0xfe5f15, .byte = 0xc3 },
		{ .addr = 0xfe5f16, .byte = 0xa4 },
		{ .addr = 0xfe5f17, .byte = 0xca },
		{ .addr = 0xc3a4ca, .byte = 0xdf },
		{ .addr = 0xc3a4cb, .byte = 0x65 },
		{ .addr = 0xc3a4cc, .byte = 0x5a },
		{ .addr = 0xc3a4cd, .byte = 0x3d }
};

static const SST_RamByte rtr_final_ram_0[] = {
		{ .addr = 0x800950, .byte = 0x4e },
		{ .addr = 0x800951, .byte = 0x77 },
		{ .addr = 0x800952, .byte = 0x82 },
		{ .addr = 0x800953, .byte = 0x34 },
		{ .addr = 0xfe5f12, .byte = 0x8b },
		{ .addr = 0xfe5f13, .byte = 0x7b },
		{ .addr = 0xfe5f14, .byte = 0x36 },
		{ .addr = 0xfe5f15, .byte = 0xc3 },
		{ .addr = 0xfe5f16, .byte = 0xa4 },
		{ .addr = 0xfe5f17, .byte = 0xca },
		{ .addr = 0xc3a4ca, .byte = 0xdf },
		{ .addr = 0xc3a4cb, .byte = 0x65 },
		{ .addr = 0xc3a4cc, .byte = 0x5a },
		{ .addr = 0xc3a4cd, .byte = 0x3d }
};

static const SST_Transaction rtr_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16670482, .data = 35707, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16670484, .data = 14019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16670486, .data = 42186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12821706, .data = 57189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12821708, .data = 23101, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_1[] = {
		{ .addr = 0xa4bfb2, .byte = 0x4e },
		{ .addr = 0xa4bfb3, .byte = 0x77 },
		{ .addr = 0xa4bfb4, .byte = 0xb4 },
		{ .addr = 0xa4bfb5, .byte = 0x1b },
		{ .addr = 0x23f670, .byte = 0xcf },
		{ .addr = 0x23f671, .byte = 0xf4 },
		{ .addr = 0x23f672, .byte = 0x9f },
		{ .addr = 0x23f673, .byte = 0x9e },
		{ .addr = 0x23f674, .byte = 0x27 },
		{ .addr = 0x23f675, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0xb9 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x7ec6cc, .byte = 0xe8 },
		{ .addr = 0x7ec6cd, .byte = 0x0b },
		{ .addr = 0x7ec6ce, .byte = 0x93 },
		{ .addr = 0x7ec6cf, .byte = 0x12 }
};

static const SST_RamByte rtr_final_ram_1[] = {
		{ .addr = 0xa4bfb2, .byte = 0x4e },
		{ .addr = 0xa4bfb3, .byte = 0x77 },
		{ .addr = 0xa4bfb4, .byte = 0xb4 },
		{ .addr = 0xa4bfb5, .byte = 0x1b },
		{ .addr = 0x23f670, .byte = 0xcf },
		{ .addr = 0x23f671, .byte = 0xf4 },
		{ .addr = 0x23f672, .byte = 0x9f },
		{ .addr = 0x23f673, .byte = 0x9e },
		{ .addr = 0x23f674, .byte = 0x27 },
		{ .addr = 0x23f675, .byte = 0xff },
		{ .addr = 0x347450, .byte = 0xbf },
		{ .addr = 0x347451, .byte = 0xb4 },
		{ .addr = 0x34744c, .byte = 0x00 },
		{ .addr = 0x34744d, .byte = 0x14 },
		{ .addr = 0x34744e, .byte = 0x00 },
		{ .addr = 0x34744f, .byte = 0xa4 },
		{ .addr = 0x34744a, .byte = 0x4e },
		{ .addr = 0x34744b, .byte = 0x77 },
		{ .addr = 0x347448, .byte = 0x27 },
		{ .addr = 0x347449, .byte = 0xff },
		{ .addr = 0x347444, .byte = 0x4e },
		{ .addr = 0x347445, .byte = 0x72 },
		{ .addr = 0x347446, .byte = 0x9f },
		{ .addr = 0x347447, .byte = 0x9e },
		{ .addr = 0x00000c, .byte = 0xb9 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x7ec6cc, .byte = 0xe8 },
		{ .addr = 0x7ec6cd, .byte = 0x0b },
		{ .addr = 0x7ec6ce, .byte = 0x93 },
		{ .addr = 0x7ec6cf, .byte = 0x12 }
};

static const SST_Transaction rtr_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2356848, .data = 53236, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2356850, .data = 40862, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2356852, .data = 10239, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10364926, .data = 25960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437648, .data = 49076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437644, .data = 20, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437646, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437642, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437640, .data = 10239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437636, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437638, .data = 40862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8308428, .data = 59403, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8308430, .data = 37650, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_2[] = {
		{ .addr = 0xf4c586, .byte = 0x4e },
		{ .addr = 0xf4c587, .byte = 0x77 },
		{ .addr = 0xf4c588, .byte = 0xd9 },
		{ .addr = 0xf4c589, .byte = 0xe2 },
		{ .addr = 0x51f326, .byte = 0xaa },
		{ .addr = 0x51f327, .byte = 0x5f },
		{ .addr = 0x51f328, .byte = 0xad },
		{ .addr = 0x51f329, .byte = 0x79 },
		{ .addr = 0x51f32a, .byte = 0xaf },
		{ .addr = 0x51f32b, .byte = 0x31 },
		{ .addr = 0x00000c, .byte = 0xb7 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0xa8 },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0x5ca800, .byte = 0x01 },
		{ .addr = 0x5ca801, .byte = 0x80 },
		{ .addr = 0x5ca802, .byte = 0x2e },
		{ .addr = 0x5ca803, .byte = 0xb3 }
};

static const SST_RamByte rtr_final_ram_2[] = {
		{ .addr = 0xf4c586, .byte = 0x4e },
		{ .addr = 0xf4c587, .byte = 0x77 },
		{ .addr = 0xf4c588, .byte = 0xd9 },
		{ .addr = 0xf4c589, .byte = 0xe2 },
		{ .addr = 0x51f326, .byte = 0xaa },
		{ .addr = 0x51f327, .byte = 0x5f },
		{ .addr = 0x51f328, .byte = 0xad },
		{ .addr = 0x51f329, .byte = 0x79 },
		{ .addr = 0x51f32a, .byte = 0xaf },
		{ .addr = 0x51f32b, .byte = 0x31 },
		{ .addr = 0x7e3820, .byte = 0xc5 },
		{ .addr = 0x7e3821, .byte = 0x88 },
		{ .addr = 0x7e381c, .byte = 0x81 },
		{ .addr = 0x7e381d, .byte = 0x1f },
		{ .addr = 0x7e381e, .byte = 0x00 },
		{ .addr = 0x7e381f, .byte = 0xf4 },
		{ .addr = 0x7e381a, .byte = 0x4e },
		{ .addr = 0x7e381b, .byte = 0x77 },
		{ .addr = 0x7e3818, .byte = 0xaf },
		{ .addr = 0x7e3819, .byte = 0x31 },
		{ .addr = 0x7e3814, .byte = 0x4e },
		{ .addr = 0x7e3815, .byte = 0x72 },
		{ .addr = 0x7e3816, .byte = 0xad },
		{ .addr = 0x7e3817, .byte = 0x79 },
		{ .addr = 0x00000c, .byte = 0xb7 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0xa8 },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0x5ca800, .byte = 0x01 },
		{ .addr = 0x5ca801, .byte = 0x80 },
		{ .addr = 0x5ca802, .byte = 0x2e },
		{ .addr = 0x5ca803, .byte = 0xb3 }
};

static const SST_Transaction rtr_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5370662, .data = 43615, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5370664, .data = 44409, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5370666, .data = 44849, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7974704, .data = 27557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8271904, .data = 50568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8271900, .data = 33055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8271902, .data = 244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8271898, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8271896, .data = 44849, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8271892, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8271894, .data = 44409, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6072320, .data = 384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6072322, .data = 11955, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_3[] = {
		{ .addr = 0xb115c2, .byte = 0x4e },
		{ .addr = 0xb115c3, .byte = 0x77 },
		{ .addr = 0xb115c4, .byte = 0xb1 },
		{ .addr = 0xb115c5, .byte = 0x3e },
		{ .addr = 0x576dc2, .byte = 0x5b },
		{ .addr = 0x576dc3, .byte = 0xd0 },
		{ .addr = 0x576dc4, .byte = 0x28 },
		{ .addr = 0x576dc5, .byte = 0xfc },
		{ .addr = 0x576dc6, .byte = 0x4e },
		{ .addr = 0x576dc7, .byte = 0x66 },
		{ .addr = 0xfc4e66, .byte = 0x64 },
		{ .addr = 0xfc4e67, .byte = 0x26 },
		{ .addr = 0xfc4e68, .byte = 0x2c },
		{ .addr = 0xfc4e69, .byte = 0xbc }
};

static const SST_RamByte rtr_final_ram_3[] = {
		{ .addr = 0xb115c2, .byte = 0x4e },
		{ .addr = 0xb115c3, .byte = 0x77 },
		{ .addr = 0xb115c4, .byte = 0xb1 },
		{ .addr = 0xb115c5, .byte = 0x3e },
		{ .addr = 0x576dc2, .byte = 0x5b },
		{ .addr = 0x576dc3, .byte = 0xd0 },
		{ .addr = 0x576dc4, .byte = 0x28 },
		{ .addr = 0x576dc5, .byte = 0xfc },
		{ .addr = 0x576dc6, .byte = 0x4e },
		{ .addr = 0x576dc7, .byte = 0x66 },
		{ .addr = 0xfc4e66, .byte = 0x64 },
		{ .addr = 0xfc4e67, .byte = 0x26 },
		{ .addr = 0xfc4e68, .byte = 0x2c },
		{ .addr = 0xfc4e69, .byte = 0xbc }
};

static const SST_Transaction rtr_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5729730, .data = 23504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5729732, .data = 10492, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5729734, .data = 20070, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16535142, .data = 25638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16535144, .data = 11452, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_4[] = {
		{ .addr = 0x8d10e4, .byte = 0x4e },
		{ .addr = 0x8d10e5, .byte = 0x77 },
		{ .addr = 0x8d10e6, .byte = 0x0a },
		{ .addr = 0x8d10e7, .byte = 0x27 },
		{ .addr = 0xdbbf02, .byte = 0xd7 },
		{ .addr = 0xdbbf03, .byte = 0xb4 },
		{ .addr = 0xdbbf04, .byte = 0x61 },
		{ .addr = 0xdbbf05, .byte = 0x79 },
		{ .addr = 0xdbbf06, .byte = 0x18 },
		{ .addr = 0xdbbf07, .byte = 0xea },
		{ .addr = 0x7918ea, .byte = 0xa5 },
		{ .addr = 0x7918eb, .byte = 0x55 },
		{ .addr = 0x7918ec, .byte = 0x79 },
		{ .addr = 0x7918ed, .byte = 0x03 }
};

static const SST_RamByte rtr_final_ram_4[] = {
		{ .addr = 0x8d10e4, .byte = 0x4e },
		{ .addr = 0x8d10e5, .byte = 0x77 },
		{ .addr = 0x8d10e6, .byte = 0x0a },
		{ .addr = 0x8d10e7, .byte = 0x27 },
		{ .addr = 0xdbbf02, .byte = 0xd7 },
		{ .addr = 0xdbbf03, .byte = 0xb4 },
		{ .addr = 0xdbbf04, .byte = 0x61 },
		{ .addr = 0xdbbf05, .byte = 0x79 },
		{ .addr = 0xdbbf06, .byte = 0x18 },
		{ .addr = 0xdbbf07, .byte = 0xea },
		{ .addr = 0x7918ea, .byte = 0xa5 },
		{ .addr = 0x7918eb, .byte = 0x55 },
		{ .addr = 0x7918ec, .byte = 0x79 },
		{ .addr = 0x7918ed, .byte = 0x03 }
};

static const SST_Transaction rtr_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401282, .data = 55220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401284, .data = 24953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14401286, .data = 6378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7936234, .data = 42325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7936236, .data = 30979, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_5[] = {
		{ .addr = 0x2c7d86, .byte = 0x4e },
		{ .addr = 0x2c7d87, .byte = 0x77 },
		{ .addr = 0x2c7d88, .byte = 0x06 },
		{ .addr = 0x2c7d89, .byte = 0x22 },
		{ .addr = 0xea997c, .byte = 0x06 },
		{ .addr = 0xea997d, .byte = 0x0e },
		{ .addr = 0xea997e, .byte = 0xe1 },
		{ .addr = 0xea997f, .byte = 0x6e },
		{ .addr = 0xea9980, .byte = 0x52 },
		{ .addr = 0xea9981, .byte = 0xab },
		{ .addr = 0x00000c, .byte = 0xc4 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0x668006, .byte = 0x74 },
		{ .addr = 0x668007, .byte = 0xe1 },
		{ .addr = 0x668008, .byte = 0xa5 },
		{ .addr = 0x668009, .byte = 0xe7 }
};

static const SST_RamByte rtr_final_ram_5[] = {
		{ .addr = 0x2c7d86, .byte = 0x4e },
		{ .addr = 0x2c7d87, .byte = 0x77 },
		{ .addr = 0x2c7d88, .byte = 0x06 },
		{ .addr = 0x2c7d89, .byte = 0x22 },
		{ .addr = 0xea997c, .byte = 0xa7 },
		{ .addr = 0xea997d, .byte = 0x0e },
		{ .addr = 0xea997e, .byte = 0x00 },
		{ .addr = 0xea997f, .byte = 0x2c },
		{ .addr = 0xea9980, .byte = 0x7d },
		{ .addr = 0xea9981, .byte = 0x88 },
		{ .addr = 0xea997a, .byte = 0x4e },
		{ .addr = 0xea997b, .byte = 0x77 },
		{ .addr = 0xea9978, .byte = 0x52 },
		{ .addr = 0xea9979, .byte = 0xab },
		{ .addr = 0xea9974, .byte = 0x4e },
		{ .addr = 0xea9975, .byte = 0x76 },
		{ .addr = 0xea9976, .byte = 0xe1 },
		{ .addr = 0xea9977, .byte = 0x6e },
		{ .addr = 0x00000c, .byte = 0xc4 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0x668006, .byte = 0x74 },
		{ .addr = 0x668007, .byte = 0xe1 },
		{ .addr = 0x668008, .byte = 0xa5 },
		{ .addr = 0x668009, .byte = 0xe7 }
};

static const SST_Transaction rtr_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374716, .data = 1550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374718, .data = 57710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374720, .data = 21163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7230122, .data = 47999, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374720, .data = 32136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374716, .data = 42766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374718, .data = 44, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374714, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374712, .data = 21163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374708, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15374710, .data = 57710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6717446, .data = 29921, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6717448, .data = 42471, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_6[] = {
		{ .addr = 0x5c37e6, .byte = 0x4e },
		{ .addr = 0x5c37e7, .byte = 0x77 },
		{ .addr = 0x5c37e8, .byte = 0xe0 },
		{ .addr = 0x5c37e9, .byte = 0x30 },
		{ .addr = 0xa242c6, .byte = 0x61 },
		{ .addr = 0xa242c7, .byte = 0x38 },
		{ .addr = 0xa242c8, .byte = 0x35 },
		{ .addr = 0xa242c9, .byte = 0xa6 },
		{ .addr = 0xa242ca, .byte = 0x08 },
		{ .addr = 0xa242cb, .byte = 0x93 },
		{ .addr = 0x00000c, .byte = 0x42 },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xa42f52, .byte = 0x44 },
		{ .addr = 0xa42f53, .byte = 0x3a },
		{ .addr = 0xa42f54, .byte = 0xe7 },
		{ .addr = 0xa42f55, .byte = 0xea }
};

static const SST_RamByte rtr_final_ram_6[] = {
		{ .addr = 0x5c37e6, .byte = 0x4e },
		{ .addr = 0x5c37e7, .byte = 0x77 },
		{ .addr = 0x5c37e8, .byte = 0xe0 },
		{ .addr = 0x5c37e9, .byte = 0x30 },
		{ .addr = 0xa242c6, .byte = 0xa3 },
		{ .addr = 0xa242c7, .byte = 0x18 },
		{ .addr = 0xa242c8, .byte = 0x00 },
		{ .addr = 0xa242c9, .byte = 0x5c },
		{ .addr = 0xa242ca, .byte = 0x37 },
		{ .addr = 0xa242cb, .byte = 0xe8 },
		{ .addr = 0xa242c4, .byte = 0x4e },
		{ .addr = 0xa242c5, .byte = 0x77 },
		{ .addr = 0xa242c2, .byte = 0x08 },
		{ .addr = 0xa242c3, .byte = 0x93 },
		{ .addr = 0xa242be, .byte = 0x4e },
		{ .addr = 0xa242bf, .byte = 0x76 },
		{ .addr = 0xa242c0, .byte = 0x35 },
		{ .addr = 0xa242c1, .byte = 0xa6 },
		{ .addr = 0x00000c, .byte = 0x42 },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xa42f52, .byte = 0x44 },
		{ .addr = 0xa42f53, .byte = 0x3a },
		{ .addr = 0xa42f54, .byte = 0xe7 },
		{ .addr = 0xa42f55, .byte = 0xea }
};

static const SST_Transaction rtr_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633926, .data = 24888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633928, .data = 13734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633930, .data = 2195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10881170, .data = 13476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633930, .data = 14312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633926, .data = 41752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633928, .data = 92, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633924, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633922, .data = 2195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633918, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10633920, .data = 13734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 17060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10760018, .data = 17466, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10760020, .data = 59370, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_7[] = {
		{ .addr = 0x5f37d2, .byte = 0x4e },
		{ .addr = 0x5f37d3, .byte = 0x77 },
		{ .addr = 0x5f37d4, .byte = 0x94 },
		{ .addr = 0x5f37d5, .byte = 0xc6 },
		{ .addr = 0xe5dbf4, .byte = 0x06 },
		{ .addr = 0xe5dbf5, .byte = 0x6e },
		{ .addr = 0xe5dbf6, .byte = 0x41 },
		{ .addr = 0xe5dbf7, .byte = 0x02 },
		{ .addr = 0xe5dbf8, .byte = 0x8b },
		{ .addr = 0xe5dbf9, .byte = 0xc0 },
		{ .addr = 0x028bc0, .byte = 0x70 },
		{ .addr = 0x028bc1, .byte = 0xcf },
		{ .addr = 0x028bc2, .byte = 0xef },
		{ .addr = 0x028bc3, .byte = 0xaa }
};

static const SST_RamByte rtr_final_ram_7[] = {
		{ .addr = 0x5f37d2, .byte = 0x4e },
		{ .addr = 0x5f37d3, .byte = 0x77 },
		{ .addr = 0x5f37d4, .byte = 0x94 },
		{ .addr = 0x5f37d5, .byte = 0xc6 },
		{ .addr = 0xe5dbf4, .byte = 0x06 },
		{ .addr = 0xe5dbf5, .byte = 0x6e },
		{ .addr = 0xe5dbf6, .byte = 0x41 },
		{ .addr = 0xe5dbf7, .byte = 0x02 },
		{ .addr = 0xe5dbf8, .byte = 0x8b },
		{ .addr = 0xe5dbf9, .byte = 0xc0 },
		{ .addr = 0x028bc0, .byte = 0x70 },
		{ .addr = 0x028bc1, .byte = 0xcf },
		{ .addr = 0x028bc2, .byte = 0xef },
		{ .addr = 0x028bc3, .byte = 0xaa }
};

static const SST_Transaction rtr_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15064052, .data = 1646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15064054, .data = 16642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15064056, .data = 35776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 166848, .data = 28879, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 166850, .data = 61354, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_8[] = {
		{ .addr = 0x04eca2, .byte = 0x4e },
		{ .addr = 0x04eca3, .byte = 0x77 },
		{ .addr = 0x04eca4, .byte = 0xb9 },
		{ .addr = 0x04eca5, .byte = 0x81 },
		{ .addr = 0x14042a, .byte = 0x05 },
		{ .addr = 0x14042b, .byte = 0xae },
		{ .addr = 0x14042c, .byte = 0xc3 },
		{ .addr = 0x14042d, .byte = 0x88 },
		{ .addr = 0x14042e, .byte = 0xb9 },
		{ .addr = 0x14042f, .byte = 0xde },
		{ .addr = 0x88b9de, .byte = 0x41 },
		{ .addr = 0x88b9df, .byte = 0x6e },
		{ .addr = 0x88b9e0, .byte = 0x2a },
		{ .addr = 0x88b9e1, .byte = 0x79 }
};

static const SST_RamByte rtr_final_ram_8[] = {
		{ .addr = 0x04eca2, .byte = 0x4e },
		{ .addr = 0x04eca3, .byte = 0x77 },
		{ .addr = 0x04eca4, .byte = 0xb9 },
		{ .addr = 0x04eca5, .byte = 0x81 },
		{ .addr = 0x14042a, .byte = 0x05 },
		{ .addr = 0x14042b, .byte = 0xae },
		{ .addr = 0x14042c, .byte = 0xc3 },
		{ .addr = 0x14042d, .byte = 0x88 },
		{ .addr = 0x14042e, .byte = 0xb9 },
		{ .addr = 0x14042f, .byte = 0xde },
		{ .addr = 0x88b9de, .byte = 0x41 },
		{ .addr = 0x88b9df, .byte = 0x6e },
		{ .addr = 0x88b9e0, .byte = 0x2a },
		{ .addr = 0x88b9e1, .byte = 0x79 }
};

static const SST_Transaction rtr_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1311786, .data = 1454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1311788, .data = 50056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1311790, .data = 47582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8960478, .data = 16750, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8960480, .data = 10873, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_9[] = {
		{ .addr = 0x67e7e0, .byte = 0x4e },
		{ .addr = 0x67e7e1, .byte = 0x77 },
		{ .addr = 0x67e7e2, .byte = 0xda },
		{ .addr = 0x67e7e3, .byte = 0x1e },
		{ .addr = 0x7a0d4a, .byte = 0xc0 },
		{ .addr = 0x7a0d4b, .byte = 0xc7 },
		{ .addr = 0x7a0d4c, .byte = 0xf6 },
		{ .addr = 0x7a0d4d, .byte = 0x48 },
		{ .addr = 0x7a0d4e, .byte = 0x40 },
		{ .addr = 0x7a0d4f, .byte = 0xbf },
		{ .addr = 0x00000c, .byte = 0x97 },
		{ .addr = 0x00000d, .byte = 0xe6 },
		{ .addr = 0x00000e, .byte = 0xa9 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0xe6a9d6, .byte = 0x97 },
		{ .addr = 0xe6a9d7, .byte = 0x8f },
		{ .addr = 0xe6a9d8, .byte = 0x85 },
		{ .addr = 0xe6a9d9, .byte = 0x88 }
};

static const SST_RamByte rtr_final_ram_9[] = {
		{ .addr = 0x67e7e0, .byte = 0x4e },
		{ .addr = 0x67e7e1, .byte = 0x77 },
		{ .addr = 0x67e7e2, .byte = 0xda },
		{ .addr = 0x67e7e3, .byte = 0x1e },
		{ .addr = 0x7a0d4a, .byte = 0xc0 },
		{ .addr = 0x7a0d4b, .byte = 0xc7 },
		{ .addr = 0x7a0d4c, .byte = 0xf6 },
		{ .addr = 0x7a0d4d, .byte = 0x48 },
		{ .addr = 0x7a0d4e, .byte = 0x40 },
		{ .addr = 0x7a0d4f, .byte = 0xbf },
		{ .addr = 0x9eb55a, .byte = 0xe7 },
		{ .addr = 0x9eb55b, .byte = 0xe2 },
		{ .addr = 0x9eb556, .byte = 0x84 },
		{ .addr = 0x9eb557, .byte = 0x07 },
		{ .addr = 0x9eb558, .byte = 0x00 },
		{ .addr = 0x9eb559, .byte = 0x67 },
		{ .addr = 0x9eb554, .byte = 0x4e },
		{ .addr = 0x9eb555, .byte = 0x77 },
		{ .addr = 0x9eb552, .byte = 0x40 },
		{ .addr = 0x9eb553, .byte = 0xbf },
		{ .addr = 0x9eb54e, .byte = 0x4e },
		{ .addr = 0x9eb54f, .byte = 0x72 },
		{ .addr = 0x9eb550, .byte = 0xf6 },
		{ .addr = 0x9eb551, .byte = 0x48 },
		{ .addr = 0x00000c, .byte = 0x97 },
		{ .addr = 0x00000d, .byte = 0xe6 },
		{ .addr = 0x00000e, .byte = 0xa9 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0xe6a9d6, .byte = 0x97 },
		{ .addr = 0xe6a9d7, .byte = 0x8f },
		{ .addr = 0xe6a9d8, .byte = 0x85 },
		{ .addr = 0xe6a9d9, .byte = 0x88 }
};

static const SST_Transaction rtr_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7998794, .data = 49351, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7998796, .data = 63048, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7998798, .data = 16575, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4735166, .data = 16888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10401114, .data = 59362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10401110, .data = 33799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10401112, .data = 103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10401108, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10401106, .data = 16575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10401102, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10401104, .data = 63048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15116758, .data = 38799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15116760, .data = 34184, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_10[] = {
		{ .addr = 0xef981c, .byte = 0x4e },
		{ .addr = 0xef981d, .byte = 0x77 },
		{ .addr = 0xef981e, .byte = 0xed },
		{ .addr = 0xef981f, .byte = 0x16 },
		{ .addr = 0xf680e2, .byte = 0xa0 },
		{ .addr = 0xf680e3, .byte = 0x18 },
		{ .addr = 0xf680e4, .byte = 0x7f },
		{ .addr = 0xf680e5, .byte = 0x58 },
		{ .addr = 0xf680e6, .byte = 0x03 },
		{ .addr = 0xf680e7, .byte = 0xda },
		{ .addr = 0x5803da, .byte = 0x13 },
		{ .addr = 0x5803db, .byte = 0xa9 },
		{ .addr = 0x5803dc, .byte = 0xb6 },
		{ .addr = 0x5803dd, .byte = 0x9e }
};

static const SST_RamByte rtr_final_ram_10[] = {
		{ .addr = 0xef981c, .byte = 0x4e },
		{ .addr = 0xef981d, .byte = 0x77 },
		{ .addr = 0xef981e, .byte = 0xed },
		{ .addr = 0xef981f, .byte = 0x16 },
		{ .addr = 0xf680e2, .byte = 0xa0 },
		{ .addr = 0xf680e3, .byte = 0x18 },
		{ .addr = 0xf680e4, .byte = 0x7f },
		{ .addr = 0xf680e5, .byte = 0x58 },
		{ .addr = 0xf680e6, .byte = 0x03 },
		{ .addr = 0xf680e7, .byte = 0xda },
		{ .addr = 0x5803da, .byte = 0x13 },
		{ .addr = 0x5803db, .byte = 0xa9 },
		{ .addr = 0x5803dc, .byte = 0xb6 },
		{ .addr = 0x5803dd, .byte = 0x9e }
};

static const SST_Transaction rtr_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16154850, .data = 40984, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16154852, .data = 32600, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16154854, .data = 986, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5768154, .data = 5033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5768156, .data = 46750, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_11[] = {
		{ .addr = 0xea7c56, .byte = 0x4e },
		{ .addr = 0xea7c57, .byte = 0x77 },
		{ .addr = 0xea7c58, .byte = 0x6d },
		{ .addr = 0xea7c59, .byte = 0xb7 },
		{ .addr = 0x95afaa, .byte = 0xef },
		{ .addr = 0x95afab, .byte = 0x08 },
		{ .addr = 0x95afac, .byte = 0x1f },
		{ .addr = 0x95afad, .byte = 0xa4 },
		{ .addr = 0x95afae, .byte = 0x9f },
		{ .addr = 0x95afaf, .byte = 0x0d },
		{ .addr = 0x00000c, .byte = 0xa4 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xb9 },
		{ .addr = 0x00000f, .byte = 0x60 },
		{ .addr = 0x0eb960, .byte = 0x1b },
		{ .addr = 0x0eb961, .byte = 0x62 },
		{ .addr = 0x0eb962, .byte = 0x80 },
		{ .addr = 0x0eb963, .byte = 0x02 }
};

static const SST_RamByte rtr_final_ram_11[] = {
		{ .addr = 0xea7c56, .byte = 0x4e },
		{ .addr = 0xea7c57, .byte = 0x77 },
		{ .addr = 0xea7c58, .byte = 0x6d },
		{ .addr = 0xea7c59, .byte = 0xb7 },
		{ .addr = 0x95afaa, .byte = 0xef },
		{ .addr = 0x95afab, .byte = 0x08 },
		{ .addr = 0x95afac, .byte = 0x1f },
		{ .addr = 0x95afad, .byte = 0xa4 },
		{ .addr = 0x95afae, .byte = 0x9f },
		{ .addr = 0x95afaf, .byte = 0x0d },
		{ .addr = 0x5c90a4, .byte = 0x7c },
		{ .addr = 0x5c90a5, .byte = 0x58 },
		{ .addr = 0x5c90a0, .byte = 0x85 },
		{ .addr = 0x5c90a1, .byte = 0x08 },
		{ .addr = 0x5c90a2, .byte = 0x00 },
		{ .addr = 0x5c90a3, .byte = 0xea },
		{ .addr = 0x5c909e, .byte = 0x4e },
		{ .addr = 0x5c909f, .byte = 0x77 },
		{ .addr = 0x5c909c, .byte = 0x9f },
		{ .addr = 0x5c909d, .byte = 0x0d },
		{ .addr = 0x5c9098, .byte = 0x4e },
		{ .addr = 0x5c9099, .byte = 0x72 },
		{ .addr = 0x5c909a, .byte = 0x1f },
		{ .addr = 0x5c909b, .byte = 0xa4 },
		{ .addr = 0x00000c, .byte = 0xa4 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xb9 },
		{ .addr = 0x00000f, .byte = 0x60 },
		{ .addr = 0x0eb960, .byte = 0x1b },
		{ .addr = 0x0eb961, .byte = 0x62 },
		{ .addr = 0x0eb962, .byte = 0x80 },
		{ .addr = 0x0eb963, .byte = 0x02 }
};

static const SST_Transaction rtr_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9809834, .data = 61192, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9809836, .data = 8100, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9809838, .data = 40717, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10788620, .data = 23906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6066340, .data = 31832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6066336, .data = 34056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6066338, .data = 234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6066334, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6066332, .data = 40717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6066328, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6066330, .data = 8100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 47456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 964960, .data = 7010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 964962, .data = 32770, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_12[] = {
		{ .addr = 0x56cb36, .byte = 0x4e },
		{ .addr = 0x56cb37, .byte = 0x77 },
		{ .addr = 0x56cb38, .byte = 0x0e },
		{ .addr = 0x56cb39, .byte = 0xb1 },
		{ .addr = 0x49b220, .byte = 0xfa },
		{ .addr = 0x49b221, .byte = 0x9b },
		{ .addr = 0x49b222, .byte = 0x43 },
		{ .addr = 0x49b223, .byte = 0x7a },
		{ .addr = 0x49b224, .byte = 0x78 },
		{ .addr = 0x49b225, .byte = 0x8f },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xca },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0xd8caaa, .byte = 0x75 },
		{ .addr = 0xd8caab, .byte = 0x29 },
		{ .addr = 0xd8caac, .byte = 0x9b },
		{ .addr = 0xd8caad, .byte = 0x57 }
};

static const SST_RamByte rtr_final_ram_12[] = {
		{ .addr = 0x56cb36, .byte = 0x4e },
		{ .addr = 0x56cb37, .byte = 0x77 },
		{ .addr = 0x56cb38, .byte = 0x0e },
		{ .addr = 0x56cb39, .byte = 0xb1 },
		{ .addr = 0x49b220, .byte = 0x26 },
		{ .addr = 0x49b221, .byte = 0x1b },
		{ .addr = 0x49b222, .byte = 0x00 },
		{ .addr = 0x49b223, .byte = 0x56 },
		{ .addr = 0x49b224, .byte = 0xcb },
		{ .addr = 0x49b225, .byte = 0x38 },
		{ .addr = 0x49b21e, .byte = 0x4e },
		{ .addr = 0x49b21f, .byte = 0x77 },
		{ .addr = 0x49b21c, .byte = 0x78 },
		{ .addr = 0x49b21d, .byte = 0x8f },
		{ .addr = 0x49b218, .byte = 0x4e },
		{ .addr = 0x49b219, .byte = 0x76 },
		{ .addr = 0x49b21a, .byte = 0x43 },
		{ .addr = 0x49b21b, .byte = 0x7a },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xca },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0xd8caaa, .byte = 0x75 },
		{ .addr = 0xd8caab, .byte = 0x29 },
		{ .addr = 0xd8caac, .byte = 0x9b },
		{ .addr = 0xd8caad, .byte = 0x57 }
};

static const SST_Transaction rtr_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829728, .data = 64155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829730, .data = 17274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829732, .data = 30863, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8026254, .data = 28233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829732, .data = 52024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829728, .data = 9755, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829730, .data = 86, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829726, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829724, .data = 30863, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829720, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4829722, .data = 17274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14207658, .data = 29993, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14207660, .data = 39767, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_13[] = {
		{ .addr = 0x0e08e0, .byte = 0x4e },
		{ .addr = 0x0e08e1, .byte = 0x77 },
		{ .addr = 0x0e08e2, .byte = 0x06 },
		{ .addr = 0x0e08e3, .byte = 0x88 },
		{ .addr = 0xdd6ec0, .byte = 0x19 },
		{ .addr = 0xdd6ec1, .byte = 0x81 },
		{ .addr = 0xdd6ec2, .byte = 0xed },
		{ .addr = 0xdd6ec3, .byte = 0xd3 },
		{ .addr = 0xdd6ec4, .byte = 0xee },
		{ .addr = 0xdd6ec5, .byte = 0x27 },
		{ .addr = 0x00000c, .byte = 0xd7 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x46478e, .byte = 0x14 },
		{ .addr = 0x46478f, .byte = 0xd6 },
		{ .addr = 0x464790, .byte = 0x13 },
		{ .addr = 0x464791, .byte = 0x24 }
};

static const SST_RamByte rtr_final_ram_13[] = {
		{ .addr = 0x0e08e0, .byte = 0x4e },
		{ .addr = 0x0e08e1, .byte = 0x77 },
		{ .addr = 0x0e08e2, .byte = 0x06 },
		{ .addr = 0x0e08e3, .byte = 0x88 },
		{ .addr = 0xdd6ec0, .byte = 0x19 },
		{ .addr = 0xdd6ec1, .byte = 0x81 },
		{ .addr = 0xdd6ec2, .byte = 0xed },
		{ .addr = 0xdd6ec3, .byte = 0xd3 },
		{ .addr = 0xdd6ec4, .byte = 0xee },
		{ .addr = 0xdd6ec5, .byte = 0x27 },
		{ .addr = 0x2a1274, .byte = 0x08 },
		{ .addr = 0x2a1275, .byte = 0xe2 },
		{ .addr = 0x2a1270, .byte = 0x02 },
		{ .addr = 0x2a1271, .byte = 0x01 },
		{ .addr = 0x2a1272, .byte = 0x00 },
		{ .addr = 0x2a1273, .byte = 0x0e },
		{ .addr = 0x2a126e, .byte = 0x4e },
		{ .addr = 0x2a126f, .byte = 0x77 },
		{ .addr = 0x2a126c, .byte = 0xee },
		{ .addr = 0x2a126d, .byte = 0x27 },
		{ .addr = 0x2a1268, .byte = 0x4e },
		{ .addr = 0x2a1269, .byte = 0x72 },
		{ .addr = 0x2a126a, .byte = 0xed },
		{ .addr = 0x2a126b, .byte = 0xd3 },
		{ .addr = 0x00000c, .byte = 0xd7 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x47 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x46478e, .byte = 0x14 },
		{ .addr = 0x46478f, .byte = 0xd6 },
		{ .addr = 0x464790, .byte = 0x13 },
		{ .addr = 0x464791, .byte = 0x24 }
};

static const SST_Transaction rtr_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14511808, .data = 6529, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14511810, .data = 60883, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14511812, .data = 60967, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13889062, .data = 28885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2757236, .data = 2274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2757232, .data = 513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2757234, .data = 14, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2757230, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2757228, .data = 60967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2757224, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2757226, .data = 60883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 55110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4605838, .data = 5334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4605840, .data = 4900, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_14[] = {
		{ .addr = 0xb4931a, .byte = 0x4e },
		{ .addr = 0xb4931b, .byte = 0x77 },
		{ .addr = 0xb4931c, .byte = 0xd7 },
		{ .addr = 0xb4931d, .byte = 0x08 },
		{ .addr = 0xf23712, .byte = 0xa1 },
		{ .addr = 0xf23713, .byte = 0x13 },
		{ .addr = 0xf23714, .byte = 0xe0 },
		{ .addr = 0xf23715, .byte = 0xfa },
		{ .addr = 0xf23716, .byte = 0x9f },
		{ .addr = 0xf23717, .byte = 0x33 },
		{ .addr = 0x00000c, .byte = 0x4d },
		{ .addr = 0x00000d, .byte = 0x62 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0x58 },
		{ .addr = 0x624658, .byte = 0x46 },
		{ .addr = 0x624659, .byte = 0x2f },
		{ .addr = 0x62465a, .byte = 0x14 },
		{ .addr = 0x62465b, .byte = 0xc7 }
};

static const SST_RamByte rtr_final_ram_14[] = {
		{ .addr = 0xb4931a, .byte = 0x4e },
		{ .addr = 0xb4931b, .byte = 0x77 },
		{ .addr = 0xb4931c, .byte = 0xd7 },
		{ .addr = 0xb4931d, .byte = 0x08 },
		{ .addr = 0xf23712, .byte = 0xa1 },
		{ .addr = 0xf23713, .byte = 0x13 },
		{ .addr = 0xf23714, .byte = 0xe0 },
		{ .addr = 0xf23715, .byte = 0xfa },
		{ .addr = 0xf23716, .byte = 0x9f },
		{ .addr = 0xf23717, .byte = 0x33 },
		{ .addr = 0x6188b2, .byte = 0x93 },
		{ .addr = 0x6188b3, .byte = 0x1c },
		{ .addr = 0x6188ae, .byte = 0x81 },
		{ .addr = 0x6188af, .byte = 0x13 },
		{ .addr = 0x6188b0, .byte = 0x00 },
		{ .addr = 0x6188b1, .byte = 0xb4 },
		{ .addr = 0x6188ac, .byte = 0x4e },
		{ .addr = 0x6188ad, .byte = 0x77 },
		{ .addr = 0x6188aa, .byte = 0x9f },
		{ .addr = 0x6188ab, .byte = 0x33 },
		{ .addr = 0x6188a6, .byte = 0x4e },
		{ .addr = 0x6188a7, .byte = 0x72 },
		{ .addr = 0x6188a8, .byte = 0xe0 },
		{ .addr = 0x6188a9, .byte = 0xfa },
		{ .addr = 0x00000c, .byte = 0x4d },
		{ .addr = 0x00000d, .byte = 0x62 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0x58 },
		{ .addr = 0x624658, .byte = 0x46 },
		{ .addr = 0x624659, .byte = 0x2f },
		{ .addr = 0x62465a, .byte = 0x14 },
		{ .addr = 0x62465b, .byte = 0xc7 }
};

static const SST_Transaction rtr_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15873810, .data = 41235, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15873812, .data = 57594, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15873814, .data = 40755, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16424754, .data = 29795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6391986, .data = 37660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6391982, .data = 33043, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6391984, .data = 180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6391980, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6391978, .data = 40755, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6391974, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6391976, .data = 57594, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6440536, .data = 17967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6440538, .data = 5319, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_15[] = {
		{ .addr = 0xf8331e, .byte = 0x4e },
		{ .addr = 0xf8331f, .byte = 0x77 },
		{ .addr = 0xf83320, .byte = 0x69 },
		{ .addr = 0xf83321, .byte = 0xb2 },
		{ .addr = 0xcbb9de, .byte = 0x24 },
		{ .addr = 0xcbb9df, .byte = 0x57 },
		{ .addr = 0xcbb9e0, .byte = 0x86 },
		{ .addr = 0xcbb9e1, .byte = 0x87 },
		{ .addr = 0xcbb9e2, .byte = 0x8e },
		{ .addr = 0xcbb9e3, .byte = 0x3f },
		{ .addr = 0x00000c, .byte = 0x18 },
		{ .addr = 0x00000d, .byte = 0x1c },
		{ .addr = 0x00000e, .byte = 0x03 },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x1c03c4, .byte = 0x0f },
		{ .addr = 0x1c03c5, .byte = 0xf2 },
		{ .addr = 0x1c03c6, .byte = 0x26 },
		{ .addr = 0x1c03c7, .byte = 0x87 }
};

static const SST_RamByte rtr_final_ram_15[] = {
		{ .addr = 0xf8331e, .byte = 0x4e },
		{ .addr = 0xf8331f, .byte = 0x77 },
		{ .addr = 0xf83320, .byte = 0x69 },
		{ .addr = 0xf83321, .byte = 0xb2 },
		{ .addr = 0xcbb9de, .byte = 0x24 },
		{ .addr = 0xcbb9df, .byte = 0x57 },
		{ .addr = 0xcbb9e0, .byte = 0x86 },
		{ .addr = 0xcbb9e1, .byte = 0x87 },
		{ .addr = 0xcbb9e2, .byte = 0x8e },
		{ .addr = 0xcbb9e3, .byte = 0x3f },
		{ .addr = 0xb50704, .byte = 0x33 },
		{ .addr = 0xb50705, .byte = 0x20 },
		{ .addr = 0xb50700, .byte = 0x05 },
		{ .addr = 0xb50701, .byte = 0x17 },
		{ .addr = 0xb50702, .byte = 0x00 },
		{ .addr = 0xb50703, .byte = 0xf8 },
		{ .addr = 0xb506fe, .byte = 0x4e },
		{ .addr = 0xb506ff, .byte = 0x77 },
		{ .addr = 0xb506fc, .byte = 0x8e },
		{ .addr = 0xb506fd, .byte = 0x3f },
		{ .addr = 0xb506f8, .byte = 0x4e },
		{ .addr = 0xb506f9, .byte = 0x72 },
		{ .addr = 0xb506fa, .byte = 0x86 },
		{ .addr = 0xb506fb, .byte = 0x87 },
		{ .addr = 0x00000c, .byte = 0x18 },
		{ .addr = 0x00000d, .byte = 0x1c },
		{ .addr = 0x00000e, .byte = 0x03 },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x1c03c4, .byte = 0x0f },
		{ .addr = 0x1c03c5, .byte = 0xf2 },
		{ .addr = 0x1c03c6, .byte = 0x26 },
		{ .addr = 0x1c03c7, .byte = 0x87 }
};

static const SST_Transaction rtr_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13351390, .data = 9303, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13351392, .data = 34439, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13351394, .data = 36415, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8883774, .data = 31575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11863812, .data = 13088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11863808, .data = 1303, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11863810, .data = 248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11863806, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11863804, .data = 36415, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11863800, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11863802, .data = 34439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1835972, .data = 4082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1835974, .data = 9863, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_16[] = {
		{ .addr = 0x977dee, .byte = 0x4e },
		{ .addr = 0x977def, .byte = 0x77 },
		{ .addr = 0x977df0, .byte = 0xe5 },
		{ .addr = 0x977df1, .byte = 0xfd },
		{ .addr = 0xb71c7a, .byte = 0x19 },
		{ .addr = 0xb71c7b, .byte = 0x4a },
		{ .addr = 0xb71c7c, .byte = 0x99 },
		{ .addr = 0xb71c7d, .byte = 0xbe },
		{ .addr = 0xb71c7e, .byte = 0x93 },
		{ .addr = 0xb71c7f, .byte = 0xd9 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x30 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x8e308a, .byte = 0xdb },
		{ .addr = 0x8e308b, .byte = 0x22 },
		{ .addr = 0x8e308c, .byte = 0xae },
		{ .addr = 0x8e308d, .byte = 0x62 }
};

static const SST_RamByte rtr_final_ram_16[] = {
		{ .addr = 0x977dee, .byte = 0x4e },
		{ .addr = 0x977def, .byte = 0x77 },
		{ .addr = 0x977df0, .byte = 0xe5 },
		{ .addr = 0x977df1, .byte = 0xfd },
		{ .addr = 0xb71c7a, .byte = 0x19 },
		{ .addr = 0xb71c7b, .byte = 0x4a },
		{ .addr = 0xb71c7c, .byte = 0x99 },
		{ .addr = 0xb71c7d, .byte = 0xbe },
		{ .addr = 0xb71c7e, .byte = 0x93 },
		{ .addr = 0xb71c7f, .byte = 0xd9 },
		{ .addr = 0xe1f710, .byte = 0x7d },
		{ .addr = 0xe1f711, .byte = 0xf0 },
		{ .addr = 0xe1f70c, .byte = 0x01 },
		{ .addr = 0xe1f70d, .byte = 0x0a },
		{ .addr = 0xe1f70e, .byte = 0x00 },
		{ .addr = 0xe1f70f, .byte = 0x97 },
		{ .addr = 0xe1f70a, .byte = 0x4e },
		{ .addr = 0xe1f70b, .byte = 0x77 },
		{ .addr = 0xe1f708, .byte = 0x93 },
		{ .addr = 0xe1f709, .byte = 0xd9 },
		{ .addr = 0xe1f704, .byte = 0x4e },
		{ .addr = 0xe1f705, .byte = 0x72 },
		{ .addr = 0xe1f706, .byte = 0x99 },
		{ .addr = 0xe1f707, .byte = 0xbe },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x30 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x8e308a, .byte = 0xdb },
		{ .addr = 0x8e308b, .byte = 0x22 },
		{ .addr = 0x8e308c, .byte = 0xae },
		{ .addr = 0x8e308d, .byte = 0x62 }
};

static const SST_Transaction rtr_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12000378, .data = 6474, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12000380, .data = 39358, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12000382, .data = 37849, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12489688, .data = 24075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14808848, .data = 32240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14808844, .data = 266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14808846, .data = 151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14808842, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14808840, .data = 37849, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14808836, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14808838, .data = 39358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9318538, .data = 56098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9318540, .data = 44642, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_17[] = {
		{ .addr = 0x526044, .byte = 0x4e },
		{ .addr = 0x526045, .byte = 0x77 },
		{ .addr = 0x526046, .byte = 0x66 },
		{ .addr = 0x526047, .byte = 0x3a },
		{ .addr = 0xe2fca4, .byte = 0xac },
		{ .addr = 0xe2fca5, .byte = 0x16 },
		{ .addr = 0xe2fca6, .byte = 0xca },
		{ .addr = 0xe2fca7, .byte = 0xfb },
		{ .addr = 0xe2fca8, .byte = 0x6e },
		{ .addr = 0xe2fca9, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0x9a },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0xbb },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x8cbb44, .byte = 0x8d },
		{ .addr = 0x8cbb45, .byte = 0x36 },
		{ .addr = 0x8cbb46, .byte = 0x89 },
		{ .addr = 0x8cbb47, .byte = 0xbb }
};

static const SST_RamByte rtr_final_ram_17[] = {
		{ .addr = 0x526044, .byte = 0x4e },
		{ .addr = 0x526045, .byte = 0x77 },
		{ .addr = 0x526046, .byte = 0x66 },
		{ .addr = 0x526047, .byte = 0x3a },
		{ .addr = 0xe2fca4, .byte = 0xac },
		{ .addr = 0xe2fca5, .byte = 0x16 },
		{ .addr = 0xe2fca6, .byte = 0xca },
		{ .addr = 0xe2fca7, .byte = 0xfb },
		{ .addr = 0xe2fca8, .byte = 0x6e },
		{ .addr = 0xe2fca9, .byte = 0x97 },
		{ .addr = 0xbcae7a, .byte = 0x60 },
		{ .addr = 0xbcae7b, .byte = 0x46 },
		{ .addr = 0xbcae76, .byte = 0x83 },
		{ .addr = 0xbcae77, .byte = 0x16 },
		{ .addr = 0xbcae78, .byte = 0x00 },
		{ .addr = 0xbcae79, .byte = 0x52 },
		{ .addr = 0xbcae74, .byte = 0x4e },
		{ .addr = 0xbcae75, .byte = 0x77 },
		{ .addr = 0xbcae72, .byte = 0x6e },
		{ .addr = 0xbcae73, .byte = 0x97 },
		{ .addr = 0xbcae6e, .byte = 0x4e },
		{ .addr = 0xbcae6f, .byte = 0x72 },
		{ .addr = 0xbcae70, .byte = 0xca },
		{ .addr = 0xbcae71, .byte = 0xfb },
		{ .addr = 0x00000c, .byte = 0x9a },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0xbb },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x8cbb44, .byte = 0x8d },
		{ .addr = 0x8cbb45, .byte = 0x36 },
		{ .addr = 0x8cbb46, .byte = 0x89 },
		{ .addr = 0x8cbb47, .byte = 0xbb }
};

static const SST_Transaction rtr_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14875812, .data = 44054, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14875814, .data = 51963, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14875816, .data = 28311, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16477846, .data = 58715, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12365434, .data = 24646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12365430, .data = 33558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12365432, .data = 82, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12365428, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12365426, .data = 28311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12365422, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12365424, .data = 51963, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 47940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9222980, .data = 36150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9222982, .data = 35259, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_18[] = {
		{ .addr = 0xf3a4ae, .byte = 0x4e },
		{ .addr = 0xf3a4af, .byte = 0x77 },
		{ .addr = 0xf3a4b0, .byte = 0xf9 },
		{ .addr = 0xf3a4b1, .byte = 0xd0 },
		{ .addr = 0x473c06, .byte = 0x3e },
		{ .addr = 0x473c07, .byte = 0xe3 },
		{ .addr = 0x473c08, .byte = 0x1e },
		{ .addr = 0x473c09, .byte = 0x57 },
		{ .addr = 0x473c0a, .byte = 0xa5 },
		{ .addr = 0x473c0b, .byte = 0x3e },
		{ .addr = 0x57a53e, .byte = 0x61 },
		{ .addr = 0x57a53f, .byte = 0x3f },
		{ .addr = 0x57a540, .byte = 0xb7 },
		{ .addr = 0x57a541, .byte = 0x9c }
};

static const SST_RamByte rtr_final_ram_18[] = {
		{ .addr = 0xf3a4ae, .byte = 0x4e },
		{ .addr = 0xf3a4af, .byte = 0x77 },
		{ .addr = 0xf3a4b0, .byte = 0xf9 },
		{ .addr = 0xf3a4b1, .byte = 0xd0 },
		{ .addr = 0x473c06, .byte = 0x3e },
		{ .addr = 0x473c07, .byte = 0xe3 },
		{ .addr = 0x473c08, .byte = 0x1e },
		{ .addr = 0x473c09, .byte = 0x57 },
		{ .addr = 0x473c0a, .byte = 0xa5 },
		{ .addr = 0x473c0b, .byte = 0x3e },
		{ .addr = 0x57a53e, .byte = 0x61 },
		{ .addr = 0x57a53f, .byte = 0x3f },
		{ .addr = 0x57a540, .byte = 0xb7 },
		{ .addr = 0x57a541, .byte = 0x9c }
};

static const SST_Transaction rtr_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4668422, .data = 16099, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4668424, .data = 7767, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4668426, .data = 42302, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5743934, .data = 24895, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5743936, .data = 47004, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_19[] = {
		{ .addr = 0xcab2e0, .byte = 0x4e },
		{ .addr = 0xcab2e1, .byte = 0x77 },
		{ .addr = 0xcab2e2, .byte = 0xc8 },
		{ .addr = 0xcab2e3, .byte = 0x3f },
		{ .addr = 0x49669e, .byte = 0x80 },
		{ .addr = 0x49669f, .byte = 0x21 },
		{ .addr = 0x4966a0, .byte = 0x30 },
		{ .addr = 0x4966a1, .byte = 0x32 },
		{ .addr = 0x4966a2, .byte = 0xa5 },
		{ .addr = 0x4966a3, .byte = 0x8c },
		{ .addr = 0x32a58c, .byte = 0xa7 },
		{ .addr = 0x32a58d, .byte = 0x7b },
		{ .addr = 0x32a58e, .byte = 0x3c },
		{ .addr = 0x32a58f, .byte = 0x3f }
};

static const SST_RamByte rtr_final_ram_19[] = {
		{ .addr = 0xcab2e0, .byte = 0x4e },
		{ .addr = 0xcab2e1, .byte = 0x77 },
		{ .addr = 0xcab2e2, .byte = 0xc8 },
		{ .addr = 0xcab2e3, .byte = 0x3f },
		{ .addr = 0x49669e, .byte = 0x80 },
		{ .addr = 0x49669f, .byte = 0x21 },
		{ .addr = 0x4966a0, .byte = 0x30 },
		{ .addr = 0x4966a1, .byte = 0x32 },
		{ .addr = 0x4966a2, .byte = 0xa5 },
		{ .addr = 0x4966a3, .byte = 0x8c },
		{ .addr = 0x32a58c, .byte = 0xa7 },
		{ .addr = 0x32a58d, .byte = 0x7b },
		{ .addr = 0x32a58e, .byte = 0x3c },
		{ .addr = 0x32a58f, .byte = 0x3f }
};

static const SST_Transaction rtr_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4810398, .data = 32801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4810400, .data = 12338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4810402, .data = 42380, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3319180, .data = 42875, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3319182, .data = 15423, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_20[] = {
		{ .addr = 0x57afda, .byte = 0x4e },
		{ .addr = 0x57afdb, .byte = 0x77 },
		{ .addr = 0x57afdc, .byte = 0x7d },
		{ .addr = 0x57afdd, .byte = 0xf5 },
		{ .addr = 0xa4ab14, .byte = 0x07 },
		{ .addr = 0xa4ab15, .byte = 0xc7 },
		{ .addr = 0xa4ab16, .byte = 0x91 },
		{ .addr = 0xa4ab17, .byte = 0x5d },
		{ .addr = 0xa4ab18, .byte = 0x06 },
		{ .addr = 0xa4ab19, .byte = 0xf9 },
		{ .addr = 0x00000c, .byte = 0x1e },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0xfa19c8, .byte = 0x30 },
		{ .addr = 0xfa19c9, .byte = 0x57 },
		{ .addr = 0xfa19ca, .byte = 0x95 },
		{ .addr = 0xfa19cb, .byte = 0x5a }
};

static const SST_RamByte rtr_final_ram_20[] = {
		{ .addr = 0x57afda, .byte = 0x4e },
		{ .addr = 0x57afdb, .byte = 0x77 },
		{ .addr = 0x57afdc, .byte = 0x7d },
		{ .addr = 0x57afdd, .byte = 0xf5 },
		{ .addr = 0xa4ab14, .byte = 0x07 },
		{ .addr = 0xa4ab15, .byte = 0xc7 },
		{ .addr = 0xa4ab16, .byte = 0x91 },
		{ .addr = 0xa4ab17, .byte = 0x5d },
		{ .addr = 0xa4ab18, .byte = 0x06 },
		{ .addr = 0xa4ab19, .byte = 0xf9 },
		{ .addr = 0x0a70f4, .byte = 0xaf },
		{ .addr = 0x0a70f5, .byte = 0xdc },
		{ .addr = 0x0a70f0, .byte = 0x00 },
		{ .addr = 0x0a70f1, .byte = 0x07 },
		{ .addr = 0x0a70f2, .byte = 0x00 },
		{ .addr = 0x0a70f3, .byte = 0x57 },
		{ .addr = 0x0a70ee, .byte = 0x4e },
		{ .addr = 0x0a70ef, .byte = 0x77 },
		{ .addr = 0x0a70ec, .byte = 0x06 },
		{ .addr = 0x0a70ed, .byte = 0xf9 },
		{ .addr = 0x0a70e8, .byte = 0x4e },
		{ .addr = 0x0a70e9, .byte = 0x72 },
		{ .addr = 0x0a70ea, .byte = 0x91 },
		{ .addr = 0x0a70eb, .byte = 0x5d },
		{ .addr = 0x00000c, .byte = 0x1e },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0xfa19c8, .byte = 0x30 },
		{ .addr = 0xfa19c9, .byte = 0x57 },
		{ .addr = 0xfa19ca, .byte = 0x95 },
		{ .addr = 0xfa19cb, .byte = 0x5a }
};

static const SST_Transaction rtr_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10791700, .data = 1991, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10791702, .data = 37213, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10791704, .data = 1785, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6096632, .data = 40455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 684276, .data = 45020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 684272, .data = 7, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 684274, .data = 87, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 684270, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 684268, .data = 1785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 684264, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 684266, .data = 37213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16390600, .data = 12375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16390602, .data = 38234, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_21[] = {
		{ .addr = 0x0def76, .byte = 0x4e },
		{ .addr = 0x0def77, .byte = 0x77 },
		{ .addr = 0x0def78, .byte = 0x32 },
		{ .addr = 0x0def79, .byte = 0x04 },
		{ .addr = 0x1d8af0, .byte = 0x08 },
		{ .addr = 0x1d8af1, .byte = 0x03 },
		{ .addr = 0x1d8af2, .byte = 0xf6 },
		{ .addr = 0x1d8af3, .byte = 0xc7 },
		{ .addr = 0x1d8af4, .byte = 0x3e },
		{ .addr = 0x1d8af5, .byte = 0x15 },
		{ .addr = 0x00000c, .byte = 0x84 },
		{ .addr = 0x00000d, .byte = 0x5a },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x72 },
		{ .addr = 0x5abf72, .byte = 0x57 },
		{ .addr = 0x5abf73, .byte = 0x27 },
		{ .addr = 0x5abf74, .byte = 0x56 },
		{ .addr = 0x5abf75, .byte = 0xc7 }
};

static const SST_RamByte rtr_final_ram_21[] = {
		{ .addr = 0x0def76, .byte = 0x4e },
		{ .addr = 0x0def77, .byte = 0x77 },
		{ .addr = 0x0def78, .byte = 0x32 },
		{ .addr = 0x0def79, .byte = 0x04 },
		{ .addr = 0x1d8af0, .byte = 0xa3 },
		{ .addr = 0x1d8af1, .byte = 0x03 },
		{ .addr = 0x1d8af2, .byte = 0x00 },
		{ .addr = 0x1d8af3, .byte = 0x0d },
		{ .addr = 0x1d8af4, .byte = 0xef },
		{ .addr = 0x1d8af5, .byte = 0x78 },
		{ .addr = 0x1d8aee, .byte = 0x4e },
		{ .addr = 0x1d8aef, .byte = 0x77 },
		{ .addr = 0x1d8aec, .byte = 0x3e },
		{ .addr = 0x1d8aed, .byte = 0x15 },
		{ .addr = 0x1d8ae8, .byte = 0x4e },
		{ .addr = 0x1d8ae9, .byte = 0x76 },
		{ .addr = 0x1d8aea, .byte = 0xf6 },
		{ .addr = 0x1d8aeb, .byte = 0xc7 },
		{ .addr = 0x00000c, .byte = 0x84 },
		{ .addr = 0x00000d, .byte = 0x5a },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x72 },
		{ .addr = 0x5abf72, .byte = 0x57 },
		{ .addr = 0x5abf73, .byte = 0x27 },
		{ .addr = 0x5abf74, .byte = 0x56 },
		{ .addr = 0x5abf75, .byte = 0xc7 }
};

static const SST_Transaction rtr_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936112, .data = 2051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936114, .data = 63175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936116, .data = 15893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13057556, .data = 18382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936116, .data = 61304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936112, .data = 41731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936114, .data = 13, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936110, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936108, .data = 15893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936104, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1936106, .data = 63175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5947250, .data = 22311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5947252, .data = 22215, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_22[] = {
		{ .addr = 0xd5c040, .byte = 0x4e },
		{ .addr = 0xd5c041, .byte = 0x77 },
		{ .addr = 0xd5c042, .byte = 0xde },
		{ .addr = 0xd5c043, .byte = 0xc8 },
		{ .addr = 0x672680, .byte = 0x20 },
		{ .addr = 0x672681, .byte = 0x56 },
		{ .addr = 0x672682, .byte = 0xe0 },
		{ .addr = 0x672683, .byte = 0x7b },
		{ .addr = 0x672684, .byte = 0x0f },
		{ .addr = 0x672685, .byte = 0xc2 },
		{ .addr = 0x7b0fc2, .byte = 0x61 },
		{ .addr = 0x7b0fc3, .byte = 0xd4 },
		{ .addr = 0x7b0fc4, .byte = 0xc5 },
		{ .addr = 0x7b0fc5, .byte = 0x7a }
};

static const SST_RamByte rtr_final_ram_22[] = {
		{ .addr = 0xd5c040, .byte = 0x4e },
		{ .addr = 0xd5c041, .byte = 0x77 },
		{ .addr = 0xd5c042, .byte = 0xde },
		{ .addr = 0xd5c043, .byte = 0xc8 },
		{ .addr = 0x672680, .byte = 0x20 },
		{ .addr = 0x672681, .byte = 0x56 },
		{ .addr = 0x672682, .byte = 0xe0 },
		{ .addr = 0x672683, .byte = 0x7b },
		{ .addr = 0x672684, .byte = 0x0f },
		{ .addr = 0x672685, .byte = 0xc2 },
		{ .addr = 0x7b0fc2, .byte = 0x61 },
		{ .addr = 0x7b0fc3, .byte = 0xd4 },
		{ .addr = 0x7b0fc4, .byte = 0xc5 },
		{ .addr = 0x7b0fc5, .byte = 0x7a }
};

static const SST_Transaction rtr_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6760064, .data = 8278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6760066, .data = 57467, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6760068, .data = 4034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8064962, .data = 25044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8064964, .data = 50554, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_23[] = {
		{ .addr = 0xa067be, .byte = 0x4e },
		{ .addr = 0xa067bf, .byte = 0x77 },
		{ .addr = 0xa067c0, .byte = 0xf0 },
		{ .addr = 0xa067c1, .byte = 0x87 },
		{ .addr = 0xf53dd6, .byte = 0xbd },
		{ .addr = 0xf53dd7, .byte = 0x9a },
		{ .addr = 0xf53dd8, .byte = 0xa6 },
		{ .addr = 0xf53dd9, .byte = 0xf0 },
		{ .addr = 0xf53dda, .byte = 0xda },
		{ .addr = 0xf53ddb, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x8c },
		{ .addr = 0x00000f, .byte = 0x6a },
		{ .addr = 0xa08c6a, .byte = 0x14 },
		{ .addr = 0xa08c6b, .byte = 0xae },
		{ .addr = 0xa08c6c, .byte = 0x3e },
		{ .addr = 0xa08c6d, .byte = 0xb1 }
};

static const SST_RamByte rtr_final_ram_23[] = {
		{ .addr = 0xa067be, .byte = 0x4e },
		{ .addr = 0xa067bf, .byte = 0x77 },
		{ .addr = 0xa067c0, .byte = 0xf0 },
		{ .addr = 0xa067c1, .byte = 0x87 },
		{ .addr = 0xf53dd6, .byte = 0x23 },
		{ .addr = 0xf53dd7, .byte = 0x1a },
		{ .addr = 0xf53dd8, .byte = 0x00 },
		{ .addr = 0xf53dd9, .byte = 0xa0 },
		{ .addr = 0xf53dda, .byte = 0x67 },
		{ .addr = 0xf53ddb, .byte = 0xc0 },
		{ .addr = 0xf53dd4, .byte = 0x4e },
		{ .addr = 0xf53dd5, .byte = 0x77 },
		{ .addr = 0xf53dd2, .byte = 0xda },
		{ .addr = 0xf53dd3, .byte = 0x9d },
		{ .addr = 0xf53dce, .byte = 0x4e },
		{ .addr = 0xf53dcf, .byte = 0x76 },
		{ .addr = 0xf53dd0, .byte = 0xa6 },
		{ .addr = 0xf53dd1, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x8c },
		{ .addr = 0x00000f, .byte = 0x6a },
		{ .addr = 0xa08c6a, .byte = 0x14 },
		{ .addr = 0xa08c6b, .byte = 0xae },
		{ .addr = 0xa08c6c, .byte = 0x3e },
		{ .addr = 0xa08c6d, .byte = 0xb1 }
};

static const SST_Transaction rtr_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072150, .data = 48538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072152, .data = 42736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072154, .data = 55965, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15784604, .data = 41127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072154, .data = 26560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072150, .data = 8986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072152, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072148, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072146, .data = 55965, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072142, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072144, .data = 42736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 35946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10521706, .data = 5294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10521708, .data = 16049, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_24[] = {
		{ .addr = 0x8cfa14, .byte = 0x4e },
		{ .addr = 0x8cfa15, .byte = 0x77 },
		{ .addr = 0x8cfa16, .byte = 0x8d },
		{ .addr = 0x8cfa17, .byte = 0x45 },
		{ .addr = 0x3f1ece, .byte = 0xc9 },
		{ .addr = 0x3f1ecf, .byte = 0x80 },
		{ .addr = 0x3f1ed0, .byte = 0x66 },
		{ .addr = 0x3f1ed1, .byte = 0x28 },
		{ .addr = 0x3f1ed2, .byte = 0x08 },
		{ .addr = 0x3f1ed3, .byte = 0x7a },
		{ .addr = 0x28087a, .byte = 0xfc },
		{ .addr = 0x28087b, .byte = 0x35 },
		{ .addr = 0x28087c, .byte = 0x86 },
		{ .addr = 0x28087d, .byte = 0xd5 }
};

static const SST_RamByte rtr_final_ram_24[] = {
		{ .addr = 0x8cfa14, .byte = 0x4e },
		{ .addr = 0x8cfa15, .byte = 0x77 },
		{ .addr = 0x8cfa16, .byte = 0x8d },
		{ .addr = 0x8cfa17, .byte = 0x45 },
		{ .addr = 0x3f1ece, .byte = 0xc9 },
		{ .addr = 0x3f1ecf, .byte = 0x80 },
		{ .addr = 0x3f1ed0, .byte = 0x66 },
		{ .addr = 0x3f1ed1, .byte = 0x28 },
		{ .addr = 0x3f1ed2, .byte = 0x08 },
		{ .addr = 0x3f1ed3, .byte = 0x7a },
		{ .addr = 0x28087a, .byte = 0xfc },
		{ .addr = 0x28087b, .byte = 0x35 },
		{ .addr = 0x28087c, .byte = 0x86 },
		{ .addr = 0x28087d, .byte = 0xd5 }
};

static const SST_Transaction rtr_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4136654, .data = 51584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4136656, .data = 26152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4136658, .data = 2170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2623610, .data = 64565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2623612, .data = 34517, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_25[] = {
		{ .addr = 0x8d7f0a, .byte = 0x4e },
		{ .addr = 0x8d7f0b, .byte = 0x77 },
		{ .addr = 0x8d7f0c, .byte = 0x0b },
		{ .addr = 0x8d7f0d, .byte = 0x1d },
		{ .addr = 0xcc6346, .byte = 0xae },
		{ .addr = 0xcc6347, .byte = 0x43 },
		{ .addr = 0xcc6348, .byte = 0xd3 },
		{ .addr = 0xcc6349, .byte = 0x53 },
		{ .addr = 0xcc634a, .byte = 0xd0 },
		{ .addr = 0xcc634b, .byte = 0xaf },
		{ .addr = 0x00000c, .byte = 0xc9 },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0xd1 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xb0d1ac, .byte = 0xeb },
		{ .addr = 0xb0d1ad, .byte = 0x00 },
		{ .addr = 0xb0d1ae, .byte = 0xb1 },
		{ .addr = 0xb0d1af, .byte = 0xed }
};

static const SST_RamByte rtr_final_ram_25[] = {
		{ .addr = 0x8d7f0a, .byte = 0x4e },
		{ .addr = 0x8d7f0b, .byte = 0x77 },
		{ .addr = 0x8d7f0c, .byte = 0x0b },
		{ .addr = 0x8d7f0d, .byte = 0x1d },
		{ .addr = 0xcc6346, .byte = 0xae },
		{ .addr = 0xcc6347, .byte = 0x43 },
		{ .addr = 0xcc6348, .byte = 0xd3 },
		{ .addr = 0xcc6349, .byte = 0x53 },
		{ .addr = 0xcc634a, .byte = 0xd0 },
		{ .addr = 0xcc634b, .byte = 0xaf },
		{ .addr = 0xdf9cc6, .byte = 0x7f },
		{ .addr = 0xdf9cc7, .byte = 0x0c },
		{ .addr = 0xdf9cc2, .byte = 0x01 },
		{ .addr = 0xdf9cc3, .byte = 0x03 },
		{ .addr = 0xdf9cc4, .byte = 0x00 },
		{ .addr = 0xdf9cc5, .byte = 0x8d },
		{ .addr = 0xdf9cc0, .byte = 0x4e },
		{ .addr = 0xdf9cc1, .byte = 0x77 },
		{ .addr = 0xdf9cbe, .byte = 0xd0 },
		{ .addr = 0xdf9cbf, .byte = 0xaf },
		{ .addr = 0xdf9cba, .byte = 0x4e },
		{ .addr = 0xdf9cbb, .byte = 0x72 },
		{ .addr = 0xdf9cbc, .byte = 0xd3 },
		{ .addr = 0xdf9cbd, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0xc9 },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0xd1 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xb0d1ac, .byte = 0xeb },
		{ .addr = 0xb0d1ad, .byte = 0x00 },
		{ .addr = 0xb0d1ae, .byte = 0xb1 },
		{ .addr = 0xb0d1af, .byte = 0xed }
};

static const SST_Transaction rtr_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13394758, .data = 44611, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13394760, .data = 54099, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13394762, .data = 53423, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5492910, .data = 14299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14654662, .data = 32524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14654658, .data = 259, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14654660, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14654656, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14654654, .data = 53423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14654650, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14654652, .data = 54099, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 53676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11588012, .data = 60160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11588014, .data = 45549, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_26[] = {
		{ .addr = 0xd6fed8, .byte = 0x4e },
		{ .addr = 0xd6fed9, .byte = 0x77 },
		{ .addr = 0xd6feda, .byte = 0xcc },
		{ .addr = 0xd6fedb, .byte = 0xe9 },
		{ .addr = 0x96780c, .byte = 0xe0 },
		{ .addr = 0x96780d, .byte = 0xef },
		{ .addr = 0x96780e, .byte = 0x81 },
		{ .addr = 0x96780f, .byte = 0x2e },
		{ .addr = 0x967810, .byte = 0xd2 },
		{ .addr = 0x967811, .byte = 0x10 },
		{ .addr = 0x2ed210, .byte = 0xd8 },
		{ .addr = 0x2ed211, .byte = 0xeb },
		{ .addr = 0x2ed212, .byte = 0x2c },
		{ .addr = 0x2ed213, .byte = 0x50 }
};

static const SST_RamByte rtr_final_ram_26[] = {
		{ .addr = 0xd6fed8, .byte = 0x4e },
		{ .addr = 0xd6fed9, .byte = 0x77 },
		{ .addr = 0xd6feda, .byte = 0xcc },
		{ .addr = 0xd6fedb, .byte = 0xe9 },
		{ .addr = 0x96780c, .byte = 0xe0 },
		{ .addr = 0x96780d, .byte = 0xef },
		{ .addr = 0x96780e, .byte = 0x81 },
		{ .addr = 0x96780f, .byte = 0x2e },
		{ .addr = 0x967810, .byte = 0xd2 },
		{ .addr = 0x967811, .byte = 0x10 },
		{ .addr = 0x2ed210, .byte = 0xd8 },
		{ .addr = 0x2ed211, .byte = 0xeb },
		{ .addr = 0x2ed212, .byte = 0x2c },
		{ .addr = 0x2ed213, .byte = 0x50 }
};

static const SST_Transaction rtr_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9861132, .data = 57583, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9861134, .data = 33070, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9861136, .data = 53776, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3068432, .data = 55531, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3068434, .data = 11344, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_27[] = {
		{ .addr = 0x13e9a8, .byte = 0x4e },
		{ .addr = 0x13e9a9, .byte = 0x77 },
		{ .addr = 0x13e9aa, .byte = 0x3b },
		{ .addr = 0x13e9ab, .byte = 0x3c },
		{ .addr = 0x1184e8, .byte = 0x6a },
		{ .addr = 0x1184e9, .byte = 0xa0 },
		{ .addr = 0x1184ea, .byte = 0x31 },
		{ .addr = 0x1184eb, .byte = 0x23 },
		{ .addr = 0x1184ec, .byte = 0x13 },
		{ .addr = 0x1184ed, .byte = 0x92 },
		{ .addr = 0x231392, .byte = 0xba },
		{ .addr = 0x231393, .byte = 0x1d },
		{ .addr = 0x231394, .byte = 0x50 },
		{ .addr = 0x231395, .byte = 0x3e }
};

static const SST_RamByte rtr_final_ram_27[] = {
		{ .addr = 0x13e9a8, .byte = 0x4e },
		{ .addr = 0x13e9a9, .byte = 0x77 },
		{ .addr = 0x13e9aa, .byte = 0x3b },
		{ .addr = 0x13e9ab, .byte = 0x3c },
		{ .addr = 0x1184e8, .byte = 0x6a },
		{ .addr = 0x1184e9, .byte = 0xa0 },
		{ .addr = 0x1184ea, .byte = 0x31 },
		{ .addr = 0x1184eb, .byte = 0x23 },
		{ .addr = 0x1184ec, .byte = 0x13 },
		{ .addr = 0x1184ed, .byte = 0x92 },
		{ .addr = 0x231392, .byte = 0xba },
		{ .addr = 0x231393, .byte = 0x1d },
		{ .addr = 0x231394, .byte = 0x50 },
		{ .addr = 0x231395, .byte = 0x3e }
};

static const SST_Transaction rtr_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1148136, .data = 27296, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1148138, .data = 12579, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1148140, .data = 5010, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2298770, .data = 47645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2298772, .data = 20542, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_28[] = {
		{ .addr = 0xcf3096, .byte = 0x4e },
		{ .addr = 0xcf3097, .byte = 0x77 },
		{ .addr = 0xcf3098, .byte = 0x2c },
		{ .addr = 0xcf3099, .byte = 0xca },
		{ .addr = 0x41a478, .byte = 0xe2 },
		{ .addr = 0x41a479, .byte = 0x70 },
		{ .addr = 0x41a47a, .byte = 0x3b },
		{ .addr = 0x41a47b, .byte = 0x44 },
		{ .addr = 0x41a47c, .byte = 0xb1 },
		{ .addr = 0x41a47d, .byte = 0x98 },
		{ .addr = 0x44b198, .byte = 0x20 },
		{ .addr = 0x44b199, .byte = 0x1f },
		{ .addr = 0x44b19a, .byte = 0x7e },
		{ .addr = 0x44b19b, .byte = 0xac }
};

static const SST_RamByte rtr_final_ram_28[] = {
		{ .addr = 0xcf3096, .byte = 0x4e },
		{ .addr = 0xcf3097, .byte = 0x77 },
		{ .addr = 0xcf3098, .byte = 0x2c },
		{ .addr = 0xcf3099, .byte = 0xca },
		{ .addr = 0x41a478, .byte = 0xe2 },
		{ .addr = 0x41a479, .byte = 0x70 },
		{ .addr = 0x41a47a, .byte = 0x3b },
		{ .addr = 0x41a47b, .byte = 0x44 },
		{ .addr = 0x41a47c, .byte = 0xb1 },
		{ .addr = 0x41a47d, .byte = 0x98 },
		{ .addr = 0x44b198, .byte = 0x20 },
		{ .addr = 0x44b199, .byte = 0x1f },
		{ .addr = 0x44b19a, .byte = 0x7e },
		{ .addr = 0x44b19b, .byte = 0xac }
};

static const SST_Transaction rtr_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4301944, .data = 57968, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4301946, .data = 15172, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4301948, .data = 45464, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4501912, .data = 8223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4501914, .data = 32428, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_29[] = {
		{ .addr = 0x15e270, .byte = 0x4e },
		{ .addr = 0x15e271, .byte = 0x77 },
		{ .addr = 0x15e272, .byte = 0xbe },
		{ .addr = 0x15e273, .byte = 0x1a },
		{ .addr = 0x613254, .byte = 0x25 },
		{ .addr = 0x613255, .byte = 0x1b },
		{ .addr = 0x613256, .byte = 0xa7 },
		{ .addr = 0x613257, .byte = 0x5e },
		{ .addr = 0x613258, .byte = 0x3a },
		{ .addr = 0x613259, .byte = 0x0a },
		{ .addr = 0x5e3a0a, .byte = 0x41 },
		{ .addr = 0x5e3a0b, .byte = 0xed },
		{ .addr = 0x5e3a0c, .byte = 0x12 },
		{ .addr = 0x5e3a0d, .byte = 0xc5 }
};

static const SST_RamByte rtr_final_ram_29[] = {
		{ .addr = 0x15e270, .byte = 0x4e },
		{ .addr = 0x15e271, .byte = 0x77 },
		{ .addr = 0x15e272, .byte = 0xbe },
		{ .addr = 0x15e273, .byte = 0x1a },
		{ .addr = 0x613254, .byte = 0x25 },
		{ .addr = 0x613255, .byte = 0x1b },
		{ .addr = 0x613256, .byte = 0xa7 },
		{ .addr = 0x613257, .byte = 0x5e },
		{ .addr = 0x613258, .byte = 0x3a },
		{ .addr = 0x613259, .byte = 0x0a },
		{ .addr = 0x5e3a0a, .byte = 0x41 },
		{ .addr = 0x5e3a0b, .byte = 0xed },
		{ .addr = 0x5e3a0c, .byte = 0x12 },
		{ .addr = 0x5e3a0d, .byte = 0xc5 }
};

static const SST_Transaction rtr_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6369876, .data = 9499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6369878, .data = 42846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6369880, .data = 14858, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6175242, .data = 16877, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6175244, .data = 4805, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_30[] = {
		{ .addr = 0x4be1a4, .byte = 0x4e },
		{ .addr = 0x4be1a5, .byte = 0x77 },
		{ .addr = 0x4be1a6, .byte = 0x7f },
		{ .addr = 0x4be1a7, .byte = 0x37 },
		{ .addr = 0xf4badc, .byte = 0x57 },
		{ .addr = 0xf4badd, .byte = 0x85 },
		{ .addr = 0xf4bade, .byte = 0xc9 },
		{ .addr = 0xf4badf, .byte = 0x7e },
		{ .addr = 0xf4bae0, .byte = 0xb7 },
		{ .addr = 0xf4bae1, .byte = 0x2b },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x24e398, .byte = 0xeb },
		{ .addr = 0x24e399, .byte = 0x51 },
		{ .addr = 0x24e39a, .byte = 0x74 },
		{ .addr = 0x24e39b, .byte = 0xd9 }
};

static const SST_RamByte rtr_final_ram_30[] = {
		{ .addr = 0x4be1a4, .byte = 0x4e },
		{ .addr = 0x4be1a5, .byte = 0x77 },
		{ .addr = 0x4be1a6, .byte = 0x7f },
		{ .addr = 0x4be1a7, .byte = 0x37 },
		{ .addr = 0xf4badc, .byte = 0x57 },
		{ .addr = 0xf4badd, .byte = 0x85 },
		{ .addr = 0xf4bade, .byte = 0xc9 },
		{ .addr = 0xf4badf, .byte = 0x7e },
		{ .addr = 0xf4bae0, .byte = 0xb7 },
		{ .addr = 0xf4bae1, .byte = 0x2b },
		{ .addr = 0xc6c3b6, .byte = 0xe1 },
		{ .addr = 0xc6c3b7, .byte = 0xa6 },
		{ .addr = 0xc6c3b2, .byte = 0x83 },
		{ .addr = 0xc6c3b3, .byte = 0x05 },
		{ .addr = 0xc6c3b4, .byte = 0x00 },
		{ .addr = 0xc6c3b5, .byte = 0x4b },
		{ .addr = 0xc6c3b0, .byte = 0x4e },
		{ .addr = 0xc6c3b1, .byte = 0x77 },
		{ .addr = 0xc6c3ae, .byte = 0xb7 },
		{ .addr = 0xc6c3af, .byte = 0x2b },
		{ .addr = 0xc6c3aa, .byte = 0x4e },
		{ .addr = 0xc6c3ab, .byte = 0x72 },
		{ .addr = 0xc6c3ac, .byte = 0xc9 },
		{ .addr = 0xc6c3ad, .byte = 0x7e },
		{ .addr = 0x00000c, .byte = 0x0b },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x24e398, .byte = 0xeb },
		{ .addr = 0x24e399, .byte = 0x51 },
		{ .addr = 0x24e39a, .byte = 0x74 },
		{ .addr = 0x24e39b, .byte = 0xd9 }
};

static const SST_Transaction rtr_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16038620, .data = 22405, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16038622, .data = 51582, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16038624, .data = 46891, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8304426, .data = 28442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13026230, .data = 57766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13026226, .data = 33541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13026228, .data = 75, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13026224, .data = 20087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13026222, .data = 46891, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13026218, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13026220, .data = 51582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2417560, .data = 60241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2417562, .data = 29913, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rtr_initial_ram_31[] = {
		{ .addr = 0x673ea4, .byte = 0x4e },
		{ .addr = 0x673ea5, .byte = 0x77 },
		{ .addr = 0x673ea6, .byte = 0x30 },
		{ .addr = 0x673ea7, .byte = 0x3c },
		{ .addr = 0x27895a, .byte = 0xe4 },
		{ .addr = 0x27895b, .byte = 0xc8 },
		{ .addr = 0x27895c, .byte = 0x6a },
		{ .addr = 0x27895d, .byte = 0xb3 },
		{ .addr = 0x27895e, .byte = 0xb1 },
		{ .addr = 0x27895f, .byte = 0x1a },
		{ .addr = 0xb3b11a, .byte = 0x3f },
		{ .addr = 0xb3b11b, .byte = 0xb7 },
		{ .addr = 0xb3b11c, .byte = 0xa5 },
		{ .addr = 0xb3b11d, .byte = 0x81 }
};

static const SST_RamByte rtr_final_ram_31[] = {
		{ .addr = 0x673ea4, .byte = 0x4e },
		{ .addr = 0x673ea5, .byte = 0x77 },
		{ .addr = 0x673ea6, .byte = 0x30 },
		{ .addr = 0x673ea7, .byte = 0x3c },
		{ .addr = 0x27895a, .byte = 0xe4 },
		{ .addr = 0x27895b, .byte = 0xc8 },
		{ .addr = 0x27895c, .byte = 0x6a },
		{ .addr = 0x27895d, .byte = 0xb3 },
		{ .addr = 0x27895e, .byte = 0xb1 },
		{ .addr = 0x27895f, .byte = 0x1a },
		{ .addr = 0xb3b11a, .byte = 0x3f },
		{ .addr = 0xb3b11b, .byte = 0xb7 },
		{ .addr = 0xb3b11c, .byte = 0xa5 },
		{ .addr = 0xb3b11d, .byte = 0x81 }
};

static const SST_Transaction rtr_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2591066, .data = 58568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2591068, .data = 27315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2591070, .data = 45338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11776282, .data = 16311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11776284, .data = 42369, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase rtr[] = {
	{
		.name = "000 RTR 4e77",
		.initial = {
			.regs = {
				887876628, 1649616181, 754186551, 1707996084, 3973797659, 2884949253, 3514544028, 4187563914, 1766300949, 3299178609, 1105265473, 4189530864, 603131126, 273063191, 577203404, 10700098, 16670482, 8469, 8390996
			},
			.prefetch0 = 20087,
			.prefetch1 = 33332,
			.ram = rtr_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				887876628, 1649616181, 754186551, 1707996084, 3973797659, 2884949253, 3514544028, 4187563914, 1766300949, 3299178609, 1105265473, 4189530864, 603131126, 273063191, 577203404, 10700098, 16670488, 8475, 918791374
			},
			.prefetch0 = 57189,
			.prefetch1 = 23101,
			.ram = rtr_final_ram_0,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_0,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "001 RTR 4e77",
		.initial = {
			.regs = {
				4292106367, 1328533069, 3032644749, 2013183054, 1507196670, 767130526, 741945113, 987599248, 3103501280, 3578524942, 780609207, 2213082880, 370283739, 389235711, 2201901637, 2356848, 3437650, 24, 10796982
			},
			.prefetch0 = 20087,
			.prefetch1 = 46107,
			.ram = rtr_initial_ram_1,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				4292106367, 1328533069, 3032644749, 2013183054, 1507196670, 767130526, 741945113, 987599248, 3103501280, 3578524942, 780609207, 2213082880, 370283739, 389235711, 2201901637, 2356854, 3437636, 8212, 3112093392
			},
			.prefetch0 = 59403,
			.prefetch1 = 37650,
			.ram = rtr_final_ram_1,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_1,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "002 RTR 4e77",
		.initial = {
			.regs = {
				2912182716, 549052026, 3729775386, 278218965, 1181870957, 2765393412, 453131844, 185236869, 535440092, 199962306, 2023425680, 1478930810, 2742659133, 3749155475, 996854464, 5370662, 8271906, 33042, 16041354
			},
			.prefetch0 = 20087,
			.prefetch1 = 55778,
			.ram = rtr_initial_ram_2,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				2912182716, 549052026, 3729775386, 278218965, 1181870957, 2765393412, 453131844, 185236869, 535440092, 199962306, 2023425680, 1478930810, 2742659133, 3749155475, 996854464, 5370668, 8271892, 8479, 3076302852
			},
			.prefetch0 = 384,
			.prefetch1 = 11955,
			.ram = rtr_final_ram_2,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_2,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "003 RTR 4e77",
		.initial = {
			.regs = {
				1638638196, 2735413506, 4027773700, 1571233048, 762960462, 2913480730, 3410665847, 109663815, 68780409, 1821592754, 4204461266, 2257882370, 865990784, 3779529689, 3342858368, 5729730, 7081878, 33026, 11605446
			},
			.prefetch0 = 20087,
			.prefetch1 = 45374,
			.ram = rtr_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1638638196, 2735413506, 4027773700, 1571233048, 762960462, 2913480730, 3410665847, 109663815, 68780409, 1821592754, 4204461266, 2257882370, 865990784, 3779529689, 3342858368, 5729736, 7081878, 33040, 687623786
			},
			.prefetch0 = 25638,
			.prefetch1 = 11452,
			.ram = rtr_final_ram_3,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_3,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "004 RTR 4e77",
		.initial = {
			.regs = {
				681865491, 3104075223, 2731458675, 4099737004, 1231585223, 4051569142, 3827454014, 3757081191, 3967218, 3369726033, 481358982, 78580140, 395914852, 2893477412, 2884891251, 14072924, 14401282, 42270, 9244904
			},
			.prefetch0 = 20087,
			.prefetch1 = 2599,
			.ram = rtr_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				681865491, 3104075223, 2731458675, 4099737004, 1231585223, 4051569142, 3827454014, 3757081191, 3967218, 3369726033, 481358982, 78580140, 395914852, 2893477412, 2884891251, 14072924, 14401288, 42260, 1635326190
			},
			.prefetch0 = 42325,
			.prefetch1 = 30979,
			.ram = rtr_final_ram_4,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_4,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "005 RTR 4e77",
		.initial = {
			.regs = {
				722174453, 4101733743, 2553401135, 3827145693, 1338579140, 3325585609, 546582936, 3934033096, 3102247998, 989364934, 3344626808, 1543711025, 4249692231, 2066149978, 3551422733, 1638528, 15374716, 42765, 2915722
			},
			.prefetch0 = 20087,
			.prefetch1 = 1570,
			.ram = rtr_initial_ram_5,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				722174453, 4101733743, 2553401135, 3827145693, 1338579140, 3325585609, 546582936, 3934033096, 3102247998, 989364934, 3344626808, 1543711025, 4249692231, 2066149978, 3551422733, 1638528, 15374708, 9998, 3295051786
			},
			.prefetch0 = 29921,
			.prefetch1 = 42471,
			.ram = rtr_final_ram_5,
			.ram_len = 26,
		},
		.transactions = rtr_transactions_5,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "006 RTR 4e77",
		.initial = {
			.regs = {
				568738195, 283095905, 3782055923, 2993571242, 2759918118, 2493438058, 2438024128, 1060155972, 2146997722, 2311803523, 4148633641, 2851914110, 3369962488, 2346469899, 1189742840, 5168106, 10633926, 41757, 6043626
			},
			.prefetch0 = 20087,
			.prefetch1 = 57392,
			.ram = rtr_initial_ram_6,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				568738195, 283095905, 3782055923, 2993571242, 2759918118, 2493438058, 2438024128, 1060155972, 2146997722, 2311803523, 4148633641, 2851914110, 3369962488, 2346469899, 1189742840, 5168106, 10633918, 8984, 1118056278
			},
			.prefetch0 = 17466,
			.prefetch1 = 59370,
			.ram = rtr_final_ram_6,
			.ram_len = 26,
		},
		.transactions = rtr_transactions_6,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "007 RTR 4e77",
		.initial = {
			.regs = {
				1850267311, 505037684, 1802969615, 3607610361, 913851263, 3621463141, 472173131, 1337224700, 2963610740, 702643440, 3746646531, 3511969989, 3424921338, 79804128, 1853021785, 12478414, 15064052, 40983, 6240214
			},
			.prefetch0 = 20087,
			.prefetch1 = 38086,
			.ram = rtr_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1850267311, 505037684, 1802969615, 3607610361, 913851263, 3621463141, 472173131, 1337224700, 2963610740, 702643440, 3746646531, 3511969989, 3424921338, 79804128, 1853021785, 12478414, 15064058, 40974, 1090685892
			},
			.prefetch0 = 28879,
			.prefetch1 = 61354,
			.ram = rtr_final_ram_7,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_7,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "008 RTR 4e77",
		.initial = {
			.regs = {
				3830786693, 2786551899, 2921194822, 3851545684, 3713375452, 2178233308, 2416833894, 3612329301, 2152369372, 3078370111, 2870153360, 1757905267, 2527794646, 2021868994, 1872036884, 10907346, 1311786, 8720, 322726
			},
			.prefetch0 = 20087,
			.prefetch1 = 47489,
			.ram = rtr_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3830786693, 2786551899, 2921194822, 3851545684, 3713375452, 2178233308, 2416833894, 3612329301, 2152369372, 3078370111, 2870153360, 1757905267, 2527794646, 2021868994, 1872036884, 10907346, 1311792, 8718, 3280517602
			},
			.prefetch0 = 16750,
			.prefetch1 = 10873,
			.ram = rtr_final_ram_8,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_8,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "009 RTR 4e77",
		.initial = {
			.regs = {
				898912757, 970074468, 473444199, 171103291, 1050089689, 3168733652, 127863620, 662684853, 1200354158, 1917045648, 316315597, 465943166, 3062786087, 4046363373, 1193778855, 7998794, 10401116, 33794, 6809572
			},
			.prefetch0 = 20087,
			.prefetch1 = 55838,
			.ram = rtr_initial_ram_9,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				898912757, 970074468, 473444199, 171103291, 1050089689, 3168733652, 127863620, 662684853, 1200354158, 1917045648, 316315597, 465943166, 3062786087, 4046363373, 1193778855, 7998800, 10401102, 9223, 2548476378
			},
			.prefetch0 = 38799,
			.prefetch1 = 34184,
			.ram = rtr_final_ram_9,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_9,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "010 RTR 4e77",
		.initial = {
			.regs = {
				4033648294, 2118719962, 2550191327, 2824591983, 1779495279, 4219434123, 3000701935, 2348064546, 1262301320, 237094525, 3174107475, 1714251782, 2518994538, 2989186961, 944533269, 16154850, 914700, 777, 15702048
			},
			.prefetch0 = 20087,
			.prefetch1 = 60694,
			.ram = rtr_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4033648294, 2118719962, 2550191327, 2824591983, 1779495279, 4219434123, 3000701935, 2348064546, 1262301320, 237094525, 3174107475, 1714251782, 2518994538, 2989186961, 944533269, 16154856, 914700, 792, 2136474590
			},
			.prefetch0 = 5033,
			.prefetch1 = 46750,
			.ram = rtr_final_ram_10,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_10,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "011 RTR 4e77",
		.initial = {
			.regs = {
				4208851970, 920267582, 4091118332, 3151125575, 3696906176, 2844207395, 2311856530, 1316444417, 1714638498, 414878092, 3712659670, 4059749990, 400608169, 27358084, 928386981, 9809834, 6066342, 34073, 15367258
			},
			.prefetch0 = 20087,
			.prefetch1 = 28087,
			.ram = rtr_initial_ram_11,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				4208851970, 920267582, 4091118332, 3151125575, 3696906176, 2844207395, 2311856530, 1316444417, 1714638498, 414878092, 3712659670, 4059749990, 400608169, 27358084, 928386981, 9809840, 6066328, 9480, 2752428388
			},
			.prefetch0 = 7010,
			.prefetch1 = 32770,
			.ram = rtr_final_ram_11,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_11,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "012 RTR 4e77",
		.initial = {
			.regs = {
				2763154803, 3938081365, 2446692218, 3057261722, 20952407, 572362963, 1369220156, 2250724835, 3333872182, 405507048, 422162916, 3904609568, 324790739, 3075997475, 4109982706, 1575304, 4829728, 9753, 5688122
			},
			.prefetch0 = 20087,
			.prefetch1 = 3761,
			.ram = rtr_initial_ram_12,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				2763154803, 3938081365, 2446692218, 3057261722, 20952407, 572362963, 1369220156, 2250724835, 3333872182, 405507048, 422162916, 3904609568, 324790739, 3075997475, 4109982706, 1575304, 4829720, 9755, 1020840622
			},
			.prefetch0 = 29993,
			.prefetch1 = 39767,
			.ram = rtr_final_ram_12,
			.ram_len = 26,
		},
		.transactions = rtr_transactions_12,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "013 RTR 4e77",
		.initial = {
			.regs = {
				170716640, 4222793858, 582472765, 1635366402, 643494119, 731634136, 2537582861, 3953169748, 2610239915, 1556997378, 569554040, 1770895141, 1470900823, 337007834, 1100013571, 14511808, 2757238, 520, 919780
			},
			.prefetch0 = 20087,
			.prefetch1 = 1672,
			.ram = rtr_initial_ram_13,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				170716640, 4222793858, 582472765, 1635366402, 643494119, 731634136, 2537582861, 3953169748, 2610239915, 1556997378, 569554040, 1770895141, 1470900823, 337007834, 1100013571, 14511814, 2757224, 8705, 3611707282
			},
			.prefetch0 = 5334,
			.prefetch1 = 4900,
			.ram = rtr_final_ram_13,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_13,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "014 RTR 4e77",
		.initial = {
			.regs = {
				3805327539, 2234958669, 1062560894, 2524315623, 225377125, 1455124346, 607541149, 531168939, 676939652, 832102465, 3763441217, 3984304174, 4283067364, 3608840130, 1029647278, 15873810, 6391988, 33044, 11834142
			},
			.prefetch0 = 20087,
			.prefetch1 = 55048,
			.ram = rtr_initial_ram_14,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				3805327539, 2234958669, 1062560894, 2524315623, 225377125, 1455124346, 607541149, 531168939, 676939652, 832102465, 3763441217, 3984304174, 4283067364, 3608840130, 1029647278, 15873816, 6391974, 8467, 1298286172
			},
			.prefetch0 = 17967,
			.prefetch1 = 5319,
			.ram = rtr_final_ram_14,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_14,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "015 RTR 4e77",
		.initial = {
			.regs = {
				1891213887, 2647387341, 3451315233, 2601817585, 1367759592, 1307344893, 71667458, 2586132417, 681048262, 3884027580, 3445051936, 3937569803, 4153556578, 3510806535, 915949811, 13351390, 11863814, 1297, 16266018
			},
			.prefetch0 = 20087,
			.prefetch1 = 27058,
			.ram = rtr_initial_ram_15,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				1891213887, 2647387341, 3451315233, 2601817585, 1367759592, 1307344893, 71667458, 2586132417, 681048262, 3884027580, 3445051936, 3937569803, 4153556578, 3510806535, 915949811, 13351396, 11863800, 9495, 404489160
			},
			.prefetch0 = 4082,
			.prefetch1 = 9863,
			.ram = rtr_final_ram_15,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_15,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "016 RTR 4e77",
		.initial = {
			.regs = {
				1848966964, 1939034634, 249220874, 4186794529, 2237179422, 973398025, 1955180454, 2834144409, 2459918887, 2598029555, 4157263436, 2758036181, 2395688653, 2774320932, 4169602268, 12000378, 14808850, 281, 9928178
			},
			.prefetch0 = 20087,
			.prefetch1 = 58877,
			.ram = rtr_initial_ram_16,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				1848966964, 1939034634, 249220874, 4186794529, 2237179422, 973398025, 1955180454, 2834144409, 2459918887, 2598029555, 4157263436, 2758036181, 2395688653, 2774320932, 4169602268, 12000384, 14808836, 8458, 4253954190
			},
			.prefetch0 = 56098,
			.prefetch1 = 44642,
			.ram = rtr_final_ram_16,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_16,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "017 RTR 4e77",
		.initial = {
			.regs = {
				3945894599, 322627712, 614881094, 1276992095, 1516112833, 3102757990, 2032901533, 4216951813, 2247358120, 3265028707, 878651454, 3088417451, 2892861288, 1638562998, 4258572073, 14875812, 12365436, 33563, 5398600
			},
			.prefetch0 = 20087,
			.prefetch1 = 26170,
			.ram = rtr_initial_ram_17,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				3945894599, 322627712, 614881094, 1276992095, 1516112833, 3102757990, 2032901533, 4216951813, 2247358120, 3265028707, 878651454, 3088417451, 2892861288, 1638562998, 4258572073, 14875818, 12365422, 8982, 2592914248
			},
			.prefetch0 = 36150,
			.prefetch1 = 35259,
			.ram = rtr_final_ram_17,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_17,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "018 RTR 4e77",
		.initial = {
			.regs = {
				2878305259, 2670553608, 2649013552, 2917072269, 3892928288, 4008504137, 1015598204, 2455875550, 163264257, 2834237117, 411042251, 771612724, 1180551509, 730948319, 148727725, 4668422, 1915456, 513, 15967410
			},
			.prefetch0 = 20087,
			.prefetch1 = 63952,
			.ram = rtr_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2878305259, 2670553608, 2649013552, 2917072269, 3892928288, 4008504137, 1015598204, 2455875550, 163264257, 2834237117, 411042251, 771612724, 1180551509, 730948319, 148727725, 4668428, 1915456, 515, 509060418
			},
			.prefetch0 = 24895,
			.prefetch1 = 47004,
			.ram = rtr_final_ram_18,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_18,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "019 RTR 4e77",
		.initial = {
			.regs = {
				4058150041, 2670591157, 4040606321, 1574734809, 2095482478, 1131739645, 1038105028, 2969960177, 2405432005, 3077996579, 3826667559, 2420678149, 2766640678, 607799327, 571806894, 12222586, 4810398, 40972, 13284068
			},
			.prefetch0 = 20087,
			.prefetch1 = 51263,
			.ram = rtr_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4058150041, 2670591157, 4040606321, 1574734809, 2095482478, 1131739645, 1038105028, 2969960177, 2405432005, 3077996579, 3826667559, 2420678149, 2766640678, 607799327, 571806894, 12222586, 4810404, 40961, 808625552
			},
			.prefetch0 = 42875,
			.prefetch1 = 15423,
			.ram = rtr_final_ram_19,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_19,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "020 RTR 4e77",
		.initial = {
			.regs = {
				558692393, 2727813971, 2438266168, 883071610, 392370362, 29236465, 2836971823, 4151820424, 3753408351, 4276217778, 190695367, 2260087994, 3472823437, 2124609991, 2378213658, 10791700, 684278, 30, 5746654
			},
			.prefetch0 = 20087,
			.prefetch1 = 32245,
			.ram = rtr_initial_ram_20,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				558692393, 2727813971, 2438266168, 883071610, 392370362, 29236465, 2836971823, 4151820424, 3753408351, 4276217778, 190695367, 2260087994, 3472823437, 2124609991, 2378213658, 10791706, 684264, 8199, 519707084
			},
			.prefetch0 = 12375,
			.prefetch1 = 38234,
			.ram = rtr_final_ram_20,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_20,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "021 RTR 4e77",
		.initial = {
			.regs = {
				3990955327, 3421338204, 876788174, 3069245018, 4093465639, 852004221, 386946356, 221785922, 1541731350, 725891680, 1996506359, 689591069, 1150227292, 1711492813, 502782800, 4811556, 1936112, 41741, 913274
			},
			.prefetch0 = 20087,
			.prefetch1 = 12804,
			.ram = rtr_initial_ram_21,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				3990955327, 3421338204, 876788174, 3069245018, 4093465639, 852004221, 386946356, 221785922, 1541731350, 725891680, 1996506359, 689591069, 1150227292, 1711492813, 502782800, 4811556, 1936104, 8963, 2220539766
			},
			.prefetch0 = 22311,
			.prefetch1 = 22215,
			.ram = rtr_final_ram_21,
			.ram_len = 26,
		},
		.transactions = rtr_transactions_21,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "022 RTR 4e77",
		.initial = {
			.regs = {
				56594810, 3261933150, 3568757004, 2665443759, 3401889748, 832936600, 1541794536, 3977836990, 1697339583, 3454357319, 3552286309, 2478940929, 1656848332, 2407269042, 4027016195, 8592480, 6760064, 8728, 14008388
			},
			.prefetch0 = 20087,
			.prefetch1 = 57032,
			.ram = rtr_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				56594810, 3261933150, 3568757004, 2665443759, 3401889748, 832936600, 1541794536, 3977836990, 1697339583, 3454357319, 3552286309, 2478940929, 1656848332, 2407269042, 4027016195, 8592480, 6760070, 8726, 3766161350
			},
			.prefetch0 = 25044,
			.prefetch1 = 50554,
			.ram = rtr_final_ram_22,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_22,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "023 RTR 4e77",
		.initial = {
			.regs = {
				456308165, 3939823614, 3956107200, 3996012339, 2503770563, 1350373550, 1067816389, 1060693329, 2016699607, 2228441765, 2242974660, 1035618953, 1032293466, 513472135, 2877701396, 11209586, 16072150, 8970, 10512322
			},
			.prefetch0 = 20087,
			.prefetch1 = 61575,
			.ram = rtr_initial_ram_23,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				456308165, 3939823614, 3956107200, 3996012339, 2503770563, 1350373550, 1067816389, 1060693329, 2016699607, 2228441765, 2242974660, 1035618953, 1032293466, 513472135, 2877701396, 11209586, 16072142, 8986, 195071086
			},
			.prefetch0 = 5294,
			.prefetch1 = 16049,
			.ram = rtr_final_ram_23,
			.ram_len = 26,
		},
		.transactions = rtr_transactions_23,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "024 RTR 4e77",
		.initial = {
			.regs = {
				3765513652, 3627245872, 1216681795, 3421280634, 2486474546, 1376109811, 74978154, 4037614864, 1249868029, 3393178679, 4262483729, 3144809704, 3872801091, 1789392304, 528447225, 12384920, 4136654, 8468, 9239064
			},
			.prefetch0 = 20087,
			.prefetch1 = 36165,
			.ram = rtr_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3765513652, 3627245872, 1216681795, 3421280634, 2486474546, 1376109811, 74978154, 4037614864, 1249868029, 3393178679, 4262483729, 3144809704, 3872801091, 1789392304, 528447225, 12384920, 4136660, 8448, 1713899646
			},
			.prefetch0 = 64565,
			.prefetch1 = 34517,
			.ram = rtr_final_ram_24,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_24,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "025 RTR 4e77",
		.initial = {
			.regs = {
				3020785183, 4084104771, 2411734205, 212366265, 2923455053, 96428579, 4106876647, 644775953, 1570062465, 2393140652, 306785102, 1427239757, 2960788864, 2692551975, 1010598896, 13394758, 14654664, 283, 9273102
			},
			.prefetch0 = 20087,
			.prefetch1 = 2845,
			.ram = rtr_initial_ram_25,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				3020785183, 4084104771, 2411734205, 212366265, 2923455053, 96428579, 4106876647, 644775953, 1570062465, 2393140652, 306785102, 1427239757, 2960788864, 2692551975, 1010598896, 13394764, 14654650, 8451, 3383808432
			},
			.prefetch0 = 60160,
			.prefetch1 = 45549,
			.ram = rtr_final_ram_25,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_25,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "026 RTR 4e77",
		.initial = {
			.regs = {
				2799970838, 119828751, 932068668, 3144546308, 1810388752, 4092487149, 768752518, 1003903853, 938409801, 2117781725, 1710438180, 4139929766, 3081257892, 147959348, 912595093, 9861132, 4961666, 793, 14089948
			},
			.prefetch0 = 20087,
			.prefetch1 = 52457,
			.ram = rtr_initial_ram_26,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2799970838, 119828751, 932068668, 3144546308, 1810388752, 4092487149, 768752518, 1003903853, 938409801, 2117781725, 1710438180, 4139929766, 3081257892, 147959348, 912595093, 9861138, 4961666, 783, 2167329300
			},
			.prefetch0 = 55531,
			.prefetch1 = 11344,
			.ram = rtr_final_ram_26,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_26,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "027 RTR 4e77",
		.initial = {
			.regs = {
				121363126, 1815835516, 1224829815, 1721125843, 4199801125, 3204970626, 904103133, 2860237193, 2562376498, 3596086786, 533356905, 3043302899, 3759808944, 4019803074, 2021647404, 1148136, 10812440, 541, 1305004
			},
			.prefetch0 = 20087,
			.prefetch1 = 15164,
			.ram = rtr_initial_ram_27,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				121363126, 1815835516, 1224829815, 1721125843, 4199801125, 3204970626, 904103133, 2860237193, 2562376498, 3596086786, 533356905, 3043302899, 3759808944, 4019803074, 2021647404, 1148142, 10812440, 512, 824382358
			},
			.prefetch0 = 47645,
			.prefetch1 = 20542,
			.ram = rtr_final_ram_27,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_27,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "028 RTR 4e77",
		.initial = {
			.regs = {
				576985711, 4156624974, 2490004077, 4235985875, 3129010594, 1205945302, 4220108691, 2766669341, 270325266, 3147560811, 4094178021, 3727845406, 1897891643, 2545791264, 1002495141, 4301944, 1470724, 33032, 13578394
			},
			.prefetch0 = 20087,
			.prefetch1 = 11466,
			.ram = rtr_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				576985711, 4156624974, 2490004077, 4235985875, 3129010594, 1205945302, 4220108691, 2766669341, 270325266, 3147560811, 4094178021, 3727845406, 1897891643, 2545791264, 1002495141, 4301950, 1470724, 33040, 994357660
			},
			.prefetch0 = 8223,
			.prefetch1 = 32428,
			.ram = rtr_final_ram_28,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_28,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "029 RTR 4e77",
		.initial = {
			.regs = {
				1159817961, 2671262998, 3480426650, 101657521, 2187837434, 3136426577, 3424430955, 1242401896, 2706647547, 3218171315, 4240113863, 528804265, 1185236815, 452513490, 2731990272, 16329526, 6369876, 8724, 1434228
			},
			.prefetch0 = 20087,
			.prefetch1 = 48666,
			.ram = rtr_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1159817961, 2671262998, 3480426650, 101657521, 2187837434, 3136426577, 3424430955, 1242401896, 2706647547, 3218171315, 4240113863, 528804265, 1185236815, 452513490, 2731990272, 16329526, 6369882, 8731, 2807970318
			},
			.prefetch0 = 16877,
			.prefetch1 = 4805,
			.ram = rtr_final_ram_29,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_29,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "030 RTR 4e77",
		.initial = {
			.regs = {
				3865436751, 5820882, 3504461273, 2224291612, 1274226622, 1876923836, 1381656995, 1161470807, 1219029870, 734119178, 638968998, 3634685957, 3586127898, 1688512754, 3679077857, 16038620, 13026232, 33542, 4972968
			},
			.prefetch0 = 20087,
			.prefetch1 = 32567,
			.ram = rtr_initial_ram_30,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				3865436751, 5820882, 3504461273, 2224291612, 1274226622, 1876923836, 1381656995, 1161470807, 1219029870, 734119178, 638968998, 3634685957, 3586127898, 1688512754, 3679077857, 16038626, 13026218, 8965, 186966940
			},
			.prefetch0 = 60241,
			.prefetch1 = 29913,
			.ram = rtr_final_ram_30,
			.ram_len = 32,
		},
		.transactions = rtr_transactions_30,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "031 RTR 4e77",
		.initial = {
			.regs = {
				146601391, 315644406, 3169285641, 2338268210, 4122315738, 1462174297, 4220152934, 1662599529, 2837571824, 4153422194, 3445082837, 1424010065, 3749915499, 2156721151, 3945090669, 4931552, 2591066, 42002, 6766248
			},
			.prefetch0 = 20087,
			.prefetch1 = 12348,
			.ram = rtr_initial_ram_31,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				146601391, 315644406, 3169285641, 2338268210, 4122315738, 1462174297, 4220152934, 1662599529, 2837571824, 4153422194, 3445082837, 1424010065, 3749915499, 2156721151, 3945090669, 4931552, 2591072, 41992, 1790161182
			},
			.prefetch0 = 16311,
			.prefetch1 = 42369,
			.ram = rtr_final_ram_31,
			.ram_len = 14,
		},
		.transactions = rtr_transactions_31,
		.transactions_len = 5,
		.lenght = 20,
	},
};

#endif /* RBT_RTR_H */