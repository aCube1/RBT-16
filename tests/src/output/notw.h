#ifndef RBT_NOTW_H
#define RBT_NOTW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte notw_initial_ram_0[] = {
		{ .addr = 0xde8f08, .byte = 0x46 },
		{ .addr = 0xde8f09, .byte = 0x6b },
		{ .addr = 0xde8f0a, .byte = 0x4a },
		{ .addr = 0xde8f0b, .byte = 0x65 },
		{ .addr = 0xde8f0c, .byte = 0x2b },
		{ .addr = 0xde8f0d, .byte = 0x1f },
		{ .addr = 0x562550, .byte = 0x04 },
		{ .addr = 0x562551, .byte = 0xd6 },
		{ .addr = 0xde8f0e, .byte = 0x1a },
		{ .addr = 0xde8f0f, .byte = 0xf6 }
};

static const SST_RamByte notw_final_ram_0[] = {
		{ .addr = 0xde8f08, .byte = 0x46 },
		{ .addr = 0xde8f09, .byte = 0x6b },
		{ .addr = 0xde8f0a, .byte = 0x4a },
		{ .addr = 0xde8f0b, .byte = 0x65 },
		{ .addr = 0xde8f0c, .byte = 0x2b },
		{ .addr = 0xde8f0d, .byte = 0x1f },
		{ .addr = 0x562550, .byte = 0xfb },
		{ .addr = 0x562551, .byte = 0x29 },
		{ .addr = 0xde8f0e, .byte = 0x1a },
		{ .addr = 0xde8f0f, .byte = 0xf6 }
};

static const SST_Transaction notw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14585612, .data = 11039, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5645648, .data = 1238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14585614, .data = 6902, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5645648, .data = 64297, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_1[] = {
		{ .addr = 0xcf80e2, .byte = 0x46 },
		{ .addr = 0xcf80e3, .byte = 0x51 },
		{ .addr = 0xcf80e4, .byte = 0x3e },
		{ .addr = 0xcf80e5, .byte = 0x29 },
		{ .addr = 0x56cc5c, .byte = 0xfe },
		{ .addr = 0x56cc5d, .byte = 0xa9 },
		{ .addr = 0xcf80e6, .byte = 0x05 },
		{ .addr = 0xcf80e7, .byte = 0x0c }
};

static const SST_RamByte notw_final_ram_1[] = {
		{ .addr = 0xcf80e2, .byte = 0x46 },
		{ .addr = 0xcf80e3, .byte = 0x51 },
		{ .addr = 0xcf80e4, .byte = 0x3e },
		{ .addr = 0xcf80e5, .byte = 0x29 },
		{ .addr = 0x56cc5c, .byte = 0x01 },
		{ .addr = 0x56cc5d, .byte = 0x56 },
		{ .addr = 0xcf80e6, .byte = 0x05 },
		{ .addr = 0xcf80e7, .byte = 0x0c }
};

static const SST_Transaction notw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5688412, .data = 65193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13598950, .data = 1292, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5688412, .data = 342, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_2[] = {
		{ .addr = 0xecdb0a, .byte = 0x46 },
		{ .addr = 0xecdb0b, .byte = 0x67 },
		{ .addr = 0xecdb0c, .byte = 0x08 },
		{ .addr = 0xecdb0d, .byte = 0x54 },
		{ .addr = 0x4169de, .byte = 0xcf },
		{ .addr = 0x4169df, .byte = 0xab },
		{ .addr = 0xecdb0e, .byte = 0x57 },
		{ .addr = 0xecdb0f, .byte = 0x2d }
};

static const SST_RamByte notw_final_ram_2[] = {
		{ .addr = 0xecdb0a, .byte = 0x46 },
		{ .addr = 0xecdb0b, .byte = 0x67 },
		{ .addr = 0xecdb0c, .byte = 0x08 },
		{ .addr = 0xecdb0d, .byte = 0x54 },
		{ .addr = 0x4169de, .byte = 0x30 },
		{ .addr = 0x4169df, .byte = 0x54 },
		{ .addr = 0xecdb0e, .byte = 0x57 },
		{ .addr = 0xecdb0f, .byte = 0x2d }
};

static const SST_Transaction notw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4286942, .data = 53163, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15522574, .data = 22317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4286942, .data = 12372, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_3[] = {
		{ .addr = 0xc5edc8, .byte = 0x46 },
		{ .addr = 0xc5edc9, .byte = 0x6d },
		{ .addr = 0xc5edca, .byte = 0xc9 },
		{ .addr = 0xc5edcb, .byte = 0xf4 },
		{ .addr = 0xc5edcc, .byte = 0x5d },
		{ .addr = 0xc5edcd, .byte = 0x2a },
		{ .addr = 0x3ecfe0, .byte = 0x9a },
		{ .addr = 0x3ecfe1, .byte = 0x1a },
		{ .addr = 0xc5edce, .byte = 0x7d },
		{ .addr = 0xc5edcf, .byte = 0x78 }
};

