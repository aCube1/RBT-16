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

static const SST_RamByte negxl_initial_ram_16[] = {
		{ .addr = 0x5d4dd4, .byte = 0x40 },
		{ .addr = 0x5d4dd5, .byte = 0xb9 },
		{ .addr = 0x5d4dd6, .byte = 0x5e },
		{ .addr = 0x5d4dd7, .byte = 0xe6 },
		{ .addr = 0x5d4dd8, .byte = 0x59 },
		{ .addr = 0x5d4dd9, .byte = 0x9e },
		{ .addr = 0x5d4dda, .byte = 0xb6 },
		{ .addr = 0x5d4ddb, .byte = 0x93 },
		{ .addr = 0xe6599e, .byte = 0x3e },
		{ .addr = 0xe6599f, .byte = 0xf6 },
		{ .addr = 0xe659a0, .byte = 0x36 },
		{ .addr = 0xe659a1, .byte = 0xdc },
		{ .addr = 0x5d4ddc, .byte = 0x06 },
		{ .addr = 0x5d4ddd, .byte = 0x7d }
};

static const SST_RamByte negxl_final_ram_16[] = {
		{ .addr = 0x5d4dd4, .byte = 0x40 },
		{ .addr = 0x5d4dd5, .byte = 0xb9 },
		{ .addr = 0x5d4dd6, .byte = 0x5e },
		{ .addr = 0x5d4dd7, .byte = 0xe6 },
		{ .addr = 0x5d4dd8, .byte = 0x59 },
		{ .addr = 0x5d4dd9, .byte = 0x9e },
		{ .addr = 0x5d4dda, .byte = 0xb6 },
		{ .addr = 0x5d4ddb, .byte = 0x93 },
		{ .addr = 0xe6599e, .byte = 0xc1 },
		{ .addr = 0xe6599f, .byte = 0x09 },
		{ .addr = 0xe659a0, .byte = 0xc9 },
		{ .addr = 0xe659a1, .byte = 0x24 },
		{ .addr = 0x5d4ddc, .byte = 0x06 },
		{ .addr = 0x5d4ddd, .byte = 0x7d }
};

static const SST_Transaction negxl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6114776, .data = 22942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6114778, .data = 46739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15096222, .data = 16118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15096224, .data = 14044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6114780, .data = 1661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15096224, .data = 51492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15096222, .data = 49417, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_17[] = {
		{ .addr = 0x744a74, .byte = 0x40 },
		{ .addr = 0x744a75, .byte = 0xa9 },
		{ .addr = 0x744a76, .byte = 0x9d },
		{ .addr = 0x744a77, .byte = 0x22 },
		{ .addr = 0x744a78, .byte = 0x87 },
		{ .addr = 0x744a79, .byte = 0x83 },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x36 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0x2c365c, .byte = 0x2d },
		{ .addr = 0x2c365d, .byte = 0x0c },
		{ .addr = 0x2c365e, .byte = 0x28 },
		{ .addr = 0x2c365f, .byte = 0x0c }
};

static const SST_RamByte negxl_final_ram_17[] = {
		{ .addr = 0x744a74, .byte = 0x40 },
		{ .addr = 0x744a75, .byte = 0xa9 },
		{ .addr = 0x744a76, .byte = 0x9d },
		{ .addr = 0x744a77, .byte = 0x22 },
		{ .addr = 0x744a78, .byte = 0x87 },
		{ .addr = 0x744a79, .byte = 0x83 },
		{ .addr = 0x987036, .byte = 0x4a },
		{ .addr = 0x987037, .byte = 0x76 },
		{ .addr = 0x987032, .byte = 0xa4 },
		{ .addr = 0x987033, .byte = 0x12 },
		{ .addr = 0x987034, .byte = 0x00 },
		{ .addr = 0x987035, .byte = 0x74 },
		{ .addr = 0x987030, .byte = 0x40 },
		{ .addr = 0x987031, .byte = 0xa9 },
		{ .addr = 0x98702e, .byte = 0xe9 },
		{ .addr = 0x98702f, .byte = 0x73 },
		{ .addr = 0x98702a, .byte = 0x40 },
		{ .addr = 0x98702b, .byte = 0xb5 },
		{ .addr = 0x98702c, .byte = 0x9f },
		{ .addr = 0x98702d, .byte = 0xdd },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x36 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0x2c365c, .byte = 0x2d },
		{ .addr = 0x2c365d, .byte = 0x0c },
		{ .addr = 0x2c365e, .byte = 0x28 },
		{ .addr = 0x2c365f, .byte = 0x0c }
};

static const SST_Transaction negxl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7621240, .data = 34691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14543218, .data = 52720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9990198, .data = 19062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9990194, .data = 42002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9990196, .data = 116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9990192, .data = 16553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9990190, .data = 59763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9990186, .data = 16565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9990188, .data = 40925, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2897500, .data = 11532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2897502, .data = 10252, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_18[] = {
		{ .addr = 0x36604e, .byte = 0x40 },
		{ .addr = 0x36604f, .byte = 0x82 },
		{ .addr = 0x366050, .byte = 0x13 },
		{ .addr = 0x366051, .byte = 0x1b },
		{ .addr = 0x366052, .byte = 0xe5 },
		{ .addr = 0x366053, .byte = 0xe4 }
};

static const SST_RamByte negxl_final_ram_18[] = {
		{ .addr = 0x36604e, .byte = 0x40 },
		{ .addr = 0x36604f, .byte = 0x82 },
		{ .addr = 0x366050, .byte = 0x13 },
		{ .addr = 0x366051, .byte = 0x1b },
		{ .addr = 0x366052, .byte = 0xe5 },
		{ .addr = 0x366053, .byte = 0xe4 }
};

