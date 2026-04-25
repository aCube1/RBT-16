#ifndef RBT_MULS_H
#define RBT_MULS_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte muls_initial_ram_0[] = {
		{ .addr = 0x6ebea4, .byte = 0xcf },
		{ .addr = 0x6ebea5, .byte = 0xd0 },
		{ .addr = 0x6ebea6, .byte = 0x41 },
		{ .addr = 0x6ebea7, .byte = 0xb6 },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0x88 },
		{ .addr = 0x00000e, .byte = 0x0c },
		{ .addr = 0x00000f, .byte = 0x1c },
		{ .addr = 0x880c1c, .byte = 0x20 },
		{ .addr = 0x880c1d, .byte = 0xc0 },
		{ .addr = 0x880c1e, .byte = 0x43 },
		{ .addr = 0x880c1f, .byte = 0xa2 }
};

static const SST_RamByte muls_final_ram_0[] = {
		{ .addr = 0x6ebea4, .byte = 0xcf },
		{ .addr = 0x6ebea5, .byte = 0xd0 },
		{ .addr = 0x6ebea6, .byte = 0x41 },
		{ .addr = 0x6ebea7, .byte = 0xb6 },
		{ .addr = 0x4ad952, .byte = 0xbe },
		{ .addr = 0x4ad953, .byte = 0xa6 },
		{ .addr = 0x4ad94e, .byte = 0xa1 },
		{ .addr = 0x4ad94f, .byte = 0x0f },
		{ .addr = 0x4ad950, .byte = 0x00 },
		{ .addr = 0x4ad951, .byte = 0x6e },
		{ .addr = 0x4ad94c, .byte = 0xcf },
		{ .addr = 0x4ad94d, .byte = 0xd0 },
		{ .addr = 0x4ad94a, .byte = 0x40 },
		{ .addr = 0x4ad94b, .byte = 0xa1 },
		{ .addr = 0x4ad946, .byte = 0xcf },
		{ .addr = 0x4ad947, .byte = 0xd5 },
		{ .addr = 0x4ad948, .byte = 0xbe },
		{ .addr = 0x4ad949, .byte = 0x3b },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0x88 },
		{ .addr = 0x00000e, .byte = 0x0c },
		{ .addr = 0x00000f, .byte = 0x1c },
		{ .addr = 0x880c1c, .byte = 0x20 },
		{ .addr = 0x880c1d, .byte = 0xc0 },
		{ .addr = 0x880c1e, .byte = 0x43 },
		{ .addr = 0x880c1f, .byte = 0xa2 }
};

static const SST_Transaction muls_transactions_0[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3883168, .data = 47209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4905298, .data = 48806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4905294, .data = 41231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4905296, .data = 110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4905292, .data = 53200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4905290, .data = 16545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4905286, .data = 53205, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4905288, .data = 48699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 3100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8915996, .data = 8384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8915998, .data = 17314, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_1[] = {
		{ .addr = 0x2f4cfa, .byte = 0xc3 },
		{ .addr = 0x2f4cfb, .byte = 0xfb },
		{ .addr = 0x2f4cfc, .byte = 0xf3 },
		{ .addr = 0x2f4cfd, .byte = 0xb9 },
		{ .addr = 0x2f4cfe, .byte = 0x85 },
		{ .addr = 0x2f4cff, .byte = 0x6f },
		{ .addr = 0x00000c, .byte = 0xb8 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x2b },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0x4a2b7e, .byte = 0x45 },
		{ .addr = 0x4a2b7f, .byte = 0x3c },
		{ .addr = 0x4a2b80, .byte = 0x50 },
		{ .addr = 0x4a2b81, .byte = 0xa0 }
};

static const SST_RamByte muls_final_ram_1[] = {
		{ .addr = 0x2f4cfa, .byte = 0xc3 },
		{ .addr = 0x2f4cfb, .byte = 0xfb },
		{ .addr = 0x2f4cfc, .byte = 0xf3 },
		{ .addr = 0x2f4cfd, .byte = 0xb9 },
		{ .addr = 0x2f4cfe, .byte = 0x85 },
		{ .addr = 0x2f4cff, .byte = 0x6f },
		{ .addr = 0x5e3db2, .byte = 0x4c },
		{ .addr = 0x5e3db3, .byte = 0xfc },
		{ .addr = 0x5e3dae, .byte = 0xa0 },
		{ .addr = 0x5e3daf, .byte = 0x09 },
		{ .addr = 0x5e3db0, .byte = 0x00 },
		{ .addr = 0x5e3db1, .byte = 0x2f },
		{ .addr = 0x5e3dac, .byte = 0xc3 },
		{ .addr = 0x5e3dad, .byte = 0xfb },
		{ .addr = 0x5e3daa, .byte = 0x8a },
		{ .addr = 0x5e3dab, .byte = 0x69 },
		{ .addr = 0x5e3da6, .byte = 0xc3 },
		{ .addr = 0x5e3da7, .byte = 0xf6 },
		{ .addr = 0x5e3da8, .byte = 0x00 },
		{ .addr = 0x5e3da9, .byte = 0x2f },
		{ .addr = 0x00000c, .byte = 0xb8 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x2b },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0x4a2b7e, .byte = 0x45 },
		{ .addr = 0x4a2b7f, .byte = 0x3c },
		{ .addr = 0x4a2b80, .byte = 0x50 },
		{ .addr = 0x4a2b81, .byte = 0xa0 }
};

