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

static const SST_RamByte moveb_initial_ram_16[] = {
		{ .addr = 0x4e9678, .byte = 0x1d },
		{ .addr = 0x4e9679, .byte = 0x60 },
		{ .addr = 0x4e967a, .byte = 0x3c },
		{ .addr = 0x4e967b, .byte = 0x0d },
		{ .addr = 0x6a2b84, .byte = 0xc7 },
		{ .addr = 0x6a2b85, .byte = 0xe4 },
		{ .addr = 0x4e967c, .byte = 0x9e },
		{ .addr = 0x4e967d, .byte = 0x46 },
		{ .addr = 0x4e967e, .byte = 0xfc },
		{ .addr = 0x4e967f, .byte = 0x68 }
};

static const SST_RamByte moveb_final_ram_16[] = {
		{ .addr = 0x4e9678, .byte = 0x1d },
		{ .addr = 0x4e9679, .byte = 0x60 },
		{ .addr = 0x4e967a, .byte = 0x3c },
		{ .addr = 0x4e967b, .byte = 0x0d },
		{ .addr = 0x6a2b84, .byte = 0xc7 },
		{ .addr = 0x6a2b85, .byte = 0xe4 },
		{ .addr = 0x4e967c, .byte = 0x9e },
		{ .addr = 0x4e967d, .byte = 0x46 },
		{ .addr = 0x0b8936, .byte = 0xc7 },
		{ .addr = 0x0b8937, .byte = 0x00 },
		{ .addr = 0x4e967e, .byte = 0xfc },
		{ .addr = 0x4e967f, .byte = 0x68 }
};

static const SST_Transaction moveb_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6957956, .data = 50944, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5150332, .data = 40518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 756022, .data = 50944, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5150334, .data = 64616, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_17[] = {
		{ .addr = 0x4cdf78, .byte = 0x16 },
		{ .addr = 0x4cdf79, .byte = 0x9a },
		{ .addr = 0x4cdf7a, .byte = 0x4f },
		{ .addr = 0x4cdf7b, .byte = 0x32 },
		{ .addr = 0x99b4d4, .byte = 0xa3 },
		{ .addr = 0x99b4d5, .byte = 0x43 },
		{ .addr = 0x4cdf7c, .byte = 0x80 },
		{ .addr = 0x4cdf7d, .byte = 0xe9 }
};

static const SST_RamByte moveb_final_ram_17[] = {
		{ .addr = 0x4cdf78, .byte = 0x16 },
		{ .addr = 0x4cdf79, .byte = 0x9a },
		{ .addr = 0x4cdf7a, .byte = 0x4f },
		{ .addr = 0x4cdf7b, .byte = 0x32 },
		{ .addr = 0x99b4d4, .byte = 0xa3 },
		{ .addr = 0x99b4d5, .byte = 0x43 },
		{ .addr = 0xb31aaa, .byte = 0x43 },
		{ .addr = 0xb31aab, .byte = 0x00 },
		{ .addr = 0x4cdf7c, .byte = 0x80 },
		{ .addr = 0x4cdf7d, .byte = 0xe9 }
};

static const SST_Transaction moveb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10073300, .data = 67, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11737770, .data = 17152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5037948, .data = 33001, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_18[] = {
		{ .addr = 0xeea0ae, .byte = 0x19 },
		{ .addr = 0xeea0af, .byte = 0xa5 },
		{ .addr = 0xeea0b0, .byte = 0xe1 },
		{ .addr = 0xeea0b1, .byte = 0x95 },
		{ .addr = 0x4ee93c, .byte = 0xc6 },
		{ .addr = 0x4ee93d, .byte = 0x6f },
		{ .addr = 0xeea0b2, .byte = 0x04 },
		{ .addr = 0xeea0b3, .byte = 0x09 },
		{ .addr = 0xeea0b4, .byte = 0x36 },
		{ .addr = 0xeea0b5, .byte = 0x00 }
};

static const SST_RamByte moveb_final_ram_18[] = {
		{ .addr = 0xeea0ae, .byte = 0x19 },
		{ .addr = 0xeea0af, .byte = 0xa5 },
		{ .addr = 0xeea0b0, .byte = 0xe1 },
		{ .addr = 0xeea0b1, .byte = 0x95 },
		{ .addr = 0x4ee93c, .byte = 0xc6 },
		{ .addr = 0x4ee93d, .byte = 0x6f },
		{ .addr = 0xeea0b2, .byte = 0x04 },
		{ .addr = 0xeea0b3, .byte = 0x09 },
		{ .addr = 0x335dcc, .byte = 0xc6 },
		{ .addr = 0x335dcd, .byte = 0x00 },
		{ .addr = 0xeea0b4, .byte = 0x36 },
		{ .addr = 0xeea0b5, .byte = 0x00 }
};

