#ifndef RBT_ORL_H
#define RBT_ORL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte orl_initial_ram_0[] = {
		{ .addr = 0x588a4e, .byte = 0x8d },
		{ .addr = 0x588a4f, .byte = 0xa9 },
		{ .addr = 0x588a50, .byte = 0x24 },
		{ .addr = 0x588a51, .byte = 0x4c },
		{ .addr = 0x588a52, .byte = 0xc9 },
		{ .addr = 0x588a53, .byte = 0x96 },
		{ .addr = 0x409004, .byte = 0x64 },
		{ .addr = 0x409005, .byte = 0x42 },
		{ .addr = 0x409006, .byte = 0xf7 },
		{ .addr = 0x409007, .byte = 0x65 },
		{ .addr = 0x588a54, .byte = 0xed },
		{ .addr = 0x588a55, .byte = 0x6f }
};

static const SST_RamByte orl_final_ram_0[] = {
		{ .addr = 0x588a4e, .byte = 0x8d },
		{ .addr = 0x588a4f, .byte = 0xa9 },
		{ .addr = 0x588a50, .byte = 0x24 },
		{ .addr = 0x588a51, .byte = 0x4c },
		{ .addr = 0x588a52, .byte = 0xc9 },
		{ .addr = 0x588a53, .byte = 0x96 },
		{ .addr = 0x409004, .byte = 0x76 },
		{ .addr = 0x409005, .byte = 0x5e },
		{ .addr = 0x409006, .byte = 0xf7 },
		{ .addr = 0x409007, .byte = 0x67 },
		{ .addr = 0x588a54, .byte = 0xed },
		{ .addr = 0x588a55, .byte = 0x6f }
};

static const SST_Transaction orl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5802578, .data = 51606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4231172, .data = 25666, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4231174, .data = 63333, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5802580, .data = 60783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4231174, .data = 63335, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4231172, .data = 30302, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_1[] = {
		{ .addr = 0x02e648, .byte = 0x86 },
		{ .addr = 0x02e649, .byte = 0xab },
		{ .addr = 0x02e64a, .byte = 0x9f },
		{ .addr = 0x02e64b, .byte = 0x45 },
		{ .addr = 0x02e64c, .byte = 0xfa },
		{ .addr = 0x02e64d, .byte = 0x39 },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x5c07a0, .byte = 0x8b },
		{ .addr = 0x5c07a1, .byte = 0x9a },
		{ .addr = 0x5c07a2, .byte = 0xe3 },
		{ .addr = 0x5c07a3, .byte = 0x63 }
};

static const SST_RamByte orl_final_ram_1[] = {
		{ .addr = 0x02e648, .byte = 0x86 },
		{ .addr = 0x02e649, .byte = 0xab },
		{ .addr = 0x02e64a, .byte = 0x9f },
		{ .addr = 0x02e64b, .byte = 0x45 },
		{ .addr = 0x02e64c, .byte = 0xfa },
		{ .addr = 0x02e64d, .byte = 0x39 },
		{ .addr = 0xf87d1a, .byte = 0xe6 },
		{ .addr = 0xf87d1b, .byte = 0x4a },
		{ .addr = 0xf87d16, .byte = 0xa6 },
		{ .addr = 0xf87d17, .byte = 0x05 },
		{ .addr = 0xf87d18, .byte = 0x00 },
		{ .addr = 0xf87d19, .byte = 0x02 },
		{ .addr = 0xf87d14, .byte = 0x86 },
		{ .addr = 0xf87d15, .byte = 0xab },
		{ .addr = 0xf87d12, .byte = 0xba },
		{ .addr = 0xf87d13, .byte = 0x49 },
		{ .addr = 0xf87d0e, .byte = 0x86 },
		{ .addr = 0xf87d0f, .byte = 0xb5 },
		{ .addr = 0xf87d10, .byte = 0x6d },
		{ .addr = 0xf87d11, .byte = 0x5a },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x5c07a0, .byte = 0x8b },
		{ .addr = 0x5c07a1, .byte = 0x9a },
		{ .addr = 0x5c07a2, .byte = 0xe3 },
		{ .addr = 0x5c07a3, .byte = 0x63 }
};

static const SST_Transaction orl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 190028, .data = 64057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5945928, .data = 35313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16284954, .data = 58954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16284950, .data = 42501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16284952, .data = 2, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16284948, .data = 34475, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16284946, .data = 47689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16284942, .data = 34485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16284944, .data = 27994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6031264, .data = 35738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6031266, .data = 58211, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_2[] = {
		{ .addr = 0x0ba424, .byte = 0x85 },
		{ .addr = 0x0ba425, .byte = 0xb4 },
		{ .addr = 0x0ba426, .byte = 0x98 },
		{ .addr = 0x0ba427, .byte = 0x3e },
		{ .addr = 0x0ba428, .byte = 0x65 },
		{ .addr = 0x0ba429, .byte = 0xb8 },
		{ .addr = 0xddf7ca, .byte = 0xc9 },
		{ .addr = 0xddf7cb, .byte = 0x20 },
		{ .addr = 0xddf7cc, .byte = 0x4b },
		{ .addr = 0xddf7cd, .byte = 0x53 },
		{ .addr = 0x0ba42a, .byte = 0x06 },
		{ .addr = 0x0ba42b, .byte = 0x73 }
};

static const SST_RamByte orl_final_ram_2[] = {
		{ .addr = 0x0ba424, .byte = 0x85 },
		{ .addr = 0x0ba425, .byte = 0xb4 },
		{ .addr = 0x0ba426, .byte = 0x98 },
		{ .addr = 0x0ba427, .byte = 0x3e },
		{ .addr = 0x0ba428, .byte = 0x65 },
		{ .addr = 0x0ba429, .byte = 0xb8 },
		{ .addr = 0xddf7ca, .byte = 0xd9 },
		{ .addr = 0xddf7cb, .byte = 0x3f },
		{ .addr = 0xddf7cc, .byte = 0xfb },
		{ .addr = 0xddf7cd, .byte = 0x77 },
		{ .addr = 0x0ba42a, .byte = 0x06 },
		{ .addr = 0x0ba42b, .byte = 0x73 }
};