static const SST_Transaction muls_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3099902, .data = 34159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3115624, .data = 33036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6176178, .data = 19708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6176174, .data = 40969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6176176, .data = 47, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6176172, .data = 50171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6176170, .data = 35433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6176166, .data = 50166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6176168, .data = 47, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 11134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4860798, .data = 17724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4860800, .data = 20640, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_2[] = {
		{ .addr = 0x33c3dc, .byte = 0xcd },
		{ .addr = 0x33c3dd, .byte = 0xec },
		{ .addr = 0x33c3de, .byte = 0xf0 },
		{ .addr = 0x33c3df, .byte = 0xe3 },
		{ .addr = 0x33c3e0, .byte = 0xf4 },
		{ .addr = 0x33c3e1, .byte = 0xe6 },
		{ .addr = 0x00000c, .byte = 0xac },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0x7296c8, .byte = 0xab },
		{ .addr = 0x7296c9, .byte = 0xc1 },
		{ .addr = 0x7296ca, .byte = 0xa6 },
		{ .addr = 0x7296cb, .byte = 0xbb }
};

static const SST_RamByte muls_final_ram_2[] = {
		{ .addr = 0x33c3dc, .byte = 0xcd },
		{ .addr = 0x33c3dd, .byte = 0xec },
		{ .addr = 0x33c3de, .byte = 0xf0 },
		{ .addr = 0x33c3df, .byte = 0xe3 },
		{ .addr = 0x33c3e0, .byte = 0xf4 },
		{ .addr = 0x33c3e1, .byte = 0xe6 },
		{ .addr = 0x683b78, .byte = 0xc3 },
		{ .addr = 0x683b79, .byte = 0xde },
		{ .addr = 0x683b74, .byte = 0xa3 },
		{ .addr = 0x683b75, .byte = 0x03 },
		{ .addr = 0x683b76, .byte = 0x00 },
		{ .addr = 0x683b77, .byte = 0x33 },
		{ .addr = 0x683b72, .byte = 0xcd },
		{ .addr = 0x683b73, .byte = 0xec },
		{ .addr = 0x683b70, .byte = 0xac },
		{ .addr = 0x683b71, .byte = 0xd9 },
		{ .addr = 0x683b6c, .byte = 0xcd },
		{ .addr = 0x683b6d, .byte = 0xf5 },
		{ .addr = 0x683b6e, .byte = 0x97 },
		{ .addr = 0x683b6f, .byte = 0xa1 },
		{ .addr = 0x00000c, .byte = 0xac },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0x7296c8, .byte = 0xab },
		{ .addr = 0x7296c9, .byte = 0xc1 },
		{ .addr = 0x7296ca, .byte = 0xa6 },
		{ .addr = 0x7296cb, .byte = 0xbb }
};

static const SST_Transaction muls_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3392480, .data = 62694, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10595544, .data = 22973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6830968, .data = 50142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6830964, .data = 41731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6830966, .data = 51, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6830962, .data = 52716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6830960, .data = 44249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6830956, .data = 52725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6830958, .data = 38817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7509704, .data = 43969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7509706, .data = 42683, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_3[] = {
		{ .addr = 0xd5b2d8, .byte = 0xc7 },
		{ .addr = 0xd5b2d9, .byte = 0xf2 },
		{ .addr = 0xd5b2da, .byte = 0xb7 },
		{ .addr = 0xd5b2db, .byte = 0xcd },
		{ .addr = 0xd5b2dc, .byte = 0xa9 },
		{ .addr = 0xd5b2dd, .byte = 0x1c },
		{ .addr = 0x16ab62, .byte = 0x7b },
		{ .addr = 0x16ab63, .byte = 0xb0 },
		{ .addr = 0xd5b2de, .byte = 0x91 },
		{ .addr = 0xd5b2df, .byte = 0x32 }
};

static const SST_RamByte muls_final_ram_3[] = {
		{ .addr = 0xd5b2d8, .byte = 0xc7 },
		{ .addr = 0xd5b2d9, .byte = 0xf2 },
		{ .addr = 0xd5b2da, .byte = 0xb7 },
		{ .addr = 0xd5b2db, .byte = 0xcd },
		{ .addr = 0xd5b2dc, .byte = 0xa9 },
		{ .addr = 0xd5b2dd, .byte = 0x1c },
		{ .addr = 0x16ab62, .byte = 0x7b },
		{ .addr = 0x16ab63, .byte = 0xb0 },
		{ .addr = 0xd5b2de, .byte = 0x91 },
		{ .addr = 0xd5b2df, .byte = 0x32 }
};

static const SST_Transaction muls_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14004956, .data = 43292, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1485666, .data = 31664, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14004958, .data = 37170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte muls_initial_ram_4[] = {
		{ .addr = 0x16316e, .byte = 0xc5 },
		{ .addr = 0x16316f, .byte = 0xd9 },
		{ .addr = 0x163170, .byte = 0xf3 },
		{ .addr = 0x163171, .byte = 0xcf },
		{ .addr = 0x4b0348, .byte = 0xc4 },
		{ .addr = 0x4b0349, .byte = 0x54 },
		{ .addr = 0x163172, .byte = 0xd2 },
		{ .addr = 0x163173, .byte = 0xd5 }
};

static const SST_RamByte muls_final_ram_4[] = {
		{ .addr = 0x16316e, .byte = 0xc5 },
		{ .addr = 0x16316f, .byte = 0xd9 },
		{ .addr = 0x163170, .byte = 0xf3 },
		{ .addr = 0x163171, .byte = 0xcf },
		{ .addr = 0x4b0348, .byte = 0xc4 },
		{ .addr = 0x4b0349, .byte = 0x54 },
		{ .addr = 0x163172, .byte = 0xd2 },
		{ .addr = 0x163173, .byte = 0xd5 }
};