static const SST_Transaction moveb_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5171516, .data = 50688, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15638706, .data = 1033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3366348, .data = 50688, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15638708, .data = 13824, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_19[] = {
		{ .addr = 0x672b08, .byte = 0x19 },
		{ .addr = 0x672b09, .byte = 0x1b },
		{ .addr = 0x672b0a, .byte = 0x39 },
		{ .addr = 0x672b0b, .byte = 0xe0 },
		{ .addr = 0xa32fb2, .byte = 0x4c },
		{ .addr = 0xa32fb3, .byte = 0xe2 },
		{ .addr = 0x672b0c, .byte = 0x05 },
		{ .addr = 0x672b0d, .byte = 0x9b }
};

static const SST_RamByte moveb_final_ram_19[] = {
		{ .addr = 0x672b08, .byte = 0x19 },
		{ .addr = 0x672b09, .byte = 0x1b },
		{ .addr = 0x672b0a, .byte = 0x39 },
		{ .addr = 0x672b0b, .byte = 0xe0 },
		{ .addr = 0xa32fb2, .byte = 0x4c },
		{ .addr = 0xa32fb3, .byte = 0xe2 },
		{ .addr = 0x672b0c, .byte = 0x05 },
		{ .addr = 0x672b0d, .byte = 0x9b },
		{ .addr = 0x5ca72e, .byte = 0x00 },
		{ .addr = 0x5ca72f, .byte = 0xe2 }
};

static const SST_Transaction moveb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10694578, .data = 226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6761228, .data = 1435, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6072110, .data = 226, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_20[] = {
		{ .addr = 0x36477a, .byte = 0x11 },
		{ .addr = 0x36477b, .byte = 0xde },
		{ .addr = 0x36477c, .byte = 0x4e },
		{ .addr = 0x36477d, .byte = 0xec },
		{ .addr = 0xbf38ba, .byte = 0xb1 },
		{ .addr = 0xbf38bb, .byte = 0x8e },
		{ .addr = 0x36477e, .byte = 0x9d },
		{ .addr = 0x36477f, .byte = 0x80 },
		{ .addr = 0x364780, .byte = 0x1c },
		{ .addr = 0x364781, .byte = 0x69 }
};

static const SST_RamByte moveb_final_ram_20[] = {
		{ .addr = 0x36477a, .byte = 0x11 },
		{ .addr = 0x36477b, .byte = 0xde },
		{ .addr = 0x36477c, .byte = 0x4e },
		{ .addr = 0x36477d, .byte = 0xec },
		{ .addr = 0xbf38ba, .byte = 0xb1 },
		{ .addr = 0xbf38bb, .byte = 0x8e },
		{ .addr = 0x36477e, .byte = 0x9d },
		{ .addr = 0x36477f, .byte = 0x80 },
		{ .addr = 0x004eec, .byte = 0x8e },
		{ .addr = 0x004eed, .byte = 0x00 },
		{ .addr = 0x364780, .byte = 0x1c },
		{ .addr = 0x364781, .byte = 0x69 }
};

static const SST_Transaction moveb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12531898, .data = 142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3557246, .data = 40320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 20204, .data = 36352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3557248, .data = 7273, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_21[] = {
		{ .addr = 0x7befdc, .byte = 0x16 },
		{ .addr = 0x7befdd, .byte = 0x3a },
		{ .addr = 0x7befde, .byte = 0xfe },
		{ .addr = 0x7befdf, .byte = 0x75 },
		{ .addr = 0x7befe0, .byte = 0x8b },
		{ .addr = 0x7befe1, .byte = 0x15 },
		{ .addr = 0x7bee52, .byte = 0xb8 },
		{ .addr = 0x7bee53, .byte = 0x74 },
		{ .addr = 0x7befe2, .byte = 0x10 },
		{ .addr = 0x7befe3, .byte = 0x8e }
};

static const SST_RamByte moveb_final_ram_21[] = {
		{ .addr = 0x7befdc, .byte = 0x16 },
		{ .addr = 0x7befdd, .byte = 0x3a },
		{ .addr = 0x7befde, .byte = 0xfe },
		{ .addr = 0x7befdf, .byte = 0x75 },
		{ .addr = 0x7befe0, .byte = 0x8b },
		{ .addr = 0x7befe1, .byte = 0x15 },
		{ .addr = 0x7bee52, .byte = 0xb8 },
		{ .addr = 0x7bee53, .byte = 0x74 },
		{ .addr = 0x7befe2, .byte = 0x10 },
		{ .addr = 0x7befe3, .byte = 0x8e }
};