static const SST_Transaction orl_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 762920, .data = 26040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14546890, .data = 51488, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14546892, .data = 19283, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 762922, .data = 1651, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14546892, .data = 64375, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14546890, .data = 55615, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_3[] = {
		{ .addr = 0x19a0ee, .byte = 0x00 },
		{ .addr = 0x19a0ef, .byte = 0x97 },
		{ .addr = 0x19a0f0, .byte = 0x0c },
		{ .addr = 0x19a0f1, .byte = 0x94 },
		{ .addr = 0x19a0f2, .byte = 0x9e },
		{ .addr = 0x19a0f3, .byte = 0xc0 },
		{ .addr = 0x19a0f4, .byte = 0xa2 },
		{ .addr = 0x19a0f5, .byte = 0x66 },
		{ .addr = 0x86bec6, .byte = 0x77 },
		{ .addr = 0x86bec7, .byte = 0x05 },
		{ .addr = 0x86bec8, .byte = 0xc9 },
		{ .addr = 0x86bec9, .byte = 0x04 },
		{ .addr = 0x19a0f6, .byte = 0x50 },
		{ .addr = 0x19a0f7, .byte = 0x14 }
};

static const SST_RamByte orl_final_ram_3[] = {
		{ .addr = 0x19a0ee, .byte = 0x00 },
		{ .addr = 0x19a0ef, .byte = 0x97 },
		{ .addr = 0x19a0f0, .byte = 0x0c },
		{ .addr = 0x19a0f1, .byte = 0x94 },
		{ .addr = 0x19a0f2, .byte = 0x9e },
		{ .addr = 0x19a0f3, .byte = 0xc0 },
		{ .addr = 0x19a0f4, .byte = 0xa2 },
		{ .addr = 0x19a0f5, .byte = 0x66 },
		{ .addr = 0x86bec6, .byte = 0x7f },
		{ .addr = 0x86bec7, .byte = 0x95 },
		{ .addr = 0x86bec8, .byte = 0xdf },
		{ .addr = 0x86bec9, .byte = 0xc4 },
		{ .addr = 0x19a0f6, .byte = 0x50 },
		{ .addr = 0x19a0f7, .byte = 0x14 }
};

static const SST_Transaction orl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1679602, .data = 40640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1679604, .data = 41574, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8830662, .data = 30469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8830664, .data = 51460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1679606, .data = 20500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8830664, .data = 57284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8830662, .data = 32661, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_4[] = {
		{ .addr = 0xe509f8, .byte = 0x83 },
		{ .addr = 0xe509f9, .byte = 0xa7 },
		{ .addr = 0xe509fa, .byte = 0x2a },
		{ .addr = 0xe509fb, .byte = 0xa8 },
		{ .addr = 0xf49a0c, .byte = 0xc5 },
		{ .addr = 0xf49a0d, .byte = 0x50 },
		{ .addr = 0xf49a0e, .byte = 0x16 },
		{ .addr = 0xf49a0f, .byte = 0x13 },
		{ .addr = 0xe509fc, .byte = 0xe5 },
		{ .addr = 0xe509fd, .byte = 0x70 }
};

static const SST_RamByte orl_final_ram_4[] = {
		{ .addr = 0xe509f8, .byte = 0x83 },
		{ .addr = 0xe509f9, .byte = 0xa7 },
		{ .addr = 0xe509fa, .byte = 0x2a },
		{ .addr = 0xe509fb, .byte = 0xa8 },
		{ .addr = 0xf49a0c, .byte = 0xd7 },
		{ .addr = 0xf49a0d, .byte = 0x7a },
		{ .addr = 0xf49a0e, .byte = 0x5f },
		{ .addr = 0xf49a0f, .byte = 0x7b },
		{ .addr = 0xe509fc, .byte = 0xe5 },
		{ .addr = 0xe509fd, .byte = 0x70 }
};

static const SST_Transaction orl_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16030220, .data = 50512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16030222, .data = 5651, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15010300, .data = 58736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16030222, .data = 24443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16030220, .data = 55162, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_5[] = {
		{ .addr = 0xaff808, .byte = 0x89 },
		{ .addr = 0xaff809, .byte = 0xa0 },
		{ .addr = 0xaff80a, .byte = 0x37 },
		{ .addr = 0xaff80b, .byte = 0x7a },
		{ .addr = 0x735ccc, .byte = 0xcf },
		{ .addr = 0x735ccd, .byte = 0x9e },
		{ .addr = 0x735cce, .byte = 0xf9 },
		{ .addr = 0x735ccf, .byte = 0xac },
		{ .addr = 0xaff80c, .byte = 0xce },
		{ .addr = 0xaff80d, .byte = 0xc1 }
};

static const SST_RamByte orl_final_ram_5[] = {
		{ .addr = 0xaff808, .byte = 0x89 },
		{ .addr = 0xaff809, .byte = 0xa0 },
		{ .addr = 0xaff80a, .byte = 0x37 },
		{ .addr = 0xaff80b, .byte = 0x7a },
		{ .addr = 0x735ccc, .byte = 0xef },
		{ .addr = 0x735ccd, .byte = 0xde },
		{ .addr = 0x735cce, .byte = 0xff },
		{ .addr = 0x735ccf, .byte = 0xac },
		{ .addr = 0xaff80c, .byte = 0xce },
		{ .addr = 0xaff80d, .byte = 0xc1 }
};

static const SST_Transaction orl_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7560396, .data = 53150, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7560398, .data = 63916, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11532300, .data = 52929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7560398, .data = 65452, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7560396, .data = 61406, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_6[] = {
		{ .addr = 0xc17324, .byte = 0x8a },
		{ .addr = 0xc17325, .byte = 0xbb },
		{ .addr = 0xc17326, .byte = 0x6b },
		{ .addr = 0xc17327, .byte = 0xc6 },
		{ .addr = 0xc17328, .byte = 0xff },
		{ .addr = 0xc17329, .byte = 0x78 },
		{ .addr = 0xc3f186, .byte = 0x94 },
		{ .addr = 0xc3f187, .byte = 0x8b },
		{ .addr = 0xc3f188, .byte = 0x2b },
		{ .addr = 0xc3f189, .byte = 0x55 },
		{ .addr = 0xc1732a, .byte = 0x45 },
		{ .addr = 0xc1732b, .byte = 0xe1 }
};

