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

static const SST_RamByte muls_initial_ram_16[] = {
		{ .addr = 0xe8acb0, .byte = 0xc9 },
		{ .addr = 0xe8acb1, .byte = 0xf0 },
		{ .addr = 0xe8acb2, .byte = 0x24 },
		{ .addr = 0xe8acb3, .byte = 0x4f },
		{ .addr = 0xe8acb4, .byte = 0x68 },
		{ .addr = 0xe8acb5, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0x97 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0x462fbc, .byte = 0x25 },
		{ .addr = 0x462fbd, .byte = 0xfd },
		{ .addr = 0x462fbe, .byte = 0xf7 },
		{ .addr = 0x462fbf, .byte = 0xcb }
};

static const SST_RamByte muls_final_ram_16[] = {
		{ .addr = 0xe8acb0, .byte = 0xc9 },
		{ .addr = 0xe8acb1, .byte = 0xf0 },
		{ .addr = 0xe8acb2, .byte = 0x24 },
		{ .addr = 0xe8acb3, .byte = 0x4f },
		{ .addr = 0xe8acb4, .byte = 0x68 },
		{ .addr = 0xe8acb5, .byte = 0x32 },
		{ .addr = 0x0afe74, .byte = 0xac },
		{ .addr = 0x0afe75, .byte = 0xb2 },
		{ .addr = 0x0afe70, .byte = 0x27 },
		{ .addr = 0x0afe71, .byte = 0x16 },
		{ .addr = 0x0afe72, .byte = 0x00 },
		{ .addr = 0x0afe73, .byte = 0xe8 },
		{ .addr = 0x0afe6e, .byte = 0xc9 },
		{ .addr = 0x0afe6f, .byte = 0xf0 },
		{ .addr = 0x0afe6c, .byte = 0x35 },
		{ .addr = 0x0afe6d, .byte = 0xff },
		{ .addr = 0x0afe68, .byte = 0xc9 },
		{ .addr = 0x0afe69, .byte = 0xf5 },
		{ .addr = 0x0afe6a, .byte = 0xa8 },
		{ .addr = 0x0afe6b, .byte = 0x54 },
		{ .addr = 0x00000c, .byte = 0x97 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0x462fbc, .byte = 0x25 },
		{ .addr = 0x462fbd, .byte = 0xfd },
		{ .addr = 0x462fbe, .byte = 0xf7 },
		{ .addr = 0x462fbf, .byte = 0xcb }
};

static const SST_Transaction muls_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15248564, .data = 26674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5518846, .data = 12191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 720500, .data = 44210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 720496, .data = 10006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 720498, .data = 232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 720494, .data = 51696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 720492, .data = 13823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 720488, .data = 51701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 720490, .data = 43092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38726, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4599740, .data = 9725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4599742, .data = 63435, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_17[] = {
		{ .addr = 0x5c09d0, .byte = 0xc5 },
		{ .addr = 0x5c09d1, .byte = 0xdb },
		{ .addr = 0x5c09d2, .byte = 0x5c },
		{ .addr = 0x5c09d3, .byte = 0x62 },
		{ .addr = 0xb52028, .byte = 0xff },
		{ .addr = 0xb52029, .byte = 0xc9 },
		{ .addr = 0x5c09d4, .byte = 0x09 },
		{ .addr = 0x5c09d5, .byte = 0x43 }
};

static const SST_RamByte muls_final_ram_17[] = {
		{ .addr = 0x5c09d0, .byte = 0xc5 },
		{ .addr = 0x5c09d1, .byte = 0xdb },
		{ .addr = 0x5c09d2, .byte = 0x5c },
		{ .addr = 0x5c09d3, .byte = 0x62 },
		{ .addr = 0xb52028, .byte = 0xff },
		{ .addr = 0xb52029, .byte = 0xc9 },
		{ .addr = 0x5c09d4, .byte = 0x09 },
		{ .addr = 0x5c09d5, .byte = 0x43 }
};

static const SST_Transaction muls_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11870248, .data = 65481, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6031828, .data = 2371, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte muls_initial_ram_18[] = {
		{ .addr = 0x0131be, .byte = 0xcf },
		{ .addr = 0x0131bf, .byte = 0xc3 },
		{ .addr = 0x0131c0, .byte = 0x3b },
		{ .addr = 0x0131c1, .byte = 0x16 },
		{ .addr = 0x0131c2, .byte = 0x37 },
		{ .addr = 0x0131c3, .byte = 0x85 }
};

static const SST_RamByte muls_final_ram_18[] = {
		{ .addr = 0x0131be, .byte = 0xcf },
		{ .addr = 0x0131bf, .byte = 0xc3 },
		{ .addr = 0x0131c0, .byte = 0x3b },
		{ .addr = 0x0131c1, .byte = 0x16 },
		{ .addr = 0x0131c2, .byte = 0x37 },
		{ .addr = 0x0131c3, .byte = 0x85 }
};

static const SST_Transaction muls_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 78274, .data = 14213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte muls_initial_ram_19[] = {
		{ .addr = 0x5d3420, .byte = 0xcf },
		{ .addr = 0x5d3421, .byte = 0xdc },
		{ .addr = 0x5d3422, .byte = 0x7f },
		{ .addr = 0x5d3423, .byte = 0x86 },
		{ .addr = 0x757ca0, .byte = 0x8b },
		{ .addr = 0x757ca1, .byte = 0xcc },
		{ .addr = 0x5d3424, .byte = 0x6b },
		{ .addr = 0x5d3425, .byte = 0x53 }
};

