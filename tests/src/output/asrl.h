#ifndef RBT_ASRL_H
#define RBT_ASRL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte asrl_initial_ram_0[] = {
		{ .addr = 0xccf9ce, .byte = 0xe2 },
		{ .addr = 0xccf9cf, .byte = 0x87 },
		{ .addr = 0xccf9d0, .byte = 0xa6 },
		{ .addr = 0xccf9d1, .byte = 0x6a },
		{ .addr = 0xccf9d2, .byte = 0x8d },
		{ .addr = 0xccf9d3, .byte = 0x3b }
};

static const SST_RamByte asrl_final_ram_0[] = {
		{ .addr = 0xccf9ce, .byte = 0xe2 },
		{ .addr = 0xccf9cf, .byte = 0x87 },
		{ .addr = 0xccf9d0, .byte = 0xa6 },
		{ .addr = 0xccf9d1, .byte = 0x6a },
		{ .addr = 0xccf9d2, .byte = 0x8d },
		{ .addr = 0xccf9d3, .byte = 0x3b }
};

static const SST_Transaction asrl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13433298, .data = 36155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asrl_initial_ram_1[] = {
		{ .addr = 0xb8ca1a, .byte = 0xe4 },
		{ .addr = 0xb8ca1b, .byte = 0xa3 },
		{ .addr = 0xb8ca1c, .byte = 0x8d },
		{ .addr = 0xb8ca1d, .byte = 0x8d },
		{ .addr = 0xb8ca1e, .byte = 0xe3 },
		{ .addr = 0xb8ca1f, .byte = 0xbd }
};

static const SST_RamByte asrl_final_ram_1[] = {
		{ .addr = 0xb8ca1a, .byte = 0xe4 },
		{ .addr = 0xb8ca1b, .byte = 0xa3 },
		{ .addr = 0xb8ca1c, .byte = 0x8d },
		{ .addr = 0xb8ca1d, .byte = 0x8d },
		{ .addr = 0xb8ca1e, .byte = 0xe3 },
		{ .addr = 0xb8ca1f, .byte = 0xbd }
};

static const SST_Transaction asrl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12110366, .data = 58301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asrl_initial_ram_2[] = {
		{ .addr = 0x79ae96, .byte = 0xec },
		{ .addr = 0x79ae97, .byte = 0xa3 },
		{ .addr = 0x79ae98, .byte = 0xe3 },
		{ .addr = 0x79ae99, .byte = 0x98 },
		{ .addr = 0x79ae9a, .byte = 0x43 },
		{ .addr = 0x79ae9b, .byte = 0x5a }
};

static const SST_RamByte asrl_final_ram_2[] = {
		{ .addr = 0x79ae96, .byte = 0xec },
		{ .addr = 0x79ae97, .byte = 0xa3 },
		{ .addr = 0x79ae98, .byte = 0xe3 },
		{ .addr = 0x79ae99, .byte = 0x98 },
		{ .addr = 0x79ae9a, .byte = 0x43 },
		{ .addr = 0x79ae9b, .byte = 0x5a }
};

static const SST_Transaction asrl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7974554, .data = 17242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte asrl_initial_ram_3[] = {
		{ .addr = 0xe35654, .byte = 0xe6 },
		{ .addr = 0xe35655, .byte = 0xa3 },
		{ .addr = 0xe35656, .byte = 0x9d },
		{ .addr = 0xe35657, .byte = 0x26 },
		{ .addr = 0xe35658, .byte = 0xd4 },
		{ .addr = 0xe35659, .byte = 0xcd }
};

static const SST_RamByte asrl_final_ram_3[] = {
		{ .addr = 0xe35654, .byte = 0xe6 },
		{ .addr = 0xe35655, .byte = 0xa3 },
		{ .addr = 0xe35656, .byte = 0x9d },
		{ .addr = 0xe35657, .byte = 0x26 },
		{ .addr = 0xe35658, .byte = 0xd4 },
		{ .addr = 0xe35659, .byte = 0xcd }
};

static const SST_Transaction asrl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14898776, .data = 54477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 82 },
};

static const SST_RamByte asrl_initial_ram_4[] = {
		{ .addr = 0x0e6c7a, .byte = 0xe2 },
		{ .addr = 0x0e6c7b, .byte = 0xa5 },
		{ .addr = 0x0e6c7c, .byte = 0x37 },
		{ .addr = 0x0e6c7d, .byte = 0x52 },
		{ .addr = 0x0e6c7e, .byte = 0x0d },
		{ .addr = 0x0e6c7f, .byte = 0xc2 }
};

static const SST_RamByte asrl_final_ram_4[] = {
		{ .addr = 0x0e6c7a, .byte = 0xe2 },
		{ .addr = 0x0e6c7b, .byte = 0xa5 },
		{ .addr = 0x0e6c7c, .byte = 0x37 },
		{ .addr = 0x0e6c7d, .byte = 0x52 },
		{ .addr = 0x0e6c7e, .byte = 0x0d },
		{ .addr = 0x0e6c7f, .byte = 0xc2 }
};

static const SST_Transaction asrl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 945278, .data = 3522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asrl_initial_ram_5[] = {
		{ .addr = 0xb94644, .byte = 0xe0 },
		{ .addr = 0xb94645, .byte = 0xa5 },
		{ .addr = 0xb94646, .byte = 0xb4 },
		{ .addr = 0xb94647, .byte = 0xf3 },
		{ .addr = 0xb94648, .byte = 0xd9 },
		{ .addr = 0xb94649, .byte = 0xb4 }
};

static const SST_RamByte asrl_final_ram_5[] = {
		{ .addr = 0xb94644, .byte = 0xe0 },
		{ .addr = 0xb94645, .byte = 0xa5 },
		{ .addr = 0xb94646, .byte = 0xb4 },
		{ .addr = 0xb94647, .byte = 0xf3 },
		{ .addr = 0xb94648, .byte = 0xd9 },
		{ .addr = 0xb94649, .byte = 0xb4 }
};

static const SST_Transaction asrl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12142152, .data = 55732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

static const SST_RamByte asrl_initial_ram_6[] = {
		{ .addr = 0xf6d1b2, .byte = 0xe8 },
		{ .addr = 0xf6d1b3, .byte = 0xa7 },
		{ .addr = 0xf6d1b4, .byte = 0x37 },
		{ .addr = 0xf6d1b5, .byte = 0xd4 },
		{ .addr = 0xf6d1b6, .byte = 0x23 },
		{ .addr = 0xf6d1b7, .byte = 0xae }
};

static const SST_RamByte asrl_final_ram_6[] = {
		{ .addr = 0xf6d1b2, .byte = 0xe8 },
		{ .addr = 0xf6d1b3, .byte = 0xa7 },
		{ .addr = 0xf6d1b4, .byte = 0x37 },
		{ .addr = 0xf6d1b5, .byte = 0xd4 },
		{ .addr = 0xf6d1b6, .byte = 0x23 },
		{ .addr = 0xf6d1b7, .byte = 0xae }
};

static const SST_Transaction asrl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16175542, .data = 9134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 80 },
};

static const SST_RamByte asrl_initial_ram_7[] = {
		{ .addr = 0x26d4ea, .byte = 0xe4 },
		{ .addr = 0x26d4eb, .byte = 0x82 },
		{ .addr = 0x26d4ec, .byte = 0x09 },
		{ .addr = 0x26d4ed, .byte = 0x27 },
		{ .addr = 0x26d4ee, .byte = 0x80 },
		{ .addr = 0x26d4ef, .byte = 0x3d }
};