static const SST_Transaction muls_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4916040, .data = 50260, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1454450, .data = 53973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte muls_initial_ram_5[] = {
		{ .addr = 0xa5d528, .byte = 0xc9 },
		{ .addr = 0xa5d529, .byte = 0xd0 },
		{ .addr = 0xa5d52a, .byte = 0xb5 },
		{ .addr = 0xa5d52b, .byte = 0x52 },
		{ .addr = 0x00000c, .byte = 0xfb },
		{ .addr = 0x00000d, .byte = 0x4c },
		{ .addr = 0x00000e, .byte = 0xe7 },
		{ .addr = 0x00000f, .byte = 0xa4 },
		{ .addr = 0x4ce7a4, .byte = 0xd5 },
		{ .addr = 0x4ce7a5, .byte = 0x78 },
		{ .addr = 0x4ce7a6, .byte = 0x1c },
		{ .addr = 0x4ce7a7, .byte = 0xa0 }
};

static const SST_RamByte muls_final_ram_5[] = {
		{ .addr = 0xa5d528, .byte = 0xc9 },
		{ .addr = 0xa5d529, .byte = 0xd0 },
		{ .addr = 0xa5d52a, .byte = 0xb5 },
		{ .addr = 0xa5d52b, .byte = 0x52 },
		{ .addr = 0xf43bea, .byte = 0xd5 },
		{ .addr = 0xf43beb, .byte = 0x2a },
		{ .addr = 0xf43be6, .byte = 0x00 },
		{ .addr = 0xf43be7, .byte = 0x05 },
		{ .addr = 0xf43be8, .byte = 0x00 },
		{ .addr = 0xf43be9, .byte = 0xa5 },
		{ .addr = 0xf43be4, .byte = 0xc9 },
		{ .addr = 0xf43be5, .byte = 0xd0 },
		{ .addr = 0xf43be2, .byte = 0x92 },
		{ .addr = 0xf43be3, .byte = 0xc7 },
		{ .addr = 0xf43bde, .byte = 0xc9 },
		{ .addr = 0xf43bdf, .byte = 0xd1 },
		{ .addr = 0xf43be0, .byte = 0x20 },
		{ .addr = 0xf43be1, .byte = 0xea },
		{ .addr = 0x00000c, .byte = 0xfb },
		{ .addr = 0x00000d, .byte = 0x4c },
		{ .addr = 0x00000e, .byte = 0xe7 },
		{ .addr = 0x00000f, .byte = 0xa4 },
		{ .addr = 0x4ce7a4, .byte = 0xd5 },
		{ .addr = 0x4ce7a5, .byte = 0x78 },
		{ .addr = 0x4ce7a6, .byte = 0x1c },
		{ .addr = 0x4ce7a7, .byte = 0xa0 }
};