static const SST_RamByte muls_final_ram_19[] = {
		{ .addr = 0x5d3420, .byte = 0xcf },
		{ .addr = 0x5d3421, .byte = 0xdc },
		{ .addr = 0x5d3422, .byte = 0x7f },
		{ .addr = 0x5d3423, .byte = 0x86 },
		{ .addr = 0x757ca0, .byte = 0x8b },
		{ .addr = 0x757ca1, .byte = 0xcc },
		{ .addr = 0x5d3424, .byte = 0x6b },
		{ .addr = 0x5d3425, .byte = 0x53 }
};

static const SST_Transaction muls_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7699616, .data = 35788, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6108196, .data = 27475, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte muls_initial_ram_20[] = {
		{ .addr = 0x5ad03c, .byte = 0xc3 },
		{ .addr = 0x5ad03d, .byte = 0xfa },
		{ .addr = 0x5ad03e, .byte = 0x39 },
		{ .addr = 0x5ad03f, .byte = 0x9b },
		{ .addr = 0x5ad040, .byte = 0xa9 },
		{ .addr = 0x5ad041, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0x46 },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x68 },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x206816, .byte = 0xc0 },
		{ .addr = 0x206817, .byte = 0xf7 },
		{ .addr = 0x206818, .byte = 0x9c },
		{ .addr = 0x206819, .byte = 0x66 }
};

static const SST_RamByte muls_final_ram_20[] = {
		{ .addr = 0x5ad03c, .byte = 0xc3 },
		{ .addr = 0x5ad03d, .byte = 0xfa },
		{ .addr = 0x5ad03e, .byte = 0x39 },
		{ .addr = 0x5ad03f, .byte = 0x9b },
		{ .addr = 0x5ad040, .byte = 0xa9 },
		{ .addr = 0x5ad041, .byte = 0x5e },
		{ .addr = 0x4f82d6, .byte = 0xd0 },
		{ .addr = 0x4f82d7, .byte = 0x3e },
		{ .addr = 0x4f82d2, .byte = 0xa7 },
		{ .addr = 0x4f82d3, .byte = 0x16 },
		{ .addr = 0x4f82d4, .byte = 0x00 },
		{ .addr = 0x4f82d5, .byte = 0x5a },
		{ .addr = 0x4f82d0, .byte = 0xc3 },
		{ .addr = 0x4f82d1, .byte = 0xfa },
		{ .addr = 0x4f82ce, .byte = 0x09 },
		{ .addr = 0x4f82cf, .byte = 0xd9 },
		{ .addr = 0x4f82ca, .byte = 0xc3 },
		{ .addr = 0x4f82cb, .byte = 0xf6 },
		{ .addr = 0x4f82cc, .byte = 0x00 },
		{ .addr = 0x4f82cd, .byte = 0x5b },
		{ .addr = 0x00000c, .byte = 0x46 },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x68 },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x206816, .byte = 0xc0 },
		{ .addr = 0x206817, .byte = 0xf7 },
		{ .addr = 0x206818, .byte = 0x9c },
		{ .addr = 0x206819, .byte = 0x66 }
};

static const SST_Transaction muls_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5951552, .data = 43358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5966296, .data = 24162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5210838, .data = 53310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5210834, .data = 42774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5210836, .data = 90, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5210832, .data = 50170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5210830, .data = 2521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5210826, .data = 50166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5210828, .data = 91, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 17952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2123798, .data = 49399, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2123800, .data = 40038, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_21[] = {
		{ .addr = 0x33b442, .byte = 0xc5 },
		{ .addr = 0x33b443, .byte = 0xc1 },
		{ .addr = 0x33b444, .byte = 0xe1 },
		{ .addr = 0x33b445, .byte = 0x8e },
		{ .addr = 0x33b446, .byte = 0x14 },
		{ .addr = 0x33b447, .byte = 0x72 }
};

static const SST_RamByte muls_final_ram_21[] = {
		{ .addr = 0x33b442, .byte = 0xc5 },
		{ .addr = 0x33b443, .byte = 0xc1 },
		{ .addr = 0x33b444, .byte = 0xe1 },
		{ .addr = 0x33b445, .byte = 0x8e },
		{ .addr = 0x33b446, .byte = 0x14 },
		{ .addr = 0x33b447, .byte = 0x72 }
};

static const SST_Transaction muls_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3388486, .data = 5234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte muls_initial_ram_22[] = {
		{ .addr = 0xf63f74, .byte = 0xcd },
		{ .addr = 0xf63f75, .byte = 0xfb },
		{ .addr = 0xf63f76, .byte = 0x83 },
		{ .addr = 0xf63f77, .byte = 0x5b },
		{ .addr = 0xf63f78, .byte = 0x5d },
		{ .addr = 0xf63f79, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0x3f },
		{ .addr = 0x00000d, .byte = 0xbc },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0xb6 },
		{ .addr = 0xbc04b6, .byte = 0x45 },
		{ .addr = 0xbc04b7, .byte = 0x9f },
		{ .addr = 0xbc04b8, .byte = 0x49 },
		{ .addr = 0xbc04b9, .byte = 0xd6 }
};