static const SST_RamByte orl_final_ram_6[] = {
		{ .addr = 0xc17324, .byte = 0x8a },
		{ .addr = 0xc17325, .byte = 0xbb },
		{ .addr = 0xc17326, .byte = 0x6b },
		{ .addr = 0xc17327, .byte = 0xc6 },
		{ .addr = 0xc17328, .byte = 0xff },
		{ .addr = 0xc17329, .byte = 0x78 },
		{ .addr = 0xc3f186, .byte = 0x94 },
		{ .addr = 0xc3f187, .byte = 0x8b },
		{ .addr = 0xc3f188, .byte = 0x2b },
		{ .addr = 0xc3f189, .byte = 0x55 },
		{ .addr = 0xc1732a, .byte = 0x45 },
		{ .addr = 0xc1732b, .byte = 0xe1 }
};

static const SST_Transaction orl_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12677928, .data = 65400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12841350, .data = 38027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12841352, .data = 11093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12677930, .data = 17889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte orl_initial_ram_7[] = {
		{ .addr = 0x40d57e, .byte = 0x88 },
		{ .addr = 0x40d57f, .byte = 0xac },
		{ .addr = 0x40d580, .byte = 0xc7 },
		{ .addr = 0x40d581, .byte = 0xe6 },
		{ .addr = 0x40d582, .byte = 0x34 },
		{ .addr = 0x40d583, .byte = 0x16 },
		{ .addr = 0x00000c, .byte = 0x87 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x9a },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0xb29a1a, .byte = 0x3d },
		{ .addr = 0xb29a1b, .byte = 0xd2 },
		{ .addr = 0xb29a1c, .byte = 0xda },
		{ .addr = 0xb29a1d, .byte = 0x56 }
};

static const SST_RamByte orl_final_ram_7[] = {
		{ .addr = 0x40d57e, .byte = 0x88 },
		{ .addr = 0x40d57f, .byte = 0xac },
		{ .addr = 0x40d580, .byte = 0xc7 },
		{ .addr = 0x40d581, .byte = 0xe6 },
		{ .addr = 0x40d582, .byte = 0x34 },
		{ .addr = 0x40d583, .byte = 0x16 },
		{ .addr = 0xeefc9c, .byte = 0xd5 },
		{ .addr = 0xeefc9d, .byte = 0x80 },
		{ .addr = 0xeefc98, .byte = 0x82 },
		{ .addr = 0xeefc99, .byte = 0x18 },
		{ .addr = 0xeefc9a, .byte = 0x00 },
		{ .addr = 0xeefc9b, .byte = 0x40 },
		{ .addr = 0xeefc96, .byte = 0x88 },
		{ .addr = 0xeefc97, .byte = 0xac },
		{ .addr = 0xeefc94, .byte = 0x1a },
		{ .addr = 0xeefc95, .byte = 0xef },
		{ .addr = 0xeefc90, .byte = 0x88 },
		{ .addr = 0xeefc91, .byte = 0xb1 },
		{ .addr = 0xeefc92, .byte = 0xbb },
		{ .addr = 0xeefc93, .byte = 0xc3 },
		{ .addr = 0x00000c, .byte = 0x87 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x9a },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0xb29a1a, .byte = 0x3d },
		{ .addr = 0xb29a1b, .byte = 0xd2 },
		{ .addr = 0xb29a1c, .byte = 0xda },
		{ .addr = 0xb29a1d, .byte = 0x56 }
};

static const SST_Transaction orl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4248962, .data = 13334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12786414, .data = 34299, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15662236, .data = 54656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15662232, .data = 33304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15662234, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15662230, .data = 34988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15662228, .data = 6895, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15662224, .data = 34993, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15662226, .data = 48067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 39450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11704858, .data = 15826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11704860, .data = 55894, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_8[] = {
		{ .addr = 0xd1302c, .byte = 0x8c },
		{ .addr = 0xd1302d, .byte = 0xa5 },
		{ .addr = 0xd1302e, .byte = 0x18 },
		{ .addr = 0xd1302f, .byte = 0xab },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0x88 },
		{ .addr = 0x00000e, .byte = 0x01 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x880148, .byte = 0x21 },
		{ .addr = 0x880149, .byte = 0x38 },
		{ .addr = 0x88014a, .byte = 0x25 },
		{ .addr = 0x88014b, .byte = 0xa8 }
};

static const SST_RamByte orl_final_ram_8[] = {
		{ .addr = 0xd1302c, .byte = 0x8c },
		{ .addr = 0xd1302d, .byte = 0xa5 },
		{ .addr = 0xd1302e, .byte = 0x18 },
		{ .addr = 0xd1302f, .byte = 0xab },
		{ .addr = 0x9e6cd4, .byte = 0x30 },
		{ .addr = 0x9e6cd5, .byte = 0x2e },
		{ .addr = 0x9e6cd0, .byte = 0x05 },
		{ .addr = 0x9e6cd1, .byte = 0x1d },
		{ .addr = 0x9e6cd2, .byte = 0x00 },
		{ .addr = 0x9e6cd3, .byte = 0xd1 },
		{ .addr = 0x9e6cce, .byte = 0x8c },
		{ .addr = 0x9e6ccf, .byte = 0xa5 },
		{ .addr = 0x9e6ccc, .byte = 0xaa },
		{ .addr = 0x9e6ccd, .byte = 0xcf },
		{ .addr = 0x9e6cc8, .byte = 0x8c },
		{ .addr = 0x9e6cc9, .byte = 0xb1 },
		{ .addr = 0x9e6cca, .byte = 0xae },
		{ .addr = 0x9e6ccb, .byte = 0x23 },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0x88 },
		{ .addr = 0x00000e, .byte = 0x01 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x880148, .byte = 0x21 },
		{ .addr = 0x880149, .byte = 0x38 },
		{ .addr = 0x88014a, .byte = 0x25 },
		{ .addr = 0x88014b, .byte = 0xa8 }
};

