#ifndef RBT_MOVEB_H
#define RBT_MOVEB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte moveb_initial_ram_0[] = {
		{ .addr = 0x9bab1e, .byte = 0x1a },
		{ .addr = 0x9bab1f, .byte = 0xf7 },
		{ .addr = 0x9bab20, .byte = 0xf4 },
		{ .addr = 0x9bab21, .byte = 0x6c },
		{ .addr = 0x9bab22, .byte = 0x24 },
		{ .addr = 0x9bab23, .byte = 0xb9 },
		{ .addr = 0x413168, .byte = 0xb3 },
		{ .addr = 0x413169, .byte = 0x1c },
		{ .addr = 0x9bab24, .byte = 0x97 },
		{ .addr = 0x9bab25, .byte = 0x81 }
};

static const SST_RamByte moveb_final_ram_0[] = {
		{ .addr = 0x9bab1e, .byte = 0x1a },
		{ .addr = 0x9bab1f, .byte = 0xf7 },
		{ .addr = 0x9bab20, .byte = 0xf4 },
		{ .addr = 0x9bab21, .byte = 0x6c },
		{ .addr = 0x9bab22, .byte = 0x24 },
		{ .addr = 0x9bab23, .byte = 0xb9 },
		{ .addr = 0x413168, .byte = 0xb3 },
		{ .addr = 0x413169, .byte = 0x1c },
		{ .addr = 0xc321e2, .byte = 0x00 },
		{ .addr = 0xc321e3, .byte = 0xb3 },
		{ .addr = 0x9bab24, .byte = 0x97 },
		{ .addr = 0x9bab25, .byte = 0x81 }
};

static const SST_Transaction moveb_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10201890, .data = 9401, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4272488, .data = 45824, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12788194, .data = 179, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10201892, .data = 38785, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_1[] = {
		{ .addr = 0x23dbc0, .byte = 0x1a },
		{ .addr = 0x23dbc1, .byte = 0xb1 },
		{ .addr = 0x23dbc2, .byte = 0xc2 },
		{ .addr = 0x23dbc3, .byte = 0x7e },
		{ .addr = 0x23dbc4, .byte = 0xaa },
		{ .addr = 0x23dbc5, .byte = 0x0c },
		{ .addr = 0x6e799e, .byte = 0xe6 },
		{ .addr = 0x6e799f, .byte = 0x12 },
		{ .addr = 0x23dbc6, .byte = 0x7e },
		{ .addr = 0x23dbc7, .byte = 0x66 }
};

static const SST_RamByte moveb_final_ram_1[] = {
		{ .addr = 0x23dbc0, .byte = 0x1a },
		{ .addr = 0x23dbc1, .byte = 0xb1 },
		{ .addr = 0x23dbc2, .byte = 0xc2 },
		{ .addr = 0x23dbc3, .byte = 0x7e },
		{ .addr = 0x23dbc4, .byte = 0xaa },
		{ .addr = 0x23dbc5, .byte = 0x0c },
		{ .addr = 0x6e799e, .byte = 0xe6 },
		{ .addr = 0x6e799f, .byte = 0x12 },
		{ .addr = 0x1f7aec, .byte = 0x12 },
		{ .addr = 0x1f7aed, .byte = 0x00 },
		{ .addr = 0x23dbc6, .byte = 0x7e },
		{ .addr = 0x23dbc7, .byte = 0x66 }
};

static const SST_Transaction moveb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2350020, .data = 43532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7240094, .data = 18, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2063084, .data = 4608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2350022, .data = 32358, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_2[] = {
		{ .addr = 0xb1c95a, .byte = 0x19 },
		{ .addr = 0xb1c95b, .byte = 0x99 },
		{ .addr = 0xb1c95c, .byte = 0xac },
		{ .addr = 0xb1c95d, .byte = 0x60 },
		{ .addr = 0x7d5d50, .byte = 0xbc },
		{ .addr = 0x7d5d51, .byte = 0x39 },
		{ .addr = 0xb1c95e, .byte = 0x52 },
		{ .addr = 0xb1c95f, .byte = 0x64 },
		{ .addr = 0xb1c960, .byte = 0x6a },
		{ .addr = 0xb1c961, .byte = 0xd1 }
};

static const SST_RamByte moveb_final_ram_2[] = {
		{ .addr = 0xb1c95a, .byte = 0x19 },
		{ .addr = 0xb1c95b, .byte = 0x99 },
		{ .addr = 0xb1c95c, .byte = 0xac },
		{ .addr = 0xb1c95d, .byte = 0x60 },
		{ .addr = 0x7d5d50, .byte = 0xbc },
		{ .addr = 0x7d5d51, .byte = 0x39 },
		{ .addr = 0xb1c95e, .byte = 0x52 },
		{ .addr = 0xb1c95f, .byte = 0x64 },
		{ .addr = 0xeced9c, .byte = 0x00 },
		{ .addr = 0xeced9d, .byte = 0xbc },
		{ .addr = 0xb1c960, .byte = 0x6a },
		{ .addr = 0xb1c961, .byte = 0xd1 }
};

