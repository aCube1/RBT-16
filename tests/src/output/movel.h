#ifndef RBT_MOVEL_H
#define RBT_MOVEL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte movel_initial_ram_0[] = {
		{ .addr = 0x13e4d4, .byte = 0x26 },
		{ .addr = 0x13e4d5, .byte = 0x0e },
		{ .addr = 0x13e4d6, .byte = 0xeb },
		{ .addr = 0x13e4d7, .byte = 0xec },
		{ .addr = 0x13e4d8, .byte = 0xda },
		{ .addr = 0x13e4d9, .byte = 0x0c }
};

static const SST_RamByte movel_final_ram_0[] = {
		{ .addr = 0x13e4d4, .byte = 0x26 },
		{ .addr = 0x13e4d5, .byte = 0x0e },
		{ .addr = 0x13e4d6, .byte = 0xeb },
		{ .addr = 0x13e4d7, .byte = 0xec },
		{ .addr = 0x13e4d8, .byte = 0xda },
		{ .addr = 0x13e4d9, .byte = 0x0c }
};

static const SST_Transaction movel_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1303768, .data = 55820, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_1[] = {
		{ .addr = 0x569e3a, .byte = 0x25 },
		{ .addr = 0x569e3b, .byte = 0x70 },
		{ .addr = 0x569e3c, .byte = 0x88 },
		{ .addr = 0x569e3d, .byte = 0xee },
		{ .addr = 0x569e3e, .byte = 0x71 },
		{ .addr = 0x569e3f, .byte = 0xca },
		{ .addr = 0x2b8ea2, .byte = 0xbc },
		{ .addr = 0x2b8ea3, .byte = 0x12 },
		{ .addr = 0x2b8ea4, .byte = 0xd0 },
		{ .addr = 0x2b8ea5, .byte = 0xce },
		{ .addr = 0x569e40, .byte = 0x63 },
		{ .addr = 0x569e41, .byte = 0xda },
		{ .addr = 0x569e42, .byte = 0xa9 },
		{ .addr = 0x569e43, .byte = 0x30 }
};

static const SST_RamByte movel_final_ram_1[] = {
		{ .addr = 0x569e3a, .byte = 0x25 },
		{ .addr = 0x569e3b, .byte = 0x70 },
		{ .addr = 0x569e3c, .byte = 0x88 },
		{ .addr = 0x569e3d, .byte = 0xee },
		{ .addr = 0x569e3e, .byte = 0x71 },
		{ .addr = 0x569e3f, .byte = 0xca },
		{ .addr = 0x2b8ea2, .byte = 0xbc },
		{ .addr = 0x2b8ea3, .byte = 0x12 },
		{ .addr = 0x2b8ea4, .byte = 0xd0 },
		{ .addr = 0x2b8ea5, .byte = 0xce },
		{ .addr = 0x569e40, .byte = 0x63 },
		{ .addr = 0x569e41, .byte = 0xda },
		{ .addr = 0x4a72de, .byte = 0xbc },
		{ .addr = 0x4a72df, .byte = 0x12 },
		{ .addr = 0x4a72e0, .byte = 0xd0 },
		{ .addr = 0x4a72e1, .byte = 0xce },
		{ .addr = 0x569e42, .byte = 0xa9 },
		{ .addr = 0x569e43, .byte = 0x30 }
};

static const SST_Transaction movel_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5676606, .data = 29130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2854562, .data = 48146, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2854564, .data = 53454, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5676608, .data = 25562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4879070, .data = 48146, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4879072, .data = 53454, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5676610, .data = 43312, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_2[] = {
		{ .addr = 0x6e51e6, .byte = 0x2a },
		{ .addr = 0x6e51e7, .byte = 0x08 },
		{ .addr = 0x6e51e8, .byte = 0xa9 },
		{ .addr = 0x6e51e9, .byte = 0x9e },
		{ .addr = 0x6e51ea, .byte = 0xc2 },
		{ .addr = 0x6e51eb, .byte = 0x3d }
};

static const SST_RamByte movel_final_ram_2[] = {
		{ .addr = 0x6e51e6, .byte = 0x2a },
		{ .addr = 0x6e51e7, .byte = 0x08 },
		{ .addr = 0x6e51e8, .byte = 0xa9 },
		{ .addr = 0x6e51e9, .byte = 0x9e },
		{ .addr = 0x6e51ea, .byte = 0xc2 },
		{ .addr = 0x6e51eb, .byte = 0x3d }
};

static const SST_Transaction movel_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7229930, .data = 49725, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_3[] = {
		{ .addr = 0xb37e64, .byte = 0x28 },
		{ .addr = 0xb37e65, .byte = 0xad },
		{ .addr = 0xb37e66, .byte = 0x0a },
		{ .addr = 0xb37e67, .byte = 0xf0 },
		{ .addr = 0xb37e68, .byte = 0xf1 },
		{ .addr = 0xb37e69, .byte = 0xd4 },
		{ .addr = 0x4b27ee, .byte = 0xba },
		{ .addr = 0x4b27ef, .byte = 0xeb },
		{ .addr = 0x4b27f0, .byte = 0x08 },
		{ .addr = 0x4b27f1, .byte = 0xe2 },
		{ .addr = 0x00000c, .byte = 0x90 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0x9079de, .byte = 0xed },
		{ .addr = 0x9079df, .byte = 0x28 },
		{ .addr = 0x9079e0, .byte = 0x14 },
		{ .addr = 0x9079e1, .byte = 0x4c }
};

