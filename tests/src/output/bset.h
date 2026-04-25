#ifndef RBT_BSET_H
#define RBT_BSET_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte bset_initial_ram_0[] = {
		{ .addr = 0xfc3368, .byte = 0x07 },
		{ .addr = 0xfc3369, .byte = 0xf0 },
		{ .addr = 0xfc336a, .byte = 0x8a },
		{ .addr = 0xfc336b, .byte = 0xa8 },
		{ .addr = 0xfc336c, .byte = 0x78 },
		{ .addr = 0xfc336d, .byte = 0x16 },
		{ .addr = 0xed3032, .byte = 0x3e },
		{ .addr = 0xed3033, .byte = 0x75 },
		{ .addr = 0xfc336e, .byte = 0x75 },
		{ .addr = 0xfc336f, .byte = 0x04 }
};

static const SST_RamByte bset_final_ram_0[] = {
		{ .addr = 0xfc3368, .byte = 0x07 },
		{ .addr = 0xfc3369, .byte = 0xf0 },
		{ .addr = 0xfc336a, .byte = 0x8a },
		{ .addr = 0xfc336b, .byte = 0xa8 },
		{ .addr = 0xfc336c, .byte = 0x78 },
		{ .addr = 0xfc336d, .byte = 0x16 },
		{ .addr = 0xed3032, .byte = 0x3e },
		{ .addr = 0xed3033, .byte = 0x75 },
		{ .addr = 0xfc336e, .byte = 0x75 },
		{ .addr = 0xfc336f, .byte = 0x04 }
};

static const SST_Transaction bset_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16528236, .data = 30742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544370, .data = 15872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16528238, .data = 29956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544370, .data = 15872, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_1[] = {
		{ .addr = 0xfaff2e, .byte = 0x0b },
		{ .addr = 0xfaff2f, .byte = 0xd0 },
		{ .addr = 0xfaff30, .byte = 0x48 },
		{ .addr = 0xfaff31, .byte = 0x7b },
		{ .addr = 0xd03f94, .byte = 0x50 },
		{ .addr = 0xd03f95, .byte = 0x88 },
		{ .addr = 0xfaff32, .byte = 0xa8 },
		{ .addr = 0xfaff33, .byte = 0x41 }
};

static const SST_RamByte bset_final_ram_1[] = {
		{ .addr = 0xfaff2e, .byte = 0x0b },
		{ .addr = 0xfaff2f, .byte = 0xd0 },
		{ .addr = 0xfaff30, .byte = 0x48 },
		{ .addr = 0xfaff31, .byte = 0x7b },
		{ .addr = 0xd03f94, .byte = 0x51 },
		{ .addr = 0xd03f95, .byte = 0x88 },
		{ .addr = 0xfaff32, .byte = 0xa8 },
		{ .addr = 0xfaff33, .byte = 0x41 }
};

static const SST_Transaction bset_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13647764, .data = 20480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16449330, .data = 43073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13647764, .data = 20736, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_2[] = {
		{ .addr = 0x495e3a, .byte = 0x0f },
		{ .addr = 0x495e3b, .byte = 0xdf },
		{ .addr = 0x495e3c, .byte = 0xde },
		{ .addr = 0x495e3d, .byte = 0x18 },
		{ .addr = 0x6a8c4e, .byte = 0x64 },
		{ .addr = 0x6a8c4f, .byte = 0x03 },
		{ .addr = 0x495e3e, .byte = 0xa7 },
		{ .addr = 0x495e3f, .byte = 0x17 }
};

static const SST_RamByte bset_final_ram_2[] = {
		{ .addr = 0x495e3a, .byte = 0x0f },
		{ .addr = 0x495e3b, .byte = 0xdf },
		{ .addr = 0x495e3c, .byte = 0xde },
		{ .addr = 0x495e3d, .byte = 0x18 },
		{ .addr = 0x6a8c4e, .byte = 0x74 },
		{ .addr = 0x6a8c4f, .byte = 0x03 },
		{ .addr = 0x495e3e, .byte = 0xa7 },
		{ .addr = 0x495e3f, .byte = 0x17 }
};

static const SST_Transaction bset_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6982734, .data = 25600, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4808254, .data = 42775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6982734, .data = 29696, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_3[] = {
		{ .addr = 0x4e7090, .byte = 0x01 },
		{ .addr = 0x4e7091, .byte = 0xef },
		{ .addr = 0x4e7092, .byte = 0xdf },
		{ .addr = 0x4e7093, .byte = 0x6b },
		{ .addr = 0x4e7094, .byte = 0xd6 },
		{ .addr = 0x4e7095, .byte = 0x11 },
		{ .addr = 0xe8e708, .byte = 0x8a },
		{ .addr = 0xe8e709, .byte = 0xbd },
		{ .addr = 0x4e7096, .byte = 0xd9 },
		{ .addr = 0x4e7097, .byte = 0x92 }
};

static const SST_RamByte bset_final_ram_3[] = {
		{ .addr = 0x4e7090, .byte = 0x01 },
		{ .addr = 0x4e7091, .byte = 0xef },
		{ .addr = 0x4e7092, .byte = 0xdf },
		{ .addr = 0x4e7093, .byte = 0x6b },
		{ .addr = 0x4e7094, .byte = 0xd6 },
		{ .addr = 0x4e7095, .byte = 0x11 },
		{ .addr = 0xe8e708, .byte = 0x8a },
		{ .addr = 0xe8e709, .byte = 0xbd },
		{ .addr = 0x4e7096, .byte = 0xd9 },
		{ .addr = 0x4e7097, .byte = 0x92 }
};

static const SST_Transaction bset_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5140628, .data = 54801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263496, .data = 189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5140630, .data = 55698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263496, .data = 189, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_4[] = {
		{ .addr = 0x900890, .byte = 0x08 },
		{ .addr = 0x900891, .byte = 0xee },
		{ .addr = 0x900892, .byte = 0x5b },
		{ .addr = 0x900893, .byte = 0xfa },
		{ .addr = 0x900894, .byte = 0xb1 },
		{ .addr = 0x900895, .byte = 0xb8 },
		{ .addr = 0x900896, .byte = 0xdd },
		{ .addr = 0x900897, .byte = 0x96 },
		{ .addr = 0x9a556c, .byte = 0x3f },
		{ .addr = 0x9a556d, .byte = 0x38 },
		{ .addr = 0x900898, .byte = 0x9c },
		{ .addr = 0x900899, .byte = 0x9e }
};

static const SST_RamByte bset_final_ram_4[] = {
		{ .addr = 0x900890, .byte = 0x08 },
		{ .addr = 0x900891, .byte = 0xee },
		{ .addr = 0x900892, .byte = 0x5b },
		{ .addr = 0x900893, .byte = 0xfa },
		{ .addr = 0x900894, .byte = 0xb1 },
		{ .addr = 0x900895, .byte = 0xb8 },
		{ .addr = 0x900896, .byte = 0xdd },
		{ .addr = 0x900897, .byte = 0x96 },
		{ .addr = 0x9a556c, .byte = 0x3f },
		{ .addr = 0x9a556d, .byte = 0x38 },
		{ .addr = 0x900898, .byte = 0x9c },
		{ .addr = 0x900899, .byte = 0x9e }
};

static const SST_Transaction bset_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9439380, .data = 45496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9439382, .data = 56726, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10114412, .data = 16128, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9439384, .data = 40094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10114412, .data = 16128, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_5[] = {
		{ .addr = 0x9afc1c, .byte = 0x07 },
		{ .addr = 0x9afc1d, .byte = 0xe9 },
		{ .addr = 0x9afc1e, .byte = 0xfd },
		{ .addr = 0x9afc1f, .byte = 0x94 },
		{ .addr = 0x9afc20, .byte = 0x91 },
		{ .addr = 0x9afc21, .byte = 0xeb },
		{ .addr = 0x9f76c2, .byte = 0x30 },
		{ .addr = 0x9f76c3, .byte = 0xf7 },
		{ .addr = 0x9afc22, .byte = 0x43 },
		{ .addr = 0x9afc23, .byte = 0xb9 }
};

static const SST_RamByte bset_final_ram_5[] = {
		{ .addr = 0x9afc1c, .byte = 0x07 },
		{ .addr = 0x9afc1d, .byte = 0xe9 },
		{ .addr = 0x9afc1e, .byte = 0xfd },
		{ .addr = 0x9afc1f, .byte = 0x94 },
		{ .addr = 0x9afc20, .byte = 0x91 },
		{ .addr = 0x9afc21, .byte = 0xeb },
		{ .addr = 0x9f76c2, .byte = 0xb0 },
		{ .addr = 0x9f76c3, .byte = 0xf7 },
		{ .addr = 0x9afc22, .byte = 0x43 },
		{ .addr = 0x9afc23, .byte = 0xb9 }
};

