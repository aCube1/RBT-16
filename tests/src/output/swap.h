#ifndef RBT_SWAP_H
#define RBT_SWAP_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte swap_initial_ram_0[] = {
		{ .addr = 0x1a5a32, .byte = 0x48 },
		{ .addr = 0x1a5a33, .byte = 0x43 },
		{ .addr = 0x1a5a34, .byte = 0x41 },
		{ .addr = 0x1a5a35, .byte = 0xad },
		{ .addr = 0x1a5a36, .byte = 0x41 },
		{ .addr = 0x1a5a37, .byte = 0x6d }
};

static const SST_RamByte swap_final_ram_0[] = {
		{ .addr = 0x1a5a32, .byte = 0x48 },
		{ .addr = 0x1a5a33, .byte = 0x43 },
		{ .addr = 0x1a5a34, .byte = 0x41 },
		{ .addr = 0x1a5a35, .byte = 0xad },
		{ .addr = 0x1a5a36, .byte = 0x41 },
		{ .addr = 0x1a5a37, .byte = 0x6d }
};

static const SST_Transaction swap_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1727030, .data = 16749, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_1[] = {
		{ .addr = 0xd1934c, .byte = 0x48 },
		{ .addr = 0xd1934d, .byte = 0x47 },
		{ .addr = 0xd1934e, .byte = 0x71 },
		{ .addr = 0xd1934f, .byte = 0x9e },
		{ .addr = 0xd19350, .byte = 0x5d },
		{ .addr = 0xd19351, .byte = 0x28 }
};

static const SST_RamByte swap_final_ram_1[] = {
		{ .addr = 0xd1934c, .byte = 0x48 },
		{ .addr = 0xd1934d, .byte = 0x47 },
		{ .addr = 0xd1934e, .byte = 0x71 },
		{ .addr = 0xd1934f, .byte = 0x9e },
		{ .addr = 0xd19350, .byte = 0x5d },
		{ .addr = 0xd19351, .byte = 0x28 }
};

static const SST_Transaction swap_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13734736, .data = 23848, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_2[] = {
		{ .addr = 0xbd2cc4, .byte = 0x48 },
		{ .addr = 0xbd2cc5, .byte = 0x41 },
		{ .addr = 0xbd2cc6, .byte = 0x6b },
		{ .addr = 0xbd2cc7, .byte = 0x52 },
		{ .addr = 0xbd2cc8, .byte = 0x29 },
		{ .addr = 0xbd2cc9, .byte = 0xa6 }
};

static const SST_RamByte swap_final_ram_2[] = {
		{ .addr = 0xbd2cc4, .byte = 0x48 },
		{ .addr = 0xbd2cc5, .byte = 0x41 },
		{ .addr = 0xbd2cc6, .byte = 0x6b },
		{ .addr = 0xbd2cc7, .byte = 0x52 },
		{ .addr = 0xbd2cc8, .byte = 0x29 },
		{ .addr = 0xbd2cc9, .byte = 0xa6 }
};

static const SST_Transaction swap_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12397768, .data = 10662, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_3[] = {
		{ .addr = 0xc1733c, .byte = 0x48 },
		{ .addr = 0xc1733d, .byte = 0x44 },
		{ .addr = 0xc1733e, .byte = 0xf2 },
		{ .addr = 0xc1733f, .byte = 0x8d },
		{ .addr = 0xc17340, .byte = 0x5c },
		{ .addr = 0xc17341, .byte = 0x6f }
};

static const SST_RamByte swap_final_ram_3[] = {
		{ .addr = 0xc1733c, .byte = 0x48 },
		{ .addr = 0xc1733d, .byte = 0x44 },
		{ .addr = 0xc1733e, .byte = 0xf2 },
		{ .addr = 0xc1733f, .byte = 0x8d },
		{ .addr = 0xc17340, .byte = 0x5c },
		{ .addr = 0xc17341, .byte = 0x6f }
};

static const SST_Transaction swap_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12677952, .data = 23663, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_4[] = {
		{ .addr = 0x97ca04, .byte = 0x48 },
		{ .addr = 0x97ca05, .byte = 0x43 },
		{ .addr = 0x97ca06, .byte = 0xc4 },
		{ .addr = 0x97ca07, .byte = 0xc9 },
		{ .addr = 0x97ca08, .byte = 0xec },
		{ .addr = 0x97ca09, .byte = 0x9c }
};

static const SST_RamByte swap_final_ram_4[] = {
		{ .addr = 0x97ca04, .byte = 0x48 },
		{ .addr = 0x97ca05, .byte = 0x43 },
		{ .addr = 0x97ca06, .byte = 0xc4 },
		{ .addr = 0x97ca07, .byte = 0xc9 },
		{ .addr = 0x97ca08, .byte = 0xec },
		{ .addr = 0x97ca09, .byte = 0x9c }
};

static const SST_Transaction swap_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9947656, .data = 60572, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_5[] = {
		{ .addr = 0xd5616c, .byte = 0x48 },
		{ .addr = 0xd5616d, .byte = 0x41 },
		{ .addr = 0xd5616e, .byte = 0x39 },
		{ .addr = 0xd5616f, .byte = 0xac },
		{ .addr = 0xd56170, .byte = 0xd3 },
		{ .addr = 0xd56171, .byte = 0xbb }
};

static const SST_RamByte swap_final_ram_5[] = {
		{ .addr = 0xd5616c, .byte = 0x48 },
		{ .addr = 0xd5616d, .byte = 0x41 },
		{ .addr = 0xd5616e, .byte = 0x39 },
		{ .addr = 0xd5616f, .byte = 0xac },
		{ .addr = 0xd56170, .byte = 0xd3 },
		{ .addr = 0xd56171, .byte = 0xbb }
};

static const SST_Transaction swap_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13984112, .data = 54203, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_6[] = {
		{ .addr = 0x390490, .byte = 0x48 },
		{ .addr = 0x390491, .byte = 0x45 },
		{ .addr = 0x390492, .byte = 0x4f },
		{ .addr = 0x390493, .byte = 0xc1 },
		{ .addr = 0x390494, .byte = 0x66 },
		{ .addr = 0x390495, .byte = 0x21 }
};

static const SST_RamByte swap_final_ram_6[] = {
		{ .addr = 0x390490, .byte = 0x48 },
		{ .addr = 0x390491, .byte = 0x45 },
		{ .addr = 0x390492, .byte = 0x4f },
		{ .addr = 0x390493, .byte = 0xc1 },
		{ .addr = 0x390494, .byte = 0x66 },
		{ .addr = 0x390495, .byte = 0x21 }
};

static const SST_Transaction swap_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3736724, .data = 26145, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_7[] = {
		{ .addr = 0xa3bf70, .byte = 0x48 },
		{ .addr = 0xa3bf71, .byte = 0x40 },
		{ .addr = 0xa3bf72, .byte = 0x39 },
		{ .addr = 0xa3bf73, .byte = 0x4a },
		{ .addr = 0xa3bf74, .byte = 0xa8 },
		{ .addr = 0xa3bf75, .byte = 0xe7 }
};

