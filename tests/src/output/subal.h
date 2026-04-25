#ifndef RBT_SUBAL_H
#define RBT_SUBAL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subal_initial_ram_0[] = {
		{ .addr = 0x0fad32, .byte = 0x9b },
		{ .addr = 0x0fad33, .byte = 0xcf },
		{ .addr = 0x0fad34, .byte = 0x50 },
		{ .addr = 0x0fad35, .byte = 0xef },
		{ .addr = 0x0fad36, .byte = 0x75 },
		{ .addr = 0x0fad37, .byte = 0x0e }
};

static const SST_RamByte subal_final_ram_0[] = {
		{ .addr = 0x0fad32, .byte = 0x9b },
		{ .addr = 0x0fad33, .byte = 0xcf },
		{ .addr = 0x0fad34, .byte = 0x50 },
		{ .addr = 0x0fad35, .byte = 0xef },
		{ .addr = 0x0fad36, .byte = 0x75 },
		{ .addr = 0x0fad37, .byte = 0x0e }
};

static const SST_Transaction subal_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1027382, .data = 29966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subal_initial_ram_1[] = {
		{ .addr = 0xbedda6, .byte = 0x93 },
		{ .addr = 0xbedda7, .byte = 0xed },
		{ .addr = 0xbedda8, .byte = 0x8e },
		{ .addr = 0xbedda9, .byte = 0x18 },
		{ .addr = 0xbeddaa, .byte = 0x3c },
		{ .addr = 0xbeddab, .byte = 0xe4 },
		{ .addr = 0x00000c, .byte = 0x6a },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x43 },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x3c4342, .byte = 0xc9 },
		{ .addr = 0x3c4343, .byte = 0x85 },
		{ .addr = 0x3c4344, .byte = 0x9b },
		{ .addr = 0x3c4345, .byte = 0x65 }
};

static const SST_RamByte subal_final_ram_1[] = {
		{ .addr = 0xbedda6, .byte = 0x93 },
		{ .addr = 0xbedda7, .byte = 0xed },
		{ .addr = 0xbedda8, .byte = 0x8e },
		{ .addr = 0xbedda9, .byte = 0x18 },
		{ .addr = 0xbeddaa, .byte = 0x3c },
		{ .addr = 0xbeddab, .byte = 0xe4 },
		{ .addr = 0xeccff0, .byte = 0xdd },
		{ .addr = 0xeccff1, .byte = 0xa8 },
		{ .addr = 0xeccfec, .byte = 0x03 },
		{ .addr = 0xeccfed, .byte = 0x04 },
		{ .addr = 0xeccfee, .byte = 0x00 },
		{ .addr = 0xeccfef, .byte = 0xbe },
		{ .addr = 0xeccfea, .byte = 0x93 },
		{ .addr = 0xeccfeb, .byte = 0xed },
		{ .addr = 0xeccfe8, .byte = 0x18 },
		{ .addr = 0xeccfe9, .byte = 0x33 },
		{ .addr = 0xeccfe4, .byte = 0x93 },
		{ .addr = 0xeccfe5, .byte = 0xf1 },
		{ .addr = 0xeccfe6, .byte = 0x5f },
		{ .addr = 0xeccfe7, .byte = 0x8e },
		{ .addr = 0x00000c, .byte = 0x6a },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x43 },
		{ .addr = 0x00000f, .byte = 0x42 },
		{ .addr = 0x3c4342, .byte = 0xc9 },
		{ .addr = 0x3c4343, .byte = 0x85 },
		{ .addr = 0x3c4344, .byte = 0x9b },
		{ .addr = 0x3c4345, .byte = 0x65 }
};

static const SST_Transaction subal_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12508586, .data = 15588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9312306, .data = 24705, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15519728, .data = 56744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15519724, .data = 772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15519726, .data = 190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15519722, .data = 37869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15519720, .data = 6195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15519716, .data = 37873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15519718, .data = 24462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 27196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3949378, .data = 51589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3949380, .data = 39781, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subal_initial_ram_2[] = {
		{ .addr = 0xb4407c, .byte = 0x97 },
		{ .addr = 0xb4407d, .byte = 0xe9 },
		{ .addr = 0xb4407e, .byte = 0xcb },
		{ .addr = 0xb4407f, .byte = 0x44 },
		{ .addr = 0xb44080, .byte = 0xe0 },
		{ .addr = 0xb44081, .byte = 0x5c },
		{ .addr = 0x1681ec, .byte = 0xab },
		{ .addr = 0x1681ed, .byte = 0x9f },
		{ .addr = 0x1681ee, .byte = 0x37 },
		{ .addr = 0x1681ef, .byte = 0x72 },
		{ .addr = 0xb44082, .byte = 0x92 },
		{ .addr = 0xb44083, .byte = 0x06 }
};

static const SST_RamByte subal_final_ram_2[] = {
		{ .addr = 0xb4407c, .byte = 0x97 },
		{ .addr = 0xb4407d, .byte = 0xe9 },
		{ .addr = 0xb4407e, .byte = 0xcb },
		{ .addr = 0xb4407f, .byte = 0x44 },
		{ .addr = 0xb44080, .byte = 0xe0 },
		{ .addr = 0xb44081, .byte = 0x5c },
		{ .addr = 0x1681ec, .byte = 0xab },
		{ .addr = 0x1681ed, .byte = 0x9f },
		{ .addr = 0x1681ee, .byte = 0x37 },
		{ .addr = 0x1681ef, .byte = 0x72 },
		{ .addr = 0xb44082, .byte = 0x92 },
		{ .addr = 0xb44083, .byte = 0x06 }
};