static const SST_Transaction bset_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10157088, .data = 37355, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10450626, .data = 12288, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10157090, .data = 17337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10450626, .data = 45056, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_6[] = {
		{ .addr = 0x473244, .byte = 0x07 },
		{ .addr = 0x473245, .byte = 0xc1 },
		{ .addr = 0x473246, .byte = 0xf2 },
		{ .addr = 0x473247, .byte = 0x57 },
		{ .addr = 0x473248, .byte = 0x06 },
		{ .addr = 0x473249, .byte = 0x09 }
};

static const SST_RamByte bset_final_ram_6[] = {
		{ .addr = 0x473244, .byte = 0x07 },
		{ .addr = 0x473245, .byte = 0xc1 },
		{ .addr = 0x473246, .byte = 0xf2 },
		{ .addr = 0x473247, .byte = 0x57 },
		{ .addr = 0x473248, .byte = 0x06 },
		{ .addr = 0x473249, .byte = 0x09 }
};

static const SST_Transaction bset_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4665928, .data = 1545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte bset_initial_ram_7[] = {
		{ .addr = 0xa43be8, .byte = 0x09 },
		{ .addr = 0xa43be9, .byte = 0xf6 },
		{ .addr = 0xa43bea, .byte = 0xf6 },
		{ .addr = 0xa43beb, .byte = 0x23 },
		{ .addr = 0xa43bec, .byte = 0x9b },
		{ .addr = 0xa43bed, .byte = 0xe8 },
		{ .addr = 0x19ceb6, .byte = 0x45 },
		{ .addr = 0x19ceb7, .byte = 0x49 },
		{ .addr = 0xa43bee, .byte = 0x9b },
		{ .addr = 0xa43bef, .byte = 0x9f }
};

static const SST_RamByte bset_final_ram_7[] = {
		{ .addr = 0xa43be8, .byte = 0x09 },
		{ .addr = 0xa43be9, .byte = 0xf6 },
		{ .addr = 0xa43bea, .byte = 0xf6 },
		{ .addr = 0xa43beb, .byte = 0x23 },
		{ .addr = 0xa43bec, .byte = 0x9b },
		{ .addr = 0xa43bed, .byte = 0xe8 },
		{ .addr = 0x19ceb6, .byte = 0x45 },
		{ .addr = 0x19ceb7, .byte = 0x49 },
		{ .addr = 0xa43bee, .byte = 0x9b },
		{ .addr = 0xa43bef, .byte = 0x9f }
};

static const SST_Transaction bset_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10763244, .data = 39912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1691318, .data = 17664, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10763246, .data = 39839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1691318, .data = 17664, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_8[] = {
		{ .addr = 0xcec3c2, .byte = 0x09 },
		{ .addr = 0xcec3c3, .byte = 0xe0 },
		{ .addr = 0xcec3c4, .byte = 0xde },
		{ .addr = 0xcec3c5, .byte = 0xb7 },
		{ .addr = 0x714968, .byte = 0x4c },
		{ .addr = 0x714969, .byte = 0x61 },
		{ .addr = 0xcec3c6, .byte = 0x20 },
		{ .addr = 0xcec3c7, .byte = 0x4c }
};

static const SST_RamByte bset_final_ram_8[] = {
		{ .addr = 0xcec3c2, .byte = 0x09 },
		{ .addr = 0xcec3c3, .byte = 0xe0 },
		{ .addr = 0xcec3c4, .byte = 0xde },
		{ .addr = 0xcec3c5, .byte = 0xb7 },
		{ .addr = 0x714968, .byte = 0x6c },
		{ .addr = 0x714969, .byte = 0x61 },
		{ .addr = 0xcec3c6, .byte = 0x20 },
		{ .addr = 0xcec3c7, .byte = 0x4c }
};

static const SST_Transaction bset_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7424360, .data = 19456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13550534, .data = 8268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7424360, .data = 27648, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_9[] = {
		{ .addr = 0xede10a, .byte = 0x0f },
		{ .addr = 0xede10b, .byte = 0xde },
		{ .addr = 0xede10c, .byte = 0x86 },
		{ .addr = 0xede10d, .byte = 0x98 },
		{ .addr = 0x3a075a, .byte = 0x25 },
		{ .addr = 0x3a075b, .byte = 0xea },
		{ .addr = 0xede10e, .byte = 0xa5 },
		{ .addr = 0xede10f, .byte = 0xd7 }
};

static const SST_RamByte bset_final_ram_9[] = {
		{ .addr = 0xede10a, .byte = 0x0f },
		{ .addr = 0xede10b, .byte = 0xde },
		{ .addr = 0xede10c, .byte = 0x86 },
		{ .addr = 0xede10d, .byte = 0x98 },
		{ .addr = 0x3a075a, .byte = 0x25 },
		{ .addr = 0x3a075b, .byte = 0xee },
		{ .addr = 0xede10e, .byte = 0xa5 },
		{ .addr = 0xede10f, .byte = 0xd7 }
};

static const SST_Transaction bset_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3802970, .data = 234, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15589646, .data = 42455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3802970, .data = 238, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_10[] = {
		{ .addr = 0xd371b4, .byte = 0x0d },
		{ .addr = 0xd371b5, .byte = 0xe0 },
		{ .addr = 0xd371b6, .byte = 0xf2 },
		{ .addr = 0xd371b7, .byte = 0x12 },
		{ .addr = 0xa4d3d2, .byte = 0x3d },
		{ .addr = 0xa4d3d3, .byte = 0x5f },
		{ .addr = 0xd371b8, .byte = 0x52 },
		{ .addr = 0xd371b9, .byte = 0x30 }
};

static const SST_RamByte bset_final_ram_10[] = {
		{ .addr = 0xd371b4, .byte = 0x0d },
		{ .addr = 0xd371b5, .byte = 0xe0 },
		{ .addr = 0xd371b6, .byte = 0xf2 },
		{ .addr = 0xd371b7, .byte = 0x12 },
		{ .addr = 0xa4d3d2, .byte = 0x3d },
		{ .addr = 0xa4d3d3, .byte = 0x5f },
		{ .addr = 0xd371b8, .byte = 0x52 },
		{ .addr = 0xd371b9, .byte = 0x30 }
};

static const SST_Transaction bset_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10802130, .data = 15616, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13857208, .data = 21040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10802130, .data = 15616, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_11[] = {
		{ .addr = 0xccd906, .byte = 0x08 },
		{ .addr = 0xccd907, .byte = 0xe7 },
		{ .addr = 0xccd908, .byte = 0xda },
		{ .addr = 0xccd909, .byte = 0xd6 },
		{ .addr = 0xccd90a, .byte = 0x13 },
		{ .addr = 0xccd90b, .byte = 0xd0 },
		{ .addr = 0x13970c, .byte = 0x4c },
		{ .addr = 0x13970d, .byte = 0x9e },
		{ .addr = 0xccd90c, .byte = 0xad },
		{ .addr = 0xccd90d, .byte = 0x8d }
};

static const SST_RamByte bset_final_ram_11[] = {
		{ .addr = 0xccd906, .byte = 0x08 },
		{ .addr = 0xccd907, .byte = 0xe7 },
		{ .addr = 0xccd908, .byte = 0xda },
		{ .addr = 0xccd909, .byte = 0xd6 },
		{ .addr = 0xccd90a, .byte = 0x13 },
		{ .addr = 0xccd90b, .byte = 0xd0 },
		{ .addr = 0x13970c, .byte = 0x4c },
		{ .addr = 0x13970d, .byte = 0x9e },
		{ .addr = 0xccd90c, .byte = 0xad },
		{ .addr = 0xccd90d, .byte = 0x8d }
};

static const SST_Transaction bset_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13424906, .data = 5072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1283852, .data = 19456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13424908, .data = 44429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1283852, .data = 19456, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_12[] = {
		{ .addr = 0xcce9aa, .byte = 0x0b },
		{ .addr = 0xcce9ab, .byte = 0xd5 },
		{ .addr = 0xcce9ac, .byte = 0x1d },
		{ .addr = 0xcce9ad, .byte = 0x47 },
		{ .addr = 0x7a59a4, .byte = 0xbc },
		{ .addr = 0x7a59a5, .byte = 0x9c },
		{ .addr = 0xcce9ae, .byte = 0xc7 },
		{ .addr = 0xcce9af, .byte = 0x85 }
};

static const SST_RamByte bset_final_ram_12[] = {
		{ .addr = 0xcce9aa, .byte = 0x0b },
		{ .addr = 0xcce9ab, .byte = 0xd5 },
		{ .addr = 0xcce9ac, .byte = 0x1d },
		{ .addr = 0xcce9ad, .byte = 0x47 },
		{ .addr = 0x7a59a4, .byte = 0xbc },
		{ .addr = 0x7a59a5, .byte = 0x9c },
		{ .addr = 0xcce9ae, .byte = 0xc7 },
		{ .addr = 0xcce9af, .byte = 0x85 }
};