static const SST_RamByte swap_final_ram_7[] = {
		{ .addr = 0xa3bf70, .byte = 0x48 },
		{ .addr = 0xa3bf71, .byte = 0x40 },
		{ .addr = 0xa3bf72, .byte = 0x39 },
		{ .addr = 0xa3bf73, .byte = 0x4a },
		{ .addr = 0xa3bf74, .byte = 0xa8 },
		{ .addr = 0xa3bf75, .byte = 0xe7 }
};

static const SST_Transaction swap_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10731380, .data = 43239, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_8[] = {
		{ .addr = 0x170c1c, .byte = 0x48 },
		{ .addr = 0x170c1d, .byte = 0x43 },
		{ .addr = 0x170c1e, .byte = 0x26 },
		{ .addr = 0x170c1f, .byte = 0x45 },
		{ .addr = 0x170c20, .byte = 0x96 },
		{ .addr = 0x170c21, .byte = 0xc1 }
};

static const SST_RamByte swap_final_ram_8[] = {
		{ .addr = 0x170c1c, .byte = 0x48 },
		{ .addr = 0x170c1d, .byte = 0x43 },
		{ .addr = 0x170c1e, .byte = 0x26 },
		{ .addr = 0x170c1f, .byte = 0x45 },
		{ .addr = 0x170c20, .byte = 0x96 },
		{ .addr = 0x170c21, .byte = 0xc1 }
};

static const SST_Transaction swap_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1510432, .data = 38593, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_9[] = {
		{ .addr = 0x79ca5a, .byte = 0x48 },
		{ .addr = 0x79ca5b, .byte = 0x44 },
		{ .addr = 0x79ca5c, .byte = 0x4d },
		{ .addr = 0x79ca5d, .byte = 0x1a },
		{ .addr = 0x79ca5e, .byte = 0x52 },
		{ .addr = 0x79ca5f, .byte = 0x0d }
};

static const SST_RamByte swap_final_ram_9[] = {
		{ .addr = 0x79ca5a, .byte = 0x48 },
		{ .addr = 0x79ca5b, .byte = 0x44 },
		{ .addr = 0x79ca5c, .byte = 0x4d },
		{ .addr = 0x79ca5d, .byte = 0x1a },
		{ .addr = 0x79ca5e, .byte = 0x52 },
		{ .addr = 0x79ca5f, .byte = 0x0d }
};

static const SST_Transaction swap_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7981662, .data = 21005, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_10[] = {
		{ .addr = 0xce438e, .byte = 0x48 },
		{ .addr = 0xce438f, .byte = 0x42 },
		{ .addr = 0xce4390, .byte = 0xe8 },
		{ .addr = 0xce4391, .byte = 0x86 },
		{ .addr = 0xce4392, .byte = 0x08 },
		{ .addr = 0xce4393, .byte = 0xc0 }
};

static const SST_RamByte swap_final_ram_10[] = {
		{ .addr = 0xce438e, .byte = 0x48 },
		{ .addr = 0xce438f, .byte = 0x42 },
		{ .addr = 0xce4390, .byte = 0xe8 },
		{ .addr = 0xce4391, .byte = 0x86 },
		{ .addr = 0xce4392, .byte = 0x08 },
		{ .addr = 0xce4393, .byte = 0xc0 }
};

static const SST_Transaction swap_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13517714, .data = 2240, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_11[] = {
		{ .addr = 0xab19ea, .byte = 0x48 },
		{ .addr = 0xab19eb, .byte = 0x41 },
		{ .addr = 0xab19ec, .byte = 0x68 },
		{ .addr = 0xab19ed, .byte = 0xf5 },
		{ .addr = 0xab19ee, .byte = 0x46 },
		{ .addr = 0xab19ef, .byte = 0x23 }
};

static const SST_RamByte swap_final_ram_11[] = {
		{ .addr = 0xab19ea, .byte = 0x48 },
		{ .addr = 0xab19eb, .byte = 0x41 },
		{ .addr = 0xab19ec, .byte = 0x68 },
		{ .addr = 0xab19ed, .byte = 0xf5 },
		{ .addr = 0xab19ee, .byte = 0x46 },
		{ .addr = 0xab19ef, .byte = 0x23 }
};

static const SST_Transaction swap_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11213294, .data = 17955, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_12[] = {
		{ .addr = 0x8f9594, .byte = 0x48 },
		{ .addr = 0x8f9595, .byte = 0x44 },
		{ .addr = 0x8f9596, .byte = 0xdd },
		{ .addr = 0x8f9597, .byte = 0xb6 },
		{ .addr = 0x8f9598, .byte = 0x73 },
		{ .addr = 0x8f9599, .byte = 0xcb }
};

static const SST_RamByte swap_final_ram_12[] = {
		{ .addr = 0x8f9594, .byte = 0x48 },
		{ .addr = 0x8f9595, .byte = 0x44 },
		{ .addr = 0x8f9596, .byte = 0xdd },
		{ .addr = 0x8f9597, .byte = 0xb6 },
		{ .addr = 0x8f9598, .byte = 0x73 },
		{ .addr = 0x8f9599, .byte = 0xcb }
};

static const SST_Transaction swap_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9409944, .data = 29643, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_13[] = {
		{ .addr = 0xf2d714, .byte = 0x48 },
		{ .addr = 0xf2d715, .byte = 0x45 },
		{ .addr = 0xf2d716, .byte = 0xcf },
		{ .addr = 0xf2d717, .byte = 0x7c },
		{ .addr = 0xf2d718, .byte = 0x2f },
		{ .addr = 0xf2d719, .byte = 0x6c }
};

static const SST_RamByte swap_final_ram_13[] = {
		{ .addr = 0xf2d714, .byte = 0x48 },
		{ .addr = 0xf2d715, .byte = 0x45 },
		{ .addr = 0xf2d716, .byte = 0xcf },
		{ .addr = 0xf2d717, .byte = 0x7c },
		{ .addr = 0xf2d718, .byte = 0x2f },
		{ .addr = 0xf2d719, .byte = 0x6c }
};

static const SST_Transaction swap_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15914776, .data = 12140, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_14[] = {
		{ .addr = 0x7de3fa, .byte = 0x48 },
		{ .addr = 0x7de3fb, .byte = 0x41 },
		{ .addr = 0x7de3fc, .byte = 0x57 },
		{ .addr = 0x7de3fd, .byte = 0x86 },
		{ .addr = 0x7de3fe, .byte = 0xb8 },
		{ .addr = 0x7de3ff, .byte = 0x39 }
};

static const SST_RamByte swap_final_ram_14[] = {
		{ .addr = 0x7de3fa, .byte = 0x48 },
		{ .addr = 0x7de3fb, .byte = 0x41 },
		{ .addr = 0x7de3fc, .byte = 0x57 },
		{ .addr = 0x7de3fd, .byte = 0x86 },
		{ .addr = 0x7de3fe, .byte = 0xb8 },
		{ .addr = 0x7de3ff, .byte = 0x39 }
};

static const SST_Transaction swap_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8250366, .data = 47161, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_15[] = {
		{ .addr = 0x4ad1f8, .byte = 0x48 },
		{ .addr = 0x4ad1f9, .byte = 0x45 },
		{ .addr = 0x4ad1fa, .byte = 0x76 },
		{ .addr = 0x4ad1fb, .byte = 0x0a },
		{ .addr = 0x4ad1fc, .byte = 0xd1 },
		{ .addr = 0x4ad1fd, .byte = 0x29 }
};