static const SST_Transaction negxl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3563602, .data = 58852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negxl_initial_ram_19[] = {
		{ .addr = 0x478b44, .byte = 0x40 },
		{ .addr = 0x478b45, .byte = 0x92 },
		{ .addr = 0x478b46, .byte = 0x39 },
		{ .addr = 0x478b47, .byte = 0x8d },
		{ .addr = 0x87f024, .byte = 0xda },
		{ .addr = 0x87f025, .byte = 0x42 },
		{ .addr = 0x87f026, .byte = 0xd8 },
		{ .addr = 0x87f027, .byte = 0xdb },
		{ .addr = 0x478b48, .byte = 0x45 },
		{ .addr = 0x478b49, .byte = 0x8b }
};

static const SST_RamByte negxl_final_ram_19[] = {
		{ .addr = 0x478b44, .byte = 0x40 },
		{ .addr = 0x478b45, .byte = 0x92 },
		{ .addr = 0x478b46, .byte = 0x39 },
		{ .addr = 0x478b47, .byte = 0x8d },
		{ .addr = 0x87f024, .byte = 0x25 },
		{ .addr = 0x87f025, .byte = 0xbd },
		{ .addr = 0x87f026, .byte = 0x27 },
		{ .addr = 0x87f027, .byte = 0x25 },
		{ .addr = 0x478b48, .byte = 0x45 },
		{ .addr = 0x478b49, .byte = 0x8b }
};

static const SST_Transaction negxl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8908836, .data = 55874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8908838, .data = 55515, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4688712, .data = 17803, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8908838, .data = 10021, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8908836, .data = 9661, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_20[] = {
		{ .addr = 0x005254, .byte = 0x40 },
		{ .addr = 0x005255, .byte = 0xa0 },
		{ .addr = 0x005256, .byte = 0xcf },
		{ .addr = 0x005257, .byte = 0x4f },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xfc },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xd2fcfe, .byte = 0xae },
		{ .addr = 0xd2fcff, .byte = 0x42 },
		{ .addr = 0xd2fd00, .byte = 0x23 },
		{ .addr = 0xd2fd01, .byte = 0xcc }
};

static const SST_RamByte negxl_final_ram_20[] = {
		{ .addr = 0x005254, .byte = 0x40 },
		{ .addr = 0x005255, .byte = 0xa0 },
		{ .addr = 0x005256, .byte = 0xcf },
		{ .addr = 0x005257, .byte = 0x4f },
		{ .addr = 0x7f21f0, .byte = 0x52 },
		{ .addr = 0x7f21f1, .byte = 0x56 },
		{ .addr = 0x7f21ec, .byte = 0x25 },
		{ .addr = 0x7f21ed, .byte = 0x0d },
		{ .addr = 0x7f21ee, .byte = 0x00 },
		{ .addr = 0x7f21ef, .byte = 0x00 },
		{ .addr = 0x7f21ea, .byte = 0x40 },
		{ .addr = 0x7f21eb, .byte = 0xa0 },
		{ .addr = 0x7f21e8, .byte = 0x99 },
		{ .addr = 0x7f21e9, .byte = 0x9d },
		{ .addr = 0x7f21e4, .byte = 0x40 },
		{ .addr = 0x7f21e5, .byte = 0xb5 },
		{ .addr = 0x7f21e6, .byte = 0x48 },
		{ .addr = 0x7f21e7, .byte = 0x48 },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xfc },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xd2fcfe, .byte = 0xae },
		{ .addr = 0xd2fcff, .byte = 0x42 },
		{ .addr = 0xd2fd00, .byte = 0x23 },
		{ .addr = 0xd2fd01, .byte = 0xcc }
};

static const SST_Transaction negxl_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4757916, .data = 34568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331760, .data = 21078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331756, .data = 9485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331758, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331754, .data = 16544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331752, .data = 39325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331748, .data = 16565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331750, .data = 18504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 64766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13827326, .data = 44610, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13827328, .data = 9164, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_21[] = {
		{ .addr = 0x3a8efc, .byte = 0x40 },
		{ .addr = 0x3a8efd, .byte = 0x84 },
		{ .addr = 0x3a8efe, .byte = 0xb0 },
		{ .addr = 0x3a8eff, .byte = 0x0c },
		{ .addr = 0x3a8f00, .byte = 0xf5 },
		{ .addr = 0x3a8f01, .byte = 0x56 }
};

static const SST_RamByte negxl_final_ram_21[] = {
		{ .addr = 0x3a8efc, .byte = 0x40 },
		{ .addr = 0x3a8efd, .byte = 0x84 },
		{ .addr = 0x3a8efe, .byte = 0xb0 },
		{ .addr = 0x3a8eff, .byte = 0x0c },
		{ .addr = 0x3a8f00, .byte = 0xf5 },
		{ .addr = 0x3a8f01, .byte = 0x56 }
};

static const SST_Transaction negxl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3837696, .data = 62806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negxl_initial_ram_22[] = {
		{ .addr = 0xee2584, .byte = 0x40 },
		{ .addr = 0xee2585, .byte = 0xa0 },
		{ .addr = 0xee2586, .byte = 0xe6 },
		{ .addr = 0xee2587, .byte = 0xbf },
		{ .addr = 0x224eba, .byte = 0x63 },
		{ .addr = 0x224ebb, .byte = 0xef },
		{ .addr = 0x224ebc, .byte = 0x7a },
		{ .addr = 0x224ebd, .byte = 0x5a },
		{ .addr = 0xee2588, .byte = 0x0f },
		{ .addr = 0xee2589, .byte = 0x6a }
};

