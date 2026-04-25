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

static const SST_RamByte notw_initial_ram_16[] = {
		{ .addr = 0x813834, .byte = 0x46 },
		{ .addr = 0x813835, .byte = 0x46 },
		{ .addr = 0x813836, .byte = 0x7c },
		{ .addr = 0x813837, .byte = 0x1c },
		{ .addr = 0x813838, .byte = 0x55 },
		{ .addr = 0x813839, .byte = 0xd6 }
};

static const SST_RamByte notw_final_ram_16[] = {
		{ .addr = 0x813834, .byte = 0x46 },
		{ .addr = 0x813835, .byte = 0x46 },
		{ .addr = 0x813836, .byte = 0x7c },
		{ .addr = 0x813837, .byte = 0x1c },
		{ .addr = 0x813838, .byte = 0x55 },
		{ .addr = 0x813839, .byte = 0xd6 }
};

static const SST_Transaction notw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8468536, .data = 21974, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_17[] = {
		{ .addr = 0x3a1bc0, .byte = 0x46 },
		{ .addr = 0x3a1bc1, .byte = 0x63 },
		{ .addr = 0x3a1bc2, .byte = 0xc6 },
		{ .addr = 0x3a1bc3, .byte = 0x7f },
		{ .addr = 0xfc9f74, .byte = 0xd7 },
		{ .addr = 0xfc9f75, .byte = 0x0c },
		{ .addr = 0x3a1bc4, .byte = 0x05 },
		{ .addr = 0x3a1bc5, .byte = 0xd2 }
};

static const SST_RamByte notw_final_ram_17[] = {
		{ .addr = 0x3a1bc0, .byte = 0x46 },
		{ .addr = 0x3a1bc1, .byte = 0x63 },
		{ .addr = 0x3a1bc2, .byte = 0xc6 },
		{ .addr = 0x3a1bc3, .byte = 0x7f },
		{ .addr = 0xfc9f74, .byte = 0x28 },
		{ .addr = 0xfc9f75, .byte = 0xf3 },
		{ .addr = 0x3a1bc4, .byte = 0x05 },
		{ .addr = 0x3a1bc5, .byte = 0xd2 }
};

static const SST_Transaction notw_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16555892, .data = 55052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3808196, .data = 1490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16555892, .data = 10483, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_18[] = {
		{ .addr = 0x504e6e, .byte = 0x46 },
		{ .addr = 0x504e6f, .byte = 0x62 },
		{ .addr = 0x504e70, .byte = 0x2a },
		{ .addr = 0x504e71, .byte = 0x04 },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0x8e10e0, .byte = 0x46 },
		{ .addr = 0x8e10e1, .byte = 0xff },
		{ .addr = 0x8e10e2, .byte = 0xd6 },
		{ .addr = 0x8e10e3, .byte = 0x64 }
};

static const SST_RamByte notw_final_ram_18[] = {
		{ .addr = 0x504e6e, .byte = 0x46 },
		{ .addr = 0x504e6f, .byte = 0x62 },
		{ .addr = 0x504e70, .byte = 0x2a },
		{ .addr = 0x504e71, .byte = 0x04 },
		{ .addr = 0x722d12, .byte = 0x4e },
		{ .addr = 0x722d13, .byte = 0x72 },
		{ .addr = 0x722d0e, .byte = 0xa0 },
		{ .addr = 0x722d0f, .byte = 0x04 },
		{ .addr = 0x722d10, .byte = 0x00 },
		{ .addr = 0x722d11, .byte = 0x50 },
		{ .addr = 0x722d0c, .byte = 0x46 },
		{ .addr = 0x722d0d, .byte = 0x62 },
		{ .addr = 0x722d0a, .byte = 0xfa },
		{ .addr = 0x722d0b, .byte = 0x77 },
		{ .addr = 0x722d06, .byte = 0x46 },
		{ .addr = 0x722d07, .byte = 0x75 },
		{ .addr = 0x722d08, .byte = 0x92 },
		{ .addr = 0x722d09, .byte = 0x34 },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0x8e10e0, .byte = 0x46 },
		{ .addr = 0x8e10e1, .byte = 0xff },
		{ .addr = 0x8e10e2, .byte = 0xd6 },
		{ .addr = 0x8e10e3, .byte = 0x64 }
};

static const SST_Transaction notw_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3471990, .data = 54779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7482642, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7482638, .data = 40964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7482640, .data = 80, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7482636, .data = 18018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7482634, .data = 64119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7482630, .data = 18037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7482632, .data = 37428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19598, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9310432, .data = 18175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9310434, .data = 54884, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_19[] = {
		{ .addr = 0x0bdf3c, .byte = 0x46 },
		{ .addr = 0x0bdf3d, .byte = 0x66 },
		{ .addr = 0x0bdf3e, .byte = 0x00 },
		{ .addr = 0x0bdf3f, .byte = 0xa2 },
		{ .addr = 0x00000c, .byte = 0x45 },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0xb7 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xc0b7ac, .byte = 0x55 },
		{ .addr = 0xc0b7ad, .byte = 0x95 },
		{ .addr = 0xc0b7ae, .byte = 0x89 },
		{ .addr = 0xc0b7af, .byte = 0x3e }
};

