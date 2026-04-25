#ifndef RBT_ORW_H
#define RBT_ORW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte orw_initial_ram_0[] = {
		{ .addr = 0x9c4dd4, .byte = 0x80 },
		{ .addr = 0x9c4dd5, .byte = 0x64 },
		{ .addr = 0x9c4dd6, .byte = 0x74 },
		{ .addr = 0x9c4dd7, .byte = 0x9b },
		{ .addr = 0xbe74f8, .byte = 0xcd },
		{ .addr = 0xbe74f9, .byte = 0x16 },
		{ .addr = 0x9c4dd8, .byte = 0x75 },
		{ .addr = 0x9c4dd9, .byte = 0x25 }
};

static const SST_RamByte orw_final_ram_0[] = {
		{ .addr = 0x9c4dd4, .byte = 0x80 },
		{ .addr = 0x9c4dd5, .byte = 0x64 },
		{ .addr = 0x9c4dd6, .byte = 0x74 },
		{ .addr = 0x9c4dd7, .byte = 0x9b },
		{ .addr = 0xbe74f8, .byte = 0xcd },
		{ .addr = 0xbe74f9, .byte = 0x16 },
		{ .addr = 0x9c4dd8, .byte = 0x75 },
		{ .addr = 0x9c4dd9, .byte = 0x25 }
};

static const SST_Transaction orw_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12481784, .data = 52502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10243544, .data = 29989, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_1[] = {
		{ .addr = 0xb40fba, .byte = 0x80 },
		{ .addr = 0xb40fbb, .byte = 0x7b },
		{ .addr = 0xb40fbc, .byte = 0xf5 },
		{ .addr = 0xb40fbd, .byte = 0x66 },
		{ .addr = 0xb40fbe, .byte = 0xe8 },
		{ .addr = 0xb40fbf, .byte = 0x2f },
		{ .addr = 0xb427de, .byte = 0xc4 },
		{ .addr = 0xb427df, .byte = 0xc2 },
		{ .addr = 0xb40fc0, .byte = 0x5f },
		{ .addr = 0xb40fc1, .byte = 0x17 }
};

static const SST_RamByte orw_final_ram_1[] = {
		{ .addr = 0xb40fba, .byte = 0x80 },
		{ .addr = 0xb40fbb, .byte = 0x7b },
		{ .addr = 0xb40fbc, .byte = 0xf5 },
		{ .addr = 0xb40fbd, .byte = 0x66 },
		{ .addr = 0xb40fbe, .byte = 0xe8 },
		{ .addr = 0xb40fbf, .byte = 0x2f },
		{ .addr = 0xb427de, .byte = 0xc4 },
		{ .addr = 0xb427df, .byte = 0xc2 },
		{ .addr = 0xb40fc0, .byte = 0x5f },
		{ .addr = 0xb40fc1, .byte = 0x17 }
};

static const SST_Transaction orw_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11800510, .data = 59439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11806686, .data = 50370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11800512, .data = 24343, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_2[] = {
		{ .addr = 0xdb1e76, .byte = 0x8b },
		{ .addr = 0xdb1e77, .byte = 0x71 },
		{ .addr = 0xdb1e78, .byte = 0x5e },
		{ .addr = 0xdb1e79, .byte = 0xe9 },
		{ .addr = 0xdb1e7a, .byte = 0x26 },
		{ .addr = 0xdb1e7b, .byte = 0x64 },
		{ .addr = 0x9baa40, .byte = 0x72 },
		{ .addr = 0x9baa41, .byte = 0xd4 },
		{ .addr = 0xdb1e7c, .byte = 0x7e },
		{ .addr = 0xdb1e7d, .byte = 0x95 }
};

static const SST_RamByte orw_final_ram_2[] = {
		{ .addr = 0xdb1e76, .byte = 0x8b },
		{ .addr = 0xdb1e77, .byte = 0x71 },
		{ .addr = 0xdb1e78, .byte = 0x5e },
		{ .addr = 0xdb1e79, .byte = 0xe9 },
		{ .addr = 0xdb1e7a, .byte = 0x26 },
		{ .addr = 0xdb1e7b, .byte = 0x64 },
		{ .addr = 0x9baa40, .byte = 0x7f },
		{ .addr = 0x9baa41, .byte = 0xdc },
		{ .addr = 0xdb1e7c, .byte = 0x7e },
		{ .addr = 0xdb1e7d, .byte = 0x95 }
};

static const SST_Transaction orw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14360186, .data = 9828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10201664, .data = 29396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14360188, .data = 32405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10201664, .data = 32732, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_3[] = {
		{ .addr = 0x8357fc, .byte = 0x8f },
		{ .addr = 0x8357fd, .byte = 0x63 },
		{ .addr = 0x8357fe, .byte = 0xfd },
		{ .addr = 0x8357ff, .byte = 0x81 },
		{ .addr = 0x7d8b8a, .byte = 0xcf },
		{ .addr = 0x7d8b8b, .byte = 0xcf },
		{ .addr = 0x835800, .byte = 0x86 },
		{ .addr = 0x835801, .byte = 0xff }
};

static const SST_RamByte orw_final_ram_3[] = {
		{ .addr = 0x8357fc, .byte = 0x8f },
		{ .addr = 0x8357fd, .byte = 0x63 },
		{ .addr = 0x8357fe, .byte = 0xfd },
		{ .addr = 0x8357ff, .byte = 0x81 },
		{ .addr = 0x7d8b8a, .byte = 0xef },
		{ .addr = 0x7d8b8b, .byte = 0xff },
		{ .addr = 0x835800, .byte = 0x86 },
		{ .addr = 0x835801, .byte = 0xff }
};

static const SST_Transaction orw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8227722, .data = 53199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8607744, .data = 34559, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8227722, .data = 61439, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_4[] = {
		{ .addr = 0xa087ac, .byte = 0x85 },
		{ .addr = 0xa087ad, .byte = 0x6f },
		{ .addr = 0xa087ae, .byte = 0x4d },
		{ .addr = 0xa087af, .byte = 0x11 },
		{ .addr = 0xa087b0, .byte = 0xab },
		{ .addr = 0xa087b1, .byte = 0xde },
		{ .addr = 0x00000c, .byte = 0x03 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x50 },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0xaa50f2, .byte = 0xd1 },
		{ .addr = 0xaa50f3, .byte = 0xfa },
		{ .addr = 0xaa50f4, .byte = 0x94 },
		{ .addr = 0xaa50f5, .byte = 0xa3 }
};

