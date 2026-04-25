#ifndef RBT_NOP_H
#define RBT_NOP_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte nop_initial_ram_0[] = {
		{ .addr = 0x0de9e8, .byte = 0x4e },
		{ .addr = 0x0de9e9, .byte = 0x71 },
		{ .addr = 0x0de9ea, .byte = 0xd8 },
		{ .addr = 0x0de9eb, .byte = 0xb0 },
		{ .addr = 0x0de9ec, .byte = 0x32 },
		{ .addr = 0x0de9ed, .byte = 0x6b }
};

static const SST_RamByte nop_final_ram_0[] = {
		{ .addr = 0x0de9e8, .byte = 0x4e },
		{ .addr = 0x0de9e9, .byte = 0x71 },
		{ .addr = 0x0de9ea, .byte = 0xd8 },
		{ .addr = 0x0de9eb, .byte = 0xb0 },
		{ .addr = 0x0de9ec, .byte = 0x32 },
		{ .addr = 0x0de9ed, .byte = 0x6b }
};

static const SST_Transaction nop_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 911852, .data = 12907, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_1[] = {
		{ .addr = 0xef6a62, .byte = 0x4e },
		{ .addr = 0xef6a63, .byte = 0x71 },
		{ .addr = 0xef6a64, .byte = 0xa3 },
		{ .addr = 0xef6a65, .byte = 0xb6 },
		{ .addr = 0xef6a66, .byte = 0xdc },
		{ .addr = 0xef6a67, .byte = 0xed }
};

static const SST_RamByte nop_final_ram_1[] = {
		{ .addr = 0xef6a62, .byte = 0x4e },
		{ .addr = 0xef6a63, .byte = 0x71 },
		{ .addr = 0xef6a64, .byte = 0xa3 },
		{ .addr = 0xef6a65, .byte = 0xb6 },
		{ .addr = 0xef6a66, .byte = 0xdc },
		{ .addr = 0xef6a67, .byte = 0xed }
};

static const SST_Transaction nop_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15690342, .data = 56557, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_2[] = {
		{ .addr = 0xa89b5a, .byte = 0x4e },
		{ .addr = 0xa89b5b, .byte = 0x71 },
		{ .addr = 0xa89b5c, .byte = 0x7c },
		{ .addr = 0xa89b5d, .byte = 0x5d },
		{ .addr = 0xa89b5e, .byte = 0x92 },
		{ .addr = 0xa89b5f, .byte = 0x83 }
};

static const SST_RamByte nop_final_ram_2[] = {
		{ .addr = 0xa89b5a, .byte = 0x4e },
		{ .addr = 0xa89b5b, .byte = 0x71 },
		{ .addr = 0xa89b5c, .byte = 0x7c },
		{ .addr = 0xa89b5d, .byte = 0x5d },
		{ .addr = 0xa89b5e, .byte = 0x92 },
		{ .addr = 0xa89b5f, .byte = 0x83 }
};

static const SST_Transaction nop_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11049822, .data = 37507, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_3[] = {
		{ .addr = 0x735bc2, .byte = 0x4e },
		{ .addr = 0x735bc3, .byte = 0x71 },
		{ .addr = 0x735bc4, .byte = 0xc3 },
		{ .addr = 0x735bc5, .byte = 0xe3 },
		{ .addr = 0x735bc6, .byte = 0x1d },
		{ .addr = 0x735bc7, .byte = 0xfc }
};

static const SST_RamByte nop_final_ram_3[] = {
		{ .addr = 0x735bc2, .byte = 0x4e },
		{ .addr = 0x735bc3, .byte = 0x71 },
		{ .addr = 0x735bc4, .byte = 0xc3 },
		{ .addr = 0x735bc5, .byte = 0xe3 },
		{ .addr = 0x735bc6, .byte = 0x1d },
		{ .addr = 0x735bc7, .byte = 0xfc }
};

static const SST_Transaction nop_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7560134, .data = 7676, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_4[] = {
		{ .addr = 0xac7ec6, .byte = 0x4e },
		{ .addr = 0xac7ec7, .byte = 0x71 },
		{ .addr = 0xac7ec8, .byte = 0xfb },
		{ .addr = 0xac7ec9, .byte = 0x42 },
		{ .addr = 0xac7eca, .byte = 0x54 },
		{ .addr = 0xac7ecb, .byte = 0x03 }
};