static const SST_RamByte swap_final_ram_15[] = {
		{ .addr = 0x4ad1f8, .byte = 0x48 },
		{ .addr = 0x4ad1f9, .byte = 0x45 },
		{ .addr = 0x4ad1fa, .byte = 0x76 },
		{ .addr = 0x4ad1fb, .byte = 0x0a },
		{ .addr = 0x4ad1fc, .byte = 0xd1 },
		{ .addr = 0x4ad1fd, .byte = 0x29 }
};

static const SST_Transaction swap_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4903420, .data = 53545, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_16[] = {
		{ .addr = 0xedbdc0, .byte = 0x48 },
		{ .addr = 0xedbdc1, .byte = 0x47 },
		{ .addr = 0xedbdc2, .byte = 0x69 },
		{ .addr = 0xedbdc3, .byte = 0x68 },
		{ .addr = 0xedbdc4, .byte = 0xc8 },
		{ .addr = 0xedbdc5, .byte = 0x3f }
};

static const SST_RamByte swap_final_ram_16[] = {
		{ .addr = 0xedbdc0, .byte = 0x48 },
		{ .addr = 0xedbdc1, .byte = 0x47 },
		{ .addr = 0xedbdc2, .byte = 0x69 },
		{ .addr = 0xedbdc3, .byte = 0x68 },
		{ .addr = 0xedbdc4, .byte = 0xc8 },
		{ .addr = 0xedbdc5, .byte = 0x3f }
};

static const SST_Transaction swap_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15580612, .data = 51263, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_17[] = {
		{ .addr = 0x89d142, .byte = 0x48 },
		{ .addr = 0x89d143, .byte = 0x47 },
		{ .addr = 0x89d144, .byte = 0x6a },
		{ .addr = 0x89d145, .byte = 0xdc },
		{ .addr = 0x89d146, .byte = 0x10 },
		{ .addr = 0x89d147, .byte = 0x78 }
};

static const SST_RamByte swap_final_ram_17[] = {
		{ .addr = 0x89d142, .byte = 0x48 },
		{ .addr = 0x89d143, .byte = 0x47 },
		{ .addr = 0x89d144, .byte = 0x6a },
		{ .addr = 0x89d145, .byte = 0xdc },
		{ .addr = 0x89d146, .byte = 0x10 },
		{ .addr = 0x89d147, .byte = 0x78 }
};

static const SST_Transaction swap_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9032006, .data = 4216, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_18[] = {
		{ .addr = 0xceee8c, .byte = 0x48 },
		{ .addr = 0xceee8d, .byte = 0x44 },
		{ .addr = 0xceee8e, .byte = 0x48 },
		{ .addr = 0xceee8f, .byte = 0x35 },
		{ .addr = 0xceee90, .byte = 0x84 },
		{ .addr = 0xceee91, .byte = 0x6c }
};

static const SST_RamByte swap_final_ram_18[] = {
		{ .addr = 0xceee8c, .byte = 0x48 },
		{ .addr = 0xceee8d, .byte = 0x44 },
		{ .addr = 0xceee8e, .byte = 0x48 },
		{ .addr = 0xceee8f, .byte = 0x35 },
		{ .addr = 0xceee90, .byte = 0x84 },
		{ .addr = 0xceee91, .byte = 0x6c }
};

static const SST_Transaction swap_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13561488, .data = 33900, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_19[] = {
		{ .addr = 0xa44abe, .byte = 0x48 },
		{ .addr = 0xa44abf, .byte = 0x43 },
		{ .addr = 0xa44ac0, .byte = 0xbe },
		{ .addr = 0xa44ac1, .byte = 0x1e },
		{ .addr = 0xa44ac2, .byte = 0x82 },
		{ .addr = 0xa44ac3, .byte = 0xb7 }
};

static const SST_RamByte swap_final_ram_19[] = {
		{ .addr = 0xa44abe, .byte = 0x48 },
		{ .addr = 0xa44abf, .byte = 0x43 },
		{ .addr = 0xa44ac0, .byte = 0xbe },
		{ .addr = 0xa44ac1, .byte = 0x1e },
		{ .addr = 0xa44ac2, .byte = 0x82 },
		{ .addr = 0xa44ac3, .byte = 0xb7 }
};

static const SST_Transaction swap_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10767042, .data = 33463, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_20[] = {
		{ .addr = 0x3b6cc0, .byte = 0x48 },
		{ .addr = 0x3b6cc1, .byte = 0x45 },
		{ .addr = 0x3b6cc2, .byte = 0x19 },
		{ .addr = 0x3b6cc3, .byte = 0xee },
		{ .addr = 0x3b6cc4, .byte = 0x67 },
		{ .addr = 0x3b6cc5, .byte = 0x13 }
};

static const SST_RamByte swap_final_ram_20[] = {
		{ .addr = 0x3b6cc0, .byte = 0x48 },
		{ .addr = 0x3b6cc1, .byte = 0x45 },
		{ .addr = 0x3b6cc2, .byte = 0x19 },
		{ .addr = 0x3b6cc3, .byte = 0xee },
		{ .addr = 0x3b6cc4, .byte = 0x67 },
		{ .addr = 0x3b6cc5, .byte = 0x13 }
};

static const SST_Transaction swap_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3894468, .data = 26387, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_21[] = {
		{ .addr = 0x8b4858, .byte = 0x48 },
		{ .addr = 0x8b4859, .byte = 0x40 },
		{ .addr = 0x8b485a, .byte = 0xd9 },
		{ .addr = 0x8b485b, .byte = 0xdc },
		{ .addr = 0x8b485c, .byte = 0x4e },
		{ .addr = 0x8b485d, .byte = 0x10 }
};

static const SST_RamByte swap_final_ram_21[] = {
		{ .addr = 0x8b4858, .byte = 0x48 },
		{ .addr = 0x8b4859, .byte = 0x40 },
		{ .addr = 0x8b485a, .byte = 0xd9 },
		{ .addr = 0x8b485b, .byte = 0xdc },
		{ .addr = 0x8b485c, .byte = 0x4e },
		{ .addr = 0x8b485d, .byte = 0x10 }
};

static const SST_Transaction swap_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9128028, .data = 19984, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_22[] = {
		{ .addr = 0x5a3cee, .byte = 0x48 },
		{ .addr = 0x5a3cef, .byte = 0x42 },
		{ .addr = 0x5a3cf0, .byte = 0xc6 },
		{ .addr = 0x5a3cf1, .byte = 0xe3 },
		{ .addr = 0x5a3cf2, .byte = 0x81 },
		{ .addr = 0x5a3cf3, .byte = 0xa5 }
};

static const SST_RamByte swap_final_ram_22[] = {
		{ .addr = 0x5a3cee, .byte = 0x48 },
		{ .addr = 0x5a3cef, .byte = 0x42 },
		{ .addr = 0x5a3cf0, .byte = 0xc6 },
		{ .addr = 0x5a3cf1, .byte = 0xe3 },
		{ .addr = 0x5a3cf2, .byte = 0x81 },
		{ .addr = 0x5a3cf3, .byte = 0xa5 }
};