static const SST_RamByte negxl_final_ram_22[] = {
		{ .addr = 0xee2584, .byte = 0x40 },
		{ .addr = 0xee2585, .byte = 0xa0 },
		{ .addr = 0xee2586, .byte = 0xe6 },
		{ .addr = 0xee2587, .byte = 0xbf },
		{ .addr = 0x224eba, .byte = 0x9c },
		{ .addr = 0x224ebb, .byte = 0x10 },
		{ .addr = 0x224ebc, .byte = 0x85 },
		{ .addr = 0x224ebd, .byte = 0xa6 },
		{ .addr = 0xee2588, .byte = 0x0f },
		{ .addr = 0xee2589, .byte = 0x6a }
};

static const SST_Transaction negxl_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2248378, .data = 25583, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2248380, .data = 31322, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15607176, .data = 3946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2248380, .data = 34214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2248378, .data = 39952, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_23[] = {
		{ .addr = 0x81dc54, .byte = 0x40 },
		{ .addr = 0x81dc55, .byte = 0xa4 },
		{ .addr = 0x81dc56, .byte = 0x01 },
		{ .addr = 0x81dc57, .byte = 0x47 },
		{ .addr = 0x2aaeee, .byte = 0x35 },
		{ .addr = 0x2aaeef, .byte = 0x26 },
		{ .addr = 0x2aaef0, .byte = 0xfc },
		{ .addr = 0x2aaef1, .byte = 0x0d },
		{ .addr = 0x81dc58, .byte = 0x50 },
		{ .addr = 0x81dc59, .byte = 0x81 }
};

static const SST_RamByte negxl_final_ram_23[] = {
		{ .addr = 0x81dc54, .byte = 0x40 },
		{ .addr = 0x81dc55, .byte = 0xa4 },
		{ .addr = 0x81dc56, .byte = 0x01 },
		{ .addr = 0x81dc57, .byte = 0x47 },
		{ .addr = 0x2aaeee, .byte = 0xca },
		{ .addr = 0x2aaeef, .byte = 0xd9 },
		{ .addr = 0x2aaef0, .byte = 0x03 },
		{ .addr = 0x2aaef1, .byte = 0xf3 },
		{ .addr = 0x81dc58, .byte = 0x50 },
		{ .addr = 0x81dc59, .byte = 0x81 }
};

static const SST_Transaction negxl_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2797294, .data = 13606, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2797296, .data = 64525, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8510552, .data = 20609, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2797296, .data = 1011, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2797294, .data = 51929, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_24[] = {
		{ .addr = 0x5cd9b4, .byte = 0x40 },
		{ .addr = 0x5cd9b5, .byte = 0xb0 },
		{ .addr = 0x5cd9b6, .byte = 0x38 },
		{ .addr = 0x5cd9b7, .byte = 0x2f },
		{ .addr = 0x5cd9b8, .byte = 0xdd },
		{ .addr = 0x5cd9b9, .byte = 0xdf },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x6a },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x466a50, .byte = 0xa8 },
		{ .addr = 0x466a51, .byte = 0x69 },
		{ .addr = 0x466a52, .byte = 0xc3 },
		{ .addr = 0x466a53, .byte = 0x12 }
};

static const SST_RamByte negxl_final_ram_24[] = {
		{ .addr = 0x5cd9b4, .byte = 0x40 },
		{ .addr = 0x5cd9b5, .byte = 0xb0 },
		{ .addr = 0x5cd9b6, .byte = 0x38 },
		{ .addr = 0x5cd9b7, .byte = 0x2f },
		{ .addr = 0x5cd9b8, .byte = 0xdd },
		{ .addr = 0x5cd9b9, .byte = 0xdf },
		{ .addr = 0x78197e, .byte = 0xd9 },
		{ .addr = 0x78197f, .byte = 0xb6 },
		{ .addr = 0x78197a, .byte = 0x20 },
		{ .addr = 0x78197b, .byte = 0x14 },
		{ .addr = 0x78197c, .byte = 0x00 },
		{ .addr = 0x78197d, .byte = 0x5c },
		{ .addr = 0x781978, .byte = 0x40 },
		{ .addr = 0x781979, .byte = 0xb0 },
		{ .addr = 0x781976, .byte = 0x9a },
		{ .addr = 0x781977, .byte = 0xab },
		{ .addr = 0x781972, .byte = 0x40 },
		{ .addr = 0x781973, .byte = 0xb5 },
		{ .addr = 0x781974, .byte = 0x70 },
		{ .addr = 0x781975, .byte = 0x4d },
		{ .addr = 0x00000c, .byte = 0x33 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x6a },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x466a50, .byte = 0xa8 },
		{ .addr = 0x466a51, .byte = 0x69 },
		{ .addr = 0x466a52, .byte = 0xc3 },
		{ .addr = 0x466a53, .byte = 0x12 }
};

static const SST_Transaction negxl_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6085048, .data = 56799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5085866, .data = 26973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7870846, .data = 55734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7870842, .data = 8212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7870844, .data = 92, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7870840, .data = 16560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7870838, .data = 39595, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7870834, .data = 16565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7870836, .data = 28749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4614736, .data = 43113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4614738, .data = 49938, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_25[] = {
		{ .addr = 0x61fe3e, .byte = 0x40 },
		{ .addr = 0x61fe3f, .byte = 0x95 },
		{ .addr = 0x61fe40, .byte = 0xeb },
		{ .addr = 0x61fe41, .byte = 0xa4 },
		{ .addr = 0x00000c, .byte = 0x13 },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0x0041a2, .byte = 0x6c },
		{ .addr = 0x0041a3, .byte = 0x28 },
		{ .addr = 0x0041a4, .byte = 0xaf },
		{ .addr = 0x0041a5, .byte = 0x2d }
};