static const SST_Transaction moveb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8215888, .data = 48128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11651422, .data = 21092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15527324, .data = 188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11651424, .data = 27345, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_3[] = {
		{ .addr = 0x37a9b6, .byte = 0x1a },
		{ .addr = 0x37a9b7, .byte = 0x2e },
		{ .addr = 0x37a9b8, .byte = 0xf6 },
		{ .addr = 0x37a9b9, .byte = 0x5e },
		{ .addr = 0x37a9ba, .byte = 0xe6 },
		{ .addr = 0x37a9bb, .byte = 0x33 },
		{ .addr = 0x72af8e, .byte = 0x24 },
		{ .addr = 0x72af8f, .byte = 0xd6 },
		{ .addr = 0x37a9bc, .byte = 0x36 },
		{ .addr = 0x37a9bd, .byte = 0x5d }
};

static const SST_RamByte moveb_final_ram_3[] = {
		{ .addr = 0x37a9b6, .byte = 0x1a },
		{ .addr = 0x37a9b7, .byte = 0x2e },
		{ .addr = 0x37a9b8, .byte = 0xf6 },
		{ .addr = 0x37a9b9, .byte = 0x5e },
		{ .addr = 0x37a9ba, .byte = 0xe6 },
		{ .addr = 0x37a9bb, .byte = 0x33 },
		{ .addr = 0x72af8e, .byte = 0x24 },
		{ .addr = 0x72af8f, .byte = 0xd6 },
		{ .addr = 0x37a9bc, .byte = 0x36 },
		{ .addr = 0x37a9bd, .byte = 0x5d }
};

static const SST_Transaction moveb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3647930, .data = 58931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7516046, .data = 9216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3647932, .data = 13917, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_4[] = {
		{ .addr = 0x5c023c, .byte = 0x1e },
		{ .addr = 0x5c023d, .byte = 0x14 },
		{ .addr = 0x5c023e, .byte = 0x63 },
		{ .addr = 0x5c023f, .byte = 0x66 },
		{ .addr = 0x050eee, .byte = 0x70 },
		{ .addr = 0x050eef, .byte = 0xc0 },
		{ .addr = 0x5c0240, .byte = 0x8c },
		{ .addr = 0x5c0241, .byte = 0x93 }
};

static const SST_RamByte moveb_final_ram_4[] = {
		{ .addr = 0x5c023c, .byte = 0x1e },
		{ .addr = 0x5c023d, .byte = 0x14 },
		{ .addr = 0x5c023e, .byte = 0x63 },
		{ .addr = 0x5c023f, .byte = 0x66 },
		{ .addr = 0x050eee, .byte = 0x70 },
		{ .addr = 0x050eef, .byte = 0xc0 },
		{ .addr = 0x5c0240, .byte = 0x8c },
		{ .addr = 0x5c0241, .byte = 0x93 }
};

static const SST_Transaction moveb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 331502, .data = 192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6029888, .data = 35987, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_5[] = {
		{ .addr = 0x00a862, .byte = 0x13 },
		{ .addr = 0x00a863, .byte = 0x97 },
		{ .addr = 0x00a864, .byte = 0x81 },
		{ .addr = 0x00a865, .byte = 0x67 },
		{ .addr = 0x7973ee, .byte = 0x54 },
		{ .addr = 0x7973ef, .byte = 0x19 },
		{ .addr = 0x00a866, .byte = 0x62 },
		{ .addr = 0x00a867, .byte = 0x53 },
		{ .addr = 0x00a868, .byte = 0x07 },
		{ .addr = 0x00a869, .byte = 0x84 }
};

static const SST_RamByte moveb_final_ram_5[] = {
		{ .addr = 0x00a862, .byte = 0x13 },
		{ .addr = 0x00a863, .byte = 0x97 },
		{ .addr = 0x00a864, .byte = 0x81 },
		{ .addr = 0x00a865, .byte = 0x67 },
		{ .addr = 0x7973ee, .byte = 0x54 },
		{ .addr = 0x7973ef, .byte = 0x19 },
		{ .addr = 0x00a866, .byte = 0x62 },
		{ .addr = 0x00a867, .byte = 0x53 },
		{ .addr = 0xf6ce64, .byte = 0x00 },
		{ .addr = 0xf6ce65, .byte = 0x54 },
		{ .addr = 0x00a868, .byte = 0x07 },
		{ .addr = 0x00a869, .byte = 0x84 }
};