static const SST_Transaction swap_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5913842, .data = 33189, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_23[] = {
		{ .addr = 0x81344e, .byte = 0x48 },
		{ .addr = 0x81344f, .byte = 0x46 },
		{ .addr = 0x813450, .byte = 0x3c },
		{ .addr = 0x813451, .byte = 0xb0 },
		{ .addr = 0x813452, .byte = 0x33 },
		{ .addr = 0x813453, .byte = 0xff }
};

static const SST_RamByte swap_final_ram_23[] = {
		{ .addr = 0x81344e, .byte = 0x48 },
		{ .addr = 0x81344f, .byte = 0x46 },
		{ .addr = 0x813450, .byte = 0x3c },
		{ .addr = 0x813451, .byte = 0xb0 },
		{ .addr = 0x813452, .byte = 0x33 },
		{ .addr = 0x813453, .byte = 0xff }
};

static const SST_Transaction swap_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8467538, .data = 13311, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_24[] = {
		{ .addr = 0x878e62, .byte = 0x48 },
		{ .addr = 0x878e63, .byte = 0x46 },
		{ .addr = 0x878e64, .byte = 0x3c },
		{ .addr = 0x878e65, .byte = 0x42 },
		{ .addr = 0x878e66, .byte = 0xd0 },
		{ .addr = 0x878e67, .byte = 0xbd }
};

static const SST_RamByte swap_final_ram_24[] = {
		{ .addr = 0x878e62, .byte = 0x48 },
		{ .addr = 0x878e63, .byte = 0x46 },
		{ .addr = 0x878e64, .byte = 0x3c },
		{ .addr = 0x878e65, .byte = 0x42 },
		{ .addr = 0x878e66, .byte = 0xd0 },
		{ .addr = 0x878e67, .byte = 0xbd }
};

static const SST_Transaction swap_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8883814, .data = 53437, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_25[] = {
		{ .addr = 0x1b725e, .byte = 0x48 },
		{ .addr = 0x1b725f, .byte = 0x43 },
		{ .addr = 0x1b7260, .byte = 0x5b },
		{ .addr = 0x1b7261, .byte = 0x0a },
		{ .addr = 0x1b7262, .byte = 0xf2 },
		{ .addr = 0x1b7263, .byte = 0xa6 }
};

static const SST_RamByte swap_final_ram_25[] = {
		{ .addr = 0x1b725e, .byte = 0x48 },
		{ .addr = 0x1b725f, .byte = 0x43 },
		{ .addr = 0x1b7260, .byte = 0x5b },
		{ .addr = 0x1b7261, .byte = 0x0a },
		{ .addr = 0x1b7262, .byte = 0xf2 },
		{ .addr = 0x1b7263, .byte = 0xa6 }
};

static const SST_Transaction swap_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1798754, .data = 62118, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_26[] = {
		{ .addr = 0xdbc6ea, .byte = 0x48 },
		{ .addr = 0xdbc6eb, .byte = 0x44 },
		{ .addr = 0xdbc6ec, .byte = 0x0d },
		{ .addr = 0xdbc6ed, .byte = 0x25 },
		{ .addr = 0xdbc6ee, .byte = 0x70 },
		{ .addr = 0xdbc6ef, .byte = 0xe3 }
};

static const SST_RamByte swap_final_ram_26[] = {
		{ .addr = 0xdbc6ea, .byte = 0x48 },
		{ .addr = 0xdbc6eb, .byte = 0x44 },
		{ .addr = 0xdbc6ec, .byte = 0x0d },
		{ .addr = 0xdbc6ed, .byte = 0x25 },
		{ .addr = 0xdbc6ee, .byte = 0x70 },
		{ .addr = 0xdbc6ef, .byte = 0xe3 }
};

static const SST_Transaction swap_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14403310, .data = 28899, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_27[] = {
		{ .addr = 0xac92b2, .byte = 0x48 },
		{ .addr = 0xac92b3, .byte = 0x44 },
		{ .addr = 0xac92b4, .byte = 0x56 },
		{ .addr = 0xac92b5, .byte = 0x6e },
		{ .addr = 0xac92b6, .byte = 0x15 },
		{ .addr = 0xac92b7, .byte = 0x0e }
};

static const SST_RamByte swap_final_ram_27[] = {
		{ .addr = 0xac92b2, .byte = 0x48 },
		{ .addr = 0xac92b3, .byte = 0x44 },
		{ .addr = 0xac92b4, .byte = 0x56 },
		{ .addr = 0xac92b5, .byte = 0x6e },
		{ .addr = 0xac92b6, .byte = 0x15 },
		{ .addr = 0xac92b7, .byte = 0x0e }
};

static const SST_Transaction swap_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11309750, .data = 5390, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_28[] = {
		{ .addr = 0x07e998, .byte = 0x48 },
		{ .addr = 0x07e999, .byte = 0x41 },
		{ .addr = 0x07e99a, .byte = 0xf3 },
		{ .addr = 0x07e99b, .byte = 0x5d },
		{ .addr = 0x07e99c, .byte = 0x23 },
		{ .addr = 0x07e99d, .byte = 0x96 }
};

static const SST_RamByte swap_final_ram_28[] = {
		{ .addr = 0x07e998, .byte = 0x48 },
		{ .addr = 0x07e999, .byte = 0x41 },
		{ .addr = 0x07e99a, .byte = 0xf3 },
		{ .addr = 0x07e99b, .byte = 0x5d },
		{ .addr = 0x07e99c, .byte = 0x23 },
		{ .addr = 0x07e99d, .byte = 0x96 }
};

static const SST_Transaction swap_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 518556, .data = 9110, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_29[] = {
		{ .addr = 0x25c66a, .byte = 0x48 },
		{ .addr = 0x25c66b, .byte = 0x43 },
		{ .addr = 0x25c66c, .byte = 0x70 },
		{ .addr = 0x25c66d, .byte = 0x7a },
		{ .addr = 0x25c66e, .byte = 0x52 },
		{ .addr = 0x25c66f, .byte = 0x50 }
};

static const SST_RamByte swap_final_ram_29[] = {
		{ .addr = 0x25c66a, .byte = 0x48 },
		{ .addr = 0x25c66b, .byte = 0x43 },
		{ .addr = 0x25c66c, .byte = 0x70 },
		{ .addr = 0x25c66d, .byte = 0x7a },
		{ .addr = 0x25c66e, .byte = 0x52 },
		{ .addr = 0x25c66f, .byte = 0x50 }
};

static const SST_Transaction swap_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2475630, .data = 21072, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_30[] = {
		{ .addr = 0x029c3e, .byte = 0x48 },
		{ .addr = 0x029c3f, .byte = 0x45 },
		{ .addr = 0x029c40, .byte = 0x6e },
		{ .addr = 0x029c41, .byte = 0x06 },
		{ .addr = 0x029c42, .byte = 0xdd },
		{ .addr = 0x029c43, .byte = 0x94 }
};

static const SST_RamByte swap_final_ram_30[] = {
		{ .addr = 0x029c3e, .byte = 0x48 },
		{ .addr = 0x029c3f, .byte = 0x45 },
		{ .addr = 0x029c40, .byte = 0x6e },
		{ .addr = 0x029c41, .byte = 0x06 },
		{ .addr = 0x029c42, .byte = 0xdd },
		{ .addr = 0x029c43, .byte = 0x94 }
};