static const SST_RamByte asrl_final_ram_7[] = {
		{ .addr = 0x26d4ea, .byte = 0xe4 },
		{ .addr = 0x26d4eb, .byte = 0x82 },
		{ .addr = 0x26d4ec, .byte = 0x09 },
		{ .addr = 0x26d4ed, .byte = 0x27 },
		{ .addr = 0x26d4ee, .byte = 0x80 },
		{ .addr = 0x26d4ef, .byte = 0x3d }
};

static const SST_Transaction asrl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2544878, .data = 32829, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte asrl_initial_ram_8[] = {
		{ .addr = 0x7c25fa, .byte = 0xee },
		{ .addr = 0x7c25fb, .byte = 0xa6 },
		{ .addr = 0x7c25fc, .byte = 0x6a },
		{ .addr = 0x7c25fd, .byte = 0xf4 },
		{ .addr = 0x7c25fe, .byte = 0x0e },
		{ .addr = 0x7c25ff, .byte = 0x1f }
};

static const SST_RamByte asrl_final_ram_8[] = {
		{ .addr = 0x7c25fa, .byte = 0xee },
		{ .addr = 0x7c25fb, .byte = 0xa6 },
		{ .addr = 0x7c25fc, .byte = 0x6a },
		{ .addr = 0x7c25fd, .byte = 0xf4 },
		{ .addr = 0x7c25fe, .byte = 0x0e },
		{ .addr = 0x7c25ff, .byte = 0x1f }
};

static const SST_Transaction asrl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8136190, .data = 3615, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 36 },
};

static const SST_RamByte asrl_initial_ram_9[] = {
		{ .addr = 0x15920e, .byte = 0xea },
		{ .addr = 0x15920f, .byte = 0x85 },
		{ .addr = 0x159210, .byte = 0xeb },
		{ .addr = 0x159211, .byte = 0xfd },
		{ .addr = 0x159212, .byte = 0xb1 },
		{ .addr = 0x159213, .byte = 0x8c }
};

static const SST_RamByte asrl_final_ram_9[] = {
		{ .addr = 0x15920e, .byte = 0xea },
		{ .addr = 0x15920f, .byte = 0x85 },
		{ .addr = 0x159210, .byte = 0xeb },
		{ .addr = 0x159211, .byte = 0xfd },
		{ .addr = 0x159212, .byte = 0xb1 },
		{ .addr = 0x159213, .byte = 0x8c }
};

static const SST_Transaction asrl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1413650, .data = 45452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asrl_initial_ram_10[] = {
		{ .addr = 0x361bda, .byte = 0xe6 },
		{ .addr = 0x361bdb, .byte = 0x81 },
		{ .addr = 0x361bdc, .byte = 0xba },
		{ .addr = 0x361bdd, .byte = 0xe6 },
		{ .addr = 0x361bde, .byte = 0xb3 },
		{ .addr = 0x361bdf, .byte = 0xa3 }
};

static const SST_RamByte asrl_final_ram_10[] = {
		{ .addr = 0x361bda, .byte = 0xe6 },
		{ .addr = 0x361bdb, .byte = 0x81 },
		{ .addr = 0x361bdc, .byte = 0xba },
		{ .addr = 0x361bdd, .byte = 0xe6 },
		{ .addr = 0x361bde, .byte = 0xb3 },
		{ .addr = 0x361bdf, .byte = 0xa3 }
};

static const SST_Transaction asrl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3546078, .data = 45987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte asrl_initial_ram_11[] = {
		{ .addr = 0x154f8e, .byte = 0xe8 },
		{ .addr = 0x154f8f, .byte = 0x87 },
		{ .addr = 0x154f90, .byte = 0xea },
		{ .addr = 0x154f91, .byte = 0xe3 },
		{ .addr = 0x154f92, .byte = 0x5d },
		{ .addr = 0x154f93, .byte = 0x57 }
};

static const SST_RamByte asrl_final_ram_11[] = {
		{ .addr = 0x154f8e, .byte = 0xe8 },
		{ .addr = 0x154f8f, .byte = 0x87 },
		{ .addr = 0x154f90, .byte = 0xea },
		{ .addr = 0x154f91, .byte = 0xe3 },
		{ .addr = 0x154f92, .byte = 0x5d },
		{ .addr = 0x154f93, .byte = 0x57 }
};

static const SST_Transaction asrl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1396626, .data = 23895, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte asrl_initial_ram_12[] = {
		{ .addr = 0xc4e664, .byte = 0xea },
		{ .addr = 0xc4e665, .byte = 0xa7 },
		{ .addr = 0xc4e666, .byte = 0x82 },
		{ .addr = 0xc4e667, .byte = 0x3a },
		{ .addr = 0xc4e668, .byte = 0xb2 },
		{ .addr = 0xc4e669, .byte = 0x13 }
};

static const SST_RamByte asrl_final_ram_12[] = {
		{ .addr = 0xc4e664, .byte = 0xea },
		{ .addr = 0xc4e665, .byte = 0xa7 },
		{ .addr = 0xc4e666, .byte = 0x82 },
		{ .addr = 0xc4e667, .byte = 0x3a },
		{ .addr = 0xc4e668, .byte = 0xb2 },
		{ .addr = 0xc4e669, .byte = 0x13 }
};

static const SST_Transaction asrl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12904040, .data = 45587, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 90 },
};

static const SST_RamByte asrl_initial_ram_13[] = {
		{ .addr = 0xc835ac, .byte = 0xea },
		{ .addr = 0xc835ad, .byte = 0x86 },
		{ .addr = 0xc835ae, .byte = 0xf7 },
		{ .addr = 0xc835af, .byte = 0xc8 },
		{ .addr = 0xc835b0, .byte = 0x29 },
		{ .addr = 0xc835b1, .byte = 0xe8 }
};

static const SST_RamByte asrl_final_ram_13[] = {
		{ .addr = 0xc835ac, .byte = 0xea },
		{ .addr = 0xc835ad, .byte = 0x86 },
		{ .addr = 0xc835ae, .byte = 0xf7 },
		{ .addr = 0xc835af, .byte = 0xc8 },
		{ .addr = 0xc835b0, .byte = 0x29 },
		{ .addr = 0xc835b1, .byte = 0xe8 }
};

static const SST_Transaction asrl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13120944, .data = 10728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asrl_initial_ram_14[] = {
		{ .addr = 0x2de3d4, .byte = 0xe8 },
		{ .addr = 0x2de3d5, .byte = 0x82 },
		{ .addr = 0x2de3d6, .byte = 0x95 },
		{ .addr = 0x2de3d7, .byte = 0x13 },
		{ .addr = 0x2de3d8, .byte = 0x38 },
		{ .addr = 0x2de3d9, .byte = 0x63 }
};

static const SST_RamByte asrl_final_ram_14[] = {
		{ .addr = 0x2de3d4, .byte = 0xe8 },
		{ .addr = 0x2de3d5, .byte = 0x82 },
		{ .addr = 0x2de3d6, .byte = 0x95 },
		{ .addr = 0x2de3d7, .byte = 0x13 },
		{ .addr = 0x2de3d8, .byte = 0x38 },
		{ .addr = 0x2de3d9, .byte = 0x63 }
};