static const SST_RamByte movel_final_ram_3[] = {
		{ .addr = 0xb37e64, .byte = 0x28 },
		{ .addr = 0xb37e65, .byte = 0xad },
		{ .addr = 0xb37e66, .byte = 0x0a },
		{ .addr = 0xb37e67, .byte = 0xf0 },
		{ .addr = 0xb37e68, .byte = 0xf1 },
		{ .addr = 0xb37e69, .byte = 0xd4 },
		{ .addr = 0x4b27ee, .byte = 0xba },
		{ .addr = 0x4b27ef, .byte = 0xeb },
		{ .addr = 0x4b27f0, .byte = 0x08 },
		{ .addr = 0x4b27f1, .byte = 0xe2 },
		{ .addr = 0x7f39de, .byte = 0x7e },
		{ .addr = 0x7f39df, .byte = 0x6a },
		{ .addr = 0x7f39da, .byte = 0xa6 },
		{ .addr = 0x7f39db, .byte = 0x00 },
		{ .addr = 0x7f39dc, .byte = 0x00 },
		{ .addr = 0x7f39dd, .byte = 0xb3 },
		{ .addr = 0x7f39d8, .byte = 0x28 },
		{ .addr = 0x7f39d9, .byte = 0xad },
		{ .addr = 0x7f39d6, .byte = 0xbe },
		{ .addr = 0x7f39d7, .byte = 0x59 },
		{ .addr = 0x7f39d2, .byte = 0x28 },
		{ .addr = 0x7f39d3, .byte = 0xa5 },
		{ .addr = 0x7f39d4, .byte = 0x18 },
		{ .addr = 0x7f39d5, .byte = 0x2b },
		{ .addr = 0x00000c, .byte = 0x90 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0x9079de, .byte = 0xed },
		{ .addr = 0x9079df, .byte = 0x28 },
		{ .addr = 0x9079e0, .byte = 0x14 },
		{ .addr = 0x9079e1, .byte = 0x4c }
};

static const SST_Transaction movel_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11763304, .data = 61908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4925422, .data = 47851, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4925424, .data = 2274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2866776, .data = 47851, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8337886, .data = 32362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8337882, .data = 42496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8337884, .data = 179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8337880, .data = 10413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8337878, .data = 48729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8337874, .data = 10405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8337876, .data = 6187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9468382, .data = 60712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9468384, .data = 5196, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_4[] = {
		{ .addr = 0xc9762a, .byte = 0x26 },
		{ .addr = 0xc9762b, .byte = 0x2c },
		{ .addr = 0xc9762c, .byte = 0x83 },
		{ .addr = 0xc9762d, .byte = 0x60 },
		{ .addr = 0xc9762e, .byte = 0x5e },
		{ .addr = 0xc9762f, .byte = 0x8a },
		{ .addr = 0x5cc5a4, .byte = 0xbb },
		{ .addr = 0x5cc5a5, .byte = 0xb0 },
		{ .addr = 0x5cc5a6, .byte = 0x5f },
		{ .addr = 0x5cc5a7, .byte = 0x21 },
		{ .addr = 0xc97630, .byte = 0xd9 },
		{ .addr = 0xc97631, .byte = 0xb2 }
};

static const SST_RamByte movel_final_ram_4[] = {
		{ .addr = 0xc9762a, .byte = 0x26 },
		{ .addr = 0xc9762b, .byte = 0x2c },
		{ .addr = 0xc9762c, .byte = 0x83 },
		{ .addr = 0xc9762d, .byte = 0x60 },
		{ .addr = 0xc9762e, .byte = 0x5e },
		{ .addr = 0xc9762f, .byte = 0x8a },
		{ .addr = 0x5cc5a4, .byte = 0xbb },
		{ .addr = 0x5cc5a5, .byte = 0xb0 },
		{ .addr = 0x5cc5a6, .byte = 0x5f },
		{ .addr = 0x5cc5a7, .byte = 0x21 },
		{ .addr = 0xc97630, .byte = 0xd9 },
		{ .addr = 0xc97631, .byte = 0xb2 }
};

static const SST_Transaction movel_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13202990, .data = 24202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6079908, .data = 48048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6079910, .data = 24353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13202992, .data = 55730, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_5[] = {
		{ .addr = 0x175a64, .byte = 0x2a },
		{ .addr = 0x175a65, .byte = 0xa7 },
		{ .addr = 0x175a66, .byte = 0x7e },
		{ .addr = 0x175a67, .byte = 0x68 },
		{ .addr = 0x4af6ac, .byte = 0x2c },
		{ .addr = 0x4af6ad, .byte = 0x4b },
		{ .addr = 0x4af6ae, .byte = 0x77 },
		{ .addr = 0x4af6af, .byte = 0x78 },
		{ .addr = 0x175a68, .byte = 0xb1 },
		{ .addr = 0x175a69, .byte = 0xf9 }
};

static const SST_RamByte movel_final_ram_5[] = {
		{ .addr = 0x175a64, .byte = 0x2a },
		{ .addr = 0x175a65, .byte = 0xa7 },
		{ .addr = 0x175a66, .byte = 0x7e },
		{ .addr = 0x175a67, .byte = 0x68 },
		{ .addr = 0x4af6ac, .byte = 0x2c },
		{ .addr = 0x4af6ad, .byte = 0x4b },
		{ .addr = 0x4af6ae, .byte = 0x77 },
		{ .addr = 0x4af6af, .byte = 0x78 },
		{ .addr = 0xbba078, .byte = 0x2c },
		{ .addr = 0xbba079, .byte = 0x4b },
		{ .addr = 0xbba07a, .byte = 0x77 },
		{ .addr = 0xbba07b, .byte = 0x78 },
		{ .addr = 0x175a68, .byte = 0xb1 },
		{ .addr = 0x175a69, .byte = 0xf9 }
};

