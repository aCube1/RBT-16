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

static const SST_RamByte addb_initial_ram_16[] = {
		{ .addr = 0x0c2b2c, .byte = 0xd8 },
		{ .addr = 0x0c2b2d, .byte = 0x1c },
		{ .addr = 0x0c2b2e, .byte = 0xc2 },
		{ .addr = 0x0c2b2f, .byte = 0xc5 },
		{ .addr = 0x06356a, .byte = 0x87 },
		{ .addr = 0x06356b, .byte = 0xb2 },
		{ .addr = 0x0c2b30, .byte = 0x60 },
		{ .addr = 0x0c2b31, .byte = 0xf5 }
};

static const SST_RamByte addb_final_ram_16[] = {
		{ .addr = 0x0c2b2c, .byte = 0xd8 },
		{ .addr = 0x0c2b2d, .byte = 0x1c },
		{ .addr = 0x0c2b2e, .byte = 0xc2 },
		{ .addr = 0x0c2b2f, .byte = 0xc5 },
		{ .addr = 0x06356a, .byte = 0x87 },
		{ .addr = 0x06356b, .byte = 0xb2 },
		{ .addr = 0x0c2b30, .byte = 0x60 },
		{ .addr = 0x0c2b31, .byte = 0xf5 }
};

static const SST_Transaction addb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 406890, .data = 34560, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 797488, .data = 24821, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_17[] = {
		{ .addr = 0x08d656, .byte = 0xdd },
		{ .addr = 0x08d657, .byte = 0x1b },
		{ .addr = 0x08d658, .byte = 0xb8 },
		{ .addr = 0x08d659, .byte = 0x88 },
		{ .addr = 0x004418, .byte = 0x0b },
		{ .addr = 0x004419, .byte = 0x39 },
		{ .addr = 0x08d65a, .byte = 0x91 },
		{ .addr = 0x08d65b, .byte = 0x1d }
};

static const SST_RamByte addb_final_ram_17[] = {
		{ .addr = 0x08d656, .byte = 0xdd },
		{ .addr = 0x08d657, .byte = 0x1b },
		{ .addr = 0x08d658, .byte = 0xb8 },
		{ .addr = 0x08d659, .byte = 0x88 },
		{ .addr = 0x004418, .byte = 0x0b },
		{ .addr = 0x004419, .byte = 0xfb },
		{ .addr = 0x08d65a, .byte = 0x91 },
		{ .addr = 0x08d65b, .byte = 0x1d }
};

static const SST_Transaction addb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 17432, .data = 57, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 579162, .data = 37149, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 17432, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_18[] = {
		{ .addr = 0x181000, .byte = 0x56 },
		{ .addr = 0x181001, .byte = 0x07 },
		{ .addr = 0x181002, .byte = 0x3e },
		{ .addr = 0x181003, .byte = 0xe3 },
		{ .addr = 0x181004, .byte = 0xb7 },
		{ .addr = 0x181005, .byte = 0xf9 }
};

static const SST_RamByte addb_final_ram_18[] = {
		{ .addr = 0x181000, .byte = 0x56 },
		{ .addr = 0x181001, .byte = 0x07 },
		{ .addr = 0x181002, .byte = 0x3e },
		{ .addr = 0x181003, .byte = 0xe3 },
		{ .addr = 0x181004, .byte = 0xb7 },
		{ .addr = 0x181005, .byte = 0xf9 }
};

static const SST_Transaction addb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1576964, .data = 47097, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_19[] = {
		{ .addr = 0xfb1010, .byte = 0xdf },
		{ .addr = 0xfb1011, .byte = 0x25 },
		{ .addr = 0xfb1012, .byte = 0xcb },
		{ .addr = 0xfb1013, .byte = 0xb4 },
		{ .addr = 0x578dc2, .byte = 0x30 },
		{ .addr = 0x578dc3, .byte = 0x85 },
		{ .addr = 0xfb1014, .byte = 0xd3 },
		{ .addr = 0xfb1015, .byte = 0xe5 }
};

static const SST_RamByte addb_final_ram_19[] = {
		{ .addr = 0xfb1010, .byte = 0xdf },
		{ .addr = 0xfb1011, .byte = 0x25 },
		{ .addr = 0xfb1012, .byte = 0xcb },
		{ .addr = 0xfb1013, .byte = 0xb4 },
		{ .addr = 0x578dc2, .byte = 0x55 },
		{ .addr = 0x578dc3, .byte = 0x85 },
		{ .addr = 0xfb1014, .byte = 0xd3 },
		{ .addr = 0xfb1015, .byte = 0xe5 }
};

