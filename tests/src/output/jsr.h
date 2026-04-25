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

const uint32_t JSR_TEST_COUNT = 16;
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
};

#endif /* RBT_JSR_H */