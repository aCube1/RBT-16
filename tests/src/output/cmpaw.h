#ifndef RBT_CMPAW_H
#define RBT_CMPAW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte cmpaw_initial_ram_0[] = {
		{ .addr = 0xe416ca, .byte = 0xb6 },
		{ .addr = 0xe416cb, .byte = 0xdb },
		{ .addr = 0xe416cc, .byte = 0x10 },
		{ .addr = 0xe416cd, .byte = 0x4f },
		{ .addr = 0x906bd6, .byte = 0xcd },
		{ .addr = 0x906bd7, .byte = 0xe7 },
		{ .addr = 0xe416ce, .byte = 0xaa },
		{ .addr = 0xe416cf, .byte = 0xa6 }
};

static const SST_RamByte cmpaw_final_ram_0[] = {
		{ .addr = 0xe416ca, .byte = 0xb6 },
		{ .addr = 0xe416cb, .byte = 0xdb },
		{ .addr = 0xe416cc, .byte = 0x10 },
		{ .addr = 0xe416cd, .byte = 0x4f },
		{ .addr = 0x906bd6, .byte = 0xcd },
		{ .addr = 0x906bd7, .byte = 0xe7 },
		{ .addr = 0xe416ce, .byte = 0xaa },
		{ .addr = 0xe416cf, .byte = 0xa6 }
};

static const SST_Transaction cmpaw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9464790, .data = 52711, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14948046, .data = 43686, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_1[] = {
		{ .addr = 0x6f5614, .byte = 0xb2 },
		{ .addr = 0x6f5615, .byte = 0xde },
		{ .addr = 0x6f5616, .byte = 0x0a },
		{ .addr = 0x6f5617, .byte = 0x8f },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0x2e },
		{ .addr = 0x00000e, .byte = 0xf1 },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x2ef1dc, .byte = 0x74 },
		{ .addr = 0x2ef1dd, .byte = 0x81 },
		{ .addr = 0x2ef1de, .byte = 0x2f },
		{ .addr = 0x2ef1df, .byte = 0x01 }
};

static const SST_RamByte cmpaw_final_ram_1[] = {
		{ .addr = 0x6f5614, .byte = 0xb2 },
		{ .addr = 0x6f5615, .byte = 0xde },
		{ .addr = 0x6f5616, .byte = 0x0a },
		{ .addr = 0x6f5617, .byte = 0x8f },
		{ .addr = 0x317cd2, .byte = 0x56 },
		{ .addr = 0x317cd3, .byte = 0x16 },
		{ .addr = 0x317cce, .byte = 0x87 },
		{ .addr = 0x317ccf, .byte = 0x11 },
		{ .addr = 0x317cd0, .byte = 0x00 },
		{ .addr = 0x317cd1, .byte = 0x6f },
		{ .addr = 0x317ccc, .byte = 0xb2 },
		{ .addr = 0x317ccd, .byte = 0xde },
		{ .addr = 0x317cca, .byte = 0xb2 },
		{ .addr = 0x317ccb, .byte = 0x73 },
		{ .addr = 0x317cc6, .byte = 0xb2 },
		{ .addr = 0x317cc7, .byte = 0xd1 },
		{ .addr = 0x317cc8, .byte = 0x51 },
		{ .addr = 0x317cc9, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0x2e },
		{ .addr = 0x00000e, .byte = 0xf1 },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x2ef1dc, .byte = 0x74 },
		{ .addr = 0x2ef1dd, .byte = 0x81 },
		{ .addr = 0x2ef1de, .byte = 0x2f },
		{ .addr = 0x2ef1df, .byte = 0x01 }
};

static const SST_Transaction cmpaw_transactions_1[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6206066, .data = 25608, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243218, .data = 22038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243214, .data = 34577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243216, .data = 111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243212, .data = 45790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243210, .data = 45683, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243206, .data = 45777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243208, .data = 20830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3076572, .data = 29825, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3076574, .data = 12033, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpaw_initial_ram_2[] = {
		{ .addr = 0x230f56, .byte = 0xba },
		{ .addr = 0x230f57, .byte = 0xdb },
		{ .addr = 0x230f58, .byte = 0xbb },
		{ .addr = 0x230f59, .byte = 0x1c },
		{ .addr = 0xfb00ee, .byte = 0xe9 },
		{ .addr = 0xfb00ef, .byte = 0x52 },
		{ .addr = 0x230f5a, .byte = 0xe7 },
		{ .addr = 0x230f5b, .byte = 0x27 }
};

static const SST_RamByte cmpaw_final_ram_2[] = {
		{ .addr = 0x230f56, .byte = 0xba },
		{ .addr = 0x230f57, .byte = 0xdb },
		{ .addr = 0x230f58, .byte = 0xbb },
		{ .addr = 0x230f59, .byte = 0x1c },
		{ .addr = 0xfb00ee, .byte = 0xe9 },
		{ .addr = 0xfb00ef, .byte = 0x52 },
		{ .addr = 0x230f5a, .byte = 0xe7 },
		{ .addr = 0x230f5b, .byte = 0x27 }
};

static const SST_Transaction cmpaw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16449774, .data = 59730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2297690, .data = 59175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_3[] = {
		{ .addr = 0xfa4ff4, .byte = 0xb0 },
		{ .addr = 0xfa4ff5, .byte = 0xc6 },
		{ .addr = 0xfa4ff6, .byte = 0xd8 },
		{ .addr = 0xfa4ff7, .byte = 0x6b },
		{ .addr = 0xfa4ff8, .byte = 0xd1 },
		{ .addr = 0xfa4ff9, .byte = 0xa4 }
};

static const SST_RamByte cmpaw_final_ram_3[] = {
		{ .addr = 0xfa4ff4, .byte = 0xb0 },
		{ .addr = 0xfa4ff5, .byte = 0xc6 },
		{ .addr = 0xfa4ff6, .byte = 0xd8 },
		{ .addr = 0xfa4ff7, .byte = 0x6b },
		{ .addr = 0xfa4ff8, .byte = 0xd1 },
		{ .addr = 0xfa4ff9, .byte = 0xa4 }
};

static const SST_Transaction cmpaw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16404472, .data = 53668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_4[] = {
		{ .addr = 0xe40c34, .byte = 0xbe },
		{ .addr = 0xe40c35, .byte = 0xec },
		{ .addr = 0xe40c36, .byte = 0xc2 },
		{ .addr = 0xe40c37, .byte = 0x60 },
		{ .addr = 0xe40c38, .byte = 0x55 },
		{ .addr = 0xe40c39, .byte = 0xf9 },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x9e },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xaa9e88, .byte = 0x66 },
		{ .addr = 0xaa9e89, .byte = 0xaa },
		{ .addr = 0xaa9e8a, .byte = 0x44 },
		{ .addr = 0xaa9e8b, .byte = 0x14 }
};

