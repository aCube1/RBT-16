#ifndef RBT_JSR_H
#define RBT_JSR_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte jsr_initial_ram_0[] = {
		{ .addr = 0x73824e, .byte = 0x4e },
		{ .addr = 0x73824f, .byte = 0xb1 },
		{ .addr = 0x738250, .byte = 0x8c },
		{ .addr = 0x738251, .byte = 0xf4 },
		{ .addr = 0x77fa9e, .byte = 0x53 },
		{ .addr = 0x77fa9f, .byte = 0x5d },
		{ .addr = 0x77faa0, .byte = 0x57 },
		{ .addr = 0x77faa1, .byte = 0x85 }
};

static const SST_RamByte jsr_final_ram_0[] = {
		{ .addr = 0x73824e, .byte = 0x4e },
		{ .addr = 0x73824f, .byte = 0xb1 },
		{ .addr = 0x738250, .byte = 0x8c },
		{ .addr = 0x738251, .byte = 0xf4 },
		{ .addr = 0x77fa9e, .byte = 0x53 },
		{ .addr = 0x77fa9f, .byte = 0x5d },
		{ .addr = 0xc38bf4, .byte = 0x00 },
		{ .addr = 0xc38bf5, .byte = 0x73 },
		{ .addr = 0xc38bf6, .byte = 0x82 },
		{ .addr = 0xc38bf7, .byte = 0x52 },
		{ .addr = 0x77faa0, .byte = 0x57 },
		{ .addr = 0x77faa1, .byte = 0x85 }
};

static const SST_Transaction jsr_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7862942, .data = 21341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12815348, .data = 115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12815350, .data = 33362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7862944, .data = 22405, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_1[] = {
		{ .addr = 0x3d8fec, .byte = 0x4e },
		{ .addr = 0x3d8fed, .byte = 0x96 },
		{ .addr = 0x3d8fee, .byte = 0xa8 },
		{ .addr = 0x3d8fef, .byte = 0x72 },
		{ .addr = 0xc2b3fc, .byte = 0xee },
		{ .addr = 0xc2b3fd, .byte = 0xc2 },
		{ .addr = 0xc2b3fe, .byte = 0x56 },
		{ .addr = 0xc2b3ff, .byte = 0xb5 }
};

static const SST_RamByte jsr_final_ram_1[] = {
		{ .addr = 0x3d8fec, .byte = 0x4e },
		{ .addr = 0x3d8fed, .byte = 0x96 },
		{ .addr = 0x3d8fee, .byte = 0xa8 },
		{ .addr = 0x3d8fef, .byte = 0x72 },
		{ .addr = 0xc2b3fc, .byte = 0xee },
		{ .addr = 0xc2b3fd, .byte = 0xc2 },
		{ .addr = 0x29433e, .byte = 0x00 },
		{ .addr = 0x29433f, .byte = 0x3d },
		{ .addr = 0x294340, .byte = 0x8f },
		{ .addr = 0x294341, .byte = 0xee },
		{ .addr = 0xc2b3fe, .byte = 0x56 },
		{ .addr = 0xc2b3ff, .byte = 0xb5 }
};

static const SST_Transaction jsr_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12760060, .data = 61122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2704190, .data = 61, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2704192, .data = 36846, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12760062, .data = 22197, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_2[] = {
		{ .addr = 0x8a9f40, .byte = 0x4e },
		{ .addr = 0x8a9f41, .byte = 0xb7 },
		{ .addr = 0x8a9f42, .byte = 0x50 },
		{ .addr = 0x8a9f43, .byte = 0xea },
		{ .addr = 0x00000c, .byte = 0x66 },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0xce },
		{ .addr = 0x00000f, .byte = 0x36 },
		{ .addr = 0x3ece36, .byte = 0x09 },
		{ .addr = 0x3ece37, .byte = 0x8f },
		{ .addr = 0x3ece38, .byte = 0xf2 },
		{ .addr = 0x3ece39, .byte = 0xc5 }
};

static const SST_RamByte jsr_final_ram_2[] = {
		{ .addr = 0x8a9f40, .byte = 0x4e },
		{ .addr = 0x8a9f41, .byte = 0xb7 },
		{ .addr = 0x8a9f42, .byte = 0x50 },
		{ .addr = 0x8a9f43, .byte = 0xea },
		{ .addr = 0x09eb2e, .byte = 0x9f },
		{ .addr = 0x09eb2f, .byte = 0x44 },
		{ .addr = 0x09eb2a, .byte = 0x80 },
		{ .addr = 0x09eb2b, .byte = 0x16 },
		{ .addr = 0x09eb2c, .byte = 0x00 },
		{ .addr = 0x09eb2d, .byte = 0x8a },
		{ .addr = 0x09eb28, .byte = 0x4e },
		{ .addr = 0x09eb29, .byte = 0xb7 },
		{ .addr = 0x09eb26, .byte = 0xf3 },
		{ .addr = 0x09eb27, .byte = 0x8d },
		{ .addr = 0x09eb22, .byte = 0x4e },
		{ .addr = 0x09eb23, .byte = 0xb2 },
		{ .addr = 0x09eb24, .byte = 0x00 },
		{ .addr = 0x09eb25, .byte = 0xde },
		{ .addr = 0x00000c, .byte = 0x66 },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0xce },
		{ .addr = 0x00000f, .byte = 0x36 },
		{ .addr = 0x3ece36, .byte = 0x09 },
		{ .addr = 0x3ece37, .byte = 0x8f },
		{ .addr = 0x3ece38, .byte = 0xf2 },
		{ .addr = 0x3ece39, .byte = 0xc5 }
};

static const SST_Transaction jsr_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14611340, .data = 1830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 650030, .data = 40772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 650026, .data = 32790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 650028, .data = 138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 650024, .data = 20151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 650022, .data = 62349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 650018, .data = 20146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 650020, .data = 222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 26174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4116022, .data = 2447, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4116024, .data = 62149, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_3[] = {
		{ .addr = 0xe7da5c, .byte = 0x4e },
		{ .addr = 0xe7da5d, .byte = 0xb9 },
		{ .addr = 0xe7da5e, .byte = 0x1a },
		{ .addr = 0xe7da5f, .byte = 0x67 },
		{ .addr = 0xe7da60, .byte = 0x3d },
		{ .addr = 0xe7da61, .byte = 0xb4 },
		{ .addr = 0x673db4, .byte = 0xff },
		{ .addr = 0x673db5, .byte = 0x59 },
		{ .addr = 0x673db6, .byte = 0x89 },
		{ .addr = 0x673db7, .byte = 0xdd }
};

static const SST_RamByte jsr_final_ram_3[] = {
		{ .addr = 0xe7da5c, .byte = 0x4e },
		{ .addr = 0xe7da5d, .byte = 0xb9 },
		{ .addr = 0xe7da5e, .byte = 0x1a },
		{ .addr = 0xe7da5f, .byte = 0x67 },
		{ .addr = 0xe7da60, .byte = 0x3d },
		{ .addr = 0xe7da61, .byte = 0xb4 },
		{ .addr = 0x673db4, .byte = 0xff },
		{ .addr = 0x673db5, .byte = 0x59 },
		{ .addr = 0x29feae, .byte = 0x00 },
		{ .addr = 0x29feaf, .byte = 0xe7 },
		{ .addr = 0x29feb0, .byte = 0xda },
		{ .addr = 0x29feb1, .byte = 0x62 },
		{ .addr = 0x673db6, .byte = 0x89 },
		{ .addr = 0x673db7, .byte = 0xdd }
};

static const SST_Transaction jsr_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15194720, .data = 15796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6766004, .data = 65369, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2752174, .data = 231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2752176, .data = 55906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6766006, .data = 35293, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_4[] = {
		{ .addr = 0xfb79b4, .byte = 0x4e },
		{ .addr = 0xfb79b5, .byte = 0xaa },
		{ .addr = 0xfb79b6, .byte = 0x33 },
		{ .addr = 0xfb79b7, .byte = 0x7d },
		{ .addr = 0x00000c, .byte = 0xc9 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0x27 },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0xd02714, .byte = 0xc0 },
		{ .addr = 0xd02715, .byte = 0xc7 },
		{ .addr = 0xd02716, .byte = 0xb2 },
		{ .addr = 0xd02717, .byte = 0x0a }
};

static const SST_RamByte jsr_final_ram_4[] = {
		{ .addr = 0xfb79b4, .byte = 0x4e },
		{ .addr = 0xfb79b5, .byte = 0xaa },
		{ .addr = 0xfb79b6, .byte = 0x33 },
		{ .addr = 0xfb79b7, .byte = 0x7d },
		{ .addr = 0x2721a4, .byte = 0x79 },
		{ .addr = 0x2721a5, .byte = 0xb8 },
		{ .addr = 0x2721a0, .byte = 0x85 },
		{ .addr = 0x2721a1, .byte = 0x09 },
		{ .addr = 0x2721a2, .byte = 0x00 },
		{ .addr = 0x2721a3, .byte = 0xfb },
		{ .addr = 0x27219e, .byte = 0x4e },
		{ .addr = 0x27219f, .byte = 0xaa },
		{ .addr = 0x27219c, .byte = 0x0b },
		{ .addr = 0x27219d, .byte = 0x05 },
		{ .addr = 0x272198, .byte = 0x4e },
		{ .addr = 0x272199, .byte = 0xb2 },
		{ .addr = 0x27219a, .byte = 0x8a },
		{ .addr = 0x27219b, .byte = 0x19 },
		{ .addr = 0x00000c, .byte = 0xc9 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0x27 },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0xd02714, .byte = 0xc0 },
		{ .addr = 0xd02715, .byte = 0xc7 },
		{ .addr = 0xd02716, .byte = 0xb2 },
		{ .addr = 0xd02717, .byte = 0x0a }
};

static const SST_Transaction jsr_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1641220, .data = 32295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2564516, .data = 31160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2564512, .data = 34057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2564514, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2564510, .data = 20138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2564508, .data = 2821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2564504, .data = 20146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2564506, .data = 35353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 10004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13641492, .data = 49351, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13641494, .data = 45578, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_5[] = {
		{ .addr = 0x3ad4aa, .byte = 0x4e },
		{ .addr = 0x3ad4ab, .byte = 0xa9 },
		{ .addr = 0x3ad4ac, .byte = 0xf4 },
		{ .addr = 0x3ad4ad, .byte = 0xe0 },
		{ .addr = 0xe01a72, .byte = 0xd8 },
		{ .addr = 0xe01a73, .byte = 0xa4 },
		{ .addr = 0xe01a74, .byte = 0x00 },
		{ .addr = 0xe01a75, .byte = 0x5a }
};

static const SST_RamByte jsr_final_ram_5[] = {
		{ .addr = 0x3ad4aa, .byte = 0x4e },
		{ .addr = 0x3ad4ab, .byte = 0xa9 },
		{ .addr = 0x3ad4ac, .byte = 0xf4 },
		{ .addr = 0x3ad4ad, .byte = 0xe0 },
		{ .addr = 0xe01a72, .byte = 0xd8 },
		{ .addr = 0xe01a73, .byte = 0xa4 },
		{ .addr = 0x079910, .byte = 0x00 },
		{ .addr = 0x079911, .byte = 0x3a },
		{ .addr = 0x079912, .byte = 0xd4 },
		{ .addr = 0x079913, .byte = 0xae },
		{ .addr = 0xe01a74, .byte = 0x00 },
		{ .addr = 0xe01a75, .byte = 0x5a }
};