static const SST_Transaction movel_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4912812, .data = 11339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4912814, .data = 30584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12296312, .data = 11339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12296314, .data = 30584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1530472, .data = 45561, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_6[] = {
		{ .addr = 0xbe94c6, .byte = 0x23 },
		{ .addr = 0xbe94c7, .byte = 0x27 },
		{ .addr = 0xbe94c8, .byte = 0x75 },
		{ .addr = 0xbe94c9, .byte = 0xb5 },
		{ .addr = 0x6d1072, .byte = 0xd9 },
		{ .addr = 0x6d1073, .byte = 0x7f },
		{ .addr = 0x6d1074, .byte = 0xa3 },
		{ .addr = 0x6d1075, .byte = 0x50 },
		{ .addr = 0xbe94ca, .byte = 0x39 },
		{ .addr = 0xbe94cb, .byte = 0x1d }
};

static const SST_RamByte movel_final_ram_6[] = {
		{ .addr = 0xbe94c6, .byte = 0x23 },
		{ .addr = 0xbe94c7, .byte = 0x27 },
		{ .addr = 0xbe94c8, .byte = 0x75 },
		{ .addr = 0xbe94c9, .byte = 0xb5 },
		{ .addr = 0x6d1072, .byte = 0xd9 },
		{ .addr = 0x6d1073, .byte = 0x7f },
		{ .addr = 0x6d1074, .byte = 0xa3 },
		{ .addr = 0x6d1075, .byte = 0x50 },
		{ .addr = 0xbe94ca, .byte = 0x39 },
		{ .addr = 0xbe94cb, .byte = 0x1d },
		{ .addr = 0x72c4c0, .byte = 0xa3 },
		{ .addr = 0x72c4c1, .byte = 0x50 },
		{ .addr = 0x72c4be, .byte = 0xd9 },
		{ .addr = 0x72c4bf, .byte = 0x7f }
};

static const SST_Transaction movel_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7147634, .data = 55679, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7147636, .data = 41808, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12489930, .data = 14621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7521472, .data = 41808, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7521470, .data = 55679, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_7[] = {
		{ .addr = 0xb1b354, .byte = 0x2d },
		{ .addr = 0xb1b355, .byte = 0x38 },
		{ .addr = 0xb1b356, .byte = 0x0e },
		{ .addr = 0xb1b357, .byte = 0x1e },
		{ .addr = 0xb1b358, .byte = 0x12 },
		{ .addr = 0xb1b359, .byte = 0x9d },
		{ .addr = 0x000e1e, .byte = 0x6b },
		{ .addr = 0x000e1f, .byte = 0xfc },
		{ .addr = 0x000e20, .byte = 0x98 },
		{ .addr = 0x000e21, .byte = 0x86 },
		{ .addr = 0xb1b35a, .byte = 0x85 },
		{ .addr = 0xb1b35b, .byte = 0x22 }
};

static const SST_RamByte movel_final_ram_7[] = {
		{ .addr = 0xb1b354, .byte = 0x2d },
		{ .addr = 0xb1b355, .byte = 0x38 },
		{ .addr = 0xb1b356, .byte = 0x0e },
		{ .addr = 0xb1b357, .byte = 0x1e },
		{ .addr = 0xb1b358, .byte = 0x12 },
		{ .addr = 0xb1b359, .byte = 0x9d },
		{ .addr = 0x000e1e, .byte = 0x6b },
		{ .addr = 0x000e1f, .byte = 0xfc },
		{ .addr = 0x000e20, .byte = 0x98 },
		{ .addr = 0x000e21, .byte = 0x86 },
		{ .addr = 0xb1b35a, .byte = 0x85 },
		{ .addr = 0xb1b35b, .byte = 0x22 },
		{ .addr = 0x617ba0, .byte = 0x98 },
		{ .addr = 0x617ba1, .byte = 0x86 },
		{ .addr = 0x617b9e, .byte = 0x6b },
		{ .addr = 0x617b9f, .byte = 0xfc }
};

static const SST_Transaction movel_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11645784, .data = 4765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3614, .data = 27644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3616, .data = 39046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11645786, .data = 34082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6388640, .data = 39046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6388638, .data = 27644, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_8[] = {
		{ .addr = 0xf9af70, .byte = 0x2b },
		{ .addr = 0xf9af71, .byte = 0x88 },
		{ .addr = 0xf9af72, .byte = 0xe0 },
		{ .addr = 0xf9af73, .byte = 0xa5 },
		{ .addr = 0xf9af74, .byte = 0x08 },
		{ .addr = 0xf9af75, .byte = 0xe9 },
		{ .addr = 0xf9af76, .byte = 0x2c },
		{ .addr = 0xf9af77, .byte = 0x36 }
};

static const SST_RamByte movel_final_ram_8[] = {
		{ .addr = 0xf9af70, .byte = 0x2b },
		{ .addr = 0xf9af71, .byte = 0x88 },
		{ .addr = 0xf9af72, .byte = 0xe0 },
		{ .addr = 0xf9af73, .byte = 0xa5 },
		{ .addr = 0xf9af74, .byte = 0x08 },
		{ .addr = 0xf9af75, .byte = 0xe9 },
		{ .addr = 0x88dfea, .byte = 0xa9 },
		{ .addr = 0x88dfeb, .byte = 0xe8 },
		{ .addr = 0x88dfec, .byte = 0x83 },
		{ .addr = 0x88dfed, .byte = 0x68 },
		{ .addr = 0xf9af76, .byte = 0x2c },
		{ .addr = 0xf9af77, .byte = 0x36 }
};

