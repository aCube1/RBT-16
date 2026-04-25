#ifndef RBT_NEGXL_H
#define RBT_NEGXL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte negxl_initial_ram_0[] = {
		{ .addr = 0x4a7a02, .byte = 0x40 },
		{ .addr = 0x4a7a03, .byte = 0x9e },
		{ .addr = 0x4a7a04, .byte = 0xba },
		{ .addr = 0x4a7a05, .byte = 0x84 },
		{ .addr = 0xb99c78, .byte = 0x1e },
		{ .addr = 0xb99c79, .byte = 0x36 },
		{ .addr = 0xb99c7a, .byte = 0x1d },
		{ .addr = 0xb99c7b, .byte = 0xfa },
		{ .addr = 0x4a7a06, .byte = 0x95 },
		{ .addr = 0x4a7a07, .byte = 0xd7 }
};

static const SST_RamByte negxl_final_ram_0[] = {
		{ .addr = 0x4a7a02, .byte = 0x40 },
		{ .addr = 0x4a7a03, .byte = 0x9e },
		{ .addr = 0x4a7a04, .byte = 0xba },
		{ .addr = 0x4a7a05, .byte = 0x84 },
		{ .addr = 0xb99c78, .byte = 0xe1 },
		{ .addr = 0xb99c79, .byte = 0xc9 },
		{ .addr = 0xb99c7a, .byte = 0xe2 },
		{ .addr = 0xb99c7b, .byte = 0x05 },
		{ .addr = 0x4a7a06, .byte = 0x95 },
		{ .addr = 0x4a7a07, .byte = 0xd7 }
};

static const SST_Transaction negxl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12164216, .data = 7734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12164218, .data = 7674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4880902, .data = 38359, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12164218, .data = 57861, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12164216, .data = 57801, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_1[] = {
		{ .addr = 0x51867e, .byte = 0x40 },
		{ .addr = 0x51867f, .byte = 0x81 },
		{ .addr = 0x518680, .byte = 0x81 },
		{ .addr = 0x518681, .byte = 0x42 },
		{ .addr = 0x518682, .byte = 0x26 },
		{ .addr = 0x518683, .byte = 0x74 }
};

static const SST_RamByte negxl_final_ram_1[] = {
		{ .addr = 0x51867e, .byte = 0x40 },
		{ .addr = 0x51867f, .byte = 0x81 },
		{ .addr = 0x518680, .byte = 0x81 },
		{ .addr = 0x518681, .byte = 0x42 },
		{ .addr = 0x518682, .byte = 0x26 },
		{ .addr = 0x518683, .byte = 0x74 }
};

static const SST_Transaction negxl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5342850, .data = 9844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negxl_initial_ram_2[] = {
		{ .addr = 0x246762, .byte = 0x40 },
		{ .addr = 0x246763, .byte = 0xaf },
		{ .addr = 0x246764, .byte = 0x5e },
		{ .addr = 0x246765, .byte = 0x8e },
		{ .addr = 0x246766, .byte = 0x0a },
		{ .addr = 0x246767, .byte = 0x70 },
		{ .addr = 0x5b184a, .byte = 0xab },
		{ .addr = 0x5b184b, .byte = 0xed },
		{ .addr = 0x5b184c, .byte = 0x92 },
		{ .addr = 0x5b184d, .byte = 0xdc },
		{ .addr = 0x246768, .byte = 0x1d },
		{ .addr = 0x246769, .byte = 0x0f }
};

static const SST_RamByte negxl_final_ram_2[] = {
		{ .addr = 0x246762, .byte = 0x40 },
		{ .addr = 0x246763, .byte = 0xaf },
		{ .addr = 0x246764, .byte = 0x5e },
		{ .addr = 0x246765, .byte = 0x8e },
		{ .addr = 0x246766, .byte = 0x0a },
		{ .addr = 0x246767, .byte = 0x70 },
		{ .addr = 0x5b184a, .byte = 0x54 },
		{ .addr = 0x5b184b, .byte = 0x12 },
		{ .addr = 0x5b184c, .byte = 0x6d },
		{ .addr = 0x5b184d, .byte = 0x23 },
		{ .addr = 0x246768, .byte = 0x1d },
		{ .addr = 0x246769, .byte = 0x0f }
};

static const SST_Transaction negxl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2385766, .data = 2672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5969994, .data = 44013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5969996, .data = 37596, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2385768, .data = 7439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5969996, .data = 27939, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5969994, .data = 21522, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_3[] = {
		{ .addr = 0xc17ad4, .byte = 0x40 },
		{ .addr = 0xc17ad5, .byte = 0x92 },
		{ .addr = 0xc17ad6, .byte = 0x13 },
		{ .addr = 0xc17ad7, .byte = 0x9e },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0xb6 },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x3ab64c, .byte = 0xd9 },
		{ .addr = 0x3ab64d, .byte = 0xb3 },
		{ .addr = 0x3ab64e, .byte = 0xd9 },
		{ .addr = 0x3ab64f, .byte = 0x70 }
};