static const SST_RamByte orw_final_ram_4[] = {
		{ .addr = 0xa087ac, .byte = 0x85 },
		{ .addr = 0xa087ad, .byte = 0x6f },
		{ .addr = 0xa087ae, .byte = 0x4d },
		{ .addr = 0xa087af, .byte = 0x11 },
		{ .addr = 0xa087b0, .byte = 0xab },
		{ .addr = 0xa087b1, .byte = 0xde },
		{ .addr = 0x169670, .byte = 0x87 },
		{ .addr = 0x169671, .byte = 0xae },
		{ .addr = 0x16966c, .byte = 0x27 },
		{ .addr = 0x16966d, .byte = 0x15 },
		{ .addr = 0x16966e, .byte = 0x00 },
		{ .addr = 0x16966f, .byte = 0xa0 },
		{ .addr = 0x16966a, .byte = 0x85 },
		{ .addr = 0x16966b, .byte = 0x6f },
		{ .addr = 0x169668, .byte = 0xe3 },
		{ .addr = 0x169669, .byte = 0x83 },
		{ .addr = 0x169664, .byte = 0x85 },
		{ .addr = 0x169665, .byte = 0x75 },
		{ .addr = 0x169666, .byte = 0x00 },
		{ .addr = 0x169667, .byte = 0x16 },
		{ .addr = 0x00000c, .byte = 0x03 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x50 },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0xaa50f2, .byte = 0xd1 },
		{ .addr = 0xaa50f3, .byte = 0xfa },
		{ .addr = 0xaa50f4, .byte = 0x94 },
		{ .addr = 0xaa50f5, .byte = 0xa3 }
};

static const SST_Transaction orw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10520496, .data = 43998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1500034, .data = 33810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1480304, .data = 34734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1480300, .data = 10005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1480302, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1480298, .data = 34159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1480296, .data = 58243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1480292, .data = 34165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1480294, .data = 22, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 20722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11161842, .data = 53754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11161844, .data = 38051, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_5[] = {
		{ .addr = 0x4764a0, .byte = 0x85 },
		{ .addr = 0x4764a1, .byte = 0x6b },
		{ .addr = 0x4764a2, .byte = 0x7f },
		{ .addr = 0x4764a3, .byte = 0x83 },
		{ .addr = 0x4764a4, .byte = 0x3c },
		{ .addr = 0x4764a5, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0x32 },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0xc0 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x52c0ea, .byte = 0x2a },
		{ .addr = 0x52c0eb, .byte = 0x73 },
		{ .addr = 0x52c0ec, .byte = 0x2c },
		{ .addr = 0x52c0ed, .byte = 0x0f }
};

static const SST_RamByte orw_final_ram_5[] = {
		{ .addr = 0x4764a0, .byte = 0x85 },
		{ .addr = 0x4764a1, .byte = 0x6b },
		{ .addr = 0x4764a2, .byte = 0x7f },
		{ .addr = 0x4764a3, .byte = 0x83 },
		{ .addr = 0x4764a4, .byte = 0x3c },
		{ .addr = 0x4764a5, .byte = 0x62 },
		{ .addr = 0xb6309c, .byte = 0x64 },
		{ .addr = 0xb6309d, .byte = 0xa2 },
		{ .addr = 0xb63098, .byte = 0x22 },
		{ .addr = 0xb63099, .byte = 0x1a },
		{ .addr = 0xb6309a, .byte = 0x00 },
		{ .addr = 0xb6309b, .byte = 0x47 },
		{ .addr = 0xb63096, .byte = 0x85 },
		{ .addr = 0xb63097, .byte = 0x6b },
		{ .addr = 0xb63094, .byte = 0xd4 },
		{ .addr = 0xb63095, .byte = 0x61 },
		{ .addr = 0xb63090, .byte = 0x85 },
		{ .addr = 0xb63091, .byte = 0x75 },
		{ .addr = 0xb63092, .byte = 0x5f },
		{ .addr = 0xb63093, .byte = 0x83 },
		{ .addr = 0x00000c, .byte = 0x32 },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0xc0 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x52c0ea, .byte = 0x2a },
		{ .addr = 0x52c0eb, .byte = 0x73 },
		{ .addr = 0x52c0ec, .byte = 0x2c },
		{ .addr = 0x52c0ed, .byte = 0x0f }
};

static const SST_Transaction orw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4678820, .data = 15458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8639584, .data = 28119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939996, .data = 25762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939992, .data = 8730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939994, .data = 71, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939990, .data = 34155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939988, .data = 54369, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939984, .data = 34165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11939986, .data = 24451, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 12882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5423338, .data = 10867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5423340, .data = 11279, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_6[] = {
		{ .addr = 0x715d4c, .byte = 0x89 },
		{ .addr = 0x715d4d, .byte = 0x56 },
		{ .addr = 0x715d4e, .byte = 0x99 },
		{ .addr = 0x715d4f, .byte = 0xd5 },
		{ .addr = 0x00000c, .byte = 0x7e },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0xd1 },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0x60d1c0, .byte = 0x11 },
		{ .addr = 0x60d1c1, .byte = 0x7a },
		{ .addr = 0x60d1c2, .byte = 0x61 },
		{ .addr = 0x60d1c3, .byte = 0x94 }
};