static const SST_Transaction muls_transactions_5[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15372998, .data = 21610, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16006122, .data = 54570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16006118, .data = 5, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16006120, .data = 165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16006116, .data = 51664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16006114, .data = 37575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16006110, .data = 51665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16006112, .data = 8426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 59300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5040036, .data = 54648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5040038, .data = 7328, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_6[] = {
		{ .addr = 0x6c9286, .byte = 0xc7 },
		{ .addr = 0x6c9287, .byte = 0xdf },
		{ .addr = 0x6c9288, .byte = 0x0e },
		{ .addr = 0x6c9289, .byte = 0xfe },
		{ .addr = 0x2f6894, .byte = 0x87 },
		{ .addr = 0x2f6895, .byte = 0xca },
		{ .addr = 0x6c928a, .byte = 0x7e },
		{ .addr = 0x6c928b, .byte = 0xbe }
};

static const SST_RamByte muls_final_ram_6[] = {
		{ .addr = 0x6c9286, .byte = 0xc7 },
		{ .addr = 0x6c9287, .byte = 0xdf },
		{ .addr = 0x6c9288, .byte = 0x0e },
		{ .addr = 0x6c9289, .byte = 0xfe },
		{ .addr = 0x2f6894, .byte = 0x87 },
		{ .addr = 0x2f6895, .byte = 0xca },
		{ .addr = 0x6c928a, .byte = 0x7e },
		{ .addr = 0x6c928b, .byte = 0xbe }
};

static const SST_Transaction muls_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3106964, .data = 34762, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7115402, .data = 32446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte muls_initial_ram_7[] = {
		{ .addr = 0x1444ce, .byte = 0xcd },
		{ .addr = 0x1444cf, .byte = 0xd9 },
		{ .addr = 0x1444d0, .byte = 0x1a },
		{ .addr = 0x1444d1, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0xb9 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x5c19f0, .byte = 0xa4 },
		{ .addr = 0x5c19f1, .byte = 0x32 },
		{ .addr = 0x5c19f2, .byte = 0x70 },
		{ .addr = 0x5c19f3, .byte = 0xb1 }
};

static const SST_RamByte muls_final_ram_7[] = {
		{ .addr = 0x1444ce, .byte = 0xcd },
		{ .addr = 0x1444cf, .byte = 0xd9 },
		{ .addr = 0x1444d0, .byte = 0x1a },
		{ .addr = 0x1444d1, .byte = 0xff },
		{ .addr = 0x609632, .byte = 0x44 },
		{ .addr = 0x609633, .byte = 0xd0 },
		{ .addr = 0x60962e, .byte = 0x27 },
		{ .addr = 0x60962f, .byte = 0x15 },
		{ .addr = 0x609630, .byte = 0x00 },
		{ .addr = 0x609631, .byte = 0x14 },
		{ .addr = 0x60962c, .byte = 0xcd },
		{ .addr = 0x60962d, .byte = 0xd9 },
		{ .addr = 0x60962a, .byte = 0x64 },
		{ .addr = 0x60962b, .byte = 0x39 },
		{ .addr = 0x609626, .byte = 0xcd },
		{ .addr = 0x609627, .byte = 0xd5 },
		{ .addr = 0x609628, .byte = 0xdf },
		{ .addr = 0x609629, .byte = 0x17 },
		{ .addr = 0x00000c, .byte = 0xb9 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x5c19f0, .byte = 0xa4 },
		{ .addr = 0x5c19f1, .byte = 0x32 },
		{ .addr = 0x5c19f2, .byte = 0x70 },
		{ .addr = 0x5c19f3, .byte = 0xb1 }
};

static const SST_Transaction muls_transactions_7[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1532984, .data = 29307, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329906, .data = 17616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329902, .data = 10005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329904, .data = 20, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329900, .data = 52697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329898, .data = 25657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329894, .data = 52693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6329896, .data = 57111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6035952, .data = 42034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6035954, .data = 28849, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_8[] = {
		{ .addr = 0x2144bc, .byte = 0xc7 },
		{ .addr = 0x2144bd, .byte = 0xec },
		{ .addr = 0x2144be, .byte = 0xb5 },
		{ .addr = 0x2144bf, .byte = 0x97 },
		{ .addr = 0x2144c0, .byte = 0x37 },
		{ .addr = 0x2144c1, .byte = 0xc5 },
		{ .addr = 0x51fe52, .byte = 0xac },
		{ .addr = 0x51fe53, .byte = 0x2d },
		{ .addr = 0x2144c2, .byte = 0x7d },
		{ .addr = 0x2144c3, .byte = 0x22 }
};

static const SST_RamByte muls_final_ram_8[] = {
		{ .addr = 0x2144bc, .byte = 0xc7 },
		{ .addr = 0x2144bd, .byte = 0xec },
		{ .addr = 0x2144be, .byte = 0xb5 },
		{ .addr = 0x2144bf, .byte = 0x97 },
		{ .addr = 0x2144c0, .byte = 0x37 },
		{ .addr = 0x2144c1, .byte = 0xc5 },
		{ .addr = 0x51fe52, .byte = 0xac },
		{ .addr = 0x51fe53, .byte = 0x2d },
		{ .addr = 0x2144c2, .byte = 0x7d },
		{ .addr = 0x2144c3, .byte = 0x22 }
};

static const SST_Transaction muls_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2180288, .data = 14277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5373522, .data = 44077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2180290, .data = 32034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte muls_initial_ram_9[] = {
		{ .addr = 0x4ad692, .byte = 0xc9 },
		{ .addr = 0x4ad693, .byte = 0xea },
		{ .addr = 0x4ad694, .byte = 0x5a },
		{ .addr = 0x4ad695, .byte = 0x15 },
		{ .addr = 0x4ad696, .byte = 0x54 },
		{ .addr = 0x4ad697, .byte = 0x14 },
		{ .addr = 0xa9c0e6, .byte = 0xb0 },
		{ .addr = 0xa9c0e7, .byte = 0x9f },
		{ .addr = 0x4ad698, .byte = 0x73 },
		{ .addr = 0x4ad699, .byte = 0xca }
};

static const SST_RamByte muls_final_ram_9[] = {
		{ .addr = 0x4ad692, .byte = 0xc9 },
		{ .addr = 0x4ad693, .byte = 0xea },
		{ .addr = 0x4ad694, .byte = 0x5a },
		{ .addr = 0x4ad695, .byte = 0x15 },
		{ .addr = 0x4ad696, .byte = 0x54 },
		{ .addr = 0x4ad697, .byte = 0x14 },
		{ .addr = 0xa9c0e6, .byte = 0xb0 },
		{ .addr = 0xa9c0e7, .byte = 0x9f },
		{ .addr = 0x4ad698, .byte = 0x73 },
		{ .addr = 0x4ad699, .byte = 0xca }
};

static const SST_Transaction muls_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4904598, .data = 21524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11124966, .data = 45215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4904600, .data = 29642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte muls_initial_ram_10[] = {
		{ .addr = 0x45a35c, .byte = 0xc7 },
		{ .addr = 0x45a35d, .byte = 0xeb },
		{ .addr = 0x45a35e, .byte = 0x85 },
		{ .addr = 0x45a35f, .byte = 0x14 },
		{ .addr = 0x45a360, .byte = 0x62 },
		{ .addr = 0x45a361, .byte = 0xa1 },
		{ .addr = 0xb64dee, .byte = 0x14 },
		{ .addr = 0xb64def, .byte = 0xae },
		{ .addr = 0x45a362, .byte = 0xbc },
		{ .addr = 0x45a363, .byte = 0x80 }
};

static const SST_RamByte muls_final_ram_10[] = {
		{ .addr = 0x45a35c, .byte = 0xc7 },
		{ .addr = 0x45a35d, .byte = 0xeb },
		{ .addr = 0x45a35e, .byte = 0x85 },
		{ .addr = 0x45a35f, .byte = 0x14 },
		{ .addr = 0x45a360, .byte = 0x62 },
		{ .addr = 0x45a361, .byte = 0xa1 },
		{ .addr = 0xb64dee, .byte = 0x14 },
		{ .addr = 0xb64def, .byte = 0xae },
		{ .addr = 0x45a362, .byte = 0xbc },
		{ .addr = 0x45a363, .byte = 0x80 }
};

static const SST_Transaction muls_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4563808, .data = 25249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11947502, .data = 5294, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4563810, .data = 48256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 54 },
};

static const SST_RamByte muls_initial_ram_11[] = {
		{ .addr = 0x512148, .byte = 0xc3 },
		{ .addr = 0x512149, .byte = 0xc4 },
		{ .addr = 0x51214a, .byte = 0x8a },
		{ .addr = 0x51214b, .byte = 0xef },
		{ .addr = 0x51214c, .byte = 0x4b },
		{ .addr = 0x51214d, .byte = 0x81 }
};