static const SST_Transaction orl_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2337486, .data = 42181, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10382548, .data = 12334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10382544, .data = 1309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10382546, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10382542, .data = 36005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10382540, .data = 43727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10382536, .data = 36017, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10382538, .data = 44579, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 328, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8913224, .data = 8504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8913226, .data = 9640, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_9[] = {
		{ .addr = 0x398ed0, .byte = 0x8a },
		{ .addr = 0x398ed1, .byte = 0x93 },
		{ .addr = 0x398ed2, .byte = 0x84 },
		{ .addr = 0x398ed3, .byte = 0xa5 },
		{ .addr = 0xa6ec84, .byte = 0xbf },
		{ .addr = 0xa6ec85, .byte = 0x62 },
		{ .addr = 0xa6ec86, .byte = 0x8f },
		{ .addr = 0xa6ec87, .byte = 0xd2 },
		{ .addr = 0x398ed4, .byte = 0x78 },
		{ .addr = 0x398ed5, .byte = 0x5e }
};

static const SST_RamByte orl_final_ram_9[] = {
		{ .addr = 0x398ed0, .byte = 0x8a },
		{ .addr = 0x398ed1, .byte = 0x93 },
		{ .addr = 0x398ed2, .byte = 0x84 },
		{ .addr = 0x398ed3, .byte = 0xa5 },
		{ .addr = 0xa6ec84, .byte = 0xbf },
		{ .addr = 0xa6ec85, .byte = 0x62 },
		{ .addr = 0xa6ec86, .byte = 0x8f },
		{ .addr = 0xa6ec87, .byte = 0xd2 },
		{ .addr = 0x398ed4, .byte = 0x78 },
		{ .addr = 0x398ed5, .byte = 0x5e }
};

static const SST_Transaction orl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10939524, .data = 48994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10939526, .data = 36818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3772116, .data = 30814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte orl_initial_ram_10[] = {
		{ .addr = 0x1d38ae, .byte = 0x8f },
		{ .addr = 0x1d38af, .byte = 0xb1 },
		{ .addr = 0x1d38b0, .byte = 0x2b },
		{ .addr = 0x1d38b1, .byte = 0x11 },
		{ .addr = 0x1d38b2, .byte = 0x5e },
		{ .addr = 0x1d38b3, .byte = 0xa1 },
		{ .addr = 0x00000c, .byte = 0x28 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x46dd44, .byte = 0x57 },
		{ .addr = 0x46dd45, .byte = 0x72 },
		{ .addr = 0x46dd46, .byte = 0x07 },
		{ .addr = 0x46dd47, .byte = 0x2c }
};

static const SST_RamByte orl_final_ram_10[] = {
		{ .addr = 0x1d38ae, .byte = 0x8f },
		{ .addr = 0x1d38af, .byte = 0xb1 },
		{ .addr = 0x1d38b0, .byte = 0x2b },
		{ .addr = 0x1d38b1, .byte = 0x11 },
		{ .addr = 0x1d38b2, .byte = 0x5e },
		{ .addr = 0x1d38b3, .byte = 0xa1 },
		{ .addr = 0x832928, .byte = 0x38 },
		{ .addr = 0x832929, .byte = 0xb0 },
		{ .addr = 0x832924, .byte = 0x84 },
		{ .addr = 0x832925, .byte = 0x1d },
		{ .addr = 0x832926, .byte = 0x00 },
		{ .addr = 0x832927, .byte = 0x1d },
		{ .addr = 0x832922, .byte = 0x8f },
		{ .addr = 0x832923, .byte = 0xb1 },
		{ .addr = 0x832920, .byte = 0xf5 },
		{ .addr = 0x832921, .byte = 0xfd },
		{ .addr = 0x83291c, .byte = 0x8f },
		{ .addr = 0x83291d, .byte = 0xb1 },
		{ .addr = 0x83291e, .byte = 0x66 },
		{ .addr = 0x83291f, .byte = 0xa9 },
		{ .addr = 0x00000c, .byte = 0x28 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x46dd44, .byte = 0x57 },
		{ .addr = 0x46dd45, .byte = 0x72 },
		{ .addr = 0x46dd46, .byte = 0x07 },
		{ .addr = 0x46dd47, .byte = 0x2c }
};

static const SST_Transaction orl_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1915058, .data = 24225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11138556, .data = 15846, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8595752, .data = 14512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8595748, .data = 33821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8595750, .data = 29, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8595746, .data = 36785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8595744, .data = 62973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8595740, .data = 36785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8595742, .data = 26281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 10310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4644164, .data = 22386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4644166, .data = 1836, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_11[] = {
		{ .addr = 0xe8fafa, .byte = 0x82 },
		{ .addr = 0xe8fafb, .byte = 0xba },
		{ .addr = 0xe8fafc, .byte = 0x5b },
		{ .addr = 0xe8fafd, .byte = 0xfc },
		{ .addr = 0xe8fafe, .byte = 0x1d },
		{ .addr = 0xe8faff, .byte = 0x2e },
		{ .addr = 0xe956f8, .byte = 0x2d },
		{ .addr = 0xe956f9, .byte = 0x60 },
		{ .addr = 0xe956fa, .byte = 0x26 },
		{ .addr = 0xe956fb, .byte = 0x22 },
		{ .addr = 0xe8fb00, .byte = 0xe4 },
		{ .addr = 0xe8fb01, .byte = 0x9b }
};

