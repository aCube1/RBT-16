#ifndef RBT_ADDB_H
#define RBT_ADDB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addb_initial_ram_0[] = {
		{ .addr = 0x32cbb2, .byte = 0xd7 },
		{ .addr = 0x32cbb3, .byte = 0x2a },
		{ .addr = 0x32cbb4, .byte = 0x9c },
		{ .addr = 0x32cbb5, .byte = 0xbc },
		{ .addr = 0x32cbb6, .byte = 0x77 },
		{ .addr = 0x32cbb7, .byte = 0xb3 },
		{ .addr = 0xdb72aa, .byte = 0x6d },
		{ .addr = 0xdb72ab, .byte = 0xf0 },
		{ .addr = 0x32cbb8, .byte = 0x1b },
		{ .addr = 0x32cbb9, .byte = 0x0a }
};

static const SST_RamByte addb_final_ram_0[] = {
		{ .addr = 0x32cbb2, .byte = 0xd7 },
		{ .addr = 0x32cbb3, .byte = 0x2a },
		{ .addr = 0x32cbb4, .byte = 0x9c },
		{ .addr = 0x32cbb5, .byte = 0xbc },
		{ .addr = 0x32cbb6, .byte = 0x77 },
		{ .addr = 0x32cbb7, .byte = 0xb3 },
		{ .addr = 0xdb72aa, .byte = 0x33 },
		{ .addr = 0xdb72ab, .byte = 0xf0 },
		{ .addr = 0x32cbb8, .byte = 0x1b },
		{ .addr = 0x32cbb9, .byte = 0x0a }
};

static const SST_Transaction addb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3328950, .data = 30643, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14381738, .data = 27904, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3328952, .data = 6922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14381738, .data = 13056, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_1[] = {
		{ .addr = 0x7c605e, .byte = 0xd3 },
		{ .addr = 0x7c605f, .byte = 0x34 },
		{ .addr = 0x7c6060, .byte = 0xbf },
		{ .addr = 0x7c6061, .byte = 0xe4 },
		{ .addr = 0x7c6062, .byte = 0xa0 },
		{ .addr = 0x7c6063, .byte = 0x5f },
		{ .addr = 0x7bff8a, .byte = 0xa1 },
		{ .addr = 0x7bff8b, .byte = 0x87 },
		{ .addr = 0x7c6064, .byte = 0x37 },
		{ .addr = 0x7c6065, .byte = 0x42 }
};

static const SST_RamByte addb_final_ram_1[] = {
		{ .addr = 0x7c605e, .byte = 0xd3 },
		{ .addr = 0x7c605f, .byte = 0x34 },
		{ .addr = 0x7c6060, .byte = 0xbf },
		{ .addr = 0x7c6061, .byte = 0xe4 },
		{ .addr = 0x7c6062, .byte = 0xa0 },
		{ .addr = 0x7c6063, .byte = 0x5f },
		{ .addr = 0x7bff8a, .byte = 0xa1 },
		{ .addr = 0x7bff8b, .byte = 0x7b },
		{ .addr = 0x7c6064, .byte = 0x37 },
		{ .addr = 0x7c6065, .byte = 0x42 }
};

static const SST_Transaction addb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8151138, .data = 41055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8126346, .data = 135, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8151140, .data = 14146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8126346, .data = 123, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_2[] = {
		{ .addr = 0xa8ed4c, .byte = 0xd7 },
		{ .addr = 0xa8ed4d, .byte = 0x33 },
		{ .addr = 0xa8ed4e, .byte = 0x5c },
		{ .addr = 0xa8ed4f, .byte = 0x2a },
		{ .addr = 0xa8ed50, .byte = 0xec },
		{ .addr = 0xa8ed51, .byte = 0xa2 },
		{ .addr = 0x73d282, .byte = 0x2d },
		{ .addr = 0x73d283, .byte = 0x79 },
		{ .addr = 0xa8ed52, .byte = 0x90 },
		{ .addr = 0xa8ed53, .byte = 0x9b }
};

static const SST_RamByte addb_final_ram_2[] = {
		{ .addr = 0xa8ed4c, .byte = 0xd7 },
		{ .addr = 0xa8ed4d, .byte = 0x33 },
		{ .addr = 0xa8ed4e, .byte = 0x5c },
		{ .addr = 0xa8ed4f, .byte = 0x2a },
		{ .addr = 0xa8ed50, .byte = 0xec },
		{ .addr = 0xa8ed51, .byte = 0xa2 },
		{ .addr = 0x73d282, .byte = 0xa3 },
		{ .addr = 0x73d283, .byte = 0x79 },
		{ .addr = 0xa8ed52, .byte = 0x90 },
		{ .addr = 0xa8ed53, .byte = 0x9b }
};