static const SST_RamByte negxl_final_ram_3[] = {
		{ .addr = 0xc17ad4, .byte = 0x40 },
		{ .addr = 0xc17ad5, .byte = 0x92 },
		{ .addr = 0xc17ad6, .byte = 0x13 },
		{ .addr = 0xc17ad7, .byte = 0x9e },
		{ .addr = 0x2e5fe0, .byte = 0x7a },
		{ .addr = 0x2e5fe1, .byte = 0xd6 },
		{ .addr = 0x2e5fdc, .byte = 0x86 },
		{ .addr = 0x2e5fdd, .byte = 0x1b },
		{ .addr = 0x2e5fde, .byte = 0x00 },
		{ .addr = 0x2e5fdf, .byte = 0xc1 },
		{ .addr = 0x2e5fda, .byte = 0x40 },
		{ .addr = 0x2e5fdb, .byte = 0x92 },
		{ .addr = 0x2e5fd8, .byte = 0xee },
		{ .addr = 0x2e5fd9, .byte = 0xed },
		{ .addr = 0x2e5fd4, .byte = 0x40 },
		{ .addr = 0x2e5fd5, .byte = 0x91 },
		{ .addr = 0x2e5fd6, .byte = 0x63 },
		{ .addr = 0x2e5fd7, .byte = 0xb4 },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0xb6 },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x3ab64c, .byte = 0xd9 },
		{ .addr = 0x3ab64d, .byte = 0xb3 },
		{ .addr = 0x3ab64e, .byte = 0xd9 },
		{ .addr = 0x3ab64f, .byte = 0x70 }
};

static const SST_Transaction negxl_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11857644, .data = 60432, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3039200, .data = 31446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3039196, .data = 34331, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3039198, .data = 193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3039194, .data = 16530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3039192, .data = 61165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3039188, .data = 16529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3039190, .data = 25524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3847756, .data = 55731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3847758, .data = 55664, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_4[] = {
		{ .addr = 0x334e1a, .byte = 0x40 },
		{ .addr = 0x334e1b, .byte = 0xa3 },
		{ .addr = 0x334e1c, .byte = 0x99 },
		{ .addr = 0x334e1d, .byte = 0xb4 },
		{ .addr = 0x72abe2, .byte = 0xdb },
		{ .addr = 0x72abe3, .byte = 0x5a },
		{ .addr = 0x72abe4, .byte = 0xdf },
		{ .addr = 0x72abe5, .byte = 0xba },
		{ .addr = 0x334e1e, .byte = 0x59 },
		{ .addr = 0x334e1f, .byte = 0xd3 }
};

static const SST_RamByte negxl_final_ram_4[] = {
		{ .addr = 0x334e1a, .byte = 0x40 },
		{ .addr = 0x334e1b, .byte = 0xa3 },
		{ .addr = 0x334e1c, .byte = 0x99 },
		{ .addr = 0x334e1d, .byte = 0xb4 },
		{ .addr = 0x72abe2, .byte = 0x24 },
		{ .addr = 0x72abe3, .byte = 0xa5 },
		{ .addr = 0x72abe4, .byte = 0x20 },
		{ .addr = 0x72abe5, .byte = 0x46 },
		{ .addr = 0x334e1e, .byte = 0x59 },
		{ .addr = 0x334e1f, .byte = 0xd3 }
};

static const SST_Transaction negxl_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7515106, .data = 56154, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7515108, .data = 57274, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3362334, .data = 22995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7515108, .data = 8262, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7515106, .data = 9381, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_5[] = {
		{ .addr = 0x3c480c, .byte = 0x40 },
		{ .addr = 0x3c480d, .byte = 0xa1 },
		{ .addr = 0x3c480e, .byte = 0x77 },
		{ .addr = 0x3c480f, .byte = 0xde },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0xfb },
		{ .addr = 0x00000f, .byte = 0xe6 },
		{ .addr = 0xdefbe6, .byte = 0x5f },
		{ .addr = 0xdefbe7, .byte = 0x4c },
		{ .addr = 0xdefbe8, .byte = 0x4d },
		{ .addr = 0xdefbe9, .byte = 0xc5 }
};

static const SST_RamByte negxl_final_ram_5[] = {
		{ .addr = 0x3c480c, .byte = 0x40 },
		{ .addr = 0x3c480d, .byte = 0xa1 },
		{ .addr = 0x3c480e, .byte = 0x77 },
		{ .addr = 0x3c480f, .byte = 0xde },
		{ .addr = 0x3979b2, .byte = 0x48 },
		{ .addr = 0x3979b3, .byte = 0x0e },
		{ .addr = 0x3979ae, .byte = 0xa6 },
		{ .addr = 0x3979af, .byte = 0x06 },
		{ .addr = 0x3979b0, .byte = 0x00 },
		{ .addr = 0x3979b1, .byte = 0x3c },
		{ .addr = 0x3979ac, .byte = 0x40 },
		{ .addr = 0x3979ad, .byte = 0xa1 },
		{ .addr = 0x3979aa, .byte = 0xad },
		{ .addr = 0x3979ab, .byte = 0x2d },
		{ .addr = 0x3979a6, .byte = 0x40 },
		{ .addr = 0x3979a7, .byte = 0xb5 },
		{ .addr = 0x3979a8, .byte = 0x02 },
		{ .addr = 0x3979a9, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0xfb },
		{ .addr = 0x00000f, .byte = 0xe6 },
		{ .addr = 0xdefbe6, .byte = 0x5f },
		{ .addr = 0xdefbe7, .byte = 0x4c },
		{ .addr = 0xdefbe8, .byte = 0x4d },
		{ .addr = 0xdefbe9, .byte = 0xc5 }
};

static const SST_Transaction negxl_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4369708, .data = 30127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3766706, .data = 18446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3766702, .data = 42502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3766704, .data = 60, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3766700, .data = 16545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3766698, .data = 44333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3766694, .data = 16565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3766696, .data = 578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 64486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14613478, .data = 24396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14613480, .data = 19909, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_6[] = {
		{ .addr = 0xc6a9a6, .byte = 0x40 },
		{ .addr = 0xc6a9a7, .byte = 0x82 },
		{ .addr = 0xc6a9a8, .byte = 0x40 },
		{ .addr = 0xc6a9a9, .byte = 0xc1 },
		{ .addr = 0xc6a9aa, .byte = 0xc4 },
		{ .addr = 0xc6a9ab, .byte = 0xc2 }
};