static const SST_Transaction subal_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11812992, .data = 57436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1475052, .data = 43935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1475054, .data = 14194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11812994, .data = 37382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subal_initial_ram_3[] = {
		{ .addr = 0x2f3562, .byte = 0x93 },
		{ .addr = 0x2f3563, .byte = 0xe1 },
		{ .addr = 0x2f3564, .byte = 0xc6 },
		{ .addr = 0x2f3565, .byte = 0x4e },
		{ .addr = 0x609054, .byte = 0x7f },
		{ .addr = 0x609055, .byte = 0xad },
		{ .addr = 0x609056, .byte = 0x86 },
		{ .addr = 0x609057, .byte = 0x50 },
		{ .addr = 0x2f3566, .byte = 0x36 },
		{ .addr = 0x2f3567, .byte = 0x75 }
};

static const SST_RamByte subal_final_ram_3[] = {
		{ .addr = 0x2f3562, .byte = 0x93 },
		{ .addr = 0x2f3563, .byte = 0xe1 },
		{ .addr = 0x2f3564, .byte = 0xc6 },
		{ .addr = 0x2f3565, .byte = 0x4e },
		{ .addr = 0x609054, .byte = 0x7f },
		{ .addr = 0x609055, .byte = 0xad },
		{ .addr = 0x609056, .byte = 0x86 },
		{ .addr = 0x609057, .byte = 0x50 },
		{ .addr = 0x2f3566, .byte = 0x36 },
		{ .addr = 0x2f3567, .byte = 0x75 }
};

static const SST_Transaction subal_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6328404, .data = 32685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6328406, .data = 34384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3093862, .data = 13941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subal_initial_ram_4[] = {
		{ .addr = 0x49baa6, .byte = 0x95 },
		{ .addr = 0x49baa7, .byte = 0xd3 },
		{ .addr = 0x49baa8, .byte = 0x57 },
		{ .addr = 0x49baa9, .byte = 0x87 },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0xc09162, .byte = 0xdc },
		{ .addr = 0xc09163, .byte = 0x08 },
		{ .addr = 0xc09164, .byte = 0xa3 },
		{ .addr = 0xc09165, .byte = 0xe2 }
};

static const SST_RamByte subal_final_ram_4[] = {
		{ .addr = 0x49baa6, .byte = 0x95 },
		{ .addr = 0x49baa7, .byte = 0xd3 },
		{ .addr = 0x49baa8, .byte = 0x57 },
		{ .addr = 0x49baa9, .byte = 0x87 },
		{ .addr = 0x997a36, .byte = 0xba },
		{ .addr = 0x997a37, .byte = 0xa8 },
		{ .addr = 0x997a32, .byte = 0x87 },
		{ .addr = 0x997a33, .byte = 0x19 },
		{ .addr = 0x997a34, .byte = 0x00 },
		{ .addr = 0x997a35, .byte = 0x49 },
		{ .addr = 0x997a30, .byte = 0x95 },
		{ .addr = 0x997a31, .byte = 0xd3 },
		{ .addr = 0x997a2e, .byte = 0xb9 },
		{ .addr = 0x997a2f, .byte = 0x89 },
		{ .addr = 0x997a2a, .byte = 0x95 },
		{ .addr = 0x997a2b, .byte = 0xd1 },
		{ .addr = 0x997a2c, .byte = 0x2d },
		{ .addr = 0x997a2d, .byte = 0xb1 },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0xc09162, .byte = 0xdc },
		{ .addr = 0xc09163, .byte = 0x08 },
		{ .addr = 0xc09164, .byte = 0xa3 },
		{ .addr = 0xc09165, .byte = 0xe2 }
};

static const SST_Transaction subal_transactions_4[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11647368, .data = 28838, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10058294, .data = 47784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10058290, .data = 34585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10058292, .data = 73, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10058288, .data = 38355, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10058286, .data = 47497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10058282, .data = 38353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10058284, .data = 11697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12620130, .data = 56328, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12620132, .data = 41954, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subal_initial_ram_5[] = {
		{ .addr = 0xc9975e, .byte = 0x91 },
		{ .addr = 0xc9975f, .byte = 0xd4 },
		{ .addr = 0xc99760, .byte = 0xb8 },
		{ .addr = 0xc99761, .byte = 0x8a },
		{ .addr = 0x45b6d6, .byte = 0xc0 },
		{ .addr = 0x45b6d7, .byte = 0xc9 },
		{ .addr = 0x45b6d8, .byte = 0x5f },
		{ .addr = 0x45b6d9, .byte = 0x7f },
		{ .addr = 0xc99762, .byte = 0xb0 },
		{ .addr = 0xc99763, .byte = 0xbe }
};

static const SST_RamByte subal_final_ram_5[] = {
		{ .addr = 0xc9975e, .byte = 0x91 },
		{ .addr = 0xc9975f, .byte = 0xd4 },
		{ .addr = 0xc99760, .byte = 0xb8 },
		{ .addr = 0xc99761, .byte = 0x8a },
		{ .addr = 0x45b6d6, .byte = 0xc0 },
		{ .addr = 0x45b6d7, .byte = 0xc9 },
		{ .addr = 0x45b6d8, .byte = 0x5f },
		{ .addr = 0x45b6d9, .byte = 0x7f },
		{ .addr = 0xc99762, .byte = 0xb0 },
		{ .addr = 0xc99763, .byte = 0xbe }
};

static const SST_Transaction subal_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4568790, .data = 49353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4568792, .data = 24447, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13211490, .data = 45246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subal_initial_ram_6[] = {
		{ .addr = 0x9a9924, .byte = 0x9b },
		{ .addr = 0x9a9925, .byte = 0xf2 },
		{ .addr = 0x9a9926, .byte = 0xf9 },
		{ .addr = 0x9a9927, .byte = 0x37 },
		{ .addr = 0x9a9928, .byte = 0xe3 },
		{ .addr = 0x9a9929, .byte = 0x21 },
		{ .addr = 0x00000c, .byte = 0xd7 },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0x4a },
		{ .addr = 0x56414a, .byte = 0x44 },
		{ .addr = 0x56414b, .byte = 0xe7 },
		{ .addr = 0x56414c, .byte = 0x9c },
		{ .addr = 0x56414d, .byte = 0x68 }
};