static const SST_RamByte orl_final_ram_11[] = {
		{ .addr = 0xe8fafa, .byte = 0x82 },
		{ .addr = 0xe8fafb, .byte = 0xba },
		{ .addr = 0xe8fafc, .byte = 0x5b },
		{ .addr = 0xe8fafd, .byte = 0xfc },
		{ .addr = 0xe8fafe, .byte = 0x1d },
		{ .addr = 0xe8faff, .byte = 0x2e },
		{ .addr = 0xe956f8, .byte = 0x2d },
		{ .addr = 0xe956f9, .byte = 0x60 },
		{ .addr = 0xe956fa, .byte = 0x26 },
		{ .addr = 0xe956fb, .byte = 0x22 },
		{ .addr = 0xe8fb00, .byte = 0xe4 },
		{ .addr = 0xe8fb01, .byte = 0x9b }
};

static const SST_Transaction orl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15268606, .data = 7470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15292152, .data = 11616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15292154, .data = 9762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15268608, .data = 58523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte orl_initial_ram_12[] = {
		{ .addr = 0x56d0de, .byte = 0x85 },
		{ .addr = 0x56d0df, .byte = 0xa6 },
		{ .addr = 0x56d0e0, .byte = 0xa1 },
		{ .addr = 0x56d0e1, .byte = 0xac },
		{ .addr = 0x00000c, .byte = 0x1d },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0xf3 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xeaf38a, .byte = 0x00 },
		{ .addr = 0xeaf38b, .byte = 0x6c },
		{ .addr = 0xeaf38c, .byte = 0x79 },
		{ .addr = 0xeaf38d, .byte = 0x23 }
};

static const SST_RamByte orl_final_ram_12[] = {
		{ .addr = 0x56d0de, .byte = 0x85 },
		{ .addr = 0x56d0df, .byte = 0xa6 },
		{ .addr = 0x56d0e0, .byte = 0xa1 },
		{ .addr = 0x56d0e1, .byte = 0xac },
		{ .addr = 0x8a4074, .byte = 0xd0 },
		{ .addr = 0x8a4075, .byte = 0xe0 },
		{ .addr = 0x8a4070, .byte = 0x83 },
		{ .addr = 0x8a4071, .byte = 0x10 },
		{ .addr = 0x8a4072, .byte = 0x00 },
		{ .addr = 0x8a4073, .byte = 0x56 },
		{ .addr = 0x8a406e, .byte = 0x85 },
		{ .addr = 0x8a406f, .byte = 0xa6 },
		{ .addr = 0x8a406c, .byte = 0x48 },
		{ .addr = 0x8a406d, .byte = 0x6b },
		{ .addr = 0x8a4068, .byte = 0x85 },
		{ .addr = 0x8a4069, .byte = 0xb1 },
		{ .addr = 0x8a406a, .byte = 0x3b },
		{ .addr = 0x8a406b, .byte = 0x17 },
		{ .addr = 0x00000c, .byte = 0x1d },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0xf3 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xeaf38a, .byte = 0x00 },
		{ .addr = 0xeaf38b, .byte = 0x6c },
		{ .addr = 0xeaf38c, .byte = 0x79 },
		{ .addr = 0xeaf38d, .byte = 0x23 }
};

static const SST_Transaction orl_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1525866, .data = 23946, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060468, .data = 53472, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060464, .data = 33552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060466, .data = 86, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060462, .data = 34214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060460, .data = 18539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060456, .data = 34225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060458, .data = 15127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 62346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15397770, .data = 108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15397772, .data = 31011, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_13[] = {
		{ .addr = 0xfe08c8, .byte = 0x8a },
		{ .addr = 0xfe08c9, .byte = 0xa8 },
		{ .addr = 0xfe08ca, .byte = 0x7f },
		{ .addr = 0xfe08cb, .byte = 0x23 },
		{ .addr = 0xfe08cc, .byte = 0x3c },
		{ .addr = 0xfe08cd, .byte = 0x59 },
		{ .addr = 0x1c43b0, .byte = 0xd6 },
		{ .addr = 0x1c43b1, .byte = 0xde },
		{ .addr = 0x1c43b2, .byte = 0x91 },
		{ .addr = 0x1c43b3, .byte = 0xd7 },
		{ .addr = 0xfe08ce, .byte = 0x3c },
		{ .addr = 0xfe08cf, .byte = 0xfc }
};

static const SST_RamByte orl_final_ram_13[] = {
		{ .addr = 0xfe08c8, .byte = 0x8a },
		{ .addr = 0xfe08c9, .byte = 0xa8 },
		{ .addr = 0xfe08ca, .byte = 0x7f },
		{ .addr = 0xfe08cb, .byte = 0x23 },
		{ .addr = 0xfe08cc, .byte = 0x3c },
		{ .addr = 0xfe08cd, .byte = 0x59 },
		{ .addr = 0x1c43b0, .byte = 0xd6 },
		{ .addr = 0x1c43b1, .byte = 0xde },
		{ .addr = 0x1c43b2, .byte = 0x91 },
		{ .addr = 0x1c43b3, .byte = 0xd7 },
		{ .addr = 0xfe08ce, .byte = 0x3c },
		{ .addr = 0xfe08cf, .byte = 0xfc }
};

static const SST_Transaction orl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16648396, .data = 15449, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1852336, .data = 55006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1852338, .data = 37335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16648398, .data = 15612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte orl_initial_ram_14[] = {
		{ .addr = 0xe4a49a, .byte = 0x8a },
		{ .addr = 0xe4a49b, .byte = 0xaf },
		{ .addr = 0xe4a49c, .byte = 0x68 },
		{ .addr = 0xe4a49d, .byte = 0xcd },
		{ .addr = 0xe4a49e, .byte = 0x36 },
		{ .addr = 0xe4a49f, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x08 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xee0852, .byte = 0xce },
		{ .addr = 0xee0853, .byte = 0x7e },
		{ .addr = 0xee0854, .byte = 0xb7 },
		{ .addr = 0xee0855, .byte = 0x9e }
};