static const SST_RamByte negxl_final_ram_6[] = {
		{ .addr = 0xc6a9a6, .byte = 0x40 },
		{ .addr = 0xc6a9a7, .byte = 0x82 },
		{ .addr = 0xc6a9a8, .byte = 0x40 },
		{ .addr = 0xc6a9a9, .byte = 0xc1 },
		{ .addr = 0xc6a9aa, .byte = 0xc4 },
		{ .addr = 0xc6a9ab, .byte = 0xc2 }
};

static const SST_Transaction negxl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13019562, .data = 50370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negxl_initial_ram_7[] = {
		{ .addr = 0xfe59c4, .byte = 0x40 },
		{ .addr = 0xfe59c5, .byte = 0xa4 },
		{ .addr = 0xfe59c6, .byte = 0xa3 },
		{ .addr = 0xfe59c7, .byte = 0x04 },
		{ .addr = 0x00000c, .byte = 0x16 },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0x84 },
		{ .addr = 0x00000f, .byte = 0x4a },
		{ .addr = 0xe4844a, .byte = 0xfc },
		{ .addr = 0xe4844b, .byte = 0x42 },
		{ .addr = 0xe4844c, .byte = 0xbc },
		{ .addr = 0xe4844d, .byte = 0x68 }
};

static const SST_RamByte negxl_final_ram_7[] = {
		{ .addr = 0xfe59c4, .byte = 0x40 },
		{ .addr = 0xfe59c5, .byte = 0xa4 },
		{ .addr = 0xfe59c6, .byte = 0xa3 },
		{ .addr = 0xfe59c7, .byte = 0x04 },
		{ .addr = 0x640932, .byte = 0x59 },
		{ .addr = 0x640933, .byte = 0xc6 },
		{ .addr = 0x64092e, .byte = 0xa1 },
		{ .addr = 0x64092f, .byte = 0x09 },
		{ .addr = 0x640930, .byte = 0x00 },
		{ .addr = 0x640931, .byte = 0xfe },
		{ .addr = 0x64092c, .byte = 0x40 },
		{ .addr = 0x64092d, .byte = 0xa4 },
		{ .addr = 0x64092a, .byte = 0x95 },
		{ .addr = 0x64092b, .byte = 0x13 },
		{ .addr = 0x640926, .byte = 0x40 },
		{ .addr = 0x640927, .byte = 0xb5 },
		{ .addr = 0x640928, .byte = 0x82 },
		{ .addr = 0x640929, .byte = 0x91 },
		{ .addr = 0x00000c, .byte = 0x16 },
		{ .addr = 0x00000d, .byte = 0xe4 },
		{ .addr = 0x00000e, .byte = 0x84 },
		{ .addr = 0x00000f, .byte = 0x4a },
		{ .addr = 0xe4844a, .byte = 0xfc },
		{ .addr = 0xe4844b, .byte = 0x42 },
		{ .addr = 0xe4844c, .byte = 0xbc },
		{ .addr = 0xe4844d, .byte = 0x68 }
};

static const SST_Transaction negxl_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9540882, .data = 9819, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6555954, .data = 22982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6555950, .data = 41225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6555952, .data = 254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6555948, .data = 16548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6555946, .data = 38163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6555942, .data = 16565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6555944, .data = 33425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14976074, .data = 64578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14976076, .data = 48232, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_8[] = {
		{ .addr = 0xd56e5e, .byte = 0x40 },
		{ .addr = 0xd56e5f, .byte = 0x9b },
		{ .addr = 0xd56e60, .byte = 0x4e },
		{ .addr = 0xd56e61, .byte = 0x33 },
		{ .addr = 0x00000c, .byte = 0xe6 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x8b },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x6a8b52, .byte = 0xcc },
		{ .addr = 0x6a8b53, .byte = 0x1b },
		{ .addr = 0x6a8b54, .byte = 0x59 },
		{ .addr = 0x6a8b55, .byte = 0x78 }
};

static const SST_RamByte negxl_final_ram_8[] = {
		{ .addr = 0xd56e5e, .byte = 0x40 },
		{ .addr = 0xd56e5f, .byte = 0x9b },
		{ .addr = 0xd56e60, .byte = 0x4e },
		{ .addr = 0xd56e61, .byte = 0x33 },
		{ .addr = 0xc94db2, .byte = 0x6e },
		{ .addr = 0xc94db3, .byte = 0x60 },
		{ .addr = 0xc94dae, .byte = 0xa0 },
		{ .addr = 0xc94daf, .byte = 0x1b },
		{ .addr = 0xc94db0, .byte = 0x00 },
		{ .addr = 0xc94db1, .byte = 0xd5 },
		{ .addr = 0xc94dac, .byte = 0x40 },
		{ .addr = 0xc94dad, .byte = 0x9b },
		{ .addr = 0xc94daa, .byte = 0xc9 },
		{ .addr = 0xc94dab, .byte = 0x81 },
		{ .addr = 0xc94da6, .byte = 0x40 },
		{ .addr = 0xc94da7, .byte = 0x95 },
		{ .addr = 0xc94da8, .byte = 0xb6 },
		{ .addr = 0xc94da9, .byte = 0x4f },
		{ .addr = 0x00000c, .byte = 0xe6 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x8b },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x6a8b52, .byte = 0xcc },
		{ .addr = 0x6a8b53, .byte = 0x1b },
		{ .addr = 0x6a8b54, .byte = 0x59 },
		{ .addr = 0x6a8b55, .byte = 0x78 }
};