static const SST_Transaction addb_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5737922, .data = 12288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16453652, .data = 54245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5737922, .data = 21760, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_20[] = {
		{ .addr = 0x3ba6c8, .byte = 0x56 },
		{ .addr = 0x3ba6c9, .byte = 0x11 },
		{ .addr = 0x3ba6ca, .byte = 0xb6 },
		{ .addr = 0x3ba6cb, .byte = 0x12 },
		{ .addr = 0x19c4ee, .byte = 0xcf },
		{ .addr = 0x19c4ef, .byte = 0xc1 },
		{ .addr = 0x3ba6cc, .byte = 0xf5 },
		{ .addr = 0x3ba6cd, .byte = 0x06 }
};

static const SST_RamByte addb_final_ram_20[] = {
		{ .addr = 0x3ba6c8, .byte = 0x56 },
		{ .addr = 0x3ba6c9, .byte = 0x11 },
		{ .addr = 0x3ba6ca, .byte = 0xb6 },
		{ .addr = 0x3ba6cb, .byte = 0x12 },
		{ .addr = 0x19c4ee, .byte = 0xd2 },
		{ .addr = 0x19c4ef, .byte = 0xc1 },
		{ .addr = 0x3ba6cc, .byte = 0xf5 },
		{ .addr = 0x3ba6cd, .byte = 0x06 }
};

static const SST_Transaction addb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1688814, .data = 52992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3909324, .data = 62726, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1688814, .data = 53760, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_21[] = {
		{ .addr = 0x62c16a, .byte = 0x50 },
		{ .addr = 0x62c16b, .byte = 0x1f },
		{ .addr = 0x62c16c, .byte = 0xf5 },
		{ .addr = 0x62c16d, .byte = 0xc0 },
		{ .addr = 0x65c310, .byte = 0xe5 },
		{ .addr = 0x65c311, .byte = 0x13 },
		{ .addr = 0x62c16e, .byte = 0xdf },
		{ .addr = 0x62c16f, .byte = 0x8d }
};

static const SST_RamByte addb_final_ram_21[] = {
		{ .addr = 0x62c16a, .byte = 0x50 },
		{ .addr = 0x62c16b, .byte = 0x1f },
		{ .addr = 0x62c16c, .byte = 0xf5 },
		{ .addr = 0x62c16d, .byte = 0xc0 },
		{ .addr = 0x65c310, .byte = 0xed },
		{ .addr = 0x65c311, .byte = 0x13 },
		{ .addr = 0x62c16e, .byte = 0xdf },
		{ .addr = 0x62c16f, .byte = 0x8d }
};

static const SST_Transaction addb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6669072, .data = 58624, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6472046, .data = 57229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6669072, .data = 60672, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_22[] = {
		{ .addr = 0xe92f54, .byte = 0x54 },
		{ .addr = 0xe92f55, .byte = 0x33 },
		{ .addr = 0xe92f56, .byte = 0xc2 },
		{ .addr = 0xe92f57, .byte = 0x56 },
		{ .addr = 0xe92f58, .byte = 0x31 },
		{ .addr = 0xe92f59, .byte = 0x70 },
		{ .addr = 0xc25080, .byte = 0x0c },
		{ .addr = 0xc25081, .byte = 0xad },
		{ .addr = 0xe92f5a, .byte = 0x69 },
		{ .addr = 0xe92f5b, .byte = 0xad }
};

static const SST_RamByte addb_final_ram_22[] = {
		{ .addr = 0xe92f54, .byte = 0x54 },
		{ .addr = 0xe92f55, .byte = 0x33 },
		{ .addr = 0xe92f56, .byte = 0xc2 },
		{ .addr = 0xe92f57, .byte = 0x56 },
		{ .addr = 0xe92f58, .byte = 0x31 },
		{ .addr = 0xe92f59, .byte = 0x70 },
		{ .addr = 0xc25080, .byte = 0x0c },
		{ .addr = 0xc25081, .byte = 0xaf },
		{ .addr = 0xe92f5a, .byte = 0x69 },
		{ .addr = 0xe92f5b, .byte = 0xad }
};