static const SST_RamByte orw_final_ram_6[] = {
		{ .addr = 0x715d4c, .byte = 0x89 },
		{ .addr = 0x715d4d, .byte = 0x56 },
		{ .addr = 0x715d4e, .byte = 0x99 },
		{ .addr = 0x715d4f, .byte = 0xd5 },
		{ .addr = 0x4f4f3c, .byte = 0x5d },
		{ .addr = 0x4f4f3d, .byte = 0x4e },
		{ .addr = 0x4f4f38, .byte = 0x26 },
		{ .addr = 0x4f4f39, .byte = 0x17 },
		{ .addr = 0x4f4f3a, .byte = 0x00 },
		{ .addr = 0x4f4f3b, .byte = 0x71 },
		{ .addr = 0x4f4f36, .byte = 0x89 },
		{ .addr = 0x4f4f37, .byte = 0x56 },
		{ .addr = 0x4f4f34, .byte = 0x19 },
		{ .addr = 0x4f4f35, .byte = 0x9d },
		{ .addr = 0x4f4f30, .byte = 0x89 },
		{ .addr = 0x4f4f31, .byte = 0x55 },
		{ .addr = 0x4f4f32, .byte = 0x37 },
		{ .addr = 0x4f4f33, .byte = 0x23 },
		{ .addr = 0x00000c, .byte = 0x7e },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0xd1 },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0x60d1c0, .byte = 0x11 },
		{ .addr = 0x60d1c1, .byte = 0x7a },
		{ .addr = 0x60d1c2, .byte = 0x61 },
		{ .addr = 0x60d1c3, .byte = 0x94 }
};

static const SST_Transaction orw_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2300316, .data = 54706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5197628, .data = 23886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5197624, .data = 9751, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5197626, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5197622, .data = 35158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5197620, .data = 6557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5197616, .data = 35157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5197618, .data = 14115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 53696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6345152, .data = 4474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6345154, .data = 24980, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_7[] = {
		{ .addr = 0xe669ce, .byte = 0x8a },
		{ .addr = 0xe669cf, .byte = 0x68 },
		{ .addr = 0xe669d0, .byte = 0x59 },
		{ .addr = 0xe669d1, .byte = 0x18 },
		{ .addr = 0xe669d2, .byte = 0xcf },
		{ .addr = 0xe669d3, .byte = 0x51 },
		{ .addr = 0x00000c, .byte = 0x37 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x42 },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x0a4280, .byte = 0xbe },
		{ .addr = 0x0a4281, .byte = 0x82 },
		{ .addr = 0x0a4282, .byte = 0x03 },
		{ .addr = 0x0a4283, .byte = 0x8e }
};

static const SST_RamByte orw_final_ram_7[] = {
		{ .addr = 0xe669ce, .byte = 0x8a },
		{ .addr = 0xe669cf, .byte = 0x68 },
		{ .addr = 0xe669d0, .byte = 0x59 },
		{ .addr = 0xe669d1, .byte = 0x18 },
		{ .addr = 0xe669d2, .byte = 0xcf },
		{ .addr = 0xe669d3, .byte = 0x51 },
		{ .addr = 0x5b2ff2, .byte = 0x69 },
		{ .addr = 0x5b2ff3, .byte = 0xd0 },
		{ .addr = 0x5b2fee, .byte = 0x07 },
		{ .addr = 0x5b2fef, .byte = 0x08 },
		{ .addr = 0x5b2ff0, .byte = 0x00 },
		{ .addr = 0x5b2ff1, .byte = 0xe6 },
		{ .addr = 0x5b2fec, .byte = 0x8a },
		{ .addr = 0x5b2fed, .byte = 0x68 },
		{ .addr = 0x5b2fea, .byte = 0x02 },
		{ .addr = 0x5b2feb, .byte = 0xff },
		{ .addr = 0x5b2fe6, .byte = 0x8a },
		{ .addr = 0x5b2fe7, .byte = 0x71 },
		{ .addr = 0x5b2fe8, .byte = 0xee },
		{ .addr = 0x5b2fe9, .byte = 0x2c },
		{ .addr = 0x00000c, .byte = 0x37 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x42 },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x0a4280, .byte = 0xbe },
		{ .addr = 0x0a4281, .byte = 0x82 },
		{ .addr = 0x0a4282, .byte = 0x03 },
		{ .addr = 0x0a4283, .byte = 0x8e }
};

static const SST_Transaction orw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15100370, .data = 53073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2884350, .data = 28718, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976050, .data = 27088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976046, .data = 1800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976048, .data = 230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976044, .data = 35432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976042, .data = 767, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976038, .data = 35441, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976040, .data = 60972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 14090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 672384, .data = 48770, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 672386, .data = 910, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_8[] = {
		{ .addr = 0x78293c, .byte = 0x8d },
		{ .addr = 0x78293d, .byte = 0x6f },
		{ .addr = 0x78293e, .byte = 0x29 },
		{ .addr = 0x78293f, .byte = 0x63 },
		{ .addr = 0x782940, .byte = 0x5c },
		{ .addr = 0x782941, .byte = 0xa2 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x5b },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0x765b26, .byte = 0xf3 },
		{ .addr = 0x765b27, .byte = 0xea },
		{ .addr = 0x765b28, .byte = 0x09 },
		{ .addr = 0x765b29, .byte = 0x6b }
};

static const SST_RamByte orw_final_ram_8[] = {
		{ .addr = 0x78293c, .byte = 0x8d },
		{ .addr = 0x78293d, .byte = 0x6f },
		{ .addr = 0x78293e, .byte = 0x29 },
		{ .addr = 0x78293f, .byte = 0x63 },
		{ .addr = 0x782940, .byte = 0x5c },
		{ .addr = 0x782941, .byte = 0xa2 },
		{ .addr = 0x30227c, .byte = 0x29 },
		{ .addr = 0x30227d, .byte = 0x3e },
		{ .addr = 0x302278, .byte = 0xa1 },
		{ .addr = 0x302279, .byte = 0x0b },
		{ .addr = 0x30227a, .byte = 0x00 },
		{ .addr = 0x30227b, .byte = 0x78 },
		{ .addr = 0x302276, .byte = 0x8d },
		{ .addr = 0x302277, .byte = 0x6f },
		{ .addr = 0x302274, .byte = 0x4b },
		{ .addr = 0x302275, .byte = 0xe1 },
		{ .addr = 0x302270, .byte = 0x8d },
		{ .addr = 0x302271, .byte = 0x75 },
		{ .addr = 0x302272, .byte = 0x00 },
		{ .addr = 0x302273, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x5b },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0x765b26, .byte = 0xf3 },
		{ .addr = 0x765b27, .byte = 0xea },
		{ .addr = 0x765b28, .byte = 0x09 },
		{ .addr = 0x765b29, .byte = 0x6b }
};