static const SST_RamByte notw_final_ram_3[] = {
		{ .addr = 0xc5edc8, .byte = 0x46 },
		{ .addr = 0xc5edc9, .byte = 0x6d },
		{ .addr = 0xc5edca, .byte = 0xc9 },
		{ .addr = 0xc5edcb, .byte = 0xf4 },
		{ .addr = 0xc5edcc, .byte = 0x5d },
		{ .addr = 0xc5edcd, .byte = 0x2a },
		{ .addr = 0x3ecfe0, .byte = 0x65 },
		{ .addr = 0x3ecfe1, .byte = 0xe5 },
		{ .addr = 0xc5edce, .byte = 0x7d },
		{ .addr = 0xc5edcf, .byte = 0x78 }
};

static const SST_Transaction notw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12971468, .data = 23850, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4116448, .data = 39450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12971470, .data = 32120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4116448, .data = 26085, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_4[] = {
		{ .addr = 0x3e9c34, .byte = 0x46 },
		{ .addr = 0x3e9c35, .byte = 0x50 },
		{ .addr = 0x3e9c36, .byte = 0xcd },
		{ .addr = 0x3e9c37, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0xfe },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0xca },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0xe2ca44, .byte = 0x37 },
		{ .addr = 0xe2ca45, .byte = 0x30 },
		{ .addr = 0xe2ca46, .byte = 0x95 },
		{ .addr = 0xe2ca47, .byte = 0xf9 }
};

static const SST_RamByte notw_final_ram_4[] = {
		{ .addr = 0x3e9c34, .byte = 0x46 },
		{ .addr = 0x3e9c35, .byte = 0x50 },
		{ .addr = 0x3e9c36, .byte = 0xcd },
		{ .addr = 0x3e9c37, .byte = 0x32 },
		{ .addr = 0x8f0f68, .byte = 0x9c },
		{ .addr = 0x8f0f69, .byte = 0x36 },
		{ .addr = 0x8f0f64, .byte = 0x86 },
		{ .addr = 0x8f0f65, .byte = 0x03 },
		{ .addr = 0x8f0f66, .byte = 0x00 },
		{ .addr = 0x8f0f67, .byte = 0x3e },
		{ .addr = 0x8f0f62, .byte = 0x46 },
		{ .addr = 0x8f0f63, .byte = 0x50 },
		{ .addr = 0x8f0f60, .byte = 0x39 },
		{ .addr = 0x8f0f61, .byte = 0xbd },
		{ .addr = 0x8f0f5c, .byte = 0x46 },
		{ .addr = 0x8f0f5d, .byte = 0x51 },
		{ .addr = 0x8f0f5e, .byte = 0x24 },
		{ .addr = 0x8f0f5f, .byte = 0xdf },
		{ .addr = 0x00000c, .byte = 0xfe },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0xca },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0xe2ca44, .byte = 0x37 },
		{ .addr = 0xe2ca45, .byte = 0x30 },
		{ .addr = 0xe2ca46, .byte = 0x95 },
		{ .addr = 0xe2ca47, .byte = 0xf9 }
};