static const SST_RamByte cmpaw_final_ram_4[] = {
		{ .addr = 0xe40c34, .byte = 0xbe },
		{ .addr = 0xe40c35, .byte = 0xec },
		{ .addr = 0xe40c36, .byte = 0xc2 },
		{ .addr = 0xe40c37, .byte = 0x60 },
		{ .addr = 0xe40c38, .byte = 0x55 },
		{ .addr = 0xe40c39, .byte = 0xf9 },
		{ .addr = 0x2d0914, .byte = 0x0c },
		{ .addr = 0x2d0915, .byte = 0x36 },
		{ .addr = 0x2d0910, .byte = 0x23 },
		{ .addr = 0x2d0911, .byte = 0x15 },
		{ .addr = 0x2d0912, .byte = 0x00 },
		{ .addr = 0x2d0913, .byte = 0xe4 },
		{ .addr = 0x2d090e, .byte = 0xbe },
		{ .addr = 0x2d090f, .byte = 0xec },
		{ .addr = 0x2d090c, .byte = 0x26 },
		{ .addr = 0x2d090d, .byte = 0x49 },
		{ .addr = 0x2d0908, .byte = 0xbe },
		{ .addr = 0x2d0909, .byte = 0xf5 },
		{ .addr = 0x2d090a, .byte = 0xa7 },
		{ .addr = 0x2d090b, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x9e },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xaa9e88, .byte = 0x66 },
		{ .addr = 0xaa9e89, .byte = 0xaa },
		{ .addr = 0xaa9e8a, .byte = 0x44 },
		{ .addr = 0xaa9e8b, .byte = 0x14 }
};

static const SST_Transaction cmpaw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14945336, .data = 22009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9578056, .data = 18904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2951444, .data = 3126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2951440, .data = 8981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2951442, .data = 228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2951438, .data = 48876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2951436, .data = 9801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2951432, .data = 48885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2951434, .data = 42898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 40584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11181704, .data = 26282, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11181706, .data = 17428, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpaw_initial_ram_5[] = {
		{ .addr = 0x4bdf88, .byte = 0xb0 },
		{ .addr = 0x4bdf89, .byte = 0xe4 },
		{ .addr = 0x4bdf8a, .byte = 0x2f },
		{ .addr = 0x4bdf8b, .byte = 0x9b },
		{ .addr = 0xf296b6, .byte = 0x65 },
		{ .addr = 0xf296b7, .byte = 0xd6 },
		{ .addr = 0x4bdf8c, .byte = 0x79 },
		{ .addr = 0x4bdf8d, .byte = 0x7a }
};

static const SST_RamByte cmpaw_final_ram_5[] = {
		{ .addr = 0x4bdf88, .byte = 0xb0 },
		{ .addr = 0x4bdf89, .byte = 0xe4 },
		{ .addr = 0x4bdf8a, .byte = 0x2f },
		{ .addr = 0x4bdf8b, .byte = 0x9b },
		{ .addr = 0xf296b6, .byte = 0x65 },
		{ .addr = 0xf296b7, .byte = 0xd6 },
		{ .addr = 0x4bdf8c, .byte = 0x79 },
		{ .addr = 0x4bdf8d, .byte = 0x7a }
};

static const SST_Transaction cmpaw_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15898294, .data = 26070, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4972428, .data = 31098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_6[] = {
		{ .addr = 0xbead9c, .byte = 0xb2 },
		{ .addr = 0xbead9d, .byte = 0xf5 },
		{ .addr = 0xbead9e, .byte = 0x91 },
		{ .addr = 0xbead9f, .byte = 0x8b },
		{ .addr = 0xbeada0, .byte = 0xde },
		{ .addr = 0xbeada1, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0x3b },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x84bc52, .byte = 0xed },
		{ .addr = 0x84bc53, .byte = 0xde },
		{ .addr = 0x84bc54, .byte = 0x12 },
		{ .addr = 0x84bc55, .byte = 0xbc }
};