static const SST_Transaction jsr_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14686834, .data = 55460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 497936, .data = 58, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 497938, .data = 54446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14686836, .data = 90, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_6[] = {
		{ .addr = 0x87c5d0, .byte = 0x4e },
		{ .addr = 0x87c5d1, .byte = 0xb5 },
		{ .addr = 0x87c5d2, .byte = 0xf7 },
		{ .addr = 0x87c5d3, .byte = 0x00 },
		{ .addr = 0x59dab6, .byte = 0x17 },
		{ .addr = 0x59dab7, .byte = 0xd0 },
		{ .addr = 0x59dab8, .byte = 0x3e },
		{ .addr = 0x59dab9, .byte = 0x2d }
};

static const SST_RamByte jsr_final_ram_6[] = {
		{ .addr = 0x87c5d0, .byte = 0x4e },
		{ .addr = 0x87c5d1, .byte = 0xb5 },
		{ .addr = 0x87c5d2, .byte = 0xf7 },
		{ .addr = 0x87c5d3, .byte = 0x00 },
		{ .addr = 0x59dab6, .byte = 0x17 },
		{ .addr = 0x59dab7, .byte = 0xd0 },
		{ .addr = 0x7f6348, .byte = 0x00 },
		{ .addr = 0x7f6349, .byte = 0x87 },
		{ .addr = 0x7f634a, .byte = 0xc5 },
		{ .addr = 0x7f634b, .byte = 0xd4 },
		{ .addr = 0x59dab8, .byte = 0x3e },
		{ .addr = 0x59dab9, .byte = 0x2d }
};

static const SST_Transaction jsr_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5888694, .data = 6096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8348488, .data = 135, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8348490, .data = 50644, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5888696, .data = 15917, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_7[] = {
		{ .addr = 0xd8dd98, .byte = 0x4e },
		{ .addr = 0xd8dd99, .byte = 0x93 },
		{ .addr = 0xd8dd9a, .byte = 0x86 },
		{ .addr = 0xd8dd9b, .byte = 0xea },
		{ .addr = 0x094e2c, .byte = 0xf0 },
		{ .addr = 0x094e2d, .byte = 0x32 },
		{ .addr = 0x094e2e, .byte = 0xf6 },
		{ .addr = 0x094e2f, .byte = 0xbc }
};

static const SST_RamByte jsr_final_ram_7[] = {
		{ .addr = 0xd8dd98, .byte = 0x4e },
		{ .addr = 0xd8dd99, .byte = 0x93 },
		{ .addr = 0xd8dd9a, .byte = 0x86 },
		{ .addr = 0xd8dd9b, .byte = 0xea },
		{ .addr = 0x094e2c, .byte = 0xf0 },
		{ .addr = 0x094e2d, .byte = 0x32 },
		{ .addr = 0x1bc500, .byte = 0x00 },
		{ .addr = 0x1bc501, .byte = 0xd8 },
		{ .addr = 0x1bc502, .byte = 0xdd },
		{ .addr = 0x1bc503, .byte = 0x9a },
		{ .addr = 0x094e2e, .byte = 0xf6 },
		{ .addr = 0x094e2f, .byte = 0xbc }
};

static const SST_Transaction jsr_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 609836, .data = 61490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1819904, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1819906, .data = 56730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 609838, .data = 63164, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_8[] = {
		{ .addr = 0x36dc0a, .byte = 0x4e },
		{ .addr = 0x36dc0b, .byte = 0xab },
		{ .addr = 0x36dc0c, .byte = 0xab },
		{ .addr = 0x36dc0d, .byte = 0x85 },
		{ .addr = 0x632e72, .byte = 0xaf },
		{ .addr = 0x632e73, .byte = 0x72 },
		{ .addr = 0x632e74, .byte = 0x23 },
		{ .addr = 0x632e75, .byte = 0xa4 }
};

static const SST_RamByte jsr_final_ram_8[] = {
		{ .addr = 0x36dc0a, .byte = 0x4e },
		{ .addr = 0x36dc0b, .byte = 0xab },
		{ .addr = 0x36dc0c, .byte = 0xab },
		{ .addr = 0x36dc0d, .byte = 0x85 },
		{ .addr = 0x632e72, .byte = 0xaf },
		{ .addr = 0x632e73, .byte = 0x72 },
		{ .addr = 0xef25a8, .byte = 0x00 },
		{ .addr = 0xef25a9, .byte = 0x36 },
		{ .addr = 0xef25aa, .byte = 0xdc },
		{ .addr = 0xef25ab, .byte = 0x0e },
		{ .addr = 0x632e74, .byte = 0x23 },
		{ .addr = 0x632e75, .byte = 0xa4 }
};

static const SST_Transaction jsr_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6499954, .data = 44914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15672744, .data = 54, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15672746, .data = 56334, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6499956, .data = 9124, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_9[] = {
		{ .addr = 0xa8bf22, .byte = 0x4e },
		{ .addr = 0xa8bf23, .byte = 0xb3 },
		{ .addr = 0xa8bf24, .byte = 0xeb },
		{ .addr = 0xa8bf25, .byte = 0x45 },
		{ .addr = 0xd6dc42, .byte = 0x08 },
		{ .addr = 0xd6dc43, .byte = 0x1b },
		{ .addr = 0xd6dc44, .byte = 0xd3 },
		{ .addr = 0xd6dc45, .byte = 0x36 }
};

static const SST_RamByte jsr_final_ram_9[] = {
		{ .addr = 0xa8bf22, .byte = 0x4e },
		{ .addr = 0xa8bf23, .byte = 0xb3 },
		{ .addr = 0xa8bf24, .byte = 0xeb },
		{ .addr = 0xa8bf25, .byte = 0x45 },
		{ .addr = 0xd6dc42, .byte = 0x08 },
		{ .addr = 0xd6dc43, .byte = 0x1b },
		{ .addr = 0xe83024, .byte = 0x00 },
		{ .addr = 0xe83025, .byte = 0xa8 },
		{ .addr = 0xe83026, .byte = 0xbf },
		{ .addr = 0xe83027, .byte = 0x26 },
		{ .addr = 0xd6dc44, .byte = 0xd3 },
		{ .addr = 0xd6dc45, .byte = 0x36 }
};

static const SST_Transaction jsr_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14081090, .data = 2075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15216676, .data = 168, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15216678, .data = 48934, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14081092, .data = 54070, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_10[] = {
		{ .addr = 0xe99926, .byte = 0x4e },
		{ .addr = 0xe99927, .byte = 0x96 },
		{ .addr = 0xe99928, .byte = 0x98 },
		{ .addr = 0xe99929, .byte = 0x15 },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x74 },
		{ .addr = 0x00000e, .byte = 0x22 },
		{ .addr = 0x00000f, .byte = 0xf4 },
		{ .addr = 0x7422f4, .byte = 0x4e },
		{ .addr = 0x7422f5, .byte = 0x7e },
		{ .addr = 0x7422f6, .byte = 0xf4 },
		{ .addr = 0x7422f7, .byte = 0x35 }
};

static const SST_RamByte jsr_final_ram_10[] = {
		{ .addr = 0xe99926, .byte = 0x4e },
		{ .addr = 0xe99927, .byte = 0x96 },
		{ .addr = 0xe99928, .byte = 0x98 },
		{ .addr = 0xe99929, .byte = 0x15 },
		{ .addr = 0xef7540, .byte = 0x99 },
		{ .addr = 0xef7541, .byte = 0x28 },
		{ .addr = 0xef753c, .byte = 0xa3 },
		{ .addr = 0xef753d, .byte = 0x01 },
		{ .addr = 0xef753e, .byte = 0x00 },
		{ .addr = 0xef753f, .byte = 0xe9 },
		{ .addr = 0xef753a, .byte = 0x4e },
		{ .addr = 0xef753b, .byte = 0x96 },
		{ .addr = 0xef7538, .byte = 0x3f },
		{ .addr = 0xef7539, .byte = 0x57 },
		{ .addr = 0xef7534, .byte = 0x4e },
		{ .addr = 0xef7535, .byte = 0x96 },
		{ .addr = 0xef7536, .byte = 0x69 },
		{ .addr = 0xef7537, .byte = 0x29 },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x74 },
		{ .addr = 0x00000e, .byte = 0x22 },
		{ .addr = 0x00000f, .byte = 0xf4 },
		{ .addr = 0x7422f4, .byte = 0x4e },
		{ .addr = 0x7422f5, .byte = 0x7e },
		{ .addr = 0x7422f6, .byte = 0xf4 },
		{ .addr = 0x7422f7, .byte = 0x35 }
};

static const SST_Transaction jsr_transactions_10[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2703190, .data = 13761, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15693120, .data = 39208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15693116, .data = 41729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15693118, .data = 233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15693114, .data = 20118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15693112, .data = 16215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15693108, .data = 20118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15693110, .data = 26921, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7611124, .data = 20094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7611126, .data = 62517, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_11[] = {
		{ .addr = 0x787780, .byte = 0x4e },
		{ .addr = 0x787781, .byte = 0xad },
		{ .addr = 0x787782, .byte = 0x0c },
		{ .addr = 0x787783, .byte = 0xdd },
		{ .addr = 0x00000c, .byte = 0xb5 },
		{ .addr = 0x00000d, .byte = 0xa2 },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xa27c52, .byte = 0x15 },
		{ .addr = 0xa27c53, .byte = 0x35 },
		{ .addr = 0xa27c54, .byte = 0x79 },
		{ .addr = 0xa27c55, .byte = 0x87 }
};

static const SST_RamByte jsr_final_ram_11[] = {
		{ .addr = 0x787780, .byte = 0x4e },
		{ .addr = 0x787781, .byte = 0xad },
		{ .addr = 0x787782, .byte = 0x0c },
		{ .addr = 0x787783, .byte = 0xdd },
		{ .addr = 0x2c060a, .byte = 0x77 },
		{ .addr = 0x2c060b, .byte = 0x84 },
		{ .addr = 0x2c0606, .byte = 0x24 },
		{ .addr = 0x2c0607, .byte = 0x1d },
		{ .addr = 0x2c0608, .byte = 0x00 },
		{ .addr = 0x2c0609, .byte = 0x78 },
		{ .addr = 0x2c0604, .byte = 0x4e },
		{ .addr = 0x2c0605, .byte = 0xad },
		{ .addr = 0x2c0602, .byte = 0x80 },
		{ .addr = 0x2c0603, .byte = 0x21 },
		{ .addr = 0x2c05fe, .byte = 0x4e },
		{ .addr = 0x2c05ff, .byte = 0xb6 },
		{ .addr = 0x2c0600, .byte = 0xe8 },
		{ .addr = 0x2c0601, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0xb5 },
		{ .addr = 0x00000d, .byte = 0xa2 },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xa27c52, .byte = 0x15 },
		{ .addr = 0xa27c53, .byte = 0x35 },
		{ .addr = 0xa27c54, .byte = 0x79 },
		{ .addr = 0xa27c55, .byte = 0x87 }
};