static const SST_RamByte notw_final_ram_19[] = {
		{ .addr = 0x0bdf3c, .byte = 0x46 },
		{ .addr = 0x0bdf3d, .byte = 0x66 },
		{ .addr = 0x0bdf3e, .byte = 0x00 },
		{ .addr = 0x0bdf3f, .byte = 0xa2 },
		{ .addr = 0x8dc104, .byte = 0xdf },
		{ .addr = 0x8dc105, .byte = 0x40 },
		{ .addr = 0x8dc100, .byte = 0xa7 },
		{ .addr = 0x8dc101, .byte = 0x0a },
		{ .addr = 0x8dc102, .byte = 0x00 },
		{ .addr = 0x8dc103, .byte = 0x0b },
		{ .addr = 0x8dc0fe, .byte = 0x46 },
		{ .addr = 0x8dc0ff, .byte = 0x66 },
		{ .addr = 0x8dc0fc, .byte = 0xfd },
		{ .addr = 0x8dc0fd, .byte = 0xdd },
		{ .addr = 0x8dc0f8, .byte = 0x46 },
		{ .addr = 0x8dc0f9, .byte = 0x75 },
		{ .addr = 0x8dc0fa, .byte = 0x1d },
		{ .addr = 0x8dc0fb, .byte = 0xde },
		{ .addr = 0x00000c, .byte = 0x45 },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0xb7 },
		{ .addr = 0x00000f, .byte = 0xac },
		{ .addr = 0xc0b7ac, .byte = 0x55 },
		{ .addr = 0xc0b7ad, .byte = 0x95 },
		{ .addr = 0xc0b7ae, .byte = 0x89 },
		{ .addr = 0xc0b7af, .byte = 0x3e }
};

static const SST_Transaction notw_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14613980, .data = 13207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9289988, .data = 57152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9289984, .data = 42762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9289986, .data = 11, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9289982, .data = 18022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9289980, .data = 64989, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9289976, .data = 18037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9289978, .data = 7646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 17856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 47020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12629932, .data = 21909, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12629934, .data = 35134, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_20[] = {
		{ .addr = 0x6e17ec, .byte = 0x46 },
		{ .addr = 0x6e17ed, .byte = 0x50 },
		{ .addr = 0x6e17ee, .byte = 0xe4 },
		{ .addr = 0x6e17ef, .byte = 0x43 },
		{ .addr = 0x6faaae, .byte = 0x1a },
		{ .addr = 0x6faaaf, .byte = 0xc5 },
		{ .addr = 0x6e17f0, .byte = 0xb8 },
		{ .addr = 0x6e17f1, .byte = 0xb0 }
};

static const SST_RamByte notw_final_ram_20[] = {
		{ .addr = 0x6e17ec, .byte = 0x46 },
		{ .addr = 0x6e17ed, .byte = 0x50 },
		{ .addr = 0x6e17ee, .byte = 0xe4 },
		{ .addr = 0x6e17ef, .byte = 0x43 },
		{ .addr = 0x6faaae, .byte = 0xe5 },
		{ .addr = 0x6faaaf, .byte = 0x3a },
		{ .addr = 0x6e17f0, .byte = 0xb8 },
		{ .addr = 0x6e17f1, .byte = 0xb0 }
};

static const SST_Transaction notw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7318190, .data = 6853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7215088, .data = 47280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7318190, .data = 58682, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_21[] = {
		{ .addr = 0x2c70ea, .byte = 0x46 },
		{ .addr = 0x2c70eb, .byte = 0x44 },
		{ .addr = 0x2c70ec, .byte = 0x02 },
		{ .addr = 0x2c70ed, .byte = 0x69 },
		{ .addr = 0x2c70ee, .byte = 0x79 },
		{ .addr = 0x2c70ef, .byte = 0xff }
};

static const SST_RamByte notw_final_ram_21[] = {
		{ .addr = 0x2c70ea, .byte = 0x46 },
		{ .addr = 0x2c70eb, .byte = 0x44 },
		{ .addr = 0x2c70ec, .byte = 0x02 },
		{ .addr = 0x2c70ed, .byte = 0x69 },
		{ .addr = 0x2c70ee, .byte = 0x79 },
		{ .addr = 0x2c70ef, .byte = 0xff }
};

static const SST_Transaction notw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2912494, .data = 31231, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_22[] = {
		{ .addr = 0xce6ec4, .byte = 0x46 },
		{ .addr = 0xce6ec5, .byte = 0x68 },
		{ .addr = 0xce6ec6, .byte = 0x1e },
		{ .addr = 0xce6ec7, .byte = 0x1f },
		{ .addr = 0xce6ec8, .byte = 0x5c },
		{ .addr = 0xce6ec9, .byte = 0xea },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0x26 },
		{ .addr = 0x00000e, .byte = 0x6b },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x266b48, .byte = 0x49 },
		{ .addr = 0x266b49, .byte = 0x1e },
		{ .addr = 0x266b4a, .byte = 0x75 },
		{ .addr = 0x266b4b, .byte = 0x12 }
};