static const SST_RamByte orl_final_ram_14[] = {
		{ .addr = 0xe4a49a, .byte = 0x8a },
		{ .addr = 0xe4a49b, .byte = 0xaf },
		{ .addr = 0xe4a49c, .byte = 0x68 },
		{ .addr = 0xe4a49d, .byte = 0xcd },
		{ .addr = 0xe4a49e, .byte = 0x36 },
		{ .addr = 0xe4a49f, .byte = 0x5e },
		{ .addr = 0x112f02, .byte = 0xa4 },
		{ .addr = 0x112f03, .byte = 0x9c },
		{ .addr = 0x112efe, .byte = 0xa0 },
		{ .addr = 0x112eff, .byte = 0x1a },
		{ .addr = 0x112f00, .byte = 0x00 },
		{ .addr = 0x112f01, .byte = 0xe4 },
		{ .addr = 0x112efc, .byte = 0x8a },
		{ .addr = 0x112efd, .byte = 0xaf },
		{ .addr = 0x112efa, .byte = 0x97 },
		{ .addr = 0x112efb, .byte = 0xd1 },
		{ .addr = 0x112ef6, .byte = 0x8a },
		{ .addr = 0x112ef7, .byte = 0xb5 },
		{ .addr = 0x112ef8, .byte = 0x00 },
		{ .addr = 0x112ef9, .byte = 0x11 },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x08 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0xee0852, .byte = 0xce },
		{ .addr = 0xee0853, .byte = 0x7e },
		{ .addr = 0xee0854, .byte = 0xb7 },
		{ .addr = 0xee0855, .byte = 0x9e }
};

static const SST_Transaction orl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14984350, .data = 13918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1152976, .data = 42445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1126146, .data = 42140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1126142, .data = 40986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1126144, .data = 228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1126140, .data = 35503, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1126138, .data = 38865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1126134, .data = 35509, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1126136, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 2130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15599698, .data = 52862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15599700, .data = 47006, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orl_initial_ram_15[] = {
		{ .addr = 0x09800e, .byte = 0x89 },
		{ .addr = 0x09800f, .byte = 0xa1 },
		{ .addr = 0x098010, .byte = 0x9d },
		{ .addr = 0x098011, .byte = 0x33 },
		{ .addr = 0x2d2b88, .byte = 0x63 },
		{ .addr = 0x2d2b89, .byte = 0x2e },
		{ .addr = 0x2d2b8a, .byte = 0x37 },
		{ .addr = 0x2d2b8b, .byte = 0xb3 },
		{ .addr = 0x098012, .byte = 0x9f },
		{ .addr = 0x098013, .byte = 0xf2 }
};

static const SST_RamByte orl_final_ram_15[] = {
		{ .addr = 0x09800e, .byte = 0x89 },
		{ .addr = 0x09800f, .byte = 0xa1 },
		{ .addr = 0x098010, .byte = 0x9d },
		{ .addr = 0x098011, .byte = 0x33 },
		{ .addr = 0x2d2b88, .byte = 0xe7 },
		{ .addr = 0x2d2b89, .byte = 0xaf },
		{ .addr = 0x2d2b8a, .byte = 0x77 },
		{ .addr = 0x2d2b8b, .byte = 0xb3 },
		{ .addr = 0x098012, .byte = 0x9f },
		{ .addr = 0x098013, .byte = 0xf2 }
};