static const SST_RamByte subal_final_ram_6[] = {
		{ .addr = 0x9a9924, .byte = 0x9b },
		{ .addr = 0x9a9925, .byte = 0xf2 },
		{ .addr = 0x9a9926, .byte = 0xf9 },
		{ .addr = 0x9a9927, .byte = 0x37 },
		{ .addr = 0x9a9928, .byte = 0xe3 },
		{ .addr = 0x9a9929, .byte = 0x21 },
		{ .addr = 0xb32c48, .byte = 0x99 },
		{ .addr = 0xb32c49, .byte = 0x26 },
		{ .addr = 0xb32c44, .byte = 0xa2 },
		{ .addr = 0xb32c45, .byte = 0x15 },
		{ .addr = 0xb32c46, .byte = 0x00 },
		{ .addr = 0xb32c47, .byte = 0x9a },
		{ .addr = 0xb32c42, .byte = 0x9b },
		{ .addr = 0xb32c43, .byte = 0xf2 },
		{ .addr = 0xb32c40, .byte = 0x1a },
		{ .addr = 0xb32c41, .byte = 0xbf },
		{ .addr = 0xb32c3c, .byte = 0x9b },
		{ .addr = 0xb32c3d, .byte = 0xf5 },
		{ .addr = 0xb32c3e, .byte = 0x23 },
		{ .addr = 0xb32c3f, .byte = 0xc7 },
		{ .addr = 0x00000c, .byte = 0xd7 },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0x4a },
		{ .addr = 0x56414a, .byte = 0x44 },
		{ .addr = 0x56414b, .byte = 0xe7 },
		{ .addr = 0x56414c, .byte = 0x9c },
		{ .addr = 0x56414d, .byte = 0x68 }
};

static const SST_Transaction subal_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10131752, .data = 58145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13048510, .data = 16160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742280, .data = 39206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742276, .data = 41493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742278, .data = 154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742274, .data = 39922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742272, .data = 6847, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742268, .data = 39925, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742270, .data = 9159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 55126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5652810, .data = 17639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5652812, .data = 40040, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subal_initial_ram_7[] = {
		{ .addr = 0xbf26a0, .byte = 0x9f },
		{ .addr = 0xbf26a1, .byte = 0xc2 },
		{ .addr = 0xbf26a2, .byte = 0x7a },
		{ .addr = 0xbf26a3, .byte = 0x59 },
		{ .addr = 0xbf26a4, .byte = 0xc7 },
		{ .addr = 0xbf26a5, .byte = 0xd6 }
};

static const SST_RamByte subal_final_ram_7[] = {
		{ .addr = 0xbf26a0, .byte = 0x9f },
		{ .addr = 0xbf26a1, .byte = 0xc2 },
		{ .addr = 0xbf26a2, .byte = 0x7a },
		{ .addr = 0xbf26a3, .byte = 0x59 },
		{ .addr = 0xbf26a4, .byte = 0xc7 },
		{ .addr = 0xbf26a5, .byte = 0xd6 }
};

static const SST_Transaction subal_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12527268, .data = 51158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subal_initial_ram_8[] = {
		{ .addr = 0x7a8c8e, .byte = 0x97 },
		{ .addr = 0x7a8c8f, .byte = 0xe0 },
		{ .addr = 0x7a8c90, .byte = 0xd7 },
		{ .addr = 0x7a8c91, .byte = 0x04 },
		{ .addr = 0x24c232, .byte = 0xc0 },
		{ .addr = 0x24c233, .byte = 0x12 },
		{ .addr = 0x24c234, .byte = 0x11 },
		{ .addr = 0x24c235, .byte = 0xa0 },
		{ .addr = 0x7a8c92, .byte = 0xd6 },
		{ .addr = 0x7a8c93, .byte = 0x7a }
};

static const SST_RamByte subal_final_ram_8[] = {
		{ .addr = 0x7a8c8e, .byte = 0x97 },
		{ .addr = 0x7a8c8f, .byte = 0xe0 },
		{ .addr = 0x7a8c90, .byte = 0xd7 },
		{ .addr = 0x7a8c91, .byte = 0x04 },
		{ .addr = 0x24c232, .byte = 0xc0 },
		{ .addr = 0x24c233, .byte = 0x12 },
		{ .addr = 0x24c234, .byte = 0x11 },
		{ .addr = 0x24c235, .byte = 0xa0 },
		{ .addr = 0x7a8c92, .byte = 0xd6 },
		{ .addr = 0x7a8c93, .byte = 0x7a }
};