static const SST_Transaction addb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11070800, .data = 60578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7590530, .data = 11520, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11070802, .data = 37019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7590530, .data = 41728, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_3[] = {
		{ .addr = 0xc3e082, .byte = 0xd8 },
		{ .addr = 0xc3e083, .byte = 0x32 },
		{ .addr = 0xc3e084, .byte = 0x1b },
		{ .addr = 0xc3e085, .byte = 0xa3 },
		{ .addr = 0xc3e086, .byte = 0x40 },
		{ .addr = 0xc3e087, .byte = 0x06 },
		{ .addr = 0xbbbba6, .byte = 0x8a },
		{ .addr = 0xbbbba7, .byte = 0xa9 },
		{ .addr = 0xc3e088, .byte = 0x1e },
		{ .addr = 0xc3e089, .byte = 0x60 }
};

static const SST_RamByte addb_final_ram_3[] = {
		{ .addr = 0xc3e082, .byte = 0xd8 },
		{ .addr = 0xc3e083, .byte = 0x32 },
		{ .addr = 0xc3e084, .byte = 0x1b },
		{ .addr = 0xc3e085, .byte = 0xa3 },
		{ .addr = 0xc3e086, .byte = 0x40 },
		{ .addr = 0xc3e087, .byte = 0x06 },
		{ .addr = 0xbbbba6, .byte = 0x8a },
		{ .addr = 0xbbbba7, .byte = 0xa9 },
		{ .addr = 0xc3e088, .byte = 0x1e },
		{ .addr = 0xc3e089, .byte = 0x60 }
};

static const SST_Transaction addb_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12836998, .data = 16390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12303270, .data = 35328, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12837000, .data = 7776, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_4[] = {
		{ .addr = 0x0426c0, .byte = 0xd8 },
		{ .addr = 0x0426c1, .byte = 0x18 },
		{ .addr = 0x0426c2, .byte = 0x70 },
		{ .addr = 0x0426c3, .byte = 0xc9 },
		{ .addr = 0x64c658, .byte = 0x94 },
		{ .addr = 0x64c659, .byte = 0x64 },
		{ .addr = 0x0426c4, .byte = 0x56 },
		{ .addr = 0x0426c5, .byte = 0x7e }
};

static const SST_RamByte addb_final_ram_4[] = {
		{ .addr = 0x0426c0, .byte = 0xd8 },
		{ .addr = 0x0426c1, .byte = 0x18 },
		{ .addr = 0x0426c2, .byte = 0x70 },
		{ .addr = 0x0426c3, .byte = 0xc9 },
		{ .addr = 0x64c658, .byte = 0x94 },
		{ .addr = 0x64c659, .byte = 0x64 },
		{ .addr = 0x0426c4, .byte = 0x56 },
		{ .addr = 0x0426c5, .byte = 0x7e }
};

static const SST_Transaction addb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6604376, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 272068, .data = 22142, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_5[] = {
		{ .addr = 0x09ea08, .byte = 0xdb },
		{ .addr = 0x09ea09, .byte = 0x31 },
		{ .addr = 0x09ea0a, .byte = 0x59 },
		{ .addr = 0x09ea0b, .byte = 0x95 },
		{ .addr = 0x09ea0c, .byte = 0xb2 },
		{ .addr = 0x09ea0d, .byte = 0xeb },
		{ .addr = 0x0bbf94, .byte = 0xa4 },
		{ .addr = 0x0bbf95, .byte = 0x97 },
		{ .addr = 0x09ea0e, .byte = 0x1f },
		{ .addr = 0x09ea0f, .byte = 0x2e }
};

static const SST_RamByte addb_final_ram_5[] = {
		{ .addr = 0x09ea08, .byte = 0xdb },
		{ .addr = 0x09ea09, .byte = 0x31 },
		{ .addr = 0x09ea0a, .byte = 0x59 },
		{ .addr = 0x09ea0b, .byte = 0x95 },
		{ .addr = 0x09ea0c, .byte = 0xb2 },
		{ .addr = 0x09ea0d, .byte = 0xeb },
		{ .addr = 0x0bbf94, .byte = 0xa4 },
		{ .addr = 0x0bbf95, .byte = 0x48 },
		{ .addr = 0x09ea0e, .byte = 0x1f },
		{ .addr = 0x09ea0f, .byte = 0x2e }
};