static const SST_RamByte muls_final_ram_22[] = {
		{ .addr = 0xf63f74, .byte = 0xcd },
		{ .addr = 0xf63f75, .byte = 0xfb },
		{ .addr = 0xf63f76, .byte = 0x83 },
		{ .addr = 0xf63f77, .byte = 0x5b },
		{ .addr = 0xf63f78, .byte = 0x5d },
		{ .addr = 0xf63f79, .byte = 0x53 },
		{ .addr = 0x36bfbe, .byte = 0x3f },
		{ .addr = 0x36bfbf, .byte = 0x76 },
		{ .addr = 0x36bfba, .byte = 0x82 },
		{ .addr = 0x36bfbb, .byte = 0x10 },
		{ .addr = 0x36bfbc, .byte = 0x00 },
		{ .addr = 0x36bfbd, .byte = 0xf6 },
		{ .addr = 0x36bfb8, .byte = 0xcd },
		{ .addr = 0x36bfb9, .byte = 0xfb },
		{ .addr = 0x36bfb6, .byte = 0x27 },
		{ .addr = 0x36bfb7, .byte = 0xdb },
		{ .addr = 0x36bfb2, .byte = 0xcd },
		{ .addr = 0x36bfb3, .byte = 0xf2 },
		{ .addr = 0x36bfb4, .byte = 0x00 },
		{ .addr = 0x36bfb5, .byte = 0xf6 },
		{ .addr = 0x00000c, .byte = 0x3f },
		{ .addr = 0x00000d, .byte = 0xbc },
		{ .addr = 0x00000e, .byte = 0x04 },
		{ .addr = 0x00000f, .byte = 0xb6 },
		{ .addr = 0xbc04b6, .byte = 0x45 },
		{ .addr = 0xbc04b7, .byte = 0x9f },
		{ .addr = 0xbc04b8, .byte = 0x49 },
		{ .addr = 0xbc04b9, .byte = 0xd6 }
};

static const SST_Transaction muls_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16138104, .data = 23891, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16132058, .data = 29370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3588030, .data = 16246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3588026, .data = 33296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3588028, .data = 246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3588024, .data = 52731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3588022, .data = 10203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3588018, .data = 52722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3588020, .data = 246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12321974, .data = 17823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12321976, .data = 18902, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_23[] = {
		{ .addr = 0x430f46, .byte = 0xcb },
		{ .addr = 0x430f47, .byte = 0xc4 },
		{ .addr = 0x430f48, .byte = 0x50 },
		{ .addr = 0x430f49, .byte = 0x87 },
		{ .addr = 0x430f4a, .byte = 0x1e },
		{ .addr = 0x430f4b, .byte = 0xf8 }
};

static const SST_RamByte muls_final_ram_23[] = {
		{ .addr = 0x430f46, .byte = 0xcb },
		{ .addr = 0x430f47, .byte = 0xc4 },
		{ .addr = 0x430f48, .byte = 0x50 },
		{ .addr = 0x430f49, .byte = 0x87 },
		{ .addr = 0x430f4a, .byte = 0x1e },
		{ .addr = 0x430f4b, .byte = 0xf8 }
};

static const SST_Transaction muls_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4394826, .data = 7928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte muls_initial_ram_24[] = {
		{ .addr = 0xf482c4, .byte = 0xcf },
		{ .addr = 0xf482c5, .byte = 0xd9 },
		{ .addr = 0xf482c6, .byte = 0x01 },
		{ .addr = 0xf482c7, .byte = 0xc9 },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0xa0 },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0x56a0f2, .byte = 0x33 },
		{ .addr = 0x56a0f3, .byte = 0x64 },
		{ .addr = 0x56a0f4, .byte = 0x5b },
		{ .addr = 0x56a0f5, .byte = 0xd1 }
};

static const SST_RamByte muls_final_ram_24[] = {
		{ .addr = 0xf482c4, .byte = 0xcf },
		{ .addr = 0xf482c5, .byte = 0xd9 },
		{ .addr = 0xf482c6, .byte = 0x01 },
		{ .addr = 0xf482c7, .byte = 0xc9 },
		{ .addr = 0x297b40, .byte = 0x82 },
		{ .addr = 0x297b41, .byte = 0xc6 },
		{ .addr = 0x297b3c, .byte = 0x86 },
		{ .addr = 0x297b3d, .byte = 0x16 },
		{ .addr = 0x297b3e, .byte = 0x00 },
		{ .addr = 0x297b3f, .byte = 0xf4 },
		{ .addr = 0x297b3a, .byte = 0xcf },
		{ .addr = 0x297b3b, .byte = 0xd9 },
		{ .addr = 0x297b38, .byte = 0x66 },
		{ .addr = 0x297b39, .byte = 0x37 },
		{ .addr = 0x297b34, .byte = 0xcf },
		{ .addr = 0x297b35, .byte = 0xd1 },
		{ .addr = 0x297b36, .byte = 0xd2 },
		{ .addr = 0x297b37, .byte = 0x16 },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0xa0 },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0x56a0f2, .byte = 0x33 },
		{ .addr = 0x56a0f3, .byte = 0x64 },
		{ .addr = 0x56a0f4, .byte = 0x5b },
		{ .addr = 0x56a0f5, .byte = 0xd1 }
};