static const SST_Transaction movel_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16363380, .data = 2281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8970218, .data = 43496, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8970220, .data = 33640, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16363382, .data = 11318, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_9[] = {
		{ .addr = 0x88ad84, .byte = 0x2c },
		{ .addr = 0x88ad85, .byte = 0xb5 },
		{ .addr = 0x88ad86, .byte = 0x3a },
		{ .addr = 0x88ad87, .byte = 0x00 },
		{ .addr = 0x88ad88, .byte = 0x57 },
		{ .addr = 0x88ad89, .byte = 0x57 },
		{ .addr = 0xaa90aa, .byte = 0xc3 },
		{ .addr = 0xaa90ab, .byte = 0x39 },
		{ .addr = 0xaa90ac, .byte = 0x1c },
		{ .addr = 0xaa90ad, .byte = 0x21 },
		{ .addr = 0x88ad8a, .byte = 0xf2 },
		{ .addr = 0x88ad8b, .byte = 0x62 }
};

static const SST_RamByte movel_final_ram_9[] = {
		{ .addr = 0x88ad84, .byte = 0x2c },
		{ .addr = 0x88ad85, .byte = 0xb5 },
		{ .addr = 0x88ad86, .byte = 0x3a },
		{ .addr = 0x88ad87, .byte = 0x00 },
		{ .addr = 0x88ad88, .byte = 0x57 },
		{ .addr = 0x88ad89, .byte = 0x57 },
		{ .addr = 0xaa90aa, .byte = 0xc3 },
		{ .addr = 0xaa90ab, .byte = 0x39 },
		{ .addr = 0xaa90ac, .byte = 0x1c },
		{ .addr = 0xaa90ad, .byte = 0x21 },
		{ .addr = 0x3791c4, .byte = 0xc3 },
		{ .addr = 0x3791c5, .byte = 0x39 },
		{ .addr = 0x3791c6, .byte = 0x1c },
		{ .addr = 0x3791c7, .byte = 0x21 },
		{ .addr = 0x88ad8a, .byte = 0xf2 },
		{ .addr = 0x88ad8b, .byte = 0x62 }
};

static const SST_Transaction movel_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8957320, .data = 22359, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11178154, .data = 49977, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11178156, .data = 7201, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3641796, .data = 49977, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3641798, .data = 7201, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8957322, .data = 62050, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_10[] = {
		{ .addr = 0x861d64, .byte = 0x25 },
		{ .addr = 0x861d65, .byte = 0x8e },
		{ .addr = 0x861d66, .byte = 0x21 },
		{ .addr = 0x861d67, .byte = 0x2e },
		{ .addr = 0x861d68, .byte = 0xdd },
		{ .addr = 0x861d69, .byte = 0xe7 },
		{ .addr = 0x861d6a, .byte = 0xa9 },
		{ .addr = 0x861d6b, .byte = 0xde }
};

static const SST_RamByte movel_final_ram_10[] = {
		{ .addr = 0x861d64, .byte = 0x25 },
		{ .addr = 0x861d65, .byte = 0x8e },
		{ .addr = 0x861d66, .byte = 0x21 },
		{ .addr = 0x861d67, .byte = 0x2e },
		{ .addr = 0x861d68, .byte = 0xdd },
		{ .addr = 0x861d69, .byte = 0xe7 },
		{ .addr = 0x5a6774, .byte = 0x5c },
		{ .addr = 0x5a6775, .byte = 0xec },
		{ .addr = 0x5a6776, .byte = 0x30 },
		{ .addr = 0x5a6777, .byte = 0x11 },
		{ .addr = 0x861d6a, .byte = 0xa9 },
		{ .addr = 0x861d6b, .byte = 0xde }
};

static const SST_Transaction movel_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8789352, .data = 56807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5924724, .data = 23788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5924726, .data = 12305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8789354, .data = 43486, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_11[] = {
		{ .addr = 0x3093d0, .byte = 0x2c },
		{ .addr = 0x3093d1, .byte = 0x1f },
		{ .addr = 0x3093d2, .byte = 0x50 },
		{ .addr = 0x3093d3, .byte = 0xd1 },
		{ .addr = 0x0febc0, .byte = 0xb3 },
		{ .addr = 0x0febc1, .byte = 0x55 },
		{ .addr = 0x0febc2, .byte = 0x4e },
		{ .addr = 0x0febc3, .byte = 0xad },
		{ .addr = 0x3093d4, .byte = 0xef },
		{ .addr = 0x3093d5, .byte = 0xf2 }
};

static const SST_RamByte movel_final_ram_11[] = {
		{ .addr = 0x3093d0, .byte = 0x2c },
		{ .addr = 0x3093d1, .byte = 0x1f },
		{ .addr = 0x3093d2, .byte = 0x50 },
		{ .addr = 0x3093d3, .byte = 0xd1 },
		{ .addr = 0x0febc0, .byte = 0xb3 },
		{ .addr = 0x0febc1, .byte = 0x55 },
		{ .addr = 0x0febc2, .byte = 0x4e },
		{ .addr = 0x0febc3, .byte = 0xad },
		{ .addr = 0x3093d4, .byte = 0xef },
		{ .addr = 0x3093d5, .byte = 0xf2 }
};

static const SST_Transaction movel_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1043392, .data = 45909, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1043394, .data = 20141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3183572, .data = 61426, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_12[] = {
		{ .addr = 0x8e5dde, .byte = 0x2d },
		{ .addr = 0x8e5ddf, .byte = 0x2c },
		{ .addr = 0x8e5de0, .byte = 0x64 },
		{ .addr = 0x8e5de1, .byte = 0xa9 },
		{ .addr = 0x8e5de2, .byte = 0xd8 },
		{ .addr = 0x8e5de3, .byte = 0x34 },
		{ .addr = 0x00000c, .byte = 0x17 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x99 },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0xde9900, .byte = 0xb9 },
		{ .addr = 0xde9901, .byte = 0x4e },
		{ .addr = 0xde9902, .byte = 0x4d },
		{ .addr = 0xde9903, .byte = 0xa8 }
};