static const SST_Transaction subal_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2409010, .data = 49170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2409012, .data = 4512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8031378, .data = 54906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subal_initial_ram_9[] = {
		{ .addr = 0xf29082, .byte = 0x9d },
		{ .addr = 0xf29083, .byte = 0xc7 },
		{ .addr = 0xf29084, .byte = 0xc2 },
		{ .addr = 0xf29085, .byte = 0xe7 },
		{ .addr = 0xf29086, .byte = 0xd0 },
		{ .addr = 0xf29087, .byte = 0x14 }
};

static const SST_RamByte subal_final_ram_9[] = {
		{ .addr = 0xf29082, .byte = 0x9d },
		{ .addr = 0xf29083, .byte = 0xc7 },
		{ .addr = 0xf29084, .byte = 0xc2 },
		{ .addr = 0xf29085, .byte = 0xe7 },
		{ .addr = 0xf29086, .byte = 0xd0 },
		{ .addr = 0xf29087, .byte = 0x14 }
};

static const SST_Transaction subal_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15896710, .data = 53268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subal_initial_ram_10[] = {
		{ .addr = 0x9d1514, .byte = 0x97 },
		{ .addr = 0x9d1515, .byte = 0xfb },
		{ .addr = 0x9d1516, .byte = 0x25 },
		{ .addr = 0x9d1517, .byte = 0x6f },
		{ .addr = 0x9d1518, .byte = 0x56 },
		{ .addr = 0x9d1519, .byte = 0xb1 },
		{ .addr = 0x9d192c, .byte = 0x9e },
		{ .addr = 0x9d192d, .byte = 0xeb },
		{ .addr = 0x9d192e, .byte = 0x88 },
		{ .addr = 0x9d192f, .byte = 0xab },
		{ .addr = 0x9d151a, .byte = 0x18 },
		{ .addr = 0x9d151b, .byte = 0xe6 }
};

static const SST_RamByte subal_final_ram_10[] = {
		{ .addr = 0x9d1514, .byte = 0x97 },
		{ .addr = 0x9d1515, .byte = 0xfb },
		{ .addr = 0x9d1516, .byte = 0x25 },
		{ .addr = 0x9d1517, .byte = 0x6f },
		{ .addr = 0x9d1518, .byte = 0x56 },
		{ .addr = 0x9d1519, .byte = 0xb1 },
		{ .addr = 0x9d192c, .byte = 0x9e },
		{ .addr = 0x9d192d, .byte = 0xeb },
		{ .addr = 0x9d192e, .byte = 0x88 },
		{ .addr = 0x9d192f, .byte = 0xab },
		{ .addr = 0x9d151a, .byte = 0x18 },
		{ .addr = 0x9d151b, .byte = 0xe6 }
};

static const SST_Transaction subal_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10294552, .data = 22193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10295596, .data = 40683, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10295598, .data = 34987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10294554, .data = 6374, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subal_initial_ram_11[] = {
		{ .addr = 0x67d1fc, .byte = 0x9f },
		{ .addr = 0x67d1fd, .byte = 0xc0 },
		{ .addr = 0x67d1fe, .byte = 0x1c },
		{ .addr = 0x67d1ff, .byte = 0xc6 },
		{ .addr = 0x67d200, .byte = 0xce },
		{ .addr = 0x67d201, .byte = 0x4e }
};

static const SST_RamByte subal_final_ram_11[] = {
		{ .addr = 0x67d1fc, .byte = 0x9f },
		{ .addr = 0x67d1fd, .byte = 0xc0 },
		{ .addr = 0x67d1fe, .byte = 0x1c },
		{ .addr = 0x67d1ff, .byte = 0xc6 },
		{ .addr = 0x67d200, .byte = 0xce },
		{ .addr = 0x67d201, .byte = 0x4e }
};

static const SST_Transaction subal_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6803968, .data = 52814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subal_initial_ram_12[] = {
		{ .addr = 0x5283e8, .byte = 0x9f },
		{ .addr = 0x5283e9, .byte = 0xc5 },
		{ .addr = 0x5283ea, .byte = 0xba },
		{ .addr = 0x5283eb, .byte = 0x11 },
		{ .addr = 0x5283ec, .byte = 0x5e },
		{ .addr = 0x5283ed, .byte = 0xe0 }
};

static const SST_RamByte subal_final_ram_12[] = {
		{ .addr = 0x5283e8, .byte = 0x9f },
		{ .addr = 0x5283e9, .byte = 0xc5 },
		{ .addr = 0x5283ea, .byte = 0xba },
		{ .addr = 0x5283eb, .byte = 0x11 },
		{ .addr = 0x5283ec, .byte = 0x5e },
		{ .addr = 0x5283ed, .byte = 0xe0 }
};

static const SST_Transaction subal_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5407724, .data = 24288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subal_initial_ram_13[] = {
		{ .addr = 0xc15328, .byte = 0x97 },
		{ .addr = 0xc15329, .byte = 0xf1 },
		{ .addr = 0xc1532a, .byte = 0xcd },
		{ .addr = 0xc1532b, .byte = 0xe9 },
		{ .addr = 0xc1532c, .byte = 0x47 },
		{ .addr = 0xc1532d, .byte = 0x3c },
		{ .addr = 0x00000c, .byte = 0xee },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0xaa },
		{ .addr = 0x00000f, .byte = 0xb6 },
		{ .addr = 0x32aab6, .byte = 0x6f },
		{ .addr = 0x32aab7, .byte = 0x5b },
		{ .addr = 0x32aab8, .byte = 0xf8 },
		{ .addr = 0x32aab9, .byte = 0x90 }
};