static const SST_Transaction moveb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8122336, .data = 35605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8121938, .data = 116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8122338, .data = 4238, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_22[] = {
		{ .addr = 0x75d408, .byte = 0x14 },
		{ .addr = 0x75d409, .byte = 0x21 },
		{ .addr = 0x75d40a, .byte = 0x82 },
		{ .addr = 0x75d40b, .byte = 0xfc },
		{ .addr = 0x1e83f4, .byte = 0xdf },
		{ .addr = 0x1e83f5, .byte = 0x7b },
		{ .addr = 0x75d40c, .byte = 0x93 },
		{ .addr = 0x75d40d, .byte = 0x1b }
};

static const SST_RamByte moveb_final_ram_22[] = {
		{ .addr = 0x75d408, .byte = 0x14 },
		{ .addr = 0x75d409, .byte = 0x21 },
		{ .addr = 0x75d40a, .byte = 0x82 },
		{ .addr = 0x75d40b, .byte = 0xfc },
		{ .addr = 0x1e83f4, .byte = 0xdf },
		{ .addr = 0x1e83f5, .byte = 0x7b },
		{ .addr = 0x75d40c, .byte = 0x93 },
		{ .addr = 0x75d40d, .byte = 0x1b }
};

static const SST_Transaction moveb_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1999860, .data = 123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7721996, .data = 37659, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_23[] = {
		{ .addr = 0xfbe4ee, .byte = 0x10 },
		{ .addr = 0xfbe4ef, .byte = 0xda },
		{ .addr = 0xfbe4f0, .byte = 0xbd },
		{ .addr = 0xfbe4f1, .byte = 0x35 },
		{ .addr = 0x0612a8, .byte = 0x57 },
		{ .addr = 0x0612a9, .byte = 0xbf },
		{ .addr = 0xfbe4f2, .byte = 0x0c },
		{ .addr = 0xfbe4f3, .byte = 0x32 }
};

static const SST_RamByte moveb_final_ram_23[] = {
		{ .addr = 0xfbe4ee, .byte = 0x10 },
		{ .addr = 0xfbe4ef, .byte = 0xda },
		{ .addr = 0xfbe4f0, .byte = 0xbd },
		{ .addr = 0xfbe4f1, .byte = 0x35 },
		{ .addr = 0x0612a8, .byte = 0x57 },
		{ .addr = 0x0612a9, .byte = 0xbf },
		{ .addr = 0x641b78, .byte = 0x57 },
		{ .addr = 0x641b79, .byte = 0x00 },
		{ .addr = 0xfbe4f2, .byte = 0x0c },
		{ .addr = 0xfbe4f3, .byte = 0x32 }
};

static const SST_Transaction moveb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 397992, .data = 22272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6560632, .data = 22272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16508146, .data = 3122, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_24[] = {
		{ .addr = 0x1da49a, .byte = 0x1a },
		{ .addr = 0x1da49b, .byte = 0x33 },
		{ .addr = 0x1da49c, .byte = 0xdb },
		{ .addr = 0x1da49d, .byte = 0x50 },
		{ .addr = 0x1da49e, .byte = 0x27 },
		{ .addr = 0x1da49f, .byte = 0x5f },
		{ .addr = 0xc18c06, .byte = 0xc3 },
		{ .addr = 0xc18c07, .byte = 0x40 },
		{ .addr = 0x1da4a0, .byte = 0xdd },
		{ .addr = 0x1da4a1, .byte = 0x82 }
};

static const SST_RamByte moveb_final_ram_24[] = {
		{ .addr = 0x1da49a, .byte = 0x1a },
		{ .addr = 0x1da49b, .byte = 0x33 },
		{ .addr = 0x1da49c, .byte = 0xdb },
		{ .addr = 0x1da49d, .byte = 0x50 },
		{ .addr = 0x1da49e, .byte = 0x27 },
		{ .addr = 0x1da49f, .byte = 0x5f },
		{ .addr = 0xc18c06, .byte = 0xc3 },
		{ .addr = 0xc18c07, .byte = 0x40 },
		{ .addr = 0x1da4a0, .byte = 0xdd },
		{ .addr = 0x1da4a1, .byte = 0x82 }
};

static const SST_Transaction moveb_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1942686, .data = 10079, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12684294, .data = 49920, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1942688, .data = 56706, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_25[] = {
		{ .addr = 0x5fad84, .byte = 0x1a },
		{ .addr = 0x5fad85, .byte = 0xe3 },
		{ .addr = 0x5fad86, .byte = 0x3b },
		{ .addr = 0x5fad87, .byte = 0xd2 },
		{ .addr = 0x2a2832, .byte = 0x8e },
		{ .addr = 0x2a2833, .byte = 0xc9 },
		{ .addr = 0x5fad88, .byte = 0x4a },
		{ .addr = 0x5fad89, .byte = 0x89 }
};