static const SST_Transaction bset_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8018340, .data = 156, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13429166, .data = 51077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8018340, .data = 156, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_13[] = {
		{ .addr = 0x09994e, .byte = 0x0b },
		{ .addr = 0x09994f, .byte = 0xf2 },
		{ .addr = 0x099950, .byte = 0xd6 },
		{ .addr = 0x099951, .byte = 0xf6 },
		{ .addr = 0x099952, .byte = 0x4d },
		{ .addr = 0x099953, .byte = 0x1b },
		{ .addr = 0x3e1f08, .byte = 0xa4 },
		{ .addr = 0x3e1f09, .byte = 0x0e },
		{ .addr = 0x099954, .byte = 0xed },
		{ .addr = 0x099955, .byte = 0xb4 }
};

static const SST_RamByte bset_final_ram_13[] = {
		{ .addr = 0x09994e, .byte = 0x0b },
		{ .addr = 0x09994f, .byte = 0xf2 },
		{ .addr = 0x099950, .byte = 0xd6 },
		{ .addr = 0x099951, .byte = 0xf6 },
		{ .addr = 0x099952, .byte = 0x4d },
		{ .addr = 0x099953, .byte = 0x1b },
		{ .addr = 0x3e1f08, .byte = 0xa4 },
		{ .addr = 0x3e1f09, .byte = 0x0e },
		{ .addr = 0x099954, .byte = 0xed },
		{ .addr = 0x099955, .byte = 0xb4 }
};

static const SST_Transaction bset_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 629074, .data = 19739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4071176, .data = 41984, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 629076, .data = 60852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4071176, .data = 41984, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_14[] = {
		{ .addr = 0x084354, .byte = 0x0f },
		{ .addr = 0x084355, .byte = 0xd1 },
		{ .addr = 0x084356, .byte = 0xf2 },
		{ .addr = 0x084357, .byte = 0x15 },
		{ .addr = 0x060e84, .byte = 0xf3 },
		{ .addr = 0x060e85, .byte = 0xa1 },
		{ .addr = 0x084358, .byte = 0x42 },
		{ .addr = 0x084359, .byte = 0x1a }
};

static const SST_RamByte bset_final_ram_14[] = {
		{ .addr = 0x084354, .byte = 0x0f },
		{ .addr = 0x084355, .byte = 0xd1 },
		{ .addr = 0x084356, .byte = 0xf2 },
		{ .addr = 0x084357, .byte = 0x15 },
		{ .addr = 0x060e84, .byte = 0xf3 },
		{ .addr = 0x060e85, .byte = 0xb1 },
		{ .addr = 0x084358, .byte = 0x42 },
		{ .addr = 0x084359, .byte = 0x1a }
};

static const SST_Transaction bset_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 396932, .data = 161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 541528, .data = 16922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 396932, .data = 177, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_15[] = {
		{ .addr = 0xb9ef96, .byte = 0x01 },
		{ .addr = 0xb9ef97, .byte = 0xf8 },
		{ .addr = 0xb9ef98, .byte = 0x2f },
		{ .addr = 0xb9ef99, .byte = 0x4a },
		{ .addr = 0xb9ef9a, .byte = 0x3e },
		{ .addr = 0xb9ef9b, .byte = 0xf0 },
		{ .addr = 0x002f4a, .byte = 0xe5 },
		{ .addr = 0x002f4b, .byte = 0x43 },
		{ .addr = 0xb9ef9c, .byte = 0x5a },
		{ .addr = 0xb9ef9d, .byte = 0x65 }
};

static const SST_RamByte bset_final_ram_15[] = {
		{ .addr = 0xb9ef96, .byte = 0x01 },
		{ .addr = 0xb9ef97, .byte = 0xf8 },
		{ .addr = 0xb9ef98, .byte = 0x2f },
		{ .addr = 0xb9ef99, .byte = 0x4a },
		{ .addr = 0xb9ef9a, .byte = 0x3e },
		{ .addr = 0xb9ef9b, .byte = 0xf0 },
		{ .addr = 0x002f4a, .byte = 0xe5 },
		{ .addr = 0x002f4b, .byte = 0x43 },
		{ .addr = 0xb9ef9c, .byte = 0x5a },
		{ .addr = 0xb9ef9d, .byte = 0x65 }
};

static const SST_Transaction bset_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12185498, .data = 16112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12106, .data = 58624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12185500, .data = 23141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12106, .data = 58624, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_16[] = {
		{ .addr = 0x4b3118, .byte = 0x07 },
		{ .addr = 0x4b3119, .byte = 0xf7 },
		{ .addr = 0x4b311a, .byte = 0x15 },
		{ .addr = 0x4b311b, .byte = 0xe0 },
		{ .addr = 0x4b311c, .byte = 0x28 },
		{ .addr = 0x4b311d, .byte = 0x9f },
		{ .addr = 0x0e774c, .byte = 0xba },
		{ .addr = 0x0e774d, .byte = 0x95 },
		{ .addr = 0x4b311e, .byte = 0xb5 },
		{ .addr = 0x4b311f, .byte = 0x0e }
};

static const SST_RamByte bset_final_ram_16[] = {
		{ .addr = 0x4b3118, .byte = 0x07 },
		{ .addr = 0x4b3119, .byte = 0xf7 },
		{ .addr = 0x4b311a, .byte = 0x15 },
		{ .addr = 0x4b311b, .byte = 0xe0 },
		{ .addr = 0x4b311c, .byte = 0x28 },
		{ .addr = 0x4b311d, .byte = 0x9f },
		{ .addr = 0x0e774c, .byte = 0xba },
		{ .addr = 0x0e774d, .byte = 0xd5 },
		{ .addr = 0x4b311e, .byte = 0xb5 },
		{ .addr = 0x4b311f, .byte = 0x0e }
};

static const SST_Transaction bset_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4927772, .data = 10399, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 948044, .data = 149, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4927774, .data = 46350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 948044, .data = 213, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_17[] = {
		{ .addr = 0x77ccd8, .byte = 0x05 },
		{ .addr = 0x77ccd9, .byte = 0xf5 },
		{ .addr = 0x77ccda, .byte = 0xcf },
		{ .addr = 0x77ccdb, .byte = 0xad },
		{ .addr = 0x77ccdc, .byte = 0x8e },
		{ .addr = 0x77ccdd, .byte = 0x84 },
		{ .addr = 0xd6497e, .byte = 0x4b },
		{ .addr = 0xd6497f, .byte = 0x69 },
		{ .addr = 0x77ccde, .byte = 0x16 },
		{ .addr = 0x77ccdf, .byte = 0xb5 }
};

static const SST_RamByte bset_final_ram_17[] = {
		{ .addr = 0x77ccd8, .byte = 0x05 },
		{ .addr = 0x77ccd9, .byte = 0xf5 },
		{ .addr = 0x77ccda, .byte = 0xcf },
		{ .addr = 0x77ccdb, .byte = 0xad },
		{ .addr = 0x77ccdc, .byte = 0x8e },
		{ .addr = 0x77ccdd, .byte = 0x84 },
		{ .addr = 0xd6497e, .byte = 0x4b },
		{ .addr = 0xd6497f, .byte = 0x6d },
		{ .addr = 0x77ccde, .byte = 0x16 },
		{ .addr = 0x77ccdf, .byte = 0xb5 }
};

static const SST_Transaction bset_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7851228, .data = 36484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14043518, .data = 105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7851230, .data = 5813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14043518, .data = 109, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_18[] = {
		{ .addr = 0xc331de, .byte = 0x08 },
		{ .addr = 0xc331df, .byte = 0xc1 },
		{ .addr = 0xc331e0, .byte = 0xd8 },
		{ .addr = 0xc331e1, .byte = 0xa1 },
		{ .addr = 0xc331e2, .byte = 0x87 },
		{ .addr = 0xc331e3, .byte = 0xe8 },
		{ .addr = 0xc331e4, .byte = 0xab },
		{ .addr = 0xc331e5, .byte = 0x27 }
};

static const SST_RamByte bset_final_ram_18[] = {
		{ .addr = 0xc331de, .byte = 0x08 },
		{ .addr = 0xc331df, .byte = 0xc1 },
		{ .addr = 0xc331e0, .byte = 0xd8 },
		{ .addr = 0xc331e1, .byte = 0xa1 },
		{ .addr = 0xc331e2, .byte = 0x87 },
		{ .addr = 0xc331e3, .byte = 0xe8 },
		{ .addr = 0xc331e4, .byte = 0xab },
		{ .addr = 0xc331e5, .byte = 0x27 }
};

static const SST_Transaction bset_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12792290, .data = 34792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12792292, .data = 43815, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte bset_initial_ram_19[] = {
		{ .addr = 0xe9d358, .byte = 0x05 },
		{ .addr = 0xe9d359, .byte = 0xe9 },
		{ .addr = 0xe9d35a, .byte = 0xa1 },
		{ .addr = 0xe9d35b, .byte = 0xfc },
		{ .addr = 0xe9d35c, .byte = 0x27 },
		{ .addr = 0xe9d35d, .byte = 0x26 },
		{ .addr = 0x549170, .byte = 0xd2 },
		{ .addr = 0x549171, .byte = 0xcc },
		{ .addr = 0xe9d35e, .byte = 0x64 },
		{ .addr = 0xe9d35f, .byte = 0x43 }
};