static const SST_Transaction addb_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 649740, .data = 45803, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 769940, .data = 151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 649742, .data = 7982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 769940, .data = 72, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_6[] = {
		{ .addr = 0xab624a, .byte = 0x54 },
		{ .addr = 0xab624b, .byte = 0x34 },
		{ .addr = 0xab624c, .byte = 0x1e },
		{ .addr = 0xab624d, .byte = 0xf7 },
		{ .addr = 0xab624e, .byte = 0x4c },
		{ .addr = 0xab624f, .byte = 0xf3 },
		{ .addr = 0xe33f94, .byte = 0xce },
		{ .addr = 0xe33f95, .byte = 0xe3 },
		{ .addr = 0xab6250, .byte = 0xe6 },
		{ .addr = 0xab6251, .byte = 0x54 }
};

static const SST_RamByte addb_final_ram_6[] = {
		{ .addr = 0xab624a, .byte = 0x54 },
		{ .addr = 0xab624b, .byte = 0x34 },
		{ .addr = 0xab624c, .byte = 0x1e },
		{ .addr = 0xab624d, .byte = 0xf7 },
		{ .addr = 0xab624e, .byte = 0x4c },
		{ .addr = 0xab624f, .byte = 0xf3 },
		{ .addr = 0xe33f94, .byte = 0xd0 },
		{ .addr = 0xe33f95, .byte = 0xe3 },
		{ .addr = 0xab6250, .byte = 0xe6 },
		{ .addr = 0xab6251, .byte = 0x54 }
};

static const SST_Transaction addb_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11231822, .data = 19699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14892948, .data = 52736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11231824, .data = 58964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14892948, .data = 53248, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_7[] = {
		{ .addr = 0x81f1e8, .byte = 0xd1 },
		{ .addr = 0x81f1e9, .byte = 0x21 },
		{ .addr = 0x81f1ea, .byte = 0x5d },
		{ .addr = 0x81f1eb, .byte = 0xd8 },
		{ .addr = 0x39c350, .byte = 0x29 },
		{ .addr = 0x39c351, .byte = 0xb5 },
		{ .addr = 0x81f1ec, .byte = 0xdb },
		{ .addr = 0x81f1ed, .byte = 0xb9 }
};

static const SST_RamByte addb_final_ram_7[] = {
		{ .addr = 0x81f1e8, .byte = 0xd1 },
		{ .addr = 0x81f1e9, .byte = 0x21 },
		{ .addr = 0x81f1ea, .byte = 0x5d },
		{ .addr = 0x81f1eb, .byte = 0xd8 },
		{ .addr = 0x39c350, .byte = 0x29 },
		{ .addr = 0x39c351, .byte = 0x3d },
		{ .addr = 0x81f1ec, .byte = 0xdb },
		{ .addr = 0x81f1ed, .byte = 0xb9 }
};

static const SST_Transaction addb_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3785552, .data = 181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8516076, .data = 56249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3785552, .data = 61, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_8[] = {
		{ .addr = 0x861830, .byte = 0xd5 },
		{ .addr = 0x861831, .byte = 0x1d },
		{ .addr = 0x861832, .byte = 0xae },
		{ .addr = 0x861833, .byte = 0x4f },
		{ .addr = 0x8586ba, .byte = 0x8e },
		{ .addr = 0x8586bb, .byte = 0x2e },
		{ .addr = 0x861834, .byte = 0xfd },
		{ .addr = 0x861835, .byte = 0x58 }
};

static const SST_RamByte addb_final_ram_8[] = {
		{ .addr = 0x861830, .byte = 0xd5 },
		{ .addr = 0x861831, .byte = 0x1d },
		{ .addr = 0x861832, .byte = 0xae },
		{ .addr = 0x861833, .byte = 0x4f },
		{ .addr = 0x8586ba, .byte = 0x54 },
		{ .addr = 0x8586bb, .byte = 0x2e },
		{ .addr = 0x861834, .byte = 0xfd },
		{ .addr = 0x861835, .byte = 0x58 }
};

static const SST_Transaction addb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8750778, .data = 36352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8788020, .data = 64856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8750778, .data = 21504, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_9[] = {
		{ .addr = 0xd1a7ee, .byte = 0xd7 },
		{ .addr = 0xd1a7ef, .byte = 0x15 },
		{ .addr = 0xd1a7f0, .byte = 0xb0 },
		{ .addr = 0xd1a7f1, .byte = 0x8b },
		{ .addr = 0xe569a6, .byte = 0xf4 },
		{ .addr = 0xe569a7, .byte = 0xbc },
		{ .addr = 0xd1a7f2, .byte = 0x1a },
		{ .addr = 0xd1a7f3, .byte = 0xfe }
};