static const SST_Transaction addb_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15282008, .data = 12656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12734592, .data = 173, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15282010, .data = 27053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12734592, .data = 175, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_23[] = {
		{ .addr = 0x824890, .byte = 0x5a },
		{ .addr = 0x824891, .byte = 0x05 },
		{ .addr = 0x824892, .byte = 0xbe },
		{ .addr = 0x824893, .byte = 0x7b },
		{ .addr = 0x824894, .byte = 0xc7 },
		{ .addr = 0x824895, .byte = 0xac }
};

static const SST_RamByte addb_final_ram_23[] = {
		{ .addr = 0x824890, .byte = 0x5a },
		{ .addr = 0x824891, .byte = 0x05 },
		{ .addr = 0x824892, .byte = 0xbe },
		{ .addr = 0x824893, .byte = 0x7b },
		{ .addr = 0x824894, .byte = 0xc7 },
		{ .addr = 0x824895, .byte = 0xac }
};

static const SST_Transaction addb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8538260, .data = 51116, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_24[] = {
		{ .addr = 0x62b4aa, .byte = 0xdf },
		{ .addr = 0x62b4ab, .byte = 0x31 },
		{ .addr = 0x62b4ac, .byte = 0xa0 },
		{ .addr = 0x62b4ad, .byte = 0x31 },
		{ .addr = 0x62b4ae, .byte = 0x53 },
		{ .addr = 0x62b4af, .byte = 0x56 },
		{ .addr = 0xd48b96, .byte = 0xc1 },
		{ .addr = 0xd48b97, .byte = 0x64 },
		{ .addr = 0x62b4b0, .byte = 0xef },
		{ .addr = 0x62b4b1, .byte = 0x0a }
};

static const SST_RamByte addb_final_ram_24[] = {
		{ .addr = 0x62b4aa, .byte = 0xdf },
		{ .addr = 0x62b4ab, .byte = 0x31 },
		{ .addr = 0x62b4ac, .byte = 0xa0 },
		{ .addr = 0x62b4ad, .byte = 0x31 },
		{ .addr = 0x62b4ae, .byte = 0x53 },
		{ .addr = 0x62b4af, .byte = 0x56 },
		{ .addr = 0xd48b96, .byte = 0xc1 },
		{ .addr = 0xd48b97, .byte = 0x04 },
		{ .addr = 0x62b4b0, .byte = 0xef },
		{ .addr = 0x62b4b1, .byte = 0x0a }
};

static const SST_Transaction addb_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6468782, .data = 21334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13929366, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6468784, .data = 61194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13929366, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_25[] = {
		{ .addr = 0xc43172, .byte = 0xd5 },
		{ .addr = 0xc43173, .byte = 0x32 },
		{ .addr = 0xc43174, .byte = 0x7e },
		{ .addr = 0xc43175, .byte = 0xb6 },
		{ .addr = 0xc43176, .byte = 0xd2 },
		{ .addr = 0xc43177, .byte = 0xac },
		{ .addr = 0xe3c498, .byte = 0x09 },
		{ .addr = 0xe3c499, .byte = 0x67 },
		{ .addr = 0xc43178, .byte = 0xd6 },
		{ .addr = 0xc43179, .byte = 0x31 }
};

static const SST_RamByte addb_final_ram_25[] = {
		{ .addr = 0xc43172, .byte = 0xd5 },
		{ .addr = 0xc43173, .byte = 0x32 },
		{ .addr = 0xc43174, .byte = 0x7e },
		{ .addr = 0xc43175, .byte = 0xb6 },
		{ .addr = 0xc43176, .byte = 0xd2 },
		{ .addr = 0xc43177, .byte = 0xac },
		{ .addr = 0xe3c498, .byte = 0x09 },
		{ .addr = 0xe3c499, .byte = 0x4f },
		{ .addr = 0xc43178, .byte = 0xd6 },
		{ .addr = 0xc43179, .byte = 0x31 }
};

static const SST_Transaction addb_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12857718, .data = 53932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14927000, .data = 103, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12857720, .data = 54833, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14927000, .data = 79, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_26[] = {
		{ .addr = 0x22a270, .byte = 0xdd },
		{ .addr = 0x22a271, .byte = 0x2a },
		{ .addr = 0x22a272, .byte = 0x52 },
		{ .addr = 0x22a273, .byte = 0x62 },
		{ .addr = 0x22a274, .byte = 0x65 },
		{ .addr = 0x22a275, .byte = 0xda },
		{ .addr = 0x8b5b06, .byte = 0xdf },
		{ .addr = 0x8b5b07, .byte = 0xf3 },
		{ .addr = 0x22a276, .byte = 0xcb },
		{ .addr = 0x22a277, .byte = 0x0a }
};