static const SST_RamByte bset_final_ram_19[] = {
		{ .addr = 0xe9d358, .byte = 0x05 },
		{ .addr = 0xe9d359, .byte = 0xe9 },
		{ .addr = 0xe9d35a, .byte = 0xa1 },
		{ .addr = 0xe9d35b, .byte = 0xfc },
		{ .addr = 0xe9d35c, .byte = 0x27 },
		{ .addr = 0xe9d35d, .byte = 0x26 },
		{ .addr = 0x549170, .byte = 0xd2 },
		{ .addr = 0x549171, .byte = 0xdc },
		{ .addr = 0xe9d35e, .byte = 0x64 },
		{ .addr = 0xe9d35f, .byte = 0x43 }
};

static const SST_Transaction bset_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15323996, .data = 10022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5542256, .data = 204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15323998, .data = 25667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5542256, .data = 220, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_20[] = {
		{ .addr = 0x76cce6, .byte = 0x05 },
		{ .addr = 0x76cce7, .byte = 0xf8 },
		{ .addr = 0x76cce8, .byte = 0x2f },
		{ .addr = 0x76cce9, .byte = 0x32 },
		{ .addr = 0x76ccea, .byte = 0x20 },
		{ .addr = 0x76cceb, .byte = 0x06 },
		{ .addr = 0x002f32, .byte = 0x41 },
		{ .addr = 0x002f33, .byte = 0xe1 },
		{ .addr = 0x76ccec, .byte = 0x86 },
		{ .addr = 0x76cced, .byte = 0x55 }
};

static const SST_RamByte bset_final_ram_20[] = {
		{ .addr = 0x76cce6, .byte = 0x05 },
		{ .addr = 0x76cce7, .byte = 0xf8 },
		{ .addr = 0x76cce8, .byte = 0x2f },
		{ .addr = 0x76cce9, .byte = 0x32 },
		{ .addr = 0x76ccea, .byte = 0x20 },
		{ .addr = 0x76cceb, .byte = 0x06 },
		{ .addr = 0x002f32, .byte = 0x45 },
		{ .addr = 0x002f33, .byte = 0xe1 },
		{ .addr = 0x76ccec, .byte = 0x86 },
		{ .addr = 0x76cced, .byte = 0x55 }
};

static const SST_Transaction bset_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7785706, .data = 8198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12082, .data = 16640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7785708, .data = 34389, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12082, .data = 17664, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_21[] = {
		{ .addr = 0xc2c2f8, .byte = 0x01 },
		{ .addr = 0xc2c2f9, .byte = 0xe6 },
		{ .addr = 0xc2c2fa, .byte = 0x38 },
		{ .addr = 0xc2c2fb, .byte = 0xea },
		{ .addr = 0xc2c526, .byte = 0x10 },
		{ .addr = 0xc2c527, .byte = 0x53 },
		{ .addr = 0xc2c2fc, .byte = 0xda },
		{ .addr = 0xc2c2fd, .byte = 0x0d }
};

static const SST_RamByte bset_final_ram_21[] = {
		{ .addr = 0xc2c2f8, .byte = 0x01 },
		{ .addr = 0xc2c2f9, .byte = 0xe6 },
		{ .addr = 0xc2c2fa, .byte = 0x38 },
		{ .addr = 0xc2c2fb, .byte = 0xea },
		{ .addr = 0xc2c526, .byte = 0x14 },
		{ .addr = 0xc2c527, .byte = 0x53 },
		{ .addr = 0xc2c2fc, .byte = 0xda },
		{ .addr = 0xc2c2fd, .byte = 0x0d }
};

static const SST_Transaction bset_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12764454, .data = 4096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12763900, .data = 55821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12764454, .data = 5120, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_22[] = {
		{ .addr = 0x28d60c, .byte = 0x05 },
		{ .addr = 0x28d60d, .byte = 0xc0 },
		{ .addr = 0x28d60e, .byte = 0xcc },
		{ .addr = 0x28d60f, .byte = 0xc9 },
		{ .addr = 0x28d610, .byte = 0x6d },
		{ .addr = 0x28d611, .byte = 0xec }
};

static const SST_RamByte bset_final_ram_22[] = {
		{ .addr = 0x28d60c, .byte = 0x05 },
		{ .addr = 0x28d60d, .byte = 0xc0 },
		{ .addr = 0x28d60e, .byte = 0xcc },
		{ .addr = 0x28d60f, .byte = 0xc9 },
		{ .addr = 0x28d610, .byte = 0x6d },
		{ .addr = 0x28d611, .byte = 0xec }
};

static const SST_Transaction bset_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2676240, .data = 28140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte bset_initial_ram_23[] = {
		{ .addr = 0x4b9798, .byte = 0x05 },
		{ .addr = 0x4b9799, .byte = 0xc7 },
		{ .addr = 0x4b979a, .byte = 0x27 },
		{ .addr = 0x4b979b, .byte = 0xa4 },
		{ .addr = 0x4b979c, .byte = 0xa3 },
		{ .addr = 0x4b979d, .byte = 0x61 }
};

static const SST_RamByte bset_final_ram_23[] = {
		{ .addr = 0x4b9798, .byte = 0x05 },
		{ .addr = 0x4b9799, .byte = 0xc7 },
		{ .addr = 0x4b979a, .byte = 0x27 },
		{ .addr = 0x4b979b, .byte = 0xa4 },
		{ .addr = 0x4b979c, .byte = 0xa3 },
		{ .addr = 0x4b979d, .byte = 0x61 }
};

static const SST_Transaction bset_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4954012, .data = 41825, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte bset_initial_ram_24[] = {
		{ .addr = 0x3838f0, .byte = 0x01 },
		{ .addr = 0x3838f1, .byte = 0xc4 },
		{ .addr = 0x3838f2, .byte = 0x06 },
		{ .addr = 0x3838f3, .byte = 0x4e },
		{ .addr = 0x3838f4, .byte = 0xf2 },
		{ .addr = 0x3838f5, .byte = 0x82 }
};

static const SST_RamByte bset_final_ram_24[] = {
		{ .addr = 0x3838f0, .byte = 0x01 },
		{ .addr = 0x3838f1, .byte = 0xc4 },
		{ .addr = 0x3838f2, .byte = 0x06 },
		{ .addr = 0x3838f3, .byte = 0x4e },
		{ .addr = 0x3838f4, .byte = 0xf2 },
		{ .addr = 0x3838f5, .byte = 0x82 }
};

static const SST_Transaction bset_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3684596, .data = 62082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte bset_initial_ram_25[] = {
		{ .addr = 0x1f251e, .byte = 0x05 },
		{ .addr = 0x1f251f, .byte = 0xc4 },
		{ .addr = 0x1f2520, .byte = 0x41 },
		{ .addr = 0x1f2521, .byte = 0xed },
		{ .addr = 0x1f2522, .byte = 0x59 },
		{ .addr = 0x1f2523, .byte = 0x2e }
};

static const SST_RamByte bset_final_ram_25[] = {
		{ .addr = 0x1f251e, .byte = 0x05 },
		{ .addr = 0x1f251f, .byte = 0xc4 },
		{ .addr = 0x1f2520, .byte = 0x41 },
		{ .addr = 0x1f2521, .byte = 0xed },
		{ .addr = 0x1f2522, .byte = 0x59 },
		{ .addr = 0x1f2523, .byte = 0x2e }
};

static const SST_Transaction bset_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2041122, .data = 22830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte bset_initial_ram_26[] = {
		{ .addr = 0xccc4be, .byte = 0x05 },
		{ .addr = 0xccc4bf, .byte = 0xdb },
		{ .addr = 0xccc4c0, .byte = 0x27 },
		{ .addr = 0xccc4c1, .byte = 0x53 },
		{ .addr = 0x6d7558, .byte = 0x80 },
		{ .addr = 0x6d7559, .byte = 0xb8 },
		{ .addr = 0xccc4c2, .byte = 0x02 },
		{ .addr = 0xccc4c3, .byte = 0xd1 }
};

static const SST_RamByte bset_final_ram_26[] = {
		{ .addr = 0xccc4be, .byte = 0x05 },
		{ .addr = 0xccc4bf, .byte = 0xdb },
		{ .addr = 0xccc4c0, .byte = 0x27 },
		{ .addr = 0xccc4c1, .byte = 0x53 },
		{ .addr = 0x6d7558, .byte = 0x80 },
		{ .addr = 0x6d7559, .byte = 0xb8 },
		{ .addr = 0xccc4c2, .byte = 0x02 },
		{ .addr = 0xccc4c3, .byte = 0xd1 }
};