static const SST_Transaction asrl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3007448, .data = 14435, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte asrl_initial_ram_15[] = {
		{ .addr = 0x8629e2, .byte = 0xea },
		{ .addr = 0x8629e3, .byte = 0x87 },
		{ .addr = 0x8629e4, .byte = 0x15 },
		{ .addr = 0x8629e5, .byte = 0x61 },
		{ .addr = 0x8629e6, .byte = 0x9d },
		{ .addr = 0x8629e7, .byte = 0x58 }
};

static const SST_RamByte asrl_final_ram_15[] = {
		{ .addr = 0x8629e2, .byte = 0xea },
		{ .addr = 0x8629e3, .byte = 0x87 },
		{ .addr = 0x8629e4, .byte = 0x15 },
		{ .addr = 0x8629e5, .byte = 0x61 },
		{ .addr = 0x8629e6, .byte = 0x9d },
		{ .addr = 0x8629e7, .byte = 0x58 }
};

static const SST_Transaction asrl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8792550, .data = 40280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asrl_initial_ram_16[] = {
		{ .addr = 0xb0173a, .byte = 0xe2 },
		{ .addr = 0xb0173b, .byte = 0x80 },
		{ .addr = 0xb0173c, .byte = 0xc8 },
		{ .addr = 0xb0173d, .byte = 0x97 },
		{ .addr = 0xb0173e, .byte = 0xf1 },
		{ .addr = 0xb0173f, .byte = 0x78 }
};

static const SST_RamByte asrl_final_ram_16[] = {
		{ .addr = 0xb0173a, .byte = 0xe2 },
		{ .addr = 0xb0173b, .byte = 0x80 },
		{ .addr = 0xb0173c, .byte = 0xc8 },
		{ .addr = 0xb0173d, .byte = 0x97 },
		{ .addr = 0xb0173e, .byte = 0xf1 },
		{ .addr = 0xb0173f, .byte = 0x78 }
};

static const SST_Transaction asrl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11540286, .data = 61816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asrl_initial_ram_17[] = {
		{ .addr = 0x875082, .byte = 0xea },
		{ .addr = 0x875083, .byte = 0xa2 },
		{ .addr = 0x875084, .byte = 0x30 },
		{ .addr = 0x875085, .byte = 0x54 },
		{ .addr = 0x875086, .byte = 0xda },
		{ .addr = 0x875087, .byte = 0x87 }
};

static const SST_RamByte asrl_final_ram_17[] = {
		{ .addr = 0x875082, .byte = 0xea },
		{ .addr = 0x875083, .byte = 0xa2 },
		{ .addr = 0x875084, .byte = 0x30 },
		{ .addr = 0x875085, .byte = 0x54 },
		{ .addr = 0x875086, .byte = 0xda },
		{ .addr = 0x875087, .byte = 0x87 }
};

static const SST_Transaction asrl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8867974, .data = 55943, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 62 },
};

static const SST_RamByte asrl_initial_ram_18[] = {
		{ .addr = 0xa871d6, .byte = 0xea },
		{ .addr = 0xa871d7, .byte = 0xa2 },
		{ .addr = 0xa871d8, .byte = 0x49 },
		{ .addr = 0xa871d9, .byte = 0x1a },
		{ .addr = 0xa871da, .byte = 0xaa },
		{ .addr = 0xa871db, .byte = 0x65 }
};

static const SST_RamByte asrl_final_ram_18[] = {
		{ .addr = 0xa871d6, .byte = 0xea },
		{ .addr = 0xa871d7, .byte = 0xa2 },
		{ .addr = 0xa871d8, .byte = 0x49 },
		{ .addr = 0xa871d9, .byte = 0x1a },
		{ .addr = 0xa871da, .byte = 0xaa },
		{ .addr = 0xa871db, .byte = 0x65 }
};

static const SST_Transaction asrl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11039194, .data = 43621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 90 },
};

static const SST_RamByte asrl_initial_ram_19[] = {
		{ .addr = 0xc5a826, .byte = 0xe4 },
		{ .addr = 0xc5a827, .byte = 0x85 },
		{ .addr = 0xc5a828, .byte = 0x71 },
		{ .addr = 0xc5a829, .byte = 0x09 },
		{ .addr = 0xc5a82a, .byte = 0x43 },
		{ .addr = 0xc5a82b, .byte = 0xa1 }
};

static const SST_RamByte asrl_final_ram_19[] = {
		{ .addr = 0xc5a826, .byte = 0xe4 },
		{ .addr = 0xc5a827, .byte = 0x85 },
		{ .addr = 0xc5a828, .byte = 0x71 },
		{ .addr = 0xc5a829, .byte = 0x09 },
		{ .addr = 0xc5a82a, .byte = 0x43 },
		{ .addr = 0xc5a82b, .byte = 0xa1 }
};

static const SST_Transaction asrl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12953642, .data = 17313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte asrl_initial_ram_20[] = {
		{ .addr = 0x64d230, .byte = 0xec },
		{ .addr = 0x64d231, .byte = 0xa3 },
		{ .addr = 0x64d232, .byte = 0xaf },
		{ .addr = 0x64d233, .byte = 0x7f },
		{ .addr = 0x64d234, .byte = 0x5e },
		{ .addr = 0x64d235, .byte = 0xfa }
};

static const SST_RamByte asrl_final_ram_20[] = {
		{ .addr = 0x64d230, .byte = 0xec },
		{ .addr = 0x64d231, .byte = 0xa3 },
		{ .addr = 0x64d232, .byte = 0xaf },
		{ .addr = 0x64d233, .byte = 0x7f },
		{ .addr = 0x64d234, .byte = 0x5e },
		{ .addr = 0x64d235, .byte = 0xfa }
};

static const SST_Transaction asrl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6607412, .data = 24314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 42 },
};

static const SST_RamByte asrl_initial_ram_21[] = {
		{ .addr = 0xadf76e, .byte = 0xe2 },
		{ .addr = 0xadf76f, .byte = 0x80 },
		{ .addr = 0xadf770, .byte = 0x4e },
		{ .addr = 0xadf771, .byte = 0xa0 },
		{ .addr = 0xadf772, .byte = 0x0f },
		{ .addr = 0xadf773, .byte = 0x93 }
};

static const SST_RamByte asrl_final_ram_21[] = {
		{ .addr = 0xadf76e, .byte = 0xe2 },
		{ .addr = 0xadf76f, .byte = 0x80 },
		{ .addr = 0xadf770, .byte = 0x4e },
		{ .addr = 0xadf771, .byte = 0xa0 },
		{ .addr = 0xadf772, .byte = 0x0f },
		{ .addr = 0xadf773, .byte = 0x93 }
};

static const SST_Transaction asrl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11401074, .data = 3987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asrl_initial_ram_22[] = {
		{ .addr = 0x35e378, .byte = 0xe2 },
		{ .addr = 0x35e379, .byte = 0xa4 },
		{ .addr = 0x35e37a, .byte = 0x46 },
		{ .addr = 0x35e37b, .byte = 0x3a },
		{ .addr = 0x35e37c, .byte = 0xa8 },
		{ .addr = 0x35e37d, .byte = 0xbd }
};