static const SST_RamByte subal_final_ram_13[] = {
		{ .addr = 0xc15328, .byte = 0x97 },
		{ .addr = 0xc15329, .byte = 0xf1 },
		{ .addr = 0xc1532a, .byte = 0xcd },
		{ .addr = 0xc1532b, .byte = 0xe9 },
		{ .addr = 0xc1532c, .byte = 0x47 },
		{ .addr = 0xc1532d, .byte = 0x3c },
		{ .addr = 0xeed418, .byte = 0x53 },
		{ .addr = 0xeed419, .byte = 0x2a },
		{ .addr = 0xeed414, .byte = 0x27 },
		{ .addr = 0xeed415, .byte = 0x1c },
		{ .addr = 0xeed416, .byte = 0x00 },
		{ .addr = 0xeed417, .byte = 0xc1 },
		{ .addr = 0xeed412, .byte = 0x97 },
		{ .addr = 0xeed413, .byte = 0xf1 },
		{ .addr = 0xeed410, .byte = 0x76 },
		{ .addr = 0xeed411, .byte = 0x13 },
		{ .addr = 0xeed40c, .byte = 0x97 },
		{ .addr = 0xeed40d, .byte = 0xf5 },
		{ .addr = 0xeed40e, .byte = 0x42 },
		{ .addr = 0xeed40f, .byte = 0xae },
		{ .addr = 0x00000c, .byte = 0xee },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0xaa },
		{ .addr = 0x00000f, .byte = 0xb6 },
		{ .addr = 0x32aab6, .byte = 0x6f },
		{ .addr = 0x32aab7, .byte = 0x5b },
		{ .addr = 0x32aab8, .byte = 0xf8 },
		{ .addr = 0x32aab9, .byte = 0x90 }
};

static const SST_Transaction subal_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12669740, .data = 18236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11433490, .data = 31446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15651864, .data = 21290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15651860, .data = 10012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15651862, .data = 193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15651858, .data = 38897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15651856, .data = 30227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15651852, .data = 38901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15651854, .data = 17070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3320502, .data = 28507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3320504, .data = 63632, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subal_initial_ram_14[] = {
		{ .addr = 0x9d6d26, .byte = 0x91 },
		{ .addr = 0x9d6d27, .byte = 0xfb },
		{ .addr = 0x9d6d28, .byte = 0xd2 },
		{ .addr = 0x9d6d29, .byte = 0x5e },
		{ .addr = 0x9d6d2a, .byte = 0xe2 },
		{ .addr = 0x9d6d2b, .byte = 0xe9 },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x7695ac, .byte = 0xc5 },
		{ .addr = 0x7695ad, .byte = 0xc4 },
		{ .addr = 0x7695ae, .byte = 0xb9 },
		{ .addr = 0x7695af, .byte = 0x4b }
};

static const SST_RamByte subal_final_ram_14[] = {
		{ .addr = 0x9d6d26, .byte = 0x91 },
		{ .addr = 0x9d6d27, .byte = 0xfb },
		{ .addr = 0x9d6d28, .byte = 0xd2 },
		{ .addr = 0x9d6d29, .byte = 0x5e },
		{ .addr = 0x9d6d2a, .byte = 0xe2 },
		{ .addr = 0x9d6d2b, .byte = 0xe9 },
		{ .addr = 0x4be6aa, .byte = 0x6d },
		{ .addr = 0x4be6ab, .byte = 0x28 },
		{ .addr = 0x4be6a6, .byte = 0x22 },
		{ .addr = 0x4be6a7, .byte = 0x06 },
		{ .addr = 0x4be6a8, .byte = 0x00 },
		{ .addr = 0x4be6a9, .byte = 0x9d },
		{ .addr = 0x4be6a4, .byte = 0x91 },
		{ .addr = 0x4be6a5, .byte = 0xfb },
		{ .addr = 0x4be6a2, .byte = 0xe6 },
		{ .addr = 0x4be6a3, .byte = 0x69 },
		{ .addr = 0x4be69e, .byte = 0x91 },
		{ .addr = 0x4be69f, .byte = 0xf6 },
		{ .addr = 0x4be6a0, .byte = 0x00 },
		{ .addr = 0x4be6a1, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0x7695ac, .byte = 0xc5 },
		{ .addr = 0x7695ad, .byte = 0xc4 },
		{ .addr = 0x7695ae, .byte = 0xb9 },
		{ .addr = 0x7695af, .byte = 0x4b }
};

static const SST_Transaction subal_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10317098, .data = 58089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10348136, .data = 63576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4974250, .data = 27944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4974246, .data = 8710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4974248, .data = 157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4974244, .data = 37371, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4974242, .data = 58985, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4974238, .data = 37366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4974240, .data = 157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7771564, .data = 50628, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7771566, .data = 47435, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subal_initial_ram_15[] = {
		{ .addr = 0xcc8b8e, .byte = 0x9b },
		{ .addr = 0xcc8b8f, .byte = 0xec },
		{ .addr = 0xcc8b90, .byte = 0x33 },
		{ .addr = 0xcc8b91, .byte = 0x22 },
		{ .addr = 0xcc8b92, .byte = 0x5e },
		{ .addr = 0xcc8b93, .byte = 0xf4 },
		{ .addr = 0xadbe02, .byte = 0x94 },
		{ .addr = 0xadbe03, .byte = 0x78 },
		{ .addr = 0xadbe04, .byte = 0x5b },
		{ .addr = 0xadbe05, .byte = 0x2f },
		{ .addr = 0xcc8b94, .byte = 0x62 },
		{ .addr = 0xcc8b95, .byte = 0x5e }
};