static const SST_Transaction bset_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7173464, .data = 184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13419714, .data = 721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7173464, .data = 184, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_27[] = {
		{ .addr = 0xb29c66, .byte = 0x05 },
		{ .addr = 0xb29c67, .byte = 0xe5 },
		{ .addr = 0xb29c68, .byte = 0x48 },
		{ .addr = 0xb29c69, .byte = 0x20 },
		{ .addr = 0x54a724, .byte = 0x03 },
		{ .addr = 0x54a725, .byte = 0xbc },
		{ .addr = 0xb29c6a, .byte = 0xf6 },
		{ .addr = 0xb29c6b, .byte = 0x7d }
};

static const SST_RamByte bset_final_ram_27[] = {
		{ .addr = 0xb29c66, .byte = 0x05 },
		{ .addr = 0xb29c67, .byte = 0xe5 },
		{ .addr = 0xb29c68, .byte = 0x48 },
		{ .addr = 0xb29c69, .byte = 0x20 },
		{ .addr = 0x54a724, .byte = 0x83 },
		{ .addr = 0x54a725, .byte = 0xbc },
		{ .addr = 0xb29c6a, .byte = 0xf6 },
		{ .addr = 0xb29c6b, .byte = 0x7d }
};

static const SST_Transaction bset_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5547812, .data = 768, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11705450, .data = 63101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5547812, .data = 33536, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_28[] = {
		{ .addr = 0x7d0f58, .byte = 0x03 },
		{ .addr = 0x7d0f59, .byte = 0xef },
		{ .addr = 0x7d0f5a, .byte = 0x9b },
		{ .addr = 0x7d0f5b, .byte = 0x48 },
		{ .addr = 0x7d0f5c, .byte = 0x95 },
		{ .addr = 0x7d0f5d, .byte = 0xf9 },
		{ .addr = 0xb6d18c, .byte = 0x28 },
		{ .addr = 0xb6d18d, .byte = 0xfe },
		{ .addr = 0x7d0f5e, .byte = 0xaa },
		{ .addr = 0x7d0f5f, .byte = 0x4d }
};

static const SST_RamByte bset_final_ram_28[] = {
		{ .addr = 0x7d0f58, .byte = 0x03 },
		{ .addr = 0x7d0f59, .byte = 0xef },
		{ .addr = 0x7d0f5a, .byte = 0x9b },
		{ .addr = 0x7d0f5b, .byte = 0x48 },
		{ .addr = 0x7d0f5c, .byte = 0x95 },
		{ .addr = 0x7d0f5d, .byte = 0xf9 },
		{ .addr = 0xb6d18c, .byte = 0xa8 },
		{ .addr = 0xb6d18d, .byte = 0xfe },
		{ .addr = 0x7d0f5e, .byte = 0xaa },
		{ .addr = 0x7d0f5f, .byte = 0x4d }
};

static const SST_Transaction bset_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8195932, .data = 38393, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11981196, .data = 10240, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8195934, .data = 43597, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11981196, .data = 43008, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_29[] = {
		{ .addr = 0x94358a, .byte = 0x08 },
		{ .addr = 0x94358b, .byte = 0xed },
		{ .addr = 0x94358c, .byte = 0x2e },
		{ .addr = 0x94358d, .byte = 0x76 },
		{ .addr = 0x94358e, .byte = 0xc1 },
		{ .addr = 0x94358f, .byte = 0xb0 },
		{ .addr = 0x943590, .byte = 0xc7 },
		{ .addr = 0x943591, .byte = 0x14 },
		{ .addr = 0x69183e, .byte = 0x7e },
		{ .addr = 0x69183f, .byte = 0x1e },
		{ .addr = 0x943592, .byte = 0x87 },
		{ .addr = 0x943593, .byte = 0x7c }
};

static const SST_RamByte bset_final_ram_29[] = {
		{ .addr = 0x94358a, .byte = 0x08 },
		{ .addr = 0x94358b, .byte = 0xed },
		{ .addr = 0x94358c, .byte = 0x2e },
		{ .addr = 0x94358d, .byte = 0x76 },
		{ .addr = 0x94358e, .byte = 0xc1 },
		{ .addr = 0x94358f, .byte = 0xb0 },
		{ .addr = 0x943590, .byte = 0xc7 },
		{ .addr = 0x943591, .byte = 0x14 },
		{ .addr = 0x69183e, .byte = 0x7e },
		{ .addr = 0x69183f, .byte = 0x1e },
		{ .addr = 0x943592, .byte = 0x87 },
		{ .addr = 0x943593, .byte = 0x7c }
};

static const SST_Transaction bset_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9713038, .data = 49584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9713040, .data = 50964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6887486, .data = 32256, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9713042, .data = 34684, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6887486, .data = 32256, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bset_initial_ram_30[] = {
		{ .addr = 0x1bcffe, .byte = 0x08 },
		{ .addr = 0x1bcfff, .byte = 0xc2 },
		{ .addr = 0x1bd000, .byte = 0x36 },
		{ .addr = 0x1bd001, .byte = 0x1f },
		{ .addr = 0x1bd002, .byte = 0x27 },
		{ .addr = 0x1bd003, .byte = 0x61 },
		{ .addr = 0x1bd004, .byte = 0x5c },
		{ .addr = 0x1bd005, .byte = 0x4f }
};

static const SST_RamByte bset_final_ram_30[] = {
		{ .addr = 0x1bcffe, .byte = 0x08 },
		{ .addr = 0x1bcfff, .byte = 0xc2 },
		{ .addr = 0x1bd000, .byte = 0x36 },
		{ .addr = 0x1bd001, .byte = 0x1f },
		{ .addr = 0x1bd002, .byte = 0x27 },
		{ .addr = 0x1bd003, .byte = 0x61 },
		{ .addr = 0x1bd004, .byte = 0x5c },
		{ .addr = 0x1bd005, .byte = 0x4f }
};

static const SST_Transaction bset_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1822722, .data = 10081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1822724, .data = 23631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte bset_initial_ram_31[] = {
		{ .addr = 0xca93b0, .byte = 0x03 },
		{ .addr = 0xca93b1, .byte = 0xf1 },
		{ .addr = 0xca93b2, .byte = 0x5a },
		{ .addr = 0xca93b3, .byte = 0x39 },
		{ .addr = 0xca93b4, .byte = 0x7a },
		{ .addr = 0xca93b5, .byte = 0x8d },
		{ .addr = 0x942966, .byte = 0xd9 },
		{ .addr = 0x942967, .byte = 0x13 },
		{ .addr = 0xca93b6, .byte = 0x58 },
		{ .addr = 0xca93b7, .byte = 0x8b }
};

static const SST_RamByte bset_final_ram_31[] = {
		{ .addr = 0xca93b0, .byte = 0x03 },
		{ .addr = 0xca93b1, .byte = 0xf1 },
		{ .addr = 0xca93b2, .byte = 0x5a },
		{ .addr = 0xca93b3, .byte = 0x39 },
		{ .addr = 0xca93b4, .byte = 0x7a },
		{ .addr = 0xca93b5, .byte = 0x8d },
		{ .addr = 0x942966, .byte = 0xd9 },
		{ .addr = 0x942967, .byte = 0x1b },
		{ .addr = 0xca93b6, .byte = 0x58 },
		{ .addr = 0xca93b7, .byte = 0x8b }
};