static const SST_RamByte addb_final_ram_26[] = {
		{ .addr = 0x22a270, .byte = 0xdd },
		{ .addr = 0x22a271, .byte = 0x2a },
		{ .addr = 0x22a272, .byte = 0x52 },
		{ .addr = 0x22a273, .byte = 0x62 },
		{ .addr = 0x22a274, .byte = 0x65 },
		{ .addr = 0x22a275, .byte = 0xda },
		{ .addr = 0x8b5b06, .byte = 0xdf },
		{ .addr = 0x8b5b07, .byte = 0x2d },
		{ .addr = 0x22a276, .byte = 0xcb },
		{ .addr = 0x22a277, .byte = 0x0a }
};

static const SST_Transaction addb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2269812, .data = 26074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9132806, .data = 243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2269814, .data = 51978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9132806, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_27[] = {
		{ .addr = 0x7ad282, .byte = 0x52 },
		{ .addr = 0x7ad283, .byte = 0x2f },
		{ .addr = 0x7ad284, .byte = 0x3e },
		{ .addr = 0x7ad285, .byte = 0xd6 },
		{ .addr = 0x7ad286, .byte = 0xfb },
		{ .addr = 0x7ad287, .byte = 0xad },
		{ .addr = 0xb3c084, .byte = 0x7d },
		{ .addr = 0xb3c085, .byte = 0x9e },
		{ .addr = 0x7ad288, .byte = 0x03 },
		{ .addr = 0x7ad289, .byte = 0x81 }
};

static const SST_RamByte addb_final_ram_27[] = {
		{ .addr = 0x7ad282, .byte = 0x52 },
		{ .addr = 0x7ad283, .byte = 0x2f },
		{ .addr = 0x7ad284, .byte = 0x3e },
		{ .addr = 0x7ad285, .byte = 0xd6 },
		{ .addr = 0x7ad286, .byte = 0xfb },
		{ .addr = 0x7ad287, .byte = 0xad },
		{ .addr = 0xb3c084, .byte = 0x7e },
		{ .addr = 0xb3c085, .byte = 0x9e },
		{ .addr = 0x7ad288, .byte = 0x03 },
		{ .addr = 0x7ad289, .byte = 0x81 }
};

static const SST_Transaction addb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8049286, .data = 64429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11780228, .data = 32000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8049288, .data = 897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11780228, .data = 32256, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_28[] = {
		{ .addr = 0x956864, .byte = 0xda },
		{ .addr = 0x956865, .byte = 0x14 },
		{ .addr = 0x956866, .byte = 0xb9 },
		{ .addr = 0x956867, .byte = 0x4c },
		{ .addr = 0x6313ec, .byte = 0x1a },
		{ .addr = 0x6313ed, .byte = 0x2b },
		{ .addr = 0x956868, .byte = 0xf4 },
		{ .addr = 0x956869, .byte = 0x4c }
};

static const SST_RamByte addb_final_ram_28[] = {
		{ .addr = 0x956864, .byte = 0xda },
		{ .addr = 0x956865, .byte = 0x14 },
		{ .addr = 0x956866, .byte = 0xb9 },
		{ .addr = 0x956867, .byte = 0x4c },
		{ .addr = 0x6313ec, .byte = 0x1a },
		{ .addr = 0x6313ed, .byte = 0x2b },
		{ .addr = 0x956868, .byte = 0xf4 },
		{ .addr = 0x956869, .byte = 0x4c }
};

static const SST_Transaction addb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6493164, .data = 43, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9791592, .data = 62540, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_29[] = {
		{ .addr = 0xabab72, .byte = 0xd7 },
		{ .addr = 0xabab73, .byte = 0x34 },
		{ .addr = 0xabab74, .byte = 0x1f },
		{ .addr = 0xabab75, .byte = 0xa7 },
		{ .addr = 0xabab76, .byte = 0x1a },
		{ .addr = 0xabab77, .byte = 0xe3 },
		{ .addr = 0x5a14f4, .byte = 0xe4 },
		{ .addr = 0x5a14f5, .byte = 0xb8 },
		{ .addr = 0xabab78, .byte = 0x70 },
		{ .addr = 0xabab79, .byte = 0x44 }
};