static const SST_Transaction moveb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7959534, .data = 21504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 43110, .data = 25171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174692, .data = 84, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 43112, .data = 1924, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_6[] = {
		{ .addr = 0x689240, .byte = 0x13 },
		{ .addr = 0x689241, .byte = 0xf6 },
		{ .addr = 0x689242, .byte = 0x83 },
		{ .addr = 0x689243, .byte = 0x7f },
		{ .addr = 0x689244, .byte = 0xab },
		{ .addr = 0x689245, .byte = 0xd7 },
		{ .addr = 0xcd7e44, .byte = 0xd1 },
		{ .addr = 0xcd7e45, .byte = 0x87 },
		{ .addr = 0x689246, .byte = 0x6f },
		{ .addr = 0x689247, .byte = 0x4f },
		{ .addr = 0x689248, .byte = 0xd1 },
		{ .addr = 0x689249, .byte = 0x92 },
		{ .addr = 0x68924a, .byte = 0xd3 },
		{ .addr = 0x68924b, .byte = 0x04 }
};

static const SST_RamByte moveb_final_ram_6[] = {
		{ .addr = 0x689240, .byte = 0x13 },
		{ .addr = 0x689241, .byte = 0xf6 },
		{ .addr = 0x689242, .byte = 0x83 },
		{ .addr = 0x689243, .byte = 0x7f },
		{ .addr = 0x689244, .byte = 0xab },
		{ .addr = 0x689245, .byte = 0xd7 },
		{ .addr = 0xcd7e44, .byte = 0xd1 },
		{ .addr = 0xcd7e45, .byte = 0x87 },
		{ .addr = 0x689246, .byte = 0x6f },
		{ .addr = 0x689247, .byte = 0x4f },
		{ .addr = 0xd76f4e, .byte = 0x00 },
		{ .addr = 0xd76f4f, .byte = 0x87 },
		{ .addr = 0x689248, .byte = 0xd1 },
		{ .addr = 0x689249, .byte = 0x92 },
		{ .addr = 0x68924a, .byte = 0xd3 },
		{ .addr = 0x68924b, .byte = 0x04 }
};

static const SST_Transaction moveb_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6853188, .data = 43991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13467204, .data = 135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6853190, .data = 28495, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14118734, .data = 135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6853192, .data = 53650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6853194, .data = 54020, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_7[] = {
		{ .addr = 0x1fa486, .byte = 0x12 },
		{ .addr = 0x1fa487, .byte = 0xea },
		{ .addr = 0x1fa488, .byte = 0xe0 },
		{ .addr = 0x1fa489, .byte = 0xaf },
		{ .addr = 0x1fa48a, .byte = 0xb3 },
		{ .addr = 0x1fa48b, .byte = 0xe4 },
		{ .addr = 0xb69920, .byte = 0xe4 },
		{ .addr = 0xb69921, .byte = 0xad },
		{ .addr = 0x1fa48c, .byte = 0x0d },
		{ .addr = 0x1fa48d, .byte = 0x61 }
};

static const SST_RamByte moveb_final_ram_7[] = {
		{ .addr = 0x1fa486, .byte = 0x12 },
		{ .addr = 0x1fa487, .byte = 0xea },
		{ .addr = 0x1fa488, .byte = 0xe0 },
		{ .addr = 0x1fa489, .byte = 0xaf },
		{ .addr = 0x1fa48a, .byte = 0xb3 },
		{ .addr = 0x1fa48b, .byte = 0xe4 },
		{ .addr = 0xb69920, .byte = 0xe4 },
		{ .addr = 0xb69921, .byte = 0xad },
		{ .addr = 0x600b1a, .byte = 0x00 },
		{ .addr = 0x600b1b, .byte = 0xad },
		{ .addr = 0x1fa48c, .byte = 0x0d },
		{ .addr = 0x1fa48d, .byte = 0x61 }
};

static const SST_Transaction moveb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2073738, .data = 46052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11966752, .data = 173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6294298, .data = 173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2073740, .data = 3425, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_8[] = {
		{ .addr = 0x2cb24a, .byte = 0x1a },
		{ .addr = 0x2cb24b, .byte = 0xb6 },
		{ .addr = 0x2cb24c, .byte = 0x0a },
		{ .addr = 0x2cb24d, .byte = 0x7f },
		{ .addr = 0x2cb24e, .byte = 0x84 },
		{ .addr = 0x2cb24f, .byte = 0x36 },
		{ .addr = 0x7e52e2, .byte = 0xe1 },
		{ .addr = 0x7e52e3, .byte = 0x6e },
		{ .addr = 0x2cb250, .byte = 0x3c },
		{ .addr = 0x2cb251, .byte = 0x90 }
};

static const SST_RamByte moveb_final_ram_8[] = {
		{ .addr = 0x2cb24a, .byte = 0x1a },
		{ .addr = 0x2cb24b, .byte = 0xb6 },
		{ .addr = 0x2cb24c, .byte = 0x0a },
		{ .addr = 0x2cb24d, .byte = 0x7f },
		{ .addr = 0x2cb24e, .byte = 0x84 },
		{ .addr = 0x2cb24f, .byte = 0x36 },
		{ .addr = 0x7e52e2, .byte = 0xe1 },
		{ .addr = 0x7e52e3, .byte = 0x6e },
		{ .addr = 0x15192c, .byte = 0x00 },
		{ .addr = 0x15192d, .byte = 0xe1 },
		{ .addr = 0x2cb250, .byte = 0x3c },
		{ .addr = 0x2cb251, .byte = 0x90 }
};