static const SST_Transaction bset_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13276084, .data = 31373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9709926, .data = 19, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13276086, .data = 22667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9709926, .data = 27, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase bset[] = {
	{
		.name = "000 BSET D3, (d8, A0, Xn) 07f0",
		.initial = {
			.regs = {
				2962023366, 2482580210, 932863521, 2287903684, 3334633517, 2329412468, 2679143256, 1584390542, 1651939397, 2364158735, 25350572, 1616996840, 3261310075, 3663937633, 2461090985, 10269570, 15175068, 41218, 16528236
			},
			.prefetch0 = 2032,
			.prefetch1 = 35496,
			.ram = bset_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2962023366, 2482580210, 932863521, 2287903684, 3334633517, 2329412468, 2679143256, 1584390542, 1651939397, 2364158735, 25350572, 1616996840, 3261310075, 3663937633, 2461090985, 10269570, 15175068, 41218, 16528240
			},
			.prefetch0 = 30742,
			.prefetch1 = 29956,
			.ram = bset_final_ram_0,
			.ram_len = 10,
		},
		.transactions = bset_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 BSET D5, (A0) 0bd0",
		.initial = {
			.regs = {
				1228749287, 1165349120, 2238647741, 2628325352, 2145917188, 3803380128, 2101384518, 2946699310, 3687858068, 2910336982, 2715826543, 1594173552, 1939546091, 1573647262, 3465012136, 2398178, 5119644, 40981, 16449330
			},
			.prefetch0 = 3024,
			.prefetch1 = 18555,
			.ram = bset_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1228749287, 1165349120, 2238647741, 2628325352, 2145917188, 3803380128, 2101384518, 2946699310, 3687858068, 2910336982, 2715826543, 1594173552, 1939546091, 1573647262, 3465012136, 2398178, 5119644, 40981, 16449332
			},
			.prefetch0 = 18555,
			.prefetch1 = 43073,
			.ram = bset_final_ram_1,
			.ram_len = 8,
		},
		.transactions = bset_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 BSET D7, (A7)+ 0fdf",
		.initial = {
			.regs = {
				3431973147, 1024040594, 691445363, 2642070844, 1331857915, 3641090286, 894941029, 3103530700, 183780723, 377932613, 3646467203, 2336322888, 518194527, 844827126, 3802621039, 6982734, 6663568, 33287, 4808254
			},
			.prefetch0 = 4063,
			.prefetch1 = 56856,
			.ram = bset_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3431973147, 1024040594, 691445363, 2642070844, 1331857915, 3641090286, 894941029, 3103530700, 183780723, 377932613, 3646467203, 2336322888, 518194527, 844827126, 3802621039, 6982736, 6663568, 33287, 4808256
			},
			.prefetch0 = 56856,
			.prefetch1 = 42775,
			.ram = bset_final_ram_2,
			.ram_len = 8,
		},
		.transactions = bset_transactions_2,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "003 BSET D0, (d16, A7) 01ef",
		.initial = {
			.regs = {
				4254957524, 479950994, 746463964, 746026841, 30675182, 379055595, 2731896287, 3680621813, 2377075333, 570434985, 2522680407, 1806635448, 1311629403, 3494014000, 1438732441, 15179538, 15271838, 8469, 5140628
			},
			.prefetch0 = 495,
			.prefetch1 = 57195,
			.ram = bset_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4254957524, 479950994, 746463964, 746026841, 30675182, 379055595, 2731896287, 3680621813, 2377075333, 570434985, 2522680407, 1806635448, 1311629403, 3494014000, 1438732441, 15179538, 15271838, 8465, 5140632
			},
			.prefetch0 = 54801,
			.prefetch1 = 55698,
			.ram = bset_final_ram_3,
			.ram_len = 10,
		},
		.transactions = bset_transactions_3,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "004 BSET #, (d16, A6) 08ee",
		.initial = {
			.regs = {
				2239094585, 3893904885, 1174316539, 1098286224, 2417491488, 2706634073, 2333030196, 4176707599, 258222783, 2854851763, 3187848168, 1724624706, 1307159634, 3843396794, 3499795380, 8141318, 16722846, 1028, 9439380
			},
			.prefetch0 = 2286,
			.prefetch1 = 23546,
			.ram = bset_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2239094585, 3893904885, 1174316539, 1098286224, 2417491488, 2706634073, 2333030196, 4176707599, 258222783, 2854851763, 3187848168, 1724624706, 1307159634, 3843396794, 3499795380, 8141318, 16722846, 1024, 9439386
			},
			.prefetch0 = 56726,
			.prefetch1 = 40094,
			.ram = bset_final_ram_4,
			.ram_len = 12,
		},
		.transactions = bset_transactions_4,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "005 BSET D3, (d16, A1) 07e9",
		.initial = {
			.regs = {
				1331160421, 2354960526, 748532892, 2633817311, 412516322, 25874828, 690785709, 415147466, 869371015, 1939831086, 934630669, 1971951387, 2135709946, 3166701624, 2637166198, 15923670, 13300374, 33052, 10157088
			},
			.prefetch0 = 2025,
			.prefetch1 = 64916,
			.ram = bset_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1331160421, 2354960526, 748532892, 2633817311, 412516322, 25874828, 690785709, 415147466, 869371015, 1939831086, 934630669, 1971951387, 2135709946, 3166701624, 2637166198, 15923670, 13300374, 33052, 10157092
			},
			.prefetch0 = 37355,
			.prefetch1 = 17337,
			.ram = bset_final_ram_5,
			.ram_len = 10,
		},
		.transactions = bset_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 BSET D3, D1 07c1",
		.initial = {
			.regs = {
				1340917361, 169370733, 410698235, 4191201600, 4293509585, 1284714212, 1333686695, 2257158380, 1767994867, 3266662141, 361039140, 913866363, 2068988003, 4000124384, 2259353837, 4030250, 8617844, 33040, 4665928
			},
			.prefetch0 = 1985,
			.prefetch1 = 62039,
			.ram = bset_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1340917361, 169370733, 410698235, 4191201600, 4293509585, 1284714212, 1333686695, 2257158380, 1767994867, 3266662141, 361039140, 913866363, 2068988003, 4000124384, 2259353837, 4030250, 8617844, 33040, 4665930
			},
			.prefetch0 = 62039,
			.prefetch1 = 1545,
			.ram = bset_final_ram_6,
			.ram_len = 6,
		},
		.transactions = bset_transactions_6,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "007 BSET D4, (d8, A6, Xn) 09f6",
		.initial = {
			.regs = {
				2559772075, 2508213502, 1432350638, 2198837988, 3348389958, 375921689, 2346388737, 3303487514, 4120564901, 38753047, 4246281733, 227882555, 2506153713, 448634246, 2920908263, 1329324, 10413618, 34056, 10763244
			},
			.prefetch0 = 2550,
			.prefetch1 = 63011,
			.ram = bset_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2559772075, 2508213502, 1432350638, 2198837988, 3348389958, 375921689, 2346388737, 3303487514, 4120564901, 38753047, 4246281733, 227882555, 2506153713, 448634246, 2920908263, 1329324, 10413618, 34056, 10763248
			},
			.prefetch0 = 39912,
			.prefetch1 = 39839,
			.ram = bset_final_ram_7,
			.ram_len = 10,
		},
		.transactions = bset_transactions_7,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "008 BSET D4, -(A0) 09e0",
		.initial = {
			.regs = {
				2101430232, 650979124, 2560186582, 2753750666, 2800791725, 967926819, 2799176762, 925560247, 3178318185, 1432016593, 241272423, 2582666703, 267185575, 368787211, 3621267163, 820676, 15124650, 41472, 13550534
			},
			.prefetch0 = 2528,
			.prefetch1 = 57015,
			.ram = bset_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2101430232, 650979124, 2560186582, 2753750666, 2800791725, 967926819, 2799176762, 925560247, 3178318184, 1432016593, 241272423, 2582666703, 267185575, 368787211, 3621267163, 820676, 15124650, 41476, 13550536
			},
			.prefetch0 = 57015,
			.prefetch1 = 8268,
			.ram = bset_final_ram_8,
			.ram_len = 8,
		},
		.transactions = bset_transactions_8,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "009 BSET D7, (A6)+ 0fde",
		.initial = {
			.regs = {
				524443413, 2873603235, 2601615421, 3311382522, 1433551778, 2942750082, 3127990173, 39593010, 2731576649, 1961232178, 3822990202, 864186017, 3348738802, 1419928657, 121243483, 11835880, 10955122, 33284, 15589646
			},
			.prefetch0 = 4062,
			.prefetch1 = 34456,
			.ram = bset_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				524443413, 2873603235, 2601615421, 3311382522, 1433551778, 2942750082, 3127990173, 39593010, 2731576649, 1961232178, 3822990202, 864186017, 3348738802, 1419928657, 121243484, 11835880, 10955122, 33284, 15589648
			},
			.prefetch0 = 34456,
			.prefetch1 = 42455,
			.ram = bset_final_ram_9,
			.ram_len = 8,
		},
		.transactions = bset_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 BSET D6, -(A0) 0de0",
		.initial = {
			.regs = {
				3963459674, 3050550280, 2633172426, 2215143822, 2160610971, 1892744396, 118725259, 3713731057, 765776851, 3427131764, 932412180, 1689591683, 3755120946, 4069306067, 72707718, 4350052, 1932220, 1303, 13857208
			},
			.prefetch0 = 3552,
			.prefetch1 = 61970,
			.ram = bset_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3963459674, 3050550280, 2633172426, 2215143822, 2160610971, 1892744396, 118725259, 3713731057, 765776850, 3427131764, 932412180, 1689591683, 3755120946, 4069306067, 72707718, 4350052, 1932220, 1299, 13857210
			},
			.prefetch0 = 61970,
			.prefetch1 = 21040,
			.ram = bset_final_ram_10,
			.ram_len = 8,
		},
		.transactions = bset_transactions_10,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "011 BSET #, -(A7) 08e7",
		.initial = {
			.regs = {
				2151481431, 1605675074, 531162386, 4013266368, 2078491079, 1646719303, 110617309, 3459429636, 191152573, 1909248015, 2847550321, 3815528296, 1975451005, 1692306489, 2862246065, 6055878, 1283854, 42254, 13424906
			},
			.prefetch0 = 2279,
			.prefetch1 = 56022,
			.ram = bset_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2151481431, 1605675074, 531162386, 4013266368, 2078491079, 1646719303, 110617309, 3459429636, 191152573, 1909248015, 2847550321, 3815528296, 1975451005, 1692306489, 2862246065, 6055878, 1283852, 42250, 13424910
			},
			.prefetch0 = 5072,
			.prefetch1 = 44429,
			.ram = bset_final_ram_11,
			.ram_len = 10,
		},
		.transactions = bset_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 BSET D5, (A5) 0bd5",
		.initial = {
			.regs = {
				2185893737, 1496999085, 389486574, 3552933060, 155889024, 2021738522, 2300449997, 1323722058, 1818093829, 194075724, 2253403724, 384145001, 1988415043, 796547493, 4290336232, 8529168, 11798194, 8973, 13429166
			},
			.prefetch0 = 3029,
			.prefetch1 = 7495,
			.ram = bset_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2185893737, 1496999085, 389486574, 3552933060, 155889024, 2021738522, 2300449997, 1323722058, 1818093829, 194075724, 2253403724, 384145001, 1988415043, 796547493, 4290336232, 8529168, 11798194, 8969, 13429168
			},
			.prefetch0 = 7495,
			.prefetch1 = 51077,
			.ram = bset_final_ram_12,
			.ram_len = 8,
		},
		.transactions = bset_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 BSET D5, (d8, A2, Xn) 0bf2",
		.initial = {
			.regs = {
				1484316719, 2788981841, 1878870336, 853232799, 2073721918, 181710175, 2203946873, 606532129, 758250817, 2460436342, 1111372738, 4007995365, 533119856, 3615353680, 1314030958, 3949886, 10698886, 34065, 629074
			},
			.prefetch0 = 3058,
			.prefetch1 = 55030,
			.ram = bset_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1484316719, 2788981841, 1878870336, 853232799, 2073721918, 181710175, 2203946873, 606532129, 758250817, 2460436342, 1111372738, 4007995365, 533119856, 3615353680, 1314030958, 3949886, 10698886, 34065, 629078
			},
			.prefetch0 = 19739,
			.prefetch1 = 60852,
			.ram = bset_final_ram_13,
			.ram_len = 10,
		},
		.transactions = bset_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 BSET D7, (A1) 0fd1",
		.initial = {
			.regs = {
				2237784259, 1294638483, 1273916928, 2828351591, 2531485219, 3215263101, 2005227143, 1075172092, 930263900, 101060229, 1557171085, 3216581230, 3589267729, 919768562, 3102551772, 10734316, 1644266, 8479, 541528
			},
			.prefetch0 = 4049,
			.prefetch1 = 61973,
			.ram = bset_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2237784259, 1294638483, 1273916928, 2828351591, 2531485219, 3215263101, 2005227143, 1075172092, 930263900, 101060229, 1557171085, 3216581230, 3589267729, 919768562, 3102551772, 10734316, 1644266, 8479, 541530
			},
			.prefetch0 = 61973,
			.prefetch1 = 16922,
			.ram = bset_final_ram_14,
			.ram_len = 8,
		},
		.transactions = bset_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 BSET D0, (xxx).w 01f8",
		.initial = {
			.regs = {
				1494676856, 345975536, 3251836457, 2718649782, 2557790619, 3636726001, 3368215236, 1690703958, 1390677370, 2418785732, 573049538, 2041510208, 2926905900, 3034746705, 3723436460, 15714862, 9403348, 42522, 12185498
			},
			.prefetch0 = 504,
			.prefetch1 = 12106,
			.ram = bset_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1494676856, 345975536, 3251836457, 2718649782, 2557790619, 3636726001, 3368215236, 1690703958, 1390677370, 2418785732, 573049538, 2041510208, 2926905900, 3034746705, 3723436460, 15714862, 9403348, 42522, 12185502
			},
			.prefetch0 = 16112,
			.prefetch1 = 23141,
			.ram = bset_final_ram_15,
			.ram_len = 10,
		},
		.transactions = bset_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "016 BSET D3, (d8, A7, Xn) 07f7",
		.initial = {
			.regs = {
				659703630, 1299739013, 3631198553, 3943837134, 1621729567, 3094184001, 3542348507, 4018936933, 3285883494, 2245991251, 1435985534, 429696986, 3188164838, 1423939350, 2137574152, 919016, 2532940, 260, 4927772
			},
			.prefetch0 = 2039,
			.prefetch1 = 5600,
			.ram = bset_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				659703630, 1299739013, 3631198553, 3943837134, 1621729567, 3094184001, 3542348507, 4018936933, 3285883494, 2245991251, 1435985534, 429696986, 3188164838, 1423939350, 2137574152, 919016, 2532940, 260, 4927776
			},
			.prefetch0 = 10399,
			.prefetch1 = 46350,
			.ram = bset_final_ram_16,
			.ram_len = 10,
		},
		.transactions = bset_transactions_16,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "017 BSET D2, (d8, A5, Xn) 05f5",
		.initial = {
			.regs = {
				2160854419, 2445347383, 1161617066, 4216232922, 1704836633, 779473015, 1361643083, 4199822649, 12342302, 2593861354, 49370669, 3181767973, 1243948070, 1873880492, 4077643177, 13043442, 3756662, 42250, 7851228
			},
			.prefetch0 = 1525,
			.prefetch1 = 53165,
			.ram = bset_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2160854419, 2445347383, 1161617066, 4216232922, 1704836633, 779473015, 1361643083, 4199822649, 12342302, 2593861354, 49370669, 3181767973, 1243948070, 1873880492, 4077643177, 13043442, 3756662, 42254, 7851232
			},
			.prefetch0 = 36484,
			.prefetch1 = 5813,
			.ram = bset_final_ram_17,
			.ram_len = 10,
		},
		.transactions = bset_transactions_17,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "018 BSET #, D1 08c1",
		.initial = {
			.regs = {
				4085950732, 3119186333, 2059953265, 1161497938, 1149042799, 1280313800, 2188739413, 2599800983, 403495066, 1324012545, 3301858585, 2838542746, 16034913, 3213472822, 1983411530, 849694, 11859148, 42002, 12792290
			},
			.prefetch0 = 2241,
			.prefetch1 = 55457,
			.ram = bset_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4085950732, 3119186335, 2059953265, 1161497938, 1149042799, 1280313800, 2188739413, 2599800983, 403495066, 1324012545, 3301858585, 2838542746, 16034913, 3213472822, 1983411530, 849694, 11859148, 42006, 12792294
			},
			.prefetch0 = 34792,
			.prefetch1 = 43815,
			.ram = bset_final_ram_18,
			.ram_len = 8,
		},
		.transactions = bset_transactions_18,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "019 BSET D2, (d16, A1) 05e9",
		.initial = {
			.regs = {
				2618637909, 3224258740, 360445396, 2718138703, 804964691, 1978337144, 3004026530, 2310306922, 2342059887, 2555703157, 3631415225, 1716440870, 3882885717, 4099636025, 2396393686, 9782606, 2484190, 8974, 15323996
			},
			.prefetch0 = 1513,
			.prefetch1 = 41468,
			.ram = bset_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2618637909, 3224258740, 360445396, 2718138703, 804964691, 1978337144, 3004026530, 2310306922, 2342059887, 2555703157, 3631415225, 1716440870, 3882885717, 4099636025, 2396393686, 9782606, 2484190, 8974, 15324000
			},
			.prefetch0 = 10022,
			.prefetch1 = 25667,
			.ram = bset_final_ram_19,
			.ram_len = 10,
		},
		.transactions = bset_transactions_19,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "020 BSET D2, (xxx).w 05f8",
		.initial = {
			.regs = {
				4155115984, 1256748167, 8686122, 639199008, 1596390159, 760451665, 2279967823, 841000531, 2174708978, 3039093289, 1747451188, 522010154, 3602661051, 1311403151, 94957404, 2480584, 6978480, 41995, 7785706
			},
			.prefetch0 = 1528,
			.prefetch1 = 12082,
			.ram = bset_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4155115984, 1256748167, 8686122, 639199008, 1596390159, 760451665, 2279967823, 841000531, 2174708978, 3039093289, 1747451188, 522010154, 3602661051, 1311403151, 94957404, 2480584, 6978480, 41999, 7785710
			},
			.prefetch0 = 8198,
			.prefetch1 = 34389,
			.ram = bset_final_ram_20,
			.ram_len = 10,
		},
		.transactions = bset_transactions_20,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "021 BSET D0, -(A6) 01e6",
		.initial = {
			.regs = {
				3128602882, 2550680519, 3336827408, 1777326478, 1487957152, 113693960, 114762295, 2583756771, 1395639306, 2892249970, 2238841151, 1091751508, 729921790, 2032477013, 616744231, 12145960, 9764942, 8984, 12763900
			},
			.prefetch0 = 486,
			.prefetch1 = 14570,
			.ram = bset_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3128602882, 2550680519, 3336827408, 1777326478, 1487957152, 113693960, 114762295, 2583756771, 1395639306, 2892249970, 2238841151, 1091751508, 729921790, 2032477013, 616744230, 12145960, 9764942, 8988, 12763902
			},
			.prefetch0 = 14570,
			.prefetch1 = 55821,
			.ram = bset_final_ram_21,
			.ram_len = 8,
		},
		.transactions = bset_transactions_21,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "022 BSET D2, D0 05c0",
		.initial = {
			.regs = {
				1984363907, 4232784203, 1362252988, 611183084, 69828778, 3973593350, 2657122108, 68444773, 2272474876, 3988253873, 789587878, 2521084471, 2886830907, 3723734467, 3418947188, 15350304, 7549534, 41751, 2676240
			},
			.prefetch0 = 1472,
			.prefetch1 = 52425,
			.ram = bset_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1984363907, 4232784203, 1362252988, 611183084, 69828778, 3973593350, 2657122108, 68444773, 2272474876, 3988253873, 789587878, 2521084471, 2886830907, 3723734467, 3418947188, 15350304, 7549534, 41747, 2676242
			},
			.prefetch0 = 52425,
			.prefetch1 = 28140,
			.ram = bset_final_ram_22,
			.ram_len = 6,
		},
		.transactions = bset_transactions_22,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "023 BSET D2, D7 05c7",
		.initial = {
			.regs = {
				2998046642, 905871341, 2317717570, 3869725723, 2267056471, 3581540068, 2583978677, 1540559833, 4201726932, 933322022, 1060907961, 2202640717, 165312611, 3743945379, 3819933837, 13016086, 1075890, 1026, 4954012
			},
			.prefetch0 = 1479,
			.prefetch1 = 10148,
			.ram = bset_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2998046642, 905871341, 2317717570, 3869725723, 2267056471, 3581540068, 2583978677, 1540559837, 4201726932, 933322022, 1060907961, 2202640717, 165312611, 3743945379, 3819933837, 13016086, 1075890, 1030, 4954014
			},
			.prefetch0 = 10148,
			.prefetch1 = 41825,
			.ram = bset_final_ram_23,
			.ram_len = 6,
		},
		.transactions = bset_transactions_23,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "024 BSET D0, D4 01c4",
		.initial = {
			.regs = {
				2629286455, 1954480460, 100093471, 3506635904, 3242116265, 2112145776, 1579408263, 2040100990, 4141743712, 234636220, 4017317544, 2453878633, 1618552706, 3810484042, 3803044863, 5920212, 4485874, 41999, 3684596
			},
			.prefetch0 = 452,
			.prefetch1 = 1614,
			.ram = bset_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2629286455, 1954480460, 100093471, 3506635904, 3250504873, 2112145776, 1579408263, 2040100990, 4141743712, 234636220, 4017317544, 2453878633, 1618552706, 3810484042, 3803044863, 5920212, 4485874, 41999, 3684598
			},
			.prefetch0 = 1614,
			.prefetch1 = 62082,
			.ram = bset_final_ram_24,
			.ram_len = 6,
		},
		.transactions = bset_transactions_24,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "025 BSET D2, D4 05c4",
		.initial = {
			.regs = {
				1907615756, 561963816, 534320409, 61458911, 1869379716, 2365079988, 2730654706, 1478052569, 3238353033, 4186479563, 714926382, 2495858888, 2393925415, 2061147594, 2642047380, 8075520, 12229492, 33307, 2041122
			},
			.prefetch0 = 1476,
			.prefetch1 = 16877,
			.ram = bset_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1907615756, 561963816, 534320409, 61458911, 1869379716, 2365079988, 2730654706, 1478052569, 3238353033, 4186479563, 714926382, 2495858888, 2393925415, 2061147594, 2642047380, 8075520, 12229492, 33307, 2041124
			},
			.prefetch0 = 16877,
			.prefetch1 = 22830,
			.ram = bset_final_ram_25,
			.ram_len = 6,
		},
		.transactions = bset_transactions_25,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "026 BSET D2, (A3)+ 05db",
		.initial = {
			.regs = {
				1688183460, 3483521558, 1520578799, 1950157246, 1601171946, 3266192154, 477317497, 2520768205, 1587620764, 2432770600, 1639774912, 1886221657, 531904056, 3273700360, 2573719760, 13049882, 12249234, 41244, 13419714
			},
			.prefetch0 = 1499,
			.prefetch1 = 10067,
			.ram = bset_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1688183460, 3483521558, 1520578799, 1950157246, 1601171946, 3266192154, 477317497, 2520768205, 1587620764, 2432770600, 1639774912, 1886221658, 531904056, 3273700360, 2573719760, 13049882, 12249234, 41240, 13419716
			},
			.prefetch0 = 10067,
			.prefetch1 = 721,
			.ram = bset_final_ram_26,
			.ram_len = 8,
		},
		.transactions = bset_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 BSET D2, -(A5) 05e5",
		.initial = {
			.regs = {
				2506914542, 168744524, 3667821495, 47162426, 569098951, 1738951245, 1528837538, 2543333447, 2301490055, 2268332234, 1466452791, 3758851481, 1511910314, 2018813733, 3241863640, 3579252, 9522678, 33298, 11705450
			},
			.prefetch0 = 1509,
			.prefetch1 = 18464,
			.ram = bset_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2506914542, 168744524, 3667821495, 47162426, 569098951, 1738951245, 1528837538, 2543333447, 2301490055, 2268332234, 1466452791, 3758851481, 1511910314, 2018813732, 3241863640, 3579252, 9522678, 33302, 11705452
			},
			.prefetch0 = 18464,
			.prefetch1 = 63101,
			.ram = bset_final_ram_27,
			.ram_len = 8,
		},
		.transactions = bset_transactions_27,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "028 BSET D1, (d16, A7) 03ef",
		.initial = {
			.regs = {
				3944598107, 1538538959, 3772479109, 3844814952, 28632651, 3374535151, 1343341680, 2324789504, 110323793, 325358048, 2440783074, 2543168355, 2056382002, 3036726735, 2511391135, 12006980, 5318246, 514, 8195932
			},
			.prefetch0 = 1007,
			.prefetch1 = 39752,
			.ram = bset_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3944598107, 1538538959, 3772479109, 3844814952, 28632651, 3374535151, 1343341680, 2324789504, 110323793, 325358048, 2440783074, 2543168355, 2056382002, 3036726735, 2511391135, 12006980, 5318246, 518, 8195936
			},
			.prefetch0 = 38393,
			.prefetch1 = 43597,
			.ram = bset_final_ram_28,
			.ram_len = 10,
		},
		.transactions = bset_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 BSET #, (d16, A5) 08ed",
		.initial = {
			.regs = {
				2327795194, 3154723015, 1220855003, 3013086051, 3550052171, 2729490226, 1789833976, 2446966772, 3047754336, 707297987, 402187495, 602577034, 671574944, 3161020046, 892868497, 4558720, 12228190, 34075, 9713038
			},
			.prefetch0 = 2285,
			.prefetch1 = 11894,
			.ram = bset_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2327795194, 3154723015, 1220855003, 3013086051, 3550052171, 2729490226, 1789833976, 2446966772, 3047754336, 707297987, 402187495, 602577034, 671574944, 3161020046, 892868497, 4558720, 12228190, 34075, 9713044
			},
			.prefetch0 = 50964,
			.prefetch1 = 34684,
			.ram = bset_final_ram_29,
			.ram_len = 12,
		},
		.transactions = bset_transactions_29,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "030 BSET #, D2 08c2",
		.initial = {
			.regs = {
				176932192, 226765989, 1176028901, 416799421, 4252432077, 1206947426, 1915243102, 701909786, 1375370621, 4225586729, 2400455648, 4009868149, 607520944, 2667646051, 3985163352, 10263542, 16216554, 40981, 1822722
			},
			.prefetch0 = 2242,
			.prefetch1 = 13855,
			.ram = bset_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				176932192, 226765989, 3323512549, 416799421, 4252432077, 1206947426, 1915243102, 701909786, 1375370621, 4225586729, 2400455648, 4009868149, 607520944, 2667646051, 3985163352, 10263542, 16216554, 40981, 1822726
			},
			.prefetch0 = 10081,
			.prefetch1 = 23631,
			.ram = bset_final_ram_30,
			.ram_len = 8,
		},
		.transactions = bset_transactions_30,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "031 BSET D1, (d8, A1, Xn) 03f1",
		.initial = {
			.regs = {
				2554275869, 3350242059, 2882035675, 4116213108, 202256374, 2479032525, 1720900831, 507726901, 4072345960, 4006682721, 2451819474, 1151645755, 4065805165, 3596788480, 4239010670, 6968268, 6322074, 33546, 13276084
			},
			.prefetch0 = 1009,
			.prefetch1 = 23097,
			.ram = bset_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2554275869, 3350242059, 2882035675, 4116213108, 202256374, 2479032525, 1720900831, 507726901, 4072345960, 4006682721, 2451819474, 1151645755, 4065805165, 3596788480, 4239010670, 6968268, 6322074, 33550, 13276088
			},
			.prefetch0 = 31373,
			.prefetch1 = 22667,
			.ram = bset_final_ram_31,
			.ram_len = 10,
		},
		.transactions = bset_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_BSET_H */