static const SST_RamByte negxl_final_ram_25[] = {
		{ .addr = 0x61fe3e, .byte = 0x40 },
		{ .addr = 0x61fe3f, .byte = 0x95 },
		{ .addr = 0x61fe40, .byte = 0xeb },
		{ .addr = 0x61fe41, .byte = 0xa4 },
		{ .addr = 0x7b0c32, .byte = 0xfe },
		{ .addr = 0x7b0c33, .byte = 0x40 },
		{ .addr = 0x7b0c2e, .byte = 0x80 },
		{ .addr = 0x7b0c2f, .byte = 0x13 },
		{ .addr = 0x7b0c30, .byte = 0x00 },
		{ .addr = 0x7b0c31, .byte = 0x61 },
		{ .addr = 0x7b0c2c, .byte = 0x40 },
		{ .addr = 0x7b0c2d, .byte = 0x95 },
		{ .addr = 0x7b0c2a, .byte = 0x59 },
		{ .addr = 0x7b0c2b, .byte = 0x5d },
		{ .addr = 0x7b0c26, .byte = 0x40 },
		{ .addr = 0x7b0c27, .byte = 0x91 },
		{ .addr = 0x7b0c28, .byte = 0x6c },
		{ .addr = 0x7b0c29, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0x13 },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0x0041a2, .byte = 0x6c },
		{ .addr = 0x0041a3, .byte = 0x28 },
		{ .addr = 0x0041a4, .byte = 0xaf },
		{ .addr = 0x0041a5, .byte = 0x2d }
};

static const SST_Transaction negxl_transactions_25[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2054492, .data = 17365, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8064050, .data = 65088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8064046, .data = 32787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8064048, .data = 97, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8064044, .data = 16533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8064042, .data = 22877, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8064038, .data = 16529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8064040, .data = 27679, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16802, .data = 27688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16804, .data = 44845, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_26[] = {
		{ .addr = 0x04faf6, .byte = 0x40 },
		{ .addr = 0x04faf7, .byte = 0x9c },
		{ .addr = 0x04faf8, .byte = 0x36 },
		{ .addr = 0x04faf9, .byte = 0xeb },
		{ .addr = 0xf2b752, .byte = 0x54 },
		{ .addr = 0xf2b753, .byte = 0x63 },
		{ .addr = 0xf2b754, .byte = 0xbb },
		{ .addr = 0xf2b755, .byte = 0x83 },
		{ .addr = 0x04fafa, .byte = 0x27 },
		{ .addr = 0x04fafb, .byte = 0x50 }
};

static const SST_RamByte negxl_final_ram_26[] = {
		{ .addr = 0x04faf6, .byte = 0x40 },
		{ .addr = 0x04faf7, .byte = 0x9c },
		{ .addr = 0x04faf8, .byte = 0x36 },
		{ .addr = 0x04faf9, .byte = 0xeb },
		{ .addr = 0xf2b752, .byte = 0xab },
		{ .addr = 0xf2b753, .byte = 0x9c },
		{ .addr = 0xf2b754, .byte = 0x44 },
		{ .addr = 0xf2b755, .byte = 0x7d },
		{ .addr = 0x04fafa, .byte = 0x27 },
		{ .addr = 0x04fafb, .byte = 0x50 }
};

static const SST_Transaction negxl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15906642, .data = 21603, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15906644, .data = 48003, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 326394, .data = 10064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15906644, .data = 17533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15906642, .data = 43932, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_27[] = {
		{ .addr = 0x992ac8, .byte = 0x40 },
		{ .addr = 0x992ac9, .byte = 0x87 },
		{ .addr = 0x992aca, .byte = 0x04 },
		{ .addr = 0x992acb, .byte = 0x1c },
		{ .addr = 0x992acc, .byte = 0x92 },
		{ .addr = 0x992acd, .byte = 0x6b }
};

static const SST_RamByte negxl_final_ram_27[] = {
		{ .addr = 0x992ac8, .byte = 0x40 },
		{ .addr = 0x992ac9, .byte = 0x87 },
		{ .addr = 0x992aca, .byte = 0x04 },
		{ .addr = 0x992acb, .byte = 0x1c },
		{ .addr = 0x992acc, .byte = 0x92 },
		{ .addr = 0x992acd, .byte = 0x6b }
};

static const SST_Transaction negxl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10037964, .data = 37483, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negxl_initial_ram_28[] = {
		{ .addr = 0x7d91fc, .byte = 0x40 },
		{ .addr = 0x7d91fd, .byte = 0xaf },
		{ .addr = 0x7d91fe, .byte = 0xd4 },
		{ .addr = 0x7d91ff, .byte = 0xfd },
		{ .addr = 0x7d9200, .byte = 0xb5 },
		{ .addr = 0x7d9201, .byte = 0x9a },
		{ .addr = 0x00000c, .byte = 0xbf },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x75 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0x4075b4, .byte = 0x2a },
		{ .addr = 0x4075b5, .byte = 0x4c },
		{ .addr = 0x4075b6, .byte = 0x61 },
		{ .addr = 0x4075b7, .byte = 0x4f }
};