static const SST_Transaction jsr_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4358176, .data = 1145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2885130, .data = 30596, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2885126, .data = 9245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2885128, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2885124, .data = 20141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2885122, .data = 32801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2885118, .data = 20150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2885120, .data = 59458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10648658, .data = 5429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10648660, .data = 31111, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_12[] = {
		{ .addr = 0x8394c2, .byte = 0x4e },
		{ .addr = 0x8394c3, .byte = 0x91 },
		{ .addr = 0x8394c4, .byte = 0x25 },
		{ .addr = 0x8394c5, .byte = 0xbd },
		{ .addr = 0x00000c, .byte = 0xe2 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0xfe },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0x90fe04, .byte = 0xea },
		{ .addr = 0x90fe05, .byte = 0x6e },
		{ .addr = 0x90fe06, .byte = 0xb7 },
		{ .addr = 0x90fe07, .byte = 0x0d }
};

static const SST_RamByte jsr_final_ram_12[] = {
		{ .addr = 0x8394c2, .byte = 0x4e },
		{ .addr = 0x8394c3, .byte = 0x91 },
		{ .addr = 0x8394c4, .byte = 0x25 },
		{ .addr = 0x8394c5, .byte = 0xbd },
		{ .addr = 0x8ba216, .byte = 0x94 },
		{ .addr = 0x8ba217, .byte = 0xc4 },
		{ .addr = 0x8ba212, .byte = 0x87 },
		{ .addr = 0x8ba213, .byte = 0x16 },
		{ .addr = 0x8ba214, .byte = 0x00 },
		{ .addr = 0x8ba215, .byte = 0x83 },
		{ .addr = 0x8ba210, .byte = 0x4e },
		{ .addr = 0x8ba211, .byte = 0x91 },
		{ .addr = 0x8ba20e, .byte = 0xa3 },
		{ .addr = 0x8ba20f, .byte = 0xcd },
		{ .addr = 0x8ba20a, .byte = 0x4e },
		{ .addr = 0x8ba20b, .byte = 0x92 },
		{ .addr = 0x8ba20c, .byte = 0x05 },
		{ .addr = 0x8ba20d, .byte = 0xf6 },
		{ .addr = 0x00000c, .byte = 0xe2 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0xfe },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0x90fe04, .byte = 0xea },
		{ .addr = 0x90fe05, .byte = 0x6e },
		{ .addr = 0x90fe06, .byte = 0xb7 },
		{ .addr = 0x90fe07, .byte = 0x0d }
};

static const SST_Transaction jsr_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16163788, .data = 46953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9150998, .data = 38084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9150994, .data = 34582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9150996, .data = 131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9150992, .data = 20113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9150990, .data = 41933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9150986, .data = 20114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9150988, .data = 1526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 65028, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9502212, .data = 60014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9502214, .data = 46861, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_13[] = {
		{ .addr = 0x3861cc, .byte = 0x4e },
		{ .addr = 0x3861cd, .byte = 0xb4 },
		{ .addr = 0x3861ce, .byte = 0x1c },
		{ .addr = 0x3861cf, .byte = 0x09 },
		{ .addr = 0x83f1da, .byte = 0xbd },
		{ .addr = 0x83f1db, .byte = 0xe9 },
		{ .addr = 0x83f1dc, .byte = 0x7f },
		{ .addr = 0x83f1dd, .byte = 0x15 }
};

static const SST_RamByte jsr_final_ram_13[] = {
		{ .addr = 0x3861cc, .byte = 0x4e },
		{ .addr = 0x3861cd, .byte = 0xb4 },
		{ .addr = 0x3861ce, .byte = 0x1c },
		{ .addr = 0x3861cf, .byte = 0x09 },
		{ .addr = 0x83f1da, .byte = 0xbd },
		{ .addr = 0x83f1db, .byte = 0xe9 },
		{ .addr = 0x551218, .byte = 0x00 },
		{ .addr = 0x551219, .byte = 0x38 },
		{ .addr = 0x55121a, .byte = 0x61 },
		{ .addr = 0x55121b, .byte = 0xd0 },
		{ .addr = 0x83f1dc, .byte = 0x7f },
		{ .addr = 0x83f1dd, .byte = 0x15 }
};

static const SST_Transaction jsr_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8647130, .data = 48617, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5575192, .data = 56, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5575194, .data = 25040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8647132, .data = 32533, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_14[] = {
		{ .addr = 0x3dd31e, .byte = 0x4e },
		{ .addr = 0x3dd31f, .byte = 0xbb },
		{ .addr = 0x3dd320, .byte = 0x3f },
		{ .addr = 0x3dd321, .byte = 0xcf },
		{ .addr = 0x00000c, .byte = 0x7e },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xd7 },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0x38d778, .byte = 0xd5 },
		{ .addr = 0x38d779, .byte = 0xae },
		{ .addr = 0x38d77a, .byte = 0xd6 },
		{ .addr = 0x38d77b, .byte = 0xc2 }
};

static const SST_RamByte jsr_final_ram_14[] = {
		{ .addr = 0x3dd31e, .byte = 0x4e },
		{ .addr = 0x3dd31f, .byte = 0xbb },
		{ .addr = 0x3dd320, .byte = 0x3f },
		{ .addr = 0x3dd321, .byte = 0xcf },
		{ .addr = 0x64e7b4, .byte = 0xd3 },
		{ .addr = 0x64e7b5, .byte = 0x22 },
		{ .addr = 0x64e7b0, .byte = 0x06 },
		{ .addr = 0x64e7b1, .byte = 0x07 },
		{ .addr = 0x64e7b2, .byte = 0x00 },
		{ .addr = 0x64e7b3, .byte = 0x3d },
		{ .addr = 0x64e7ae, .byte = 0x4e },
		{ .addr = 0x64e7af, .byte = 0xbb },
		{ .addr = 0x64e7ac, .byte = 0xef },
		{ .addr = 0x64e7ad, .byte = 0x6d },
		{ .addr = 0x64e7a8, .byte = 0x4e },
		{ .addr = 0x64e7a9, .byte = 0xb2 },
		{ .addr = 0x64e7aa, .byte = 0x46 },
		{ .addr = 0x64e7ab, .byte = 0x50 },
		{ .addr = 0x00000c, .byte = 0x7e },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xd7 },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0x38d778, .byte = 0xd5 },
		{ .addr = 0x38d779, .byte = 0xae },
		{ .addr = 0x38d77a, .byte = 0xd6 },
		{ .addr = 0x38d77b, .byte = 0xc2 }
};

static const SST_Transaction jsr_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5304172, .data = 54386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612916, .data = 54050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612912, .data = 1543, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612914, .data = 61, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612910, .data = 20155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612908, .data = 61293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612904, .data = 20146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612906, .data = 18000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 55160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3725176, .data = 54702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3725178, .data = 54978, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_15[] = {
		{ .addr = 0x906834, .byte = 0x4e },
		{ .addr = 0x906835, .byte = 0xb2 },
		{ .addr = 0x906836, .byte = 0xc3 },
		{ .addr = 0x906837, .byte = 0x30 },
		{ .addr = 0x5c8228, .byte = 0x01 },
		{ .addr = 0x5c8229, .byte = 0x55 },
		{ .addr = 0x5c822a, .byte = 0x37 },
		{ .addr = 0x5c822b, .byte = 0xd5 }
};

static const SST_RamByte jsr_final_ram_15[] = {
		{ .addr = 0x906834, .byte = 0x4e },
		{ .addr = 0x906835, .byte = 0xb2 },
		{ .addr = 0x906836, .byte = 0xc3 },
		{ .addr = 0x906837, .byte = 0x30 },
		{ .addr = 0x5c8228, .byte = 0x01 },
		{ .addr = 0x5c8229, .byte = 0x55 },
		{ .addr = 0x2137ee, .byte = 0x00 },
		{ .addr = 0x2137ef, .byte = 0x90 },
		{ .addr = 0x2137f0, .byte = 0x68 },
		{ .addr = 0x2137f1, .byte = 0x38 },
		{ .addr = 0x5c822a, .byte = 0x37 },
		{ .addr = 0x5c822b, .byte = 0xd5 }
};

static const SST_Transaction jsr_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6062632, .data = 341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2177006, .data = 144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2177008, .data = 26680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6062634, .data = 14293, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_16[] = {
		{ .addr = 0xbf41a6, .byte = 0x4e },
		{ .addr = 0xbf41a7, .byte = 0xb8 },
		{ .addr = 0xbf41a8, .byte = 0xb9 },
		{ .addr = 0xbf41a9, .byte = 0xa4 },
		{ .addr = 0xffb9a4, .byte = 0xeb },
		{ .addr = 0xffb9a5, .byte = 0xcd },
		{ .addr = 0xffb9a6, .byte = 0x47 },
		{ .addr = 0xffb9a7, .byte = 0x7b }
};

static const SST_RamByte jsr_final_ram_16[] = {
		{ .addr = 0xbf41a6, .byte = 0x4e },
		{ .addr = 0xbf41a7, .byte = 0xb8 },
		{ .addr = 0xbf41a8, .byte = 0xb9 },
		{ .addr = 0xbf41a9, .byte = 0xa4 },
		{ .addr = 0xffb9a4, .byte = 0xeb },
		{ .addr = 0xffb9a5, .byte = 0xcd },
		{ .addr = 0xdab44e, .byte = 0x00 },
		{ .addr = 0xdab44f, .byte = 0xbf },
		{ .addr = 0xdab450, .byte = 0x41 },
		{ .addr = 0xdab451, .byte = 0xaa },
		{ .addr = 0xffb9a6, .byte = 0x47 },
		{ .addr = 0xffb9a7, .byte = 0x7b }
};

static const SST_Transaction jsr_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16759204, .data = 60365, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14333006, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14333008, .data = 16810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16759206, .data = 18299, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_17[] = {
		{ .addr = 0x8de38a, .byte = 0x4e },
		{ .addr = 0x8de38b, .byte = 0xb4 },
		{ .addr = 0x8de38c, .byte = 0x98 },
		{ .addr = 0x8de38d, .byte = 0xc6 },
		{ .addr = 0x9d7660, .byte = 0x14 },
		{ .addr = 0x9d7661, .byte = 0x55 },
		{ .addr = 0x9d7662, .byte = 0xf9 },
		{ .addr = 0x9d7663, .byte = 0x71 }
};

static const SST_RamByte jsr_final_ram_17[] = {
		{ .addr = 0x8de38a, .byte = 0x4e },
		{ .addr = 0x8de38b, .byte = 0xb4 },
		{ .addr = 0x8de38c, .byte = 0x98 },
		{ .addr = 0x8de38d, .byte = 0xc6 },
		{ .addr = 0x9d7660, .byte = 0x14 },
		{ .addr = 0x9d7661, .byte = 0x55 },
		{ .addr = 0x0be79a, .byte = 0x00 },
		{ .addr = 0x0be79b, .byte = 0x8d },
		{ .addr = 0x0be79c, .byte = 0xe3 },
		{ .addr = 0x0be79d, .byte = 0x8e },
		{ .addr = 0x9d7662, .byte = 0xf9 },
		{ .addr = 0x9d7663, .byte = 0x71 }
};