static const SST_RamByte addb_final_ram_9[] = {
		{ .addr = 0xd1a7ee, .byte = 0xd7 },
		{ .addr = 0xd1a7ef, .byte = 0x15 },
		{ .addr = 0xd1a7f0, .byte = 0xb0 },
		{ .addr = 0xd1a7f1, .byte = 0x8b },
		{ .addr = 0xe569a6, .byte = 0xf4 },
		{ .addr = 0xe569a7, .byte = 0xd0 },
		{ .addr = 0xd1a7f2, .byte = 0x1a },
		{ .addr = 0xd1a7f3, .byte = 0xfe }
};

static const SST_Transaction addb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15034790, .data = 188, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13740018, .data = 6910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15034790, .data = 208, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_10[] = {
		{ .addr = 0x9665b4, .byte = 0x50 },
		{ .addr = 0x9665b5, .byte = 0x26 },
		{ .addr = 0x9665b6, .byte = 0x4b },
		{ .addr = 0x9665b7, .byte = 0x08 },
		{ .addr = 0x4fef48, .byte = 0x7a },
		{ .addr = 0x4fef49, .byte = 0xba },
		{ .addr = 0x9665b8, .byte = 0xee },
		{ .addr = 0x9665b9, .byte = 0xf8 }
};

static const SST_RamByte addb_final_ram_10[] = {
		{ .addr = 0x9665b4, .byte = 0x50 },
		{ .addr = 0x9665b5, .byte = 0x26 },
		{ .addr = 0x9665b6, .byte = 0x4b },
		{ .addr = 0x9665b7, .byte = 0x08 },
		{ .addr = 0x4fef48, .byte = 0x82 },
		{ .addr = 0x4fef49, .byte = 0xba },
		{ .addr = 0x9665b8, .byte = 0xee },
		{ .addr = 0x9665b9, .byte = 0xf8 }
};

static const SST_Transaction addb_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5238600, .data = 31232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9856440, .data = 61176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5238600, .data = 33280, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_11[] = {
		{ .addr = 0x313226, .byte = 0x06 },
		{ .addr = 0x313227, .byte = 0x23 },
		{ .addr = 0x313228, .byte = 0x43 },
		{ .addr = 0x313229, .byte = 0x84 },
		{ .addr = 0x31322a, .byte = 0x94 },
		{ .addr = 0x31322b, .byte = 0xbe },
		{ .addr = 0x0a5c50, .byte = 0x62 },
		{ .addr = 0x0a5c51, .byte = 0x84 },
		{ .addr = 0x31322c, .byte = 0x8c },
		{ .addr = 0x31322d, .byte = 0x83 }
};

static const SST_RamByte addb_final_ram_11[] = {
		{ .addr = 0x313226, .byte = 0x06 },
		{ .addr = 0x313227, .byte = 0x23 },
		{ .addr = 0x313228, .byte = 0x43 },
		{ .addr = 0x313229, .byte = 0x84 },
		{ .addr = 0x31322a, .byte = 0x94 },
		{ .addr = 0x31322b, .byte = 0xbe },
		{ .addr = 0x0a5c50, .byte = 0x62 },
		{ .addr = 0x0a5c51, .byte = 0x08 },
		{ .addr = 0x31322c, .byte = 0x8c },
		{ .addr = 0x31322d, .byte = 0x83 }
};

static const SST_Transaction addb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3224106, .data = 38078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 678992, .data = 132, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3224108, .data = 35971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 678992, .data = 8, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_12[] = {
		{ .addr = 0xdce454, .byte = 0xd2 },
		{ .addr = 0xdce455, .byte = 0x20 },
		{ .addr = 0xdce456, .byte = 0x92 },
		{ .addr = 0xdce457, .byte = 0x71 },
		{ .addr = 0x5a2d58, .byte = 0x75 },
		{ .addr = 0x5a2d59, .byte = 0xbc },
		{ .addr = 0xdce458, .byte = 0x02 },
		{ .addr = 0xdce459, .byte = 0x50 }
};

static const SST_RamByte addb_final_ram_12[] = {
		{ .addr = 0xdce454, .byte = 0xd2 },
		{ .addr = 0xdce455, .byte = 0x20 },
		{ .addr = 0xdce456, .byte = 0x92 },
		{ .addr = 0xdce457, .byte = 0x71 },
		{ .addr = 0x5a2d58, .byte = 0x75 },
		{ .addr = 0x5a2d59, .byte = 0xbc },
		{ .addr = 0xdce458, .byte = 0x02 },
		{ .addr = 0xdce459, .byte = 0x50 }
};