static const SST_RamByte cmpaw_final_ram_6[] = {
		{ .addr = 0xbead9c, .byte = 0xb2 },
		{ .addr = 0xbead9d, .byte = 0xf5 },
		{ .addr = 0xbead9e, .byte = 0x91 },
		{ .addr = 0xbead9f, .byte = 0x8b },
		{ .addr = 0xbeada0, .byte = 0xde },
		{ .addr = 0xbeada1, .byte = 0x32 },
		{ .addr = 0xb2fe80, .byte = 0xad },
		{ .addr = 0xb2fe81, .byte = 0x9e },
		{ .addr = 0xb2fe7c, .byte = 0x07 },
		{ .addr = 0xb2fe7d, .byte = 0x13 },
		{ .addr = 0xb2fe7e, .byte = 0x00 },
		{ .addr = 0xb2fe7f, .byte = 0xbe },
		{ .addr = 0xb2fe7a, .byte = 0xb2 },
		{ .addr = 0xb2fe7b, .byte = 0xf5 },
		{ .addr = 0xb2fe78, .byte = 0xe3 },
		{ .addr = 0xb2fe79, .byte = 0x17 },
		{ .addr = 0xb2fe74, .byte = 0xb2 },
		{ .addr = 0xb2fe75, .byte = 0xf1 },
		{ .addr = 0xb2fe76, .byte = 0xb9 },
		{ .addr = 0xb2fe77, .byte = 0x1d },
		{ .addr = 0x00000c, .byte = 0x3b },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x84bc52, .byte = 0xed },
		{ .addr = 0x84bc53, .byte = 0xde },
		{ .addr = 0x84bc54, .byte = 0x12 },
		{ .addr = 0x84bc55, .byte = 0xbc }
};

static const SST_Transaction cmpaw_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12496288, .data = 56882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1958678, .data = 64383, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11730560, .data = 44446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11730556, .data = 1811, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11730558, .data = 190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11730554, .data = 45813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11730552, .data = 58135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11730548, .data = 45809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11730550, .data = 47389, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8698962, .data = 60894, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8698964, .data = 4796, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpaw_initial_ram_7[] = {
		{ .addr = 0xcea6d2, .byte = 0xb4 },
		{ .addr = 0xcea6d3, .byte = 0xd1 },
		{ .addr = 0xcea6d4, .byte = 0x0e },
		{ .addr = 0xcea6d5, .byte = 0x5d },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x064068, .byte = 0x16 },
		{ .addr = 0x064069, .byte = 0x70 },
		{ .addr = 0x06406a, .byte = 0x42 },
		{ .addr = 0x06406b, .byte = 0xe1 }
};

static const SST_RamByte cmpaw_final_ram_7[] = {
		{ .addr = 0xcea6d2, .byte = 0xb4 },
		{ .addr = 0xcea6d3, .byte = 0xd1 },
		{ .addr = 0xcea6d4, .byte = 0x0e },
		{ .addr = 0xcea6d5, .byte = 0x5d },
		{ .addr = 0x7933dc, .byte = 0xa6 },
		{ .addr = 0x7933dd, .byte = 0xd4 },
		{ .addr = 0x7933d8, .byte = 0x87 },
		{ .addr = 0x7933d9, .byte = 0x11 },
		{ .addr = 0x7933da, .byte = 0x00 },
		{ .addr = 0x7933db, .byte = 0xce },
		{ .addr = 0x7933d6, .byte = 0xb4 },
		{ .addr = 0x7933d7, .byte = 0xd1 },
		{ .addr = 0x7933d4, .byte = 0x2c },
		{ .addr = 0x7933d5, .byte = 0x6d },
		{ .addr = 0x7933d0, .byte = 0xb4 },
		{ .addr = 0x7933d1, .byte = 0xd1 },
		{ .addr = 0x7933d2, .byte = 0x71 },
		{ .addr = 0x7933d3, .byte = 0x0e },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x064068, .byte = 0x16 },
		{ .addr = 0x064069, .byte = 0x70 },
		{ .addr = 0x06406a, .byte = 0x42 },
		{ .addr = 0x06406b, .byte = 0xe1 }
};

static const SST_Transaction cmpaw_transactions_7[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 928876, .data = 53972, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7943132, .data = 42708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7943128, .data = 34577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7943130, .data = 206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7943126, .data = 46289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7943124, .data = 11373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7943120, .data = 46289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7943122, .data = 28942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13574, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 409704, .data = 5744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 409706, .data = 17121, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpaw_initial_ram_8[] = {
		{ .addr = 0x2a7526, .byte = 0xb8 },
		{ .addr = 0x2a7527, .byte = 0xf7 },
		{ .addr = 0x2a7528, .byte = 0xb7 },
		{ .addr = 0x2a7529, .byte = 0xff },
		{ .addr = 0x2a752a, .byte = 0x49 },
		{ .addr = 0x2a752b, .byte = 0xfb },
		{ .addr = 0x00000c, .byte = 0x7c },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xf4c588, .byte = 0x76 },
		{ .addr = 0xf4c589, .byte = 0xed },
		{ .addr = 0xf4c58a, .byte = 0x4e },
		{ .addr = 0xf4c58b, .byte = 0x48 }
};