static const SST_Transaction orw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7874880, .data = 23714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3165152, .data = 14508, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3154556, .data = 10558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3154552, .data = 41227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3154554, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3154550, .data = 36207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3154548, .data = 19425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3154544, .data = 36213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3154546, .data = 48, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44662, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 23334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7756582, .data = 62442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7756584, .data = 2411, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_9[] = {
		{ .addr = 0x751c98, .byte = 0x00 },
		{ .addr = 0x751c99, .byte = 0x67 },
		{ .addr = 0x751c9a, .byte = 0xa9 },
		{ .addr = 0x751c9b, .byte = 0x62 },
		{ .addr = 0x751c9c, .byte = 0xed },
		{ .addr = 0x751c9d, .byte = 0xfc },
		{ .addr = 0x89e472, .byte = 0x55 },
		{ .addr = 0x89e473, .byte = 0x60 },
		{ .addr = 0x751c9e, .byte = 0x35 },
		{ .addr = 0x751c9f, .byte = 0xf7 }
};

static const SST_RamByte orw_final_ram_9[] = {
		{ .addr = 0x751c98, .byte = 0x00 },
		{ .addr = 0x751c99, .byte = 0x67 },
		{ .addr = 0x751c9a, .byte = 0xa9 },
		{ .addr = 0x751c9b, .byte = 0x62 },
		{ .addr = 0x751c9c, .byte = 0xed },
		{ .addr = 0x751c9d, .byte = 0xfc },
		{ .addr = 0x89e472, .byte = 0xfd },
		{ .addr = 0x89e473, .byte = 0x62 },
		{ .addr = 0x751c9e, .byte = 0x35 },
		{ .addr = 0x751c9f, .byte = 0xf7 }
};

static const SST_Transaction orw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7675036, .data = 60924, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9036914, .data = 21856, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7675038, .data = 13815, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9036914, .data = 64866, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_10[] = {
		{ .addr = 0xe97712, .byte = 0x8a },
		{ .addr = 0xe97713, .byte = 0x56 },
		{ .addr = 0xe97714, .byte = 0x40 },
		{ .addr = 0xe97715, .byte = 0x2d },
		{ .addr = 0x00000c, .byte = 0xf9 },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x02c842, .byte = 0xca },
		{ .addr = 0x02c843, .byte = 0x28 },
		{ .addr = 0x02c844, .byte = 0x7f },
		{ .addr = 0x02c845, .byte = 0x53 }
};

static const SST_RamByte orw_final_ram_10[] = {
		{ .addr = 0xe97712, .byte = 0x8a },
		{ .addr = 0xe97713, .byte = 0x56 },
		{ .addr = 0xe97714, .byte = 0x40 },
		{ .addr = 0xe97715, .byte = 0x2d },
		{ .addr = 0xd57bda, .byte = 0x77 },
		{ .addr = 0xd57bdb, .byte = 0x14 },
		{ .addr = 0xd57bd6, .byte = 0x24 },
		{ .addr = 0xd57bd7, .byte = 0x0c },
		{ .addr = 0xd57bd8, .byte = 0x00 },
		{ .addr = 0xd57bd9, .byte = 0xe9 },
		{ .addr = 0xd57bd4, .byte = 0x8a },
		{ .addr = 0xd57bd5, .byte = 0x56 },
		{ .addr = 0xd57bd2, .byte = 0x12 },
		{ .addr = 0xd57bd3, .byte = 0x0d },
		{ .addr = 0xd57bce, .byte = 0x8a },
		{ .addr = 0xd57bcf, .byte = 0x55 },
		{ .addr = 0xd57bd0, .byte = 0x34 },
		{ .addr = 0xd57bd1, .byte = 0x78 },
		{ .addr = 0x00000c, .byte = 0xf9 },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x02c842, .byte = 0xca },
		{ .addr = 0x02c843, .byte = 0x28 },
		{ .addr = 0x02c844, .byte = 0x7f },
		{ .addr = 0x02c845, .byte = 0x53 }
};

static const SST_Transaction orw_transactions_10[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7868940, .data = 38780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13990874, .data = 30484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13990870, .data = 9228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13990872, .data = 233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13990868, .data = 35414, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13990866, .data = 4621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13990862, .data = 35413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13990864, .data = 13432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 63746, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 182338, .data = 51752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 182340, .data = 32595, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_11[] = {
		{ .addr = 0x7dc400, .byte = 0x8f },
		{ .addr = 0x7dc401, .byte = 0x65 },
		{ .addr = 0x7dc402, .byte = 0x8e },
		{ .addr = 0x7dc403, .byte = 0xf6 },
		{ .addr = 0x00000c, .byte = 0x7f },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0xaf },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xa0afac, .byte = 0x8d },
		{ .addr = 0xa0afad, .byte = 0xb2 },
		{ .addr = 0xa0afae, .byte = 0x3b },
		{ .addr = 0xa0afaf, .byte = 0xb9 }
};

static const SST_RamByte orw_final_ram_11[] = {
		{ .addr = 0x7dc400, .byte = 0x8f },
		{ .addr = 0x7dc401, .byte = 0x65 },
		{ .addr = 0x7dc402, .byte = 0x8e },
		{ .addr = 0x7dc403, .byte = 0xf6 },
		{ .addr = 0x60a4b4, .byte = 0xc4 },
		{ .addr = 0x60a4b5, .byte = 0x04 },
		{ .addr = 0x60a4b0, .byte = 0x86 },
		{ .addr = 0x60a4b1, .byte = 0x03 },
		{ .addr = 0x60a4b2, .byte = 0x00 },
		{ .addr = 0x60a4b3, .byte = 0x7d },
		{ .addr = 0x60a4ae, .byte = 0x8f },
		{ .addr = 0x60a4af, .byte = 0x65 },
		{ .addr = 0x60a4ac, .byte = 0xd6 },
		{ .addr = 0x60a4ad, .byte = 0x39 },
		{ .addr = 0x60a4a8, .byte = 0x8f },
		{ .addr = 0x60a4a9, .byte = 0x71 },
		{ .addr = 0x60a4aa, .byte = 0x5a },
		{ .addr = 0x60a4ab, .byte = 0xd8 },
		{ .addr = 0x00000c, .byte = 0x7f },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0xaf },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xa0afac, .byte = 0x8d },
		{ .addr = 0xa0afad, .byte = 0xb2 },
		{ .addr = 0xa0afae, .byte = 0x3b },
		{ .addr = 0xa0afaf, .byte = 0xb9 }
};