static const SST_Transaction moveb_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2929230, .data = 33846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8278754, .data = 57600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1382700, .data = 225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2929232, .data = 15504, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_9[] = {
		{ .addr = 0x9dae70, .byte = 0x14 },
		{ .addr = 0x9dae71, .byte = 0xf9 },
		{ .addr = 0x9dae72, .byte = 0x75 },
		{ .addr = 0x9dae73, .byte = 0x18 },
		{ .addr = 0x9dae74, .byte = 0xb3 },
		{ .addr = 0x9dae75, .byte = 0x29 },
		{ .addr = 0x9dae76, .byte = 0x81 },
		{ .addr = 0x9dae77, .byte = 0xc2 },
		{ .addr = 0x18b328, .byte = 0x88 },
		{ .addr = 0x18b329, .byte = 0x03 },
		{ .addr = 0x9dae78, .byte = 0xd7 },
		{ .addr = 0x9dae79, .byte = 0x4e }
};

static const SST_RamByte moveb_final_ram_9[] = {
		{ .addr = 0x9dae70, .byte = 0x14 },
		{ .addr = 0x9dae71, .byte = 0xf9 },
		{ .addr = 0x9dae72, .byte = 0x75 },
		{ .addr = 0x9dae73, .byte = 0x18 },
		{ .addr = 0x9dae74, .byte = 0xb3 },
		{ .addr = 0x9dae75, .byte = 0x29 },
		{ .addr = 0x9dae76, .byte = 0x81 },
		{ .addr = 0x9dae77, .byte = 0xc2 },
		{ .addr = 0x18b328, .byte = 0x88 },
		{ .addr = 0x18b329, .byte = 0x03 },
		{ .addr = 0xddd420, .byte = 0x03 },
		{ .addr = 0xddd421, .byte = 0x00 },
		{ .addr = 0x9dae78, .byte = 0xd7 },
		{ .addr = 0x9dae79, .byte = 0x4e }
};

static const SST_Transaction moveb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10333812, .data = 45865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10333814, .data = 33218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1618728, .data = 3, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14537760, .data = 768, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10333816, .data = 55118, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_10[] = {
		{ .addr = 0x71b886, .byte = 0x15 },
		{ .addr = 0x71b887, .byte = 0x5f },
		{ .addr = 0x71b888, .byte = 0x97 },
		{ .addr = 0x71b889, .byte = 0xf3 },
		{ .addr = 0x2f7cd0, .byte = 0x2c },
		{ .addr = 0x2f7cd1, .byte = 0x36 },
		{ .addr = 0x71b88a, .byte = 0x25 },
		{ .addr = 0x71b88b, .byte = 0xa9 },
		{ .addr = 0x71b88c, .byte = 0x71 },
		{ .addr = 0x71b88d, .byte = 0xe0 }
};

static const SST_RamByte moveb_final_ram_10[] = {
		{ .addr = 0x71b886, .byte = 0x15 },
		{ .addr = 0x71b887, .byte = 0x5f },
		{ .addr = 0x71b888, .byte = 0x97 },
		{ .addr = 0x71b889, .byte = 0xf3 },
		{ .addr = 0x2f7cd0, .byte = 0x2c },
		{ .addr = 0x2f7cd1, .byte = 0x36 },
		{ .addr = 0x71b88a, .byte = 0x25 },
		{ .addr = 0x71b88b, .byte = 0xa9 },
		{ .addr = 0x446186, .byte = 0x00 },
		{ .addr = 0x446187, .byte = 0x2c },
		{ .addr = 0x71b88c, .byte = 0x71 },
		{ .addr = 0x71b88d, .byte = 0xe0 }
};

static const SST_Transaction moveb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3112144, .data = 11264, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7452810, .data = 9641, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4481414, .data = 44, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7452812, .data = 29152, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_11[] = {
		{ .addr = 0xd76042, .byte = 0x17 },
		{ .addr = 0xd76043, .byte = 0x26 },
		{ .addr = 0xd76044, .byte = 0x11 },
		{ .addr = 0xd76045, .byte = 0x1d },
		{ .addr = 0x830b72, .byte = 0x4a },
		{ .addr = 0x830b73, .byte = 0xb2 },
		{ .addr = 0xd76046, .byte = 0xae },
		{ .addr = 0xd76047, .byte = 0x6c }
};

static const SST_RamByte moveb_final_ram_11[] = {
		{ .addr = 0xd76042, .byte = 0x17 },
		{ .addr = 0xd76043, .byte = 0x26 },
		{ .addr = 0xd76044, .byte = 0x11 },
		{ .addr = 0xd76045, .byte = 0x1d },
		{ .addr = 0x830b72, .byte = 0x4a },
		{ .addr = 0x830b73, .byte = 0xb2 },
		{ .addr = 0xd76046, .byte = 0xae },
		{ .addr = 0xd76047, .byte = 0x6c },
		{ .addr = 0x0f66de, .byte = 0x00 },
		{ .addr = 0x0f66df, .byte = 0x4a }
};