static const SST_RamByte moveb_final_ram_25[] = {
		{ .addr = 0x5fad84, .byte = 0x1a },
		{ .addr = 0x5fad85, .byte = 0xe3 },
		{ .addr = 0x5fad86, .byte = 0x3b },
		{ .addr = 0x5fad87, .byte = 0xd2 },
		{ .addr = 0x2a2832, .byte = 0x8e },
		{ .addr = 0x2a2833, .byte = 0xc9 },
		{ .addr = 0xd5c65c, .byte = 0x00 },
		{ .addr = 0xd5c65d, .byte = 0xc9 },
		{ .addr = 0x5fad88, .byte = 0x4a },
		{ .addr = 0x5fad89, .byte = 0x89 }
};

static const SST_Transaction moveb_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2762802, .data = 201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14009948, .data = 201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6270344, .data = 19081, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_26[] = {
		{ .addr = 0x8179a0, .byte = 0x10 },
		{ .addr = 0x8179a1, .byte = 0xd1 },
		{ .addr = 0x8179a2, .byte = 0x3d },
		{ .addr = 0x8179a3, .byte = 0x91 },
		{ .addr = 0x696686, .byte = 0x84 },
		{ .addr = 0x696687, .byte = 0x8f },
		{ .addr = 0x8179a4, .byte = 0x8a },
		{ .addr = 0x8179a5, .byte = 0x56 }
};

static const SST_RamByte moveb_final_ram_26[] = {
		{ .addr = 0x8179a0, .byte = 0x10 },
		{ .addr = 0x8179a1, .byte = 0xd1 },
		{ .addr = 0x8179a2, .byte = 0x3d },
		{ .addr = 0x8179a3, .byte = 0x91 },
		{ .addr = 0x696686, .byte = 0x84 },
		{ .addr = 0x696687, .byte = 0x8f },
		{ .addr = 0xacda3e, .byte = 0x84 },
		{ .addr = 0xacda3f, .byte = 0x00 },
		{ .addr = 0x8179a4, .byte = 0x8a },
		{ .addr = 0x8179a5, .byte = 0x56 }
};

static const SST_Transaction moveb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6907526, .data = 33792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11328062, .data = 33792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8485284, .data = 35414, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_27[] = {
		{ .addr = 0x535c2e, .byte = 0x19 },
		{ .addr = 0x535c2f, .byte = 0x70 },
		{ .addr = 0x535c30, .byte = 0x30 },
		{ .addr = 0x535c31, .byte = 0x06 },
		{ .addr = 0x535c32, .byte = 0x4f },
		{ .addr = 0x535c33, .byte = 0x7d },
		{ .addr = 0x61bfb4, .byte = 0x10 },
		{ .addr = 0x61bfb5, .byte = 0xef },
		{ .addr = 0x535c34, .byte = 0x9a },
		{ .addr = 0x535c35, .byte = 0x86 },
		{ .addr = 0x535c36, .byte = 0x49 },
		{ .addr = 0x535c37, .byte = 0x3d }
};

static const SST_RamByte moveb_final_ram_27[] = {
		{ .addr = 0x535c2e, .byte = 0x19 },
		{ .addr = 0x535c2f, .byte = 0x70 },
		{ .addr = 0x535c30, .byte = 0x30 },
		{ .addr = 0x535c31, .byte = 0x06 },
		{ .addr = 0x535c32, .byte = 0x4f },
		{ .addr = 0x535c33, .byte = 0x7d },
		{ .addr = 0x61bfb4, .byte = 0x10 },
		{ .addr = 0x61bfb5, .byte = 0xef },
		{ .addr = 0x535c34, .byte = 0x9a },
		{ .addr = 0x535c35, .byte = 0x86 },
		{ .addr = 0xadfe72, .byte = 0x00 },
		{ .addr = 0xadfe73, .byte = 0xef },
		{ .addr = 0x535c36, .byte = 0x49 },
		{ .addr = 0x535c37, .byte = 0x3d }
};

static const SST_Transaction moveb_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5463090, .data = 20349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6406068, .data = 239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5463092, .data = 39558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11402866, .data = 239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5463094, .data = 18749, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_28[] = {
		{ .addr = 0x3d650a, .byte = 0x17 },
		{ .addr = 0x3d650b, .byte = 0x5c },
		{ .addr = 0x3d650c, .byte = 0xc0 },
		{ .addr = 0x3d650d, .byte = 0x69 },
		{ .addr = 0xbe5b46, .byte = 0x7b },
		{ .addr = 0xbe5b47, .byte = 0xb3 },
		{ .addr = 0x3d650e, .byte = 0x0f },
		{ .addr = 0x3d650f, .byte = 0xb7 },
		{ .addr = 0x3d6510, .byte = 0x27 },
		{ .addr = 0x3d6511, .byte = 0x0b }
};