static const SST_RamByte nop_final_ram_4[] = {
		{ .addr = 0xac7ec6, .byte = 0x4e },
		{ .addr = 0xac7ec7, .byte = 0x71 },
		{ .addr = 0xac7ec8, .byte = 0xfb },
		{ .addr = 0xac7ec9, .byte = 0x42 },
		{ .addr = 0xac7eca, .byte = 0x54 },
		{ .addr = 0xac7ecb, .byte = 0x03 }
};

static const SST_Transaction nop_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11304650, .data = 21507, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_5[] = {
		{ .addr = 0xdae1dc, .byte = 0x4e },
		{ .addr = 0xdae1dd, .byte = 0x71 },
		{ .addr = 0xdae1de, .byte = 0x3f },
		{ .addr = 0xdae1df, .byte = 0x86 },
		{ .addr = 0xdae1e0, .byte = 0x66 },
		{ .addr = 0xdae1e1, .byte = 0x9c }
};

static const SST_RamByte nop_final_ram_5[] = {
		{ .addr = 0xdae1dc, .byte = 0x4e },
		{ .addr = 0xdae1dd, .byte = 0x71 },
		{ .addr = 0xdae1de, .byte = 0x3f },
		{ .addr = 0xdae1df, .byte = 0x86 },
		{ .addr = 0xdae1e0, .byte = 0x66 },
		{ .addr = 0xdae1e1, .byte = 0x9c }
};

static const SST_Transaction nop_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14344672, .data = 26268, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_6[] = {
		{ .addr = 0x2a8360, .byte = 0x4e },
		{ .addr = 0x2a8361, .byte = 0x71 },
		{ .addr = 0x2a8362, .byte = 0x6b },
		{ .addr = 0x2a8363, .byte = 0x6a },
		{ .addr = 0x2a8364, .byte = 0x16 },
		{ .addr = 0x2a8365, .byte = 0x01 }
};

static const SST_RamByte nop_final_ram_6[] = {
		{ .addr = 0x2a8360, .byte = 0x4e },
		{ .addr = 0x2a8361, .byte = 0x71 },
		{ .addr = 0x2a8362, .byte = 0x6b },
		{ .addr = 0x2a8363, .byte = 0x6a },
		{ .addr = 0x2a8364, .byte = 0x16 },
		{ .addr = 0x2a8365, .byte = 0x01 }
};

static const SST_Transaction nop_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2786148, .data = 5633, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_7[] = {
		{ .addr = 0xb54896, .byte = 0x4e },
		{ .addr = 0xb54897, .byte = 0x71 },
		{ .addr = 0xb54898, .byte = 0x27 },
		{ .addr = 0xb54899, .byte = 0x28 },
		{ .addr = 0xb5489a, .byte = 0x5c },
		{ .addr = 0xb5489b, .byte = 0xb5 }
};

static const SST_RamByte nop_final_ram_7[] = {
		{ .addr = 0xb54896, .byte = 0x4e },
		{ .addr = 0xb54897, .byte = 0x71 },
		{ .addr = 0xb54898, .byte = 0x27 },
		{ .addr = 0xb54899, .byte = 0x28 },
		{ .addr = 0xb5489a, .byte = 0x5c },
		{ .addr = 0xb5489b, .byte = 0xb5 }
};

static const SST_Transaction nop_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11880602, .data = 23733, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_8[] = {
		{ .addr = 0x0d599e, .byte = 0x4e },
		{ .addr = 0x0d599f, .byte = 0x71 },
		{ .addr = 0x0d59a0, .byte = 0x8e },
		{ .addr = 0x0d59a1, .byte = 0x23 },
		{ .addr = 0x0d59a2, .byte = 0x03 },
		{ .addr = 0x0d59a3, .byte = 0xf6 }
};