static const SST_Transaction muls_transactions_24[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1467958, .data = 20747, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2718528, .data = 33478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2718524, .data = 34326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2718526, .data = 244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2718522, .data = 53209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2718520, .data = 26167, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2718516, .data = 53201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2718518, .data = 53782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5677298, .data = 13156, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5677300, .data = 23505, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_25[] = {
		{ .addr = 0xc11176, .byte = 0xc3 },
		{ .addr = 0xc11177, .byte = 0xd7 },
		{ .addr = 0xc11178, .byte = 0x3a },
		{ .addr = 0xc11179, .byte = 0x72 },
		{ .addr = 0xce2a5c, .byte = 0x9e },
		{ .addr = 0xce2a5d, .byte = 0x3f },
		{ .addr = 0xc1117a, .byte = 0xc3 },
		{ .addr = 0xc1117b, .byte = 0xba }
};

static const SST_RamByte muls_final_ram_25[] = {
		{ .addr = 0xc11176, .byte = 0xc3 },
		{ .addr = 0xc11177, .byte = 0xd7 },
		{ .addr = 0xc11178, .byte = 0x3a },
		{ .addr = 0xc11179, .byte = 0x72 },
		{ .addr = 0xce2a5c, .byte = 0x9e },
		{ .addr = 0xce2a5d, .byte = 0x3f },
		{ .addr = 0xc1117a, .byte = 0xc3 },
		{ .addr = 0xc1117b, .byte = 0xba }
};

static const SST_Transaction muls_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13511260, .data = 40511, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12652922, .data = 50106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte muls_initial_ram_26[] = {
		{ .addr = 0x92617e, .byte = 0xc3 },
		{ .addr = 0x92617f, .byte = 0xfb },
		{ .addr = 0x926180, .byte = 0x22 },
		{ .addr = 0x926181, .byte = 0xfd },
		{ .addr = 0x926182, .byte = 0xbb },
		{ .addr = 0x926183, .byte = 0xc9 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0xea901a, .byte = 0xcc },
		{ .addr = 0xea901b, .byte = 0xda },
		{ .addr = 0xea901c, .byte = 0x2b },
		{ .addr = 0xea901d, .byte = 0xdb }
};

static const SST_RamByte muls_final_ram_26[] = {
		{ .addr = 0x92617e, .byte = 0xc3 },
		{ .addr = 0x92617f, .byte = 0xfb },
		{ .addr = 0x926180, .byte = 0x22 },
		{ .addr = 0x926181, .byte = 0xfd },
		{ .addr = 0x926182, .byte = 0xbb },
		{ .addr = 0x926183, .byte = 0xc9 },
		{ .addr = 0x845592, .byte = 0x61 },
		{ .addr = 0x845593, .byte = 0x80 },
		{ .addr = 0x84558e, .byte = 0x82 },
		{ .addr = 0x84558f, .byte = 0x0c },
		{ .addr = 0x845590, .byte = 0x00 },
		{ .addr = 0x845591, .byte = 0x92 },
		{ .addr = 0x84558c, .byte = 0xc3 },
		{ .addr = 0x84558d, .byte = 0xfb },
		{ .addr = 0x84558a, .byte = 0x33 },
		{ .addr = 0x84558b, .byte = 0x81 },
		{ .addr = 0x845586, .byte = 0xc3 },
		{ .addr = 0x845587, .byte = 0xf2 },
		{ .addr = 0x845588, .byte = 0x00 },
		{ .addr = 0x845589, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0xea901a, .byte = 0xcc },
		{ .addr = 0xea901b, .byte = 0xda },
		{ .addr = 0xea901c, .byte = 0x2b },
		{ .addr = 0xea901d, .byte = 0xdb }
};

static const SST_Transaction muls_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9593218, .data = 48073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9581440, .data = 28955, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8672658, .data = 24960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8672654, .data = 33292, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8672656, .data = 146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8672652, .data = 50171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8672650, .data = 13185, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8672646, .data = 50162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8672648, .data = 146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15372314, .data = 52442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15372316, .data = 11227, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_27[] = {
		{ .addr = 0xb283ec, .byte = 0xc1 },
		{ .addr = 0xb283ed, .byte = 0xc4 },
		{ .addr = 0xb283ee, .byte = 0x60 },
		{ .addr = 0xb283ef, .byte = 0x5c },
		{ .addr = 0xb283f0, .byte = 0xa4 },
		{ .addr = 0xb283f1, .byte = 0x5f }
};

static const SST_RamByte muls_final_ram_27[] = {
		{ .addr = 0xb283ec, .byte = 0xc1 },
		{ .addr = 0xb283ed, .byte = 0xc4 },
		{ .addr = 0xb283ee, .byte = 0x60 },
		{ .addr = 0xb283ef, .byte = 0x5c },
		{ .addr = 0xb283f0, .byte = 0xa4 },
		{ .addr = 0xb283f1, .byte = 0x5f }
};

static const SST_Transaction muls_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11699184, .data = 42079, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 42 },
};

static const SST_RamByte muls_initial_ram_28[] = {
		{ .addr = 0xf21e3c, .byte = 0xc3 },
		{ .addr = 0xf21e3d, .byte = 0xc4 },
		{ .addr = 0xf21e3e, .byte = 0x7e },
		{ .addr = 0xf21e3f, .byte = 0x9d },
		{ .addr = 0xf21e40, .byte = 0x35 },
		{ .addr = 0xf21e41, .byte = 0x95 }
};