static const SST_RamByte notw_final_ram_22[] = {
		{ .addr = 0xce6ec4, .byte = 0x46 },
		{ .addr = 0xce6ec5, .byte = 0x68 },
		{ .addr = 0xce6ec6, .byte = 0x1e },
		{ .addr = 0xce6ec7, .byte = 0x1f },
		{ .addr = 0xce6ec8, .byte = 0x5c },
		{ .addr = 0xce6ec9, .byte = 0xea },
		{ .addr = 0x06315e, .byte = 0x6e },
		{ .addr = 0x06315f, .byte = 0xc6 },
		{ .addr = 0x06315a, .byte = 0xa3 },
		{ .addr = 0x06315b, .byte = 0x0e },
		{ .addr = 0x06315c, .byte = 0x00 },
		{ .addr = 0x06315d, .byte = 0xce },
		{ .addr = 0x063158, .byte = 0x46 },
		{ .addr = 0x063159, .byte = 0x68 },
		{ .addr = 0x063156, .byte = 0xe5 },
		{ .addr = 0x063157, .byte = 0x55 },
		{ .addr = 0x063152, .byte = 0x46 },
		{ .addr = 0x063153, .byte = 0x75 },
		{ .addr = 0x063154, .byte = 0x23 },
		{ .addr = 0x063155, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0x26 },
		{ .addr = 0x00000e, .byte = 0x6b },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x266b48, .byte = 0x49 },
		{ .addr = 0x266b49, .byte = 0x1e },
		{ .addr = 0x266b4a, .byte = 0x75 },
		{ .addr = 0x266b4b, .byte = 0x12 }
};

static const SST_Transaction notw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13528776, .data = 23786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3597652, .data = 5915, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 405854, .data = 28358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 405850, .data = 41742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 405852, .data = 206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 405848, .data = 18024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 405846, .data = 58709, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 405842, .data = 18037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 405844, .data = 9014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27464, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2517832, .data = 18718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2517834, .data = 29970, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_23[] = {
		{ .addr = 0x0795c6, .byte = 0x46 },
		{ .addr = 0x0795c7, .byte = 0x68 },
		{ .addr = 0x0795c8, .byte = 0xba },
		{ .addr = 0x0795c9, .byte = 0xaa },
		{ .addr = 0x0795ca, .byte = 0x97 },
		{ .addr = 0x0795cb, .byte = 0xfc },
		{ .addr = 0x00000c, .byte = 0x0a },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0x640492, .byte = 0x0c },
		{ .addr = 0x640493, .byte = 0xec },
		{ .addr = 0x640494, .byte = 0x31 },
		{ .addr = 0x640495, .byte = 0xa7 }
};

static const SST_RamByte notw_final_ram_23[] = {
		{ .addr = 0x0795c6, .byte = 0x46 },
		{ .addr = 0x0795c7, .byte = 0x68 },
		{ .addr = 0x0795c8, .byte = 0xba },
		{ .addr = 0x0795c9, .byte = 0xaa },
		{ .addr = 0x0795ca, .byte = 0x97 },
		{ .addr = 0x0795cb, .byte = 0xfc },
		{ .addr = 0x7bccae, .byte = 0x95 },
		{ .addr = 0x7bccaf, .byte = 0xc8 },
		{ .addr = 0x7bccaa, .byte = 0xa7 },
		{ .addr = 0x7bccab, .byte = 0x07 },
		{ .addr = 0x7bccac, .byte = 0x00 },
		{ .addr = 0x7bccad, .byte = 0x07 },
		{ .addr = 0x7bcca8, .byte = 0x46 },
		{ .addr = 0x7bcca9, .byte = 0x68 },
		{ .addr = 0x7bcca6, .byte = 0x7e },
		{ .addr = 0x7bcca7, .byte = 0xcf },
		{ .addr = 0x7bcca2, .byte = 0x46 },
		{ .addr = 0x7bcca3, .byte = 0x75 },
		{ .addr = 0x7bcca4, .byte = 0xb9 },
		{ .addr = 0x7bcca5, .byte = 0x61 },
		{ .addr = 0x00000c, .byte = 0x0a },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0x640492, .byte = 0x0c },
		{ .addr = 0x640493, .byte = 0xec },
		{ .addr = 0x640494, .byte = 0x31 },
		{ .addr = 0x640495, .byte = 0xa7 }
};

static const SST_Transaction notw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 497098, .data = 38908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6389454, .data = 61868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113326, .data = 38344, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113322, .data = 42759, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113324, .data = 7, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113320, .data = 18024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113318, .data = 32463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113314, .data = 18037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113316, .data = 47457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6554770, .data = 3308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6554772, .data = 12711, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_24[] = {
		{ .addr = 0x6ede28, .byte = 0x46 },
		{ .addr = 0x6ede29, .byte = 0x76 },
		{ .addr = 0x6ede2a, .byte = 0x1c },
		{ .addr = 0x6ede2b, .byte = 0x64 },
		{ .addr = 0x6ede2c, .byte = 0x4c },
		{ .addr = 0x6ede2d, .byte = 0x43 },
		{ .addr = 0x0e72e2, .byte = 0x3f },
		{ .addr = 0x0e72e3, .byte = 0x02 },
		{ .addr = 0x6ede2e, .byte = 0xa7 },
		{ .addr = 0x6ede2f, .byte = 0x2a }
};