static const SST_RamByte cmpaw_final_ram_8[] = {
		{ .addr = 0x2a7526, .byte = 0xb8 },
		{ .addr = 0x2a7527, .byte = 0xf7 },
		{ .addr = 0x2a7528, .byte = 0xb7 },
		{ .addr = 0x2a7529, .byte = 0xff },
		{ .addr = 0x2a752a, .byte = 0x49 },
		{ .addr = 0x2a752b, .byte = 0xfb },
		{ .addr = 0x99776e, .byte = 0x75 },
		{ .addr = 0x99776f, .byte = 0x28 },
		{ .addr = 0x99776a, .byte = 0x06 },
		{ .addr = 0x99776b, .byte = 0x03 },
		{ .addr = 0x99776c, .byte = 0x00 },
		{ .addr = 0x99776d, .byte = 0x2a },
		{ .addr = 0x997768, .byte = 0xb8 },
		{ .addr = 0x997769, .byte = 0xf7 },
		{ .addr = 0x997766, .byte = 0x71 },
		{ .addr = 0x997767, .byte = 0xb9 },
		{ .addr = 0x997762, .byte = 0xb8 },
		{ .addr = 0x997763, .byte = 0xf1 },
		{ .addr = 0x997764, .byte = 0x00 },
		{ .addr = 0x997765, .byte = 0x3b },
		{ .addr = 0x00000c, .byte = 0x7c },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xf4c588, .byte = 0x76 },
		{ .addr = 0xf4c589, .byte = 0xed },
		{ .addr = 0xf4c58a, .byte = 0x4e },
		{ .addr = 0xf4c58b, .byte = 0x48 }
};

static const SST_Transaction cmpaw_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2782506, .data = 18939, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3895736, .data = 40560, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10057582, .data = 29992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10057578, .data = 1539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10057580, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10057576, .data = 47351, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10057574, .data = 29113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10057570, .data = 47345, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10057572, .data = 59, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16041352, .data = 30445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16041354, .data = 20040, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpaw_initial_ram_9[] = {
		{ .addr = 0x15e0c4, .byte = 0xbc },
		{ .addr = 0x15e0c5, .byte = 0xe3 },
		{ .addr = 0x15e0c6, .byte = 0xb4 },
		{ .addr = 0x15e0c7, .byte = 0x2e },
		{ .addr = 0x020e08, .byte = 0x93 },
		{ .addr = 0x020e09, .byte = 0x6c },
		{ .addr = 0x15e0c8, .byte = 0xb8 },
		{ .addr = 0x15e0c9, .byte = 0x74 }
};

static const SST_RamByte cmpaw_final_ram_9[] = {
		{ .addr = 0x15e0c4, .byte = 0xbc },
		{ .addr = 0x15e0c5, .byte = 0xe3 },
		{ .addr = 0x15e0c6, .byte = 0xb4 },
		{ .addr = 0x15e0c7, .byte = 0x2e },
		{ .addr = 0x020e08, .byte = 0x93 },
		{ .addr = 0x020e09, .byte = 0x6c },
		{ .addr = 0x15e0c8, .byte = 0xb8 },
		{ .addr = 0x15e0c9, .byte = 0x74 }
};

static const SST_Transaction cmpaw_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 134664, .data = 37740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1433800, .data = 47220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_10[] = {
		{ .addr = 0x2af9b2, .byte = 0xb4 },
		{ .addr = 0x2af9b3, .byte = 0xc3 },
		{ .addr = 0x2af9b4, .byte = 0x8f },
		{ .addr = 0x2af9b5, .byte = 0x55 },
		{ .addr = 0x2af9b6, .byte = 0x16 },
		{ .addr = 0x2af9b7, .byte = 0xeb }
};

static const SST_RamByte cmpaw_final_ram_10[] = {
		{ .addr = 0x2af9b2, .byte = 0xb4 },
		{ .addr = 0x2af9b3, .byte = 0xc3 },
		{ .addr = 0x2af9b4, .byte = 0x8f },
		{ .addr = 0x2af9b5, .byte = 0x55 },
		{ .addr = 0x2af9b6, .byte = 0x16 },
		{ .addr = 0x2af9b7, .byte = 0xeb }
};

static const SST_Transaction cmpaw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2816438, .data = 5867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_11[] = {
		{ .addr = 0xea104c, .byte = 0xbe },
		{ .addr = 0xea104d, .byte = 0xe9 },
		{ .addr = 0xea104e, .byte = 0x84 },
		{ .addr = 0xea104f, .byte = 0xc5 },
		{ .addr = 0xea1050, .byte = 0x12 },
		{ .addr = 0xea1051, .byte = 0x79 },
		{ .addr = 0xdd764c, .byte = 0xdf },
		{ .addr = 0xdd764d, .byte = 0x53 },
		{ .addr = 0xea1052, .byte = 0xa0 },
		{ .addr = 0xea1053, .byte = 0xc7 }
};

static const SST_RamByte cmpaw_final_ram_11[] = {
		{ .addr = 0xea104c, .byte = 0xbe },
		{ .addr = 0xea104d, .byte = 0xe9 },
		{ .addr = 0xea104e, .byte = 0x84 },
		{ .addr = 0xea104f, .byte = 0xc5 },
		{ .addr = 0xea1050, .byte = 0x12 },
		{ .addr = 0xea1051, .byte = 0x79 },
		{ .addr = 0xdd764c, .byte = 0xdf },
		{ .addr = 0xdd764d, .byte = 0x53 },
		{ .addr = 0xea1052, .byte = 0xa0 },
		{ .addr = 0xea1053, .byte = 0xc7 }
};