static const SST_RamByte muls_final_ram_28[] = {
		{ .addr = 0xf21e3c, .byte = 0xc3 },
		{ .addr = 0xf21e3d, .byte = 0xc4 },
		{ .addr = 0xf21e3e, .byte = 0x7e },
		{ .addr = 0xf21e3f, .byte = 0x9d },
		{ .addr = 0xf21e40, .byte = 0x35 },
		{ .addr = 0xf21e41, .byte = 0x95 }
};

static const SST_Transaction muls_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15867456, .data = 13717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte muls_initial_ram_29[] = {
		{ .addr = 0xe89182, .byte = 0xc9 },
		{ .addr = 0xe89183, .byte = 0xd6 },
		{ .addr = 0xe89184, .byte = 0x90 },
		{ .addr = 0xe89185, .byte = 0x59 },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0xf9 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0x1af99e, .byte = 0xa8 },
		{ .addr = 0x1af99f, .byte = 0xfe },
		{ .addr = 0x1af9a0, .byte = 0x54 },
		{ .addr = 0x1af9a1, .byte = 0x46 }
};

static const SST_RamByte muls_final_ram_29[] = {
		{ .addr = 0xe89182, .byte = 0xc9 },
		{ .addr = 0xe89183, .byte = 0xd6 },
		{ .addr = 0xe89184, .byte = 0x90 },
		{ .addr = 0xe89185, .byte = 0x59 },
		{ .addr = 0x2a417a, .byte = 0x91 },
		{ .addr = 0x2a417b, .byte = 0x84 },
		{ .addr = 0x2a4176, .byte = 0x85 },
		{ .addr = 0x2a4177, .byte = 0x04 },
		{ .addr = 0x2a4178, .byte = 0x00 },
		{ .addr = 0x2a4179, .byte = 0xe8 },
		{ .addr = 0x2a4174, .byte = 0xc9 },
		{ .addr = 0x2a4175, .byte = 0xd6 },
		{ .addr = 0x2a4172, .byte = 0x72 },
		{ .addr = 0x2a4173, .byte = 0x1f },
		{ .addr = 0x2a416e, .byte = 0xc9 },
		{ .addr = 0x2a416f, .byte = 0xd1 },
		{ .addr = 0x2a4170, .byte = 0x8e },
		{ .addr = 0x2a4171, .byte = 0xed },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0xf9 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0x1af99e, .byte = 0xa8 },
		{ .addr = 0x1af99f, .byte = 0xfe },
		{ .addr = 0x1af9a0, .byte = 0x54 },
		{ .addr = 0x1af9a1, .byte = 0x46 }
};