static const SST_RamByte negxl_final_ram_28[] = {
		{ .addr = 0x7d91fc, .byte = 0x40 },
		{ .addr = 0x7d91fd, .byte = 0xaf },
		{ .addr = 0x7d91fe, .byte = 0xd4 },
		{ .addr = 0x7d91ff, .byte = 0xfd },
		{ .addr = 0x7d9200, .byte = 0xb5 },
		{ .addr = 0x7d9201, .byte = 0x9a },
		{ .addr = 0x8528ac, .byte = 0x91 },
		{ .addr = 0x8528ad, .byte = 0xfe },
		{ .addr = 0x8528a8, .byte = 0x03 },
		{ .addr = 0x8528a9, .byte = 0x04 },
		{ .addr = 0x8528aa, .byte = 0x00 },
		{ .addr = 0x8528ab, .byte = 0x7d },
		{ .addr = 0x8528a6, .byte = 0x40 },
		{ .addr = 0x8528a7, .byte = 0xaf },
		{ .addr = 0x8528a4, .byte = 0x4a },
		{ .addr = 0x8528a5, .byte = 0x91 },
		{ .addr = 0x8528a0, .byte = 0x40 },
		{ .addr = 0x8528a1, .byte = 0xb1 },
		{ .addr = 0x8528a2, .byte = 0x00 },
		{ .addr = 0x8528a3, .byte = 0x66 },
		{ .addr = 0x00000c, .byte = 0xbf },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x75 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0x4075b4, .byte = 0x2a },
		{ .addr = 0x4075b5, .byte = 0x4c },
		{ .addr = 0x4075b6, .byte = 0x61 },
		{ .addr = 0x4075b7, .byte = 0x4f }
};

static const SST_Transaction negxl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8229376, .data = 46490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6703760, .data = 15099, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8726700, .data = 37374, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8726696, .data = 772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8726698, .data = 125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8726694, .data = 16559, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8726692, .data = 19089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8726688, .data = 16561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8726690, .data = 102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 48960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4224436, .data = 10828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4224438, .data = 24911, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_29[] = {
		{ .addr = 0xa4e57e, .byte = 0x40 },
		{ .addr = 0xa4e57f, .byte = 0xad },
		{ .addr = 0xa4e580, .byte = 0xab },
		{ .addr = 0xa4e581, .byte = 0x45 },
		{ .addr = 0xa4e582, .byte = 0xf7 },
		{ .addr = 0xa4e583, .byte = 0xf5 },
		{ .addr = 0xeb83ee, .byte = 0x2e },
		{ .addr = 0xeb83ef, .byte = 0x5c },
		{ .addr = 0xeb83f0, .byte = 0xa1 },
		{ .addr = 0xeb83f1, .byte = 0x41 },
		{ .addr = 0xa4e584, .byte = 0x92 },
		{ .addr = 0xa4e585, .byte = 0xfb }
};

static const SST_RamByte negxl_final_ram_29[] = {
		{ .addr = 0xa4e57e, .byte = 0x40 },
		{ .addr = 0xa4e57f, .byte = 0xad },
		{ .addr = 0xa4e580, .byte = 0xab },
		{ .addr = 0xa4e581, .byte = 0x45 },
		{ .addr = 0xa4e582, .byte = 0xf7 },
		{ .addr = 0xa4e583, .byte = 0xf5 },
		{ .addr = 0xeb83ee, .byte = 0xd1 },
		{ .addr = 0xeb83ef, .byte = 0xa3 },
		{ .addr = 0xeb83f0, .byte = 0x5e },
		{ .addr = 0xeb83f1, .byte = 0xbf },
		{ .addr = 0xa4e584, .byte = 0x92 },
		{ .addr = 0xa4e585, .byte = 0xfb }
};

static const SST_Transaction negxl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10806658, .data = 63477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15434734, .data = 11868, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15434736, .data = 41281, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10806660, .data = 37627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15434736, .data = 24255, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15434734, .data = 53667, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_30[] = {
		{ .addr = 0x11dfd8, .byte = 0x40 },
		{ .addr = 0x11dfd9, .byte = 0xb2 },
		{ .addr = 0x11dfda, .byte = 0x51 },
		{ .addr = 0x11dfdb, .byte = 0x20 },
		{ .addr = 0x11dfdc, .byte = 0x20 },
		{ .addr = 0x11dfdd, .byte = 0x67 },
		{ .addr = 0x00000c, .byte = 0xdf },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0x2e },
		{ .addr = 0x96b12e, .byte = 0xff },
		{ .addr = 0x96b12f, .byte = 0x18 },
		{ .addr = 0x96b130, .byte = 0xea },
		{ .addr = 0x96b131, .byte = 0x37 }
};

static const SST_RamByte negxl_final_ram_30[] = {
		{ .addr = 0x11dfd8, .byte = 0x40 },
		{ .addr = 0x11dfd9, .byte = 0xb2 },
		{ .addr = 0x11dfda, .byte = 0x51 },
		{ .addr = 0x11dfdb, .byte = 0x20 },
		{ .addr = 0x11dfdc, .byte = 0x20 },
		{ .addr = 0x11dfdd, .byte = 0x67 },
		{ .addr = 0x04781c, .byte = 0xdf },
		{ .addr = 0x04781d, .byte = 0xda },
		{ .addr = 0x047818, .byte = 0x86 },
		{ .addr = 0x047819, .byte = 0x1a },
		{ .addr = 0x04781a, .byte = 0x00 },
		{ .addr = 0x04781b, .byte = 0x11 },
		{ .addr = 0x047816, .byte = 0x40 },
		{ .addr = 0x047817, .byte = 0xb2 },
		{ .addr = 0x047814, .byte = 0xe6 },
		{ .addr = 0x047815, .byte = 0x4b },
		{ .addr = 0x047810, .byte = 0x40 },
		{ .addr = 0x047811, .byte = 0xb1 },
		{ .addr = 0x047812, .byte = 0x2e },
		{ .addr = 0x047813, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0xdf },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0x2e },
		{ .addr = 0x96b12e, .byte = 0xff },
		{ .addr = 0x96b12f, .byte = 0x18 },
		{ .addr = 0x96b130, .byte = 0xea },
		{ .addr = 0x96b131, .byte = 0x37 }
};