static const SST_Transaction negxl_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5228928, .data = 51381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13192626, .data = 28256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13192622, .data = 40987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13192624, .data = 213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13192620, .data = 16539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13192618, .data = 51585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13192614, .data = 16533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13192616, .data = 46671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 35666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6982482, .data = 52251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6982484, .data = 22904, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_9[] = {
		{ .addr = 0x813f3e, .byte = 0x40 },
		{ .addr = 0x813f3f, .byte = 0xb4 },
		{ .addr = 0x813f40, .byte = 0xce },
		{ .addr = 0x813f41, .byte = 0x3e },
		{ .addr = 0x813f42, .byte = 0x31 },
		{ .addr = 0x813f43, .byte = 0x3f },
		{ .addr = 0x237ff0, .byte = 0x13 },
		{ .addr = 0x237ff1, .byte = 0x83 },
		{ .addr = 0x237ff2, .byte = 0xe9 },
		{ .addr = 0x237ff3, .byte = 0xe8 },
		{ .addr = 0x813f44, .byte = 0x0b },
		{ .addr = 0x813f45, .byte = 0xf5 }
};

static const SST_RamByte negxl_final_ram_9[] = {
		{ .addr = 0x813f3e, .byte = 0x40 },
		{ .addr = 0x813f3f, .byte = 0xb4 },
		{ .addr = 0x813f40, .byte = 0xce },
		{ .addr = 0x813f41, .byte = 0x3e },
		{ .addr = 0x813f42, .byte = 0x31 },
		{ .addr = 0x813f43, .byte = 0x3f },
		{ .addr = 0x237ff0, .byte = 0xec },
		{ .addr = 0x237ff1, .byte = 0x7c },
		{ .addr = 0x237ff2, .byte = 0x16 },
		{ .addr = 0x237ff3, .byte = 0x18 },
		{ .addr = 0x813f44, .byte = 0x0b },
		{ .addr = 0x813f45, .byte = 0xf5 }
};

static const SST_Transaction negxl_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8470338, .data = 12607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2326512, .data = 4995, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2326514, .data = 59880, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8470340, .data = 3061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2326514, .data = 5656, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2326512, .data = 60540, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_10[] = {
		{ .addr = 0x163d3a, .byte = 0x40 },
		{ .addr = 0x163d3b, .byte = 0x9f },
		{ .addr = 0x163d3c, .byte = 0xbc },
		{ .addr = 0x163d3d, .byte = 0xd3 },
		{ .addr = 0xcbc69a, .byte = 0xa6 },
		{ .addr = 0xcbc69b, .byte = 0x04 },
		{ .addr = 0xcbc69c, .byte = 0xb6 },
		{ .addr = 0xcbc69d, .byte = 0x15 },
		{ .addr = 0x163d3e, .byte = 0xa4 },
		{ .addr = 0x163d3f, .byte = 0x6b }
};

static const SST_RamByte negxl_final_ram_10[] = {
		{ .addr = 0x163d3a, .byte = 0x40 },
		{ .addr = 0x163d3b, .byte = 0x9f },
		{ .addr = 0x163d3c, .byte = 0xbc },
		{ .addr = 0x163d3d, .byte = 0xd3 },
		{ .addr = 0xcbc69a, .byte = 0x59 },
		{ .addr = 0xcbc69b, .byte = 0xfb },
		{ .addr = 0xcbc69c, .byte = 0x49 },
		{ .addr = 0xcbc69d, .byte = 0xea },
		{ .addr = 0x163d3e, .byte = 0xa4 },
		{ .addr = 0x163d3f, .byte = 0x6b }
};

static const SST_Transaction negxl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13354650, .data = 42500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13354652, .data = 46613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1457470, .data = 42091, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13354652, .data = 18922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13354650, .data = 23035, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_11[] = {
		{ .addr = 0x237864, .byte = 0x40 },
		{ .addr = 0x237865, .byte = 0x87 },
		{ .addr = 0x237866, .byte = 0x30 },
		{ .addr = 0x237867, .byte = 0x0c },
		{ .addr = 0x237868, .byte = 0x7f },
		{ .addr = 0x237869, .byte = 0x36 }
};

static const SST_RamByte negxl_final_ram_11[] = {
		{ .addr = 0x237864, .byte = 0x40 },
		{ .addr = 0x237865, .byte = 0x87 },
		{ .addr = 0x237866, .byte = 0x30 },
		{ .addr = 0x237867, .byte = 0x0c },
		{ .addr = 0x237868, .byte = 0x7f },
		{ .addr = 0x237869, .byte = 0x36 }
};

static const SST_Transaction negxl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2324584, .data = 32566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negxl_initial_ram_12[] = {
		{ .addr = 0x9b4048, .byte = 0x40 },
		{ .addr = 0x9b4049, .byte = 0x95 },
		{ .addr = 0x9b404a, .byte = 0xe6 },
		{ .addr = 0x9b404b, .byte = 0xb3 },
		{ .addr = 0x00000c, .byte = 0xcb },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0xa1 },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0x6ca1f2, .byte = 0xa2 },
		{ .addr = 0x6ca1f3, .byte = 0x03 },
		{ .addr = 0x6ca1f4, .byte = 0xc3 },
		{ .addr = 0x6ca1f5, .byte = 0x4a }
};