static const SST_RamByte notw_final_ram_24[] = {
		{ .addr = 0x6ede28, .byte = 0x46 },
		{ .addr = 0x6ede29, .byte = 0x76 },
		{ .addr = 0x6ede2a, .byte = 0x1c },
		{ .addr = 0x6ede2b, .byte = 0x64 },
		{ .addr = 0x6ede2c, .byte = 0x4c },
		{ .addr = 0x6ede2d, .byte = 0x43 },
		{ .addr = 0x0e72e2, .byte = 0xc0 },
		{ .addr = 0x0e72e3, .byte = 0xfd },
		{ .addr = 0x6ede2e, .byte = 0xa7 },
		{ .addr = 0x6ede2f, .byte = 0x2a }
};

static const SST_Transaction notw_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7265836, .data = 19523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 946914, .data = 16130, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7265838, .data = 42794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 946914, .data = 49405, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_25[] = {
		{ .addr = 0xc063ca, .byte = 0x46 },
		{ .addr = 0xc063cb, .byte = 0x77 },
		{ .addr = 0xc063cc, .byte = 0x3e },
		{ .addr = 0xc063cd, .byte = 0x3a },
		{ .addr = 0xc063ce, .byte = 0x9e },
		{ .addr = 0xc063cf, .byte = 0x0f },
		{ .addr = 0x038768, .byte = 0x21 },
		{ .addr = 0x038769, .byte = 0xb9 },
		{ .addr = 0xc063d0, .byte = 0x63 },
		{ .addr = 0xc063d1, .byte = 0x33 }
};

static const SST_RamByte notw_final_ram_25[] = {
		{ .addr = 0xc063ca, .byte = 0x46 },
		{ .addr = 0xc063cb, .byte = 0x77 },
		{ .addr = 0xc063cc, .byte = 0x3e },
		{ .addr = 0xc063cd, .byte = 0x3a },
		{ .addr = 0xc063ce, .byte = 0x9e },
		{ .addr = 0xc063cf, .byte = 0x0f },
		{ .addr = 0x038768, .byte = 0xde },
		{ .addr = 0x038769, .byte = 0x46 },
		{ .addr = 0xc063d0, .byte = 0x63 },
		{ .addr = 0xc063d1, .byte = 0x33 }
};

static const SST_Transaction notw_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12608462, .data = 40463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 231272, .data = 8633, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12608464, .data = 25395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 231272, .data = 56902, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_26[] = {
		{ .addr = 0x0af352, .byte = 0x46 },
		{ .addr = 0x0af353, .byte = 0x64 },
		{ .addr = 0x0af354, .byte = 0x8f },
		{ .addr = 0x0af355, .byte = 0xa5 },
		{ .addr = 0x1db570, .byte = 0xcf },
		{ .addr = 0x1db571, .byte = 0xba },
		{ .addr = 0x0af356, .byte = 0xb5 },
		{ .addr = 0x0af357, .byte = 0xb3 }
};

static const SST_RamByte notw_final_ram_26[] = {
		{ .addr = 0x0af352, .byte = 0x46 },
		{ .addr = 0x0af353, .byte = 0x64 },
		{ .addr = 0x0af354, .byte = 0x8f },
		{ .addr = 0x0af355, .byte = 0xa5 },
		{ .addr = 0x1db570, .byte = 0x30 },
		{ .addr = 0x1db571, .byte = 0x45 },
		{ .addr = 0x0af356, .byte = 0xb5 },
		{ .addr = 0x0af357, .byte = 0xb3 }
};

static const SST_Transaction notw_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1946992, .data = 53178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 717654, .data = 46515, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1946992, .data = 12357, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_27[] = {
		{ .addr = 0x24e17a, .byte = 0x46 },
		{ .addr = 0x24e17b, .byte = 0x52 },
		{ .addr = 0x24e17c, .byte = 0x36 },
		{ .addr = 0x24e17d, .byte = 0x35 },
		{ .addr = 0x0362de, .byte = 0xe5 },
		{ .addr = 0x0362df, .byte = 0x9f },
		{ .addr = 0x24e17e, .byte = 0xc8 },
		{ .addr = 0x24e17f, .byte = 0xe6 }
};

static const SST_RamByte notw_final_ram_27[] = {
		{ .addr = 0x24e17a, .byte = 0x46 },
		{ .addr = 0x24e17b, .byte = 0x52 },
		{ .addr = 0x24e17c, .byte = 0x36 },
		{ .addr = 0x24e17d, .byte = 0x35 },
		{ .addr = 0x0362de, .byte = 0x1a },
		{ .addr = 0x0362df, .byte = 0x60 },
		{ .addr = 0x24e17e, .byte = 0xc8 },
		{ .addr = 0x24e17f, .byte = 0xe6 }
};