static const SST_Transaction muls_transactions_29[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15561246, .data = 56219, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2769274, .data = 37252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2769270, .data = 34052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2769272, .data = 232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2769268, .data = 51670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2769266, .data = 29215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2769262, .data = 51665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2769264, .data = 36589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63902, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1767838, .data = 43262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1767840, .data = 21574, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_30[] = {
		{ .addr = 0xc796a0, .byte = 0xc7 },
		{ .addr = 0xc796a1, .byte = 0xf6 },
		{ .addr = 0xc796a2, .byte = 0x3e },
		{ .addr = 0xc796a3, .byte = 0xe0 },
		{ .addr = 0xc796a4, .byte = 0xe5 },
		{ .addr = 0xc796a5, .byte = 0x20 },
		{ .addr = 0x00000c, .byte = 0xa1 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xcab128, .byte = 0xdb },
		{ .addr = 0xcab129, .byte = 0x24 },
		{ .addr = 0xcab12a, .byte = 0xbd },
		{ .addr = 0xcab12b, .byte = 0x31 }
};

static const SST_RamByte muls_final_ram_30[] = {
		{ .addr = 0xc796a0, .byte = 0xc7 },
		{ .addr = 0xc796a1, .byte = 0xf6 },
		{ .addr = 0xc796a2, .byte = 0x3e },
		{ .addr = 0xc796a3, .byte = 0xe0 },
		{ .addr = 0xc796a4, .byte = 0xe5 },
		{ .addr = 0xc796a5, .byte = 0x20 },
		{ .addr = 0x8fa33c, .byte = 0x96 },
		{ .addr = 0x8fa33d, .byte = 0xa2 },
		{ .addr = 0x8fa338, .byte = 0x20 },
		{ .addr = 0x8fa339, .byte = 0x16 },
		{ .addr = 0x8fa33a, .byte = 0x00 },
		{ .addr = 0x8fa33b, .byte = 0xc7 },
		{ .addr = 0x8fa336, .byte = 0xc7 },
		{ .addr = 0x8fa337, .byte = 0xf6 },
		{ .addr = 0x8fa334, .byte = 0xdd },
		{ .addr = 0x8fa335, .byte = 0x67 },
		{ .addr = 0x8fa330, .byte = 0xc7 },
		{ .addr = 0x8fa331, .byte = 0xf5 },
		{ .addr = 0x8fa332, .byte = 0xaa },
		{ .addr = 0x8fa333, .byte = 0x0d },
		{ .addr = 0x00000c, .byte = 0xa1 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xcab128, .byte = 0xdb },
		{ .addr = 0xcab129, .byte = 0x24 },
		{ .addr = 0xcab12a, .byte = 0xbd },
		{ .addr = 0xcab12b, .byte = 0x31 }
};

static const SST_Transaction muls_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13080228, .data = 58656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 908646, .data = 1065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413436, .data = 38562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413432, .data = 8214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413434, .data = 199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413430, .data = 51190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413428, .data = 56679, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413424, .data = 51189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9413426, .data = 43533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 45352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13283624, .data = 56100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13283626, .data = 48433, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte muls_initial_ram_31[] = {
		{ .addr = 0xd43a74, .byte = 0xc5 },
		{ .addr = 0xd43a75, .byte = 0xc5 },
		{ .addr = 0xd43a76, .byte = 0xfe },
		{ .addr = 0xd43a77, .byte = 0x52 },
		{ .addr = 0xd43a78, .byte = 0x5a },
		{ .addr = 0xd43a79, .byte = 0xef }
};

static const SST_RamByte muls_final_ram_31[] = {
		{ .addr = 0xd43a74, .byte = 0xc5 },
		{ .addr = 0xd43a75, .byte = 0xc5 },
		{ .addr = 0xd43a76, .byte = 0xfe },
		{ .addr = 0xd43a77, .byte = 0x52 },
		{ .addr = 0xd43a78, .byte = 0x5a },
		{ .addr = 0xd43a79, .byte = 0xef }
};

static const SST_Transaction muls_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13908600, .data = 23279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

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
	{
		.name = "016 MULS (d8, A0, Xn), D4 c9f0",
		.initial = {
			.regs = {
				3207121683, 3044761066, 1241174409, 1384124125, 1088029423, 224541737, 748385892, 2563144717, 2824102951, 2283416861, 159284509, 371271288, 3688471878, 3026402560, 2135570656, 6249218, 720502, 10006, 15248564
			},
			.prefetch0 = 51696,
			.prefetch1 = 9295,
			.ram = muls_initial_ram_16,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3207121683, 3044761066, 1241174409, 1384124125, 1088029423, 224541737, 748385892, 2563144717, 2824102951, 2283416861, 159284509, 371271288, 3688471878, 3026402560, 2135570656, 6249218, 720488, 10006, 2537959360
			},
			.prefetch0 = 9725,
			.prefetch1 = 63435,
			.ram = muls_final_ram_16,
			.ram_len = 28,
		},
		.transactions = muls_transactions_16,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "017 MULS (A3)+, D2 c5db",
		.initial = {
			.regs = {
				222733841, 2607400302, 3587486580, 2534891997, 593274442, 3666059551, 3052926859, 2234707604, 3281104539, 3737348103, 2316213798, 1756700712, 2703725879, 1465178222, 982763571, 11100980, 5204494, 8732, 6031828
			},
			.prefetch0 = 50651,
			.prefetch1 = 23650,
			.ram = muls_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				222733841, 2607400302, 1077780, 2534891997, 593274442, 3666059551, 3052926859, 2234707604, 3281104539, 3737348103, 2316213798, 1756700714, 2703725879, 1465178222, 982763571, 11100980, 5204494, 8720, 6031830
			},
			.prefetch0 = 23650,
			.prefetch1 = 2371,
			.ram = muls_final_ram_17,
			.ram_len = 8,
		},
		.transactions = muls_transactions_17,
		.transactions_len = 3,
		.lenght = 52,
	},
	{
		.name = "018 MULS D3, D7 cfc3",
		.initial = {
			.regs = {
				3712347159, 11840857, 910866493, 3638142910, 2392208462, 793327023, 518608676, 2190226596, 3113847517, 2664781493, 1262205873, 4144295593, 3757391665, 3528574399, 3844719988, 3696034, 16754312, 33034, 78274
			},
			.prefetch0 = 53187,
			.prefetch1 = 15126,
			.ram = muls_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3712347159, 11840857, 910866493, 3638142910, 2392208462, 793327023, 518608676, 3990490552, 3113847517, 2664781493, 1262205873, 4144295593, 3757391665, 3528574399, 3844719988, 3696034, 16754312, 33032, 78276
			},
			.prefetch0 = 15126,
			.prefetch1 = 14213,
			.ram = muls_final_ram_18,
			.ram_len = 6,
		},
		.transactions = muls_transactions_18,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "019 MULS (A4)+, D7 cfdc",
		.initial = {
			.regs = {
				2757804154, 1270429681, 2713211154, 2648578473, 4269850921, 539407681, 1434835536, 2810183635, 563690981, 591541159, 29019806, 770433441, 2390064288, 2016614803, 422405684, 14544888, 16522588, 33299, 6108196
			},
			.prefetch0 = 53212,
			.prefetch1 = 32646,
			.ram = muls_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2757804154, 1270429681, 2713211154, 2648578473, 4269850921, 539407681, 1434835536, 1338660, 563690981, 591541159, 29019806, 770433441, 2390064290, 2016614803, 422405684, 14544888, 16522588, 33296, 6108198
			},
			.prefetch0 = 32646,
			.prefetch1 = 27475,
			.ram = muls_final_ram_19,
			.ram_len = 8,
		},
		.transactions = muls_transactions_19,
		.transactions_len = 3,
		.lenght = 56,
	},
	{
		.name = "020 MULS (d16, PC), D1 c3fa",
		.initial = {
			.regs = {
				3081430747, 2606315887, 155066567, 1585342812, 2480002879, 407769919, 3938844643, 1878958179, 564021044, 253634612, 1177748985, 150336855, 3359748648, 4203643177, 1211692884, 16701690, 5210840, 42774, 5951552
			},
			.prefetch0 = 50170,
			.prefetch1 = 14747,
			.ram = muls_initial_ram_20,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3081430747, 2606315887, 155066567, 1585342812, 2480002879, 407769919, 3938844643, 1878958179, 564021044, 253634612, 1177748985, 150336855, 3359748648, 4203643177, 1211692884, 16701690, 5210826, 10006, 1176528922
			},
			.prefetch0 = 49399,
			.prefetch1 = 40038,
			.ram = muls_final_ram_20,
			.ram_len = 28,
		},
		.transactions = muls_transactions_20,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "021 MULS D1, D2 c5c1",
		.initial = {
			.regs = {
				57814038, 3025650157, 2578141865, 4066567468, 2950815254, 2211162217, 2148482806, 3099190136, 1077211756, 1985171396, 2832630493, 3807797625, 2712548810, 1990711653, 1004548005, 11191592, 7377654, 8969, 3388486
			},
			.prefetch0 = 50625,
			.prefetch1 = 57742,
			.ram = muls_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				57814038, 3025650157, 3958697845, 4066567468, 2950815254, 2211162217, 2148482806, 3099190136, 1077211756, 1985171396, 2832630493, 3807797625, 2712548810, 1990711653, 1004548005, 11191592, 7377654, 8968, 3388488
			},
			.prefetch0 = 57742,
			.prefetch1 = 5234,
			.ram = muls_final_ram_21,
			.ram_len = 6,
		},
		.transactions = muls_transactions_21,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "022 MULS (d8, PC, Xn), D6 cdfb",
		.initial = {
			.regs = {
				2245272849, 1102251752, 1955461151, 3357984377, 2538404769, 217835093, 2688630341, 2599954769, 3350980618, 3564971510, 3134982694, 707116941, 3653887049, 1189483135, 2635980016, 15579028, 3588032, 33296, 16138104
			},
			.prefetch0 = 52731,
			.prefetch1 = 33627,
			.ram = muls_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2245272849, 1102251752, 1955461151, 3357984377, 2538404769, 217835093, 2688630341, 2599954769, 3350980618, 3564971510, 3134982694, 707116941, 3653887049, 1189483135, 2635980016, 15579028, 3588018, 8720, 1069286586
			},
			.prefetch0 = 17823,
			.prefetch1 = 18902,
			.ram = muls_final_ram_22,
			.ram_len = 28,
		},
		.transactions = muls_transactions_22,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "023 MULS D4, D5 cbc4",
		.initial = {
			.regs = {
				463974764, 3868331988, 1682032536, 1621971788, 3120817411, 1003735621, 3158034295, 511825599, 1189266191, 1739205636, 1072229626, 2496464435, 4156600544, 3390007002, 1428231324, 3109616, 767980, 41730, 4394826
			},
			.prefetch0 = 52164,
			.prefetch1 = 20615,
			.ram = muls_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				463974764, 3868331988, 1682032536, 1621971788, 3120817411, 95033295, 3158034295, 511825599, 1189266191, 1739205636, 1072229626, 2496464435, 4156600544, 3390007002, 1428231324, 3109616, 767980, 41728, 4394828
			},
			.prefetch0 = 20615,
			.prefetch1 = 7928,
			.ram = muls_final_ram_23,
			.ram_len = 6,
		},
		.transactions = muls_transactions_23,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "024 MULS (A1)+, D7 cfd9",
		.initial = {
			.regs = {
				2691775587, 294880596, 4260891909, 1396850309, 3485594065, 3960070821, 3089854113, 563113805, 644323053, 3524683319, 1495517908, 3372732114, 1870250414, 1853228164, 1937990047, 12638512, 2718530, 34326, 16024264
			},
			.prefetch0 = 53209,
			.prefetch1 = 457,
			.ram = muls_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2691775587, 294880596, 4260891909, 1396850309, 3485594065, 3960070821, 3089854113, 563113805, 644323053, 3524683321, 1495517908, 3372732114, 1870250414, 1853228164, 1937990047, 12638512, 2718516, 9750, 2488705270
			},
			.prefetch0 = 13156,
			.prefetch1 = 23505,
			.ram = muls_final_ram_24,
			.ram_len = 26,
		},
		.transactions = muls_transactions_24,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "025 MULS (A7), D1 c3d7",
		.initial = {
			.regs = {
				386791611, 2858166461, 1680437496, 1956069049, 1266753319, 254002334, 3800804923, 1350570160, 1559891257, 3336922017, 2598044798, 1828966228, 2053841960, 2628120980, 4117086002, 13511260, 16037366, 34327, 12652922
			},
			.prefetch0 = 50135,
			.prefetch1 = 14962,
			.ram = muls_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				386791611, 4033981571, 1680437496, 1956069049, 1266753319, 254002334, 3800804923, 1350570160, 1559891257, 3336922017, 2598044798, 1828966228, 2053841960, 2628120980, 4117086002, 13511260, 16037366, 34328, 12652924
			},
			.prefetch0 = 14962,
			.prefetch1 = 50106,
			.ram = muls_final_ram_25,
			.ram_len = 8,
		},
		.transactions = muls_transactions_25,
		.transactions_len = 3,
		.lenght = 52,
	},
	{
		.name = "026 MULS (d8, PC, Xn), D1 c3fb",
		.initial = {
			.regs = {
				1435705785, 957735414, 2371539460, 2183464610, 3940396971, 3458046671, 2606782748, 3662703675, 4134169057, 3586653865, 3174307972, 3334027510, 3774338983, 3429692350, 4081472620, 524820, 8672660, 33292, 9593218
			},
			.prefetch0 = 50171,
			.prefetch1 = 8957,
			.ram = muls_initial_ram_26,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1435705785, 957735414, 2371539460, 2183464610, 3940396971, 3458046671, 2606782748, 3662703675, 4134169057, 3586653865, 3174307972, 3334027510, 3774338983, 3429692350, 4081472620, 524820, 8672646, 8716, 2934607902
			},
			.prefetch0 = 52442,
			.prefetch1 = 11227,
			.ram = muls_final_ram_26,
			.ram_len = 28,
		},
		.transactions = muls_transactions_26,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "027 MULS D4, D0 c1c4",
		.initial = {
			.regs = {
				990199148, 591674812, 2533351384, 726210332, 4136598652, 1828072962, 2347829170, 4034810195, 2473137595, 1229148030, 1692588244, 1009887735, 1781309637, 3187907706, 928936053, 4813758, 16355382, 1042, 11699184
			},
			.prefetch0 = 49604,
			.prefetch1 = 24668,
			.ram = muls_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				501092432, 591674812, 2533351384, 726210332, 4136598652, 1828072962, 2347829170, 4034810195, 2473137595, 1229148030, 1692588244, 1009887735, 1781309637, 3187907706, 928936053, 4813758, 16355382, 1040, 11699186
			},
			.prefetch0 = 24668,
			.prefetch1 = 42079,
			.ram = muls_final_ram_27,
			.ram_len = 6,
		},
		.transactions = muls_transactions_27,
		.transactions_len = 2,
		.lenght = 46,
	},
	{
		.name = "028 MULS D4, D1 c3c4",
		.initial = {
			.regs = {
				4062046275, 2932534227, 520599283, 2740233258, 797021486, 2230467709, 283275314, 3108486690, 4038514089, 1737449256, 857797725, 79160956, 2930891194, 1836538146, 3867793344, 12434044, 6178746, 33562, 15867456
			},
			.prefetch0 = 50116,
			.prefetch1 = 32413,
			.ram = muls_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4062046275, 141242090, 520599283, 2740233258, 797021486, 2230467709, 283275314, 3108486690, 4038514089, 1737449256, 857797725, 79160956, 2930891194, 1836538146, 3867793344, 12434044, 6178746, 33552, 15867458
			},
			.prefetch0 = 32413,
			.prefetch1 = 13717,
			.ram = muls_final_ram_28,
			.ram_len = 6,
		},
		.transactions = muls_transactions_28,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "029 MULS (A6), D4 c9d6",
		.initial = {
			.regs = {
				1393046499, 591727907, 2077845173, 781961422, 3272825571, 396132033, 3023171694, 3530447166, 3105847701, 278525350, 254054777, 1185324100, 3291576282, 3286291823, 2397925919, 16180442, 2769276, 34052, 15241606
			},
			.prefetch0 = 51670,
			.prefetch1 = 36953,
			.ram = muls_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1393046499, 591727907, 2077845173, 781961422, 3272825571, 396132033, 3023171694, 3530447166, 3105847701, 278525350, 254054777, 1185324100, 3291576282, 3286291823, 2397925919, 16180442, 2769262, 9476, 421198242
			},
			.prefetch0 = 43262,
			.prefetch1 = 21574,
			.ram = muls_final_ram_29,
			.ram_len = 26,
		},
		.transactions = muls_transactions_29,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "030 MULS (d8, A6, Xn), D3 c7f6",
		.initial = {
			.regs = {
				1996961790, 2705039037, 922476782, 2078985025, 4204475146, 1642031413, 3790075728, 31847674, 4269975715, 3482758001, 2453714694, 1902126179, 2529688892, 3782232987, 774050374, 419788, 9413438, 8214, 13080228
			},
			.prefetch0 = 51190,
			.prefetch1 = 16096,
			.ram = muls_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1996961790, 2705039037, 922476782, 2078985025, 4204475146, 1642031413, 3790075728, 31847674, 4269975715, 3482758001, 2453714694, 1902126179, 2529688892, 3782232987, 774050374, 419788, 9413424, 8214, 2714415404
			},
			.prefetch0 = 56100,
			.prefetch1 = 48433,
			.ram = muls_final_ram_30,
			.ram_len = 28,
		},
		.transactions = muls_transactions_30,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "031 MULS D5, D2 c5c5",
		.initial = {
			.regs = {
				780106121, 2858978262, 2014633747, 3899901558, 3919926019, 39767111, 1254289993, 2869002209, 3797584807, 2302777250, 2265053684, 1265360208, 879870833, 2306005024, 271465712, 7780026, 4994956, 34051, 13908600
			},
			.prefetch0 = 50629,
			.prefetch1 = 65106,
			.ram = muls_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				780106121, 2858978262, 111608389, 3899901558, 3919926019, 39767111, 1254289993, 2869002209, 3797584807, 2302777250, 2265053684, 1265360208, 879870833, 2306005024, 271465712, 7780026, 4994956, 34048, 13908602
			},
			.prefetch0 = 65106,
			.prefetch1 = 23279,
			.ram = muls_final_ram_31,
			.ram_len = 6,
		},
		.transactions = muls_transactions_31,
		.transactions_len = 2,
		.lenght = 52,
	},
};

#endif /* RBT_MULS_H */