static const SST_Transaction moveb_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8588146, .data = 18944, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14114886, .data = 44652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1009374, .data = 74, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_12[] = {
		{ .addr = 0x1bdd0e, .byte = 0x18 },
		{ .addr = 0x1bdd0f, .byte = 0xab },
		{ .addr = 0x1bdd10, .byte = 0x81 },
		{ .addr = 0x1bdd11, .byte = 0x22 },
		{ .addr = 0x1bdd12, .byte = 0xdc },
		{ .addr = 0x1bdd13, .byte = 0xb7 },
		{ .addr = 0x043c92, .byte = 0xb1 },
		{ .addr = 0x043c93, .byte = 0xf5 },
		{ .addr = 0x1bdd14, .byte = 0xf3 },
		{ .addr = 0x1bdd15, .byte = 0x1e }
};

static const SST_RamByte moveb_final_ram_12[] = {
		{ .addr = 0x1bdd0e, .byte = 0x18 },
		{ .addr = 0x1bdd0f, .byte = 0xab },
		{ .addr = 0x1bdd10, .byte = 0x81 },
		{ .addr = 0x1bdd11, .byte = 0x22 },
		{ .addr = 0x1bdd12, .byte = 0xdc },
		{ .addr = 0x1bdd13, .byte = 0xb7 },
		{ .addr = 0x043c92, .byte = 0xb1 },
		{ .addr = 0x043c93, .byte = 0xf5 },
		{ .addr = 0xedcee4, .byte = 0xf5 },
		{ .addr = 0xedcee5, .byte = 0x00 },
		{ .addr = 0x1bdd14, .byte = 0xf3 },
		{ .addr = 0x1bdd15, .byte = 0x1e }
};

static const SST_Transaction moveb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1826066, .data = 56503, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 277650, .data = 245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15584996, .data = 62720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1826068, .data = 62238, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_13[] = {
		{ .addr = 0xc96e46, .byte = 0x1a },
		{ .addr = 0xc96e47, .byte = 0x10 },
		{ .addr = 0xc96e48, .byte = 0x32 },
		{ .addr = 0xc96e49, .byte = 0x49 },
		{ .addr = 0x98bd78, .byte = 0x07 },
		{ .addr = 0x98bd79, .byte = 0xaf },
		{ .addr = 0xc96e4a, .byte = 0x72 },
		{ .addr = 0xc96e4b, .byte = 0xcf }
};

static const SST_RamByte moveb_final_ram_13[] = {
		{ .addr = 0xc96e46, .byte = 0x1a },
		{ .addr = 0xc96e47, .byte = 0x10 },
		{ .addr = 0xc96e48, .byte = 0x32 },
		{ .addr = 0xc96e49, .byte = 0x49 },
		{ .addr = 0x98bd78, .byte = 0x07 },
		{ .addr = 0x98bd79, .byte = 0xaf },
		{ .addr = 0xc96e4a, .byte = 0x72 },
		{ .addr = 0xc96e4b, .byte = 0xcf }
};

static const SST_Transaction moveb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10009976, .data = 1792, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13200970, .data = 29391, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_14[] = {
		{ .addr = 0x129714, .byte = 0x1c },
		{ .addr = 0x129715, .byte = 0xa5 },
		{ .addr = 0x129716, .byte = 0xec },
		{ .addr = 0x129717, .byte = 0xe0 },
		{ .addr = 0x0ba210, .byte = 0x5b },
		{ .addr = 0x0ba211, .byte = 0x26 },
		{ .addr = 0x129718, .byte = 0xf7 },
		{ .addr = 0x129719, .byte = 0x56 }
};

static const SST_RamByte moveb_final_ram_14[] = {
		{ .addr = 0x129714, .byte = 0x1c },
		{ .addr = 0x129715, .byte = 0xa5 },
		{ .addr = 0x129716, .byte = 0xec },
		{ .addr = 0x129717, .byte = 0xe0 },
		{ .addr = 0x0ba210, .byte = 0x5b },
		{ .addr = 0x0ba211, .byte = 0x26 },
		{ .addr = 0x4442da, .byte = 0x00 },
		{ .addr = 0x4442db, .byte = 0x26 },
		{ .addr = 0x129718, .byte = 0xf7 },
		{ .addr = 0x129719, .byte = 0x56 }
};

static const SST_Transaction moveb_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 762384, .data = 38, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4473562, .data = 38, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1218328, .data = 63318, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_15[] = {
		{ .addr = 0xedda18, .byte = 0x1e },
		{ .addr = 0xedda19, .byte = 0x9f },
		{ .addr = 0xedda1a, .byte = 0xe0 },
		{ .addr = 0xedda1b, .byte = 0xad },
		{ .addr = 0xd63e66, .byte = 0xcb },
		{ .addr = 0xd63e67, .byte = 0xae },
		{ .addr = 0xedda1c, .byte = 0x7c },
		{ .addr = 0xedda1d, .byte = 0xc6 }
};