static const SST_RamByte movel_final_ram_12[] = {
		{ .addr = 0x8e5dde, .byte = 0x2d },
		{ .addr = 0x8e5ddf, .byte = 0x2c },
		{ .addr = 0x8e5de0, .byte = 0x64 },
		{ .addr = 0x8e5de1, .byte = 0xa9 },
		{ .addr = 0x8e5de2, .byte = 0xd8 },
		{ .addr = 0x8e5de3, .byte = 0x34 },
		{ .addr = 0x14c358, .byte = 0x5d },
		{ .addr = 0x14c359, .byte = 0xe0 },
		{ .addr = 0x14c354, .byte = 0x22 },
		{ .addr = 0x14c355, .byte = 0x1b },
		{ .addr = 0x14c356, .byte = 0x00 },
		{ .addr = 0x14c357, .byte = 0x8e },
		{ .addr = 0x14c352, .byte = 0x2d },
		{ .addr = 0x14c353, .byte = 0x2c },
		{ .addr = 0x14c350, .byte = 0x18 },
		{ .addr = 0x14c351, .byte = 0x97 },
		{ .addr = 0x14c34c, .byte = 0x2d },
		{ .addr = 0x14c34d, .byte = 0x35 },
		{ .addr = 0x14c34e, .byte = 0x9b },
		{ .addr = 0x14c34f, .byte = 0x2b },
		{ .addr = 0x00000c, .byte = 0x17 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x99 },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0xde9900, .byte = 0xb9 },
		{ .addr = 0xde9901, .byte = 0x4e },
		{ .addr = 0xde9902, .byte = 0x4d },
		{ .addr = 0xde9903, .byte = 0xa8 }
};

static const SST_Transaction movel_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9330146, .data = 55348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2824342, .data = 8961, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1360728, .data = 24032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1360724, .data = 8731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1360726, .data = 142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1360722, .data = 11564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1360720, .data = 6295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1360716, .data = 11573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1360718, .data = 39723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 39168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14588160, .data = 47438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14588162, .data = 19880, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_13[] = {
		{ .addr = 0x2d20a8, .byte = 0x23 },
		{ .addr = 0x2d20a9, .byte = 0x48 },
		{ .addr = 0x2d20aa, .byte = 0x54 },
		{ .addr = 0x2d20ab, .byte = 0xc2 },
		{ .addr = 0x2d20ac, .byte = 0x28 },
		{ .addr = 0x2d20ad, .byte = 0xe4 },
		{ .addr = 0x2d20ae, .byte = 0x39 },
		{ .addr = 0x2d20af, .byte = 0x03 }
};

static const SST_RamByte movel_final_ram_13[] = {
		{ .addr = 0x2d20a8, .byte = 0x23 },
		{ .addr = 0x2d20a9, .byte = 0x48 },
		{ .addr = 0x2d20aa, .byte = 0x54 },
		{ .addr = 0x2d20ab, .byte = 0xc2 },
		{ .addr = 0x2d20ac, .byte = 0x28 },
		{ .addr = 0x2d20ad, .byte = 0xe4 },
		{ .addr = 0x7dbda8, .byte = 0xe8 },
		{ .addr = 0x7dbda9, .byte = 0x60 },
		{ .addr = 0x7dbdaa, .byte = 0x29 },
		{ .addr = 0x7dbdab, .byte = 0xfd },
		{ .addr = 0x2d20ae, .byte = 0x39 },
		{ .addr = 0x2d20af, .byte = 0x03 }
};

static const SST_Transaction movel_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2957484, .data = 10468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8240552, .data = 59488, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8240554, .data = 10749, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2957486, .data = 14595, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_14[] = {
		{ .addr = 0x3f23c6, .byte = 0x23 },
		{ .addr = 0x3f23c7, .byte = 0x29 },
		{ .addr = 0x3f23c8, .byte = 0x40 },
		{ .addr = 0x3f23c9, .byte = 0xa4 },
		{ .addr = 0x3f23ca, .byte = 0xf8 },
		{ .addr = 0x3f23cb, .byte = 0xf8 },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0x58 },
		{ .addr = 0x00000e, .byte = 0xfd },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x58fd90, .byte = 0x65 },
		{ .addr = 0x58fd91, .byte = 0x4b },
		{ .addr = 0x58fd92, .byte = 0xc6 },
		{ .addr = 0x58fd93, .byte = 0xed }
};

static const SST_RamByte movel_final_ram_14[] = {
		{ .addr = 0x3f23c6, .byte = 0x23 },
		{ .addr = 0x3f23c7, .byte = 0x29 },
		{ .addr = 0x3f23c8, .byte = 0x40 },
		{ .addr = 0x3f23c9, .byte = 0xa4 },
		{ .addr = 0x3f23ca, .byte = 0xf8 },
		{ .addr = 0x3f23cb, .byte = 0xf8 },
		{ .addr = 0x696cc2, .byte = 0x23 },
		{ .addr = 0x696cc3, .byte = 0xc8 },
		{ .addr = 0x696cbe, .byte = 0x05 },
		{ .addr = 0x696cbf, .byte = 0x04 },
		{ .addr = 0x696cc0, .byte = 0x00 },
		{ .addr = 0x696cc1, .byte = 0x3f },
		{ .addr = 0x696cbc, .byte = 0x23 },
		{ .addr = 0x696cbd, .byte = 0x29 },
		{ .addr = 0x696cba, .byte = 0xba },
		{ .addr = 0x696cbb, .byte = 0xe1 },
		{ .addr = 0x696cb6, .byte = 0x23 },
		{ .addr = 0x696cb7, .byte = 0x31 },
		{ .addr = 0x696cb8, .byte = 0xb9 },
		{ .addr = 0x696cb9, .byte = 0xaf },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0x58 },
		{ .addr = 0x00000e, .byte = 0xfd },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x58fd90, .byte = 0x65 },
		{ .addr = 0x58fd91, .byte = 0x4b },
		{ .addr = 0x58fd92, .byte = 0xc6 },
		{ .addr = 0x58fd93, .byte = 0xed }
};