static const SST_Transaction orw_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14210616, .data = 62303, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6333620, .data = 50180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6333616, .data = 34307, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6333618, .data = 125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6333614, .data = 36709, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6333612, .data = 54841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6333608, .data = 36721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6333610, .data = 23256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10530732, .data = 36274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10530734, .data = 15289, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_12[] = {
		{ .addr = 0x152992, .byte = 0x8f },
		{ .addr = 0x152993, .byte = 0x59 },
		{ .addr = 0x152994, .byte = 0x9e },
		{ .addr = 0x152995, .byte = 0x31 },
		{ .addr = 0x00000c, .byte = 0xc1 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x502fd2, .byte = 0xb3 },
		{ .addr = 0x502fd3, .byte = 0x04 },
		{ .addr = 0x502fd4, .byte = 0x2b },
		{ .addr = 0x502fd5, .byte = 0xe8 }
};

static const SST_RamByte orw_final_ram_12[] = {
		{ .addr = 0x152992, .byte = 0x8f },
		{ .addr = 0x152993, .byte = 0x59 },
		{ .addr = 0x152994, .byte = 0x9e },
		{ .addr = 0x152995, .byte = 0x31 },
		{ .addr = 0x72e8b6, .byte = 0x29 },
		{ .addr = 0x72e8b7, .byte = 0x94 },
		{ .addr = 0x72e8b2, .byte = 0x04 },
		{ .addr = 0x72e8b3, .byte = 0x10 },
		{ .addr = 0x72e8b4, .byte = 0x00 },
		{ .addr = 0x72e8b5, .byte = 0x15 },
		{ .addr = 0x72e8b0, .byte = 0x8f },
		{ .addr = 0x72e8b1, .byte = 0x59 },
		{ .addr = 0x72e8ae, .byte = 0x8a },
		{ .addr = 0x72e8af, .byte = 0x13 },
		{ .addr = 0x72e8aa, .byte = 0x8f },
		{ .addr = 0x72e8ab, .byte = 0x51 },
		{ .addr = 0x72e8ac, .byte = 0x6f },
		{ .addr = 0x72e8ad, .byte = 0xe7 },
		{ .addr = 0x00000c, .byte = 0xc1 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x502fd2, .byte = 0xb3 },
		{ .addr = 0x502fd3, .byte = 0x04 },
		{ .addr = 0x502fd4, .byte = 0x2b },
		{ .addr = 0x502fd5, .byte = 0xe8 }
};

static const SST_Transaction orw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15174162, .data = 42952, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7530678, .data = 10644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7530674, .data = 1040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7530676, .data = 21, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7530672, .data = 36697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7530670, .data = 35347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7530666, .data = 36689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7530668, .data = 28647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 49488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5255122, .data = 45828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5255124, .data = 11240, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_13[] = {
		{ .addr = 0xcaa35c, .byte = 0x8f },
		{ .addr = 0xcaa35d, .byte = 0x76 },
		{ .addr = 0xcaa35e, .byte = 0x49 },
		{ .addr = 0xcaa35f, .byte = 0xc7 },
		{ .addr = 0xcaa360, .byte = 0xae },
		{ .addr = 0xcaa361, .byte = 0x2d },
		{ .addr = 0x2d4ba6, .byte = 0x15 },
		{ .addr = 0x2d4ba7, .byte = 0x5b },
		{ .addr = 0xcaa362, .byte = 0x31 },
		{ .addr = 0xcaa363, .byte = 0xb7 }
};

static const SST_RamByte orw_final_ram_13[] = {
		{ .addr = 0xcaa35c, .byte = 0x8f },
		{ .addr = 0xcaa35d, .byte = 0x76 },
		{ .addr = 0xcaa35e, .byte = 0x49 },
		{ .addr = 0xcaa35f, .byte = 0xc7 },
		{ .addr = 0xcaa360, .byte = 0xae },
		{ .addr = 0xcaa361, .byte = 0x2d },
		{ .addr = 0x2d4ba6, .byte = 0x35 },
		{ .addr = 0x2d4ba7, .byte = 0x5f },
		{ .addr = 0xcaa362, .byte = 0x31 },
		{ .addr = 0xcaa363, .byte = 0xb7 }
};

static const SST_Transaction orw_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13280096, .data = 44589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2968486, .data = 5467, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13280098, .data = 12727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2968486, .data = 13663, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_14[] = {
		{ .addr = 0x2d3b68, .byte = 0x8c },
		{ .addr = 0x2d3b69, .byte = 0x60 },
		{ .addr = 0x2d3b6a, .byte = 0xc8 },
		{ .addr = 0x2d3b6b, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0xce },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0xae },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0xf0ae22, .byte = 0xa6 },
		{ .addr = 0xf0ae23, .byte = 0xd9 },
		{ .addr = 0xf0ae24, .byte = 0x44 },
		{ .addr = 0xf0ae25, .byte = 0x84 }
};