static const SST_Transaction notw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 221918, .data = 58783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2417022, .data = 51430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 221918, .data = 6752, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_28[] = {
		{ .addr = 0xb5253c, .byte = 0x46 },
		{ .addr = 0xb5253d, .byte = 0x6d },
		{ .addr = 0xb5253e, .byte = 0x96 },
		{ .addr = 0xb5253f, .byte = 0x06 },
		{ .addr = 0xb52540, .byte = 0xe4 },
		{ .addr = 0xb52541, .byte = 0x7d },
		{ .addr = 0x91743e, .byte = 0xda },
		{ .addr = 0x91743f, .byte = 0x3b },
		{ .addr = 0xb52542, .byte = 0x0a },
		{ .addr = 0xb52543, .byte = 0xb3 }
};

static const SST_RamByte notw_final_ram_28[] = {
		{ .addr = 0xb5253c, .byte = 0x46 },
		{ .addr = 0xb5253d, .byte = 0x6d },
		{ .addr = 0xb5253e, .byte = 0x96 },
		{ .addr = 0xb5253f, .byte = 0x06 },
		{ .addr = 0xb52540, .byte = 0xe4 },
		{ .addr = 0xb52541, .byte = 0x7d },
		{ .addr = 0x91743e, .byte = 0x25 },
		{ .addr = 0x91743f, .byte = 0xc4 },
		{ .addr = 0xb52542, .byte = 0x0a },
		{ .addr = 0xb52543, .byte = 0xb3 }
};

static const SST_Transaction notw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11871552, .data = 58493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9532478, .data = 55867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11871554, .data = 2739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9532478, .data = 9668, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_29[] = {
		{ .addr = 0x4bb7a6, .byte = 0x46 },
		{ .addr = 0x4bb7a7, .byte = 0x6c },
		{ .addr = 0x4bb7a8, .byte = 0x30 },
		{ .addr = 0x4bb7a9, .byte = 0x50 },
		{ .addr = 0x4bb7aa, .byte = 0xb5 },
		{ .addr = 0x4bb7ab, .byte = 0x71 },
		{ .addr = 0x135e76, .byte = 0x4e },
		{ .addr = 0x135e77, .byte = 0x12 },
		{ .addr = 0x4bb7ac, .byte = 0x8b },
		{ .addr = 0x4bb7ad, .byte = 0xc1 }
};

static const SST_RamByte notw_final_ram_29[] = {
		{ .addr = 0x4bb7a6, .byte = 0x46 },
		{ .addr = 0x4bb7a7, .byte = 0x6c },
		{ .addr = 0x4bb7a8, .byte = 0x30 },
		{ .addr = 0x4bb7a9, .byte = 0x50 },
		{ .addr = 0x4bb7aa, .byte = 0xb5 },
		{ .addr = 0x4bb7ab, .byte = 0x71 },
		{ .addr = 0x135e76, .byte = 0xb1 },
		{ .addr = 0x135e77, .byte = 0xed },
		{ .addr = 0x4bb7ac, .byte = 0x8b },
		{ .addr = 0x4bb7ad, .byte = 0xc1 }
};

static const SST_Transaction notw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4962218, .data = 46449, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1269366, .data = 19986, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4962220, .data = 35777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1269366, .data = 45549, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_30[] = {
		{ .addr = 0x50e28e, .byte = 0x46 },
		{ .addr = 0x50e28f, .byte = 0x69 },
		{ .addr = 0x50e290, .byte = 0xd9 },
		{ .addr = 0x50e291, .byte = 0x27 },
		{ .addr = 0x50e292, .byte = 0xd5 },
		{ .addr = 0x50e293, .byte = 0xb2 },
		{ .addr = 0xa7914e, .byte = 0xfd },
		{ .addr = 0xa7914f, .byte = 0x15 },
		{ .addr = 0x50e294, .byte = 0xc4 },
		{ .addr = 0x50e295, .byte = 0x97 }
};

static const SST_RamByte notw_final_ram_30[] = {
		{ .addr = 0x50e28e, .byte = 0x46 },
		{ .addr = 0x50e28f, .byte = 0x69 },
		{ .addr = 0x50e290, .byte = 0xd9 },
		{ .addr = 0x50e291, .byte = 0x27 },
		{ .addr = 0x50e292, .byte = 0xd5 },
		{ .addr = 0x50e293, .byte = 0xb2 },
		{ .addr = 0xa7914e, .byte = 0x02 },
		{ .addr = 0xa7914f, .byte = 0xea },
		{ .addr = 0x50e294, .byte = 0xc4 },
		{ .addr = 0x50e295, .byte = 0x97 }
};

static const SST_Transaction notw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5300882, .data = 54706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10981710, .data = 64789, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5300884, .data = 50327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10981710, .data = 746, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notw_initial_ram_31[] = {
		{ .addr = 0x383074, .byte = 0x46 },
		{ .addr = 0x383075, .byte = 0x55 },
		{ .addr = 0x383076, .byte = 0x12 },
		{ .addr = 0x383077, .byte = 0xab },
		{ .addr = 0x293afa, .byte = 0x64 },
		{ .addr = 0x293afb, .byte = 0x4e },
		{ .addr = 0x383078, .byte = 0x72 },
		{ .addr = 0x383079, .byte = 0x5d }
};