static const SST_Transaction swap_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 171074, .data = 56724, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_31[] = {
		{ .addr = 0xd6a106, .byte = 0x48 },
		{ .addr = 0xd6a107, .byte = 0x44 },
		{ .addr = 0xd6a108, .byte = 0xce },
		{ .addr = 0xd6a109, .byte = 0xdb },
		{ .addr = 0xd6a10a, .byte = 0x0c },
		{ .addr = 0xd6a10b, .byte = 0x48 }
};

static const SST_RamByte swap_final_ram_31[] = {
		{ .addr = 0xd6a106, .byte = 0x48 },
		{ .addr = 0xd6a107, .byte = 0x44 },
		{ .addr = 0xd6a108, .byte = 0xce },
		{ .addr = 0xd6a109, .byte = 0xdb },
		{ .addr = 0xd6a10a, .byte = 0x0c },
		{ .addr = 0xd6a10b, .byte = 0x48 }
};

static const SST_Transaction swap_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14065930, .data = 3144, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase swap[] = {
	{
		.name = "000 SWAP D3 4843",
		.initial = {
			.regs = {
				1510753054, 4071567957, 3839256128, 1926237086, 89012861, 2466081603, 1103358500, 3344103847, 3298303314, 1066111233, 3272664423, 3745714625, 1929345019, 2064452560, 1567622384, 5955164, 12514624, 40969, 1727030
			},
			.prefetch0 = 18499,
			.prefetch1 = 16813,
			.ram = swap_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1510753054, 4071567957, 3839256128, 194933456, 89012861, 2466081603, 1103358500, 3344103847, 3298303314, 1066111233, 3272664423, 3745714625, 1929345019, 2064452560, 1567622384, 5955164, 12514624, 40960, 1727032
			},
			.prefetch0 = 16813,
			.prefetch1 = 16749,
			.ram = swap_final_ram_0,
			.ram_len = 6,
		},
		.transactions = swap_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 SWAP D7 4847",
		.initial = {
			.regs = {
				4115843725, 2345382708, 2631360228, 2167464651, 4213326814, 2154268161, 3918099075, 905513621, 4203544091, 3876886928, 409453504, 2180760983, 870269992, 4109327655, 50613965, 15591342, 5835316, 29, 13734736
			},
			.prefetch0 = 18503,
			.prefetch1 = 29086,
			.ram = swap_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4115843725, 2345382708, 2631360228, 2167464651, 4213326814, 2154268161, 3918099075, 177550841, 4203544091, 3876886928, 409453504, 2180760983, 870269992, 4109327655, 50613965, 15591342, 5835316, 16, 13734738
			},
			.prefetch0 = 29086,
			.prefetch1 = 23848,
			.ram = swap_final_ram_1,
			.ram_len = 6,
		},
		.transactions = swap_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 SWAP D1 4841",
		.initial = {
			.regs = {
				1322134390, 1725308508, 468387741, 3977772105, 1673330044, 1012800418, 1747351742, 1040437197, 2958264685, 3581533533, 1803678201, 869445937, 4037214242, 1126694403, 4230167322, 10361344, 8741614, 32785, 12397768
			},
			.prefetch0 = 18497,
			.prefetch1 = 27474,
			.ram = swap_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1322134390, 509372118, 468387741, 3977772105, 1673330044, 1012800418, 1747351742, 1040437197, 2958264685, 3581533533, 1803678201, 869445937, 4037214242, 1126694403, 4230167322, 10361344, 8741614, 32784, 12397770
			},
			.prefetch0 = 27474,
			.prefetch1 = 10662,
			.ram = swap_final_ram_2,
			.ram_len = 6,
		},
		.transactions = swap_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 SWAP D4 4844",
		.initial = {
			.regs = {
				3935967539, 2174116261, 3131987089, 888712028, 2281939568, 1179629098, 1045184654, 4178939532, 1792793942, 4012875303, 1085729630, 2146913412, 4181122051, 360779196, 1811292335, 10441722, 7569672, 1048, 12677952
			},
			.prefetch0 = 18500,
			.prefetch1 = 62093,
			.ram = swap_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3935967539, 2174116261, 3131987089, 888712028, 2725283843, 1179629098, 1045184654, 4178939532, 1792793942, 4012875303, 1085729630, 2146913412, 4181122051, 360779196, 1811292335, 10441722, 7569672, 1048, 12677954
			},
			.prefetch0 = 62093,
			.prefetch1 = 23663,
			.ram = swap_final_ram_3,
			.ram_len = 6,
		},
		.transactions = swap_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 SWAP D3 4843",
		.initial = {
			.regs = {
				264559707, 1829008570, 499354872, 4000468972, 1022774667, 443622963, 3215343274, 4242724684, 4257531891, 1421378477, 2530391792, 3460567438, 1712767593, 3360147808, 2381959463, 2477946, 13582280, 8460, 9947656
			},
			.prefetch0 = 18499,
			.prefetch1 = 50377,
			.ram = swap_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				264559707, 1829008570, 499354872, 1340927602, 1022774667, 443622963, 3215343274, 4242724684, 4257531891, 1421378477, 2530391792, 3460567438, 1712767593, 3360147808, 2381959463, 2477946, 13582280, 8448, 9947658
			},
			.prefetch0 = 50377,
			.prefetch1 = 60572,
			.ram = swap_final_ram_4,
			.ram_len = 6,
		},
		.transactions = swap_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 SWAP D1 4841",
		.initial = {
			.regs = {
				3412189380, 3723707499, 1047418701, 2223324450, 3989271661, 2552200238, 4171206031, 3279008504, 3704081411, 1781346500, 2502352152, 544301955, 2886714811, 546529214, 4179102155, 6083464, 15038940, 8704, 13984112
			},
			.prefetch0 = 18497,
			.prefetch1 = 14764,
			.ram = swap_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3412189380, 1147919859, 1047418701, 2223324450, 3989271661, 2552200238, 4171206031, 3279008504, 3704081411, 1781346500, 2502352152, 544301955, 2886714811, 546529214, 4179102155, 6083464, 15038940, 8704, 13984114
			},
			.prefetch0 = 14764,
			.prefetch1 = 54203,
			.ram = swap_final_ram_5,
			.ram_len = 6,
		},
		.transactions = swap_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 SWAP D5 4845",
		.initial = {
			.regs = {
				1274490011, 1899630675, 2367705735, 923539954, 3808627436, 3207356530, 816228105, 212876843, 2245424412, 4123738961, 25133761, 161324271, 217442611, 3641896338, 1135792517, 8609486, 15855368, 42267, 3736724
			},
			.prefetch0 = 18501,
			.prefetch1 = 20417,
			.ram = swap_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1274490011, 1899630675, 2367705735, 923539954, 3808627436, 1618132780, 816228105, 212876843, 2245424412, 4123738961, 25133761, 161324271, 217442611, 3641896338, 1135792517, 8609486, 15855368, 42256, 3736726
			},
			.prefetch0 = 20417,
			.prefetch1 = 26145,
			.ram = swap_final_ram_6,
			.ram_len = 6,
		},
		.transactions = swap_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 SWAP D0 4840",
		.initial = {
			.regs = {
				3381948879, 2932041858, 1521656421, 3918870504, 3002657366, 3518534208, 994015277, 756496861, 54936102, 1771137356, 2115866509, 1413453597, 2426957289, 422861342, 2901965802, 5372376, 5784630, 34580, 10731380
			},
			.prefetch0 = 18496,
			.prefetch1 = 14666,
			.ram = swap_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1909442964, 2932041858, 1521656421, 3918870504, 3002657366, 3518534208, 994015277, 756496861, 54936102, 1771137356, 2115866509, 1413453597, 2426957289, 422861342, 2901965802, 5372376, 5784630, 34576, 10731382
			},
			.prefetch0 = 14666,
			.prefetch1 = 43239,
			.ram = swap_final_ram_7,
			.ram_len = 6,
		},
		.transactions = swap_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 SWAP D3 4843",
		.initial = {
			.regs = {
				2263088044, 3942487562, 3723866529, 35361516, 580063117, 2891877301, 3593875348, 2416074172, 115023739, 3459554462, 1893491070, 339007378, 85745548, 3376015482, 4230979222, 1816694, 7010872, 9986, 1510432
			},
			.prefetch0 = 18499,
			.prefetch1 = 9797,
			.ram = swap_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2263088044, 3942487562, 3723866529, 2464940571, 580063117, 2891877301, 3593875348, 2416074172, 115023739, 3459554462, 1893491070, 339007378, 85745548, 3376015482, 4230979222, 1816694, 7010872, 9992, 1510434
			},
			.prefetch0 = 9797,
			.prefetch1 = 38593,
			.ram = swap_final_ram_8,
			.ram_len = 6,
		},
		.transactions = swap_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 SWAP D4 4844",
		.initial = {
			.regs = {
				734237915, 1959661296, 1024257450, 1671643561, 83407607, 337435331, 983372091, 3326694597, 2185723603, 3070762092, 1830080482, 3992043972, 1536783540, 1400829401, 2788417045, 12123724, 6671182, 1055, 7981662
			},
			.prefetch0 = 18500,
			.prefetch1 = 19738,
			.ram = swap_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				734237915, 1959661296, 1024257450, 1671643561, 3002533112, 337435331, 983372091, 3326694597, 2185723603, 3070762092, 1830080482, 3992043972, 1536783540, 1400829401, 2788417045, 12123724, 6671182, 1048, 7981664
			},
			.prefetch0 = 19738,
			.prefetch1 = 21005,
			.ram = swap_final_ram_9,
			.ram_len = 6,
		},
		.transactions = swap_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 SWAP D2 4842",
		.initial = {
			.regs = {
				2165344069, 724538693, 3282658362, 3661809921, 3516709332, 852340523, 2352955735, 4105775827, 1077827520, 1066989255, 2022972139, 1184577791, 1800085569, 1639806016, 3116664895, 16129946, 2932460, 8200, 13517714
			},
			.prefetch0 = 18498,
			.prefetch1 = 59526,
			.ram = swap_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2165344069, 724538693, 1681572777, 3661809921, 3516709332, 852340523, 2352955735, 4105775827, 1077827520, 1066989255, 2022972139, 1184577791, 1800085569, 1639806016, 3116664895, 16129946, 2932460, 8192, 13517716
			},
			.prefetch0 = 59526,
			.prefetch1 = 2240,
			.ram = swap_final_ram_10,
			.ram_len = 6,
		},
		.transactions = swap_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 SWAP D1 4841",
		.initial = {
			.regs = {
				1520576392, 1683590903, 2631213070, 4255362680, 500893178, 1547459620, 368475525, 4007802541, 479418117, 3181815249, 812334381, 3808549168, 4272454339, 49917354, 2700241730, 14605184, 12200294, 1538, 11213294
			},
			.prefetch0 = 18497,
			.prefetch1 = 26869,
			.ram = swap_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1520576392, 2398577753, 2631213070, 4255362680, 500893178, 1547459620, 368475525, 4007802541, 479418117, 3181815249, 812334381, 3808549168, 4272454339, 49917354, 2700241730, 14605184, 12200294, 1544, 11213296
			},
			.prefetch0 = 26869,
			.prefetch1 = 17955,
			.ram = swap_final_ram_11,
			.ram_len = 6,
		},
		.transactions = swap_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 SWAP D4 4844",
		.initial = {
			.regs = {
				3810626984, 1576863568, 3060633976, 235216457, 323927254, 4173954354, 229543621, 4012689447, 1767002200, 2469250911, 642287498, 2669057477, 901810698, 2259393181, 2374873100, 5554254, 375866, 8987, 9409944
			},
			.prefetch0 = 18500,
			.prefetch1 = 56758,
			.ram = swap_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3810626984, 1576863568, 3060633976, 235216457, 3168146254, 4173954354, 229543621, 4012689447, 1767002200, 2469250911, 642287498, 2669057477, 901810698, 2259393181, 2374873100, 5554254, 375866, 8984, 9409946
			},
			.prefetch0 = 56758,
			.prefetch1 = 29643,
			.ram = swap_final_ram_12,
			.ram_len = 6,
		},
		.transactions = swap_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 SWAP D5 4845",
		.initial = {
			.regs = {
				553340663, 1604419042, 2975275810, 3278556994, 2973708970, 585539203, 2408374865, 3377432604, 1947227594, 249415709, 2600345950, 2031822789, 2197760445, 3213102041, 928163396, 15747194, 8645188, 1295, 15914776
			},
			.prefetch0 = 18501,
			.prefetch1 = 53116,
			.ram = swap_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				553340663, 1604419042, 2975275810, 3278556994, 2973708970, 2659394278, 2408374865, 3377432604, 1947227594, 249415709, 2600345950, 2031822789, 2197760445, 3213102041, 928163396, 15747194, 8645188, 1288, 15914778
			},
			.prefetch0 = 53116,
			.prefetch1 = 12140,
			.ram = swap_final_ram_13,
			.ram_len = 6,
		},
		.transactions = swap_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 SWAP D1 4841",
		.initial = {
			.regs = {
				641614835, 4251351277, 1062245808, 2223325653, 3669628666, 103409653, 3479851189, 1531073048, 1835721073, 1480815140, 649543638, 2458152576, 2144916262, 1542872800, 2719553629, 3014878, 10098332, 8961, 8250366
			},
			.prefetch0 = 18497,
			.prefetch1 = 22406,
			.ram = swap_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				641614835, 2028862822, 1062245808, 2223325653, 3669628666, 103409653, 3479851189, 1531073048, 1835721073, 1480815140, 649543638, 2458152576, 2144916262, 1542872800, 2719553629, 3014878, 10098332, 8960, 8250368
			},
			.prefetch0 = 22406,
			.prefetch1 = 47161,
			.ram = swap_final_ram_14,
			.ram_len = 6,
		},
		.transactions = swap_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 SWAP D5 4845",
		.initial = {
			.regs = {
				2534050304, 1129834366, 3277206947, 294841335, 3627527719, 4201732281, 3202853095, 3998806216, 3598081071, 668647219, 153487732, 2064839317, 662014720, 215028216, 3504852481, 8315246, 8848466, 1, 4903420
			},
			.prefetch0 = 18501,
			.prefetch1 = 30218,
			.ram = swap_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2534050304, 1129834366, 3277206947, 294841335, 3627527719, 1488583281, 3202853095, 3998806216, 3598081071, 668647219, 153487732, 2064839317, 662014720, 215028216, 3504852481, 8315246, 8848466, 0, 4903422
			},
			.prefetch0 = 30218,
			.prefetch1 = 53545,
			.ram = swap_final_ram_15,
			.ram_len = 6,
		},
		.transactions = swap_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "016 SWAP D7 4847",
		.initial = {
			.regs = {
				1244141141, 1532877075, 675529785, 3410765044, 2830505235, 1602186567, 1705804562, 3427442504, 2087725976, 2936581023, 3468683187, 2038596513, 3697018994, 93685681, 821023601, 6124756, 8710026, 14, 15580612
			},
			.prefetch0 = 18503,
			.prefetch1 = 26984,
			.ram = swap_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1244141141, 1532877075, 675529785, 3410765044, 2830505235, 1602186567, 1705804562, 2672348234, 2087725976, 2936581023, 3468683187, 2038596513, 3697018994, 93685681, 821023601, 6124756, 8710026, 8, 15580614
			},
			.prefetch0 = 26984,
			.prefetch1 = 51263,
			.ram = swap_final_ram_16,
			.ram_len = 6,
		},
		.transactions = swap_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 SWAP D7 4847",
		.initial = {
			.regs = {
				566036849, 4199067315, 1867501525, 456395810, 3962681450, 3924094407, 3798993071, 2908897420, 364395382, 3588252808, 2706334647, 4104016184, 2153608091, 4185311005, 1311433589, 8175844, 12758922, 41735, 9032006
			},
			.prefetch0 = 18503,
			.prefetch1 = 27356,
			.ram = swap_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				566036849, 4199067315, 1867501525, 456395810, 3962681450, 3924094407, 3798993071, 1082961250, 364395382, 3588252808, 2706334647, 4104016184, 2153608091, 4185311005, 1311433589, 8175844, 12758922, 41728, 9032008
			},
			.prefetch0 = 27356,
			.prefetch1 = 4216,
			.ram = swap_final_ram_17,
			.ram_len = 6,
		},
		.transactions = swap_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 SWAP D4 4844",
		.initial = {
			.regs = {
				3912493691, 3024086179, 1932829700, 2290448185, 2474093061, 1667016448, 1474998057, 3329246230, 2712355941, 3253951860, 4140293217, 1908603924, 1865201863, 1854984402, 2099412857, 13426946, 13142182, 41242, 13561488
			},
			.prefetch0 = 18500,
			.prefetch1 = 18485,
			.ram = swap_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3912493691, 3024086179, 1932829700, 2290448185, 2852492151, 1667016448, 1474998057, 3329246230, 2712355941, 3253951860, 4140293217, 1908603924, 1865201863, 1854984402, 2099412857, 13426946, 13142182, 41240, 13561490
			},
			.prefetch0 = 18485,
			.prefetch1 = 33900,
			.ram = swap_final_ram_18,
			.ram_len = 6,
		},
		.transactions = swap_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 SWAP D3 4843",
		.initial = {
			.regs = {
				3927403382, 1784957622, 694050365, 2629245440, 2706489972, 740612965, 2154665501, 3043971326, 1400163063, 1811870135, 2294872742, 669213901, 793124214, 70112685, 273431326, 16101574, 5695344, 9749, 10767042
			},
			.prefetch0 = 18499,
			.prefetch1 = 48670,
			.ram = swap_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3927403382, 1784957622, 694050365, 436247735, 2706489972, 740612965, 2154665501, 3043971326, 1400163063, 1811870135, 2294872742, 669213901, 793124214, 70112685, 273431326, 16101574, 5695344, 9744, 10767044
			},
			.prefetch0 = 48670,
			.prefetch1 = 33463,
			.ram = swap_final_ram_19,
			.ram_len = 6,
		},
		.transactions = swap_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 SWAP D5 4845",
		.initial = {
			.regs = {
				3403042100, 2689020076, 3346669555, 303038076, 838227061, 829275356, 2657671030, 710344857, 390444406, 2360425800, 2164635963, 3711568370, 2201744990, 796911274, 1063689239, 10295022, 8762816, 524, 3894468
			},
			.prefetch0 = 18501,
			.prefetch1 = 6638,
			.ram = swap_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3403042100, 2689020076, 3346669555, 303038076, 838227061, 3168547181, 2657671030, 710344857, 390444406, 2360425800, 2164635963, 3711568370, 2201744990, 796911274, 1063689239, 10295022, 8762816, 520, 3894470
			},
			.prefetch0 = 6638,
			.prefetch1 = 26387,
			.ram = swap_final_ram_20,
			.ram_len = 6,
		},
		.transactions = swap_transactions_20,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "021 SWAP D0 4840",
		.initial = {
			.regs = {
				3409113991, 3927712611, 2415052328, 2584055263, 279342596, 1281207413, 3352881438, 3854388590, 3650947185, 2039289973, 1488010791, 1165906080, 3724490465, 777562553, 4263004127, 6137852, 8440748, 1045, 9128028
			},
			.prefetch0 = 18496,
			.prefetch1 = 55772,
			.ram = swap_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4085762866, 3927712611, 2415052328, 2584055263, 279342596, 1281207413, 3352881438, 3854388590, 3650947185, 2039289973, 1488010791, 1165906080, 3724490465, 777562553, 4263004127, 6137852, 8440748, 1048, 9128030
			},
			.prefetch0 = 55772,
			.prefetch1 = 19984,
			.ram = swap_final_ram_21,
			.ram_len = 6,
		},
		.transactions = swap_transactions_21,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "022 SWAP D2 4842",
		.initial = {
			.regs = {
				284366743, 2385298311, 1381793749, 10016173, 1696505234, 4283187619, 24863692, 3017050060, 297296827, 1600979003, 941098949, 4129667931, 3688784612, 2307134361, 1544426389, 7833310, 13242298, 521, 5913842
			},
			.prefetch0 = 18498,
			.prefetch1 = 50915,
			.ram = swap_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				284366743, 2385298311, 2144686684, 10016173, 1696505234, 4283187619, 24863692, 3017050060, 297296827, 1600979003, 941098949, 4129667931, 3688784612, 2307134361, 1544426389, 7833310, 13242298, 512, 5913844
			},
			.prefetch0 = 50915,
			.prefetch1 = 33189,
			.ram = swap_final_ram_22,
			.ram_len = 6,
		},
		.transactions = swap_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 SWAP D6 4846",
		.initial = {
			.regs = {
				1795179528, 4262900098, 580620338, 1449554624, 1553077763, 994435201, 2776681867, 2350447301, 2968246760, 3792308030, 239712493, 1324516852, 2128035468, 1017891394, 2092151989, 4250392, 5392288, 34331, 8467538
			},
			.prefetch0 = 18502,
			.prefetch1 = 15536,
			.ram = swap_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1795179528, 4262900098, 580620338, 1449554624, 1553077763, 994435201, 3448481152, 2350447301, 2968246760, 3792308030, 239712493, 1324516852, 2128035468, 1017891394, 2092151989, 4250392, 5392288, 34328, 8467540
			},
			.prefetch0 = 15536,
			.prefetch1 = 13311,
			.ram = swap_final_ram_23,
			.ram_len = 6,
		},
		.transactions = swap_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 SWAP D6 4846",
		.initial = {
			.regs = {
				3781083380, 2586087479, 3997083669, 1106162502, 3883451365, 3886963014, 3924273198, 372633427, 385083796, 530443704, 3692196693, 880819840, 444882402, 1742432148, 3648500669, 10275572, 13041042, 33288, 8883814
			},
			.prefetch0 = 18502,
			.prefetch1 = 15426,
			.ram = swap_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3781083380, 2586087479, 3997083669, 1106162502, 3883451365, 3886963014, 2821646823, 372633427, 385083796, 530443704, 3692196693, 880819840, 444882402, 1742432148, 3648500669, 10275572, 13041042, 33288, 8883816
			},
			.prefetch0 = 15426,
			.prefetch1 = 53437,
			.ram = swap_final_ram_24,
			.ram_len = 6,
		},
		.transactions = swap_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 SWAP D3 4843",
		.initial = {
			.regs = {
				2998382399, 1336220109, 3274233540, 2070994426, 3751965404, 11193407, 924913234, 1886661424, 1628454172, 4264512412, 705677355, 866717920, 2045430673, 2963175633, 1653725934, 6732332, 9074854, 33810, 1798754
			},
			.prefetch0 = 18499,
			.prefetch1 = 23306,
			.ram = swap_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2998382399, 1336220109, 3274233540, 3724180336, 3751965404, 11193407, 924913234, 1886661424, 1628454172, 4264512412, 705677355, 866717920, 2045430673, 2963175633, 1653725934, 6732332, 9074854, 33816, 1798756
			},
			.prefetch0 = 23306,
			.prefetch1 = 62118,
			.ram = swap_final_ram_25,
			.ram_len = 6,
		},
		.transactions = swap_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 SWAP D4 4844",
		.initial = {
			.regs = {
				4123222703, 484897550, 3304425009, 2661811148, 3082281900, 2224292136, 2954013809, 2313947560, 3172498453, 3452929848, 3360600840, 1718238839, 2266638245, 454796123, 1693956666, 779668, 8016306, 272, 14403310
			},
			.prefetch0 = 18500,
			.prefetch1 = 3365,
			.ram = swap_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4123222703, 484897550, 3304425009, 2661811148, 3819747255, 2224292136, 2954013809, 2313947560, 3172498453, 3452929848, 3360600840, 1718238839, 2266638245, 454796123, 1693956666, 779668, 8016306, 280, 14403312
			},
			.prefetch0 = 3365,
			.prefetch1 = 28899,
			.ram = swap_final_ram_26,
			.ram_len = 6,
		},
		.transactions = swap_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 SWAP D4 4844",
		.initial = {
			.regs = {
				3701427721, 2284991247, 124851765, 4173780923, 3940662328, 4149539166, 3016760519, 3280623573, 4047666128, 3670604684, 4025605808, 3865404504, 1634526265, 3570278164, 4260416287, 13977360, 230898, 41219, 11309750
			},
			.prefetch0 = 18500,
			.prefetch1 = 22126,
			.ram = swap_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3701427721, 2284991247, 124851765, 4173780923, 3157846753, 4149539166, 3016760519, 3280623573, 4047666128, 3670604684, 4025605808, 3865404504, 1634526265, 3570278164, 4260416287, 13977360, 230898, 41224, 11309752
			},
			.prefetch0 = 22126,
			.prefetch1 = 5390,
			.ram = swap_final_ram_27,
			.ram_len = 6,
		},
		.transactions = swap_transactions_27,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "028 SWAP D1 4841",
		.initial = {
			.regs = {
				2828505425, 1534945218, 3736409507, 2919295422, 3956361979, 257195068, 3005100555, 1175101679, 2445340671, 4238468101, 3661011939, 4038966238, 3816076454, 3048341661, 475734178, 2862456, 14661814, 42753, 518556
			},
			.prefetch0 = 18497,
			.prefetch1 = 62301,
			.ram = swap_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2828505425, 1740790653, 3736409507, 2919295422, 3956361979, 257195068, 3005100555, 1175101679, 2445340671, 4238468101, 3661011939, 4038966238, 3816076454, 3048341661, 475734178, 2862456, 14661814, 42752, 518558
			},
			.prefetch0 = 62301,
			.prefetch1 = 9110,
			.ram = swap_final_ram_28,
			.ram_len = 6,
		},
		.transactions = swap_transactions_28,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "029 SWAP D3 4843",
		.initial = {
			.regs = {
				253801818, 2409072202, 429599732, 2455965369, 1541517313, 871970088, 1253967074, 2651254736, 1180205887, 3724858224, 1111203704, 2144303691, 2259074825, 671982544, 70816575, 10987160, 9022110, 42762, 2475630
			},
			.prefetch0 = 18499,
			.prefetch1 = 28794,
			.ram = swap_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				253801818, 2409072202, 429599732, 247042659, 1541517313, 871970088, 1253967074, 2651254736, 1180205887, 3724858224, 1111203704, 2144303691, 2259074825, 671982544, 70816575, 10987160, 9022110, 42752, 2475632
			},
			.prefetch0 = 28794,
			.prefetch1 = 21072,
			.ram = swap_final_ram_29,
			.ram_len = 6,
		},
		.transactions = swap_transactions_29,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "030 SWAP D5 4845",
		.initial = {
			.regs = {
				1827611660, 3249751763, 67408857, 3966402031, 2614600068, 2630256579, 3094663510, 3103908524, 428664200, 180091133, 1000654765, 1541115258, 754760921, 3918281436, 3257857016, 6705666, 11282586, 8475, 171074
			},
			.prefetch0 = 18501,
			.prefetch1 = 28166,
			.ram = swap_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1827611660, 3249751763, 67408857, 3966402031, 2614600068, 2277743814, 3094663510, 3103908524, 428664200, 180091133, 1000654765, 1541115258, 754760921, 3918281436, 3257857016, 6705666, 11282586, 8472, 171076
			},
			.prefetch0 = 28166,
			.prefetch1 = 56724,
			.ram = swap_final_ram_30,
			.ram_len = 6,
		},
		.transactions = swap_transactions_30,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "031 SWAP D4 4844",
		.initial = {
			.regs = {
				2947223692, 2244843943, 3008521710, 3548587580, 618656765, 3074232016, 3210503611, 2054344399, 160029969, 4040540677, 3619936476, 1053332508, 3188910352, 721810920, 3822794062, 7324258, 935010, 33546, 14065930
			},
			.prefetch0 = 18500,
			.prefetch1 = 52955,
			.ram = swap_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2947223692, 2244843943, 3008521710, 3548587580, 4093453535, 3074232016, 3210503611, 2054344399, 160029969, 4040540677, 3619936476, 1053332508, 3188910352, 721810920, 3822794062, 7324258, 935010, 33544, 14065932
			},
			.prefetch0 = 52955,
			.prefetch1 = 3144,
			.ram = swap_final_ram_31,
			.ram_len = 6,
		},
		.transactions = swap_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_SWAP_H */