static const SST_RamByte negxl_final_ram_12[] = {
		{ .addr = 0x9b4048, .byte = 0x40 },
		{ .addr = 0x9b4049, .byte = 0x95 },
		{ .addr = 0x9b404a, .byte = 0xe6 },
		{ .addr = 0x9b404b, .byte = 0xb3 },
		{ .addr = 0x4a41e4, .byte = 0x40 },
		{ .addr = 0x4a41e5, .byte = 0x4a },
		{ .addr = 0x4a41e0, .byte = 0x80 },
		{ .addr = 0x4a41e1, .byte = 0x17 },
		{ .addr = 0x4a41e2, .byte = 0x00 },
		{ .addr = 0x4a41e3, .byte = 0x9b },
		{ .addr = 0x4a41de, .byte = 0x40 },
		{ .addr = 0x4a41df, .byte = 0x95 },
		{ .addr = 0x4a41dc, .byte = 0xe8 },
		{ .addr = 0x4a41dd, .byte = 0x41 },
		{ .addr = 0x4a41d8, .byte = 0x40 },
		{ .addr = 0x4a41d9, .byte = 0x91 },
		{ .addr = 0x4a41da, .byte = 0x7c },
		{ .addr = 0x4a41db, .byte = 0x35 },
		{ .addr = 0x00000c, .byte = 0xcb },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0xa1 },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0x6ca1f2, .byte = 0xa2 },
		{ .addr = 0x6ca1f3, .byte = 0x03 },
		{ .addr = 0x6ca1f4, .byte = 0xc3 },
		{ .addr = 0x6ca1f5, .byte = 0x4a }
};

static const SST_Transaction negxl_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3532864, .data = 2285, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4866532, .data = 16458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4866528, .data = 32791, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4866530, .data = 155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4866526, .data = 16533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4866524, .data = 59457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4866520, .data = 16529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4866522, .data = 31797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7119346, .data = 41475, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7119348, .data = 49994, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_13[] = {
		{ .addr = 0x997c54, .byte = 0x40 },
		{ .addr = 0x997c55, .byte = 0x9c },
		{ .addr = 0x997c56, .byte = 0x90 },
		{ .addr = 0x997c57, .byte = 0xca },
		{ .addr = 0x00000c, .byte = 0x70 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x8a },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x0a8aca, .byte = 0x6a },
		{ .addr = 0x0a8acb, .byte = 0xb3 },
		{ .addr = 0x0a8acc, .byte = 0x8c },
		{ .addr = 0x0a8acd, .byte = 0x7d }
};

static const SST_RamByte negxl_final_ram_13[] = {
		{ .addr = 0x997c54, .byte = 0x40 },
		{ .addr = 0x997c55, .byte = 0x9c },
		{ .addr = 0x997c56, .byte = 0x90 },
		{ .addr = 0x997c57, .byte = 0xca },
		{ .addr = 0x3f0a70, .byte = 0x7c },
		{ .addr = 0x3f0a71, .byte = 0x56 },
		{ .addr = 0x3f0a6c, .byte = 0xa7 },
		{ .addr = 0x3f0a6d, .byte = 0x0b },
		{ .addr = 0x3f0a6e, .byte = 0x00 },
		{ .addr = 0x3f0a6f, .byte = 0x99 },
		{ .addr = 0x3f0a6a, .byte = 0x40 },
		{ .addr = 0x3f0a6b, .byte = 0x9c },
		{ .addr = 0x3f0a68, .byte = 0x96 },
		{ .addr = 0x3f0a69, .byte = 0x5d },
		{ .addr = 0x3f0a64, .byte = 0x40 },
		{ .addr = 0x3f0a65, .byte = 0x95 },
		{ .addr = 0x3f0a66, .byte = 0x96 },
		{ .addr = 0x3f0a67, .byte = 0x60 },
		{ .addr = 0x00000c, .byte = 0x70 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x8a },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x0a8aca, .byte = 0x6a },
		{ .addr = 0x0a8acb, .byte = 0xb3 },
		{ .addr = 0x0a8acc, .byte = 0x8c },
		{ .addr = 0x0a8acd, .byte = 0x7d }
};

static const SST_Transaction negxl_transactions_13[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329948, .data = 28163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4131440, .data = 31830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4131436, .data = 42763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4131438, .data = 153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4131434, .data = 16540, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4131432, .data = 38493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4131428, .data = 16533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4131430, .data = 38496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 28682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 35530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 690890, .data = 27315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 690892, .data = 35965, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_14[] = {
		{ .addr = 0x91d9ce, .byte = 0x40 },
		{ .addr = 0x91d9cf, .byte = 0xb1 },
		{ .addr = 0x91d9d0, .byte = 0x99 },
		{ .addr = 0x91d9d1, .byte = 0x27 },
		{ .addr = 0x91d9d2, .byte = 0xca },
		{ .addr = 0x91d9d3, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0xfc },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xfc1b54, .byte = 0x09 },
		{ .addr = 0xfc1b55, .byte = 0x68 },
		{ .addr = 0xfc1b56, .byte = 0xa6 },
		{ .addr = 0xfc1b57, .byte = 0x7c }
};

static const SST_RamByte negxl_final_ram_14[] = {
		{ .addr = 0x91d9ce, .byte = 0x40 },
		{ .addr = 0x91d9cf, .byte = 0xb1 },
		{ .addr = 0x91d9d0, .byte = 0x99 },
		{ .addr = 0x91d9d1, .byte = 0x27 },
		{ .addr = 0x91d9d2, .byte = 0xca },
		{ .addr = 0x91d9d3, .byte = 0x09 },
		{ .addr = 0xc7787a, .byte = 0xd9 },
		{ .addr = 0xc7787b, .byte = 0xd0 },
		{ .addr = 0xc77876, .byte = 0x06 },
		{ .addr = 0xc77877, .byte = 0x1c },
		{ .addr = 0xc77878, .byte = 0x00 },
		{ .addr = 0xc77879, .byte = 0x91 },
		{ .addr = 0xc77874, .byte = 0x40 },
		{ .addr = 0xc77875, .byte = 0xb1 },
		{ .addr = 0xc77872, .byte = 0xe1 },
		{ .addr = 0xc77873, .byte = 0xa5 },
		{ .addr = 0xc7786e, .byte = 0x40 },
		{ .addr = 0xc7786f, .byte = 0xb1 },
		{ .addr = 0xc77870, .byte = 0x71 },
		{ .addr = 0xc77871, .byte = 0x91 },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0xfc },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xfc1b54, .byte = 0x09 },
		{ .addr = 0xfc1b55, .byte = 0x68 },
		{ .addr = 0xfc1b56, .byte = 0xa6 },
		{ .addr = 0xfc1b57, .byte = 0x7c }
};