static const SST_RamByte orw_final_ram_14[] = {
		{ .addr = 0x2d3b68, .byte = 0x8c },
		{ .addr = 0x2d3b69, .byte = 0x60 },
		{ .addr = 0x2d3b6a, .byte = 0xc8 },
		{ .addr = 0x2d3b6b, .byte = 0xe3 },
		{ .addr = 0x2f9520, .byte = 0x3b },
		{ .addr = 0x2f9521, .byte = 0x6c },
		{ .addr = 0x2f951c, .byte = 0x02 },
		{ .addr = 0x2f951d, .byte = 0x0f },
		{ .addr = 0x2f951e, .byte = 0x00 },
		{ .addr = 0x2f951f, .byte = 0x2d },
		{ .addr = 0x2f951a, .byte = 0x8c },
		{ .addr = 0x2f951b, .byte = 0x60 },
		{ .addr = 0x2f9518, .byte = 0xd7 },
		{ .addr = 0x2f9519, .byte = 0xc9 },
		{ .addr = 0x2f9514, .byte = 0x8c },
		{ .addr = 0x2f9515, .byte = 0x71 },
		{ .addr = 0x2f9516, .byte = 0x4a },
		{ .addr = 0x2f9517, .byte = 0x93 },
		{ .addr = 0x00000c, .byte = 0xce },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0xae },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0xf0ae22, .byte = 0xa6 },
		{ .addr = 0xf0ae23, .byte = 0xd9 },
		{ .addr = 0xf0ae24, .byte = 0x44 },
		{ .addr = 0xf0ae25, .byte = 0x84 }
};

static const SST_Transaction orw_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9689032, .data = 48624, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3118368, .data = 15212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3118364, .data = 527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3118366, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3118362, .data = 35936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3118360, .data = 55241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3118356, .data = 35953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3118358, .data = 19091, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15773218, .data = 42713, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15773220, .data = 17540, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orw_initial_ram_15[] = {
		{ .addr = 0x263730, .byte = 0x89 },
		{ .addr = 0x263731, .byte = 0x68 },
		{ .addr = 0x263732, .byte = 0x25 },
		{ .addr = 0x263733, .byte = 0xa8 },
		{ .addr = 0x263734, .byte = 0x6f },
		{ .addr = 0x263735, .byte = 0x11 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0xe6 },
		{ .addr = 0x00000e, .byte = 0x8f },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xe68f28, .byte = 0xed },
		{ .addr = 0xe68f29, .byte = 0xc9 },
		{ .addr = 0xe68f2a, .byte = 0x77 },
		{ .addr = 0xe68f2b, .byte = 0xca }
};

static const SST_RamByte orw_final_ram_15[] = {
		{ .addr = 0x263730, .byte = 0x89 },
		{ .addr = 0x263731, .byte = 0x68 },
		{ .addr = 0x263732, .byte = 0x25 },
		{ .addr = 0x263733, .byte = 0xa8 },
		{ .addr = 0x263734, .byte = 0x6f },
		{ .addr = 0x263735, .byte = 0x11 },
		{ .addr = 0xfda23a, .byte = 0x37 },
		{ .addr = 0xfda23b, .byte = 0x32 },
		{ .addr = 0xfda236, .byte = 0x20 },
		{ .addr = 0xfda237, .byte = 0x03 },
		{ .addr = 0xfda238, .byte = 0x00 },
		{ .addr = 0xfda239, .byte = 0x26 },
		{ .addr = 0xfda234, .byte = 0x89 },
		{ .addr = 0xfda235, .byte = 0x68 },
		{ .addr = 0xfda232, .byte = 0x89 },
		{ .addr = 0xfda233, .byte = 0x53 },
		{ .addr = 0xfda22e, .byte = 0x89 },
		{ .addr = 0xfda22f, .byte = 0x75 },
		{ .addr = 0xfda230, .byte = 0xf4 },
		{ .addr = 0xfda231, .byte = 0xd1 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0xe6 },
		{ .addr = 0x00000e, .byte = 0x8f },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xe68f28, .byte = 0xed },
		{ .addr = 0xe68f29, .byte = 0xc9 },
		{ .addr = 0xe68f2a, .byte = 0x77 },
		{ .addr = 0xe68f2b, .byte = 0xca }
};