static const SST_Transaction notw_transactions_4[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14629308, .data = 51818, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9375592, .data = 39990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9375588, .data = 34307, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9375590, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9375586, .data = 18000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9375584, .data = 14781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9375580, .data = 18001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9375582, .data = 9439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 65250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14862916, .data = 14128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14862918, .data = 38393, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_5[] = {
		{ .addr = 0x1b9a6a, .byte = 0x46 },
		{ .addr = 0x1b9a6b, .byte = 0x5d },
		{ .addr = 0x1b9a6c, .byte = 0x14 },
		{ .addr = 0x1b9a6d, .byte = 0xa1 },
		{ .addr = 0x68295a, .byte = 0xa2 },
		{ .addr = 0x68295b, .byte = 0x94 },
		{ .addr = 0x1b9a6e, .byte = 0x17 },
		{ .addr = 0x1b9a6f, .byte = 0xa3 }
};

static const SST_RamByte notw_final_ram_5[] = {
		{ .addr = 0x1b9a6a, .byte = 0x46 },
		{ .addr = 0x1b9a6b, .byte = 0x5d },
		{ .addr = 0x1b9a6c, .byte = 0x14 },
		{ .addr = 0x1b9a6d, .byte = 0xa1 },
		{ .addr = 0x68295a, .byte = 0x5d },
		{ .addr = 0x68295b, .byte = 0x6b },
		{ .addr = 0x1b9a6e, .byte = 0x17 },
		{ .addr = 0x1b9a6f, .byte = 0xa3 }
};

static const SST_Transaction notw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6826330, .data = 41620, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1809006, .data = 6051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6826330, .data = 23915, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_6[] = {
		{ .addr = 0xd35774, .byte = 0x46 },
		{ .addr = 0xd35775, .byte = 0x40 },
		{ .addr = 0xd35776, .byte = 0x58 },
		{ .addr = 0xd35777, .byte = 0x70 },
		{ .addr = 0xd35778, .byte = 0x9f },
		{ .addr = 0xd35779, .byte = 0xc4 }
};

static const SST_RamByte notw_final_ram_6[] = {
		{ .addr = 0xd35774, .byte = 0x46 },
		{ .addr = 0xd35775, .byte = 0x40 },
		{ .addr = 0xd35776, .byte = 0x58 },
		{ .addr = 0xd35777, .byte = 0x70 },
		{ .addr = 0xd35778, .byte = 0x9f },
		{ .addr = 0xd35779, .byte = 0xc4 }
};

static const SST_Transaction notw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13850488, .data = 40900, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_7[] = {
		{ .addr = 0x3eadda, .byte = 0x46 },
		{ .addr = 0x3eaddb, .byte = 0x43 },
		{ .addr = 0x3eaddc, .byte = 0x9c },
		{ .addr = 0x3eaddd, .byte = 0x8f },
		{ .addr = 0x3eadde, .byte = 0xaa },
		{ .addr = 0x3eaddf, .byte = 0x44 }
};

static const SST_RamByte notw_final_ram_7[] = {
		{ .addr = 0x3eadda, .byte = 0x46 },
		{ .addr = 0x3eaddb, .byte = 0x43 },
		{ .addr = 0x3eaddc, .byte = 0x9c },
		{ .addr = 0x3eaddd, .byte = 0x8f },
		{ .addr = 0x3eadde, .byte = 0xaa },
		{ .addr = 0x3eaddf, .byte = 0x44 }
};

static const SST_Transaction notw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4107742, .data = 43588, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_8[] = {
		{ .addr = 0xff38f0, .byte = 0x46 },
		{ .addr = 0xff38f1, .byte = 0x54 },
		{ .addr = 0xff38f2, .byte = 0xbe },
		{ .addr = 0xff38f3, .byte = 0x31 },
		{ .addr = 0x8cbfa0, .byte = 0xa9 },
		{ .addr = 0x8cbfa1, .byte = 0xe4 },
		{ .addr = 0xff38f4, .byte = 0x2b },
		{ .addr = 0xff38f5, .byte = 0x6a }
};

static const SST_RamByte notw_final_ram_8[] = {
		{ .addr = 0xff38f0, .byte = 0x46 },
		{ .addr = 0xff38f1, .byte = 0x54 },
		{ .addr = 0xff38f2, .byte = 0xbe },
		{ .addr = 0xff38f3, .byte = 0x31 },
		{ .addr = 0x8cbfa0, .byte = 0x56 },
		{ .addr = 0x8cbfa1, .byte = 0x1b },
		{ .addr = 0xff38f4, .byte = 0x2b },
		{ .addr = 0xff38f5, .byte = 0x6a }
};

static const SST_Transaction notw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9224096, .data = 43492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16726260, .data = 11114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9224096, .data = 22043, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_9[] = {
		{ .addr = 0x7cdb52, .byte = 0x46 },
		{ .addr = 0x7cdb53, .byte = 0x72 },
		{ .addr = 0x7cdb54, .byte = 0x33 },
		{ .addr = 0x7cdb55, .byte = 0x0b },
		{ .addr = 0x7cdb56, .byte = 0x9b },
		{ .addr = 0x7cdb57, .byte = 0x05 },
		{ .addr = 0x031016, .byte = 0x98 },
		{ .addr = 0x031017, .byte = 0xeb },
		{ .addr = 0x7cdb58, .byte = 0x61 },
		{ .addr = 0x7cdb59, .byte = 0x7a }
};

static const SST_RamByte notw_final_ram_9[] = {
		{ .addr = 0x7cdb52, .byte = 0x46 },
		{ .addr = 0x7cdb53, .byte = 0x72 },
		{ .addr = 0x7cdb54, .byte = 0x33 },
		{ .addr = 0x7cdb55, .byte = 0x0b },
		{ .addr = 0x7cdb56, .byte = 0x9b },
		{ .addr = 0x7cdb57, .byte = 0x05 },
		{ .addr = 0x031016, .byte = 0x67 },
		{ .addr = 0x031017, .byte = 0x14 },
		{ .addr = 0x7cdb58, .byte = 0x61 },
		{ .addr = 0x7cdb59, .byte = 0x7a }
};

static const SST_Transaction notw_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8182614, .data = 39685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 200726, .data = 39147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8182616, .data = 24954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 200726, .data = 26388, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_10[] = {
		{ .addr = 0x3879a4, .byte = 0x46 },
		{ .addr = 0x3879a5, .byte = 0x72 },
		{ .addr = 0x3879a6, .byte = 0x47 },
		{ .addr = 0x3879a7, .byte = 0x25 },
		{ .addr = 0x3879a8, .byte = 0xb0 },
		{ .addr = 0x3879a9, .byte = 0x3d },
		{ .addr = 0x0763c0, .byte = 0xc0 },
		{ .addr = 0x0763c1, .byte = 0x9d },
		{ .addr = 0x3879aa, .byte = 0x63 },
		{ .addr = 0x3879ab, .byte = 0x70 }
};

static const SST_RamByte notw_final_ram_10[] = {
		{ .addr = 0x3879a4, .byte = 0x46 },
		{ .addr = 0x3879a5, .byte = 0x72 },
		{ .addr = 0x3879a6, .byte = 0x47 },
		{ .addr = 0x3879a7, .byte = 0x25 },
		{ .addr = 0x3879a8, .byte = 0xb0 },
		{ .addr = 0x3879a9, .byte = 0x3d },
		{ .addr = 0x0763c0, .byte = 0x3f },
		{ .addr = 0x0763c1, .byte = 0x62 },
		{ .addr = 0x3879aa, .byte = 0x63 },
		{ .addr = 0x3879ab, .byte = 0x70 }
};

static const SST_Transaction notw_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3701160, .data = 45117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 484288, .data = 49309, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3701162, .data = 25456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 484288, .data = 16226, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_11[] = {
		{ .addr = 0xbeb96a, .byte = 0x46 },
		{ .addr = 0xbeb96b, .byte = 0x76 },
		{ .addr = 0xbeb96c, .byte = 0x9e },
		{ .addr = 0xbeb96d, .byte = 0x05 },
		{ .addr = 0xbeb96e, .byte = 0x7d },
		{ .addr = 0xbeb96f, .byte = 0xd1 },
		{ .addr = 0x4c3e46, .byte = 0x03 },
		{ .addr = 0x4c3e47, .byte = 0x38 },
		{ .addr = 0xbeb970, .byte = 0xec },
		{ .addr = 0xbeb971, .byte = 0x4d }
};

static const SST_RamByte notw_final_ram_11[] = {
		{ .addr = 0xbeb96a, .byte = 0x46 },
		{ .addr = 0xbeb96b, .byte = 0x76 },
		{ .addr = 0xbeb96c, .byte = 0x9e },
		{ .addr = 0xbeb96d, .byte = 0x05 },
		{ .addr = 0xbeb96e, .byte = 0x7d },
		{ .addr = 0xbeb96f, .byte = 0xd1 },
		{ .addr = 0x4c3e46, .byte = 0xfc },
		{ .addr = 0x4c3e47, .byte = 0xc7 },
		{ .addr = 0xbeb970, .byte = 0xec },
		{ .addr = 0xbeb971, .byte = 0x4d }
};

static const SST_Transaction notw_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12499310, .data = 32209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4996678, .data = 824, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12499312, .data = 60493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4996678, .data = 64711, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_12[] = {
		{ .addr = 0x4bd4ca, .byte = 0x46 },
		{ .addr = 0x4bd4cb, .byte = 0x58 },
		{ .addr = 0x4bd4cc, .byte = 0xbd },
		{ .addr = 0x4bd4cd, .byte = 0x1e },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0x1c },
		{ .addr = 0x00000e, .byte = 0xd4 },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x1cd4e8, .byte = 0xab },
		{ .addr = 0x1cd4e9, .byte = 0x91 },
		{ .addr = 0x1cd4ea, .byte = 0x68 },
		{ .addr = 0x1cd4eb, .byte = 0xeb }
};