static const SST_RamByte nop_final_ram_8[] = {
		{ .addr = 0x0d599e, .byte = 0x4e },
		{ .addr = 0x0d599f, .byte = 0x71 },
		{ .addr = 0x0d59a0, .byte = 0x8e },
		{ .addr = 0x0d59a1, .byte = 0x23 },
		{ .addr = 0x0d59a2, .byte = 0x03 },
		{ .addr = 0x0d59a3, .byte = 0xf6 }
};

static const SST_Transaction nop_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 874914, .data = 1014, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_9[] = {
		{ .addr = 0x012a62, .byte = 0x4e },
		{ .addr = 0x012a63, .byte = 0x71 },
		{ .addr = 0x012a64, .byte = 0x60 },
		{ .addr = 0x012a65, .byte = 0xf1 },
		{ .addr = 0x012a66, .byte = 0xa1 },
		{ .addr = 0x012a67, .byte = 0x06 }
};

static const SST_RamByte nop_final_ram_9[] = {
		{ .addr = 0x012a62, .byte = 0x4e },
		{ .addr = 0x012a63, .byte = 0x71 },
		{ .addr = 0x012a64, .byte = 0x60 },
		{ .addr = 0x012a65, .byte = 0xf1 },
		{ .addr = 0x012a66, .byte = 0xa1 },
		{ .addr = 0x012a67, .byte = 0x06 }
};

static const SST_Transaction nop_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 76390, .data = 41222, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_10[] = {
		{ .addr = 0xb8ebce, .byte = 0x4e },
		{ .addr = 0xb8ebcf, .byte = 0x71 },
		{ .addr = 0xb8ebd0, .byte = 0xb0 },
		{ .addr = 0xb8ebd1, .byte = 0xa7 },
		{ .addr = 0xb8ebd2, .byte = 0xda },
		{ .addr = 0xb8ebd3, .byte = 0xb4 }
};

static const SST_RamByte nop_final_ram_10[] = {
		{ .addr = 0xb8ebce, .byte = 0x4e },
		{ .addr = 0xb8ebcf, .byte = 0x71 },
		{ .addr = 0xb8ebd0, .byte = 0xb0 },
		{ .addr = 0xb8ebd1, .byte = 0xa7 },
		{ .addr = 0xb8ebd2, .byte = 0xda },
		{ .addr = 0xb8ebd3, .byte = 0xb4 }
};

static const SST_Transaction nop_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12118994, .data = 55988, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_11[] = {
		{ .addr = 0x03903a, .byte = 0x4e },
		{ .addr = 0x03903b, .byte = 0x71 },
		{ .addr = 0x03903c, .byte = 0xd9 },
		{ .addr = 0x03903d, .byte = 0xee },
		{ .addr = 0x03903e, .byte = 0x57 },
		{ .addr = 0x03903f, .byte = 0xf3 }
};

static const SST_RamByte nop_final_ram_11[] = {
		{ .addr = 0x03903a, .byte = 0x4e },
		{ .addr = 0x03903b, .byte = 0x71 },
		{ .addr = 0x03903c, .byte = 0xd9 },
		{ .addr = 0x03903d, .byte = 0xee },
		{ .addr = 0x03903e, .byte = 0x57 },
		{ .addr = 0x03903f, .byte = 0xf3 }
};

static const SST_Transaction nop_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 233534, .data = 22515, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_12[] = {
		{ .addr = 0x659040, .byte = 0x4e },
		{ .addr = 0x659041, .byte = 0x71 },
		{ .addr = 0x659042, .byte = 0xc8 },
		{ .addr = 0x659043, .byte = 0xf4 },
		{ .addr = 0x659044, .byte = 0x8d },
		{ .addr = 0x659045, .byte = 0xf3 }
};

static const SST_RamByte nop_final_ram_12[] = {
		{ .addr = 0x659040, .byte = 0x4e },
		{ .addr = 0x659041, .byte = 0x71 },
		{ .addr = 0x659042, .byte = 0xc8 },
		{ .addr = 0x659043, .byte = 0xf4 },
		{ .addr = 0x659044, .byte = 0x8d },
		{ .addr = 0x659045, .byte = 0xf3 }
};