static const SST_RamByte moveb_final_ram_28[] = {
		{ .addr = 0x3d650a, .byte = 0x17 },
		{ .addr = 0x3d650b, .byte = 0x5c },
		{ .addr = 0x3d650c, .byte = 0xc0 },
		{ .addr = 0x3d650d, .byte = 0x69 },
		{ .addr = 0xbe5b46, .byte = 0x7b },
		{ .addr = 0xbe5b47, .byte = 0xb3 },
		{ .addr = 0x3d650e, .byte = 0x0f },
		{ .addr = 0x3d650f, .byte = 0xb7 },
		{ .addr = 0xed029c, .byte = 0x00 },
		{ .addr = 0xed029d, .byte = 0x7b },
		{ .addr = 0x3d6510, .byte = 0x27 },
		{ .addr = 0x3d6511, .byte = 0x0b }
};

static const SST_Transaction moveb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12475206, .data = 31488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4023566, .data = 4023, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15532700, .data = 123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4023568, .data = 9995, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_29[] = {
		{ .addr = 0xfc1504, .byte = 0x11 },
		{ .addr = 0xfc1505, .byte = 0xd0 },
		{ .addr = 0xfc1506, .byte = 0x12 },
		{ .addr = 0xfc1507, .byte = 0x13 },
		{ .addr = 0xcbe524, .byte = 0x3d },
		{ .addr = 0xcbe525, .byte = 0x40 },
		{ .addr = 0xfc1508, .byte = 0x87 },
		{ .addr = 0xfc1509, .byte = 0xd5 },
		{ .addr = 0xfc150a, .byte = 0x05 },
		{ .addr = 0xfc150b, .byte = 0x78 }
};

static const SST_RamByte moveb_final_ram_29[] = {
		{ .addr = 0xfc1504, .byte = 0x11 },
		{ .addr = 0xfc1505, .byte = 0xd0 },
		{ .addr = 0xfc1506, .byte = 0x12 },
		{ .addr = 0xfc1507, .byte = 0x13 },
		{ .addr = 0xcbe524, .byte = 0x3d },
		{ .addr = 0xcbe525, .byte = 0x40 },
		{ .addr = 0xfc1508, .byte = 0x87 },
		{ .addr = 0xfc1509, .byte = 0xd5 },
		{ .addr = 0x001212, .byte = 0x00 },
		{ .addr = 0x001213, .byte = 0x40 },
		{ .addr = 0xfc150a, .byte = 0x05 },
		{ .addr = 0xfc150b, .byte = 0x78 }
};

static const SST_Transaction moveb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13362468, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16520456, .data = 34773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4626, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16520458, .data = 1400, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_30[] = {
		{ .addr = 0x2a4438, .byte = 0x16 },
		{ .addr = 0x2a4439, .byte = 0x16 },
		{ .addr = 0x2a443a, .byte = 0x2a },
		{ .addr = 0x2a443b, .byte = 0x68 },
		{ .addr = 0x2c9384, .byte = 0x7b },
		{ .addr = 0x2c9385, .byte = 0x0d },
		{ .addr = 0x2a443c, .byte = 0x5c },
		{ .addr = 0x2a443d, .byte = 0x9d }
};

static const SST_RamByte moveb_final_ram_30[] = {
		{ .addr = 0x2a4438, .byte = 0x16 },
		{ .addr = 0x2a4439, .byte = 0x16 },
		{ .addr = 0x2a443a, .byte = 0x2a },
		{ .addr = 0x2a443b, .byte = 0x68 },
		{ .addr = 0x2c9384, .byte = 0x7b },
		{ .addr = 0x2c9385, .byte = 0x0d },
		{ .addr = 0x2a443c, .byte = 0x5c },
		{ .addr = 0x2a443d, .byte = 0x9d }
};

static const SST_Transaction moveb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2921348, .data = 13, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2769980, .data = 23709, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveb_initial_ram_31[] = {
		{ .addr = 0x98fdac, .byte = 0x13 },
		{ .addr = 0x98fdad, .byte = 0x5a },
		{ .addr = 0x98fdae, .byte = 0x9e },
		{ .addr = 0x98fdaf, .byte = 0xe2 },
		{ .addr = 0x236b6e, .byte = 0x10 },
		{ .addr = 0x236b6f, .byte = 0xd7 },
		{ .addr = 0x98fdb0, .byte = 0x7a },
		{ .addr = 0x98fdb1, .byte = 0xb2 },
		{ .addr = 0x98fdb2, .byte = 0xdb },
		{ .addr = 0x98fdb3, .byte = 0xcf }
};

static const SST_RamByte moveb_final_ram_31[] = {
		{ .addr = 0x98fdac, .byte = 0x13 },
		{ .addr = 0x98fdad, .byte = 0x5a },
		{ .addr = 0x98fdae, .byte = 0x9e },
		{ .addr = 0x98fdaf, .byte = 0xe2 },
		{ .addr = 0x236b6e, .byte = 0x10 },
		{ .addr = 0x236b6f, .byte = 0xd7 },
		{ .addr = 0x98fdb0, .byte = 0x7a },
		{ .addr = 0x98fdb1, .byte = 0xb2 },
		{ .addr = 0x77f3d8, .byte = 0x10 },
		{ .addr = 0x77f3d9, .byte = 0x00 },
		{ .addr = 0x98fdb2, .byte = 0xdb },
		{ .addr = 0x98fdb3, .byte = 0xcf }
};