static const SST_RamByte notw_final_ram_12[] = {
		{ .addr = 0x4bd4ca, .byte = 0x46 },
		{ .addr = 0x4bd4cb, .byte = 0x58 },
		{ .addr = 0x4bd4cc, .byte = 0xbd },
		{ .addr = 0x4bd4cd, .byte = 0x1e },
		{ .addr = 0x2ce5fc, .byte = 0xd4 },
		{ .addr = 0x2ce5fd, .byte = 0xcc },
		{ .addr = 0x2ce5f8, .byte = 0x82 },
		{ .addr = 0x2ce5f9, .byte = 0x1d },
		{ .addr = 0x2ce5fa, .byte = 0x00 },
		{ .addr = 0x2ce5fb, .byte = 0x4b },
		{ .addr = 0x2ce5f6, .byte = 0x46 },
		{ .addr = 0x2ce5f7, .byte = 0x58 },
		{ .addr = 0x2ce5f4, .byte = 0x0c },
		{ .addr = 0x2ce5f5, .byte = 0x21 },
		{ .addr = 0x2ce5f0, .byte = 0x46 },
		{ .addr = 0x2ce5f1, .byte = 0x51 },
		{ .addr = 0x2ce5f2, .byte = 0x64 },
		{ .addr = 0x2ce5f3, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0x1c },
		{ .addr = 0x00000e, .byte = 0xd4 },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x1cd4e8, .byte = 0xab },
		{ .addr = 0x1cd4e9, .byte = 0x91 },
		{ .addr = 0x1cd4ea, .byte = 0x68 },
		{ .addr = 0x1cd4eb, .byte = 0xeb }
};