static const SST_Transaction nop_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6656068, .data = 36339, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_13[] = {
		{ .addr = 0xfa777e, .byte = 0x4e },
		{ .addr = 0xfa777f, .byte = 0x71 },
		{ .addr = 0xfa7780, .byte = 0x66 },
		{ .addr = 0xfa7781, .byte = 0x22 },
		{ .addr = 0xfa7782, .byte = 0xe5 },
		{ .addr = 0xfa7783, .byte = 0x7c }
};

static const SST_RamByte nop_final_ram_13[] = {
		{ .addr = 0xfa777e, .byte = 0x4e },
		{ .addr = 0xfa777f, .byte = 0x71 },
		{ .addr = 0xfa7780, .byte = 0x66 },
		{ .addr = 0xfa7781, .byte = 0x22 },
		{ .addr = 0xfa7782, .byte = 0xe5 },
		{ .addr = 0xfa7783, .byte = 0x7c }
};

static const SST_Transaction nop_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16414594, .data = 58748, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_14[] = {
		{ .addr = 0x63d424, .byte = 0x4e },
		{ .addr = 0x63d425, .byte = 0x71 },
		{ .addr = 0x63d426, .byte = 0xa3 },
		{ .addr = 0x63d427, .byte = 0xad },
		{ .addr = 0x63d428, .byte = 0xab },
		{ .addr = 0x63d429, .byte = 0x47 }
};

static const SST_RamByte nop_final_ram_14[] = {
		{ .addr = 0x63d424, .byte = 0x4e },
		{ .addr = 0x63d425, .byte = 0x71 },
		{ .addr = 0x63d426, .byte = 0xa3 },
		{ .addr = 0x63d427, .byte = 0xad },
		{ .addr = 0x63d428, .byte = 0xab },
		{ .addr = 0x63d429, .byte = 0x47 }
};

static const SST_Transaction nop_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6542376, .data = 43847, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte nop_initial_ram_15[] = {
		{ .addr = 0x2b3e7c, .byte = 0x4e },
		{ .addr = 0x2b3e7d, .byte = 0x71 },
		{ .addr = 0x2b3e7e, .byte = 0xad },
		{ .addr = 0x2b3e7f, .byte = 0x07 },
		{ .addr = 0x2b3e80, .byte = 0xae },
		{ .addr = 0x2b3e81, .byte = 0x63 }
};

static const SST_RamByte nop_final_ram_15[] = {
		{ .addr = 0x2b3e7c, .byte = 0x4e },
		{ .addr = 0x2b3e7d, .byte = 0x71 },
		{ .addr = 0x2b3e7e, .byte = 0xad },
		{ .addr = 0x2b3e7f, .byte = 0x07 },
		{ .addr = 0x2b3e80, .byte = 0xae },
		{ .addr = 0x2b3e81, .byte = 0x63 }
};