static const SST_RamByte asrl_final_ram_22[] = {
		{ .addr = 0x35e378, .byte = 0xe2 },
		{ .addr = 0x35e379, .byte = 0xa4 },
		{ .addr = 0x35e37a, .byte = 0x46 },
		{ .addr = 0x35e37b, .byte = 0x3a },
		{ .addr = 0x35e37c, .byte = 0xa8 },
		{ .addr = 0x35e37d, .byte = 0xbd }
};

static const SST_Transaction asrl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3531644, .data = 43197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte asrl_initial_ram_23[] = {
		{ .addr = 0x8e0992, .byte = 0xe2 },
		{ .addr = 0x8e0993, .byte = 0xa0 },
		{ .addr = 0x8e0994, .byte = 0x34 },
		{ .addr = 0x8e0995, .byte = 0x9d },
		{ .addr = 0x8e0996, .byte = 0xa4 },
		{ .addr = 0x8e0997, .byte = 0x66 }
};

static const SST_RamByte asrl_final_ram_23[] = {
		{ .addr = 0x8e0992, .byte = 0xe2 },
		{ .addr = 0x8e0993, .byte = 0xa0 },
		{ .addr = 0x8e0994, .byte = 0x34 },
		{ .addr = 0x8e0995, .byte = 0x9d },
		{ .addr = 0x8e0996, .byte = 0xa4 },
		{ .addr = 0x8e0997, .byte = 0x66 }
};

static const SST_Transaction asrl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9308566, .data = 42086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte asrl_initial_ram_24[] = {
		{ .addr = 0xd850dc, .byte = 0xea },
		{ .addr = 0xd850dd, .byte = 0xa3 },
		{ .addr = 0xd850de, .byte = 0x26 },
		{ .addr = 0xd850df, .byte = 0x44 },
		{ .addr = 0xd850e0, .byte = 0x84 },
		{ .addr = 0xd850e1, .byte = 0x5e }
};

static const SST_RamByte asrl_final_ram_24[] = {
		{ .addr = 0xd850dc, .byte = 0xea },
		{ .addr = 0xd850dd, .byte = 0xa3 },
		{ .addr = 0xd850de, .byte = 0x26 },
		{ .addr = 0xd850df, .byte = 0x44 },
		{ .addr = 0xd850e0, .byte = 0x84 },
		{ .addr = 0xd850e1, .byte = 0x5e }
};

static const SST_Transaction asrl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14176480, .data = 33886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte asrl_initial_ram_25[] = {
		{ .addr = 0x711bba, .byte = 0xe8 },
		{ .addr = 0x711bbb, .byte = 0xa1 },
		{ .addr = 0x711bbc, .byte = 0xe5 },
		{ .addr = 0x711bbd, .byte = 0xee },
		{ .addr = 0x711bbe, .byte = 0x10 },
		{ .addr = 0x711bbf, .byte = 0x84 }
};

static const SST_RamByte asrl_final_ram_25[] = {
		{ .addr = 0x711bba, .byte = 0xe8 },
		{ .addr = 0x711bbb, .byte = 0xa1 },
		{ .addr = 0x711bbc, .byte = 0xe5 },
		{ .addr = 0x711bbd, .byte = 0xee },
		{ .addr = 0x711bbe, .byte = 0x10 },
		{ .addr = 0x711bbf, .byte = 0x84 }
};

static const SST_Transaction asrl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7412670, .data = 4228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 34 },
};

static const SST_RamByte asrl_initial_ram_26[] = {
		{ .addr = 0x55d5dc, .byte = 0xec },
		{ .addr = 0x55d5dd, .byte = 0xa5 },
		{ .addr = 0x55d5de, .byte = 0xf3 },
		{ .addr = 0x55d5df, .byte = 0xc3 },
		{ .addr = 0x55d5e0, .byte = 0xa6 },
		{ .addr = 0x55d5e1, .byte = 0x3b }
};

static const SST_RamByte asrl_final_ram_26[] = {
		{ .addr = 0x55d5dc, .byte = 0xec },
		{ .addr = 0x55d5dd, .byte = 0xa5 },
		{ .addr = 0x55d5de, .byte = 0xf3 },
		{ .addr = 0x55d5df, .byte = 0xc3 },
		{ .addr = 0x55d5e0, .byte = 0xa6 },
		{ .addr = 0x55d5e1, .byte = 0x3b }
};

static const SST_Transaction asrl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5625312, .data = 42555, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte asrl_initial_ram_27[] = {
		{ .addr = 0x7f91b6, .byte = 0xe4 },
		{ .addr = 0x7f91b7, .byte = 0x85 },
		{ .addr = 0x7f91b8, .byte = 0x73 },
		{ .addr = 0x7f91b9, .byte = 0x1f },
		{ .addr = 0x7f91ba, .byte = 0x8b },
		{ .addr = 0x7f91bb, .byte = 0xe5 }
};

static const SST_RamByte asrl_final_ram_27[] = {
		{ .addr = 0x7f91b6, .byte = 0xe4 },
		{ .addr = 0x7f91b7, .byte = 0x85 },
		{ .addr = 0x7f91b8, .byte = 0x73 },
		{ .addr = 0x7f91b9, .byte = 0x1f },
		{ .addr = 0x7f91ba, .byte = 0x8b },
		{ .addr = 0x7f91bb, .byte = 0xe5 }
};

static const SST_Transaction asrl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8360378, .data = 35813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte asrl_initial_ram_28[] = {
		{ .addr = 0x7b9fe4, .byte = 0xec },
		{ .addr = 0x7b9fe5, .byte = 0xa4 },
		{ .addr = 0x7b9fe6, .byte = 0x07 },
		{ .addr = 0x7b9fe7, .byte = 0x18 },
		{ .addr = 0x7b9fe8, .byte = 0x42 },
		{ .addr = 0x7b9fe9, .byte = 0xbf }
};

static const SST_RamByte asrl_final_ram_28[] = {
		{ .addr = 0x7b9fe4, .byte = 0xec },
		{ .addr = 0x7b9fe5, .byte = 0xa4 },
		{ .addr = 0x7b9fe6, .byte = 0x07 },
		{ .addr = 0x7b9fe7, .byte = 0x18 },
		{ .addr = 0x7b9fe8, .byte = 0x42 },
		{ .addr = 0x7b9fe9, .byte = 0xbf }
};

static const SST_Transaction asrl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8101864, .data = 17087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 90 },
};

static const SST_RamByte asrl_initial_ram_29[] = {
		{ .addr = 0xde2ea4, .byte = 0xe0 },
		{ .addr = 0xde2ea5, .byte = 0xa4 },
		{ .addr = 0xde2ea6, .byte = 0x1f },
		{ .addr = 0xde2ea7, .byte = 0x10 },
		{ .addr = 0xde2ea8, .byte = 0x0b },
		{ .addr = 0xde2ea9, .byte = 0x42 }
};

static const SST_RamByte asrl_final_ram_29[] = {
		{ .addr = 0xde2ea4, .byte = 0xe0 },
		{ .addr = 0xde2ea5, .byte = 0xa4 },
		{ .addr = 0xde2ea6, .byte = 0x1f },
		{ .addr = 0xde2ea7, .byte = 0x10 },
		{ .addr = 0xde2ea8, .byte = 0x0b },
		{ .addr = 0xde2ea9, .byte = 0x42 }
};