static const SST_Transaction movel_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4137930, .data = 63736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11516640, .data = 21697, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6909122, .data = 9160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6909118, .data = 1284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6909120, .data = 63, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6909116, .data = 9001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6909114, .data = 47841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6909110, .data = 9009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6909112, .data = 47535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 64912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5832080, .data = 25931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5832082, .data = 50925, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movel_initial_ram_15[] = {
		{ .addr = 0x13feee, .byte = 0x21 },
		{ .addr = 0x13feef, .byte = 0xc3 },
		{ .addr = 0x13fef0, .byte = 0x12 },
		{ .addr = 0x13fef1, .byte = 0xfe },
		{ .addr = 0x13fef2, .byte = 0xf2 },
		{ .addr = 0x13fef3, .byte = 0x41 },
		{ .addr = 0x13fef4, .byte = 0xaf },
		{ .addr = 0x13fef5, .byte = 0x38 }
};

static const SST_RamByte movel_final_ram_15[] = {
		{ .addr = 0x13feee, .byte = 0x21 },
		{ .addr = 0x13feef, .byte = 0xc3 },
		{ .addr = 0x13fef0, .byte = 0x12 },
		{ .addr = 0x13fef1, .byte = 0xfe },
		{ .addr = 0x13fef2, .byte = 0xf2 },
		{ .addr = 0x13fef3, .byte = 0x41 },
		{ .addr = 0x0012fe, .byte = 0x8c },
		{ .addr = 0x0012ff, .byte = 0x37 },
		{ .addr = 0x001300, .byte = 0x6e },
		{ .addr = 0x001301, .byte = 0x5d },
		{ .addr = 0x13fef4, .byte = 0xaf },
		{ .addr = 0x13fef5, .byte = 0x38 }
};