static const SST_Transaction orl_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2960264, .data = 25390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2960266, .data = 14259, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 622610, .data = 40946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2960266, .data = 30643, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2960264, .data = 59311, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ORL_TEST_COUNT = 16;
static const SST_TestCase orl[] = {
	{
		.name = "000 OR.l D6, (d16, A1) 8da9",
		.initial = {
			.regs = {
				1564502885, 522926018, 1277966409, 3131410043, 4105120248, 3545769245, 1918636838, 1061832603, 2368253171, 1228958648, 1411119444, 2133901995, 1073622201, 855036054, 108252896, 12460134, 14092348, 1818, 5802578
			},
			.prefetch0 = 36265,
			.prefetch1 = 9292,
			.ram = orl_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1564502885, 522926018, 1277966409, 3131410043, 4105120248, 3545769245, 1918636838, 1061832603, 2368253171, 1228958648, 1411119444, 2133901995, 1073622201, 855036054, 108252896, 12460134, 14092348, 1808, 5802582
			},
			.prefetch0 = 51606,
			.prefetch1 = 60783,
			.ram = orl_final_ram_0,
			.ram_len = 12,
		},
		.transactions = orl_transactions_0,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "001 OR.l (d16, A3), D3 86ab",
		.initial = {
			.regs = {
				238666099, 2174281256, 1260703609, 2334525297, 4061581319, 1748927181, 497482681, 2673839966, 2809927764, 316199056, 3344556570, 1834687236, 1128693293, 2212182157, 1372217272, 12329988, 16284956, 42501, 190028
			},
			.prefetch0 = 34475,
			.prefetch1 = 40773,
			.ram = orl_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				238666099, 2174281256, 1260703609, 2334525297, 4061581319, 1748927181, 497482681, 2673839966, 2809927764, 316199056, 3344556570, 1834687236, 1128693293, 2212182157, 1372217272, 12329988, 16284942, 9733, 2807826340
			},
			.prefetch0 = 35738,
			.prefetch1 = 58211,
			.ram = orl_final_ram_1,
			.ram_len = 28,
		},
		.transactions = orl_transactions_1,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "002 OR.l D2, (d8, A4, Xn) 85b4",
		.initial = {
			.regs = {
				3251327061, 3938313772, 2571104375, 213103821, 856858365, 1503693776, 1424048795, 2771199480, 3992672884, 1723276654, 636687075, 3341993508, 2804341278, 2126958068, 664997563, 11423456, 4027442, 268, 762920
			},
			.prefetch0 = 34228,
			.prefetch1 = 38974,
			.ram = orl_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3251327061, 3938313772, 2571104375, 213103821, 856858365, 1503693776, 1424048795, 2771199480, 3992672884, 1723276654, 636687075, 3341993508, 2804341278, 2126958068, 664997563, 11423456, 4027442, 264, 762924
			},
			.prefetch0 = 26040,
			.prefetch1 = 1651,
			.ram = orl_final_ram_2,
			.ram_len = 12,
		},
		.transactions = orl_transactions_2,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "003 OR.l #, (A7) 0097",
		.initial = {
			.regs = {
				426519893, 1703873416, 1618518944, 831218124, 4280794282, 4229125107, 2897031744, 3147886458, 3834276138, 2105252383, 394421611, 2487023051, 1140123193, 1664829499, 3783997991, 4249868, 8830662, 9240, 1679602
			},
			.prefetch0 = 151,
			.prefetch1 = 3220,
			.ram = orl_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				426519893, 1703873416, 1618518944, 831218124, 4280794282, 4229125107, 2897031744, 3147886458, 3834276138, 2105252383, 394421611, 2487023051, 1140123193, 1664829499, 3783997991, 4249868, 8830662, 9232, 1679608
			},
			.prefetch0 = 41574,
			.prefetch1 = 20500,
			.ram = orl_final_ram_3,
			.ram_len = 14,
		},
		.transactions = orl_transactions_3,
		.transactions_len = 7,
		.lenght = 28,
	},
	{
		.name = "004 OR.l D1, -(A7) 83a7",
		.initial = {
			.regs = {
				2227618223, 3609877883, 3400321739, 648685703, 2222957174, 3071136987, 2156476687, 3599470076, 1483596367, 2463646621, 2171905881, 3271974327, 3356761753, 1423171983, 2080655105, 1670870, 16030224, 42004, 15010300
			},
			.prefetch0 = 33703,
			.prefetch1 = 10920,
			.ram = orl_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2227618223, 3609877883, 3400321739, 648685703, 2222957174, 3071136987, 2156476687, 3599470076, 1483596367, 2463646621, 2171905881, 3271974327, 3356761753, 1423171983, 2080655105, 1670870, 16030220, 42008, 15010302
			},
			.prefetch0 = 10920,
			.prefetch1 = 58736,
			.ram = orl_final_ram_4,
			.ram_len = 10,
		},
		.transactions = orl_transactions_4,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "005 OR.l D4, -(A0) 89a0",
		.initial = {
			.regs = {
				885478591, 2205199604, 1106518205, 1805688123, 752774956, 2000093759, 856696511, 4287886081, 1030970576, 3018872593, 1779642169, 1888000836, 2415942741, 269814200, 3046118512, 6065864, 9600524, 34333, 11532300
			},
			.prefetch0 = 35232,
			.prefetch1 = 14202,
			.ram = orl_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				885478591, 2205199604, 1106518205, 1805688123, 752774956, 2000093759, 856696511, 4287886081, 1030970572, 3018872593, 1779642169, 1888000836, 2415942741, 269814200, 3046118512, 6065864, 9600524, 34328, 11532302
			},
			.prefetch0 = 14202,
			.prefetch1 = 52929,
			.ram = orl_final_ram_5,
			.ram_len = 10,
		},
		.transactions = orl_transactions_5,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "006 OR.l (d8, PC, Xn), D5 8abb",
		.initial = {
			.regs = {
				1300845535, 1537196250, 2355358293, 549717074, 2558786028, 2297858205, 906133146, 1888772989, 809061713, 1638684199, 1583028070, 4050665643, 4222544428, 3272632036, 1964021873, 2897284, 15341416, 799, 12677928
			},
			.prefetch0 = 35515,
			.prefetch1 = 27590,
			.ram = orl_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1300845535, 1537196250, 2355358293, 549717074, 2558786028, 2634001373, 906133146, 1888772989, 809061713, 1638684199, 1583028070, 4050665643, 4222544428, 3272632036, 1964021873, 2897284, 15341416, 792, 12677932
			},
			.prefetch0 = 65400,
			.prefetch1 = 17889,
			.ram = orl_final_ram_6,
			.ram_len = 12,
		},
		.transactions = orl_transactions_6,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "007 OR.l (d16, A4), D4 88ac",
		.initial = {
			.regs = {
				3435253195, 153188553, 3085326789, 3336151588, 476802600, 3701433929, 4236165567, 4273191276, 3020931668, 2017471265, 246128098, 2440698351, 3150140169, 2045319491, 220428725, 8835890, 15662238, 33304, 4248962
			},
			.prefetch0 = 34988,
			.prefetch1 = 51174,
			.ram = orl_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3435253195, 153188553, 3085326789, 3336151588, 476802600, 3701433929, 4236165567, 4273191276, 3020931668, 2017471265, 246128098, 2440698351, 3150140169, 2045319491, 220428725, 8835890, 15662224, 8728, 2276629022
			},
			.prefetch0 = 15826,
			.prefetch1 = 55894,
			.ram = orl_final_ram_7,
			.ram_len = 28,
		},
		.transactions = orl_transactions_7,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "008 OR.l -(A5), D6 8ca5",
		.initial = {
			.regs = {
				3375827240, 568918072, 2419929372, 1530143837, 263543714, 668090890, 664508302, 2763951620, 2176249536, 3808997922, 346593429, 3396759982, 189901999, 2921573075, 3446329086, 8099022, 10382550, 1309, 13709360
			},
			.prefetch0 = 36005,
			.prefetch1 = 6315,
			.ram = orl_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3375827240, 568918072, 2419929372, 1530143837, 263543714, 668090890, 664508302, 2763951620, 2176249536, 3808997922, 346593429, 3396759982, 189901999, 2921573071, 3446329086, 8099022, 10382536, 9501, 1032323404
			},
			.prefetch0 = 8504,
			.prefetch1 = 9640,
			.ram = orl_final_ram_8,
			.ram_len = 26,
		},
		.transactions = orl_transactions_8,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "009 OR.l (A3), D5 8a93",
		.initial = {
			.regs = {
				2039376804, 701885192, 1714863321, 1552994506, 249843751, 2289369262, 723763551, 1982438248, 1633343735, 1778452072, 2692691342, 2007428228, 1426931690, 847553896, 3956458119, 4713058, 4512438, 41499, 3772116
			},
			.prefetch0 = 35475,
			.prefetch1 = 33957,
			.ram = orl_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2039376804, 701885192, 1714863321, 1552994506, 249843751, 3212283902, 723763551, 1982438248, 1633343735, 1778452072, 2692691342, 2007428228, 1426931690, 847553896, 3956458119, 4713058, 4512438, 41496, 3772118
			},
			.prefetch0 = 33957,
			.prefetch1 = 30814,
			.ram = orl_final_ram_9,
			.ram_len = 10,
		},
		.transactions = orl_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 OR.l D7, (d8, A1, Xn) 8fb1",
		.initial = {
			.regs = {
				1523231267, 3374326398, 2268956737, 814675734, 1522975008, 1191951838, 2204218670, 1526318553, 1471664395, 3748425131, 3058177254, 3289180749, 24420008, 1808767819, 3904528470, 2799290, 8595754, 33821, 1915058
			},
			.prefetch0 = 36785,
			.prefetch1 = 11025,
			.ram = orl_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1523231267, 3374326398, 2268956737, 814675734, 1522975008, 1191951838, 2204218670, 1526318553, 1471664395, 3748425131, 3058177254, 3289180749, 24420008, 1808767819, 3904528470, 2799290, 8595740, 9245, 675732808
			},
			.prefetch0 = 22386,
			.prefetch1 = 1836,
			.ram = orl_final_ram_10,
			.ram_len = 28,
		},
		.transactions = orl_transactions_10,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "011 OR.l (d16, PC), D1 82ba",
		.initial = {
			.regs = {
				2127662854, 1877448340, 789555740, 3127129889, 2383397486, 1528577244, 1569139145, 1272116210, 685779565, 671415761, 84799458, 2013325818, 3976215754, 2732601565, 2133614992, 1206378, 8985462, 41220, 15268606
			},
			.prefetch0 = 33466,
			.prefetch1 = 23548,
			.ram = orl_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2127662854, 1877456566, 789555740, 3127129889, 2383397486, 1528577244, 1569139145, 1272116210, 685779565, 671415761, 84799458, 2013325818, 3976215754, 2732601565, 2133614992, 1206378, 8985462, 41216, 15268610
			},
			.prefetch0 = 7470,
			.prefetch1 = 58523,
			.ram = orl_final_ram_11,
			.ram_len = 12,
		},
		.transactions = orl_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 OR.l D2, -(A6) 85a6",
		.initial = {
			.regs = {
				1576836145, 2027300109, 213365054, 3316289100, 3420987571, 338195820, 2086906830, 1628686938, 3347335737, 262571041, 234108217, 2265405502, 2244885139, 789819468, 991381615, 12731782, 9060470, 33552, 5689570
			},
			.prefetch0 = 34214,
			.prefetch1 = 41388,
			.ram = orl_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1576836145, 2027300109, 213365054, 3316289100, 3420987571, 338195820, 2086906830, 1628686938, 3347335737, 262571041, 234108217, 2265405502, 2244885139, 789819468, 991381611, 12731782, 9060456, 8976, 501937038
			},
			.prefetch0 = 108,
			.prefetch1 = 31011,
			.ram = orl_final_ram_12,
			.ram_len = 26,
		},
		.transactions = orl_transactions_12,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "013 OR.l (d16, A0), D5 8aa8",
		.initial = {
			.regs = {
				2764081991, 4190290519, 380772102, 1047777626, 2723461545, 1114004109, 2776687616, 2809695212, 3910911117, 167700350, 767265661, 2627917504, 1418221024, 1469010414, 232351599, 8719810, 3835006, 9997, 16648396
			},
			.prefetch0 = 35496,
			.prefetch1 = 32547,
			.ram = orl_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2764081991, 4190290519, 380772102, 1047777626, 2723461545, 3607026655, 2776687616, 2809695212, 3910911117, 167700350, 767265661, 2627917504, 1418221024, 1469010414, 232351599, 8719810, 3835006, 9992, 16648400
			},
			.prefetch0 = 15449,
			.prefetch1 = 15612,
			.ram = orl_final_ram_13,
			.ram_len = 12,
		},
		.transactions = orl_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 OR.l (d16, A7), D5 8aaf",
		.initial = {
			.regs = {
				768025803, 4034343078, 1349708030, 348119155, 1392360820, 2266026181, 1638420382, 993216365, 2346432991, 1655877852, 3003640926, 1920415070, 3033296900, 338038787, 1087062836, 8289672, 1126148, 40986, 14984350
			},
			.prefetch0 = 35503,
			.prefetch1 = 26829,
			.ram = orl_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				768025803, 4034343078, 1349708030, 348119155, 1392360820, 2266026181, 1638420382, 993216365, 2346432991, 1655877852, 3003640926, 1920415070, 3033296900, 338038787, 1087062836, 8289672, 1126134, 8218, 3438151766
			},
			.prefetch0 = 52862,
			.prefetch1 = 47006,
			.ram = orl_final_ram_14,
			.ram_len = 28,
		},
		.transactions = orl_transactions_14,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "015 OR.l D4, -(A1) 89a1",
		.initial = {
			.regs = {
				3093156961, 3184123976, 3815740014, 4003604254, 2759943074, 550178497, 2736660233, 1522136849, 2371805095, 3844942732, 2437859121, 1836067676, 1676522127, 3734532258, 1199245106, 4399894, 16059250, 40975, 622610
			},
			.prefetch0 = 35233,
			.prefetch1 = 40243,
			.ram = orl_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3093156961, 3184123976, 3815740014, 4003604254, 2759943074, 550178497, 2736660233, 1522136849, 2371805095, 3844942728, 2437859121, 1836067676, 1676522127, 3734532258, 1199245106, 4399894, 16059250, 40968, 622612
			},
			.prefetch0 = 40243,
			.prefetch1 = 40946,
			.ram = orl_final_ram_15,
			.ram_len = 10,
		},
		.transactions = orl_transactions_15,
		.transactions_len = 6,
		.lenght = 22,
	},
};

#endif /* RBT_ORL_H */