static const SST_RamByte addb_final_ram_29[] = {
		{ .addr = 0xabab72, .byte = 0xd7 },
		{ .addr = 0xabab73, .byte = 0x34 },
		{ .addr = 0xabab74, .byte = 0x1f },
		{ .addr = 0xabab75, .byte = 0xa7 },
		{ .addr = 0xabab76, .byte = 0x1a },
		{ .addr = 0xabab77, .byte = 0xe3 },
		{ .addr = 0x5a14f4, .byte = 0xe4 },
		{ .addr = 0x5a14f5, .byte = 0x9a },
		{ .addr = 0xabab78, .byte = 0x70 },
		{ .addr = 0xabab79, .byte = 0x44 }
};

static const SST_Transaction addb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11250550, .data = 6883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5903604, .data = 184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11250552, .data = 28740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5903604, .data = 154, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_30[] = {
		{ .addr = 0xe24408, .byte = 0xd6 },
		{ .addr = 0xe24409, .byte = 0x12 },
		{ .addr = 0xe2440a, .byte = 0x64 },
		{ .addr = 0xe2440b, .byte = 0x85 },
		{ .addr = 0x908b7e, .byte = 0x8c },
		{ .addr = 0x908b7f, .byte = 0x28 },
		{ .addr = 0xe2440c, .byte = 0x25 },
		{ .addr = 0xe2440d, .byte = 0x85 }
};

static const SST_RamByte addb_final_ram_30[] = {
		{ .addr = 0xe24408, .byte = 0xd6 },
		{ .addr = 0xe24409, .byte = 0x12 },
		{ .addr = 0xe2440a, .byte = 0x64 },
		{ .addr = 0xe2440b, .byte = 0x85 },
		{ .addr = 0x908b7e, .byte = 0x8c },
		{ .addr = 0x908b7f, .byte = 0x28 },
		{ .addr = 0xe2440c, .byte = 0x25 },
		{ .addr = 0xe2440d, .byte = 0x85 }
};

static const SST_Transaction addb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9472894, .data = 35840, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14828556, .data = 9605, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addb_initial_ram_31[] = {
		{ .addr = 0x0f046a, .byte = 0xd3 },
		{ .addr = 0x0f046b, .byte = 0x26 },
		{ .addr = 0x0f046c, .byte = 0x84 },
		{ .addr = 0x0f046d, .byte = 0x5c },
		{ .addr = 0x6d6f42, .byte = 0xc9 },
		{ .addr = 0x6d6f43, .byte = 0xd4 },
		{ .addr = 0x0f046e, .byte = 0x1b },
		{ .addr = 0x0f046f, .byte = 0xd4 }
};

static const SST_RamByte addb_final_ram_31[] = {
		{ .addr = 0x0f046a, .byte = 0xd3 },
		{ .addr = 0x0f046b, .byte = 0x26 },
		{ .addr = 0x0f046c, .byte = 0x84 },
		{ .addr = 0x0f046d, .byte = 0x5c },
		{ .addr = 0x6d6f42, .byte = 0x86 },
		{ .addr = 0x6d6f43, .byte = 0xd4 },
		{ .addr = 0x0f046e, .byte = 0x1b },
		{ .addr = 0x0f046f, .byte = 0xd4 }
};