static const SST_Transaction nop_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2834048, .data = 44643, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NOP_TEST_COUNT = 16;
static const SST_TestCase nop[] = {
	{
		.name = "000 NOP 4e71",
		.initial = {
			.regs = {
				3852648315, 2469214665, 2500578360, 1291102260, 2316984846, 1285845352, 636284809, 3518498312, 572706894, 3955165096, 2355699420, 1579637945, 2322612306, 3835716544, 1363046691, 7532898, 2766466, 777, 911852
			},
			.prefetch0 = 20081,
			.prefetch1 = 55472,
			.ram = nop_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3852648315, 2469214665, 2500578360, 1291102260, 2316984846, 1285845352, 636284809, 3518498312, 572706894, 3955165096, 2355699420, 1579637945, 2322612306, 3835716544, 1363046691, 7532898, 2766466, 777, 911854
			},
			.prefetch0 = 55472,
			.prefetch1 = 12907,
			.ram = nop_final_ram_0,
			.ram_len = 6,
		},
		.transactions = nop_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 NOP 4e71",
		.initial = {
			.regs = {
				130039335, 3652843156, 239465659, 3216061182, 291528425, 1956953881, 776552213, 2552657501, 3411674231, 1674074947, 2040393186, 607946587, 1771838298, 3933828155, 3187790330, 6268688, 6149432, 8192, 15690342
			},
			.prefetch0 = 20081,
			.prefetch1 = 41910,
			.ram = nop_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				130039335, 3652843156, 239465659, 3216061182, 291528425, 1956953881, 776552213, 2552657501, 3411674231, 1674074947, 2040393186, 607946587, 1771838298, 3933828155, 3187790330, 6268688, 6149432, 8192, 15690344
			},
			.prefetch0 = 41910,
			.prefetch1 = 56557,
			.ram = nop_final_ram_1,
			.ram_len = 6,
		},
		.transactions = nop_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 NOP 4e71",
		.initial = {
			.regs = {
				2831832856, 2812927448, 3606907546, 817300109, 1166565742, 682001263, 3872732608, 3112109396, 1593300998, 2410771553, 3992223408, 446907293, 3777369077, 2142379148, 2970978254, 793362, 1495030, 777, 11049822
			},
			.prefetch0 = 20081,
			.prefetch1 = 31837,
			.ram = nop_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2831832856, 2812927448, 3606907546, 817300109, 1166565742, 682001263, 3872732608, 3112109396, 1593300998, 2410771553, 3992223408, 446907293, 3777369077, 2142379148, 2970978254, 793362, 1495030, 777, 11049824
			},
			.prefetch0 = 31837,
			.prefetch1 = 37507,
			.ram = nop_final_ram_2,
			.ram_len = 6,
		},
		.transactions = nop_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 NOP 4e71",
		.initial = {
			.regs = {
				2332000216, 2786774260, 4202665737, 2557567129, 306692162, 484737692, 961885775, 1893284471, 598527827, 1013693732, 746293501, 1197226323, 3179892124, 4078686538, 1271143279, 16202904, 6927398, 9223, 7560134
			},
			.prefetch0 = 20081,
			.prefetch1 = 50147,
			.ram = nop_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2332000216, 2786774260, 4202665737, 2557567129, 306692162, 484737692, 961885775, 1893284471, 598527827, 1013693732, 746293501, 1197226323, 3179892124, 4078686538, 1271143279, 16202904, 6927398, 9223, 7560136
			},
			.prefetch0 = 50147,
			.prefetch1 = 7676,
			.ram = nop_final_ram_3,
			.ram_len = 6,
		},
		.transactions = nop_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 NOP 4e71",
		.initial = {
			.regs = {
				3051127517, 2218614713, 1291028494, 237752839, 1575619314, 3781601954, 2493675945, 2593300246, 1068687572, 122880858, 1603926428, 2323279556, 3184263757, 30832401, 2700287839, 4973564, 1063406, 10004, 11304650
			},
			.prefetch0 = 20081,
			.prefetch1 = 64322,
			.ram = nop_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3051127517, 2218614713, 1291028494, 237752839, 1575619314, 3781601954, 2493675945, 2593300246, 1068687572, 122880858, 1603926428, 2323279556, 3184263757, 30832401, 2700287839, 4973564, 1063406, 10004, 11304652
			},
			.prefetch0 = 64322,
			.prefetch1 = 21507,
			.ram = nop_final_ram_4,
			.ram_len = 6,
		},
		.transactions = nop_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 NOP 4e71",
		.initial = {
			.regs = {
				1713624337, 3540395712, 469275207, 1785150444, 3322258607, 1226404115, 1617820304, 2660500891, 408563241, 738053951, 3050603026, 3726703015, 2049752052, 2895403110, 2063094083, 1116420, 5807840, 10011, 14344672
			},
			.prefetch0 = 20081,
			.prefetch1 = 16262,
			.ram = nop_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1713624337, 3540395712, 469275207, 1785150444, 3322258607, 1226404115, 1617820304, 2660500891, 408563241, 738053951, 3050603026, 3726703015, 2049752052, 2895403110, 2063094083, 1116420, 5807840, 10011, 14344674
			},
			.prefetch0 = 16262,
			.prefetch1 = 26268,
			.ram = nop_final_ram_5,
			.ram_len = 6,
		},
		.transactions = nop_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 NOP 4e71",
		.initial = {
			.regs = {
				516359562, 2923611313, 3302284055, 3245149655, 1530798123, 2305209990, 3039292117, 1144660810, 3106459413, 2019757666, 495979833, 2275565525, 2557010474, 3776576760, 3403610753, 3633486, 2950878, 8451, 2786148
			},
			.prefetch0 = 20081,
			.prefetch1 = 27498,
			.ram = nop_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				516359562, 2923611313, 3302284055, 3245149655, 1530798123, 2305209990, 3039292117, 1144660810, 3106459413, 2019757666, 495979833, 2275565525, 2557010474, 3776576760, 3403610753, 3633486, 2950878, 8451, 2786150
			},
			.prefetch0 = 27498,
			.prefetch1 = 5633,
			.ram = nop_final_ram_6,
			.ram_len = 6,
		},
		.transactions = nop_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 NOP 4e71",
		.initial = {
			.regs = {
				387180842, 826675615, 2301230261, 1687380571, 2646058996, 607385583, 2330032555, 3560769166, 2793573475, 1970349721, 2719951275, 1207256999, 3136090026, 3443282722, 3799160320, 5185754, 11404480, 34313, 11880602
			},
			.prefetch0 = 20081,
			.prefetch1 = 10024,
			.ram = nop_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				387180842, 826675615, 2301230261, 1687380571, 2646058996, 607385583, 2330032555, 3560769166, 2793573475, 1970349721, 2719951275, 1207256999, 3136090026, 3443282722, 3799160320, 5185754, 11404480, 34313, 11880604
			},
			.prefetch0 = 10024,
			.prefetch1 = 23733,
			.ram = nop_final_ram_7,
			.ram_len = 6,
		},
		.transactions = nop_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 NOP 4e71",
		.initial = {
			.regs = {
				3505352125, 2440872533, 16708900, 200767812, 3630543128, 3080849654, 3656085494, 4137783534, 339401327, 3555931733, 527742329, 4150447942, 2912974550, 2726990809, 1642959691, 2562938, 9897626, 780, 874914
			},
			.prefetch0 = 20081,
			.prefetch1 = 36387,
			.ram = nop_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3505352125, 2440872533, 16708900, 200767812, 3630543128, 3080849654, 3656085494, 4137783534, 339401327, 3555931733, 527742329, 4150447942, 2912974550, 2726990809, 1642959691, 2562938, 9897626, 780, 874916
			},
			.prefetch0 = 36387,
			.prefetch1 = 1014,
			.ram = nop_final_ram_8,
			.ram_len = 6,
		},
		.transactions = nop_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 NOP 4e71",
		.initial = {
			.regs = {
				3886409438, 7506934, 215713666, 2199947400, 302844160, 4166559671, 297100566, 3736503841, 1915596187, 1566709162, 1949720299, 1116580331, 3268972851, 3460429174, 432367783, 9874340, 8958472, 34050, 76390
			},
			.prefetch0 = 20081,
			.prefetch1 = 24817,
			.ram = nop_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3886409438, 7506934, 215713666, 2199947400, 302844160, 4166559671, 297100566, 3736503841, 1915596187, 1566709162, 1949720299, 1116580331, 3268972851, 3460429174, 432367783, 9874340, 8958472, 34050, 76392
			},
			.prefetch0 = 24817,
			.prefetch1 = 41222,
			.ram = nop_final_ram_9,
			.ram_len = 6,
		},
		.transactions = nop_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 NOP 4e71",
		.initial = {
			.regs = {
				41302727, 3621865034, 3444665136, 3525932795, 2419000843, 2165611557, 2400371298, 24682150, 1145479152, 2853683361, 1183040970, 3087234881, 3014751107, 1919988756, 2516026754, 4163498, 11152124, 42780, 12118994
			},
			.prefetch0 = 20081,
			.prefetch1 = 45223,
			.ram = nop_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				41302727, 3621865034, 3444665136, 3525932795, 2419000843, 2165611557, 2400371298, 24682150, 1145479152, 2853683361, 1183040970, 3087234881, 3014751107, 1919988756, 2516026754, 4163498, 11152124, 42780, 12118996
			},
			.prefetch0 = 45223,
			.prefetch1 = 55988,
			.ram = nop_final_ram_10,
			.ram_len = 6,
		},
		.transactions = nop_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 NOP 4e71",
		.initial = {
			.regs = {
				2061437790, 1866087919, 4267739759, 2860360989, 2868646513, 2135430011, 1435403542, 218603030, 2077282954, 915746478, 422789736, 745627936, 4091465036, 613372100, 2679179039, 14747654, 16061356, 9502, 233534
			},
			.prefetch0 = 20081,
			.prefetch1 = 55790,
			.ram = nop_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2061437790, 1866087919, 4267739759, 2860360989, 2868646513, 2135430011, 1435403542, 218603030, 2077282954, 915746478, 422789736, 745627936, 4091465036, 613372100, 2679179039, 14747654, 16061356, 9502, 233536
			},
			.prefetch0 = 55790,
			.prefetch1 = 22515,
			.ram = nop_final_ram_11,
			.ram_len = 6,
		},
		.transactions = nop_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 NOP 4e71",
		.initial = {
			.regs = {
				1380734692, 3929364985, 4176730921, 2776082308, 3898863238, 87574728, 3918551801, 7106869, 3396741004, 2981181431, 3201113656, 181975074, 2062816786, 480202798, 1435373223, 9990830, 10217218, 32774, 6656068
			},
			.prefetch0 = 20081,
			.prefetch1 = 51444,
			.ram = nop_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1380734692, 3929364985, 4176730921, 2776082308, 3898863238, 87574728, 3918551801, 7106869, 3396741004, 2981181431, 3201113656, 181975074, 2062816786, 480202798, 1435373223, 9990830, 10217218, 32774, 6656070
			},
			.prefetch0 = 51444,
			.prefetch1 = 36339,
			.ram = nop_final_ram_12,
			.ram_len = 6,
		},
		.transactions = nop_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 NOP 4e71",
		.initial = {
			.regs = {
				992049599, 2075637783, 1380232520, 4098510749, 1921005355, 779184830, 3884096279, 541718845, 3388421532, 1192529890, 3399406875, 543540574, 2453951081, 175702558, 1185248714, 16437268, 12574778, 9999, 16414594
			},
			.prefetch0 = 20081,
			.prefetch1 = 26146,
			.ram = nop_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				992049599, 2075637783, 1380232520, 4098510749, 1921005355, 779184830, 3884096279, 541718845, 3388421532, 1192529890, 3399406875, 543540574, 2453951081, 175702558, 1185248714, 16437268, 12574778, 9999, 16414596
			},
			.prefetch0 = 26146,
			.prefetch1 = 58748,
			.ram = nop_final_ram_13,
			.ram_len = 6,
		},
		.transactions = nop_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 NOP 4e71",
		.initial = {
			.regs = {
				1941979283, 153967011, 1950205243, 3021438902, 1990180, 1879665807, 76530433, 3342686412, 2327306706, 1280943565, 1877897548, 2896662598, 751841939, 3785877237, 3592581742, 11184098, 15367636, 33547, 6542376
			},
			.prefetch0 = 20081,
			.prefetch1 = 41901,
			.ram = nop_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1941979283, 153967011, 1950205243, 3021438902, 1990180, 1879665807, 76530433, 3342686412, 2327306706, 1280943565, 1877897548, 2896662598, 751841939, 3785877237, 3592581742, 11184098, 15367636, 33547, 6542378
			},
			.prefetch0 = 41901,
			.prefetch1 = 43847,
			.ram = nop_final_ram_14,
			.ram_len = 6,
		},
		.transactions = nop_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 NOP 4e71",
		.initial = {
			.regs = {
				3026984379, 3205710719, 784703790, 358474592, 585076377, 3156380669, 3007594099, 1540549111, 512821319, 1417203221, 3794880522, 292643272, 1036620320, 178562200, 3077638117, 1731146, 12907550, 1546, 2834048
			},
			.prefetch0 = 20081,
			.prefetch1 = 44295,
			.ram = nop_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3026984379, 3205710719, 784703790, 358474592, 585076377, 3156380669, 3007594099, 1540549111, 512821319, 1417203221, 3794880522, 292643272, 1036620320, 178562200, 3077638117, 1731146, 12907550, 1546, 2834050
			},
			.prefetch0 = 44295,
			.prefetch1 = 44643,
			.ram = nop_final_ram_15,
			.ram_len = 6,
		},
		.transactions = nop_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_NOP_H */