static const SST_Transaction negxl_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9558482, .data = 51721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9560484, .data = 23078, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13072506, .data = 55760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13072502, .data = 1564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13072504, .data = 145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13072500, .data = 16561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13072498, .data = 57765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13072494, .data = 16561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13072496, .data = 29073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16522068, .data = 2408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16522070, .data = 42620, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_15[] = {
		{ .addr = 0x175d64, .byte = 0x40 },
		{ .addr = 0x175d65, .byte = 0xb6 },
		{ .addr = 0x175d66, .byte = 0xc4 },
		{ .addr = 0x175d67, .byte = 0x87 },
		{ .addr = 0x175d68, .byte = 0xde },
		{ .addr = 0x175d69, .byte = 0xaf },
		{ .addr = 0x21d83e, .byte = 0x46 },
		{ .addr = 0x21d83f, .byte = 0xb5 },
		{ .addr = 0x21d840, .byte = 0x39 },
		{ .addr = 0x21d841, .byte = 0x5a },
		{ .addr = 0x175d6a, .byte = 0xe1 },
		{ .addr = 0x175d6b, .byte = 0xf6 }
};

static const SST_RamByte negxl_final_ram_15[] = {
		{ .addr = 0x175d64, .byte = 0x40 },
		{ .addr = 0x175d65, .byte = 0xb6 },
		{ .addr = 0x175d66, .byte = 0xc4 },
		{ .addr = 0x175d67, .byte = 0x87 },
		{ .addr = 0x175d68, .byte = 0xde },
		{ .addr = 0x175d69, .byte = 0xaf },
		{ .addr = 0x21d83e, .byte = 0xb9 },
		{ .addr = 0x21d83f, .byte = 0x4a },
		{ .addr = 0x21d840, .byte = 0xc6 },
		{ .addr = 0x21d841, .byte = 0xa6 },
		{ .addr = 0x175d6a, .byte = 0xe1 },
		{ .addr = 0x175d6b, .byte = 0xf6 }
};