static const SST_Transaction jsr_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10319456, .data = 5205, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 780186, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 780188, .data = 58254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10319458, .data = 63857, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_18[] = {
		{ .addr = 0x636d40, .byte = 0x4e },
		{ .addr = 0x636d41, .byte = 0x96 },
		{ .addr = 0x636d42, .byte = 0x8f },
		{ .addr = 0x636d43, .byte = 0x5e },
		{ .addr = 0x8a2242, .byte = 0x18 },
		{ .addr = 0x8a2243, .byte = 0x46 },
		{ .addr = 0x8a2244, .byte = 0xb9 },
		{ .addr = 0x8a2245, .byte = 0x34 }
};

static const SST_RamByte jsr_final_ram_18[] = {
		{ .addr = 0x636d40, .byte = 0x4e },
		{ .addr = 0x636d41, .byte = 0x96 },
		{ .addr = 0x636d42, .byte = 0x8f },
		{ .addr = 0x636d43, .byte = 0x5e },
		{ .addr = 0x8a2242, .byte = 0x18 },
		{ .addr = 0x8a2243, .byte = 0x46 },
		{ .addr = 0xc81498, .byte = 0x00 },
		{ .addr = 0xc81499, .byte = 0x63 },
		{ .addr = 0xc8149a, .byte = 0x6d },
		{ .addr = 0xc8149b, .byte = 0x42 },
		{ .addr = 0x8a2244, .byte = 0xb9 },
		{ .addr = 0x8a2245, .byte = 0x34 }
};

static const SST_Transaction jsr_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9052738, .data = 6214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13112472, .data = 99, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13112474, .data = 27970, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9052740, .data = 47412, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_19[] = {
		{ .addr = 0xb72e8c, .byte = 0x4e },
		{ .addr = 0xb72e8d, .byte = 0x96 },
		{ .addr = 0xb72e8e, .byte = 0x0b },
		{ .addr = 0xb72e8f, .byte = 0x3e },
		{ .addr = 0x79be78, .byte = 0x47 },
		{ .addr = 0x79be79, .byte = 0xfb },
		{ .addr = 0x79be7a, .byte = 0x37 },
		{ .addr = 0x79be7b, .byte = 0x82 }
};

static const SST_RamByte jsr_final_ram_19[] = {
		{ .addr = 0xb72e8c, .byte = 0x4e },
		{ .addr = 0xb72e8d, .byte = 0x96 },
		{ .addr = 0xb72e8e, .byte = 0x0b },
		{ .addr = 0xb72e8f, .byte = 0x3e },
		{ .addr = 0x79be78, .byte = 0x47 },
		{ .addr = 0x79be79, .byte = 0xfb },
		{ .addr = 0xa36318, .byte = 0x00 },
		{ .addr = 0xa36319, .byte = 0xb7 },
		{ .addr = 0xa3631a, .byte = 0x2e },
		{ .addr = 0xa3631b, .byte = 0x8e },
		{ .addr = 0x79be7a, .byte = 0x37 },
		{ .addr = 0x79be7b, .byte = 0x82 }
};

static const SST_Transaction jsr_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7978616, .data = 18427, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10707736, .data = 183, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10707738, .data = 11918, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7978618, .data = 14210, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_20[] = {
		{ .addr = 0x50ba9c, .byte = 0x4e },
		{ .addr = 0x50ba9d, .byte = 0xb0 },
		{ .addr = 0x50ba9e, .byte = 0x6b },
		{ .addr = 0x50ba9f, .byte = 0x27 },
		{ .addr = 0x00000c, .byte = 0x6b },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0xa83f68, .byte = 0xa0 },
		{ .addr = 0xa83f69, .byte = 0xdf },
		{ .addr = 0xa83f6a, .byte = 0x6a },
		{ .addr = 0xa83f6b, .byte = 0x0d }
};

static const SST_RamByte jsr_final_ram_20[] = {
		{ .addr = 0x50ba9c, .byte = 0x4e },
		{ .addr = 0x50ba9d, .byte = 0xb0 },
		{ .addr = 0x50ba9e, .byte = 0x6b },
		{ .addr = 0x50ba9f, .byte = 0x27 },
		{ .addr = 0x8bd746, .byte = 0xba },
		{ .addr = 0x8bd747, .byte = 0xa0 },
		{ .addr = 0x8bd742, .byte = 0x85 },
		{ .addr = 0x8bd743, .byte = 0x02 },
		{ .addr = 0x8bd744, .byte = 0x00 },
		{ .addr = 0x8bd745, .byte = 0x50 },
		{ .addr = 0x8bd740, .byte = 0x4e },
		{ .addr = 0x8bd741, .byte = 0xb0 },
		{ .addr = 0x8bd73e, .byte = 0xc4 },
		{ .addr = 0x8bd73f, .byte = 0x1b },
		{ .addr = 0x8bd73a, .byte = 0x4e },
		{ .addr = 0x8bd73b, .byte = 0xb2 },
		{ .addr = 0x8bd73c, .byte = 0x98 },
		{ .addr = 0x8bd73d, .byte = 0x2c },
		{ .addr = 0x00000c, .byte = 0x6b },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0xa83f68, .byte = 0xa0 },
		{ .addr = 0xa83f69, .byte = 0xdf },
		{ .addr = 0xa83f6a, .byte = 0x6a },
		{ .addr = 0xa83f6b, .byte = 0x0d }
};

static const SST_Transaction jsr_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2933786, .data = 46497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9164614, .data = 47776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9164610, .data = 34050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9164612, .data = 80, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9164608, .data = 20144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9164606, .data = 50203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9164602, .data = 20146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9164604, .data = 38956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 27560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11026280, .data = 41183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11026282, .data = 27149, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_21[] = {
		{ .addr = 0x1feb44, .byte = 0x4e },
		{ .addr = 0x1feb45, .byte = 0x92 },
		{ .addr = 0x1feb46, .byte = 0x3f },
		{ .addr = 0x1feb47, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0xfe },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x9e },
		{ .addr = 0x00000f, .byte = 0xa4 },
		{ .addr = 0xd89ea4, .byte = 0xfd },
		{ .addr = 0xd89ea5, .byte = 0x0f },
		{ .addr = 0xd89ea6, .byte = 0x15 },
		{ .addr = 0xd89ea7, .byte = 0x0a }
};

static const SST_RamByte jsr_final_ram_21[] = {
		{ .addr = 0x1feb44, .byte = 0x4e },
		{ .addr = 0x1feb45, .byte = 0x92 },
		{ .addr = 0x1feb46, .byte = 0x3f },
		{ .addr = 0x1feb47, .byte = 0x5f },
		{ .addr = 0xd2f3ae, .byte = 0xeb },
		{ .addr = 0xd2f3af, .byte = 0x46 },
		{ .addr = 0xd2f3aa, .byte = 0x00 },
		{ .addr = 0xd2f3ab, .byte = 0x18 },
		{ .addr = 0xd2f3ac, .byte = 0x00 },
		{ .addr = 0xd2f3ad, .byte = 0x1f },
		{ .addr = 0xd2f3a8, .byte = 0x4e },
		{ .addr = 0xd2f3a9, .byte = 0x92 },
		{ .addr = 0xd2f3a6, .byte = 0x55 },
		{ .addr = 0xd2f3a7, .byte = 0x3f },
		{ .addr = 0xd2f3a2, .byte = 0x4e },
		{ .addr = 0xd2f3a3, .byte = 0x92 },
		{ .addr = 0xd2f3a4, .byte = 0xe1 },
		{ .addr = 0xd2f3a5, .byte = 0x22 },
		{ .addr = 0x00000c, .byte = 0xfe },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x9e },
		{ .addr = 0x00000f, .byte = 0xa4 },
		{ .addr = 0xd89ea4, .byte = 0xfd },
		{ .addr = 0xd89ea5, .byte = 0x0f },
		{ .addr = 0xd89ea6, .byte = 0x15 },
		{ .addr = 0xd89ea7, .byte = 0x0a }
};

static const SST_Transaction jsr_transactions_21[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2250046, .data = 51181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824942, .data = 60230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824938, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824940, .data = 31, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824936, .data = 20114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824934, .data = 21823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824930, .data = 20114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824932, .data = 57634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 65240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 40612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14196388, .data = 64783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14196390, .data = 5386, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_22[] = {
		{ .addr = 0xaee726, .byte = 0x4e },
		{ .addr = 0xaee727, .byte = 0xa8 },
		{ .addr = 0xaee728, .byte = 0xdc },
		{ .addr = 0xaee729, .byte = 0xd1 },
		{ .addr = 0x00000c, .byte = 0x1d },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x1d },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xf61d3a, .byte = 0xd5 },
		{ .addr = 0xf61d3b, .byte = 0xea },
		{ .addr = 0xf61d3c, .byte = 0x75 },
		{ .addr = 0xf61d3d, .byte = 0x45 }
};

static const SST_RamByte jsr_final_ram_22[] = {
		{ .addr = 0xaee726, .byte = 0x4e },
		{ .addr = 0xaee727, .byte = 0xa8 },
		{ .addr = 0xaee728, .byte = 0xdc },
		{ .addr = 0xaee729, .byte = 0xd1 },
		{ .addr = 0xdb4e0e, .byte = 0xe7 },
		{ .addr = 0xdb4e0f, .byte = 0x2a },
		{ .addr = 0xdb4e0a, .byte = 0x07 },
		{ .addr = 0xdb4e0b, .byte = 0x15 },
		{ .addr = 0xdb4e0c, .byte = 0x00 },
		{ .addr = 0xdb4e0d, .byte = 0xae },
		{ .addr = 0xdb4e08, .byte = 0x4e },
		{ .addr = 0xdb4e09, .byte = 0xa8 },
		{ .addr = 0xdb4e06, .byte = 0xd4 },
		{ .addr = 0xdb4e07, .byte = 0xc5 },
		{ .addr = 0xdb4e02, .byte = 0x4e },
		{ .addr = 0xdb4e03, .byte = 0xb2 },
		{ .addr = 0xdb4e04, .byte = 0x62 },
		{ .addr = 0xdb4e05, .byte = 0x63 },
		{ .addr = 0x00000c, .byte = 0x1d },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x1d },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xf61d3a, .byte = 0xd5 },
		{ .addr = 0xf61d3b, .byte = 0xea },
		{ .addr = 0xf61d3c, .byte = 0x75 },
		{ .addr = 0xf61d3d, .byte = 0x45 }
};

static const SST_Transaction jsr_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6542532, .data = 63067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14372366, .data = 59178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14372362, .data = 1813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14372364, .data = 174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14372360, .data = 20136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14372358, .data = 54469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14372354, .data = 20146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14372356, .data = 25187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16129338, .data = 54762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16129340, .data = 30021, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_23[] = {
		{ .addr = 0xbe173a, .byte = 0x4e },
		{ .addr = 0xbe173b, .byte = 0x91 },
		{ .addr = 0xbe173c, .byte = 0x71 },
		{ .addr = 0xbe173d, .byte = 0x67 },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0xfb },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x46fb4c, .byte = 0x5c },
		{ .addr = 0x46fb4d, .byte = 0x46 },
		{ .addr = 0x46fb4e, .byte = 0x3d },
		{ .addr = 0x46fb4f, .byte = 0xc9 }
};