static const SST_Transaction asrl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14560936, .data = 2882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte asrl_initial_ram_30[] = {
		{ .addr = 0x2c73a2, .byte = 0xe0 },
		{ .addr = 0x2c73a3, .byte = 0xa2 },
		{ .addr = 0x2c73a4, .byte = 0xf3 },
		{ .addr = 0x2c73a5, .byte = 0x93 },
		{ .addr = 0x2c73a6, .byte = 0xaa },
		{ .addr = 0x2c73a7, .byte = 0x53 }
};

static const SST_RamByte asrl_final_ram_30[] = {
		{ .addr = 0x2c73a2, .byte = 0xe0 },
		{ .addr = 0x2c73a3, .byte = 0xa2 },
		{ .addr = 0x2c73a4, .byte = 0xf3 },
		{ .addr = 0x2c73a5, .byte = 0x93 },
		{ .addr = 0x2c73a6, .byte = 0xaa },
		{ .addr = 0x2c73a7, .byte = 0x53 }
};

static const SST_Transaction asrl_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2913190, .data = 43603, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 104 },
};

static const SST_RamByte asrl_initial_ram_31[] = {
		{ .addr = 0xfc5748, .byte = 0xec },
		{ .addr = 0xfc5749, .byte = 0x81 },
		{ .addr = 0xfc574a, .byte = 0xc0 },
		{ .addr = 0xfc574b, .byte = 0x9d },
		{ .addr = 0xfc574c, .byte = 0x26 },
		{ .addr = 0xfc574d, .byte = 0x04 }
};

static const SST_RamByte asrl_final_ram_31[] = {
		{ .addr = 0xfc5748, .byte = 0xec },
		{ .addr = 0xfc5749, .byte = 0x81 },
		{ .addr = 0xfc574a, .byte = 0xc0 },
		{ .addr = 0xfc574b, .byte = 0x9d },
		{ .addr = 0xfc574c, .byte = 0x26 },
		{ .addr = 0xfc574d, .byte = 0x04 }
};