static const SST_RamByte notw_final_ram_31[] = {
		{ .addr = 0x383074, .byte = 0x46 },
		{ .addr = 0x383075, .byte = 0x55 },
		{ .addr = 0x383076, .byte = 0x12 },
		{ .addr = 0x383077, .byte = 0xab },
		{ .addr = 0x293afa, .byte = 0x9b },
		{ .addr = 0x293afb, .byte = 0xb1 },
		{ .addr = 0x383078, .byte = 0x72 },
		{ .addr = 0x383079, .byte = 0x5d }
};

static const SST_Transaction notw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2702074, .data = 25678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3682424, .data = 29277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2702074, .data = 39857, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 NOT.w D6 4646",
		.initial = {
			.regs = {
				2651049674, 505535919, 1828935213, 1280045571, 3036346466, 480142600, 4073608577, 2327339834, 3087785706, 3511459251, 3576176865, 3085879696, 419241773, 523858283, 2089391872, 14832586, 11216552, 33025, 8468536
			},
			.prefetch0 = 17990,
			.prefetch1 = 31772,
			.ram = notw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2651049674, 505535919, 1828935213, 1280045571, 3036346466, 480142600, 4073630334, 2327339834, 3087785706, 3511459251, 3576176865, 3085879696, 419241773, 523858283, 2089391872, 14832586, 11216552, 33032, 8468538
			},
			.prefetch0 = 31772,
			.prefetch1 = 21974,
			.ram = notw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = notw_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 NOT.w -(A3) 4663",
		.initial = {
			.regs = {
				1769580009, 2039797579, 4164860508, 3712769830, 4243833837, 1655341822, 352021079, 2375529991, 1649902934, 4274599614, 1622283419, 4043087734, 364682922, 90444565, 721177163, 8381478, 2606918, 8472, 3808196
			},
			.prefetch0 = 18019,
			.prefetch1 = 50815,
			.ram = notw_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1769580009, 2039797579, 4164860508, 3712769830, 4243833837, 1655341822, 352021079, 2375529991, 1649902934, 4274599614, 1622283419, 4043087732, 364682922, 90444565, 721177163, 8381478, 2606918, 8464, 3808198
			},
			.prefetch0 = 50815,
			.prefetch1 = 1490,
			.ram = notw_final_ram_17,
			.ram_len = 8,
		},
		.transactions = notw_transactions_17,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "018 NOT.w -(A2) 4662",
		.initial = {
			.regs = {
				3369968952, 3044215842, 1363993844, 1465520534, 1776381992, 1983836903, 512142609, 3711109309, 2368009322, 744408215, 2452945529, 3004263953, 310082703, 926605760, 2799629562, 15208796, 7482644, 40964, 5262962
			},
			.prefetch0 = 18018,
			.prefetch1 = 10756,
			.ram = notw_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3369968952, 3044215842, 1363993844, 1465520534, 1776381992, 1983836903, 512142609, 3711109309, 2368009322, 744408215, 2452945527, 3004263953, 310082703, 926605760, 2799629562, 15208796, 7482630, 8196, 1284378852
			},
			.prefetch0 = 18175,
			.prefetch1 = 54884,
			.ram = notw_final_ram_18,
			.ram_len = 26,
		},
		.transactions = notw_transactions_18,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "019 NOT.w -(A6) 4666",
		.initial = {
			.regs = {
				1899933410, 3307301061, 1473976506, 3117743912, 2779692328, 208816653, 1621820574, 3743031897, 3490891757, 2044901830, 2300917222, 1288872640, 3175403531, 1887681718, 501153247, 8460506, 9289990, 42762, 778048
			},
			.prefetch0 = 18022,
			.prefetch1 = 162,
			.ram = notw_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1899933410, 3307301061, 1473976506, 3117743912, 2779692328, 208816653, 1621820574, 3743031897, 3490891757, 2044901830, 2300917222, 1288872640, 3175403531, 1887681718, 501153245, 8460506, 9289976, 9994, 1170257840
			},
			.prefetch0 = 21909,
			.prefetch1 = 35134,
			.ram = notw_final_ram_19,
			.ram_len = 26,
		},
		.transactions = notw_transactions_19,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "020 NOT.w (A0) 4650",
		.initial = {
			.regs = {
				236339017, 103956140, 4036245254, 3391766867, 347966805, 3286979431, 4199721916, 4139874099, 91204270, 109694695, 2232348373, 1709069068, 1909063483, 3536219940, 1677049033, 16753188, 9219986, 42499, 7215088
			},
			.prefetch0 = 18000,
			.prefetch1 = 58435,
			.ram = notw_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				236339017, 103956140, 4036245254, 3391766867, 347966805, 3286979431, 4199721916, 4139874099, 91204270, 109694695, 2232348373, 1709069068, 1909063483, 3536219940, 1677049033, 16753188, 9219986, 42504, 7215090
			},
			.prefetch0 = 58435,
			.prefetch1 = 47280,
			.ram = notw_final_ram_20,
			.ram_len = 8,
		},
		.transactions = notw_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 NOT.w D4 4644",
		.initial = {
			.regs = {
				2915864831, 2105713340, 562757523, 1996628107, 3240056801, 676440437, 3339564374, 1818481673, 2373265796, 1720197674, 2901281708, 242721436, 2827726703, 2854014075, 3101584452, 9383688, 14718008, 42011, 2912494
			},
			.prefetch0 = 17988,
			.prefetch1 = 617,
			.ram = notw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2915864831, 2105713340, 562757523, 1996628107, 3240077342, 676440437, 3339564374, 1818481673, 2373265796, 1720197674, 2901281708, 242721436, 2827726703, 2854014075, 3101584452, 9383688, 14718008, 42008, 2912496
			},
			.prefetch0 = 617,
			.prefetch1 = 31231,
			.ram = notw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = notw_transactions_21,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "022 NOT.w (d16, A0) 4668",
		.initial = {
			.regs = {
				666341437, 3257373761, 2442317847, 1258775312, 2831595969, 3741758251, 3386072736, 233500932, 590792502, 3888598953, 896575785, 1369762936, 3504089317, 542395228, 330985758, 616686, 405856, 41742, 13528776
			},
			.prefetch0 = 18024,
			.prefetch1 = 7711,
			.ram = notw_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				666341437, 3257373761, 2442317847, 1258775312, 2831595969, 3741758251, 3386072736, 233500932, 590792502, 3888598953, 896575785, 1369762936, 3504089317, 542395228, 330985758, 616686, 405842, 8974, 1411803980
			},
			.prefetch0 = 18718,
			.prefetch1 = 29970,
			.ram = notw_final_ram_22,
			.ram_len = 28,
		},
		.transactions = notw_transactions_22,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "023 NOT.w (d16, A0) 4668",
		.initial = {
			.regs = {
				2733527279, 3384720970, 3866927963, 2694009545, 2905163155, 3019166295, 3095933564, 1137008082, 3110192165, 3593923720, 913095143, 2203796296, 3502910881, 526595406, 681207986, 3019388, 8113328, 42759, 497098
			},
			.prefetch0 = 18024,
			.prefetch1 = 47786,
			.ram = notw_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2733527279, 3384720970, 3866927963, 2694009545, 2905163155, 3019166295, 3095933564, 1137008082, 3110192165, 3593923720, 913095143, 2203796296, 3502910881, 526595406, 681207986, 3019388, 8113314, 9991, 174326934
			},
			.prefetch0 = 3308,
			.prefetch1 = 12711,
			.ram = notw_final_ram_23,
			.ram_len = 28,
		},
		.transactions = notw_transactions_23,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "024 NOT.w (d8, A6, Xn) 4676",
		.initial = {
			.regs = {
				830767920, 229079025, 1015766360, 684045238, 1320921601, 2105136798, 2710865161, 3895928274, 103720789, 3642109029, 2068433993, 794862723, 1775407323, 2242885319, 2657548941, 9086420, 15019468, 34566, 7265836
			},
			.prefetch0 = 18038,
			.prefetch1 = 7268,
			.ram = notw_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				830767920, 229079025, 1015766360, 684045238, 1320921601, 2105136798, 2710865161, 3895928274, 103720789, 3642109029, 2068433993, 794862723, 1775407323, 2242885319, 2657548941, 9086420, 15019468, 34568, 7265840
			},
			.prefetch0 = 19523,
			.prefetch1 = 42794,
			.ram = notw_final_ram_24,
			.ram_len = 10,
		},
		.transactions = notw_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 NOT.w (d8, A7, Xn) 4677",
		.initial = {
			.regs = {
				4182193082, 1612958232, 2436434455, 1599386708, 614054369, 1843764300, 3011710532, 216211773, 2344300058, 2710060784, 210899752, 1621789909, 3780119517, 3763324687, 4111103954, 11457242, 10870920, 30, 12608462
			},
			.prefetch0 = 18039,
			.prefetch1 = 15930,
			.ram = notw_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4182193082, 1612958232, 2436434455, 1599386708, 614054369, 1843764300, 3011710532, 216211773, 2344300058, 2710060784, 210899752, 1621789909, 3780119517, 3763324687, 4111103954, 11457242, 10870920, 24, 12608466
			},
			.prefetch0 = 40463,
			.prefetch1 = 25395,
			.ram = notw_final_ram_25,
			.ram_len = 10,
		},
		.transactions = notw_transactions_25,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "026 NOT.w -(A4) 4664",
		.initial = {
			.regs = {
				2801152646, 1417155786, 2794679864, 2826359958, 3903787672, 3075353163, 1783989611, 957310859, 277705831, 2457036418, 1607389537, 4083492562, 538817906, 1977885403, 2044911236, 2418416, 14413606, 8450, 717654
			},
			.prefetch0 = 18020,
			.prefetch1 = 36773,
			.ram = notw_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2801152646, 1417155786, 2794679864, 2826359958, 3903787672, 3075353163, 1783989611, 957310859, 277705831, 2457036418, 1607389537, 4083492562, 538817904, 1977885403, 2044911236, 2418416, 14413606, 8448, 717656
			},
			.prefetch0 = 36773,
			.prefetch1 = 46515,
			.ram = notw_final_ram_26,
			.ram_len = 8,
		},
		.transactions = notw_transactions_26,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "027 NOT.w (A2) 4652",
		.initial = {
			.regs = {
				44966535, 2350505577, 3491421226, 2759415565, 2642165644, 3175265522, 1736559277, 974108336, 110421604, 2725900664, 2130928350, 2429344617, 2936865419, 2320736487, 3284643924, 14819814, 5730360, 8989, 2417022
			},
			.prefetch0 = 18002,
			.prefetch1 = 13877,
			.ram = notw_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				44966535, 2350505577, 3491421226, 2759415565, 2642165644, 3175265522, 1736559277, 974108336, 110421604, 2725900664, 2130928350, 2429344617, 2936865419, 2320736487, 3284643924, 14819814, 5730360, 8976, 2417024
			},
			.prefetch0 = 13877,
			.prefetch1 = 51430,
			.ram = notw_final_ram_27,
			.ram_len = 8,
		},
		.transactions = notw_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 NOT.w (d16, A5) 466d",
		.initial = {
			.regs = {
				643986000, 1766881331, 882759142, 2694143213, 1051475832, 4106526779, 2502105562, 1208245873, 514080677, 220321632, 3820566442, 3398615331, 2640835373, 1737612856, 2006872248, 10598082, 14143324, 9986, 11871552
			},
			.prefetch0 = 18029,
			.prefetch1 = 38406,
			.ram = notw_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				643986000, 1766881331, 882759142, 2694143213, 1051475832, 4106526779, 2502105562, 1208245873, 514080677, 220321632, 3820566442, 3398615331, 2640835373, 1737612856, 2006872248, 10598082, 14143324, 9984, 11871556
			},
			.prefetch0 = 58493,
			.prefetch1 = 2739,
			.ram = notw_final_ram_28,
			.ram_len = 10,
		},
		.transactions = notw_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 NOT.w (d16, A4) 466c",
		.initial = {
			.regs = {
				2947352294, 444312340, 2795347212, 3525980580, 4257506400, 3841479611, 1946729622, 3991804581, 2622634133, 1743976289, 2368717485, 3906074579, 3792907814, 217635527, 3858266096, 4722636, 7870040, 1051, 4962218
			},
			.prefetch0 = 18028,
			.prefetch1 = 12368,
			.ram = notw_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2947352294, 444312340, 2795347212, 3525980580, 4257506400, 3841479611, 1946729622, 3991804581, 2622634133, 1743976289, 2368717485, 3906074579, 3792907814, 217635527, 3858266096, 4722636, 7870040, 1048, 4962222
			},
			.prefetch0 = 46449,
			.prefetch1 = 35777,
			.ram = notw_final_ram_29,
			.ram_len = 10,
		},
		.transactions = notw_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 NOT.w (d16, A1) 4669",
		.initial = {
			.regs = {
				2173603414, 2499994680, 2164762889, 398981421, 2723880506, 3536557779, 2034357301, 1679660956, 604833339, 2645014567, 2828616826, 1613663678, 1557769272, 3672807144, 4216324289, 5782130, 379858, 34585, 5300882
			},
			.prefetch0 = 18025,
			.prefetch1 = 55591,
			.ram = notw_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2173603414, 2499994680, 2164762889, 398981421, 2723880506, 3536557779, 2034357301, 1679660956, 604833339, 2645014567, 2828616826, 1613663678, 1557769272, 3672807144, 4216324289, 5782130, 379858, 34576, 5300886
			},
			.prefetch0 = 54706,
			.prefetch1 = 50327,
			.ram = notw_final_ram_30,
			.ram_len = 10,
		},
		.transactions = notw_transactions_30,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "031 NOT.w (A5) 4655",
		.initial = {
			.regs = {
				2082044097, 3349860638, 983876031, 1446500849, 4129772578, 3451533399, 4170203655, 1164969141, 3008181671, 3134109356, 2777084177, 2509464433, 2036394438, 3307813626, 4067068832, 12378660, 573618, 8705, 3682424
			},
			.prefetch0 = 18005,
			.prefetch1 = 4779,
			.ram = notw_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2082044097, 3349860638, 983876031, 1446500849, 4129772578, 3451533399, 4170203655, 1164969141, 3008181671, 3134109356, 2777084177, 2509464433, 2036394438, 3307813626, 4067068832, 12378660, 573618, 8712, 3682426
			},
			.prefetch0 = 4779,
			.prefetch1 = 29277,
			.ram = notw_final_ram_31,
			.ram_len = 8,
		},
		.transactions = notw_transactions_31,
		.transactions_len = 3,
		.lenght = 12,
	},
};

#endif /* RBT_NOTW_H */