static const SST_Transaction orw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2504500, .data = 28433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13732178, .data = 53329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16622138, .data = 14130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16622134, .data = 8195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16622136, .data = 38, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16622132, .data = 35176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16622130, .data = 35155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16622126, .data = 35189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16622128, .data = 62673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15109928, .data = 60873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15109930, .data = 30666, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ORW_TEST_COUNT = 16;
static const SST_TestCase orw[] = {
	{
		.name = "000 OR.w -(A4), D0 8064",
		.initial = {
			.regs = {
				3915457295, 1721067667, 2626242074, 2408546718, 3384892705, 3381734479, 2468666473, 2881617210, 1130281266, 2303216642, 1783045862, 437447299, 1203664122, 430460605, 47693689, 2483622, 16328982, 42268, 10243544
			},
			.prefetch0 = 32868,
			.prefetch1 = 29851,
			.ram = orw_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3915509535, 1721067667, 2626242074, 2408546718, 3384892705, 3381734479, 2468666473, 2881617210, 1130281266, 2303216642, 1783045862, 437447299, 1203664120, 430460605, 47693689, 2483622, 16328982, 42264, 10243546
			},
			.prefetch0 = 29851,
			.prefetch1 = 29989,
			.ram = orw_final_ram_0,
			.ram_len = 8,
		},
		.transactions = orw_transactions_0,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "001 OR.w (d8, PC, Xn), D0 807b",
		.initial = {
			.regs = {
				3940925936, 2208388606, 57030874, 1908169660, 3424655698, 10064849, 2456173713, 12135725, 1243038749, 2511077995, 2071446114, 3680151086, 2362543261, 3552029788, 1884627767, 6756284, 13245188, 1800, 11800510
			},
			.prefetch0 = 32891,
			.prefetch1 = 62822,
			.ram = orw_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3940926962, 2208388606, 57030874, 1908169660, 3424655698, 10064849, 2456173713, 12135725, 1243038749, 2511077995, 2071446114, 3680151086, 2362543261, 3552029788, 1884627767, 6756284, 13245188, 1800, 11800514
			},
			.prefetch0 = 59439,
			.prefetch1 = 24343,
			.ram = orw_final_ram_1,
			.ram_len = 10,
		},
		.transactions = orw_transactions_1,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "002 OR.w D5, (d8, A1, Xn) 8b71",
		.initial = {
			.regs = {
				1628048539, 218897150, 3172492233, 2645461092, 4163843840, 870916044, 3900226890, 821592436, 4094938593, 447908491, 2622683698, 1834598694, 2835100107, 3417311253, 542525437, 3185714, 12084468, 42783, 14360186
			},
			.prefetch0 = 35697,
			.prefetch1 = 24297,
			.ram = orw_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1628048539, 218897150, 3172492233, 2645461092, 4163843840, 870916044, 3900226890, 821592436, 4094938593, 447908491, 2622683698, 1834598694, 2835100107, 3417311253, 542525437, 3185714, 12084468, 42768, 14360190
			},
			.prefetch0 = 9828,
			.prefetch1 = 32405,
			.ram = orw_final_ram_2,
			.ram_len = 10,
		},
		.transactions = orw_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 OR.w D7, -(A3) 8f63",
		.initial = {
			.regs = {
				2562922546, 701885061, 3555977055, 2952258242, 876500591, 3772334315, 1585390335, 1354574846, 3774703875, 1567902499, 1965297932, 2357037964, 3350638554, 2772959141, 1116500458, 10289398, 5125880, 41490, 8607744
			},
			.prefetch0 = 36707,
			.prefetch1 = 64897,
			.ram = orw_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2562922546, 701885061, 3555977055, 2952258242, 876500591, 3772334315, 1585390335, 1354574846, 3774703875, 1567902499, 1965297932, 2357037962, 3350638554, 2772959141, 1116500458, 10289398, 5125880, 41496, 8607746
			},
			.prefetch0 = 64897,
			.prefetch1 = 34559,
			.ram = orw_final_ram_3,
			.ram_len = 8,
		},
		.transactions = orw_transactions_3,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "004 OR.w D2, (d16, A7) 856f",
		.initial = {
			.regs = {
				2902749619, 3439181058, 4060983859, 593192015, 872251573, 2296079460, 1650974168, 1307991898, 860129284, 1438265872, 1076057687, 1168129499, 1589186099, 2559085929, 882258692, 13386010, 1480306, 10005, 10520496
			},
			.prefetch0 = 34159,
			.prefetch1 = 19729,
			.ram = orw_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2902749619, 3439181058, 4060983859, 593192015, 872251573, 2296079460, 1650974168, 1307991898, 860129284, 1438265872, 1076057687, 1168129499, 1589186099, 2559085929, 882258692, 13386010, 1480292, 10005, 61493494
			},
			.prefetch0 = 53754,
			.prefetch1 = 38051,
			.ram = orw_final_ram_4,
			.ram_len = 28,
		},
		.transactions = orw_transactions_4,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "005 OR.w D2, (d16, A3) 856b",
		.initial = {
			.regs = {
				3558979593, 1045402277, 1058982042, 989430810, 79469576, 1953977251, 2272706910, 316055833, 1259225020, 765890204, 2102869066, 1602442462, 3075490104, 1340188879, 796761130, 11509456, 11939998, 8730, 4678820
			},
			.prefetch0 = 34155,
			.prefetch1 = 32643,
			.ram = orw_initial_ram_5,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3558979593, 1045402277, 1058982042, 989430810, 79469576, 1953977251, 2272706910, 316055833, 1259225020, 765890204, 2102869066, 1602442462, 3075490104, 1340188879, 796761130, 11509456, 11939984, 8730, 844284142
			},
			.prefetch0 = 10867,
			.prefetch1 = 11279,
			.ram = orw_final_ram_5,
			.ram_len = 28,
		},
		.transactions = orw_transactions_5,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "006 OR.w D4, (A6) 8956",
		.initial = {
			.regs = {
				4122753771, 1371053499, 4010132892, 3400986455, 221037894, 3719583272, 988600173, 3626196579, 607524994, 70709054, 3545113575, 1696490405, 2921644529, 3187324182, 925047197, 12527838, 5197630, 9751, 7429456
			},
			.prefetch0 = 35158,
			.prefetch1 = 39381,
			.ram = orw_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4122753771, 1371053499, 4010132892, 3400986455, 221037894, 3719583272, 988600173, 3626196579, 607524994, 70709054, 3545113575, 1696490405, 2921644529, 3187324182, 925047197, 12527838, 5197616, 9751, 2120274372
			},
			.prefetch0 = 4474,
			.prefetch1 = 24980,
			.ram = orw_final_ram_6,
			.ram_len = 26,
		},
		.transactions = orw_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 OR.w (d16, A0), D5 8a68",
		.initial = {
			.regs = {
				2099403779, 3460132057, 2700447905, 521518462, 833728823, 3091534855, 1812353044, 1690528880, 3995838951, 2407725576, 15547822, 4064922197, 2460337490, 1890321697, 1754742366, 15785654, 5976052, 1800, 15100370
			},
			.prefetch0 = 35432,
			.prefetch1 = 22808,
			.ram = orw_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2099403779, 3460132057, 2700447905, 521518462, 833728823, 3091534855, 1812353044, 1690528880, 3995838951, 2407725576, 15547822, 4064922197, 2460337490, 1890321697, 1754742366, 15785654, 5976038, 9992, 923419268
			},
			.prefetch0 = 48770,
			.prefetch1 = 910,
			.ram = orw_final_ram_7,
			.ram_len = 28,
		},
		.transactions = orw_transactions_7,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "008 OR.w D6, (d16, A7) 8d6f",
		.initial = {
			.regs = {
				3020881851, 1202772301, 1750953511, 1413078873, 4267310366, 499753904, 886921198, 2411955987, 3703756095, 203305478, 2257522138, 2552715503, 2319259209, 946960699, 3670844421, 8620546, 3154558, 41227, 7874880
			},
			.prefetch0 = 36207,
			.prefetch1 = 10595,
			.ram = orw_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3020881851, 1202772301, 1750953511, 1413078873, 4267310366, 499753904, 886921198, 2411955987, 3703756095, 203305478, 2257522138, 2552715503, 2319259209, 946960699, 3670844421, 8620546, 3154544, 8459, 2926992170
			},
			.prefetch0 = 62442,
			.prefetch1 = 2411,
			.ram = orw_final_ram_8,
			.ram_len = 28,
		},
		.transactions = orw_transactions_8,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "009 OR.w #, -(A7) 0067",
		.initial = {
			.regs = {
				3235343017, 3703148177, 3769165097, 1302801232, 3830393330, 1514399555, 119157047, 1369094056, 70094628, 246831503, 1460196595, 958737426, 3843805024, 366583158, 2020500693, 9036916, 8793932, 795, 7675036
			},
			.prefetch0 = 103,
			.prefetch1 = 43362,
			.ram = orw_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3235343017, 3703148177, 3769165097, 1302801232, 3830393330, 1514399555, 119157047, 1369094056, 70094628, 246831503, 1460196595, 958737426, 3843805024, 366583158, 2020500693, 9036914, 8793932, 792, 7675040
			},
			.prefetch0 = 60924,
			.prefetch1 = 13815,
			.ram = orw_final_ram_9,
			.ram_len = 10,
		},
		.transactions = orw_transactions_9,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "010 OR.w (A6), D5 8a56",
		.initial = {
			.regs = {
				1883586288, 2420690655, 113867945, 3711466560, 1635205933, 283534784, 1720974188, 721871512, 4168299224, 3703687742, 2540950629, 992442263, 4051035720, 1068329612, 880284173, 15751884, 13990876, 9228, 15300374
			},
			.prefetch0 = 35414,
			.prefetch1 = 16429,
			.ram = orw_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1883586288, 2420690655, 113867945, 3711466560, 1635205933, 283534784, 1720974188, 721871512, 4168299224, 3703687742, 2540950629, 992442263, 4051035720, 1068329612, 880284173, 15751884, 13990862, 9228, 4177709126
			},
			.prefetch0 = 51752,
			.prefetch1 = 32595,
			.ram = orw_final_ram_10,
			.ram_len = 26,
		},
		.transactions = orw_transactions_10,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "011 OR.w D7, -(A5) 8f65",
		.initial = {
			.regs = {
				1657226018, 3879929658, 974073827, 801682871, 434484562, 2240697645, 949573311, 1885630514, 815600631, 284283617, 2630015783, 1723620109, 670507276, 1524160059, 221187630, 15769656, 6333622, 34307, 8242180
			},
			.prefetch0 = 36709,
			.prefetch1 = 36598,
			.ram = orw_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1657226018, 3879929658, 974073827, 801682871, 434484562, 2240697645, 949573311, 1885630514, 815600631, 284283617, 2630015783, 1723620109, 670507276, 1524160057, 221187630, 15769656, 6333608, 9731, 2141237168
			},
			.prefetch0 = 36274,
			.prefetch1 = 15289,
			.ram = orw_final_ram_11,
			.ram_len = 26,
		},
		.transactions = orw_transactions_11,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "012 OR.w D7, (A1)+ 8f59",
		.initial = {
			.regs = {
				3756262019, 2622044861, 2174887955, 3297659640, 155757418, 3702684329, 2059822100, 1970454415, 715070904, 1877445139, 350645111, 1370551106, 885268848, 2237310520, 3478949917, 1369802, 7530680, 1040, 1386902
			},
			.prefetch0 = 36697,
			.prefetch1 = 40497,
			.ram = orw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3756262019, 2622044861, 2174887955, 3297659640, 155757418, 3702684329, 2059822100, 1970454415, 715070904, 1877445141, 350645111, 1370551106, 885268848, 2237310520, 3478949917, 1369802, 7530666, 9232, 3243257814
			},
			.prefetch0 = 45828,
			.prefetch1 = 11240,
			.ram = orw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = orw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 OR.w D7, (d8, A6, Xn) 8f76",
		.initial = {
			.regs = {
				3758951293, 2210563266, 922464381, 3601388848, 1183847304, 2957425356, 1416301336, 4197130511, 2550542800, 3286673127, 3551570218, 68272510, 4009550694, 2416245922, 60635223, 294902, 249674, 33287, 13280096
			},
			.prefetch0 = 36726,
			.prefetch1 = 18887,
			.ram = orw_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3758951293, 2210563266, 922464381, 3601388848, 1183847304, 2957425356, 1416301336, 4197130511, 2550542800, 3286673127, 3551570218, 68272510, 4009550694, 2416245922, 60635223, 294902, 249674, 33280, 13280100
			},
			.prefetch0 = 44589,
			.prefetch1 = 12727,
			.ram = orw_final_ram_13,
			.ram_len = 10,
		},
		.transactions = orw_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 OR.w -(A0), D6 8c60",
		.initial = {
			.regs = {
				2283468109, 3138678479, 2480992637, 373846289, 553510766, 620635825, 3567787534, 2874018202, 1251203019, 2263744474, 23036615, 3131963318, 1749312198, 3652662178, 433616570, 16518072, 3118370, 527, 2964332
			},
			.prefetch0 = 35936,
			.prefetch1 = 51427,
			.ram = orw_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2283468109, 3138678479, 2480992637, 373846289, 553510766, 620635825, 3567787534, 2874018202, 1251203017, 2263744474, 23036615, 3131963318, 1749312198, 3652662178, 433616570, 16518072, 3118356, 8719, 3471879718
			},
			.prefetch0 = 42713,
			.prefetch1 = 17540,
			.ram = orw_final_ram_14,
			.ram_len = 26,
		},
		.transactions = orw_transactions_14,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "015 OR.w D4, (d16, A0) 8968",
		.initial = {
			.regs = {
				1201592401, 3681186673, 1269684357, 1668807504, 807945913, 200513240, 2095936623, 942101073, 4107363243, 942078094, 2133812181, 3802416492, 930836928, 3905323402, 3160889657, 7672482, 16622140, 8195, 2504500
			},
			.prefetch0 = 35176,
			.prefetch1 = 9640,
			.ram = orw_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1201592401, 3681186673, 1269684357, 1668807504, 807945913, 200513240, 2095936623, 942101073, 4107363243, 942078094, 2133812181, 3802416492, 930836928, 3905323402, 3160889657, 7672482, 16622126, 8195, 2447806252
			},
			.prefetch0 = 60873,
			.prefetch1 = 30666,
			.ram = orw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = orw_transactions_15,
		.transactions_len = 15,
		.lenght = 62,
	},
};

#endif /* RBT_ORW_H */