static const SST_Transaction cmpaw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15339600, .data = 4729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14513740, .data = 57171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15339602, .data = 41159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_12[] = {
		{ .addr = 0x599e94, .byte = 0xbc },
		{ .addr = 0x599e95, .byte = 0xc3 },
		{ .addr = 0x599e96, .byte = 0x11 },
		{ .addr = 0x599e97, .byte = 0x69 },
		{ .addr = 0x599e98, .byte = 0x56 },
		{ .addr = 0x599e99, .byte = 0x29 }
};

static const SST_RamByte cmpaw_final_ram_12[] = {
		{ .addr = 0x599e94, .byte = 0xbc },
		{ .addr = 0x599e95, .byte = 0xc3 },
		{ .addr = 0x599e96, .byte = 0x11 },
		{ .addr = 0x599e97, .byte = 0x69 },
		{ .addr = 0x599e98, .byte = 0x56 },
		{ .addr = 0x599e99, .byte = 0x29 }
};

static const SST_Transaction cmpaw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5873304, .data = 22057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_13[] = {
		{ .addr = 0xa44b36, .byte = 0xb2 },
		{ .addr = 0xa44b37, .byte = 0xdb },
		{ .addr = 0xa44b38, .byte = 0x26 },
		{ .addr = 0xa44b39, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xbe },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x02bee8, .byte = 0x59 },
		{ .addr = 0x02bee9, .byte = 0x5e },
		{ .addr = 0x02beea, .byte = 0xe0 },
		{ .addr = 0x02beeb, .byte = 0x27 }
};

static const SST_RamByte cmpaw_final_ram_13[] = {
		{ .addr = 0xa44b36, .byte = 0xb2 },
		{ .addr = 0xa44b37, .byte = 0xdb },
		{ .addr = 0xa44b38, .byte = 0x26 },
		{ .addr = 0xa44b39, .byte = 0x3e },
		{ .addr = 0xd93b6c, .byte = 0x4b },
		{ .addr = 0xd93b6d, .byte = 0x38 },
		{ .addr = 0xd93b68, .byte = 0x07 },
		{ .addr = 0xd93b69, .byte = 0x09 },
		{ .addr = 0xd93b6a, .byte = 0x00 },
		{ .addr = 0xd93b6b, .byte = 0xa4 },
		{ .addr = 0xd93b66, .byte = 0xb2 },
		{ .addr = 0xd93b67, .byte = 0xdb },
		{ .addr = 0xd93b64, .byte = 0x34 },
		{ .addr = 0xd93b65, .byte = 0xd9 },
		{ .addr = 0xd93b60, .byte = 0xb2 },
		{ .addr = 0xd93b61, .byte = 0xd1 },
		{ .addr = 0xd93b62, .byte = 0xa0 },
		{ .addr = 0xd93b63, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xbe },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x02bee8, .byte = 0x59 },
		{ .addr = 0x02bee9, .byte = 0x5e },
		{ .addr = 0x02beea, .byte = 0xe0 },
		{ .addr = 0x02beeb, .byte = 0x27 }
};