static const SST_RamByte moveb_final_ram_15[] = {
		{ .addr = 0xedda18, .byte = 0x1e },
		{ .addr = 0xedda19, .byte = 0x9f },
		{ .addr = 0xedda1a, .byte = 0xe0 },
		{ .addr = 0xedda1b, .byte = 0xad },
		{ .addr = 0xd63e66, .byte = 0xcb },
		{ .addr = 0xd63e67, .byte = 0xae },
		{ .addr = 0xd63e68, .byte = 0xcb },
		{ .addr = 0xd63e69, .byte = 0x00 },
		{ .addr = 0xedda1c, .byte = 0x7c },
		{ .addr = 0xedda1d, .byte = 0xc6 }
};

static const SST_Transaction moveb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14040678, .data = 51968, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14040680, .data = 51968, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15587868, .data = 31942, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t MOVEB_TEST_COUNT = 16;
static const SST_TestCase moveb[] = {
	{
		.name = "000 MOVE.b (d8, A7, Xn), (A5)+ 1af7",
		.initial = {
			.regs = {
				2070124316, 234003073, 1521695988, 3135339855, 578666471, 3465828453, 2145999343, 2461079043, 2211998792, 3183097597, 2638671310, 247559878, 3934967095, 4190314979, 2197685891, 4298878, 13553080, 34305, 10201890
			},
			.prefetch0 = 6903,
			.prefetch1 = 62572,
			.ram = moveb_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2070124316, 234003073, 1521695988, 3135339855, 578666471, 3465828453, 2145999343, 2461079043, 2211998792, 3183097597, 2638671310, 247559878, 3934967095, 4190314980, 2197685891, 4298878, 13553080, 34312, 10201894
			},
			.prefetch0 = 9401,
			.prefetch1 = 38785,
			.ram = moveb_final_ram_0,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 MOVE.b (d8, A1, Xn), (A5) 1ab1",
		.initial = {
			.regs = {
				3243830603, 29782443, 4166481430, 1558620845, 2942763057, 111534772, 1542698097, 1246865263, 2818881060, 2154701544, 4085937553, 2899191938, 1859081785, 2048883436, 2858429385, 11191470, 5201230, 40978, 2350020
			},
			.prefetch0 = 6833,
			.prefetch1 = 49790,
			.ram = moveb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3243830603, 29782443, 4166481430, 1558620845, 2942763057, 111534772, 1542698097, 1246865263, 2818881060, 2154701544, 4085937553, 2899191938, 1859081785, 2048883436, 2858429385, 11191470, 5201230, 40976, 2350024
			},
			.prefetch0 = 43532,
			.prefetch1 = 32358,
			.ram = moveb_final_ram_1,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 MOVE.b (A1)+, (d8, A4, Xn) 1999",
		.initial = {
			.regs = {
				860177062, 2256315216, 3551211388, 2046776821, 425230752, 2766901683, 4283774151, 4177950114, 3749202064, 2122145104, 1068141869, 3488056930, 1967284240, 990178717, 433503906, 14792526, 3703302, 8722, 11651422
			},
			.prefetch0 = 6553,
			.prefetch1 = 44128,
			.ram = moveb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				860177062, 2256315216, 3551211388, 2046776821, 425230752, 2766901683, 4283774151, 4177950114, 3749202064, 2122145105, 1068141869, 3488056930, 1967284240, 990178717, 433503906, 14792526, 3703302, 8728, 11651426
			},
			.prefetch0 = 21092,
			.prefetch1 = 27345,
			.ram = moveb_final_ram_2,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 MOVE.b (d16, A6), D5 1a2e",
		.initial = {
			.regs = {
				3705607882, 1377588239, 2498316668, 2934063146, 3567260485, 3094102281, 503308788, 2413765058, 3625861089, 1359594390, 1056533589, 1365710756, 1327520345, 1876160516, 2826090800, 4327068, 14795650, 8728, 3647930
			},
			.prefetch0 = 6702,
			.prefetch1 = 63070,
			.ram = moveb_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3705607882, 1377588239, 2498316668, 2934063146, 3567260485, 3094102308, 503308788, 2413765058, 3625861089, 1359594390, 1056533589, 1365710756, 1327520345, 1876160516, 2826090800, 4327068, 14795650, 8720, 3647934
			},
			.prefetch0 = 58931,
			.prefetch1 = 13917,
			.ram = moveb_final_ram_3,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 MOVE.b (A4), D7 1e14",
		.initial = {
			.regs = {
				559996224, 3757837868, 2980866351, 1982674722, 1067887218, 3554553012, 888981608, 75197672, 3856356743, 191621853, 1296921148, 4239210447, 1225068271, 259937655, 3660323423, 15497796, 2347470, 8477, 6029888
			},
			.prefetch0 = 7700,
			.prefetch1 = 25446,
			.ram = moveb_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				559996224, 3757837868, 2980866351, 1982674722, 1067887218, 3554553012, 888981608, 75197632, 3856356743, 191621853, 1296921148, 4239210447, 1225068271, 259937655, 3660323423, 15497796, 2347470, 8472, 6029890
			},
			.prefetch0 = 25446,
			.prefetch1 = 35987,
			.ram = moveb_final_ram_4,
			.ram_len = 8,
		},
		.transactions = moveb_transactions_4,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "005 MOVE.b (A7), (d8, A1, Xn) 1397",
		.initial = {
			.regs = {
				622048929, 1273447268, 404769336, 586349012, 1753836293, 3598611921, 3365626848, 1886198280, 3454777471, 3807843711, 1479299620, 3168456603, 1810740892, 2010680393, 1867103272, 10267124, 7959534, 42757, 43110
			},
			.prefetch0 = 5015,
			.prefetch1 = 33127,
			.ram = moveb_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				622048929, 1273447268, 404769336, 586349012, 1753836293, 3598611921, 3365626848, 1886198280, 3454777471, 3807843711, 1479299620, 3168456603, 1810740892, 2010680393, 1867103272, 10267124, 7959534, 42752, 43114
			},
			.prefetch0 = 25171,
			.prefetch1 = 1924,
			.ram = moveb_final_ram_5,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 MOVE.b (d8, A6, Xn), (xxx).l 13f6",
		.initial = {
			.regs = {
				3231024118, 763310398, 2299392720, 4196998473, 3643198880, 2970016506, 2785099946, 982711915, 102178095, 3073357110, 2999152133, 4234013280, 813304631, 2259847125, 885874839, 13458896, 7412874, 8193, 6853188
			},
			.prefetch0 = 5110,
			.prefetch1 = 33663,
			.ram = moveb_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3231024118, 763310398, 2299392720, 4196998473, 3643198880, 2970016506, 2785099946, 982711915, 102178095, 3073357110, 2999152133, 4234013280, 813304631, 2259847125, 885874839, 13458896, 7412874, 8200, 6853196
			},
			.prefetch0 = 53650,
			.prefetch1 = 54020,
			.ram = moveb_final_ram_6,
			.ram_len = 16,
		},
		.transactions = moveb_transactions_6,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "007 MOVE.b (d16, A2), (A1)+ 12ea",
		.initial = {
			.regs = {
				1182632919, 2292349916, 1369973829, 3460313155, 2045613070, 2863706503, 3113863894, 817535077, 2800595965, 710937371, 414627954, 3647931664, 970997125, 2151663067, 1617282429, 7169288, 942324, 9236, 2073738
			},
			.prefetch0 = 4842,
			.prefetch1 = 57519,
			.ram = moveb_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1182632919, 2292349916, 1369973829, 3460313155, 2045613070, 2863706503, 3113863894, 817535077, 2800595965, 710937372, 414627954, 3647931664, 970997125, 2151663067, 1617282429, 7169288, 942324, 9240, 2073742
			},
			.prefetch0 = 46052,
			.prefetch1 = 3425,
			.ram = moveb_final_ram_7,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 MOVE.b (d8, A6, Xn), (A5) 1ab6",
		.initial = {
			.regs = {
				2825979168, 3483559925, 2882176195, 2867463149, 596827445, 439328841, 638601265, 935929484, 1461820348, 132963954, 2567368330, 3873897488, 2772828445, 756357421, 2618117443, 10335280, 14269754, 9493, 2929230
			},
			.prefetch0 = 6838,
			.prefetch1 = 2687,
			.ram = moveb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2825979168, 3483559925, 2882176195, 2867463149, 596827445, 439328841, 638601265, 935929484, 1461820348, 132963954, 2567368330, 3873897488, 2772828445, 756357421, 2618117443, 10335280, 14269754, 9496, 2929234
			},
			.prefetch0 = 33846,
			.prefetch1 = 15504,
			.ram = moveb_final_ram_8,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 MOVE.b (xxx).l, (A2)+ 14f9",
		.initial = {
			.regs = {
				770375379, 1562978899, 536924540, 2979367281, 2949436809, 3925107769, 3405791883, 3541784410, 236646633, 1524301362, 4074624032, 1076768168, 3620324726, 2759897404, 2795578585, 6149976, 643028, 34050, 10333812
			},
			.prefetch0 = 5369,
			.prefetch1 = 29976,
			.ram = moveb_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				770375379, 1562978899, 536924540, 2979367281, 2949436809, 3925107769, 3405791883, 3541784410, 236646633, 1524301362, 4074624033, 1076768168, 3620324726, 2759897404, 2795578585, 6149976, 643028, 34048, 10333818
			},
			.prefetch0 = 33218,
			.prefetch1 = 55118,
			.ram = moveb_final_ram_9,
			.ram_len = 14,
		},
		.transactions = moveb_transactions_9,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "010 MOVE.b (A7)+, (d16, A2) 155f",
		.initial = {
			.regs = {
				1829437663, 1020291212, 4167191579, 2555399181, 452586801, 1238021824, 1148962747, 1388883579, 3123572468, 2883347274, 1279576468, 178600008, 291263435, 2969104737, 87373161, 3112144, 14466174, 34062, 7452810
			},
			.prefetch0 = 5471,
			.prefetch1 = 38899,
			.ram = moveb_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1829437663, 1020291212, 4167191579, 2555399181, 452586801, 1238021824, 1148962747, 1388883579, 3123572468, 2883347274, 1279576468, 178600008, 291263435, 2969104737, 87373161, 3112146, 14466174, 34048, 7452814
			},
			.prefetch0 = 9641,
			.prefetch1 = 29152,
			.ram = moveb_final_ram_10,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_10,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "011 MOVE.b -(A6), -(A3) 1726",
		.initial = {
			.regs = {
				3259220416, 1417745659, 2434767937, 1561203952, 59974304, 4214715371, 3343587986, 2081517781, 608720975, 1588990573, 3156445296, 370108128, 4277916990, 2085227605, 2827160435, 10148294, 13562392, 34328, 14114886
			},
			.prefetch0 = 5926,
			.prefetch1 = 4381,
			.ram = moveb_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3259220416, 1417745659, 2434767937, 1561203952, 59974304, 4214715371, 3343587986, 2081517781, 608720975, 1588990573, 3156445296, 370108127, 4277916990, 2085227605, 2827160434, 10148294, 13562392, 34320, 14114888
			},
			.prefetch0 = 4381,
			.prefetch1 = 44652,
			.ram = moveb_final_ram_11,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 MOVE.b (d16, A3), (A4) 18ab",
		.initial = {
			.regs = {
				2766973559, 4138658350, 2550014141, 3709208971, 2887804371, 3335298398, 512221135, 4097505759, 949238529, 3467547348, 3511542062, 4161059697, 502124260, 4158610321, 3726869648, 1671422, 13149126, 41236, 1826066
			},
			.prefetch0 = 6315,
			.prefetch1 = 33058,
			.ram = moveb_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2766973559, 4138658350, 2550014141, 3709208971, 2887804371, 3335298398, 512221135, 4097505759, 949238529, 3467547348, 3511542062, 4161059697, 502124260, 4158610321, 3726869648, 1671422, 13149126, 41240, 1826070
			},
			.prefetch0 = 56503,
			.prefetch1 = 62238,
			.ram = moveb_final_ram_12,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_12,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "013 MOVE.b (A0), D5 1a10",
		.initial = {
			.regs = {
				3923462745, 3703632502, 1579395991, 3019343573, 2943946023, 3308505414, 3973686046, 91617416, 3986210168, 687312643, 3505561477, 2536841114, 968554968, 4038596626, 2177095325, 12276824, 12607582, 33545, 13200970
			},
			.prefetch0 = 6672,
			.prefetch1 = 12873,
			.ram = moveb_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3923462745, 3703632502, 1579395991, 3019343573, 2943946023, 3308505351, 3973686046, 91617416, 3986210168, 687312643, 3505561477, 2536841114, 968554968, 4038596626, 2177095325, 12276824, 12607582, 33536, 13200972
			},
			.prefetch0 = 12873,
			.prefetch1 = 29391,
			.ram = moveb_final_ram_13,
			.ram_len = 8,
		},
		.transactions = moveb_transactions_13,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "014 MOVE.b -(A5), (A6) 1ca5",
		.initial = {
			.regs = {
				2149578512, 254355500, 1535336267, 3435463960, 122538888, 1933833746, 1711008480, 4289231748, 1663773136, 2462232566, 1784938126, 2915804125, 640227699, 2450235922, 1967407835, 14724494, 12731944, 34327, 1218328
			},
			.prefetch0 = 7333,
			.prefetch1 = 60640,
			.ram = moveb_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2149578512, 254355500, 1535336267, 3435463960, 122538888, 1933833746, 1711008480, 4289231748, 1663773136, 2462232566, 1784938126, 2915804125, 640227699, 2450235921, 1967407835, 14724494, 12731944, 34320, 1218330
			},
			.prefetch0 = 60640,
			.prefetch1 = 63318,
			.ram = moveb_final_ram_14,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_14,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "015 MOVE.b (A7)+, (A7) 1e9f",
		.initial = {
			.regs = {
				2228545656, 3517242564, 2172722495, 215432525, 372640250, 154769187, 1439802992, 1111931137, 3256565046, 1686821993, 3652982646, 196114948, 3437558689, 504916290, 1161804735, 14040678, 3067358, 33801, 15587868
			},
			.prefetch0 = 7839,
			.prefetch1 = 57517,
			.ram = moveb_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2228545656, 3517242564, 2172722495, 215432525, 372640250, 154769187, 1439802992, 1111931137, 3256565046, 1686821993, 3652982646, 196114948, 3437558689, 504916290, 1161804735, 14040680, 3067358, 33800, 15587870
			},
			.prefetch0 = 57517,
			.prefetch1 = 31942,
			.ram = moveb_final_ram_15,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_15,
		.transactions_len = 3,
		.lenght = 12,
	},
};

#endif /* RBT_MOVEB_H */