static const SST_RamByte jsr_final_ram_23[] = {
		{ .addr = 0xbe173a, .byte = 0x4e },
		{ .addr = 0xbe173b, .byte = 0x91 },
		{ .addr = 0xbe173c, .byte = 0x71 },
		{ .addr = 0xbe173d, .byte = 0x67 },
		{ .addr = 0xf015c0, .byte = 0x17 },
		{ .addr = 0xf015c1, .byte = 0x3c },
		{ .addr = 0xf015bc, .byte = 0xa6 },
		{ .addr = 0xf015bd, .byte = 0x00 },
		{ .addr = 0xf015be, .byte = 0x00 },
		{ .addr = 0xf015bf, .byte = 0xbe },
		{ .addr = 0xf015ba, .byte = 0x4e },
		{ .addr = 0xf015bb, .byte = 0x91 },
		{ .addr = 0xf015b8, .byte = 0x04 },
		{ .addr = 0xf015b9, .byte = 0x5f },
		{ .addr = 0xf015b4, .byte = 0x4e },
		{ .addr = 0xf015b5, .byte = 0x96 },
		{ .addr = 0xf015b6, .byte = 0xf7 },
		{ .addr = 0xf015b7, .byte = 0x3f },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0xfb },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x46fb4c, .byte = 0x5c },
		{ .addr = 0x46fb4d, .byte = 0x46 },
		{ .addr = 0x46fb4e, .byte = 0x3d },
		{ .addr = 0x46fb4f, .byte = 0xc9 }
};

static const SST_Transaction jsr_transactions_23[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4129886, .data = 54702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15734208, .data = 5948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15734204, .data = 42496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15734206, .data = 190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15734202, .data = 20113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15734200, .data = 1119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15734196, .data = 20118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15734198, .data = 63295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 64332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4651852, .data = 23622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4651854, .data = 15817, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_24[] = {
		{ .addr = 0x14b07a, .byte = 0x4e },
		{ .addr = 0x14b07b, .byte = 0xa8 },
		{ .addr = 0x14b07c, .byte = 0xf6 },
		{ .addr = 0x14b07d, .byte = 0xf6 },
		{ .addr = 0x6f9214, .byte = 0x18 },
		{ .addr = 0x6f9215, .byte = 0x70 },
		{ .addr = 0x6f9216, .byte = 0xf8 },
		{ .addr = 0x6f9217, .byte = 0x68 }
};

static const SST_RamByte jsr_final_ram_24[] = {
		{ .addr = 0x14b07a, .byte = 0x4e },
		{ .addr = 0x14b07b, .byte = 0xa8 },
		{ .addr = 0x14b07c, .byte = 0xf6 },
		{ .addr = 0x14b07d, .byte = 0xf6 },
		{ .addr = 0x6f9214, .byte = 0x18 },
		{ .addr = 0x6f9215, .byte = 0x70 },
		{ .addr = 0xe60244, .byte = 0x00 },
		{ .addr = 0xe60245, .byte = 0x14 },
		{ .addr = 0xe60246, .byte = 0xb0 },
		{ .addr = 0xe60247, .byte = 0x7e },
		{ .addr = 0x6f9216, .byte = 0xf8 },
		{ .addr = 0x6f9217, .byte = 0x68 }
};

static const SST_Transaction jsr_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7311892, .data = 6256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15073860, .data = 20, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15073862, .data = 45182, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7311894, .data = 63592, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_25[] = {
		{ .addr = 0x3f277e, .byte = 0x4e },
		{ .addr = 0x3f277f, .byte = 0xbb },
		{ .addr = 0x3f2780, .byte = 0x13 },
		{ .addr = 0x3f2781, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0xad },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x66 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0xde668c, .byte = 0xf5 },
		{ .addr = 0xde668d, .byte = 0x81 },
		{ .addr = 0xde668e, .byte = 0x1e },
		{ .addr = 0xde668f, .byte = 0xab }
};

static const SST_RamByte jsr_final_ram_25[] = {
		{ .addr = 0x3f277e, .byte = 0x4e },
		{ .addr = 0x3f277f, .byte = 0xbb },
		{ .addr = 0x3f2780, .byte = 0x13 },
		{ .addr = 0x3f2781, .byte = 0x3e },
		{ .addr = 0xf66cae, .byte = 0x27 },
		{ .addr = 0xf66caf, .byte = 0x82 },
		{ .addr = 0xf66caa, .byte = 0x85 },
		{ .addr = 0xf66cab, .byte = 0x1d },
		{ .addr = 0xf66cac, .byte = 0x00 },
		{ .addr = 0xf66cad, .byte = 0x3f },
		{ .addr = 0xf66ca8, .byte = 0x4e },
		{ .addr = 0xf66ca9, .byte = 0xbb },
		{ .addr = 0xf66ca6, .byte = 0x1a },
		{ .addr = 0xf66ca7, .byte = 0x9d },
		{ .addr = 0xf66ca2, .byte = 0x4e },
		{ .addr = 0xf66ca3, .byte = 0xb2 },
		{ .addr = 0xf66ca4, .byte = 0x00 },
		{ .addr = 0xf66ca5, .byte = 0x3f },
		{ .addr = 0x00000c, .byte = 0xad },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x66 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0xde668c, .byte = 0xf5 },
		{ .addr = 0xde668d, .byte = 0x81 },
		{ .addr = 0xde668e, .byte = 0x1e },
		{ .addr = 0xde668f, .byte = 0xab }
};

static const SST_Transaction jsr_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4135580, .data = 24465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16149678, .data = 10114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16149674, .data = 34077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16149676, .data = 63, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16149672, .data = 20155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16149670, .data = 6813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16149666, .data = 20146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16149668, .data = 63, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14575244, .data = 62849, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14575246, .data = 7851, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_26[] = {
		{ .addr = 0x661224, .byte = 0x4e },
		{ .addr = 0x661225, .byte = 0xbb },
		{ .addr = 0x661226, .byte = 0x31 },
		{ .addr = 0x661227, .byte = 0x5c },
		{ .addr = 0x65d1ec, .byte = 0xc4 },
		{ .addr = 0x65d1ed, .byte = 0xa5 },
		{ .addr = 0x65d1ee, .byte = 0x97 },
		{ .addr = 0x65d1ef, .byte = 0xed }
};

static const SST_RamByte jsr_final_ram_26[] = {
		{ .addr = 0x661224, .byte = 0x4e },
		{ .addr = 0x661225, .byte = 0xbb },
		{ .addr = 0x661226, .byte = 0x31 },
		{ .addr = 0x661227, .byte = 0x5c },
		{ .addr = 0x65d1ec, .byte = 0xc4 },
		{ .addr = 0x65d1ed, .byte = 0xa5 },
		{ .addr = 0x079b7c, .byte = 0x00 },
		{ .addr = 0x079b7d, .byte = 0x66 },
		{ .addr = 0x079b7e, .byte = 0x12 },
		{ .addr = 0x079b7f, .byte = 0x28 },
		{ .addr = 0x65d1ee, .byte = 0x97 },
		{ .addr = 0x65d1ef, .byte = 0xed }
};

static const SST_Transaction jsr_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6672876, .data = 50341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 498556, .data = 102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 498558, .data = 4648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6672878, .data = 38893, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_27[] = {
		{ .addr = 0xdcbf88, .byte = 0x4e },
		{ .addr = 0xdcbf89, .byte = 0x90 },
		{ .addr = 0xdcbf8a, .byte = 0xd4 },
		{ .addr = 0xdcbf8b, .byte = 0x0f },
		{ .addr = 0x00000c, .byte = 0x30 },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0x83 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x488350, .byte = 0xb3 },
		{ .addr = 0x488351, .byte = 0x37 },
		{ .addr = 0x488352, .byte = 0x8a },
		{ .addr = 0x488353, .byte = 0x6d }
};

static const SST_RamByte jsr_final_ram_27[] = {
		{ .addr = 0xdcbf88, .byte = 0x4e },
		{ .addr = 0xdcbf89, .byte = 0x90 },
		{ .addr = 0xdcbf8a, .byte = 0xd4 },
		{ .addr = 0xdcbf8b, .byte = 0x0f },
		{ .addr = 0x1761f4, .byte = 0xbf },
		{ .addr = 0x1761f5, .byte = 0x8a },
		{ .addr = 0x1761f0, .byte = 0x05 },
		{ .addr = 0x1761f1, .byte = 0x06 },
		{ .addr = 0x1761f2, .byte = 0x00 },
		{ .addr = 0x1761f3, .byte = 0xdc },
		{ .addr = 0x1761ee, .byte = 0x4e },
		{ .addr = 0x1761ef, .byte = 0x90 },
		{ .addr = 0x1761ec, .byte = 0x01 },
		{ .addr = 0x1761ed, .byte = 0x11 },
		{ .addr = 0x1761e8, .byte = 0x4e },
		{ .addr = 0x1761e9, .byte = 0x92 },
		{ .addr = 0x1761ea, .byte = 0x57 },
		{ .addr = 0x1761eb, .byte = 0xbb },
		{ .addr = 0x00000c, .byte = 0x30 },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0x83 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x488350, .byte = 0xb3 },
		{ .addr = 0x488351, .byte = 0x37 },
		{ .addr = 0x488352, .byte = 0x8a },
		{ .addr = 0x488353, .byte = 0x6d }
};

static const SST_Transaction jsr_transactions_27[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12255504, .data = 42304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532404, .data = 49034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532400, .data = 1286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532402, .data = 220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532398, .data = 20112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532396, .data = 273, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532392, .data = 20114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532394, .data = 22459, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 12360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4752208, .data = 45879, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4752210, .data = 35437, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_28[] = {
		{ .addr = 0x548a60, .byte = 0x4e },
		{ .addr = 0x548a61, .byte = 0xb0 },
		{ .addr = 0x548a62, .byte = 0x62 },
		{ .addr = 0x548a63, .byte = 0x08 },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x4d },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xf44d0a, .byte = 0x77 },
		{ .addr = 0xf44d0b, .byte = 0xa3 },
		{ .addr = 0xf44d0c, .byte = 0x43 },
		{ .addr = 0xf44d0d, .byte = 0xc5 }
};

static const SST_RamByte jsr_final_ram_28[] = {
		{ .addr = 0x548a60, .byte = 0x4e },
		{ .addr = 0x548a61, .byte = 0xb0 },
		{ .addr = 0x548a62, .byte = 0x62 },
		{ .addr = 0x548a63, .byte = 0x08 },
		{ .addr = 0x5c4016, .byte = 0x8a },
		{ .addr = 0x5c4017, .byte = 0x64 },
		{ .addr = 0x5c4012, .byte = 0xa1 },
		{ .addr = 0x5c4013, .byte = 0x1c },
		{ .addr = 0x5c4014, .byte = 0x00 },
		{ .addr = 0x5c4015, .byte = 0x54 },
		{ .addr = 0x5c4010, .byte = 0x4e },
		{ .addr = 0x5c4011, .byte = 0xb0 },
		{ .addr = 0x5c400e, .byte = 0x64 },
		{ .addr = 0x5c400f, .byte = 0x29 },
		{ .addr = 0x5c400a, .byte = 0x4e },
		{ .addr = 0x5c400b, .byte = 0xb6 },
		{ .addr = 0x5c400c, .byte = 0x39 },
		{ .addr = 0x5c400d, .byte = 0xfe },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x4d },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xf44d0a, .byte = 0x77 },
		{ .addr = 0xf44d0b, .byte = 0xa3 },
		{ .addr = 0xf44d0c, .byte = 0x43 },
		{ .addr = 0xf44d0d, .byte = 0xc5 }
};