static const SST_Transaction negxl_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1531240, .data = 57007, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2218046, .data = 18101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2218048, .data = 14682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1531242, .data = 57846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2218048, .data = 50854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2218046, .data = 47434, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NEGXL_TEST_COUNT = 16;
static const SST_TestCase negxl[] = {
	{
		.name = "000 NEGX.l (A6)+ 409e",
		.initial = {
			.regs = {
				4240857964, 1679385175, 3055850285, 2316363324, 2224790394, 85715596, 1509275769, 3288733101, 1789172564, 2353643390, 2311147913, 3267304612, 3706756269, 3816240940, 2746850424, 4986334, 7780692, 8222, 4880902
			},
			.prefetch0 = 16542,
			.prefetch1 = 47748,
			.ram = negxl_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4240857964, 1679385175, 3055850285, 2316363324, 2224790394, 85715596, 1509275769, 3288733101, 1789172564, 2353643390, 2311147913, 3267304612, 3706756269, 3816240940, 2746850428, 4986334, 7780692, 8217, 4880904
			},
			.prefetch0 = 47748,
			.prefetch1 = 38359,
			.ram = negxl_final_ram_0,
			.ram_len = 10,
		},
		.transactions = negxl_transactions_0,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "001 NEGX.l D1 4081",
		.initial = {
			.regs = {
				2401146276, 3763158107, 812741715, 2025112109, 3380818685, 4147293551, 3884096468, 3486377827, 2812295853, 3891981073, 2570102204, 3051134086, 2140421301, 2207194118, 932017699, 12865454, 7246392, 41497, 5342850
			},
			.prefetch0 = 16513,
			.prefetch1 = 33090,
			.ram = negxl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2401146276, 531809188, 812741715, 2025112109, 3380818685, 4147293551, 3884096468, 3486377827, 2812295853, 3891981073, 2570102204, 3051134086, 2140421301, 2207194118, 932017699, 12865454, 7246392, 41489, 5342852
			},
			.prefetch0 = 33090,
			.prefetch1 = 9844,
			.ram = negxl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = negxl_transactions_1,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "002 NEGX.l (d16, A7) 40af",
		.initial = {
			.regs = {
				683925772, 3244640216, 1760153204, 1926778702, 3705856319, 3634767302, 894991788, 344053431, 12735352, 1376838711, 2725203668, 1948621259, 510279146, 2401899929, 4021397454, 5659552, 5945788, 8479, 2385766
			},
			.prefetch0 = 16559,
			.prefetch1 = 24206,
			.ram = negxl_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				683925772, 3244640216, 1760153204, 1926778702, 3705856319, 3634767302, 894991788, 344053431, 12735352, 1376838711, 2725203668, 1948621259, 510279146, 2401899929, 4021397454, 5659552, 5945788, 8465, 2385770
			},
			.prefetch0 = 2672,
			.prefetch1 = 7439,
			.ram = negxl_final_ram_2,
			.ram_len = 12,
		},
		.transactions = negxl_transactions_2,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "003 NEGX.l (A2) 4092",
		.initial = {
			.regs = {
				1744222925, 4221462280, 3680140541, 3381827221, 3651840396, 1029208694, 1997757421, 594095698, 1086714290, 3102566386, 1672802029, 4247472702, 2941617433, 3948748587, 1450617187, 16442748, 3039202, 34331, 12679896
			},
			.prefetch0 = 16530,
			.prefetch1 = 5022,
			.ram = negxl_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1744222925, 4221462280, 3680140541, 3381827221, 3651840396, 1029208694, 1997757421, 594095698, 1086714290, 3102566386, 1672802029, 4247472702, 2941617433, 3948748587, 1450617187, 16442748, 3039188, 9755, 205174352
			},
			.prefetch0 = 55731,
			.prefetch1 = 55664,
			.ram = negxl_final_ram_3,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 NEGX.l -(A3) 40a3",
		.initial = {
			.regs = {
				3955561414, 3022797716, 4276063961, 2045598949, 540533894, 600963698, 1867820980, 1487196890, 3282817148, 1496107177, 144629080, 1081256934, 1851683376, 3743560252, 2175274070, 10150008, 10964072, 33803, 3362334
			},
			.prefetch0 = 16547,
			.prefetch1 = 39348,
			.ram = negxl_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3955561414, 3022797716, 4276063961, 2045598949, 540533894, 600963698, 1867820980, 1487196890, 3282817148, 1496107177, 144629080, 1081256930, 1851683376, 3743560252, 2175274070, 10150008, 10964072, 33809, 3362336
			},
			.prefetch0 = 39348,
			.prefetch1 = 22995,
			.ram = negxl_final_ram_4,
			.ram_len = 10,
		},
		.transactions = negxl_transactions_4,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "005 NEGX.l -(A1) 40a1",
		.initial = {
			.regs = {
				2459234200, 3363091061, 44858593, 3274499576, 898325000, 277474949, 1736161134, 4213650050, 3491678883, 37924145, 559835483, 269576270, 1067041564, 3345260232, 1508303951, 10079850, 3766708, 42502, 3950608
			},
			.prefetch0 = 16545,
			.prefetch1 = 30686,
			.ram = negxl_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2459234200, 3363091061, 44858593, 3274499576, 898325000, 277474949, 1736161134, 4213650050, 3491678883, 37924141, 559835483, 269576270, 1067041564, 3345260232, 1508303951, 10079850, 3766694, 9734, 870251498
			},
			.prefetch0 = 24396,
			.prefetch1 = 19909,
			.ram = negxl_final_ram_5,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_5,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "006 NEGX.l D2 4082",
		.initial = {
			.regs = {
				3866616100, 143277434, 693118775, 2678124800, 596297783, 4220458606, 2884137436, 248621653, 3781938168, 772517421, 1124351181, 3091495868, 3537337292, 576246051, 4095424338, 3764710, 9473626, 34327, 13019562
			},
			.prefetch0 = 16514,
			.prefetch1 = 16577,
			.ram = negxl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3866616100, 143277434, 3601848520, 2678124800, 596297783, 4220458606, 2884137436, 248621653, 3781938168, 772517421, 1124351181, 3091495868, 3537337292, 576246051, 4095424338, 3764710, 9473626, 34329, 13019564
			},
			.prefetch0 = 16577,
			.prefetch1 = 50370,
			.ram = negxl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = negxl_transactions_6,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "007 NEGX.l -(A4) 40a4",
		.initial = {
			.regs = {
				1411110816, 518874342, 3193094919, 798092552, 1133481567, 337404019, 2426796084, 867007234, 792198939, 1085251268, 3431025606, 872979044, 2190578967, 2698547678, 503793936, 8005370, 6555956, 41225, 16669128
			},
			.prefetch0 = 16548,
			.prefetch1 = 41732,
			.ram = negxl_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1411110816, 518874342, 3193094919, 798092552, 1133481567, 337404019, 2426796084, 867007234, 792198939, 1085251268, 3431025606, 872979044, 2190578963, 2698547678, 503793936, 8005370, 6555942, 8457, 384074830
			},
			.prefetch0 = 64578,
			.prefetch1 = 48232,
			.ram = negxl_final_ram_7,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_7,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "008 NEGX.l (A3)+ 409b",
		.initial = {
			.regs = {
				1950837524, 4098147983, 3208209198, 3195887593, 2704406126, 2372741864, 3478387792, 103469058, 2338522953, 2920586473, 2918666479, 3058682241, 3738552614, 1695992481, 225351272, 4095744, 13192628, 40987, 13987426
			},
			.prefetch0 = 16539,
			.prefetch1 = 20019,
			.ram = negxl_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1950837524, 4098147983, 3208209198, 3195887593, 2704406126, 2372741864, 3478387792, 103469058, 2338522953, 2920586473, 2918666479, 3058682241, 3738552614, 1695992481, 225351272, 4095744, 13192614, 8219, 3865742166
			},
			.prefetch0 = 52251,
			.prefetch1 = 22904,
			.ram = negxl_final_ram_8,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 NEGX.l (d8, A4, Xn) 40b4",
		.initial = {
			.regs = {
				2851865030, 6862164, 772466939, 4029266035, 4082670508, 1893697856, 1964615443, 2303736113, 1406844937, 2748361138, 2125295522, 1774335855, 3725705177, 738757365, 2326825333, 13991846, 2198340, 34311, 8470338
			},
			.prefetch0 = 16564,
			.prefetch1 = 52798,
			.ram = negxl_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2851865030, 6862164, 772466939, 4029266035, 4082670508, 1893697856, 1964615443, 2303736113, 1406844937, 2748361138, 2125295522, 1774335855, 3725705177, 738757365, 2326825333, 13991846, 2198340, 34329, 8470342
			},
			.prefetch0 = 12607,
			.prefetch1 = 3061,
			.ram = negxl_final_ram_9,
			.ram_len = 12,
		},
		.transactions = negxl_transactions_9,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "010 NEGX.l (A7)+ 409f",
		.initial = {
			.regs = {
				1475482297, 1267006542, 3568862867, 734262645, 3561013418, 3806387875, 4270752898, 3520270834, 2638008234, 305057707, 2165228978, 3754334651, 2320101305, 3690870289, 399240070, 9804114, 13354650, 41753, 1457470
			},
			.prefetch0 = 16543,
			.prefetch1 = 48339,
			.ram = negxl_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1475482297, 1267006542, 3568862867, 734262645, 3561013418, 3806387875, 4270752898, 3520270834, 2638008234, 305057707, 2165228978, 3754334651, 2320101305, 3690870289, 399240070, 9804114, 13354654, 41745, 1457472
			},
			.prefetch0 = 48339,
			.prefetch1 = 42091,
			.ram = negxl_final_ram_10,
			.ram_len = 10,
		},
		.transactions = negxl_transactions_10,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "011 NEGX.l D7 4087",
		.initial = {
			.regs = {
				374324932, 1856344198, 1465693317, 2037370010, 1335739476, 333247553, 3382971193, 3148619728, 3673776577, 2198489057, 2184512780, 1897187480, 1085861926, 741792684, 1118322944, 348446, 623578, 42242, 2324584
			},
			.prefetch0 = 16519,
			.prefetch1 = 12300,
			.ram = negxl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				374324932, 1856344198, 1465693317, 2037370010, 1335739476, 333247553, 3382971193, 1146347568, 3673776577, 2198489057, 2184512780, 1897187480, 1085861926, 741792684, 1118322944, 348446, 623578, 42257, 2324586
			},
			.prefetch0 = 12300,
			.prefetch1 = 32566,
			.ram = negxl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = negxl_transactions_11,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "012 NEGX.l (A5) 4095",
		.initial = {
			.regs = {
				2687449182, 1342488187, 1014134528, 3274120545, 11174885, 1199231410, 4101776103, 53371941, 706550770, 2399726514, 2872293517, 42520771, 3964832023, 2083907649, 2550003987, 4516806, 4866534, 32791, 10174540
			},
			.prefetch0 = 16533,
			.prefetch1 = 59059,
			.ram = negxl_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2687449182, 1342488187, 1014134528, 3274120545, 11174885, 1199231410, 4101776103, 53371941, 706550770, 2399726514, 2872293517, 42520771, 3964832023, 2083907649, 2550003987, 4516806, 4866520, 8215, 3412894198
			},
			.prefetch0 = 41475,
			.prefetch1 = 49994,
			.ram = negxl_final_ram_12,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 NEGX.l (A4)+ 409c",
		.initial = {
			.regs = {
				3464535222, 410564260, 451765747, 1193415510, 4127293362, 372982128, 656885857, 830967515, 794387033, 36747766, 2901082870, 3406111868, 2522912349, 2455843111, 1717357936, 16198890, 4131442, 42763, 10058840
			},
			.prefetch0 = 16540,
			.prefetch1 = 37066,
			.ram = negxl_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3464535222, 410564260, 451765747, 1193415510, 4127293362, 372982128, 656885857, 830967515, 794387033, 36747766, 2901082870, 3406111868, 2522912349, 2455843111, 1717357936, 16198890, 4131428, 9995, 1879739086
			},
			.prefetch0 = 27315,
			.prefetch1 = 35965,
			.ram = negxl_final_ram_13,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_13,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "014 NEGX.l (d8, A1, Xn) 40b1",
		.initial = {
			.regs = {
				1052345438, 847700382, 304995759, 1648588101, 1475429448, 1395391913, 1167817959, 1873547866, 487392849, 952692927, 2893171831, 972159671, 2932603033, 3341265913, 3715781766, 882782, 13072508, 1564, 9558482
			},
			.prefetch0 = 16561,
			.prefetch1 = 39207,
			.ram = negxl_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1052345438, 847700382, 304995759, 1648588101, 1475429448, 1395391913, 1167817959, 1873547866, 487392849, 952692927, 2893171831, 972159671, 2932603033, 3341265913, 3715781766, 882782, 13072494, 9756, 4210826072
			},
			.prefetch0 = 2408,
			.prefetch1 = 42620,
			.ram = negxl_final_ram_14,
			.ram_len = 28,
		},
		.transactions = negxl_transactions_14,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "015 NEGX.l (d8, A6, Xn) 40b6",
		.initial = {
			.regs = {
				130742358, 2811707935, 2994343621, 3862022870, 2986430223, 4249444792, 1191999104, 3397559982, 1156564071, 1557778882, 2817194568, 1699961409, 4087830875, 1565196706, 1428258652, 15530042, 15264616, 42757, 1531240
			},
			.prefetch0 = 16566,
			.prefetch1 = 50311,
			.ram = negxl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				130742358, 2811707935, 2994343621, 3862022870, 2986430223, 4249444792, 1191999104, 3397559982, 1156564071, 1557778882, 2817194568, 1699961409, 4087830875, 1565196706, 1428258652, 15530042, 15264616, 42777, 1531244
			},
			.prefetch0 = 57007,
			.prefetch1 = 57846,
			.ram = negxl_final_ram_15,
			.ram_len = 12,
		},
		.transactions = negxl_transactions_15,
		.transactions_len = 7,
		.lenght = 26,
	},
};

#endif /* RBT_NEGXL_H */