static const SST_RamByte subal_final_ram_15[] = {
		{ .addr = 0xcc8b8e, .byte = 0x9b },
		{ .addr = 0xcc8b8f, .byte = 0xec },
		{ .addr = 0xcc8b90, .byte = 0x33 },
		{ .addr = 0xcc8b91, .byte = 0x22 },
		{ .addr = 0xcc8b92, .byte = 0x5e },
		{ .addr = 0xcc8b93, .byte = 0xf4 },
		{ .addr = 0xadbe02, .byte = 0x94 },
		{ .addr = 0xadbe03, .byte = 0x78 },
		{ .addr = 0xadbe04, .byte = 0x5b },
		{ .addr = 0xadbe05, .byte = 0x2f },
		{ .addr = 0xcc8b94, .byte = 0x62 },
		{ .addr = 0xcc8b95, .byte = 0x5e }
};

static const SST_Transaction subal_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13405074, .data = 24308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11386370, .data = 38008, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11386372, .data = 23343, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13405076, .data = 25182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

const uint32_t SUBAL_TEST_COUNT = 16;
static const SST_TestCase subal[] = {
	{
		.name = "000 SUBA.l A7, A5 9bcf",
		.initial = {
			.regs = {
				2927985550, 2572516369, 3659843338, 2212692435, 329454559, 380389395, 81115122, 3163900104, 3354378056, 3285426378, 3967998792, 1787116354, 3683824708, 3322511701, 257399086, 5566452, 5638490, 9730, 1027382
			},
			.prefetch0 = 39887,
			.prefetch1 = 20719,
			.ram = subal_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2927985550, 2572516369, 3659843338, 2212692435, 329454559, 380389395, 81115122, 3163900104, 3354378056, 3285426378, 3967998792, 1787116354, 3683824708, 3316873211, 257399086, 5566452, 5638490, 9730, 1027384
			},
			.prefetch0 = 20719,
			.prefetch1 = 29966,
			.ram = subal_final_ram_0,
			.ram_len = 6,
		},
		.transactions = subal_transactions_0,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "001 SUBA.l (d16, A5), A1 93ed",
		.initial = {
			.regs = {
				1245958432, 3636406015, 901814101, 2958708455, 3535948388, 587685981, 950176380, 851242400, 3271057334, 3092671166, 300745577, 2447224303, 4210631031, 1603176987, 4141946654, 13990932, 15519730, 772, 12508586
			},
			.prefetch0 = 37869,
			.prefetch1 = 36376,
			.ram = subal_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1245958432, 3636406015, 901814101, 2958708455, 3535948388, 587685981, 950176380, 851242400, 3271057334, 3092671166, 300745577, 2447224303, 4210631031, 1603176987, 4141946654, 13990932, 15519716, 8964, 1782334278
			},
			.prefetch0 = 51589,
			.prefetch1 = 39781,
			.ram = subal_final_ram_1,
			.ram_len = 28,
		},
		.transactions = subal_transactions_1,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "002 SUBA.l (d16, A1), A3 97e9",
		.initial = {
			.regs = {
				708782290, 647690572, 3649943027, 2434845691, 3164707823, 1262546350, 440600223, 3746165771, 3638999188, 3273045672, 612788967, 325184022, 2907110276, 3385813536, 3359253426, 3332360, 11183810, 8711, 11812992
			},
			.prefetch0 = 38889,
			.prefetch1 = 52036,
			.ram = subal_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				708782290, 647690572, 3649943027, 2434845691, 3164707823, 1262546350, 440600223, 3746165771, 3638999188, 3273045672, 612788967, 1740812964, 2907110276, 3385813536, 3359253426, 3332360, 11183810, 8711, 11812996
			},
			.prefetch0 = 57436,
			.prefetch1 = 37382,
			.ram = subal_final_ram_2,
			.ram_len = 12,
		},
		.transactions = subal_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 SUBA.l -(A1), A1 93e1",
		.initial = {
			.regs = {
				484701080, 965093253, 2545570132, 1253785988, 3604051679, 2466522137, 3883801869, 1970054874, 1254803090, 1298174040, 257757048, 3807406244, 4145490872, 2960003702, 191418084, 10854798, 14834106, 8960, 3093862
			},
			.prefetch0 = 37857,
			.prefetch1 = 50766,
			.ram = subal_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				484701080, 965093253, 2545570132, 1253785988, 3604051679, 2466522137, 3883801869, 1970054874, 1254803090, 3451062788, 257757048, 3807406244, 4145490872, 2960003702, 191418084, 10854798, 14834106, 8960, 3093864
			},
			.prefetch0 = 50766,
			.prefetch1 = 13941,
			.ram = subal_final_ram_3,
			.ram_len = 10,
		},
		.transactions = subal_transactions_3,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "004 SUBA.l (A3), A2 95d3",
		.initial = {
			.regs = {
				1467808527, 1980187636, 417567402, 3317685260, 4119688855, 4180136554, 203031147, 1595269845, 462908041, 1139917638, 1549967819, 766622089, 2883452641, 1223179263, 26012293, 4936454, 10058296, 34585, 4831914
			},
			.prefetch0 = 38355,
			.prefetch1 = 22407,
			.ram = subal_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1467808527, 1980187636, 417567402, 3317685260, 4119688855, 4180136554, 203031147, 1595269845, 462908041, 1139917638, 1549967819, 766622089, 2883452641, 1223179263, 26012293, 4936454, 10058282, 10009, 4206924134
			},
			.prefetch0 = 56328,
			.prefetch1 = 41954,
			.ram = subal_final_ram_4,
			.ram_len = 26,
		},
		.transactions = subal_transactions_4,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "005 SUBA.l (A4), A0 91d4",
		.initial = {
			.regs = {
				3223675755, 1867173316, 445770940, 484874499, 3281210390, 4266767539, 1864237686, 2517134829, 1552955733, 1582511849, 870847605, 1771356848, 2034611926, 1104423491, 4041340829, 2571432, 1768390, 8215, 13211490
			},
			.prefetch0 = 37332,
			.prefetch1 = 47242,
			.ram = subal_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3223675755, 1867173316, 445770940, 484874499, 3281210390, 4266767539, 1864237686, 2517134829, 2613500374, 1582511849, 870847605, 1771356848, 2034611926, 1104423491, 4041340829, 2571432, 1768390, 8215, 13211492
			},
			.prefetch0 = 47242,
			.prefetch1 = 45246,
			.ram = subal_final_ram_5,
			.ram_len = 10,
		},
		.transactions = subal_transactions_5,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "006 SUBA.l (d8, A2, Xn), A5 9bf2",
		.initial = {
			.regs = {
				4062070935, 1610995152, 361229033, 3547143122, 2376367457, 1444017985, 1077365419, 2885929667, 554470455, 1569567106, 588508734, 1301426702, 2856832161, 44636103, 1434567221, 505120, 11742282, 41493, 10131752
			},
			.prefetch0 = 39922,
			.prefetch1 = 63799,
			.ram = subal_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4062070935, 1610995152, 361229033, 3547143122, 2376367457, 1444017985, 1077365419, 2885929667, 554470455, 1569567106, 588508734, 1301426702, 2856832161, 44636103, 1434567221, 505120, 11742268, 8725, 3612754254
			},
			.prefetch0 = 17639,
			.prefetch1 = 40040,
			.ram = subal_final_ram_6,
			.ram_len = 28,
		},
		.transactions = subal_transactions_6,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "007 SUBA.l D2, A7 9fc2",
		.initial = {
			.regs = {
				2514709229, 2911337769, 3723207238, 3447705200, 4134677486, 1021976484, 4042312364, 2085520326, 3065155289, 2484855347, 4257319267, 1182210782, 4258273791, 349073811, 576879356, 3996460, 16105344, 33280, 12527268
			},
			.prefetch0 = 40898,
			.prefetch1 = 31321,
			.ram = subal_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2514709229, 2911337769, 3723207238, 3447705200, 4134677486, 1021976484, 4042312364, 2085520326, 3065155289, 2484855347, 4257319267, 1182210782, 4258273791, 349073811, 576879356, 575756518, 16105344, 33280, 12527270
			},
			.prefetch0 = 31321,
			.prefetch1 = 51158,
			.ram = subal_final_ram_7,
			.ram_len = 6,
		},
		.transactions = subal_transactions_7,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "008 SUBA.l -(A0), A3 97e0",
		.initial = {
			.regs = {
				1489595416, 3189196919, 1506933777, 2513457196, 1678802782, 325127090, 267792763, 914614262, 1915011638, 3194321105, 2165644915, 140955809, 1284326183, 3091509844, 2628632926, 1902594, 16719926, 42270, 8031378
			},
			.prefetch0 = 38880,
			.prefetch1 = 55044,
			.ram = subal_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1489595416, 3189196919, 1506933777, 2513457196, 1678802782, 325127090, 267792763, 914614262, 1915011634, 3194321105, 2165644915, 1213513473, 1284326183, 3091509844, 2628632926, 1902594, 16719926, 42270, 8031380
			},
			.prefetch0 = 55044,
			.prefetch1 = 54906,
			.ram = subal_final_ram_8,
			.ram_len = 10,
		},
		.transactions = subal_transactions_8,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "009 SUBA.l D7, A6 9dc7",
		.initial = {
			.regs = {
				2030413066, 1603150103, 3932286139, 1597000126, 408255105, 3960334445, 3561864096, 2797735620, 1874226211, 2253202611, 3324054856, 522424165, 887126808, 1493612309, 2884927125, 4372094, 4381574, 41489, 15896710
			},
			.prefetch0 = 40391,
			.prefetch1 = 49895,
			.ram = subal_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2030413066, 1603150103, 3932286139, 1597000126, 408255105, 3960334445, 3561864096, 2797735620, 1874226211, 2253202611, 3324054856, 522424165, 887126808, 1493612309, 87191505, 4372094, 4381574, 41489, 15896712
			},
			.prefetch0 = 49895,
			.prefetch1 = 53268,
			.ram = subal_final_ram_9,
			.ram_len = 6,
		},
		.transactions = subal_transactions_9,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "010 SUBA.l (d8, PC, Xn), A3 97fb",
		.initial = {
			.regs = {
				1780425180, 2841411180, 4077585319, 3324641901, 2950315674, 1370640481, 3992418350, 4156608473, 376981651, 1318356515, 2244532387, 1197217385, 592866050, 2275965475, 2406367243, 1966228, 6047452, 533, 10294552
			},
			.prefetch0 = 38907,
			.prefetch1 = 9583,
			.ram = subal_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1780425180, 2841411180, 4077585319, 3324641901, 2950315674, 1370640481, 3992418350, 4156608473, 376981651, 1318356515, 2244532387, 2825948606, 592866050, 2275965475, 2406367243, 1966228, 6047452, 533, 10294556
			},
			.prefetch0 = 22193,
			.prefetch1 = 6374,
			.ram = subal_final_ram_10,
			.ram_len = 12,
		},
		.transactions = subal_transactions_10,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "011 SUBA.l D0, A7 9fc0",
		.initial = {
			.regs = {
				3627883046, 3364385633, 4108026754, 56173605, 3076334462, 2907249578, 40223034, 4092350089, 2590523067, 2240714337, 3138716072, 2064275109, 3219017133, 365571121, 981327074, 2678736, 1793352, 33551, 6803968
			},
			.prefetch0 = 40896,
			.prefetch1 = 7366,
			.ram = subal_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3627883046, 3364385633, 4108026754, 56173605, 3076334462, 2907249578, 40223034, 4092350089, 2590523067, 2240714337, 3138716072, 2064275109, 3219017133, 365571121, 981327074, 669762986, 1793352, 33551, 6803970
			},
			.prefetch0 = 7366,
			.prefetch1 = 52814,
			.ram = subal_final_ram_11,
			.ram_len = 6,
		},
		.transactions = subal_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 SUBA.l D5, A7 9fc5",
		.initial = {
			.regs = {
				1601175686, 3537245992, 2827727680, 2952060416, 512026766, 773502923, 525306056, 3558349315, 3486704013, 644247156, 1247294957, 1680990606, 3434074466, 1026786715, 105102726, 746174, 12165750, 8977, 5407724
			},
			.prefetch0 = 40901,
			.prefetch1 = 47633,
			.ram = subal_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1601175686, 3537245992, 2827727680, 2952060416, 512026766, 773502923, 525306056, 3558349315, 3486704013, 644247156, 1247294957, 1680990606, 3434074466, 1026786715, 105102726, 746174, 3533630123, 8977, 5407726
			},
			.prefetch0 = 47633,
			.prefetch1 = 24288,
			.ram = subal_final_ram_12,
			.ram_len = 6,
		},
		.transactions = subal_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 SUBA.l (d8, A1, Xn), A3 97f1",
		.initial = {
			.regs = {
				3133610710, 2256846008, 2751822190, 1146338226, 4153470603, 4020801225, 309723726, 2215489317, 3522181381, 3180567405, 4278001632, 200687877, 2233129661, 1037948147, 684182961, 1654100, 15651866, 10012, 12669740
			},
			.prefetch0 = 38897,
			.prefetch1 = 52713,
			.ram = subal_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3133610710, 2256846008, 2751822190, 1146338226, 4153470603, 4020801225, 309723726, 2215489317, 3522181381, 3180567405, 4278001632, 200687877, 2233129661, 1037948147, 684182961, 1654100, 15651852, 10012, 3996297914
			},
			.prefetch0 = 28507,
			.prefetch1 = 63632,
			.ram = subal_final_ram_13,
			.ram_len = 28,
		},
		.transactions = subal_transactions_13,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "014 SUBA.l (d8, PC, Xn), A0 91fb",
		.initial = {
			.regs = {
				4209536375, 833328253, 2904750016, 1599617623, 4036650771, 2830858553, 4488288, 1137440562, 2444496816, 2581527862, 4226674122, 3072348424, 4243665507, 2243197155, 627873610, 10505094, 4974252, 8710, 10317098
			},
			.prefetch0 = 37371,
			.prefetch1 = 53854,
			.ram = subal_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4209536375, 833328253, 2904750016, 1599617623, 4036650771, 2830858553, 4488288, 1137440562, 2444496816, 2581527862, 4226674122, 3072348424, 4243665507, 2243197155, 627873610, 10505094, 4974238, 8710, 2977338800
			},
			.prefetch0 = 50628,
			.prefetch1 = 47435,
			.ram = subal_final_ram_14,
			.ram_len = 28,
		},
		.transactions = subal_transactions_14,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "015 SUBA.l (d16, A4), A5 9bec",
		.initial = {
			.regs = {
				2033819634, 2960487104, 2081699849, 1516231639, 1547427457, 254936595, 660166416, 1563356910, 817694843, 2398199699, 1260053139, 863374279, 1051560672, 83817123, 1667188459, 5647848, 9244650, 33282, 13405074
			},
			.prefetch0 = 39916,
			.prefetch1 = 13090,
			.ram = subal_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2033819634, 2960487104, 2081699849, 1516231639, 1547427457, 254936595, 660166416, 1563356910, 817694843, 2398199699, 1260053139, 863374279, 1051560672, 1887868788, 1667188459, 5647848, 9244650, 33282, 13405078
			},
			.prefetch0 = 24308,
			.prefetch1 = 25182,
			.ram = subal_final_ram_15,
			.ram_len = 12,
		},
		.transactions = subal_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_SUBAL_H */