static const SST_RamByte muls_final_ram_11[] = {
		{ .addr = 0x512148, .byte = 0xc3 },
		{ .addr = 0x512149, .byte = 0xc4 },
		{ .addr = 0x51214a, .byte = 0x8a },
		{ .addr = 0x51214b, .byte = 0xef },
		{ .addr = 0x51214c, .byte = 0x4b },
		{ .addr = 0x51214d, .byte = 0x81 }
};

static const SST_Transaction muls_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5316940, .data = 19329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte muls_initial_ram_12[] = {
		{ .addr = 0xbdbf48, .byte = 0xcb },
		{ .addr = 0xbdbf49, .byte = 0xc6 },
		{ .addr = 0xbdbf4a, .byte = 0x8a },
		{ .addr = 0xbdbf4b, .byte = 0x68 },
		{ .addr = 0xbdbf4c, .byte = 0x12 },
		{ .addr = 0xbdbf4d, .byte = 0x4e }
};

static const SST_RamByte muls_final_ram_12[] = {
		{ .addr = 0xbdbf48, .byte = 0xcb },
		{ .addr = 0xbdbf49, .byte = 0xc6 },
		{ .addr = 0xbdbf4a, .byte = 0x8a },
		{ .addr = 0xbdbf4b, .byte = 0x68 },
		{ .addr = 0xbdbf4c, .byte = 0x12 },
		{ .addr = 0xbdbf4d, .byte = 0x4e }
};

static const SST_Transaction muls_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12435276, .data = 4686, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte muls_initial_ram_13[] = {
		{ .addr = 0xa69c52, .byte = 0xc1 },
		{ .addr = 0xa69c53, .byte = 0xe0 },
		{ .addr = 0xa69c54, .byte = 0x1f },
		{ .addr = 0xa69c55, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x5d },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x8c96d0, .byte = 0x3e },
		{ .addr = 0x8c96d1, .byte = 0xdb },
		{ .addr = 0x8c96d2, .byte = 0x98 },
		{ .addr = 0x8c96d3, .byte = 0xfe }
};

static const SST_RamByte muls_final_ram_13[] = {
		{ .addr = 0xa69c52, .byte = 0xc1 },
		{ .addr = 0xa69c53, .byte = 0xe0 },
		{ .addr = 0xa69c54, .byte = 0x1f },
		{ .addr = 0xa69c55, .byte = 0x42 },
		{ .addr = 0xd6811a, .byte = 0x9c },
		{ .addr = 0xd6811b, .byte = 0x56 },
		{ .addr = 0xd68116, .byte = 0xa7 },
		{ .addr = 0xd68117, .byte = 0x07 },
		{ .addr = 0xd68118, .byte = 0x00 },
		{ .addr = 0xd68119, .byte = 0xa6 },
		{ .addr = 0xd68114, .byte = 0xc1 },
		{ .addr = 0xd68115, .byte = 0xe0 },
		{ .addr = 0xd68112, .byte = 0x7e },
		{ .addr = 0xd68113, .byte = 0x71 },
		{ .addr = 0xd6810e, .byte = 0xc1 },
		{ .addr = 0xd6810f, .byte = 0xf5 },
		{ .addr = 0xd68110, .byte = 0xc8 },
		{ .addr = 0xd68111, .byte = 0x78 },
		{ .addr = 0x00000c, .byte = 0x5d },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x8c96d0, .byte = 0x3e },
		{ .addr = 0x8c96d1, .byte = 0xdb },
		{ .addr = 0x8c96d2, .byte = 0x98 },
		{ .addr = 0x8c96d3, .byte = 0xfe }
};

static const SST_Transaction muls_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7896688, .data = 53657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14057754, .data = 40022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14057750, .data = 42759, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14057752, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14057748, .data = 49632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14057746, .data = 32369, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14057742, .data = 49653, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14057744, .data = 51320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 23948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9213648, .data = 16091, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9213650, .data = 39166, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_14[] = {
		{ .addr = 0x659f04, .byte = 0xcb },
		{ .addr = 0x659f05, .byte = 0xde },
		{ .addr = 0x659f06, .byte = 0x2b },
		{ .addr = 0x659f07, .byte = 0x45 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0xc04024, .byte = 0xf3 },
		{ .addr = 0xc04025, .byte = 0x57 },
		{ .addr = 0xc04026, .byte = 0xca },
		{ .addr = 0xc04027, .byte = 0xff }
};

static const SST_RamByte muls_final_ram_14[] = {
		{ .addr = 0x659f04, .byte = 0xcb },
		{ .addr = 0x659f05, .byte = 0xde },
		{ .addr = 0x659f06, .byte = 0x2b },
		{ .addr = 0x659f07, .byte = 0x45 },
		{ .addr = 0xaab872, .byte = 0x9f },
		{ .addr = 0xaab873, .byte = 0x06 },
		{ .addr = 0xaab86e, .byte = 0x84 },
		{ .addr = 0xaab86f, .byte = 0x1a },
		{ .addr = 0xaab870, .byte = 0x00 },
		{ .addr = 0xaab871, .byte = 0x65 },
		{ .addr = 0xaab86c, .byte = 0xcb },
		{ .addr = 0xaab86d, .byte = 0xde },
		{ .addr = 0xaab86a, .byte = 0xda },
		{ .addr = 0xaab86b, .byte = 0xab },
		{ .addr = 0xaab866, .byte = 0xcb },
		{ .addr = 0xaab867, .byte = 0xd1 },
		{ .addr = 0xaab868, .byte = 0x8c },
		{ .addr = 0xaab869, .byte = 0x8e },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0xc04024, .byte = 0xf3 },
		{ .addr = 0xc04025, .byte = 0x57 },
		{ .addr = 0xc04026, .byte = 0xca },
		{ .addr = 0xc04027, .byte = 0xff }
};