static const SST_Transaction negxl_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1171420, .data = 8295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14083658, .data = 64389, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 292892, .data = 57306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 292888, .data = 34330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 292890, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 292886, .data = 16562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 292884, .data = 58955, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 292880, .data = 16561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 292882, .data = 11990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 45358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9875758, .data = 65304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9875760, .data = 59959, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxl_initial_ram_31[] = {
		{ .addr = 0x499d92, .byte = 0x40 },
		{ .addr = 0x499d93, .byte = 0x92 },
		{ .addr = 0x499d94, .byte = 0x12 },
		{ .addr = 0x499d95, .byte = 0x48 },
		{ .addr = 0x00000c, .byte = 0xde },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x93 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0x0093b4, .byte = 0xbd },
		{ .addr = 0x0093b5, .byte = 0x51 },
		{ .addr = 0x0093b6, .byte = 0xc4 },
		{ .addr = 0x0093b7, .byte = 0x91 }
};

static const SST_RamByte negxl_final_ram_31[] = {
		{ .addr = 0x499d92, .byte = 0x40 },
		{ .addr = 0x499d93, .byte = 0x92 },
		{ .addr = 0x499d94, .byte = 0x12 },
		{ .addr = 0x499d95, .byte = 0x48 },
		{ .addr = 0xd836f8, .byte = 0x9d },
		{ .addr = 0xd836f9, .byte = 0x94 },
		{ .addr = 0xd836f4, .byte = 0x06 },
		{ .addr = 0xd836f5, .byte = 0x15 },
		{ .addr = 0xd836f6, .byte = 0x00 },
		{ .addr = 0xd836f7, .byte = 0x49 },
		{ .addr = 0xd836f2, .byte = 0x40 },
		{ .addr = 0xd836f3, .byte = 0x92 },
		{ .addr = 0xd836f0, .byte = 0x4d },
		{ .addr = 0xd836f1, .byte = 0x9d },
		{ .addr = 0xd836ec, .byte = 0x40 },
		{ .addr = 0xd836ed, .byte = 0x91 },
		{ .addr = 0xd836ee, .byte = 0xf7 },
		{ .addr = 0xd836ef, .byte = 0xed },
		{ .addr = 0x00000c, .byte = 0xde },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x93 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0x0093b4, .byte = 0xbd },
		{ .addr = 0x0093b5, .byte = 0x51 },
		{ .addr = 0x0093b6, .byte = 0xc4 },
		{ .addr = 0x0093b7, .byte = 0x91 }
};