static const SST_Transaction asrl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16537420, .data = 9732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_TestCase asrl[] = {
	{
		.name = "000 ASR.l 1, D7 e287",
		.initial = {
			.regs = {
				4219025827, 2540318018, 4022561933, 3988407213, 4254647945, 926753132, 1434393014, 1687202767, 1049309671, 2556119619, 2951051429, 3965440634, 1865347610, 3978938027, 3432232794, 5800670, 10802408, 33550, 13433298
			},
			.prefetch0 = 57991,
			.prefetch1 = 42602,
			.ram = asrl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4219025827, 2540318018, 4022561933, 3988407213, 4254647945, 926753132, 1434393014, 843601383, 1049309671, 2556119619, 2951051429, 3965440634, 1865347610, 3978938027, 3432232794, 5800670, 10802408, 33553, 13433300
			},
			.prefetch0 = 42602,
			.prefetch1 = 36155,
			.ram = asrl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_0,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "001 ASR.l D2, D3 e4a3",
		.initial = {
			.regs = {
				237175329, 889758890, 282180549, 4189751911, 2790423363, 1427765748, 1253685930, 3874871003, 2836645193, 3055112176, 2471182979, 3912346504, 2813912489, 212583578, 626194313, 5443658, 15401038, 9759, 12110366
			},
			.prefetch0 = 58531,
			.prefetch1 = 36237,
			.ram = asrl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				237175329, 889758890, 282180549, 4291679315, 2790423363, 1427765748, 1253685930, 3874871003, 2836645193, 3055112176, 2471182979, 3912346504, 2813912489, 212583578, 626194313, 5443658, 15401038, 9736, 12110368
			},
			.prefetch0 = 36237,
			.prefetch1 = 58301,
			.ram = asrl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_1,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "002 ASR.l D6, D3 eca3",
		.initial = {
			.regs = {
				3175925413, 700501899, 868968468, 1898394226, 4222734006, 1014524157, 4109978956, 2381123365, 3287017122, 3875575894, 4170812112, 794646445, 4088490639, 3098649082, 1496099934, 12880914, 16765044, 41985, 7974554
			},
			.prefetch0 = 60579,
			.prefetch1 = 58264,
			.ram = asrl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3175925413, 700501899, 868968468, 463475, 4222734006, 1014524157, 4109978956, 2381123365, 3287017122, 3875575894, 4170812112, 794646445, 4088490639, 3098649082, 1496099934, 12880914, 16765044, 41984, 7974556
			},
			.prefetch0 = 58264,
			.prefetch1 = 17242,
			.ram = asrl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_2,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "003 ASR.l D3, D3 e6a3",
		.initial = {
			.regs = {
				2563328224, 3802933517, 389268581, 18515943, 2384814576, 508990965, 1679010401, 87777122, 418508930, 3382278139, 789519292, 1286402781, 246256445, 4090682815, 994712334, 16203624, 6475614, 1809, 14898776
			},
			.prefetch0 = 59043,
			.prefetch1 = 40230,
			.ram = asrl_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2563328224, 3802933517, 389268581, 0, 2384814576, 508990965, 1679010401, 87777122, 418508930, 3382278139, 789519292, 1286402781, 246256445, 4090682815, 994712334, 16203624, 6475614, 1796, 14898778
			},
			.prefetch0 = 40230,
			.prefetch1 = 54477,
			.ram = asrl_final_ram_3,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_3,
		.transactions_len = 2,
		.lenght = 86,
	},
	{
		.name = "004 ASR.l D1, D5 e2a5",
		.initial = {
			.regs = {
				1356697472, 2328182977, 3331548166, 3586529992, 868369414, 3342638089, 3900468802, 2789605913, 1022079987, 3766137130, 654342246, 452133802, 3533680424, 685664794, 1539123561, 13578388, 12187242, 8977, 945278
			},
			.prefetch0 = 58021,
			.prefetch1 = 14162,
			.ram = asrl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1356697472, 2328182977, 3331548166, 3586529992, 868369414, 3818802692, 3900468802, 2789605913, 1022079987, 3766137130, 654342246, 452133802, 3533680424, 685664794, 1539123561, 13578388, 12187242, 8985, 945280
			},
			.prefetch0 = 14162,
			.prefetch1 = 3522,
			.ram = asrl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_4,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "005 ASR.l D0, D5 e0a5",
		.initial = {
			.regs = {
				2582797450, 529342097, 2451750042, 3987241075, 2055607922, 1371132756, 3989526806, 2358883062, 2819728461, 3738309347, 3477862427, 775804075, 2792790861, 1749828357, 1056292616, 8180622, 6064302, 1030, 12142152
			},
			.prefetch0 = 57509,
			.prefetch1 = 46323,
			.ram = asrl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2582797450, 529342097, 2451750042, 3987241075, 2055607922, 1338996, 3989526806, 2358883062, 2819728461, 3738309347, 3477862427, 775804075, 2792790861, 1749828357, 1056292616, 8180622, 6064302, 1041, 12142154
			},
			.prefetch0 = 46323,
			.prefetch1 = 55732,
			.ram = asrl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_5,
		.transactions_len = 2,
		.lenght = 28,
	},
	{
		.name = "006 ASR.l D4, D7 e8a7",
		.initial = {
			.regs = {
				4080890471, 3594058870, 591763482, 4214846436, 2749171878, 1301273358, 4269184129, 3754488565, 3408540927, 1900725527, 1867757425, 2820476075, 3802056578, 533989358, 27988934, 1850088, 8734322, 1550, 16175542
			},
			.prefetch0 = 59559,
			.prefetch1 = 14292,
			.ram = asrl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4080890471, 3594058870, 591763482, 4214846436, 2749171878, 1301273358, 4269184129, 4294967295, 3408540927, 1900725527, 1867757425, 2820476075, 3802056578, 533989358, 27988934, 1850088, 8734322, 1561, 16175544
			},
			.prefetch0 = 14292,
			.prefetch1 = 9134,
			.ram = asrl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_6,
		.transactions_len = 2,
		.lenght = 84,
	},
	{
		.name = "007 ASR.l 2, D2 e482",
		.initial = {
			.regs = {
				2226181909, 4059642861, 4050342126, 1206499589, 4090617294, 435457578, 1886055269, 480680077, 3568206676, 3089004827, 2633017151, 3238241704, 397794957, 1923918931, 3430714117, 5649292, 13702872, 42500, 2544878
			},
			.prefetch0 = 58498,
			.prefetch1 = 2343,
			.ram = asrl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2226181909, 4059642861, 4233811003, 1206499589, 4090617294, 435457578, 1886055269, 480680077, 3568206676, 3089004827, 2633017151, 3238241704, 397794957, 1923918931, 3430714117, 5649292, 13702872, 42521, 2544880
			},
			.prefetch0 = 2343,
			.prefetch1 = 32829,
			.ram = asrl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_7,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "008 ASR.l D7, D6 eea6",
		.initial = {
			.regs = {
				340559893, 2782926863, 2066644253, 2912821623, 2715467387, 162190232, 1282865390, 2208200464, 4016970024, 1183331036, 985101896, 2277769330, 2152108720, 509156218, 1959820789, 3230382, 696096, 34332, 8136190
			},
			.prefetch0 = 61094,
			.prefetch1 = 27380,
			.ram = asrl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				340559893, 2782926863, 2066644253, 2912821623, 2715467387, 162190232, 19574, 2208200464, 4016970024, 1183331036, 985101896, 2277769330, 2152108720, 509156218, 1959820789, 3230382, 696096, 34321, 8136192
			},
			.prefetch0 = 27380,
			.prefetch1 = 3615,
			.ram = asrl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_8,
		.transactions_len = 2,
		.lenght = 40,
	},
	{
		.name = "009 ASR.l 5, D5 ea85",
		.initial = {
			.regs = {
				2704941675, 3889870821, 4245771794, 2969392324, 1735908814, 3004764213, 1292519608, 2864686587, 4283640506, 1004938168, 2507227799, 3501227970, 3802235241, 163029726, 3440215443, 7740656, 4807038, 42247, 1413650
			},
			.prefetch0 = 60037,
			.prefetch1 = 60413,
			.ram = asrl_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2704941675, 3889870821, 4245771794, 2969392324, 1735908814, 4254648449, 1292519608, 2864686587, 4283640506, 1004938168, 2507227799, 3501227970, 3802235241, 163029726, 3440215443, 7740656, 4807038, 42265, 1413652
			},
			.prefetch0 = 60413,
			.prefetch1 = 45452,
			.ram = asrl_final_ram_9,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_9,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "010 ASR.l 3, D1 e681",
		.initial = {
			.regs = {
				1154012635, 2312688627, 4198631853, 2249842790, 620025300, 859204896, 3098488850, 1993864832, 3244249090, 681775462, 1256772811, 1389135328, 2166953906, 672022652, 2349328347, 12181322, 16533838, 281, 3546078
			},
			.prefetch0 = 59009,
			.prefetch1 = 47846,
			.ram = asrl_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1154012635, 4047182462, 4198631853, 2249842790, 620025300, 859204896, 3098488850, 1993864832, 3244249090, 681775462, 1256772811, 1389135328, 2166953906, 672022652, 2349328347, 12181322, 16533838, 264, 3546080
			},
			.prefetch0 = 47846,
			.prefetch1 = 45987,
			.ram = asrl_final_ram_10,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_10,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "011 ASR.l 4, D7 e887",
		.initial = {
			.regs = {
				2696460490, 2971413682, 536382406, 453653977, 4000870640, 593345829, 2315983218, 1643253036, 3751799370, 3188415957, 45092878, 1178263934, 838993638, 2107050118, 2797870883, 6983040, 2545986, 798, 1396626
			},
			.prefetch0 = 59527,
			.prefetch1 = 60131,
			.ram = asrl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2696460490, 2971413682, 536382406, 453653977, 4000870640, 593345829, 2315983218, 102703314, 3751799370, 3188415957, 45092878, 1178263934, 838993638, 2107050118, 2797870883, 6983040, 2545986, 785, 1396628
			},
			.prefetch0 = 60131,
			.prefetch1 = 23895,
			.ram = asrl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_11,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "012 ASR.l D5, D7 eaa7",
		.initial = {
			.regs = {
				763400345, 2566699474, 3667511122, 5707794, 4146515250, 1570366763, 3396197503, 584679440, 1045219173, 3353488118, 2802233035, 479143314, 610926326, 3804301363, 2304575214, 14127350, 10327918, 279, 12904040
			},
			.prefetch0 = 60071,
			.prefetch1 = 33338,
			.ram = asrl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				763400345, 2566699474, 3667511122, 5707794, 4146515250, 1570366763, 3396197503, 0, 1045219173, 3353488118, 2802233035, 479143314, 610926326, 3804301363, 2304575214, 14127350, 10327918, 260, 12904042
			},
			.prefetch0 = 33338,
			.prefetch1 = 45587,
			.ram = asrl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_12,
		.transactions_len = 2,
		.lenght = 94,
	},
	{
		.name = "013 ASR.l 5, D6 ea86",
		.initial = {
			.regs = {
				1117372034, 3993449059, 4182623123, 3286592003, 2160086943, 255704432, 2224587207, 3716345011, 2979857965, 3586921666, 974730112, 1503770706, 2018212154, 2233157840, 1150188460, 13541630, 14297322, 42770, 13120944
			},
			.prefetch0 = 60038,
			.prefetch1 = 63432,
			.ram = asrl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1117372034, 3993449059, 4182623123, 3286592003, 2160086943, 255704432, 4230267918, 3716345011, 2979857965, 3586921666, 974730112, 1503770706, 2018212154, 2233157840, 1150188460, 13541630, 14297322, 42760, 13120946
			},
			.prefetch0 = 63432,
			.prefetch1 = 10728,
			.ram = asrl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_13,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "014 ASR.l 4, D2 e882",
		.initial = {
			.regs = {
				2443690872, 2946074992, 3962679611, 196684325, 155251621, 3287115599, 1026708908, 2926495405, 339457410, 1382886810, 681551127, 4074171666, 2698141591, 1568845970, 3123865043, 3446204, 10558412, 8197, 3007448
			},
			.prefetch0 = 59522,
			.prefetch1 = 38163,
			.ram = asrl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2443690872, 2946074992, 4274199315, 196684325, 155251621, 3287115599, 1026708908, 2926495405, 339457410, 1382886810, 681551127, 4074171666, 2698141591, 1568845970, 3123865043, 3446204, 10558412, 8217, 3007450
			},
			.prefetch0 = 38163,
			.prefetch1 = 14435,
			.ram = asrl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_14,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "015 ASR.l 5, D7 ea87",
		.initial = {
			.regs = {
				2050295838, 3981367004, 181567899, 3382272002, 2799189462, 4244719157, 3947886346, 3105050856, 3135447150, 3737984714, 3790760486, 505692245, 530643915, 1134349959, 985804132, 13830622, 3787870, 771, 8792550
			},
			.prefetch0 = 60039,
			.prefetch1 = 5473,
			.ram = asrl_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2050295838, 3981367004, 181567899, 3382272002, 2799189462, 4244719157, 3947886346, 4257782407, 3135447150, 3737984714, 3790760486, 505692245, 530643915, 1134349959, 985804132, 13830622, 3787870, 776, 8792552
			},
			.prefetch0 = 5473,
			.prefetch1 = 40280,
			.ram = asrl_final_ram_15,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_15,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "016 ASR.l 1, D0 e280",
		.initial = {
			.regs = {
				1627755499, 2856013379, 641357165, 762840446, 1075675795, 4154492527, 3685434000, 2009711476, 1238009072, 781861542, 2880528137, 1309555749, 1071062999, 333780111, 2264064930, 4540612, 8219962, 9482, 11540286
			},
			.prefetch0 = 57984,
			.prefetch1 = 51351,
			.ram = asrl_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				813877749, 2856013379, 641357165, 762840446, 1075675795, 4154492527, 3685434000, 2009711476, 1238009072, 781861542, 2880528137, 1309555749, 1071062999, 333780111, 2264064930, 4540612, 8219962, 9489, 11540288
			},
			.prefetch0 = 51351,
			.prefetch1 = 61816,
			.ram = asrl_final_ram_16,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_16,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "017 ASR.l D5, D2 eaa2",
		.initial = {
			.regs = {
				760083860, 52518789, 3633942180, 4096821890, 3065963901, 1411241629, 4020811605, 149967427, 1182495368, 3378840818, 1481553044, 3227123634, 3896138488, 3753153747, 334408235, 14152052, 5156906, 781, 8867974
			},
			.prefetch0 = 60066,
			.prefetch1 = 12372,
			.ram = asrl_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				760083860, 52518789, 4294967294, 4096821890, 3065963901, 1411241629, 4020811605, 149967427, 1182495368, 3378840818, 1481553044, 3227123634, 3896138488, 3753153747, 334408235, 14152052, 5156906, 793, 8867976
			},
			.prefetch0 = 12372,
			.prefetch1 = 55943,
			.ram = asrl_final_ram_17,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_17,
		.transactions_len = 2,
		.lenght = 66,
	},
	{
		.name = "018 ASR.l D5, D2 eaa2",
		.initial = {
			.regs = {
				646096852, 2439426411, 3140506660, 3020115436, 432206388, 4082604907, 677856264, 3850227314, 1478440880, 3641085399, 2949901715, 651383714, 3530689477, 4005543069, 3122680575, 3374908, 15330412, 33811, 11039194
			},
			.prefetch0 = 60066,
			.prefetch1 = 18714,
			.ram = asrl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				646096852, 2439426411, 4294967295, 3020115436, 432206388, 4082604907, 677856264, 3850227314, 1478440880, 3641085399, 2949901715, 651383714, 3530689477, 4005543069, 3122680575, 3374908, 15330412, 33817, 11039196
			},
			.prefetch0 = 18714,
			.prefetch1 = 43621,
			.ram = asrl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_18,
		.transactions_len = 2,
		.lenght = 94,
	},
	{
		.name = "019 ASR.l 2, D5 e485",
		.initial = {
			.regs = {
				1735620942, 2333189594, 1291080550, 4117983042, 15330906, 2052552021, 2513576360, 1003134205, 2073221469, 1256726879, 265731391, 1213322972, 1275228208, 1756473104, 981534464, 12089676, 7840756, 32798, 12953642
			},
			.prefetch0 = 58501,
			.prefetch1 = 28937,
			.ram = asrl_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1735620942, 2333189594, 1291080550, 4117983042, 15330906, 513138005, 2513576360, 1003134205, 2073221469, 1256726879, 265731391, 1213322972, 1275228208, 1756473104, 981534464, 12089676, 7840756, 32768, 12953644
			},
			.prefetch0 = 28937,
			.prefetch1 = 17313,
			.ram = asrl_final_ram_19,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_19,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "020 ASR.l D6, D3 eca3",
		.initial = {
			.regs = {
				316101919, 1433405231, 2075364253, 1385945384, 3109558193, 3117255351, 4223439571, 1127899718, 1419514765, 2287083926, 2329502973, 2217039149, 3452628643, 318791512, 2405349585, 5389388, 8791392, 34064, 6607412
			},
			.prefetch0 = 60579,
			.prefetch1 = 44927,
			.ram = asrl_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				316101919, 1433405231, 2075364253, 2643, 3109558193, 3117255351, 4223439571, 1127899718, 1419514765, 2287083926, 2329502973, 2217039149, 3452628643, 318791512, 2405349585, 5389388, 8791392, 34048, 6607414
			},
			.prefetch0 = 44927,
			.prefetch1 = 24314,
			.ram = asrl_final_ram_20,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_20,
		.transactions_len = 2,
		.lenght = 46,
	},
	{
		.name = "021 ASR.l 1, D0 e280",
		.initial = {
			.regs = {
				3501791878, 492317488, 3546575459, 2874964432, 2723136148, 1180533967, 2586481926, 2641336296, 291539933, 3069191109, 3286397872, 3091374751, 890194828, 24543081, 2342095945, 13797660, 9935816, 33808, 11401074
			},
			.prefetch0 = 57984,
			.prefetch1 = 20128,
			.ram = asrl_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3898379587, 492317488, 3546575459, 2874964432, 2723136148, 1180533967, 2586481926, 2641336296, 291539933, 3069191109, 3286397872, 3091374751, 890194828, 24543081, 2342095945, 13797660, 9935816, 33800, 11401076
			},
			.prefetch0 = 20128,
			.prefetch1 = 3987,
			.ram = asrl_final_ram_21,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_21,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "022 ASR.l D1, D4 e2a4",
		.initial = {
			.regs = {
				1177389874, 1772760984, 2297577334, 2752824206, 258028973, 4049207360, 3003053363, 432749352, 124509543, 415437419, 325234792, 2414764763, 4052009428, 3582393722, 290365183, 11524242, 1342750, 786, 3531644
			},
			.prefetch0 = 58020,
			.prefetch1 = 17978,
			.ram = asrl_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1177389874, 1772760984, 2297577334, 2752824206, 15, 4049207360, 3003053363, 432749352, 124509543, 415437419, 325234792, 2414764763, 4052009428, 3582393722, 290365183, 11524242, 1342750, 768, 3531646
			},
			.prefetch0 = 17978,
			.prefetch1 = 43197,
			.ram = asrl_final_ram_22,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_22,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "023 ASR.l D1, D0 e2a0",
		.initial = {
			.regs = {
				1000002664, 3279485229, 3669356263, 484416827, 370513605, 1304015605, 3014500696, 542392110, 2000705019, 3659425793, 1209562558, 2995376618, 3136084470, 3031200346, 3267276481, 15027122, 16383178, 8463, 9308566
			},
			.prefetch0 = 58016,
			.prefetch1 = 13469,
			.ram = asrl_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				0, 3279485229, 3669356263, 484416827, 370513605, 1304015605, 3014500696, 542392110, 2000705019, 3659425793, 1209562558, 2995376618, 3136084470, 3031200346, 3267276481, 15027122, 16383178, 8452, 9308568
			},
			.prefetch0 = 13469,
			.prefetch1 = 42086,
			.ram = asrl_final_ram_23,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_23,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "024 ASR.l D5, D3 eaa3",
		.initial = {
			.regs = {
				2420040624, 3699543588, 567481220, 1145612467, 790176491, 116479564, 1728221944, 1686340521, 538798703, 2784855693, 2878036763, 3177324099, 966708170, 2977422303, 2478409881, 13932650, 14203610, 33547, 14176480
			},
			.prefetch0 = 60067,
			.prefetch1 = 9796,
			.ram = asrl_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2420040624, 3699543588, 567481220, 279690, 790176491, 116479564, 1728221944, 1686340521, 538798703, 2784855693, 2878036763, 3177324099, 966708170, 2977422303, 2478409881, 13932650, 14203610, 33553, 14176482
			},
			.prefetch0 = 9796,
			.prefetch1 = 33886,
			.ram = asrl_final_ram_24,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_24,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "025 ASR.l D4, D1 e8a1",
		.initial = {
			.regs = {
				4257460780, 924878279, 787733679, 4187473793, 2489363599, 2282881799, 3142410041, 3486768706, 2909123877, 4241872229, 68921987, 3024875090, 1292303305, 2565121562, 2188942441, 12686544, 13780412, 9992, 7412670
			},
			.prefetch0 = 59553,
			.prefetch1 = 58862,
			.ram = asrl_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4257460780, 28225, 787733679, 4187473793, 2489363599, 2282881799, 3142410041, 3486768706, 2909123877, 4241872229, 68921987, 3024875090, 1292303305, 2565121562, 2188942441, 12686544, 13780412, 9984, 7412672
			},
			.prefetch0 = 58862,
			.prefetch1 = 4228,
			.ram = asrl_final_ram_25,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_25,
		.transactions_len = 2,
		.lenght = 38,
	},
	{
		.name = "026 ASR.l D6, D5 eca5",
		.initial = {
			.regs = {
				3473741358, 1919585492, 908986081, 3858406883, 3084552643, 2474270411, 2145938005, 241245144, 2610876100, 2647403042, 3439081397, 1783589565, 2150713920, 3618417710, 2579245661, 4319478, 12101938, 513, 5625312
			},
			.prefetch0 = 60581,
			.prefetch1 = 62403,
			.ram = asrl_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3473741358, 1919585492, 908986081, 3858406883, 3084552643, 4294966427, 2145938005, 241245144, 2610876100, 2647403042, 3439081397, 1783589565, 2150713920, 3618417710, 2579245661, 4319478, 12101938, 537, 5625314
			},
			.prefetch0 = 62403,
			.prefetch1 = 42555,
			.ram = asrl_final_ram_26,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_26,
		.transactions_len = 2,
		.lenght = 50,
	},
	{
		.name = "027 ASR.l 2, D5 e485",
		.initial = {
			.regs = {
				1003955201, 2840218412, 1121984826, 2586501526, 2123959447, 2213190038, 144556642, 1390565426, 1926891992, 160920642, 2652563810, 1442924384, 1061162505, 2125598788, 1715825403, 6064260, 7006788, 8988, 8360378
			},
			.prefetch0 = 58501,
			.prefetch1 = 29471,
			.ram = asrl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1003955201, 2840218412, 1121984826, 2586501526, 2123959447, 3774522981, 144556642, 1390565426, 1926891992, 160920642, 2652563810, 1442924384, 1061162505, 2125598788, 1715825403, 6064260, 7006788, 8985, 8360380
			},
			.prefetch0 = 29471,
			.prefetch1 = 35813,
			.ram = asrl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_27,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "028 ASR.l D6, D4 eca4",
		.initial = {
			.regs = {
				2404366433, 3822522507, 1711963137, 3963452709, 1294480801, 2010109975, 3085379755, 2516572610, 1406636250, 2065826923, 78424941, 1946398656, 1994626413, 3149553740, 913021084, 4364718, 7128790, 1557, 8101864
			},
			.prefetch0 = 60580,
			.prefetch1 = 1816,
			.ram = asrl_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2404366433, 3822522507, 1711963137, 3963452709, 0, 2010109975, 3085379755, 2516572610, 1406636250, 2065826923, 78424941, 1946398656, 1994626413, 3149553740, 913021084, 4364718, 7128790, 1540, 8101866
			},
			.prefetch0 = 1816,
			.prefetch1 = 17087,
			.ram = asrl_final_ram_28,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_28,
		.transactions_len = 2,
		.lenght = 94,
	},
	{
		.name = "029 ASR.l D0, D4 e0a4",
		.initial = {
			.regs = {
				4008915840, 898915238, 2974114255, 2642311058, 98339193, 4269711072, 2369184374, 3352451428, 147580347, 1233463827, 696943172, 3249891333, 3777508034, 4247289361, 2898429353, 14965108, 3697726, 9997, 14560936
			},
			.prefetch0 = 57508,
			.prefetch1 = 7952,
			.ram = asrl_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4008915840, 898915238, 2974114255, 2642311058, 98339193, 4269711072, 2369184374, 3352451428, 147580347, 1233463827, 696943172, 3249891333, 3777508034, 4247289361, 2898429353, 14965108, 3697726, 9984, 14560938
			},
			.prefetch0 = 7952,
			.prefetch1 = 2882,
			.ram = asrl_final_ram_29,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_29,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "030 ASR.l D0, D2 e0a2",
		.initial = {
			.regs = {
				2197470898, 3015231769, 2849361653, 748314474, 4002203975, 738562492, 1023328730, 568204154, 3014342665, 2363971194, 2586209510, 1507179189, 4155457147, 3038526043, 4222423356, 7977392, 12191066, 41729, 2913190
			},
			.prefetch0 = 57506,
			.prefetch1 = 62355,
			.ram = asrl_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2197470898, 3015231769, 4294967295, 748314474, 4002203975, 738562492, 1023328730, 568204154, 3014342665, 2363971194, 2586209510, 1507179189, 4155457147, 3038526043, 4222423356, 7977392, 12191066, 41753, 2913192
			},
			.prefetch0 = 62355,
			.prefetch1 = 43603,
			.ram = asrl_final_ram_30,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_30,
		.transactions_len = 2,
		.lenght = 108,
	},
	{
		.name = "031 ASR.l 6, D1 ec81",
		.initial = {
			.regs = {
				571640717, 2660994498, 2429245133, 4159042145, 387370845, 1694410215, 999178620, 3229182414, 1318838855, 3913185485, 259206167, 52808672, 2404726369, 2952261400, 1449894734, 7011452, 11605278, 42779, 16537420
			},
			.prefetch0 = 60545,
			.prefetch1 = 49309,
			.ram = asrl_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				571640717, 4269436471, 2429245133, 4159042145, 387370845, 1694410215, 999178620, 3229182414, 1318838855, 3913185485, 259206167, 52808672, 2404726369, 2952261400, 1449894734, 7011452, 11605278, 42760, 16537422
			},
			.prefetch0 = 49309,
			.prefetch1 = 9732,
			.ram = asrl_final_ram_31,
			.ram_len = 6,
		},
		.transactions = asrl_transactions_31,
		.transactions_len = 2,
		.lenght = 20,
	},
};

#endif /* RBT_ASRL_H */