static const SST_Transaction muls_transactions_14[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9362090, .data = 37938, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188338, .data = 40710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188334, .data = 33818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188336, .data = 101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188332, .data = 52190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188330, .data = 55979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188326, .data = 52177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188328, .data = 35982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16420, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12599332, .data = 62295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12599334, .data = 51967, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_15[] = {
		{ .addr = 0xbbb7e8, .byte = 0xcd },
		{ .addr = 0xbbb7e9, .byte = 0xee },
		{ .addr = 0xbbb7ea, .byte = 0xb9 },
		{ .addr = 0xbbb7eb, .byte = 0x16 },
		{ .addr = 0xbbb7ec, .byte = 0x17 },
		{ .addr = 0xbbb7ed, .byte = 0x01 },
		{ .addr = 0x6b7338, .byte = 0xb2 },
		{ .addr = 0x6b7339, .byte = 0x8c },
		{ .addr = 0xbbb7ee, .byte = 0x1d },
		{ .addr = 0xbbb7ef, .byte = 0x8e }
};

static const SST_RamByte muls_final_ram_15[] = {
		{ .addr = 0xbbb7e8, .byte = 0xcd },
		{ .addr = 0xbbb7e9, .byte = 0xee },
		{ .addr = 0xbbb7ea, .byte = 0xb9 },
		{ .addr = 0xbbb7eb, .byte = 0x16 },
		{ .addr = 0xbbb7ec, .byte = 0x17 },
		{ .addr = 0xbbb7ed, .byte = 0x01 },
		{ .addr = 0x6b7338, .byte = 0xb2 },
		{ .addr = 0x6b7339, .byte = 0x8c },
		{ .addr = 0xbbb7ee, .byte = 0x1d },
		{ .addr = 0xbbb7ef, .byte = 0x8e }
};

static const SST_Transaction muls_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12302316, .data = 5889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7041848, .data = 45708, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12302318, .data = 7566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

const uint32_t MULS_TEST_COUNT = 16;
static const SST_TestCase muls[] = {
	{
		.name = "000 MULS (A0), D7 cfd0",
		.initial = {
			.regs = {
				1704645368, 1901729937, 3128084608, 2902137850, 1704553321, 1645148921, 1541705176, 3019654251, 3191554209, 2285547708, 1406541405, 3273714787, 3633134209, 1861415841, 1909716418, 11325510, 4905300, 41231, 7257768
			},
			.prefetch0 = 53200,
			.prefetch1 = 16822,
			.ram = muls_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1704645368, 1901729937, 3128084608, 2902137850, 1704553321, 1645148921, 1541705176, 3019654251, 3191554209, 2285547708, 1406541405, 3273714787, 3633134209, 1861415841, 1909716418, 11325510, 4905286, 8463, 3565685792
			},
			.prefetch0 = 8384,
			.prefetch1 = 17314,
			.ram = muls_final_ram_0,
			.ram_len = 26,
		},
		.transactions = muls_transactions_0,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "001 MULS (d8, PC, Xn), D1 c3fb",
		.initial = {
			.regs = {
				2555548454, 915173015, 3488441894, 813993650, 629384474, 3056126276, 815140552, 3889428813, 4021286841, 1768500319, 2667852234, 2457228014, 3415424422, 825271778, 1729710423, 4397764, 6176180, 40969, 3099902
			},
			.prefetch0 = 50171,
			.prefetch1 = 62393,
			.ram = muls_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2555548454, 915173015, 3488441894, 813993650, 629384474, 3056126276, 815140552, 3889428813, 4021286841, 1768500319, 2667852234, 2457228014, 3415424422, 825271778, 1729710423, 4397764, 6176166, 8201, 3091868546
			},
			.prefetch0 = 17724,
			.prefetch1 = 20640,
			.ram = muls_final_ram_1,
			.ram_len = 28,
		},
		.transactions = muls_transactions_1,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "002 MULS (d16, A4), D6 cdec",
		.initial = {
			.regs = {
				2115308663, 4178290849, 1550584768, 945962282, 687278093, 2133993493, 702939291, 2663685803, 1242566985, 3295911991, 2398240253, 2101684948, 2543959030, 64819228, 3780060020, 1453854, 6830970, 41731, 3392480
			},
			.prefetch0 = 52716,
			.prefetch1 = 61667,
			.ram = muls_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2115308663, 4178290849, 1550584768, 945962282, 687278093, 2133993493, 702939291, 2663685803, 1242566985, 3295911991, 2398240253, 2101684948, 2543959030, 64819228, 3780060020, 1453854, 6830956, 8963, 2893190860
			},
			.prefetch0 = 43969,
			.prefetch1 = 42683,
			.ram = muls_final_ram_2,
			.ram_len = 28,
		},
		.transactions = muls_transactions_2,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "003 MULS (d8, A2, Xn), D3 c7f2",
		.initial = {
			.regs = {
				3296332302, 4225836048, 3616941465, 615130999, 1526111222, 1778166000, 813607958, 3208313602, 2639481734, 1175879430, 2803274912, 5773045, 3401238028, 1712098898, 362954771, 15922298, 8612144, 33542, 14004956
			},
			.prefetch0 = 51186,
			.prefetch1 = 47053,
			.ram = muls_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3296332302, 4225836048, 3616941465, 319901392, 1526111222, 1778166000, 813607958, 3208313602, 2639481734, 1175879430, 2803274912, 5773045, 3401238028, 1712098898, 362954771, 15922298, 8612144, 33536, 14004960
			},
			.prefetch0 = 43292,
			.prefetch1 = 37170,
			.ram = muls_final_ram_3,
			.ram_len = 10,
		},
		.transactions = muls_transactions_3,
		.transactions_len = 5,
		.lenght = 60,
	},
	{
		.name = "004 MULS (A1)+, D2 c5d9",
		.initial = {
			.regs = {
				3959339868, 1536193645, 323333829, 1132169863, 1034792647, 2538341406, 4014147625, 2879184669, 3821398467, 2286617416, 4166102318, 4136981180, 2108365162, 3799827015, 1453027975, 16451894, 15983268, 41986, 1454450
			},
			.prefetch0 = 50649,
			.prefetch1 = 62415,
			.ram = muls_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3959339868, 1536193645, 317664420, 1132169863, 1034792647, 2538341406, 4014147625, 2879184669, 3821398467, 2286617418, 4166102318, 4136981180, 2108365162, 3799827015, 1453027975, 16451894, 15983268, 41984, 1454452
			},
			.prefetch0 = 62415,
			.prefetch1 = 53973,
			.ram = muls_final_ram_4,
			.ram_len = 8,
		},
		.transactions = muls_transactions_4,
		.transactions_len = 3,
		.lenght = 60,
	},
	{
		.name = "005 MULS (A0), D4 c9d0",
		.initial = {
			.regs = {
				3255857264, 2951905428, 1722165610, 547989137, 2949835783, 3209897225, 3285610911, 1585063464, 552243911, 258199371, 2529992074, 3614881605, 114557279, 4241731135, 1369215444, 1931582, 16006124, 5, 10868012
			},
			.prefetch0 = 51664,
			.prefetch1 = 46418,
			.ram = muls_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3255857264, 2951905428, 1722165610, 547989137, 2949835783, 3209897225, 3285610911, 1585063464, 552243911, 258199371, 2529992074, 3614881605, 114557279, 4241731135, 1369215444, 1931582, 16006110, 8197, 4216121256
			},
			.prefetch0 = 54648,
			.prefetch1 = 7328,
			.ram = muls_final_ram_5,
			.ram_len = 26,
		},
		.transactions = muls_transactions_5,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "006 MULS (A7)+, D3 c7df",
		.initial = {
			.regs = {
				960440694, 480870093, 2702847607, 697928916, 4188252785, 1304563579, 2747725036, 1004744345, 693615949, 661485989, 1767100515, 3745166358, 187882710, 543523070, 4242725531, 3106964, 11117908, 34324, 7115402
			},
			.prefetch0 = 51167,
			.prefetch1 = 3838,
			.ram = muls_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				960440694, 480870093, 2702847607, 907340616, 4188252785, 1304563579, 2747725036, 1004744345, 693615949, 661485989, 1767100515, 3745166358, 187882710, 543523070, 4242725531, 3106966, 11117908, 34320, 7115404
			},
			.prefetch0 = 3838,
			.prefetch1 = 32446,
			.ram = muls_final_ram_6,
			.ram_len = 8,
		},
		.transactions = muls_transactions_6,
		.transactions_len = 3,
		.lenght = 56,
	},
	{
		.name = "007 MULS (A1)+, D6 cdd9",
		.initial = {
			.regs = {
				2237139038, 2453833950, 4120255154, 1588032807, 1601258119, 495992854, 1964706993, 138983294, 716677868, 3742852153, 1227040510, 900073979, 2523739490, 3896562203, 4003641013, 7288734, 6329908, 10005, 1328338
			},
			.prefetch0 = 52697,
			.prefetch1 = 6911,
			.ram = muls_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2237139038, 2453833950, 4120255154, 1588032807, 1601258119, 495992854, 1964706993, 138983294, 716677868, 3742852155, 1227040510, 900073979, 2523739490, 3896562203, 4003641013, 7288734, 6329894, 10005, 3109820916
			},
			.prefetch0 = 42034,
			.prefetch1 = 28849,
			.ram = muls_final_ram_7,
			.ram_len = 26,
		},
		.transactions = muls_transactions_7,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "008 MULS (d16, A4), D3 c7ec",
		.initial = {
			.regs = {
				3764729228, 32410653, 1038641262, 1349274071, 4195039455, 2918897530, 3071604119, 3659904013, 1719748366, 2026021061, 1093947964, 710085991, 3562162363, 2123299547, 2291637224, 15636386, 3404960, 42764, 2180288
			},
			.prefetch0 = 51180,
			.prefetch1 = 46487,
			.ram = muls_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3764729228, 32410653, 1038641262, 3889327819, 4195039455, 2918897530, 3071604119, 3659904013, 1719748366, 2026021061, 1093947964, 710085991, 3562162363, 2123299547, 2291637224, 15636386, 3404960, 42760, 2180292
			},
			.prefetch0 = 14277,
			.prefetch1 = 32034,
			.ram = muls_final_ram_8,
			.ram_len = 10,
		},
		.transactions = muls_transactions_8,
		.transactions_len = 4,
		.lenght = 68,
	},
	{
		.name = "009 MULS (d16, A2), D4 c9ea",
		.initial = {
			.regs = {
				1954974071, 3283500006, 2650055118, 1177807590, 1852994727, 2831586079, 4062836034, 3961793668, 3197406953, 1705704669, 1873372881, 3260692136, 3882125404, 3355704837, 3797428900, 612040, 720192, 8476, 4904598
			},
			.prefetch0 = 51690,
			.prefetch1 = 23061,
			.ram = muls_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1954974071, 3283500006, 2650055118, 1177807590, 3688121273, 2831586079, 4062836034, 3961793668, 3197406953, 1705704669, 1873372881, 3260692136, 3882125404, 3355704837, 3797428900, 612040, 720192, 8472, 4904602
			},
			.prefetch0 = 21524,
			.prefetch1 = 29642,
			.ram = muls_final_ram_9,
			.ram_len = 10,
		},
		.transactions = muls_transactions_9,
		.transactions_len = 4,
		.lenght = 60,
	},
	{
		.name = "010 MULS (d16, A3), D3 c7eb",
		.initial = {
			.regs = {
				1088155736, 1247968846, 1968044106, 2839752328, 1315766925, 3684061494, 1323794082, 3644911508, 2291096080, 4279417690, 3710158429, 3400976602, 1409481215, 1117363441, 1699020827, 13850498, 6212746, 34569, 4563808
			},
			.prefetch0 = 51179,
			.prefetch1 = 34068,
			.ram = muls_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1088155736, 1247968846, 1968044106, 63062128, 1315766925, 3684061494, 1323794082, 3644911508, 2291096080, 4279417690, 3710158429, 3400976602, 1409481215, 1117363441, 1699020827, 13850498, 6212746, 34560, 4563812
			},
			.prefetch0 = 25249,
			.prefetch1 = 48256,
			.ram = muls_final_ram_10,
			.ram_len = 10,
		},
		.transactions = muls_transactions_10,
		.transactions_len = 4,
		.lenght = 66,
	},
	{
		.name = "011 MULS D4, D1 c3c4",
		.initial = {
			.regs = {
				632899429, 2526295171, 390022081, 777547397, 3497970656, 833152572, 4127235777, 584611013, 3815161860, 1843194907, 775583283, 2924837147, 2775774515, 4173178538, 654847490, 6208694, 2653640, 32782, 5316940
			},
			.prefetch0 = 50116,
			.prefetch1 = 35567,
			.ram = muls_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				632899429, 4115583904, 390022081, 777547397, 3497970656, 833152572, 4127235777, 584611013, 3815161860, 1843194907, 775583283, 2924837147, 2775774515, 4173178538, 654847490, 6208694, 2653640, 32776, 5316942
			},
			.prefetch0 = 35567,
			.prefetch1 = 19329,
			.ram = muls_final_ram_11,
			.ram_len = 6,
		},
		.transactions = muls_transactions_11,
		.transactions_len = 2,
		.lenght = 48,
	},
	{
		.name = "012 MULS D6, D5 cbc6",
		.initial = {
			.regs = {
				2142310144, 479820703, 899611478, 2431185398, 448759855, 2017096627, 2436732467, 4196537670, 4170505070, 2830782924, 4092131222, 1195735218, 4103345226, 3016308363, 467114154, 16731378, 10691374, 8988, 12435276
			},
			.prefetch0 = 52166,
			.prefetch1 = 35432,
			.ram = muls_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2142310144, 479820703, 899611478, 2431185398, 448759855, 3492736681, 2436732467, 4196537670, 4170505070, 2830782924, 4092131222, 1195735218, 4103345226, 3016308363, 467114154, 16731378, 10691374, 8984, 12435278
			},
			.prefetch0 = 35432,
			.prefetch1 = 4686,
			.ram = muls_final_ram_12,
			.ram_len = 6,
		},
		.transactions = muls_transactions_12,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "013 MULS -(A0), D0 c1e0",
		.initial = {
			.regs = {
				1982981057, 3046140086, 2495340785, 2553935736, 1980780454, 2546763651, 722240304, 2112721105, 3363339891, 3045698099, 2515459299, 2863398044, 1530615349, 1508598728, 4184404620, 2476184, 14057756, 42759, 10918998
			},
			.prefetch0 = 49632,
			.prefetch1 = 8002,
			.ram = muls_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1982981057, 3046140086, 2495340785, 2553935736, 1980780454, 2546763651, 722240304, 2112721105, 3363339889, 3045698099, 2515459299, 2863398044, 1530615349, 1508598728, 4184404620, 2476184, 14057742, 9991, 1569494740
			},
			.prefetch0 = 16091,
			.prefetch1 = 39166,
			.ram = muls_final_ram_13,
			.ram_len = 26,
		},
		.transactions = muls_transactions_13,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "014 MULS (A6)+, D5 cbde",
		.initial = {
			.regs = {
				1545315210, 1518533513, 4000748099, 2017894281, 2190164446, 3168008164, 82482347, 574186138, 284389376, 2160468844, 2599456610, 3051268830, 3301175587, 1874092570, 2358172331, 10401824, 11188340, 33818, 6659848
			},
			.prefetch0 = 52190,
			.prefetch1 = 11077,
			.ram = muls_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1545315210, 1518533513, 4000748099, 2017894281, 2190164446, 3168008164, 82482347, 574186138, 284389376, 2160468844, 2599456610, 3051268830, 3301175587, 1874092570, 2358172333, 10401824, 11188326, 9242, 3401596968
			},
			.prefetch0 = 62295,
			.prefetch1 = 51967,
			.ram = muls_final_ram_14,
			.ram_len = 26,
		},
		.transactions = muls_transactions_14,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "015 MULS (d16, A6), D6 cdee",
		.initial = {
			.regs = {
				3168102344, 2529755595, 3169640360, 1535878515, 4172802789, 4202953076, 1911237099, 270413895, 453730196, 258758391, 1085343874, 2196834309, 778084447, 3293261296, 644594210, 4949234, 10608394, 1795, 12302316
			},
			.prefetch0 = 52718,
			.prefetch1 = 47382,
			.ram = muls_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3168102344, 2529755595, 3169640360, 1535878515, 4172802789, 4202953076, 4082193028, 270413895, 453730196, 258758391, 1085343874, 2196834309, 778084447, 3293261296, 644594210, 4949234, 10608394, 1800, 12302320
			},
			.prefetch0 = 5889,
			.prefetch1 = 7566,
			.ram = muls_final_ram_15,
			.ram_len = 10,
		},
		.transactions = muls_transactions_15,
		.transactions_len = 4,
		.lenght = 64,
	},
};

#endif /* RBT_MULS_H */