static const SST_Transaction addb_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7171906, .data = 51456, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 984174, .data = 7124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7171906, .data = 34304, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 ADD.b (A4)+, D4 d81c",
		.initial = {
			.regs = {
				2722328003, 3534227818, 525449167, 1673011403, 2486139939, 2001951674, 3525077173, 2076616593, 679605955, 1555021419, 1490121761, 178777222, 671495530, 3932221523, 31358232, 1360390, 6184762, 777, 797488
			},
			.prefetch0 = 55324,
			.prefetch1 = 49861,
			.ram = addb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2722328003, 3534227818, 525449167, 1673011403, 2486140074, 2001951674, 3525077173, 2076616593, 679605955, 1555021419, 1490121761, 178777222, 671495531, 3932221523, 31358232, 1360390, 6184762, 776, 797490
			},
			.prefetch0 = 49861,
			.prefetch1 = 24821,
			.ram = addb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = addb_transactions_16,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "017 ADD.b D6, (A3)+ dd1b",
		.initial = {
			.regs = {
				3095445707, 3713867396, 640984862, 1134210704, 1920405230, 2588172521, 3319149250, 1166589815, 879446135, 3310292313, 2764619420, 3137356825, 698840836, 4154232440, 2594097610, 11062468, 5737022, 41997, 579162
			},
			.prefetch0 = 56603,
			.prefetch1 = 47240,
			.ram = addb_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3095445707, 3713867396, 640984862, 1134210704, 1920405230, 2588172521, 3319149250, 1166589815, 879446135, 3310292313, 2764619420, 3137356826, 698840836, 4154232440, 2594097610, 11062468, 5737022, 41992, 579164
			},
			.prefetch0 = 47240,
			.prefetch1 = 37149,
			.ram = addb_final_ram_17,
			.ram_len = 8,
		},
		.transactions = addb_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 ADD.b 3, D7 5607",
		.initial = {
			.regs = {
				576927032, 3885587500, 1516802358, 3366297293, 2031576435, 3731203873, 3883842027, 3835137559, 2697914266, 406648363, 1440417113, 3586282572, 789034283, 3620589768, 3848636019, 3478128, 11992704, 34076, 1576964
			},
			.prefetch0 = 22023,
			.prefetch1 = 16099,
			.ram = addb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				576927032, 3885587500, 1516802358, 3366297293, 2031576435, 3731203873, 3883842027, 3835137562, 2697914266, 406648363, 1440417113, 3586282572, 789034283, 3620589768, 3848636019, 3478128, 11992704, 34048, 1576966
			},
			.prefetch0 = 16099,
			.prefetch1 = 47097,
			.ram = addb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = addb_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 ADD.b D7, -(A5) df25",
		.initial = {
			.regs = {
				2173005679, 1879443320, 1228294453, 1969280263, 2924231080, 2621163895, 1923060929, 3003086117, 2231145578, 1515429023, 2032151677, 1648420400, 2150952749, 1196920259, 3681936824, 15792580, 3738466, 8963, 16453652
			},
			.prefetch0 = 57125,
			.prefetch1 = 52148,
			.ram = addb_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2173005679, 1879443320, 1228294453, 1969280263, 2924231080, 2621163895, 1923060929, 3003086117, 2231145578, 1515429023, 2032151677, 1648420400, 2150952749, 1196920258, 3681936824, 15792580, 3738466, 8960, 16453654
			},
			.prefetch0 = 52148,
			.prefetch1 = 54245,
			.ram = addb_final_ram_19,
			.ram_len = 8,
		},
		.transactions = addb_transactions_19,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "020 ADD.b 3, (A1) 5611",
		.initial = {
			.regs = {
				1258543765, 4292801607, 723194032, 1817680507, 808002198, 3728434029, 1465035306, 141695125, 3698016470, 1998177518, 1349292077, 977969472, 4050864867, 295490113, 3239932391, 15670788, 1000342, 8472, 3909324
			},
			.prefetch0 = 22033,
			.prefetch1 = 46610,
			.ram = addb_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1258543765, 4292801607, 723194032, 1817680507, 808002198, 3728434029, 1465035306, 141695125, 3698016470, 1998177518, 1349292077, 977969472, 4050864867, 295490113, 3239932391, 15670788, 1000342, 8456, 3909326
			},
			.prefetch0 = 46610,
			.prefetch1 = 62726,
			.ram = addb_final_ram_20,
			.ram_len = 8,
		},
		.transactions = addb_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 ADD.b 8, (A7)+ 501f",
		.initial = {
			.regs = {
				70706335, 241745600, 1779950420, 2614398147, 1581133386, 3305847232, 281053089, 3195475285, 3370316254, 702919680, 677639539, 344530862, 2486210346, 3541339619, 3735544961, 6669072, 11137448, 34581, 6472046
			},
			.prefetch0 = 20511,
			.prefetch1 = 62912,
			.ram = addb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				70706335, 241745600, 1779950420, 2614398147, 1581133386, 3305847232, 281053089, 3195475285, 3370316254, 702919680, 677639539, 344530862, 2486210346, 3541339619, 3735544961, 6669074, 11137448, 34568, 6472048
			},
			.prefetch0 = 62912,
			.prefetch1 = 57229,
			.ram = addb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = addb_transactions_21,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "022 ADD.b 2, (d8, A3, Xn) 5433",
		.initial = {
			.regs = {
				3393494167, 1109979272, 2965251068, 2866126441, 3798636540, 3338460862, 3518755698, 169200792, 1131596136, 1666826582, 3989023902, 3653376174, 2177120125, 3707182862, 1992291360, 12533046, 4001916, 1817, 15282008
			},
			.prefetch0 = 21555,
			.prefetch1 = 49750,
			.ram = addb_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3393494167, 1109979272, 2965251068, 2866126441, 3798636540, 3338460862, 3518755698, 169200792, 1131596136, 1666826582, 3989023902, 3653376174, 2177120125, 3707182862, 1992291360, 12533046, 4001916, 1800, 15282012
			},
			.prefetch0 = 12656,
			.prefetch1 = 27053,
			.ram = addb_final_ram_22,
			.ram_len = 10,
		},
		.transactions = addb_transactions_22,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "023 ADD.b 5, D5 5a05",
		.initial = {
			.regs = {
				530202017, 794605473, 2992431450, 882135480, 3508024834, 4006617101, 2094137741, 2840931986, 3112978218, 1213629326, 3308299328, 3281662079, 787076051, 3684529974, 1773926495, 8967578, 13469254, 33050, 8538260
			},
			.prefetch0 = 23045,
			.prefetch1 = 48763,
			.ram = addb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				530202017, 794605473, 2992431450, 882135480, 3508024834, 4006617106, 2094137741, 2840931986, 3112978218, 1213629326, 3308299328, 3281662079, 787076051, 3684529974, 1773926495, 8967578, 13469254, 33024, 8538262
			},
			.prefetch0 = 48763,
			.prefetch1 = 51116,
			.ram = addb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = addb_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 ADD.b D7, (d8, A1, Xn) df31",
		.initial = {
			.regs = {
				2440032131, 4133764709, 2309916760, 1795305090, 3647330125, 3828076577, 2975655133, 1291606688, 1921209893, 47457315, 1011181379, 2291754926, 4015499258, 2591766531, 1302395783, 10921976, 11784896, 8987, 6468782
			},
			.prefetch0 = 57137,
			.prefetch1 = 41009,
			.ram = addb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2440032131, 4133764709, 2309916760, 1795305090, 3647330125, 3828076577, 2975655133, 1291606688, 1921209893, 47457315, 1011181379, 2291754926, 4015499258, 2591766531, 1302395783, 10921976, 11784896, 8977, 6468786
			},
			.prefetch0 = 21334,
			.prefetch1 = 61194,
			.ram = addb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = addb_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 ADD.b D2, (d8, A2, Xn) d532",
		.initial = {
			.regs = {
				433303126, 3300558511, 3881674472, 650642747, 3836562185, 4154898161, 1373494386, 3710821034, 3993463787, 1688290175, 3283427897, 2203475956, 2289364834, 89391682, 2419384342, 15370226, 785266, 33557, 12857718
			},
			.prefetch0 = 54578,
			.prefetch1 = 32438,
			.ram = addb_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				433303126, 3300558511, 3881674472, 650642747, 3836562185, 4154898161, 1373494386, 3710821034, 3993463787, 1688290175, 3283427897, 2203475956, 2289364834, 89391682, 2419384342, 15370226, 785266, 33553, 12857722
			},
			.prefetch0 = 53932,
			.prefetch1 = 54833,
			.ram = addb_final_ram_25,
			.ram_len = 10,
		},
		.transactions = addb_transactions_25,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "026 ADD.b D6, (d16, A2) dd2a",
		.initial = {
			.regs = {
				1669142301, 2535590787, 1750211990, 1770894928, 790781217, 1137871126, 2106261818, 2350896186, 2489457211, 726112481, 2240481445, 471659264, 2008702474, 902618566, 2473988746, 11431370, 16750582, 9477, 2269812
			},
			.prefetch0 = 56618,
			.prefetch1 = 21090,
			.ram = addb_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1669142301, 2535590787, 1750211990, 1770894928, 790781217, 1137871126, 2106261818, 2350896186, 2489457211, 726112481, 2240481445, 471659264, 2008702474, 902618566, 2473988746, 11431370, 16750582, 9489, 2269816
			},
			.prefetch0 = 26074,
			.prefetch1 = 51978,
			.ram = addb_final_ram_26,
			.ram_len = 10,
		},
		.transactions = addb_transactions_26,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "027 ADD.b 1, (d16, A7) 522f",
		.initial = {
			.regs = {
				508840693, 1528588512, 2266090095, 510702583, 2964414669, 4270107541, 4141406347, 3952867864, 1283664774, 1728138085, 1002699911, 2351416824, 3569693101, 3999024613, 35054026, 3650638, 11764142, 9239, 8049286
			},
			.prefetch0 = 21039,
			.prefetch1 = 16086,
			.ram = addb_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				508840693, 1528588512, 2266090095, 510702583, 2964414669, 4270107541, 4141406347, 3952867864, 1283664774, 1728138085, 1002699911, 2351416824, 3569693101, 3999024613, 35054026, 3650638, 11764142, 9216, 8049290
			},
			.prefetch0 = 64429,
			.prefetch1 = 897,
			.ram = addb_final_ram_27,
			.ram_len = 10,
		},
		.transactions = addb_transactions_27,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "028 ADD.b (A4), D5 da14",
		.initial = {
			.regs = {
				1719453652, 3814057340, 2234692509, 3387178999, 673628182, 4066620614, 569863340, 4175392036, 2536736697, 2400109907, 1328363816, 3526360515, 1667437549, 1982551424, 1137920893, 2085918, 11694542, 42248, 9791592
			},
			.prefetch0 = 55828,
			.prefetch1 = 47436,
			.ram = addb_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1719453652, 3814057340, 2234692509, 3387178999, 673628182, 4066620657, 569863340, 4175392036, 2536736697, 2400109907, 1328363816, 3526360515, 1667437549, 1982551424, 1137920893, 2085918, 11694542, 42248, 9791594
			},
			.prefetch0 = 47436,
			.prefetch1 = 62540,
			.ram = addb_final_ram_28,
			.ram_len = 8,
		},
		.transactions = addb_transactions_28,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "029 ADD.b D3, (d8, A4, Xn) d734",
		.initial = {
			.regs = {
				2452459698, 2979154204, 3804317516, 284316386, 611879186, 642689336, 3765765550, 1751447599, 1553599258, 441743771, 992640908, 689680527, 3385314354, 798967412, 2065118584, 8416802, 13884280, 9743, 11250550
			},
			.prefetch0 = 55092,
			.prefetch1 = 8103,
			.ram = addb_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2452459698, 2979154204, 3804317516, 284316386, 611879186, 642689336, 3765765550, 1751447599, 1553599258, 441743771, 992640908, 689680527, 3385314354, 798967412, 2065118584, 8416802, 13884280, 9753, 11250554
			},
			.prefetch0 = 6883,
			.prefetch1 = 28740,
			.ram = addb_final_ram_29,
			.ram_len = 10,
		},
		.transactions = addb_transactions_29,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "030 ADD.b (A2), D3 d612",
		.initial = {
			.regs = {
				1782754959, 1756688130, 2946643089, 2865854381, 462455877, 3950382798, 3772425931, 2585307628, 3553437726, 2113869942, 428903294, 246866, 3440926865, 2915316521, 2824185728, 22656, 16632500, 1539, 14828556
			},
			.prefetch0 = 54802,
			.prefetch1 = 25733,
			.ram = addb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1782754959, 1756688130, 2946643089, 2865854265, 462455877, 3950382798, 3772425931, 2585307628, 3553437726, 2113869942, 428903294, 246866, 3440926865, 2915316521, 2824185728, 22656, 16632500, 1555, 14828558
			},
			.prefetch0 = 25733,
			.prefetch1 = 9605,
			.ram = addb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = addb_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 ADD.b D1, -(A6) d326",
		.initial = {
			.regs = {
				3277583570, 3620249277, 4136935460, 2895765487, 7117552, 2460296499, 4162490882, 2410596171, 3425067046, 1951101403, 2740851260, 1354568271, 2789696607, 2268560460, 393047875, 6197182, 2015346, 787, 984174
			},
			.prefetch0 = 54054,
			.prefetch1 = 33884,
			.ram = addb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3277583570, 3620249277, 4136935460, 2895765487, 7117552, 2460296499, 4162490882, 2410596171, 3425067046, 1951101403, 2740851260, 1354568271, 2789696607, 2268560460, 393047874, 6197182, 2015346, 793, 984176
			},
			.prefetch0 = 33884,
			.prefetch1 = 7124,
			.ram = addb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = addb_transactions_31,
		.transactions_len = 4,
		.lenght = 14,
	},
};

#endif /* RBT_ADDB_H */