static const SST_Transaction addb_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5909848, .data = 29952, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14476376, .data = 592, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_13[] = {
		{ .addr = 0x5466ac, .byte = 0x56 },
		{ .addr = 0x5466ad, .byte = 0x20 },
		{ .addr = 0x5466ae, .byte = 0x7f },
		{ .addr = 0x5466af, .byte = 0xc8 },
		{ .addr = 0xf5357a, .byte = 0xb5 },
		{ .addr = 0xf5357b, .byte = 0x5c },
		{ .addr = 0x5466b0, .byte = 0x8d },
		{ .addr = 0x5466b1, .byte = 0xd7 }
};

static const SST_RamByte addb_final_ram_13[] = {
		{ .addr = 0x5466ac, .byte = 0x56 },
		{ .addr = 0x5466ad, .byte = 0x20 },
		{ .addr = 0x5466ae, .byte = 0x7f },
		{ .addr = 0x5466af, .byte = 0xc8 },
		{ .addr = 0xf5357a, .byte = 0xb8 },
		{ .addr = 0xf5357b, .byte = 0x5c },
		{ .addr = 0x5466b0, .byte = 0x8d },
		{ .addr = 0x5466b1, .byte = 0xd7 }
};

static const SST_Transaction addb_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16070010, .data = 46336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5531312, .data = 36311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16070010, .data = 47104, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_14[] = {
		{ .addr = 0x846528, .byte = 0x56 },
		{ .addr = 0x846529, .byte = 0x1a },
		{ .addr = 0x84652a, .byte = 0xa6 },
		{ .addr = 0x84652b, .byte = 0xe0 },
		{ .addr = 0xa4188e, .byte = 0x6b },
		{ .addr = 0xa4188f, .byte = 0xc0 },
		{ .addr = 0x84652c, .byte = 0x23 },
		{ .addr = 0x84652d, .byte = 0x46 }
};

static const SST_RamByte addb_final_ram_14[] = {
		{ .addr = 0x846528, .byte = 0x56 },
		{ .addr = 0x846529, .byte = 0x1a },
		{ .addr = 0x84652a, .byte = 0xa6 },
		{ .addr = 0x84652b, .byte = 0xe0 },
		{ .addr = 0xa4188e, .byte = 0x6b },
		{ .addr = 0xa4188f, .byte = 0xc3 },
		{ .addr = 0x84652c, .byte = 0x23 },
		{ .addr = 0x84652d, .byte = 0x46 }
};

static const SST_Transaction addb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10754190, .data = 192, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8676652, .data = 9030, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10754190, .data = 195, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_15[] = {
		{ .addr = 0x0b2026, .byte = 0xde },
		{ .addr = 0x0b2027, .byte = 0x1e },
		{ .addr = 0x0b2028, .byte = 0xde },
		{ .addr = 0x0b2029, .byte = 0xea },
		{ .addr = 0x84e59a, .byte = 0x5a },
		{ .addr = 0x84e59b, .byte = 0xe4 },
		{ .addr = 0x0b202a, .byte = 0x47 },
		{ .addr = 0x0b202b, .byte = 0x3f }
};

static const SST_RamByte addb_final_ram_15[] = {
		{ .addr = 0x0b2026, .byte = 0xde },
		{ .addr = 0x0b2027, .byte = 0x1e },
		{ .addr = 0x0b2028, .byte = 0xde },
		{ .addr = 0x0b2029, .byte = 0xea },
		{ .addr = 0x84e59a, .byte = 0x5a },
		{ .addr = 0x84e59b, .byte = 0xe4 },
		{ .addr = 0x0b202a, .byte = 0x47 },
		{ .addr = 0x0b202b, .byte = 0x3f }
};