static const SST_Transaction notw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2034720, .data = 38895, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2942460, .data = 54476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2942456, .data = 33309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2942458, .data = 75, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2942454, .data = 18008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2942452, .data = 3105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2942448, .data = 18001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2942450, .data = 25631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1889512, .data = 43921, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1889514, .data = 26859, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_13[] = {
		{ .addr = 0x14bcd2, .byte = 0x46 },
		{ .addr = 0x14bcd3, .byte = 0x40 },
		{ .addr = 0x14bcd4, .byte = 0x2e },
		{ .addr = 0x14bcd5, .byte = 0x3e },
		{ .addr = 0x14bcd6, .byte = 0xcd },
		{ .addr = 0x14bcd7, .byte = 0x2f }
};

static const SST_RamByte notw_final_ram_13[] = {
		{ .addr = 0x14bcd2, .byte = 0x46 },
		{ .addr = 0x14bcd3, .byte = 0x40 },
		{ .addr = 0x14bcd4, .byte = 0x2e },
		{ .addr = 0x14bcd5, .byte = 0x3e },
		{ .addr = 0x14bcd6, .byte = 0xcd },
		{ .addr = 0x14bcd7, .byte = 0x2f }
};

static const SST_Transaction notw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1359062, .data = 52527, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_14[] = {
		{ .addr = 0x35b20a, .byte = 0x46 },
		{ .addr = 0x35b20b, .byte = 0x6d },
		{ .addr = 0x35b20c, .byte = 0x9e },
		{ .addr = 0x35b20d, .byte = 0x91 },
		{ .addr = 0x35b20e, .byte = 0xeb },
		{ .addr = 0x35b20f, .byte = 0x24 },
		{ .addr = 0x4dbc68, .byte = 0xb9 },
		{ .addr = 0x4dbc69, .byte = 0x61 },
		{ .addr = 0x35b210, .byte = 0x96 },
		{ .addr = 0x35b211, .byte = 0x22 }
};

static const SST_RamByte notw_final_ram_14[] = {
		{ .addr = 0x35b20a, .byte = 0x46 },
		{ .addr = 0x35b20b, .byte = 0x6d },
		{ .addr = 0x35b20c, .byte = 0x9e },
		{ .addr = 0x35b20d, .byte = 0x91 },
		{ .addr = 0x35b20e, .byte = 0xeb },
		{ .addr = 0x35b20f, .byte = 0x24 },
		{ .addr = 0x4dbc68, .byte = 0x46 },
		{ .addr = 0x4dbc69, .byte = 0x9e },
		{ .addr = 0x35b210, .byte = 0x96 },
		{ .addr = 0x35b211, .byte = 0x22 }
};

static const SST_Transaction notw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3518990, .data = 60196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5094504, .data = 47457, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3518992, .data = 38434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5094504, .data = 18078, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_15[] = {
		{ .addr = 0x862036, .byte = 0x46 },
		{ .addr = 0x862037, .byte = 0x64 },
		{ .addr = 0x862038, .byte = 0xa1 },
		{ .addr = 0x862039, .byte = 0xc2 },
		{ .addr = 0x213df2, .byte = 0x6b },
		{ .addr = 0x213df3, .byte = 0x44 },
		{ .addr = 0x86203a, .byte = 0x30 },
		{ .addr = 0x86203b, .byte = 0x2b }
};

static const SST_RamByte notw_final_ram_15[] = {
		{ .addr = 0x862036, .byte = 0x46 },
		{ .addr = 0x862037, .byte = 0x64 },
		{ .addr = 0x862038, .byte = 0xa1 },
		{ .addr = 0x862039, .byte = 0xc2 },
		{ .addr = 0x213df2, .byte = 0x94 },
		{ .addr = 0x213df3, .byte = 0xbb },
		{ .addr = 0x86203a, .byte = 0x30 },
		{ .addr = 0x86203b, .byte = 0x2b }
};