static const SST_Transaction jsr_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16671784, .data = 51267, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6045718, .data = 35428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6045714, .data = 41244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6045716, .data = 84, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6045712, .data = 20144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6045710, .data = 25641, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6045706, .data = 20150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6045708, .data = 14846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 19722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16010506, .data = 30627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16010508, .data = 17349, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_29[] = {
		{ .addr = 0xdfbea4, .byte = 0x4e },
		{ .addr = 0xdfbea5, .byte = 0xae },
		{ .addr = 0xdfbea6, .byte = 0xb3 },
		{ .addr = 0xdfbea7, .byte = 0xa4 },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0x94 },
		{ .addr = 0x00000e, .byte = 0x42 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x944220, .byte = 0x3b },
		{ .addr = 0x944221, .byte = 0xac },
		{ .addr = 0x944222, .byte = 0xc6 },
		{ .addr = 0x944223, .byte = 0x1f }
};

static const SST_RamByte jsr_final_ram_29[] = {
		{ .addr = 0xdfbea4, .byte = 0x4e },
		{ .addr = 0xdfbea5, .byte = 0xae },
		{ .addr = 0xdfbea6, .byte = 0xb3 },
		{ .addr = 0xdfbea7, .byte = 0xa4 },
		{ .addr = 0xe7a8b6, .byte = 0xbe },
		{ .addr = 0xe7a8b7, .byte = 0xa8 },
		{ .addr = 0xe7a8b2, .byte = 0x25 },
		{ .addr = 0xe7a8b3, .byte = 0x02 },
		{ .addr = 0xe7a8b4, .byte = 0x00 },
		{ .addr = 0xe7a8b5, .byte = 0xdf },
		{ .addr = 0xe7a8b0, .byte = 0x4e },
		{ .addr = 0xe7a8b1, .byte = 0xae },
		{ .addr = 0xe7a8ae, .byte = 0x93 },
		{ .addr = 0xe7a8af, .byte = 0x21 },
		{ .addr = 0xe7a8aa, .byte = 0x4e },
		{ .addr = 0xe7a8ab, .byte = 0xb6 },
		{ .addr = 0xe7a8ac, .byte = 0x27 },
		{ .addr = 0xe7a8ad, .byte = 0xc0 },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0x94 },
		{ .addr = 0x00000e, .byte = 0x42 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x944220, .byte = 0x3b },
		{ .addr = 0x944221, .byte = 0xac },
		{ .addr = 0x944222, .byte = 0xc6 },
		{ .addr = 0x944223, .byte = 0x1f }
};

static const SST_Transaction jsr_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12620576, .data = 53667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15182006, .data = 48808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15182002, .data = 9474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15182004, .data = 223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15182000, .data = 20142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15181998, .data = 37665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15181994, .data = 20150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15181996, .data = 10176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9716256, .data = 15276, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9716258, .data = 50719, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_30[] = {
		{ .addr = 0x7e5a34, .byte = 0x4e },
		{ .addr = 0x7e5a35, .byte = 0xb6 },
		{ .addr = 0x7e5a36, .byte = 0xf2 },
		{ .addr = 0x7e5a37, .byte = 0x99 },
		{ .addr = 0x529ad8, .byte = 0x1a },
		{ .addr = 0x529ad9, .byte = 0xf1 },
		{ .addr = 0x529ada, .byte = 0x50 },
		{ .addr = 0x529adb, .byte = 0x4a }
};

static const SST_RamByte jsr_final_ram_30[] = {
		{ .addr = 0x7e5a34, .byte = 0x4e },
		{ .addr = 0x7e5a35, .byte = 0xb6 },
		{ .addr = 0x7e5a36, .byte = 0xf2 },
		{ .addr = 0x7e5a37, .byte = 0x99 },
		{ .addr = 0x529ad8, .byte = 0x1a },
		{ .addr = 0x529ad9, .byte = 0xf1 },
		{ .addr = 0xffe250, .byte = 0x00 },
		{ .addr = 0xffe251, .byte = 0x7e },
		{ .addr = 0xffe252, .byte = 0x5a },
		{ .addr = 0xffe253, .byte = 0x38 },
		{ .addr = 0x529ada, .byte = 0x50 },
		{ .addr = 0x529adb, .byte = 0x4a }
};

static const SST_Transaction jsr_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5413592, .data = 6897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16769616, .data = 126, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16769618, .data = 23096, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5413594, .data = 20554, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jsr_initial_ram_31[] = {
		{ .addr = 0x702baa, .byte = 0x4e },
		{ .addr = 0x702bab, .byte = 0xb1 },
		{ .addr = 0x702bac, .byte = 0x9a },
		{ .addr = 0x702bad, .byte = 0x72 },
		{ .addr = 0x86a192, .byte = 0x62 },
		{ .addr = 0x86a193, .byte = 0x0e },
		{ .addr = 0x86a194, .byte = 0x4e },
		{ .addr = 0x86a195, .byte = 0x0b }
};

static const SST_RamByte jsr_final_ram_31[] = {
		{ .addr = 0x702baa, .byte = 0x4e },
		{ .addr = 0x702bab, .byte = 0xb1 },
		{ .addr = 0x702bac, .byte = 0x9a },
		{ .addr = 0x702bad, .byte = 0x72 },
		{ .addr = 0x86a192, .byte = 0x62 },
		{ .addr = 0x86a193, .byte = 0x0e },
		{ .addr = 0x3ccd12, .byte = 0x00 },
		{ .addr = 0x3ccd13, .byte = 0x70 },
		{ .addr = 0x3ccd14, .byte = 0x2b },
		{ .addr = 0x3ccd15, .byte = 0xae },
		{ .addr = 0x86a194, .byte = 0x4e },
		{ .addr = 0x86a195, .byte = 0x0b }
};