static const SST_Transaction addb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8709530, .data = 23040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 729130, .data = 18239, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ADDB_TEST_COUNT = 16;
static const SST_TestCase addb[] = {
	{
		.name = "000 ADD.b D3, (d16, A2) d72a",
		.initial = {
			.regs = {
				3941987954, 2037397763, 1314175244, 4090795974, 2050183426, 2809892028, 3716267913, 1805417682, 1266352929, 2143940923, 3504068078, 2124816477, 3083094888, 697352590, 3202848776, 11763420, 1362616, 32786, 3328950
			},
			.prefetch0 = 55082,
			.prefetch1 = 40124,
			.ram = addb_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3941987954, 2037397763, 1314175244, 4090795974, 2050183426, 2809892028, 3716267913, 1805417682, 1266352929, 2143940923, 3504068078, 2124816477, 3083094888, 697352590, 3202848776, 11763420, 1362616, 32785, 3328954
			},
			.prefetch0 = 30643,
			.prefetch1 = 6922,
			.ram = addb_final_ram_0,
			.ram_len = 10,
		},
		.transactions = addb_transactions_0,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "001 ADD.b D1, (d8, A4, Xn) d334",
		.initial = {
			.regs = {
				1658104401, 506768372, 3720289289, 146758799, 4281229592, 4068565046, 3274096306, 3950431744, 1228003693, 2096096948, 1284599958, 1574972779, 580637244, 581172117, 2704473856, 1094016, 2993144, 1289, 8151138
			},
			.prefetch0 = 54068,
			.prefetch1 = 49124,
			.ram = addb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1658104401, 506768372, 3720289289, 146758799, 4281229592, 4068565046, 3274096306, 3950431744, 1228003693, 2096096948, 1284599958, 1574972779, 580637244, 581172117, 2704473856, 1094016, 2993144, 1299, 8151142
			},
			.prefetch0 = 41055,
			.prefetch1 = 14146,
			.ram = addb_final_ram_1,
			.ram_len = 10,
		},
		.transactions = addb_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 ADD.b D3, (d8, A3, Xn) d733",
		.initial = {
			.regs = {
				1717282586, 1494320361, 2834929842, 110048630, 211563589, 3188764334, 532852421, 530298317, 2584080773, 3065448876, 3392281128, 2858623914, 3686978956, 1070609491, 1392123816, 7876302, 6139466, 8967, 11070800
			},
			.prefetch0 = 55091,
			.prefetch1 = 23594,
			.ram = addb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1717282586, 1494320361, 2834929842, 110048630, 211563589, 3188764334, 532852421, 530298317, 2584080773, 3065448876, 3392281128, 2858623914, 3686978956, 1070609491, 1392123816, 7876302, 6139466, 8970, 11070804
			},
			.prefetch0 = 60578,
			.prefetch1 = 37019,
			.ram = addb_final_ram_2,
			.ram_len = 10,
		},
		.transactions = addb_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 ADD.b (d8, A2, Xn), D4 d832",
		.initial = {
			.regs = {
				2387724628, 2438186069, 3325507806, 1514870844, 3754138564, 617708760, 1987508867, 1038273099, 828061704, 2316049425, 3160930222, 3430684255, 1571764301, 1421596227, 2976228180, 8301722, 2627948, 1812, 12836998
			},
			.prefetch0 = 55346,
			.prefetch1 = 7075,
			.ram = addb_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2387724628, 2438186069, 3325507806, 1514870844, 3754138446, 617708760, 1987508867, 1038273099, 828061704, 2316049425, 3160930222, 3430684255, 1571764301, 1421596227, 2976228180, 8301722, 2627948, 1811, 12837002
			},
			.prefetch0 = 16390,
			.prefetch1 = 7776,
			.ram = addb_final_ram_3,
			.ram_len = 10,
		},
		.transactions = addb_transactions_3,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "004 ADD.b (A0)+, D4 d818",
		.initial = {
			.regs = {
				2580189266, 1786065727, 1345344293, 164659677, 2688704262, 236541304, 3607488978, 1446685060, 845465177, 3564801863, 3022589620, 1788178629, 1717039561, 3844871257, 62519452, 2990354, 9348758, 42766, 272068
			},
			.prefetch0 = 55320,
			.prefetch1 = 28873,
			.ram = addb_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2580189266, 1786065727, 1345344293, 164659677, 2688704362, 236541304, 3607488978, 1446685060, 845465178, 3564801863, 3022589620, 1788178629, 1717039561, 3844871257, 62519452, 2990354, 9348758, 42752, 272070
			},
			.prefetch0 = 28873,
			.prefetch1 = 22142,
			.ram = addb_final_ram_4,
			.ram_len = 8,
		},
		.transactions = addb_transactions_4,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "005 ADD.b D5, (d8, A1, Xn) db31",
		.initial = {
			.regs = {
				872375528, 1003187777, 4072038317, 912329608, 520303415, 988729009, 24617980, 2934144764, 3378867848, 3827102031, 1720809379, 1768995279, 2008252101, 2032948090, 4156383989, 922354, 14330544, 9734, 649740
			},
			.prefetch0 = 56113,
			.prefetch1 = 22933,
			.ram = addb_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				872375528, 1003187777, 4072038317, 912329608, 520303415, 988729009, 24617980, 2934144764, 3378867848, 3827102031, 1720809379, 1768995279, 2008252101, 2032948090, 4156383989, 922354, 14330544, 9747, 649744
			},
			.prefetch0 = 45803,
			.prefetch1 = 7982,
			.ram = addb_final_ram_5,
			.ram_len = 10,
		},
		.transactions = addb_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 ADD.b 2, (d8, A4, Xn) 5434",
		.initial = {
			.regs = {
				2676025021, 1025058620, 3538458306, 1170269743, 1030730685, 4264453101, 562545742, 1970598446, 231355669, 3116120762, 4237265426, 2632999301, 3268024417, 1544749832, 1041075851, 586038, 5757786, 9751, 11231822
			},
			.prefetch0 = 21556,
			.prefetch1 = 7927,
			.ram = addb_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2676025021, 1025058620, 3538458306, 1170269743, 1030730685, 4264453101, 562545742, 1970598446, 231355669, 3116120762, 4237265426, 2632999301, 3268024417, 1544749832, 1041075851, 586038, 5757786, 9736, 11231826
			},
			.prefetch0 = 19699,
			.prefetch1 = 58964,
			.ram = addb_final_ram_6,
			.ram_len = 10,
		},
		.transactions = addb_transactions_6,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "007 ADD.b D0, -(A1) d121",
		.initial = {
			.regs = {
				3368053640, 1238920513, 2649106657, 3151687466, 4127146548, 299765127, 2251050406, 1279855400, 381886650, 3527000914, 2832759686, 3385371707, 1371238990, 1592782342, 4240490703, 16456664, 2359344, 9228, 8516076
			},
			.prefetch0 = 53537,
			.prefetch1 = 24024,
			.ram = addb_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3368053640, 1238920513, 2649106657, 3151687466, 4127146548, 299765127, 2251050406, 1279855400, 381886650, 3527000913, 2832759686, 3385371707, 1371238990, 1592782342, 4240490703, 16456664, 2359344, 9235, 8516078
			},
			.prefetch0 = 24024,
			.prefetch1 = 56249,
			.ram = addb_final_ram_7,
			.ram_len = 8,
		},
		.transactions = addb_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 ADD.b D2, (A5)+ d51d",
		.initial = {
			.regs = {
				3695020421, 3579900345, 1693124806, 2144725242, 254108863, 137874088, 4115601775, 675499770, 1390624396, 4056225863, 599157443, 2560218971, 2522511554, 109414074, 1201036300, 16259336, 5624898, 10011, 8788020
			},
			.prefetch0 = 54557,
			.prefetch1 = 44623,
			.ram = addb_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3695020421, 3579900345, 1693124806, 2144725242, 254108863, 137874088, 4115601775, 675499770, 1390624396, 4056225863, 599157443, 2560218971, 2522511554, 109414075, 1201036300, 16259336, 5624898, 10003, 8788022
			},
			.prefetch0 = 44623,
			.prefetch1 = 64856,
			.ram = addb_final_ram_8,
			.ram_len = 8,
		},
		.transactions = addb_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 ADD.b D3, (A5) d715",
		.initial = {
			.regs = {
				372063362, 4201819518, 1988978594, 1565210644, 322455940, 1595580438, 3290627049, 117382483, 3975690426, 1146620146, 3312110855, 1681566485, 3707275498, 3185928615, 3178595551, 6311876, 15502792, 16, 13740018
			},
			.prefetch0 = 55061,
			.prefetch1 = 45195,
			.ram = addb_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				372063362, 4201819518, 1988978594, 1565210644, 322455940, 1595580438, 3290627049, 117382483, 3975690426, 1146620146, 3312110855, 1681566485, 3707275498, 3185928615, 3178595551, 6311876, 15502792, 8, 13740020
			},
			.prefetch0 = 45195,
			.prefetch1 = 6910,
			.ram = addb_final_ram_9,
			.ram_len = 8,
		},
		.transactions = addb_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 ADD.b 8, -(A6) 5026",
		.initial = {
			.regs = {
				936520840, 602858899, 90002417, 2964479129, 1939734785, 2049727653, 263096718, 3041212783, 3460102722, 440536134, 1059802274, 3418416828, 3675481705, 1236335838, 4199542601, 14929866, 16269192, 8717, 9856440
			},
			.prefetch0 = 20518,
			.prefetch1 = 19208,
			.ram = addb_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				936520840, 602858899, 90002417, 2964479129, 1939734785, 2049727653, 263096718, 3041212783, 3460102722, 440536134, 1059802274, 3418416828, 3675481705, 1236335838, 4199542600, 14929866, 16269192, 8714, 9856442
			},
			.prefetch0 = 19208,
			.prefetch1 = 61176,
			.ram = addb_final_ram_10,
			.ram_len = 8,
		},
		.transactions = addb_transactions_10,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "011 ADD.b #, -(A3) 0623",
		.initial = {
			.regs = {
				843818782, 2353219349, 3851921271, 2236116883, 114517116, 938961168, 3825836492, 1183020109, 2774963889, 3827715477, 510134015, 3054132306, 3010040265, 1910503086, 3936145394, 2048110, 12983620, 0, 3224106
			},
			.prefetch0 = 1571,
			.prefetch1 = 17284,
			.ram = addb_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				843818782, 2353219349, 3851921271, 2236116883, 114517116, 938961168, 3825836492, 1183020109, 2774963889, 3827715477, 510134015, 3054132305, 3010040265, 1910503086, 3936145394, 2048110, 12983620, 19, 3224110
			},
			.prefetch0 = 38078,
			.prefetch1 = 35971,
			.ram = addb_final_ram_11,
			.ram_len = 10,
		},
		.transactions = addb_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 ADD.b -(A0), D1 d220",
		.initial = {
			.regs = {
				2075971115, 439419259, 2966945107, 3765585272, 4263995563, 3603565681, 3135447586, 26758485, 1398418777, 2829043630, 569986066, 3421203585, 571127220, 2356613867, 2432082922, 2834380, 12874086, 26, 14476376
			},
			.prefetch0 = 53792,
			.prefetch1 = 37489,
			.ram = addb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2075971115, 439419376, 2966945107, 3765585272, 4263995563, 3603565681, 3135447586, 26758485, 1398418776, 2829043630, 569986066, 3421203585, 571127220, 2356613867, 2432082922, 2834380, 12874086, 10, 14476378
			},
			.prefetch0 = 37489,
			.prefetch1 = 592,
			.ram = addb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = addb_transactions_12,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "013 ADD.b 3, -(A0) 5620",
		.initial = {
			.regs = {
				572118949, 1857459075, 86651923, 356754668, 2378353444, 2100379136, 2980136219, 2567511021, 888485243, 4153162886, 3818122508, 1781305173, 3894755368, 1607345942, 3397977417, 6092256, 2154388, 41986, 5531312
			},
			.prefetch0 = 22048,
			.prefetch1 = 32712,
			.ram = addb_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				572118949, 1857459075, 86651923, 356754668, 2378353444, 2100379136, 2980136219, 2567511021, 888485242, 4153162886, 3818122508, 1781305173, 3894755368, 1607345942, 3397977417, 6092256, 2154388, 41992, 5531314
			},
			.prefetch0 = 32712,
			.prefetch1 = 36311,
			.ram = addb_final_ram_13,
			.ram_len = 8,
		},
		.transactions = addb_transactions_13,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "014 ADD.b 3, (A2)+ 561a",
		.initial = {
			.regs = {
				2347571815, 1720912134, 2227565238, 1536964554, 1367702395, 661031305, 3308610910, 4233607041, 3087018299, 3883735688, 4121172111, 2250840403, 2253917503, 2483549519, 2052064870, 13502426, 2596460, 1818, 8676652
			},
			.prefetch0 = 22042,
			.prefetch1 = 42720,
			.ram = addb_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2347571815, 1720912134, 2227565238, 1536964554, 1367702395, 661031305, 3308610910, 4233607041, 3087018299, 3883735688, 4121172112, 2250840403, 2253917503, 2483549519, 2052064870, 13502426, 2596460, 1800, 8676654
			},
			.prefetch0 = 42720,
			.prefetch1 = 9030,
			.ram = addb_final_ram_14,
			.ram_len = 8,
		},
		.transactions = addb_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 ADD.b (A6)+, D7 de1e",
		.initial = {
			.regs = {
				1801764287, 2232623991, 812447806, 1858190249, 757209523, 597647390, 2322457391, 842152836, 221281910, 3129594133, 143482132, 724935911, 3866932401, 2322156404, 4169459098, 14708418, 9843618, 8468, 729130
			},
			.prefetch0 = 56862,
			.prefetch1 = 57066,
			.ram = addb_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1801764287, 2232623991, 812447806, 1858190249, 757209523, 597647390, 2322457391, 842152926, 221281910, 3129594133, 143482132, 724935911, 3866932401, 2322156404, 4169459099, 14708418, 9843618, 8456, 729132
			},
			.prefetch0 = 57066,
			.prefetch1 = 18239,
			.ram = addb_final_ram_15,
			.ram_len = 8,
		},
		.transactions = addb_transactions_15,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_ADDB_H */