static const SST_Transaction negxl_transactions_31[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15551900, .data = 556, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14169848, .data = 40340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14169844, .data = 1557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14169846, .data = 73, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14169842, .data = 16530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14169840, .data = 19869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14169836, .data = 16529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14169838, .data = 63469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 37812, .data = 48465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 37814, .data = 50321, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 NEGX.l (xxx).l 40b9",
		.initial = {
			.regs = {
				1156157270, 3912236546, 1344893974, 1617137202, 1315784609, 3130325054, 3424289612, 350958195, 2774971071, 3418166129, 2863744348, 3185357964, 1078197266, 1312090560, 3211631373, 16745122, 2148974, 41731, 6114776
			},
			.prefetch0 = 16569,
			.prefetch1 = 24294,
			.ram = negxl_initial_ram_16,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1156157270, 3912236546, 1344893974, 1617137202, 1315784609, 3130325054, 3424289612, 350958195, 2774971071, 3418166129, 2863744348, 3185357964, 1078197266, 1312090560, 3211631373, 16745122, 2148974, 41753, 6114782
			},
			.prefetch0 = 46739,
			.prefetch1 = 1661,
			.ram = negxl_final_ram_16,
			.ram_len = 14,
		},
		.transactions = negxl_transactions_16,
		.transactions_len = 7,
		.lenght = 28,
	},
	{
		.name = "017 NEGX.l (d16, A1) 40a9",
		.initial = {
			.regs = {
				1846110771, 649185989, 2240955882, 3688987015, 1440345669, 206834420, 1764603611, 4152203052, 717273821, 2682145873, 412556142, 2830692836, 3314053956, 2295194682, 2758170801, 7891682, 9990200, 42002, 7621240
			},
			.prefetch0 = 16553,
			.prefetch1 = 40226,
			.ram = negxl_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1846110771, 649185989, 2240955882, 3688987015, 1440345669, 206834420, 1764603611, 4152203052, 717273821, 2682145873, 412556142, 2830692836, 3314053956, 2295194682, 2758170801, 7891682, 9990186, 9234, 1277965920
			},
			.prefetch0 = 11532,
			.prefetch1 = 10252,
			.ram = negxl_final_ram_17,
			.ram_len = 28,
		},
		.transactions = negxl_transactions_17,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "018 NEGX.l D2 4082",
		.initial = {
			.regs = {
				1631408692, 1226977471, 3152045434, 3435749397, 2081532272, 2233129349, 250733626, 3110359236, 1113143591, 1753931556, 2573681666, 3923435408, 814526252, 987681613, 1520840385, 13832530, 2783922, 534, 3563602
			},
			.prefetch0 = 16514,
			.prefetch1 = 4891,
			.ram = negxl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1631408692, 1226977471, 1142921861, 3435749397, 2081532272, 2233129349, 250733626, 3110359236, 1113143591, 1753931556, 2573681666, 3923435408, 814526252, 987681613, 1520840385, 13832530, 2783922, 529, 3563604
			},
			.prefetch0 = 4891,
			.prefetch1 = 58852,
			.ram = negxl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = negxl_transactions_18,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "019 NEGX.l (A2) 4092",
		.initial = {
			.regs = {
				3883748396, 1469357755, 2379561326, 3539977420, 2684283882, 2791557532, 2459092477, 4132698177, 1326426325, 859539230, 2206724132, 1000046583, 1041055107, 3496189952, 3757505824, 3885074, 996888, 9732, 4688712
			},
			.prefetch0 = 16530,
			.prefetch1 = 14733,
			.ram = negxl_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3883748396, 1469357755, 2379561326, 3539977420, 2684283882, 2791557532, 2459092477, 4132698177, 1326426325, 859539230, 2206724132, 1000046583, 1041055107, 3496189952, 3757505824, 3885074, 996888, 9745, 4688714
			},
			.prefetch0 = 14733,
			.prefetch1 = 17803,
			.ram = negxl_final_ram_19,
			.ram_len = 10,
		},
		.transactions = negxl_transactions_19,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "020 NEGX.l -(A0) 40a0",
		.initial = {
			.regs = {
				3036168790, 1591528268, 361147562, 1587534241, 3517464484, 1796407599, 2543377768, 2494159464, 1212717473, 2369642358, 3401393744, 1774644121, 32532876, 1328344767, 3455029035, 15148770, 8331762, 9485, 21080
			},
			.prefetch0 = 16544,
			.prefetch1 = 53071,
			.ram = negxl_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3036168790, 1591528268, 361147562, 1587534241, 3517464484, 1796407599, 2543377768, 2494159464, 1212717469, 2369642358, 3401393744, 1774644121, 32532876, 1328344767, 3455029035, 15148770, 8331748, 9485, 3704814850
			},
			.prefetch0 = 44610,
			.prefetch1 = 9164,
			.ram = negxl_final_ram_20,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_20,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "021 NEGX.l D4 4084",
		.initial = {
			.regs = {
				3476959243, 2979581846, 944653832, 251925695, 988831122, 2503785288, 353217570, 3882442464, 1100627283, 4229547496, 888036146, 1058583560, 3274731213, 2487732619, 1271517809, 802626, 14174552, 34333, 3837696
			},
			.prefetch0 = 16516,
			.prefetch1 = 45068,
			.ram = negxl_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3476959243, 2979581846, 944653832, 251925695, 3306136173, 2503785288, 353217570, 3882442464, 1100627283, 4229547496, 888036146, 1058583560, 3274731213, 2487732619, 1271517809, 802626, 14174552, 34329, 3837698
			},
			.prefetch0 = 45068,
			.prefetch1 = 62806,
			.ram = negxl_final_ram_21,
			.ram_len = 6,
		},
		.transactions = negxl_transactions_21,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "022 NEGX.l -(A0) 40a0",
		.initial = {
			.regs = {
				2648054913, 3038627494, 2952305450, 2939255899, 647928487, 3469875874, 61022586, 4051506337, 2686602942, 2728424834, 3602313162, 3701116163, 2007057246, 4280172407, 1584817785, 9983556, 12929818, 8454, 15607176
			},
			.prefetch0 = 16544,
			.prefetch1 = 59071,
			.ram = negxl_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2648054913, 3038627494, 2952305450, 2939255899, 647928487, 3469875874, 61022586, 4051506337, 2686602938, 2728424834, 3602313162, 3701116163, 2007057246, 4280172407, 1584817785, 9983556, 12929818, 8473, 15607178
			},
			.prefetch0 = 59071,
			.prefetch1 = 3946,
			.ram = negxl_final_ram_22,
			.ram_len = 10,
		},
		.transactions = negxl_transactions_22,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "023 NEGX.l -(A4) 40a4",
		.initial = {
			.regs = {
				1548055160, 3556713414, 2589491039, 4088841019, 3510698876, 924227910, 1750947761, 1661120568, 1022270974, 2369634460, 547294614, 135809118, 137015026, 2994829500, 1664432843, 1165226, 10492730, 264, 8510552
			},
			.prefetch0 = 16548,
			.prefetch1 = 327,
			.ram = negxl_initial_ram_23,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1548055160, 3556713414, 2589491039, 4088841019, 3510698876, 924227910, 1750947761, 1661120568, 1022270974, 2369634460, 547294614, 135809118, 137015022, 2994829500, 1664432843, 1165226, 10492730, 281, 8510554
			},
			.prefetch0 = 327,
			.prefetch1 = 20609,
			.ram = negxl_final_ram_23,
			.ram_len = 10,
		},
		.transactions = negxl_transactions_23,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "024 NEGX.l (d8, A0, Xn) 40b0",
		.initial = {
			.regs = {
				780987695, 172172981, 4193216769, 388896403, 3811208024, 79660320, 824645223, 356101193, 1495237609, 2146029640, 1006215819, 3286750326, 2149399904, 2240997412, 3022142052, 9062414, 7870848, 8212, 6085048
			},
			.prefetch0 = 16560,
			.prefetch1 = 14383,
			.ram = negxl_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				780987695, 172172981, 4193216769, 388896403, 3811208024, 79660320, 824645223, 356101193, 1495237609, 2146029640, 1006215819, 3286750326, 2149399904, 2240997412, 3022142052, 9062414, 7870834, 8212, 860252756
			},
			.prefetch0 = 43113,
			.prefetch1 = 49938,
			.ram = negxl_final_ram_24,
			.ram_len = 28,
		},
		.transactions = negxl_transactions_24,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "025 NEGX.l (A5) 4095",
		.initial = {
			.regs = {
				2516065154, 1262725475, 1746647934, 2369408923, 3103293395, 1720407159, 2785537383, 1526697361, 296293848, 2904601814, 419807582, 3738332000, 3978581638, 1813993821, 695529635, 1470314, 8064052, 32787, 6422082
			},
			.prefetch0 = 16533,
			.prefetch1 = 60324,
			.ram = negxl_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2516065154, 1262725475, 1746647934, 2369408923, 3103293395, 1720407159, 2785537383, 1526697361, 296293848, 2904601814, 419807582, 3738332000, 3978581638, 1813993821, 695529635, 1470314, 8064038, 8211, 318783910
			},
			.prefetch0 = 27688,
			.prefetch1 = 44845,
			.ram = negxl_final_ram_25,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_25,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "026 NEGX.l (A4)+ 409c",
		.initial = {
			.regs = {
				100226720, 3621826218, 1486372419, 3495134869, 3691823386, 314968623, 975229907, 399264933, 860377593, 3029088232, 4287243909, 3276219235, 3488790354, 636691471, 1985802116, 10787136, 12199248, 41997, 326394
			},
			.prefetch0 = 16540,
			.prefetch1 = 14059,
			.ram = negxl_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				100226720, 3621826218, 1486372419, 3495134869, 3691823386, 314968623, 975229907, 399264933, 860377593, 3029088232, 4287243909, 3276219235, 3488790358, 636691471, 1985802116, 10787136, 12199248, 42009, 326396
			},
			.prefetch0 = 14059,
			.prefetch1 = 10064,
			.ram = negxl_final_ram_26,
			.ram_len = 10,
		},
		.transactions = negxl_transactions_26,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "027 NEGX.l D7 4087",
		.initial = {
			.regs = {
				2231234435, 1221928193, 2417663534, 3732409017, 3537475539, 1711112731, 2703086443, 48574645, 105060480, 1053103187, 301241001, 2280183701, 4006943383, 3804681132, 1021600492, 15444732, 15134558, 258, 10037964
			},
			.prefetch0 = 16519,
			.prefetch1 = 1052,
			.ram = negxl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2231234435, 1221928193, 2417663534, 3732409017, 3537475539, 1711112731, 2703086443, 4246392651, 105060480, 1053103187, 301241001, 2280183701, 4006943383, 3804681132, 1021600492, 15444732, 15134558, 281, 10037966
			},
			.prefetch0 = 1052,
			.prefetch1 = 37483,
			.ram = negxl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = negxl_transactions_27,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "028 NEGX.l (d16, A7) 40af",
		.initial = {
			.regs = {
				55793323, 847387966, 1160110054, 3584251540, 2457761064, 3817679199, 3537045840, 4032543273, 4017379028, 992814487, 4167654847, 3658770792, 594884798, 2214332654, 3518657655, 6714772, 8726702, 772, 8229376
			},
			.prefetch0 = 16559,
			.prefetch1 = 54525,
			.ram = negxl_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				55793323, 847387966, 1160110054, 3584251540, 2457761064, 3817679199, 3537045840, 4032543273, 4017379028, 992814487, 4167654847, 3658770792, 594884798, 2214332654, 3518657655, 6714772, 8726688, 8964, 3208672696
			},
			.prefetch0 = 10828,
			.prefetch1 = 24911,
			.ram = negxl_final_ram_28,
			.ram_len = 28,
		},
		.transactions = negxl_transactions_28,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "029 NEGX.l (d16, A5) 40ad",
		.initial = {
			.regs = {
				2534346442, 1430785457, 2679656280, 2643572856, 4075770884, 545381712, 591392394, 521678972, 3995333557, 282963788, 2489377669, 3092054774, 3786383915, 585881769, 1799158864, 5846962, 5774674, 1801, 10806658
			},
			.prefetch0 = 16557,
			.prefetch1 = 43845,
			.ram = negxl_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2534346442, 1430785457, 2679656280, 2643572856, 4075770884, 545381712, 591392394, 521678972, 3995333557, 282963788, 2489377669, 3092054774, 3786383915, 585881769, 1799158864, 5846962, 5774674, 1817, 10806662
			},
			.prefetch0 = 63477,
			.prefetch1 = 37627,
			.ram = negxl_final_ram_29,
			.ram_len = 12,
		},
		.transactions = negxl_transactions_29,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "030 NEGX.l (d8, A2, Xn) 40b2",
		.initial = {
			.regs = {
				315272485, 1409901249, 1267304583, 2399902945, 1268941863, 3501019713, 3978250343, 2473306464, 4213186922, 990340415, 785814506, 2160844646, 35979995, 3819129426, 107042597, 6977840, 292894, 34330, 1171420
			},
			.prefetch0 = 16562,
			.prefetch1 = 20768,
			.ram = negxl_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				315272485, 1409901249, 1267304583, 2399902945, 1268941863, 3501019713, 3978250343, 2473306464, 4213186922, 990340415, 785814506, 2160844646, 35979995, 3819129426, 107042597, 6977840, 292880, 9754, 3751194930
			},
			.prefetch0 = 65304,
			.prefetch1 = 59959,
			.ram = negxl_final_ram_30,
			.ram_len = 28,
		},
		.transactions = negxl_transactions_30,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "031 NEGX.l (A2) 4092",
		.initial = {
			.regs = {
				3139074592, 1741810904, 3545402582, 2927536477, 1726971451, 3641391750, 2486255536, 2660149609, 1681308412, 1584593180, 4159524253, 767506610, 239121672, 2388611879, 1013839585, 10305020, 14169850, 1557, 4824470
			},
			.prefetch0 = 16530,
			.prefetch1 = 4680,
			.ram = negxl_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3139074592, 1741810904, 3545402582, 2927536477, 1726971451, 3641391750, 2486255536, 2660149609, 1681308412, 1584593180, 4159524253, 767506610, 239121672, 2388611879, 1013839585, 10305020, 14169836, 9749, 3724579768
			},
			.prefetch0 = 48465,
			.prefetch1 = 50321,
			.ram = negxl_final_ram_31,
			.ram_len = 26,
		},
		.transactions = negxl_transactions_31,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_NEGXL_H */