static const SST_Transaction jsr_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8823186, .data = 25102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3984658, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3984660, .data = 11182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8823188, .data = 19979, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase jsr[] = {
	{
		.name = "000 JSR (d8, A1, Xn) 4eb1",
		.initial = {
			.regs = {
				1600294685, 3112433752, 1669031062, 34427579, 1785411382, 1773508002, 2759635301, 758111668, 1754547812, 1256436806, 438165672, 2420389637, 2509340694, 1870930497, 372462759, 14355986, 12815352, 8982, 7570002
			},
			.prefetch0 = 20145,
			.prefetch1 = 36084,
			.ram = jsr_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1600294685, 3112433752, 1669031062, 34427579, 1785411382, 1773508002, 2759635301, 758111668, 1754547812, 1256436806, 438165672, 2420389637, 2509340694, 1870930497, 372462759, 14355986, 12815348, 8982, 3010984610
			},
			.prefetch0 = 21341,
			.prefetch1 = 22405,
			.ram = jsr_final_ram_0,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_0,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "001 JSR (A6) 4e96",
		.initial = {
			.regs = {
				3374826780, 1211036744, 1138224997, 2397507261, 2227217871, 4146976500, 3946080710, 1705556287, 567503319, 671161702, 4025955989, 181650901, 3749499820, 850474776, 1405268988, 2704194, 13706516, 33052, 4034544
			},
			.prefetch0 = 20118,
			.prefetch1 = 43122,
			.ram = jsr_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3374826780, 1211036744, 1138224997, 2397507261, 2227217871, 4146976500, 3946080710, 1705556287, 567503319, 671161702, 4025955989, 181650901, 3749499820, 850474776, 1405268988, 2704190, 13706516, 33052, 1405268992
			},
			.prefetch0 = 61122,
			.prefetch1 = 22197,
			.ram = jsr_final_ram_1,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 JSR (d8, A7, Xn) 4eb7",
		.initial = {
			.regs = {
				2967125737, 3658238275, 439436866, 4256833390, 1610722794, 3567740789, 3381064556, 1504898865, 3751398968, 3020471923, 2996306777, 2081827050, 1121175494, 3655259851, 700200199, 14584878, 650032, 32790, 9084740
			},
			.prefetch0 = 20151,
			.prefetch1 = 20714,
			.ram = jsr_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2967125737, 3658238275, 439436866, 4256833390, 1610722794, 3567740789, 3381064556, 1504898865, 3751398968, 3020471923, 2996306777, 2081827050, 1121175494, 3655259851, 700200199, 14584878, 650018, 8214, 1715392058
			},
			.prefetch0 = 2447,
			.prefetch1 = 62149,
			.ram = jsr_final_ram_2,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_2,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "003 JSR (xxx).l 4eb9",
		.initial = {
			.regs = {
				3629459289, 505751997, 2371311158, 296642398, 660777361, 3722988078, 3290962611, 3654872057, 3569888054, 3299105378, 2805553307, 3980594431, 2312660712, 4101499234, 4263061543, 4445360, 2752178, 9746, 15194720
			},
			.prefetch0 = 20153,
			.prefetch1 = 6759,
			.ram = jsr_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3629459289, 505751997, 2371311158, 296642398, 660777361, 3722988078, 3290962611, 3654872057, 3569888054, 3299105378, 2805553307, 3980594431, 2312660712, 4101499234, 4263061543, 4445360, 2752174, 9746, 442973624
			},
			.prefetch0 = 65369,
			.prefetch1 = 35293,
			.ram = jsr_final_ram_3,
			.ram_len = 14,
		},
		.transactions = jsr_transactions_3,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "004 JSR (d16, A2) 4eaa",
		.initial = {
			.regs = {
				1653820370, 89381957, 1168307529, 2579172557, 1164387409, 3272637903, 3086817707, 531382908, 3925144388, 3923173557, 2316883848, 3922179813, 3082849593, 929601401, 16910373, 11441302, 2564518, 34057, 16480696
			},
			.prefetch0 = 20138,
			.prefetch1 = 13181,
			.ram = jsr_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1653820370, 89381957, 1168307529, 2579172557, 1164387409, 3272637903, 3086817707, 531382908, 3925144388, 3923173557, 2316883848, 3922179813, 3082849593, 929601401, 16910373, 11441302, 2564504, 9481, 3385861912
			},
			.prefetch0 = 49351,
			.prefetch1 = 45578,
			.ram = jsr_final_ram_4,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_4,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "005 JSR (d16, A1) 4ea9",
		.initial = {
			.regs = {
				175866040, 3945007364, 429669764, 408215901, 2944070067, 620492651, 2868662461, 727666694, 586259556, 1793074578, 2008028552, 460941069, 3336978718, 1645087626, 1123947493, 3023518, 497940, 40988, 3855534
			},
			.prefetch0 = 20137,
			.prefetch1 = 62688,
			.ram = jsr_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				175866040, 3945007364, 429669764, 408215901, 2944070067, 620492651, 2868662461, 727666694, 586259556, 1793074578, 2008028552, 460941069, 3336978718, 1645087626, 1123947493, 3023518, 497936, 40988, 1793071734
			},
			.prefetch0 = 55460,
			.prefetch1 = 90,
			.ram = jsr_final_ram_5,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 JSR (d8, A5, Xn) 4eb5",
		.initial = {
			.regs = {
				3946715892, 896668785, 2876832437, 1307612779, 3357202831, 1771610037, 1709091251, 3127219299, 2645316767, 1299944530, 1045511446, 2522068561, 1413116790, 492402538, 2516018428, 8348492, 2822016, 18, 8898004
			},
			.prefetch0 = 20149,
			.prefetch1 = 63232,
			.ram = jsr_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3946715892, 896668785, 2876832437, 1307612779, 3357202831, 1771610037, 1709091251, 3127219299, 2645316767, 1299944530, 1045511446, 2522068561, 1413116790, 492402538, 2516018428, 8348488, 2822016, 18, 492427962
			},
			.prefetch0 = 6096,
			.prefetch1 = 15917,
			.ram = jsr_final_ram_6,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_6,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "007 JSR (A3) 4e93",
		.initial = {
			.regs = {
				2633952967, 2710841423, 1084660424, 399077773, 3327170127, 46405784, 2641161271, 1107509298, 1734300436, 3398322034, 2077045512, 3020508716, 1028345431, 1342237653, 1658675182, 10220836, 1819908, 42013, 14212508
			},
			.prefetch0 = 20115,
			.prefetch1 = 34538,
			.ram = jsr_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2633952967, 2710841423, 1084660424, 399077773, 3327170127, 46405784, 2641161271, 1107509298, 1734300436, 3398322034, 2077045512, 3020508716, 1028345431, 1342237653, 1658675182, 10220836, 1819904, 42013, 3020508720
			},
			.prefetch0 = 61490,
			.prefetch1 = 63164,
			.ram = jsr_final_ram_7,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 JSR (d16, A3) 4eab",
		.initial = {
			.regs = {
				3408102555, 2956081504, 1196277361, 527584047, 1533970916, 3548905451, 1368814928, 356577354, 2476987154, 1142667879, 3028265380, 2808316653, 1324830574, 2908104304, 1538041045, 15672748, 5264706, 33822, 3595278
			},
			.prefetch0 = 20139,
			.prefetch1 = 43909,
			.ram = jsr_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3408102555, 2956081504, 1196277361, 527584047, 1533970916, 3548905451, 1368814928, 356577354, 2476987154, 1142667879, 3028265380, 2808316653, 1324830574, 2908104304, 1538041045, 15672744, 5264706, 33822, 2808295030
			},
			.prefetch0 = 44914,
			.prefetch1 = 9124,
			.ram = jsr_final_ram_8,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 JSR (d8, A3, Xn) 4eb3",
		.initial = {
			.regs = {
				2194376576, 2829233080, 3618746247, 3204466579, 3849091424, 4251906519, 1251375013, 1856253142, 597598673, 1637089607, 2124720799, 2741469118, 179688007, 2964335923, 2792315967, 15216680, 9795534, 33049, 11058982
			},
			.prefetch0 = 20147,
			.prefetch1 = 60229,
			.ram = jsr_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2194376576, 2829233080, 3618746247, 3204466579, 3849091424, 4251906519, 1251375013, 1856253142, 597598673, 1637089607, 2124720799, 2741469118, 179688007, 2964335923, 2792315967, 15216676, 9795534, 33049, 1238817862
			},
			.prefetch0 = 2075,
			.prefetch1 = 54070,
			.ram = jsr_final_ram_9,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_9,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "010 JSR (A6) 4e96",
		.initial = {
			.regs = {
				3951699950, 549944562, 2765940403, 565205026, 212961070, 4147717340, 48359139, 326537480, 25075912, 2224780001, 1421592316, 2071916099, 4152921468, 40259507, 1764310871, 9824560, 15693122, 41729, 15309098
			},
			.prefetch0 = 20118,
			.prefetch1 = 38933,
			.ram = jsr_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3951699950, 549944562, 2765940403, 565205026, 212961070, 4147717340, 48359139, 326537480, 25075912, 2224780001, 1421592316, 2071916099, 4152921468, 40259507, 1764310871, 9824560, 15693108, 8961, 1249125112
			},
			.prefetch0 = 20094,
			.prefetch1 = 62517,
			.ram = jsr_final_ram_10,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_10,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "011 JSR (d16, A5) 4ead",
		.initial = {
			.regs = {
				2542264512, 2970254491, 3685890463, 1601242249, 429738561, 396510011, 835121684, 106182095, 1853268854, 749523509, 3460265495, 3787857082, 2059908470, 3896668996, 1188469870, 10965430, 2885132, 9245, 7894916
			},
			.prefetch0 = 20141,
			.prefetch1 = 3293,
			.ram = jsr_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2542264512, 2970254491, 3685890463, 1601242249, 429738561, 396510011, 835121684, 106182095, 1853268854, 749523509, 3460265495, 3787857082, 2059908470, 3896668996, 1188469870, 10965430, 2885118, 9245, 3047324758
			},
			.prefetch0 = 5429,
			.prefetch1 = 31111,
			.ram = jsr_final_ram_11,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_11,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "012 JSR (A1) 4e91",
		.initial = {
			.regs = {
				3032907772, 3469321040, 990725851, 2249025937, 322898886, 3863383500, 2147850386, 1035390696, 1538460097, 100049869, 1905473487, 4023872511, 3365611345, 1419148132, 542785568, 9302744, 9151000, 34582, 8623302
			},
			.prefetch0 = 20113,
			.prefetch1 = 9661,
			.ram = jsr_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3032907772, 3469321040, 990725851, 2249025937, 322898886, 3863383500, 2147850386, 1035390696, 1538460097, 100049869, 1905473487, 4023872511, 3365611345, 1419148132, 542785568, 9302744, 9150986, 10006, 3801153032
			},
			.prefetch0 = 60014,
			.prefetch1 = 46861,
			.ram = jsr_final_ram_12,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 JSR (d8, A4, Xn) 4eb4",
		.initial = {
			.regs = {
				1906780823, 291504133, 320294202, 2991249208, 1350377355, 244569169, 3445615365, 3449910474, 718280063, 925431767, 488040564, 94565616, 2904814028, 3445692194, 184454090, 7572768, 5575196, 42512, 3695056
			},
			.prefetch0 = 20148,
			.prefetch1 = 7177,
			.ram = jsr_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1906780823, 291504133, 320294202, 2991249208, 1350377355, 244569169, 3445615365, 3449910474, 718280063, 925431767, 488040564, 94565616, 2904814028, 3445692194, 184454090, 7572768, 5575192, 42512, 3196318174
			},
			.prefetch0 = 48617,
			.prefetch1 = 32533,
			.ram = jsr_final_ram_13,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_13,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "014 JSR (d8, PC, Xn) 4ebb",
		.initial = {
			.regs = {
				3352197145, 3062246916, 1174781469, 1175657598, 3174223049, 2291059760, 1957287498, 2536249527, 788725656, 1391608336, 2667893914, 665970158, 3335104511, 839481937, 312263487, 9132328, 6612918, 1543, 4051746
			},
			.prefetch0 = 20155,
			.prefetch1 = 16335,
			.ram = jsr_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3352197145, 3062246916, 1174781469, 1175657598, 3174223049, 2291059760, 1957287498, 2536249527, 788725656, 1391608336, 2667893914, 665970158, 3335104511, 839481937, 312263487, 9132328, 6612904, 9735, 2117654396
			},
			.prefetch0 = 54702,
			.prefetch1 = 54978,
			.ram = jsr_final_ram_14,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_14,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "015 JSR (d8, A2, Xn) 4eb2",
		.initial = {
			.regs = {
				896325377, 3824908336, 407899841, 1476469099, 308554171, 1161357544, 1429599948, 3594224947, 2477806091, 3921240661, 2069690833, 239746309, 162826279, 1977986251, 1768957283, 3741608, 2177010, 41481, 9463864
			},
			.prefetch0 = 20146,
			.prefetch1 = 49968,
			.ram = jsr_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				896325377, 3824908336, 407899841, 1476469099, 308554171, 1161357544, 1429599948, 3594224947, 2477806091, 3921240661, 2069690833, 239746309, 162826279, 1977986251, 1768957283, 3741608, 2177006, 41481, 2069660204
			},
			.prefetch0 = 341,
			.prefetch1 = 14293,
			.ram = jsr_final_ram_15,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_15,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "016 JSR (xxx).w 4eb8",
		.initial = {
			.regs = {
				3475780065, 282206735, 3387065852, 1297950609, 666346451, 1604287455, 3784046361, 1876684753, 1884766832, 4145642109, 1944181707, 1638482233, 3372819249, 2153640830, 486951483, 15190194, 14333010, 41742, 12534186
			},
			.prefetch0 = 20152,
			.prefetch1 = 47524,
			.ram = jsr_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3475780065, 282206735, 3387065852, 1297950609, 666346451, 1604287455, 3784046361, 1876684753, 1884766832, 4145642109, 1944181707, 1638482233, 3372819249, 2153640830, 486951483, 15190194, 14333006, 41742, 4294949288
			},
			.prefetch0 = 60365,
			.prefetch1 = 18299,
			.ram = jsr_final_ram_16,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_16,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "017 JSR (d8, A4, Xn) 4eb4",
		.initial = {
			.regs = {
				2558268342, 2754072432, 2401844760, 1604115451, 628679004, 3833802124, 866473714, 2085478193, 3826603720, 3000404525, 4076099967, 504249726, 3066489965, 3716242246, 3395011783, 11327098, 780190, 42518, 9298830
			},
			.prefetch0 = 20148,
			.prefetch1 = 39110,
			.ram = jsr_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2558268342, 2754072432, 2401844760, 1604115451, 628679004, 3833802124, 866473714, 2085478193, 3826603720, 3000404525, 4076099967, 504249726, 3066489965, 3716242246, 3395011783, 11327098, 780186, 42518, 1771927140
			},
			.prefetch0 = 5205,
			.prefetch1 = 63857,
			.ram = jsr_final_ram_17,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_17,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "018 JSR (A6) 4e96",
		.initial = {
			.regs = {
				2383466513, 559370025, 449821756, 2892777367, 1238811092, 2255580427, 2336951157, 1037665934, 2599578027, 1606835898, 290672730, 2413226482, 2527691079, 1200344895, 1149903426, 13112476, 14963852, 34062, 6516036
			},
			.prefetch0 = 20118,
			.prefetch1 = 36702,
			.ram = jsr_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2383466513, 559370025, 449821756, 2892777367, 1238811092, 2255580427, 2336951157, 1037665934, 2599578027, 1606835898, 290672730, 2413226482, 2527691079, 1200344895, 1149903426, 13112472, 14963852, 34062, 1149903430
			},
			.prefetch0 = 6214,
			.prefetch1 = 47412,
			.ram = jsr_final_ram_18,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_18,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "019 JSR (A6) 4e96",
		.initial = {
			.regs = {
				1699355192, 2991466981, 1089982032, 600089677, 1882045045, 2099187224, 3687315802, 3573643171, 4073493986, 1436325956, 3195870259, 1715964746, 2203549784, 3752423029, 2541338232, 10707740, 9907056, 257, 12005008
			},
			.prefetch0 = 20118,
			.prefetch1 = 2878,
			.ram = jsr_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1699355192, 2991466981, 1089982032, 600089677, 1882045045, 2099187224, 3687315802, 3573643171, 4073493986, 1436325956, 3195870259, 1715964746, 2203549784, 3752423029, 2541338232, 10707736, 9907056, 257, 2541338236
			},
			.prefetch0 = 18427,
			.prefetch1 = 14210,
			.ram = jsr_final_ram_19,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_19,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "020 JSR (d8, A0, Xn) 4eb0",
		.initial = {
			.regs = {
				2483442461, 892147343, 2509741511, 251788909, 92709036, 2947253246, 1137741471, 2308211841, 1415329109, 168730056, 3393805726, 3069744880, 1863588600, 1505483864, 3319484779, 2707284, 9164616, 34050, 5290656
			},
			.prefetch0 = 20144,
			.prefetch1 = 27431,
			.ram = jsr_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2483442461, 892147343, 2509741511, 251788909, 92709036, 2947253246, 1137741471, 2308211841, 1415329109, 168730056, 3393805726, 3069744880, 1863588600, 1505483864, 3319484779, 2707284, 9164602, 9474, 1806188396
			},
			.prefetch0 = 41183,
			.prefetch1 = 27149,
			.ram = jsr_final_ram_20,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_20,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "021 JSR (A2) 4e92",
		.initial = {
			.regs = {
				208294233, 728413613, 1910350551, 3051682632, 2632268835, 3939302779, 117136033, 3761145183, 1136593372, 4021995112, 3777123647, 3480264424, 2908939017, 870992417, 3682456628, 15068692, 13824944, 24, 2091848
			},
			.prefetch0 = 20114,
			.prefetch1 = 16223,
			.ram = jsr_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				208294233, 728413613, 1910350551, 3051682632, 2632268835, 3939302779, 117136033, 3761145183, 1136593372, 4021995112, 3777123647, 3480264424, 2908939017, 870992417, 3682456628, 15068692, 13824930, 8216, 4275609256
			},
			.prefetch0 = 64783,
			.prefetch1 = 5386,
			.ram = jsr_final_ram_21,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_21,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "022 JSR (d16, A0) 4ea8",
		.initial = {
			.regs = {
				711217765, 4250819999, 3846521493, 836519631, 2277297567, 2588197191, 308297231, 3360210074, 1650718708, 252575345, 45725890, 2102364469, 401881860, 1442351708, 3460853258, 7026926, 14372368, 1813, 11462442
			},
			.prefetch0 = 20136,
			.prefetch1 = 56529,
			.ram = jsr_initial_ram_22,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				711217765, 4250819999, 3846521493, 836519631, 2277297567, 2588197191, 308297231, 3360210074, 1650718708, 252575345, 45725890, 2102364469, 401881860, 1442351708, 3460853258, 7026926, 14372354, 10005, 502668606
			},
			.prefetch0 = 54762,
			.prefetch1 = 30021,
			.ram = jsr_final_ram_22,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_22,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "023 JSR (A1) 4e91",
		.initial = {
			.regs = {
				3470483416, 99760304, 569342911, 1505629053, 2185550692, 1438414779, 3148007585, 3015913158, 1141729754, 4148102239, 3296448243, 521985977, 3605386151, 592872311, 1417688945, 6425210, 15734210, 42496, 12457790
			},
			.prefetch0 = 20113,
			.prefetch1 = 29031,
			.ram = jsr_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3470483416, 99760304, 569342911, 1505629053, 2185550692, 1438414779, 3148007585, 3015913158, 1141729754, 4148102239, 3296448243, 521985977, 3605386151, 592872311, 1417688945, 6425210, 15734196, 9728, 2336684880
			},
			.prefetch0 = 23622,
			.prefetch1 = 15817,
			.ram = jsr_final_ram_23,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_23,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "024 JSR (d16, A0) 4ea8",
		.initial = {
			.regs = {
				1407832030, 2280397089, 1093424918, 517658567, 3123832544, 2459350304, 2815434892, 4163101757, 477076254, 975448186, 3684507875, 3142726894, 1624806279, 2925923207, 2565056733, 15073864, 111398, 32786, 1355902
			},
			.prefetch0 = 20136,
			.prefetch1 = 63222,
			.ram = jsr_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1407832030, 2280397089, 1093424918, 517658567, 3123832544, 2459350304, 2815434892, 4163101757, 477076254, 975448186, 3684507875, 3142726894, 1624806279, 2925923207, 2565056733, 15073860, 111398, 32786, 477073944
			},
			.prefetch0 = 6256,
			.prefetch1 = 63592,
			.ram = jsr_final_ram_24,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 JSR (d8, PC, Xn) 4ebb",
		.initial = {
			.regs = {
				3049379871, 426963679, 2779307536, 2897737255, 712228687, 2906070319, 4007566961, 3137272034, 4072274161, 3036619456, 3862632328, 3268149524, 2215059727, 323627368, 2441287672, 9831498, 16149680, 34077, 4138882
			},
			.prefetch0 = 20155,
			.prefetch1 = 4926,
			.ram = jsr_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3049379871, 426963679, 2779307536, 2897737255, 712228687, 2906070319, 4007566961, 3137272034, 4072274161, 3036619456, 3862632328, 3268149524, 2215059727, 323627368, 2441287672, 9831498, 16149666, 9501, 2917033616
			},
			.prefetch0 = 62849,
			.prefetch1 = 7851,
			.ram = jsr_final_ram_25,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_25,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "026 JSR (d8, PC, Xn) 4ebb",
		.initial = {
			.regs = {
				3205304949, 1763899025, 3500046657, 2901327722, 2767425551, 2617433381, 1574222550, 1632797598, 2006617366, 3431476869, 2388867288, 1301729220, 2393355744, 2674068049, 1640413035, 11868562, 498560, 8730, 6689320
			},
			.prefetch0 = 20155,
			.prefetch1 = 12636,
			.ram = jsr_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3205304949, 1763899025, 3500046657, 2901327722, 2767425551, 2617433381, 1574222550, 1632797598, 2006617366, 3431476869, 2388867288, 1301729220, 2393355744, 2674068049, 1640413035, 11868562, 498556, 8730, 6672880
			},
			.prefetch0 = 50341,
			.prefetch1 = 38893,
			.ram = jsr_final_ram_26,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_26,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "027 JSR (A0) 4e90",
		.initial = {
			.regs = {
				3157264973, 2674664701, 2607964485, 1977680908, 3492507404, 2863124533, 1047562504, 1647626348, 1471873297, 3603786543, 1323518023, 3869981716, 2341678445, 1894705366, 2959714454, 11126018, 1532406, 1286, 14466956
			},
			.prefetch0 = 20112,
			.prefetch1 = 54287,
			.ram = jsr_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3157264973, 2674664701, 2607964485, 1977680908, 3492507404, 2863124533, 1047562504, 1647626348, 1471873297, 3603786543, 1323518023, 3869981716, 2341678445, 1894705366, 2959714454, 11126018, 1532392, 9478, 810058580
			},
			.prefetch0 = 45879,
			.prefetch1 = 35437,
			.ram = jsr_final_ram_27,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_27,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "028 JSR (d8, A0, Xn) 4eb0",
		.initial = {
			.regs = {
				1690156303, 3123028380, 2035865909, 1701258793, 824496764, 1002130565, 1048072119, 1694611168, 972952682, 473264706, 2570659247, 3434166158, 632435284, 2756825943, 2237601794, 16112116, 6045720, 41244, 5540452
			},
			.prefetch0 = 20144,
			.prefetch1 = 25096,
			.ram = jsr_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1690156303, 3123028380, 2035865909, 1701258793, 824496764, 1002130565, 1048072119, 1694611168, 972952682, 473264706, 2570659247, 3434166158, 632435284, 2756825943, 2237601794, 16112116, 6045706, 8476, 1911835918
			},
			.prefetch0 = 30627,
			.prefetch1 = 17349,
			.ram = jsr_final_ram_28,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_28,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "029 JSR (d16, A6) 4eae",
		.initial = {
			.regs = {
				526766025, 138692397, 3793313948, 2822680264, 141920356, 3269924007, 1688948023, 1995460292, 2468464739, 2188775299, 2639543452, 3046337676, 2123630257, 1858629338, 666951549, 3486102, 15182008, 9474, 14663336
			},
			.prefetch0 = 20142,
			.prefetch1 = 45988,
			.ram = jsr_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				526766025, 138692397, 3793313948, 2822680264, 141920356, 3269924007, 1688948023, 1995460292, 2468464739, 2188775299, 2639543452, 3046337676, 2123630257, 1858629338, 666951549, 3486102, 15181994, 9474, 546587172
			},
			.prefetch0 = 15276,
			.prefetch1 = 50719,
			.ram = jsr_final_ram_29,
			.ram_len = 26,
		},
		.transactions = jsr_transactions_29,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "030 JSR (d8, A6, Xn) 4eb6",
		.initial = {
			.regs = {
				2449159972, 3747706247, 2733508588, 3058891507, 670794616, 964102986, 240214140, 4225459756, 1100396379, 415752175, 1015079224, 4196307820, 136023892, 2475090884, 1783806187, 16769620, 9212042, 33295, 8280632
			},
			.prefetch0 = 20150,
			.prefetch1 = 62105,
			.ram = jsr_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2449159972, 3747706247, 2733508588, 3058891507, 670794616, 964102986, 240214140, 4225459756, 1100396379, 415752175, 1015079224, 4196307820, 136023892, 2475090884, 1783806187, 16769616, 9212042, 33295, 1783798492
			},
			.prefetch0 = 6897,
			.prefetch1 = 20554,
			.ram = jsr_final_ram_30,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_30,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "031 JSR (d8, A1, Xn) 4eb1",
		.initial = {
			.regs = {
				2310964261, 3778166497, 3346545402, 3049307936, 2730922667, 924161688, 3367748078, 3929306626, 2178814171, 1422086288, 762562803, 1141137440, 3465428760, 3473545277, 3068570394, 12668358, 3984662, 41742, 7351214
			},
			.prefetch0 = 20145,
			.prefetch1 = 39538,
			.ram = jsr_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2310964261, 3778166497, 3346545402, 3049307936, 2730922667, 924161688, 3367748078, 3929306626, 2178814171, 1422086288, 762562803, 1141137440, 3465428760, 3473545277, 3068570394, 12668358, 3984658, 41742, 2844172694
			},
			.prefetch0 = 25102,
			.prefetch1 = 19979,
			.ram = jsr_final_ram_31,
			.ram_len = 12,
		},
		.transactions = jsr_transactions_31,
		.transactions_len = 5,
		.lenght = 22,
	},
};

#endif /* RBT_JSR_H */