static const SST_Transaction moveb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2321262, .data = 4096, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10026416, .data = 31410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7861208, .data = 4096, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10026418, .data = 56271, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 MOVE.b -(A0), (d16, A6) 1d60",
		.initial = {
			.regs = {
				1865752787, 475508877, 119424624, 1150224432, 1294507718, 2098061345, 3864388233, 2468808820, 2540317573, 159988656, 2367110111, 2385480760, 3122796917, 3459826419, 2701872425, 4480964, 15376790, 543, 5150332
			},
			.prefetch0 = 7520,
			.prefetch1 = 15373,
			.ram = moveb_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1865752787, 475508877, 119424624, 1150224432, 1294507718, 2098061345, 3864388233, 2468808820, 2540317572, 159988656, 2367110111, 2385480760, 3122796917, 3459826419, 2701872425, 4480964, 15376790, 536, 5150336
			},
			.prefetch0 = 40518,
			.prefetch1 = 64616,
			.ram = moveb_final_ram_16,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_16,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "017 MOVE.b (A2)+, (A3) 169a",
		.initial = {
			.regs = {
				1068701795, 4241402461, 2254743524, 51812952, 549921469, 2127891250, 2861155943, 2383780959, 3060888521, 2443756658, 2795091157, 213064362, 2077940984, 865630295, 1301372770, 8577468, 14784114, 9498, 5037948
			},
			.prefetch0 = 5786,
			.prefetch1 = 20274,
			.ram = moveb_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1068701795, 4241402461, 2254743524, 51812952, 549921469, 2127891250, 2861155943, 2383780959, 3060888521, 2443756658, 2795091158, 213064362, 2077940984, 865630295, 1301372770, 8577468, 14784114, 9488, 5037950
			},
			.prefetch0 = 20274,
			.prefetch1 = 33001,
			.ram = moveb_final_ram_17,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 MOVE.b -(A5), (d8, A4, Xn) 19a5",
		.initial = {
			.regs = {
				1129508726, 3772626192, 2166994130, 1984205623, 843232543, 4209154098, 1040348888, 3732299673, 1127920065, 1416841927, 1008799606, 3072792035, 1278455453, 1062136125, 2146611098, 4106102, 3842164, 1299, 15638706
			},
			.prefetch0 = 6565,
			.prefetch1 = 57749,
			.ram = moveb_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1129508726, 3772626192, 2166994130, 1984205623, 843232543, 4209154098, 1040348888, 3732299673, 1127920065, 1416841927, 1008799606, 3072792035, 1278455453, 1062136124, 2146611098, 4106102, 3842164, 1304, 15638710
			},
			.prefetch0 = 1033,
			.prefetch1 = 13824,
			.ram = moveb_final_ram_18,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_18,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "019 MOVE.b (A3)+, -(A4) 191b",
		.initial = {
			.regs = {
				2535915963, 2254609316, 508302012, 2474331131, 985702950, 3621095126, 1274507716, 2938331163, 3503372002, 4283841312, 3679973700, 3131256755, 3780945712, 3325537831, 163197414, 14836322, 12140248, 42252, 6761228
			},
			.prefetch0 = 6427,
			.prefetch1 = 14816,
			.ram = moveb_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2535915963, 2254609316, 508302012, 2474331131, 985702950, 3621095126, 1274507716, 2938331163, 3503372002, 4283841312, 3679973700, 3131256756, 3780945711, 3325537831, 163197414, 14836322, 12140248, 42248, 6761230
			},
			.prefetch0 = 14816,
			.prefetch1 = 1435,
			.ram = moveb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_19,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "020 MOVE.b (A6)+, (xxx).w 11de",
		.initial = {
			.regs = {
				3840456165, 3388271999, 93668556, 3205428794, 3204650614, 231234, 1754528375, 2742359677, 1294774727, 3146151639, 3830965160, 2118208361, 3532155852, 2673499844, 801061051, 4878424, 8523282, 8706, 3557246
			},
			.prefetch0 = 4574,
			.prefetch1 = 20204,
			.ram = moveb_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3840456165, 3388271999, 93668556, 3205428794, 3204650614, 231234, 1754528375, 2742359677, 1294774727, 3146151639, 3830965160, 2118208361, 3532155852, 2673499844, 801061052, 4878424, 8523282, 8712, 3557250
			},
			.prefetch0 = 40320,
			.prefetch1 = 7273,
			.ram = moveb_final_ram_20,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_20,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "021 MOVE.b (d16, PC), D3 163a",
		.initial = {
			.regs = {
				27424377, 2143622273, 1898719224, 1934024311, 3818693052, 2294210288, 1299964704, 466727882, 2191944304, 3187267849, 1939772371, 3248793754, 3728073887, 960326019, 553034587, 6277554, 15898376, 42253, 8122336
			},
			.prefetch0 = 5690,
			.prefetch1 = 65141,
			.ram = moveb_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				27424377, 2143622273, 1898719224, 1934024308, 3818693052, 2294210288, 1299964704, 466727882, 2191944304, 3187267849, 1939772371, 3248793754, 3728073887, 960326019, 553034587, 6277554, 15898376, 42240, 8122340
			},
			.prefetch0 = 35605,
			.prefetch1 = 4238,
			.ram = moveb_final_ram_21,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_21,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "022 MOVE.b -(A1), D2 1421",
		.initial = {
			.regs = {
				2992446395, 3868824501, 3930565824, 2693096662, 1497763119, 3594911960, 2294738320, 4292044397, 1373208731, 3692987382, 1813568681, 716267196, 3780658684, 1001978511, 4237849405, 10278346, 10150140, 42759, 7721996
			},
			.prefetch0 = 5153,
			.prefetch1 = 33532,
			.ram = moveb_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2992446395, 3868824501, 3930565755, 2693096662, 1497763119, 3594911960, 2294738320, 4292044397, 1373208731, 3692987381, 1813568681, 716267196, 3780658684, 1001978511, 4237849405, 10278346, 10150140, 42752, 7721998
			},
			.prefetch0 = 33532,
			.prefetch1 = 37659,
			.ram = moveb_final_ram_22,
			.ram_len = 8,
		},
		.transactions = moveb_transactions_22,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "023 MOVE.b (A2)+, (A0)+ 10da",
		.initial = {
			.regs = {
				1900555244, 1649224286, 119791263, 1682493791, 707990776, 3565146601, 519740800, 1132164033, 1617173368, 3794915607, 1191580328, 2259071543, 2015628244, 1742991120, 3691709505, 4767960, 4209148, 8980, 16508146
			},
			.prefetch0 = 4314,
			.prefetch1 = 48437,
			.ram = moveb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1900555244, 1649224286, 119791263, 1682493791, 707990776, 3565146601, 519740800, 1132164033, 1617173369, 3794915607, 1191580329, 2259071543, 2015628244, 1742991120, 3691709505, 4767960, 4209148, 8976, 16508148
			},
			.prefetch0 = 48437,
			.prefetch1 = 3122,
			.ram = moveb_final_ram_23,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 MOVE.b (d8, A3, Xn), D5 1a33",
		.initial = {
			.regs = {
				1116614664, 1808075855, 1206201231, 2655304004, 3076742621, 3026277188, 1159504557, 1715834200, 2493442012, 812084647, 3661811783, 1502536230, 3748927645, 154315152, 3304278232, 7527318, 2190200, 42267, 1942686
			},
			.prefetch0 = 6707,
			.prefetch1 = 56144,
			.ram = moveb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1116614664, 1808075855, 1206201231, 2655304004, 3076742621, 3026277315, 1159504557, 1715834200, 2493442012, 812084647, 3661811783, 1502536230, 3748927645, 154315152, 3304278232, 7527318, 2190200, 42264, 1942690
			},
			.prefetch0 = 10079,
			.prefetch1 = 56706,
			.ram = moveb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_24,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "025 MOVE.b -(A3), (A5)+ 1ae3",
		.initial = {
			.regs = {
				617444510, 1927943784, 13762107, 3285503929, 2390748482, 3883783991, 4099694011, 2016835952, 2925577516, 1639933189, 2486302925, 2469013556, 835884955, 265668189, 1303865892, 16215744, 9480142, 9243, 6270344
			},
			.prefetch0 = 6883,
			.prefetch1 = 15314,
			.ram = moveb_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				617444510, 1927943784, 13762107, 3285503929, 2390748482, 3883783991, 4099694011, 2016835952, 2925577516, 1639933189, 2486302925, 2469013555, 835884955, 265668190, 1303865892, 16215744, 9480142, 9240, 6270346
			},
			.prefetch0 = 15314,
			.prefetch1 = 19081,
			.ram = moveb_final_ram_25,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_25,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "026 MOVE.b (A1), (A0)+ 10d1",
		.initial = {
			.regs = {
				3140424882, 572727976, 1749728032, 521474271, 4217729690, 4227505275, 4075300650, 3124385147, 1588386366, 3312019078, 3942860560, 1109155638, 1772570615, 4289220871, 622042964, 15987310, 12737002, 42509, 8485284
			},
			.prefetch0 = 4305,
			.prefetch1 = 15761,
			.ram = moveb_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3140424882, 572727976, 1749728032, 521474271, 4217729690, 4227505275, 4075300650, 3124385147, 1588386367, 3312019078, 3942860560, 1109155638, 1772570615, 4289220871, 622042964, 15987310, 12737002, 42504, 8485286
			},
			.prefetch0 = 15761,
			.prefetch1 = 35414,
			.ram = moveb_final_ram_26,
			.ram_len = 10,
		},
		.transactions = moveb_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 MOVE.b (d8, A0, Xn), (d16, A4) 1970",
		.initial = {
			.regs = {
				2116703104, 1108192150, 2921917611, 936357644, 296406261, 3905391893, 725861862, 4178148122, 1851920547, 1650153388, 23315837, 1497058898, 1068347126, 3960615636, 369172871, 6367606, 10465860, 41736, 5463090
			},
			.prefetch0 = 6512,
			.prefetch1 = 12294,
			.ram = moveb_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2116703104, 1108192150, 2921917611, 936357644, 296406261, 3905391893, 725861862, 4178148122, 1851920547, 1650153388, 23315837, 1497058898, 1068347126, 3960615636, 369172871, 6367606, 10465860, 41736, 5463096
			},
			.prefetch0 = 39558,
			.prefetch1 = 18749,
			.ram = moveb_final_ram_27,
			.ram_len = 14,
		},
		.transactions = moveb_transactions_27,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "028 MOVE.b (A4)+, (d16, A3) 175c",
		.initial = {
			.regs = {
				368248580, 1102598383, 3954968934, 1966299500, 1554958321, 2467997283, 2321866058, 2584264887, 4005536524, 4200211773, 2243722792, 2246918708, 2445171526, 675696386, 1629866186, 5192826, 15165458, 41216, 4023566
			},
			.prefetch0 = 5980,
			.prefetch1 = 49257,
			.ram = moveb_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				368248580, 1102598383, 3954968934, 1966299500, 1554958321, 2467997283, 2321866058, 2584264887, 4005536524, 4200211773, 2243722792, 2246918708, 2445171527, 675696386, 1629866186, 5192826, 15165458, 41216, 4023570
			},
			.prefetch0 = 4023,
			.prefetch1 = 9995,
			.ram = moveb_final_ram_28,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 MOVE.b (A0), (xxx).w 11d0",
		.initial = {
			.regs = {
				686335188, 1543281129, 3126061963, 3151151144, 3320641629, 1771431418, 3591073269, 3272474188, 197911845, 1357073256, 584354412, 2764394398, 4268197256, 1555644848, 460059839, 3646214, 368060, 9742, 16520456
			},
			.prefetch0 = 4560,
			.prefetch1 = 4627,
			.ram = moveb_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				686335188, 1543281129, 3126061963, 3151151144, 3320641629, 1771431418, 3591073269, 3272474188, 197911845, 1357073256, 584354412, 2764394398, 4268197256, 1555644848, 460059839, 3646214, 368060, 9728, 16520460
			},
			.prefetch0 = 34773,
			.prefetch1 = 1400,
			.ram = moveb_final_ram_29,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 MOVE.b (A6), D3 1616",
		.initial = {
			.regs = {
				82857353, 387830512, 1196767901, 3962343072, 3817232436, 4188191388, 2132474344, 2234532176, 3080401083, 932657668, 1659507289, 2162488351, 182160779, 2482625121, 2536280965, 5877190, 15796000, 42247, 2769980
			},
			.prefetch0 = 5654,
			.prefetch1 = 10856,
			.ram = moveb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				82857353, 387830512, 1196767901, 3962342925, 3817232436, 4188191388, 2132474344, 2234532176, 3080401083, 932657668, 1659507289, 2162488351, 182160779, 2482625121, 2536280965, 5877190, 15796000, 42240, 2769982
			},
			.prefetch0 = 10856,
			.prefetch1 = 23709,
			.ram = moveb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = moveb_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 MOVE.b (A2)+, (d16, A1) 135a",
		.initial = {
			.regs = {
				305721441, 1812118509, 955097169, 2977328808, 2888786601, 198580714, 3323351881, 895669757, 779689249, 3413660918, 1344498542, 1326137784, 2039765445, 559430089, 3213899599, 15783032, 14771964, 32792, 10026416
			},
			.prefetch0 = 4954,
			.prefetch1 = 40674,
			.ram = moveb_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				305721441, 1812118509, 955097169, 2977328808, 2888786601, 198580714, 3323351881, 895669757, 779689249, 3413660918, 1344498543, 1326137784, 2039765445, 559430089, 3213899599, 15783032, 14771964, 32784, 10026420
			},
			.prefetch0 = 31410,
			.prefetch1 = 56271,
			.ram = moveb_final_ram_31,
			.ram_len = 12,
		},
		.transactions = moveb_transactions_31,
		.transactions_len = 4,
		.lenght = 16,
	},
};

#endif /* RBT_MOVEB_H */