static const SST_Transaction movel_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1310450, .data = 62017, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4862, .data = 35895, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4864, .data = 28253, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1310452, .data = 44856, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t MOVEL_TEST_COUNT = 16;
static const SST_TestCase movel[] = {
	{
		.name = "000 MOVE.l A6, D3 260e",
		.initial = {
			.regs = {
				2779654795, 879651737, 3747849768, 371410818, 733505073, 2153566449, 1534803634, 4126857533, 1367930284, 2255304597, 4024009226, 484857825, 3467196709, 1244927156, 1581769544, 12022830, 3289112, 1544, 1303768
			},
			.prefetch0 = 9742,
			.prefetch1 = 60396,
			.ram = movel_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2779654795, 879651737, 3747849768, 1581769544, 733505073, 2153566449, 1534803634, 4126857533, 1367930284, 2255304597, 4024009226, 484857825, 3467196709, 1244927156, 1581769544, 12022830, 3289112, 1536, 1303770
			},
			.prefetch0 = 60396,
			.prefetch1 = 55820,
			.ram = movel_final_ram_0,
			.ram_len = 6,
		},
		.transactions = movel_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 MOVE.l (d8, A0, Xn), (d16, A2) 2570",
		.initial = {
			.regs = {
				1533835210, 994271455, 34986579, 774726320, 2294615150, 2416230934, 2838049792, 2294923249, 2954217306, 83114230, 3041526036, 4254866453, 1765420560, 1538243752, 1181174755, 1664390, 11063688, 33044, 5676606
			},
			.prefetch0 = 9584,
			.prefetch1 = 35054,
			.ram = movel_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1533835210, 994271455, 34986579, 774726320, 2294615150, 2416230934, 2838049792, 2294923249, 2954217306, 83114230, 3041526036, 4254866453, 1765420560, 1538243752, 1181174755, 1664390, 11063688, 33048, 5676612
			},
			.prefetch0 = 25562,
			.prefetch1 = 43312,
			.ram = movel_final_ram_1,
			.ram_len = 18,
		},
		.transactions = movel_transactions_1,
		.transactions_len = 8,
		.lenght = 30,
	},
	{
		.name = "002 MOVE.l A0, D5 2a08",
		.initial = {
			.regs = {
				2428479084, 2726108613, 1214329552, 3434620954, 256949766, 2184583283, 2692970614, 3555878719, 3699450451, 3060892115, 715478488, 2693604380, 4267169700, 2090476011, 2051973286, 5751958, 9873070, 34329, 7229930
			},
			.prefetch0 = 10760,
			.prefetch1 = 43422,
			.ram = movel_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2428479084, 2726108613, 1214329552, 3434620954, 256949766, 3699450451, 2692970614, 3555878719, 3699450451, 3060892115, 715478488, 2693604380, 4267169700, 2090476011, 2051973286, 5751958, 9873070, 34328, 7229932
			},
			.prefetch0 = 43422,
			.prefetch1 = 49725,
			.ram = movel_final_ram_2,
			.ram_len = 6,
		},
		.transactions = movel_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 MOVE.l (d16, A5), (A4) 28ad",
		.initial = {
			.regs = {
				2979207627, 3872757113, 1071172844, 3157235777, 3394233463, 3916937940, 1574307399, 4186766251, 1663990677, 820593317, 3536882486, 3127382824, 405519961, 3695910142, 2933689121, 7550034, 8337888, 42498, 11763304
			},
			.prefetch0 = 10413,
			.prefetch1 = 2800,
			.ram = movel_initial_ram_3,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				2979207627, 3872757113, 1071172844, 3157235777, 3394233463, 3916937940, 1574307399, 4186766251, 1663990677, 820593317, 3536882486, 3127382824, 405519961, 3695910142, 2933689121, 7550034, 8337874, 9728, 2425387490
			},
			.prefetch0 = 60712,
			.prefetch1 = 5196,
			.ram = movel_final_ram_3,
			.ram_len = 32,
		},
		.transactions = movel_transactions_3,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "004 MOVE.l (d16, A4), D3 262c",
		.initial = {
			.regs = {
				2059526042, 3583097350, 3945259846, 3045823338, 2341247459, 588133992, 1029541034, 2820127837, 285825730, 2763776439, 539793295, 963493228, 3982312004, 3282597733, 2809304414, 437908, 3948310, 9238, 13202990
			},
			.prefetch0 = 9772,
			.prefetch1 = 33632,
			.ram = movel_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2059526042, 3583097350, 3945259846, 3148898081, 2341247459, 588133992, 1029541034, 2820127837, 285825730, 2763776439, 539793295, 963493228, 3982312004, 3282597733, 2809304414, 437908, 3948310, 9240, 13202994
			},
			.prefetch0 = 24202,
			.prefetch1 = 55730,
			.ram = movel_final_ram_4,
			.ram_len = 12,
		},
		.transactions = movel_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 MOVE.l -(A7), (A5) 2aa7",
		.initial = {
			.regs = {
				2235557515, 4151848827, 1030939191, 237141237, 1881813447, 4252049667, 3019253643, 2268385876, 3531040185, 3352713557, 727321983, 684612532, 2269976009, 3753615480, 4071655073, 1546758, 4912816, 8724, 1530472
			},
			.prefetch0 = 10919,
			.prefetch1 = 32360,
			.ram = movel_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2235557515, 4151848827, 1030939191, 237141237, 1881813447, 4252049667, 3019253643, 2268385876, 3531040185, 3352713557, 727321983, 684612532, 2269976009, 3753615480, 4071655073, 1546758, 4912812, 8720, 1530474
			},
			.prefetch0 = 32360,
			.prefetch1 = 45561,
			.ram = movel_final_ram_5,
			.ram_len = 14,
		},
		.transactions = movel_transactions_5,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "006 MOVE.l -(A7), -(A1) 2327",
		.initial = {
			.regs = {
				1396762969, 3880096827, 885725536, 4053703629, 3978813006, 3959810390, 183342811, 4284474016, 2787842986, 1047708866, 1654959653, 3786354229, 3074278020, 3154900910, 2016776861, 7147638, 1387034, 33030, 12489930
			},
			.prefetch0 = 8999,
			.prefetch1 = 30133,
			.ram = movel_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1396762969, 3880096827, 885725536, 4053703629, 3978813006, 3959810390, 183342811, 4284474016, 2787842986, 1047708862, 1654959653, 3786354229, 3074278020, 3154900910, 2016776861, 7147634, 1387034, 33032, 12489932
			},
			.prefetch0 = 30133,
			.prefetch1 = 14621,
			.ram = movel_final_ram_6,
			.ram_len = 14,
		},
		.transactions = movel_transactions_6,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "007 MOVE.l (xxx).w, -(A6) 2d38",
		.initial = {
			.regs = {
				4226347654, 2542256779, 1874483599, 833853474, 3850607227, 590722298, 922222409, 2713131955, 3862060216, 114444829, 1801080514, 2253219302, 3517134649, 3280111448, 2673965986, 3397236, 15070490, 9482, 11645784
			},
			.prefetch0 = 11576,
			.prefetch1 = 3614,
			.ram = movel_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4226347654, 2542256779, 1874483599, 833853474, 3850607227, 590722298, 922222409, 2713131955, 3862060216, 114444829, 1801080514, 2253219302, 3517134649, 3280111448, 2673965982, 3397236, 15070490, 9472, 11645788
			},
			.prefetch0 = 4765,
			.prefetch1 = 34082,
			.ram = movel_final_ram_7,
			.ram_len = 16,
		},
		.transactions = movel_transactions_7,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "008 MOVE.l A0, (d8, A5, Xn) 2b88",
		.initial = {
			.regs = {
				3458213719, 2884225321, 2769647709, 1670789145, 347318926, 3071394337, 1795664894, 339424102, 2850587496, 2445938413, 274471400, 1284948403, 986091114, 2626213728, 1964181733, 350014, 15711520, 516, 16363380
			},
			.prefetch0 = 11144,
			.prefetch1 = 57509,
			.ram = movel_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3458213719, 2884225321, 2769647709, 1670789145, 347318926, 3071394337, 1795664894, 339424102, 2850587496, 2445938413, 274471400, 1284948403, 986091114, 2626213728, 1964181733, 350014, 15711520, 520, 16363384
			},
			.prefetch0 = 2281,
			.prefetch1 = 11318,
			.ram = movel_final_ram_8,
			.ram_len = 12,
		},
		.transactions = movel_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 MOVE.l (d8, A5, Xn), (A6) 2cb5",
		.initial = {
			.regs = {
				3878087519, 787680702, 1757602322, 2589828496, 1235312420, 509874506, 545334109, 3181902379, 3802647231, 1786696269, 1841698552, 3146320556, 4122203358, 3024939802, 1832358340, 3003994, 12227666, 1301, 8957320
			},
			.prefetch0 = 11445,
			.prefetch1 = 14848,
			.ram = movel_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3878087519, 787680702, 1757602322, 2589828496, 1235312420, 509874506, 545334109, 3181902379, 3802647231, 1786696269, 1841698552, 3146320556, 4122203358, 3024939802, 1832358340, 3003994, 12227666, 1304, 8957324
			},
			.prefetch0 = 22359,
			.prefetch1 = 62050,
			.ram = movel_final_ram_9,
			.ram_len = 16,
		},
		.transactions = movel_transactions_9,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "010 MOVE.l A6, (d8, A2, Xn) 258e",
		.initial = {
			.regs = {
				3134062118, 2000118695, 1900861775, 1996173659, 2671020672, 3187100946, 3052033904, 2345837297, 3634972596, 491300917, 1348111863, 2750301258, 2668137571, 2858665897, 1558982673, 8225492, 14547948, 41227, 8789352
			},
			.prefetch0 = 9614,
			.prefetch1 = 8494,
			.ram = movel_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3134062118, 2000118695, 1900861775, 1996173659, 2671020672, 3187100946, 3052033904, 2345837297, 3634972596, 491300917, 1348111863, 2750301258, 2668137571, 2858665897, 1558982673, 8225492, 14547948, 41216, 8789356
			},
			.prefetch0 = 56807,
			.prefetch1 = 43486,
			.ram = movel_final_ram_10,
			.ram_len = 12,
		},
		.transactions = movel_transactions_10,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "011 MOVE.l (A7)+, D6 2c1f",
		.initial = {
			.regs = {
				707597939, 3642015955, 3406836043, 3533882824, 4273256611, 3552393729, 2105068493, 3143455177, 69556344, 975942434, 1291829986, 1912229147, 712122304, 893616628, 3092000901, 5530586, 1043392, 41219, 3183572
			},
			.prefetch0 = 11295,
			.prefetch1 = 20689,
			.ram = movel_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				707597939, 3642015955, 3406836043, 3533882824, 4273256611, 3552393729, 3008712365, 3143455177, 69556344, 975942434, 1291829986, 1912229147, 712122304, 893616628, 3092000901, 5530586, 1043396, 41224, 3183574
			},
			.prefetch0 = 20689,
			.prefetch1 = 61426,
			.ram = movel_final_ram_11,
			.ram_len = 10,
		},
		.transactions = movel_transactions_11,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "012 MOVE.l (d16, A4), -(A6) 2d2c",
		.initial = {
			.regs = {
				2248295468, 1049314618, 4019523486, 523390819, 2550111187, 3393407499, 1300378208, 2022092476, 925706932, 2553070201, 879920419, 206485316, 2603267054, 1255707111, 1626224403, 1604926, 1360730, 8731, 9330146
			},
			.prefetch0 = 11564,
			.prefetch1 = 25769,
			.ram = movel_initial_ram_12,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2248295468, 1049314618, 4019523486, 523390819, 2550111187, 3393407499, 1300378208, 2022092476, 925706932, 2553070201, 879920419, 206485316, 2603267054, 1255707111, 1626224403, 1604926, 1360716, 8731, 400464132
			},
			.prefetch0 = 47438,
			.prefetch1 = 19880,
			.ram = movel_final_ram_12,
			.ram_len = 28,
		},
		.transactions = movel_transactions_12,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "013 MOVE.l A0, (d16, A1) 2348",
		.initial = {
			.regs = {
				1373982069, 1882472880, 355387662, 2626017429, 2958816155, 173868837, 1611670434, 974449957, 3898616317, 3229444326, 1785233865, 2838938977, 2513579797, 1359230635, 918418344, 722664, 13066888, 256, 2957484
			},
			.prefetch0 = 9032,
			.prefetch1 = 21698,
			.ram = movel_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1373982069, 1882472880, 355387662, 2626017429, 2958816155, 173868837, 1611670434, 974449957, 3898616317, 3229444326, 1785233865, 2838938977, 2513579797, 1359230635, 918418344, 722664, 13066888, 264, 2957488
			},
			.prefetch0 = 10468,
			.prefetch1 = 14595,
			.ram = movel_final_ram_13,
			.ram_len = 12,
		},
		.transactions = movel_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 MOVE.l (d16, A1), -(A1) 2329",
		.initial = {
			.regs = {
				1298607662, 2906391142, 3774408261, 2107981831, 2383863628, 1955327314, 538119209, 361218539, 4018626645, 3115285053, 4198647410, 1632833695, 2624047119, 2081780081, 444691938, 12611664, 6909124, 1284, 4137930
			},
			.prefetch0 = 9001,
			.prefetch1 = 16548,
			.ram = movel_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1298607662, 2906391142, 3774408261, 2107981831, 2383863628, 1955327314, 538119209, 361218539, 4018626645, 3115285053, 4198647410, 1632833695, 2624047119, 2081780081, 444691938, 12611664, 6909110, 9476, 156827028
			},
			.prefetch0 = 25931,
			.prefetch1 = 50925,
			.ram = movel_final_ram_14,
			.ram_len = 28,
		},
		.transactions = movel_transactions_14,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "015 MOVE.l D3, (xxx).w 21c3",
		.initial = {
			.regs = {
				3900308358, 1289629448, 1380549623, 2352442973, 4051611706, 2313156386, 1365600026, 1829229757, 1625577484, 2569570185, 4074294095, 3863585714, 212656378, 3195343627, 2723930744, 10553460, 10461952, 5, 1310450
			},
			.prefetch0 = 8643,
			.prefetch1 = 4862,
			.ram = movel_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3900308358, 1289629448, 1380549623, 2352442973, 4051611706, 2313156386, 1365600026, 1829229757, 1625577484, 2569570185, 4074294095, 3863585714, 212656378, 3195343627, 2723930744, 10553460, 10461952, 8, 1310454
			},
			.prefetch0 = 62017,
			.prefetch1 = 44856,
			.ram = movel_final_ram_15,
			.ram_len = 12,
		},
		.transactions = movel_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
};

#endif /* RBT_MOVEL_H */