static const SST_Transaction cmpaw_transactions_13[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2503896, .data = 61001, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14236524, .data = 19256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14236520, .data = 1801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14236522, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14236518, .data = 45787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14236516, .data = 13529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14236512, .data = 45777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14236514, .data = 40998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 179944, .data = 22878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 179946, .data = 57383, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpaw_initial_ram_14[] = {
		{ .addr = 0x0473ea, .byte = 0xb6 },
		{ .addr = 0x0473eb, .byte = 0xd1 },
		{ .addr = 0x0473ec, .byte = 0xf5 },
		{ .addr = 0x0473ed, .byte = 0x96 },
		{ .addr = 0x12f3d2, .byte = 0x45 },
		{ .addr = 0x12f3d3, .byte = 0xfe },
		{ .addr = 0x0473ee, .byte = 0x9f },
		{ .addr = 0x0473ef, .byte = 0xc9 }
};

static const SST_RamByte cmpaw_final_ram_14[] = {
		{ .addr = 0x0473ea, .byte = 0xb6 },
		{ .addr = 0x0473eb, .byte = 0xd1 },
		{ .addr = 0x0473ec, .byte = 0xf5 },
		{ .addr = 0x0473ed, .byte = 0x96 },
		{ .addr = 0x12f3d2, .byte = 0x45 },
		{ .addr = 0x12f3d3, .byte = 0xfe },
		{ .addr = 0x0473ee, .byte = 0x9f },
		{ .addr = 0x0473ef, .byte = 0xc9 }
};

static const SST_Transaction cmpaw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1242066, .data = 17918, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 291822, .data = 40905, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpaw_initial_ram_15[] = {
		{ .addr = 0x8b5ec6, .byte = 0xbc },
		{ .addr = 0x8b5ec7, .byte = 0xf2 },
		{ .addr = 0x8b5ec8, .byte = 0xa6 },
		{ .addr = 0x8b5ec9, .byte = 0x66 },
		{ .addr = 0x8b5eca, .byte = 0x15 },
		{ .addr = 0x8b5ecb, .byte = 0xb6 },
		{ .addr = 0x30692e, .byte = 0x69 },
		{ .addr = 0x30692f, .byte = 0x82 },
		{ .addr = 0x8b5ecc, .byte = 0xbc },
		{ .addr = 0x8b5ecd, .byte = 0x0e }
};

static const SST_RamByte cmpaw_final_ram_15[] = {
		{ .addr = 0x8b5ec6, .byte = 0xbc },
		{ .addr = 0x8b5ec7, .byte = 0xf2 },
		{ .addr = 0x8b5ec8, .byte = 0xa6 },
		{ .addr = 0x8b5ec9, .byte = 0x66 },
		{ .addr = 0x8b5eca, .byte = 0x15 },
		{ .addr = 0x8b5ecb, .byte = 0xb6 },
		{ .addr = 0x30692e, .byte = 0x69 },
		{ .addr = 0x30692f, .byte = 0x82 },
		{ .addr = 0x8b5ecc, .byte = 0xbc },
		{ .addr = 0x8b5ecd, .byte = 0x0e }
};

static const SST_Transaction cmpaw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9133770, .data = 5558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3172654, .data = 27010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9133772, .data = 48142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

const uint32_t CMPAW_TEST_COUNT = 16;
static const SST_TestCase cmpaw[] = {
	{
		.name = "000 CMPA.w (A3)+, A3 b6db",
		.initial = {
			.regs = {
				492070105, 1571437183, 313863493, 1080259018, 2237413311, 1921128094, 2709787501, 2022490657, 578471791, 1488481635, 724012354, 93350870, 1485134294, 1369588139, 1380749972, 13927062, 5762640, 8450, 14948046
			},
			.prefetch0 = 46811,
			.prefetch1 = 4175,
			.ram = cmpaw_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				492070105, 1571437183, 313863493, 1080259018, 2237413311, 1921128094, 2709787501, 2022490657, 578471791, 1488481635, 724012354, 93350872, 1485134294, 1369588139, 1380749972, 13927062, 5762640, 8449, 14948048
			},
			.prefetch0 = 4175,
			.prefetch1 = 43686,
			.ram = cmpaw_final_ram_0,
			.ram_len = 8,
		},
		.transactions = cmpaw_transactions_0,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "001 CMPA.w (A6)+, A1 b2de",
		.initial = {
			.regs = {
				1399797491, 289438871, 1680030922, 1898542747, 140943910, 3488955012, 291527146, 2710079540, 538533370, 3329319453, 1684496098, 3577901547, 55893960, 401289346, 1365160563, 11481346, 3243220, 34577, 7296536
			},
			.prefetch0 = 45790,
			.prefetch1 = 2703,
			.ram = cmpaw_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1399797491, 289438871, 1680030922, 1898542747, 140943910, 3488955012, 291527146, 2710079540, 538533370, 3329319453, 1684496098, 3577901547, 55893960, 401289346, 1365160565, 11481346, 3243206, 10001, 3022975456
			},
			.prefetch0 = 29825,
			.prefetch1 = 12033,
			.ram = cmpaw_final_ram_1,
			.ram_len = 26,
		},
		.transactions = cmpaw_transactions_1,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "002 CMPA.w (A3)+, A5 badb",
		.initial = {
			.regs = {
				2199205480, 4136948498, 1764608447, 1502265048, 1679985107, 536295087, 1697129123, 1464897363, 507571343, 3964910236, 2371505811, 4261085422, 1692769254, 4141863104, 2334681781, 11031980, 8594708, 9485, 2297690
			},
			.prefetch0 = 47835,
			.prefetch1 = 47900,
			.ram = cmpaw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2199205480, 4136948498, 1764608447, 1502265048, 1679985107, 536295087, 1697129123, 1464897363, 507571343, 3964910236, 2371505811, 4261085424, 1692769254, 4141863104, 2334681781, 11031980, 8594708, 9481, 2297692
			},
			.prefetch0 = 47900,
			.prefetch1 = 59175,
			.ram = cmpaw_final_ram_2,
			.ram_len = 8,
		},
		.transactions = cmpaw_transactions_2,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "003 CMPA.w D6, A0 b0c6",
		.initial = {
			.regs = {
				10841653, 2438465182, 398110145, 173723884, 2601185093, 4101859050, 2342459552, 22567617, 4171429505, 3505156825, 3282612957, 966226162, 3986180972, 1954674612, 726670407, 14385474, 13187546, 772, 16404472
			},
			.prefetch0 = 45254,
			.prefetch1 = 55403,
			.ram = cmpaw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				10841653, 2438465182, 398110145, 173723884, 2601185093, 4101859050, 2342459552, 22567617, 4171429505, 3505156825, 3282612957, 966226162, 3986180972, 1954674612, 726670407, 14385474, 13187546, 776, 16404474
			},
			.prefetch0 = 55403,
			.prefetch1 = 53668,
			.ram = cmpaw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = cmpaw_transactions_3,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "004 CMPA.w (d16, A4), A7 beec",
		.initial = {
			.regs = {
				4170352631, 1501770910, 2078074628, 849307083, 1248309649, 1030058477, 3431798647, 3692286661, 3375685840, 233092058, 2840711180, 1733256485, 2811388905, 3771200494, 3072944601, 1683704, 2951446, 8981, 14945336
			},
			.prefetch0 = 48876,
			.prefetch1 = 49760,
			.ram = cmpaw_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4170352631, 1501770910, 2078074628, 849307083, 1248309649, 1030058477, 3431798647, 3692286661, 3375685840, 233092058, 2840711180, 1733256485, 2811388905, 3771200494, 3072944601, 1683704, 2951432, 8981, 3920273036
			},
			.prefetch0 = 26282,
			.prefetch1 = 17428,
			.ram = cmpaw_final_ram_4,
			.ram_len = 28,
		},
		.transactions = cmpaw_transactions_4,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "005 CMPA.w -(A4), A0 b0e4",
		.initial = {
			.regs = {
				3592864356, 1152312747, 3004800488, 2236201, 3815875176, 1304235954, 2427521628, 112890572, 2116377203, 4005350223, 3701544049, 3983167409, 1290966712, 4195904647, 1230800638, 14787274, 4120544, 34574, 4972428
			},
			.prefetch0 = 45284,
			.prefetch1 = 12187,
			.ram = cmpaw_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3592864356, 1152312747, 3004800488, 2236201, 3815875176, 1304235954, 2427521628, 112890572, 2116377203, 4005350223, 3701544049, 3983167409, 1290966710, 4195904647, 1230800638, 14787274, 4120544, 34560, 4972430
			},
			.prefetch0 = 12187,
			.prefetch1 = 31098,
			.ram = cmpaw_final_ram_5,
			.ram_len = 8,
		},
		.transactions = cmpaw_transactions_5,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "006 CMPA.w (d8, A5, Xn), A1 b2f5",
		.initial = {
			.regs = {
				2806065767, 1621200188, 3390391332, 3851597201, 3850320388, 3481638015, 2777877075, 2897054073, 744444877, 3382940068, 2485371260, 3258245814, 531417235, 3105772008, 2713940611, 8251678, 11730562, 1811, 12496288
			},
			.prefetch0 = 45813,
			.prefetch1 = 37259,
			.ram = cmpaw_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2806065767, 1621200188, 3390391332, 3851597201, 3850320388, 3481638015, 2777877075, 2897054073, 744444877, 3382940068, 2485371260, 3258245814, 531417235, 3105772008, 2713940611, 8251678, 11730548, 10003, 998554710
			},
			.prefetch0 = 60894,
			.prefetch1 = 4796,
			.ram = cmpaw_final_ram_6,
			.ram_len = 28,
		},
		.transactions = cmpaw_transactions_6,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "007 CMPA.w (A1), A2 b4d1",
		.initial = {
			.regs = {
				3019011939, 112096934, 3688264367, 1781109642, 1608129753, 471244789, 2890988996, 1448689047, 1143386962, 1896754285, 1897691868, 3203177719, 2970164300, 489253452, 745969794, 3676712, 7943134, 34577, 13543126
			},
			.prefetch0 = 46289,
			.prefetch1 = 3677,
			.ram = cmpaw_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3019011939, 112096934, 3688264367, 1781109642, 1608129753, 471244789, 2890988996, 1448689047, 1143386962, 1896754285, 1897691868, 3203177719, 2970164300, 489253452, 745969794, 3676712, 7943120, 10001, 889602156
			},
			.prefetch0 = 5744,
			.prefetch1 = 17121,
			.ram = cmpaw_final_ram_7,
			.ram_len = 26,
		},
		.transactions = cmpaw_transactions_7,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "008 CMPA.w (d8, A7, Xn), A4 b8f7",
		.initial = {
			.regs = {
				2831425493, 3766287323, 1661932059, 851408265, 2171977227, 3210143544, 1828306772, 3685706586, 2310059833, 843443897, 2515605678, 2964922066, 1698019211, 2596843630, 1957322189, 3887848, 10057584, 1539, 2782506
			},
			.prefetch0 = 47351,
			.prefetch1 = 47103,
			.ram = cmpaw_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2831425493, 3766287323, 1661932059, 851408265, 2171977227, 3210143544, 1828306772, 3685706586, 2310059833, 843443897, 2515605678, 2964922066, 1698019211, 2596843630, 1957322189, 3887848, 10057570, 9731, 2096416140
			},
			.prefetch0 = 30445,
			.prefetch1 = 20040,
			.ram = cmpaw_final_ram_8,
			.ram_len = 28,
		},
		.transactions = cmpaw_transactions_8,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "009 CMPA.w -(A3), A6 bce3",
		.initial = {
			.regs = {
				2645123083, 2050827130, 3717196506, 2220083538, 2199377945, 3428306854, 2005649435, 992573612, 433531077, 1510171188, 817083526, 268570122, 2316681919, 209258899, 3583342226, 6359552, 5294916, 8454, 1433800
			},
			.prefetch0 = 48355,
			.prefetch1 = 46126,
			.ram = cmpaw_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2645123083, 2050827130, 3717196506, 2220083538, 2199377945, 3428306854, 2005649435, 992573612, 433531077, 1510171188, 817083526, 268570120, 2316681919, 209258899, 3583342226, 6359552, 5294916, 8457, 1433802
			},
			.prefetch0 = 46126,
			.prefetch1 = 47220,
			.ram = cmpaw_final_ram_9,
			.ram_len = 8,
		},
		.transactions = cmpaw_transactions_9,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "010 CMPA.w D3, A2 b4c3",
		.initial = {
			.regs = {
				2748707515, 4064859286, 1118079529, 247676565, 2753243029, 51283515, 3420015662, 1705413956, 1476117015, 2734146720, 3628118150, 1594158215, 3613524320, 2504029744, 2160856349, 6084856, 14626964, 9216, 2816438
			},
			.prefetch0 = 46275,
			.prefetch1 = 36693,
			.ram = cmpaw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2748707515, 4064859286, 1118079529, 247676565, 2753243029, 51283515, 3420015662, 1705413956, 1476117015, 2734146720, 3628118150, 1594158215, 3613524320, 2504029744, 2160856349, 6084856, 14626964, 9224, 2816440
			},
			.prefetch0 = 36693,
			.prefetch1 = 5867,
			.ram = cmpaw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = cmpaw_transactions_10,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "011 CMPA.w (d16, A1), A7 bee9",
		.initial = {
			.regs = {
				2742151935, 769077374, 3569944423, 2751775574, 3040812512, 2074942078, 1266864928, 476438655, 981298017, 2329801095, 37859426, 862627573, 1109042816, 3040153809, 21680007, 1017026, 5052362, 41748, 15339600
			},
			.prefetch0 = 48873,
			.prefetch1 = 33989,
			.ram = cmpaw_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2742151935, 769077374, 3569944423, 2751775574, 3040812512, 2074942078, 1266864928, 476438655, 981298017, 2329801095, 37859426, 862627573, 1109042816, 3040153809, 21680007, 1017026, 5052362, 41745, 15339604
			},
			.prefetch0 = 4729,
			.prefetch1 = 41159,
			.ram = cmpaw_final_ram_11,
			.ram_len = 10,
		},
		.transactions = cmpaw_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 CMPA.w D3, A6 bcc3",
		.initial = {
			.regs = {
				2585649026, 1033794556, 2359428381, 1631018618, 553798485, 2625499565, 3418648616, 3909030274, 3978363710, 3867558803, 3268810251, 3945538451, 1914366567, 3461593900, 1114304878, 3223382, 15408820, 33298, 5873304
			},
			.prefetch0 = 48323,
			.prefetch1 = 4457,
			.ram = cmpaw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2585649026, 1033794556, 2359428381, 1631018618, 553798485, 2625499565, 3418648616, 3909030274, 3978363710, 3867558803, 3268810251, 3945538451, 1914366567, 3461593900, 1114304878, 3223382, 15408820, 33296, 5873306
			},
			.prefetch0 = 4457,
			.prefetch1 = 22057,
			.ram = cmpaw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = cmpaw_transactions_12,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "013 CMPA.w (A3)+, A1 b2db",
		.initial = {
			.regs = {
				377303994, 115400440, 219260110, 2199638729, 1517985877, 531323214, 3306711099, 2935972815, 3300250917, 3844402572, 548564669, 2686858457, 2144328296, 2141044640, 708136109, 14548892, 14236526, 1801, 10767162
			},
			.prefetch0 = 45787,
			.prefetch1 = 9790,
			.ram = cmpaw_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				377303994, 115400440, 219260110, 2199638729, 1517985877, 531323214, 3306711099, 2935972815, 3300250917, 3844402572, 548564669, 2686858459, 2144328296, 2141044640, 708136109, 14548892, 14236512, 9993, 1006812908
			},
			.prefetch0 = 22878,
			.prefetch1 = 57383,
			.ram = cmpaw_final_ram_13,
			.ram_len = 26,
		},
		.transactions = cmpaw_transactions_13,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "014 CMPA.w (A1), A3 b6d1",
		.initial = {
			.regs = {
				1273251437, 299874203, 3806639794, 2669976104, 3964832160, 597882773, 3233435740, 1255650578, 2302636394, 756216786, 4173364321, 1484917904, 4042648005, 3603439889, 3887093500, 15020768, 7911748, 32772, 291822
			},
			.prefetch0 = 46801,
			.prefetch1 = 62870,
			.ram = cmpaw_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1273251437, 299874203, 3806639794, 2669976104, 3964832160, 597882773, 3233435740, 1255650578, 2302636394, 756216786, 4173364321, 1484917904, 4042648005, 3603439889, 3887093500, 15020768, 7911748, 32768, 291824
			},
			.prefetch0 = 62870,
			.prefetch1 = 40905,
			.ram = cmpaw_final_ram_14,
			.ram_len = 8,
		},
		.transactions = cmpaw_transactions_14,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "015 CMPA.w (d8, A2, Xn), A6 bcf2",
		.initial = {
			.regs = {
				2862496487, 1976361043, 2521127344, 43825391, 1339277059, 1286181911, 2878324152, 2826880148, 1448440070, 3335279274, 1513141348, 1503694932, 1200539508, 3321036048, 717740903, 7559428, 11432850, 8713, 9133770
			},
			.prefetch0 = 48370,
			.prefetch1 = 42598,
			.ram = cmpaw_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2862496487, 1976361043, 2521127344, 43825391, 1339277059, 1286181911, 2878324152, 2826880148, 1448440070, 3335279274, 1513141348, 1503694932, 1200539508, 3321036048, 717740903, 7559428, 11432850, 8704, 9133774
			},
			.prefetch0 = 5558,
			.prefetch1 = 48142,
			.ram = cmpaw_final_ram_15,
			.ram_len = 10,
		},
		.transactions = cmpaw_transactions_15,
		.transactions_len = 5,
		.lenght = 16,
	},
};

#endif /* RBT_CMPAW_H */