static const SST_Transaction notw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2178546, .data = 27460, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8790074, .data = 12331, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2178546, .data = 38075, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NOTW_TEST_COUNT = 16;
static const SST_TestCase notw[] = {
	{
		.name = "000 NOT.w (d16, A3) 466b",
		.initial = {
			.regs = {
				1430740577, 4121101999, 2402458249, 897543055, 3006047466, 1575273451, 2489879229, 3730751052, 2592013990, 3065737031, 4273193, 2136333035, 2106646423, 3877979838, 3881938216, 1271544, 15526476, 9502, 14585612
			},
			.prefetch0 = 18027,
			.prefetch1 = 19045,
			.ram = notw_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1430740577, 4121101999, 2402458249, 897543055, 3006047466, 1575273451, 2489879229, 3730751052, 2592013990, 3065737031, 4273193, 2136333035, 2106646423, 3877979838, 3881938216, 1271544, 15526476, 9496, 14585616
			},
			.prefetch0 = 11039,
			.prefetch1 = 6902,
			.ram = notw_final_ram_0,
			.ram_len = 10,
		},
		.transactions = notw_transactions_0,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "001 NOT.w (A1) 4651",
		.initial = {
			.regs = {
				797594472, 3011681650, 1827022530, 828320215, 3634320722, 1884005597, 2062966051, 3668343280, 2697883939, 1398197340, 680239903, 138961841, 3679613111, 1829185520, 1433635305, 7182138, 5823442, 9245, 13598950
			},
			.prefetch0 = 18001,
			.prefetch1 = 15913,
			.ram = notw_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				797594472, 3011681650, 1827022530, 828320215, 3634320722, 1884005597, 2062966051, 3668343280, 2697883939, 1398197340, 680239903, 138961841, 3679613111, 1829185520, 1433635305, 7182138, 5823442, 9232, 13598952
			},
			.prefetch0 = 15913,
			.prefetch1 = 1292,
			.ram = notw_final_ram_1,
			.ram_len = 8,
		},
		.transactions = notw_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 NOT.w -(A7) 4667",
		.initial = {
			.regs = {
				2659146125, 1289620405, 2528340763, 2887913475, 2958589875, 2187597204, 4261920160, 3998122059, 1405853640, 3846251121, 1438751838, 4066003196, 1301662139, 534863969, 3076821224, 4286944, 10539856, 1536, 15522574
			},
			.prefetch0 = 18023,
			.prefetch1 = 2132,
			.ram = notw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2659146125, 1289620405, 2528340763, 2887913475, 2958589875, 2187597204, 4261920160, 3998122059, 1405853640, 3846251121, 1438751838, 4066003196, 1301662139, 534863969, 3076821224, 4286942, 10539856, 1536, 15522576
			},
			.prefetch0 = 2132,
			.prefetch1 = 22317,
			.ram = notw_final_ram_2,
			.ram_len = 8,
		},
		.transactions = notw_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 NOT.w (d16, A5) 466d",
		.initial = {
			.regs = {
				1113611763, 1115379654, 743633090, 586429980, 852015058, 3570748066, 1831047106, 2678966906, 1966005751, 1365969560, 1402347771, 1994663887, 1656846059, 2453603820, 2486443932, 3028630, 1384362, 8465, 12971468
			},
			.prefetch0 = 18029,
			.prefetch1 = 51700,
			.ram = notw_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1113611763, 1115379654, 743633090, 586429980, 852015058, 3570748066, 1831047106, 2678966906, 1966005751, 1365969560, 1402347771, 1994663887, 1656846059, 2453603820, 2486443932, 3028630, 1384362, 8464, 12971472
			},
			.prefetch0 = 23850,
			.prefetch1 = 32120,
			.ram = notw_final_ram_3,
			.ram_len = 10,
		},
		.transactions = notw_transactions_3,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "004 NOT.w (A0) 4650",
		.initial = {
			.regs = {
				153705319, 2514198558, 2765729632, 3028012134, 3868344322, 3597763985, 3520902221, 231552435, 618609085, 2049890787, 626589852, 3133230152, 3881317849, 4174166104, 1551146012, 80012, 9375594, 34307, 4103224
			},
			.prefetch0 = 18000,
			.prefetch1 = 52530,
			.ram = notw_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				153705319, 2514198558, 2765729632, 3028012134, 3868344322, 3597763985, 3520902221, 231552435, 618609085, 2049890787, 626589852, 3133230152, 3881317849, 4174166104, 1551146012, 80012, 9375580, 9731, 4276275784
			},
			.prefetch0 = 14128,
			.prefetch1 = 38393,
			.ram = notw_final_ram_4,
			.ram_len = 26,
		},
		.transactions = notw_transactions_4,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "005 NOT.w (A5)+ 465d",
		.initial = {
			.regs = {
				3571904116, 3619846367, 1332618640, 809079916, 483838300, 1272402141, 3194656983, 801761965, 2103899692, 3141054436, 328607430, 629936097, 2589565039, 845687130, 3714508319, 15588286, 14819380, 2, 1809006
			},
			.prefetch0 = 18013,
			.prefetch1 = 5281,
			.ram = notw_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3571904116, 3619846367, 1332618640, 809079916, 483838300, 1272402141, 3194656983, 801761965, 2103899692, 3141054436, 328607430, 629936097, 2589565039, 845687132, 3714508319, 15588286, 14819380, 0, 1809008
			},
			.prefetch0 = 5281,
			.prefetch1 = 6051,
			.ram = notw_final_ram_5,
			.ram_len = 8,
		},
		.transactions = notw_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 NOT.w D0 4640",
		.initial = {
			.regs = {
				2228402189, 2141351976, 4066277299, 3128846893, 1670390355, 238255215, 2997523542, 1983745469, 3442433529, 2932045680, 2341594852, 138832535, 1326201787, 3792855781, 1199866485, 6599472, 6023842, 41996, 13850488
			},
			.prefetch0 = 17984,
			.prefetch1 = 22640,
			.ram = notw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2228373490, 2141351976, 4066277299, 3128846893, 1670390355, 238255215, 2997523542, 1983745469, 3442433529, 2932045680, 2341594852, 138832535, 1326201787, 3792855781, 1199866485, 6599472, 6023842, 41984, 13850490
			},
			.prefetch0 = 22640,
			.prefetch1 = 40900,
			.ram = notw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = notw_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 NOT.w D3 4643",
		.initial = {
			.regs = {
				1772488171, 1936827094, 2442706449, 2087906096, 1408283316, 2499222877, 1908413101, 2032711919, 2167490435, 759705442, 3611661305, 3960394913, 3408408716, 249591988, 209985630, 7449998, 1520322, 33291, 4107742
			},
			.prefetch0 = 17987,
			.prefetch1 = 40079,
			.ram = notw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1772488171, 1936827094, 2442706449, 2087851215, 1408283316, 2499222877, 1908413101, 2032711919, 2167490435, 759705442, 3611661305, 3960394913, 3408408716, 249591988, 209985630, 7449998, 1520322, 33280, 4107744
			},
			.prefetch0 = 40079,
			.prefetch1 = 43588,
			.ram = notw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = notw_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 NOT.w (A4) 4654",
		.initial = {
			.regs = {
				3980435484, 2607620470, 485360677, 1509270961, 3804980540, 2949643647, 708397442, 1336440091, 801731470, 14340108, 4207070070, 2172835302, 2777464736, 2556005271, 3002671178, 6141392, 5492012, 8729, 16726260
			},
			.prefetch0 = 18004,
			.prefetch1 = 48689,
			.ram = notw_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3980435484, 2607620470, 485360677, 1509270961, 3804980540, 2949643647, 708397442, 1336440091, 801731470, 14340108, 4207070070, 2172835302, 2777464736, 2556005271, 3002671178, 6141392, 5492012, 8720, 16726262
			},
			.prefetch0 = 48689,
			.prefetch1 = 11114,
			.ram = notw_final_ram_8,
			.ram_len = 8,
		},
		.transactions = notw_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 NOT.w (d8, A2, Xn) 4672",
		.initial = {
			.regs = {
				402162985, 2660001144, 4001232422, 3899922909, 285367596, 2010184157, 2910850054, 951397029, 1281773996, 2951702979, 2231563822, 2505651889, 1413010843, 2733948684, 2700469056, 1284100, 5570452, 40965, 8182614
			},
			.prefetch0 = 18034,
			.prefetch1 = 13067,
			.ram = notw_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				402162985, 2660001144, 4001232422, 3899922909, 285367596, 2010184157, 2910850054, 951397029, 1281773996, 2951702979, 2231563822, 2505651889, 1413010843, 2733948684, 2700469056, 1284100, 5570452, 40960, 8182618
			},
			.prefetch0 = 39685,
			.prefetch1 = 24954,
			.ram = notw_final_ram_9,
			.ram_len = 10,
		},
		.transactions = notw_transactions_9,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "010 NOT.w (d8, A2, Xn) 4672",
		.initial = {
			.regs = {
				2286819822, 3661689270, 2762919064, 693630157, 409017422, 3258881611, 2240367843, 3204817783, 953649810, 792996764, 1292322637, 1507117971, 1019922644, 726966185, 3456115979, 6753106, 13822580, 33039, 3701160
			},
			.prefetch0 = 18034,
			.prefetch1 = 18213,
			.ram = notw_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2286819822, 3661689270, 2762919064, 693630157, 409017422, 3258881611, 2240367843, 3204817783, 953649810, 792996764, 1292322637, 1507117971, 1019922644, 726966185, 3456115979, 6753106, 13822580, 33024, 3701164
			},
			.prefetch0 = 45117,
			.prefetch1 = 25456,
			.ram = notw_final_ram_10,
			.ram_len = 10,
		},
		.transactions = notw_transactions_10,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "011 NOT.w (d8, A6, Xn) 4676",
		.initial = {
			.regs = {
				1250950419, 587830305, 1393619736, 261323667, 2737171034, 3047887318, 595620162, 343499175, 2507767276, 63582045, 1222015706, 2176595956, 3759920273, 10609924, 948047588, 2031318, 4797592, 33280, 12499310
			},
			.prefetch0 = 18038,
			.prefetch1 = 40453,
			.ram = notw_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1250950419, 587830305, 1393619736, 261323667, 2737171034, 3047887318, 595620162, 343499175, 2507767276, 63582045, 1222015706, 2176595956, 3759920273, 10609924, 948047588, 2031318, 4797592, 33288, 12499314
			},
			.prefetch0 = 32209,
			.prefetch1 = 60493,
			.ram = notw_final_ram_11,
			.ram_len = 10,
		},
		.transactions = notw_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 NOT.w (A0)+ 4658",
		.initial = {
			.regs = {
				1212718771, 1132888289, 3570583347, 935167600, 103739860, 1075675012, 2012462676, 1225175747, 1679756321, 1111800979, 1107271548, 996754369, 208711891, 1727825424, 3876063600, 6531880, 2942462, 33309, 4969678
			},
			.prefetch0 = 18008,
			.prefetch1 = 48414,
			.ram = notw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1212718771, 1132888289, 3570583347, 935167600, 103739860, 1075675012, 2012462676, 1225175747, 1679756323, 1111800979, 1107271548, 996754369, 208711891, 1727825424, 3876063600, 6531880, 2942448, 8733, 421319916
			},
			.prefetch0 = 43921,
			.prefetch1 = 26859,
			.ram = notw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = notw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 NOT.w D0 4640",
		.initial = {
			.regs = {
				524435759, 1349315873, 3451221978, 4163421828, 2529311736, 3675253433, 2328802938, 4281651783, 1756292721, 3707859835, 3684975412, 380333943, 3967117487, 957099647, 3397683597, 3086516, 6527490, 33819, 1359062
			},
			.prefetch0 = 17984,
			.prefetch1 = 11838,
			.ram = notw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				524467920, 1349315873, 3451221978, 4163421828, 2529311736, 3675253433, 2328802938, 4281651783, 1756292721, 3707859835, 3684975412, 380333943, 3967117487, 957099647, 3397683597, 3086516, 6527490, 33816, 1359064
			},
			.prefetch0 = 11838,
			.prefetch1 = 52527,
			.ram = notw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = notw_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 NOT.w (d16, A5) 466d",
		.initial = {
			.regs = {
				1292253593, 1569341113, 2705968122, 2168617517, 4148963632, 3457892343, 1686676359, 2780895608, 1014370467, 2446106644, 523119105, 2605459820, 3515966767, 55451095, 2327350351, 5567046, 13851286, 260, 3518990
			},
			.prefetch0 = 18029,
			.prefetch1 = 40593,
			.ram = notw_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1292253593, 1569341113, 2705968122, 2168617517, 4148963632, 3457892343, 1686676359, 2780895608, 1014370467, 2446106644, 523119105, 2605459820, 3515966767, 55451095, 2327350351, 5567046, 13851286, 256, 3518994
			},
			.prefetch0 = 60196,
			.prefetch1 = 38434,
			.ram = notw_final_ram_14,
			.ram_len = 10,
		},
		.transactions = notw_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 NOT.w -(A4) 4664",
		.initial = {
			.regs = {
				2885350479, 4185359953, 72331905, 2275838146, 465345173, 1890372039, 2206411700, 990510352, 2638066582, 2625064135, 1340692257, 1996645940, 958479860, 2707132470, 3149374683, 10618342, 14124920, 1560, 8790074
			},
			.prefetch0 = 18020,
			.prefetch1 = 41410,
			.ram = notw_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2885350479, 4185359953, 72331905, 2275838146, 465345173, 1890372039, 2206411700, 990510352, 2638066582, 2625064135, 1340692257, 1996645940, 958479858, 2707132470, 3149374683, 10618342, 14124920, 1560, 8790076
			},
			.prefetch0 = 41410,
			.prefetch1 = 12331,
			.ram = notw_final_ram_15,
			.ram_len = 8,
		},
		.transactions = notw_transactions_15,
		.transactions_len = 4,
		.lenght = 14,
	},
};

#endif /* RBT_NOTW_H */