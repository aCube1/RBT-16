#ifndef RBT_MOVEW_H
#define RBT_MOVEW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte movew_initial_ram_0[] = {
		{ .addr = 0x277a2a, .byte = 0x34 },
		{ .addr = 0x277a2b, .byte = 0xc9 },
		{ .addr = 0x277a2c, .byte = 0x25 },
		{ .addr = 0x277a2d, .byte = 0x01 },
		{ .addr = 0x277a2e, .byte = 0xf9 },
		{ .addr = 0x277a2f, .byte = 0x0f }
};

static const SST_RamByte movew_final_ram_0[] = {
		{ .addr = 0x277a2a, .byte = 0x34 },
		{ .addr = 0x277a2b, .byte = 0xc9 },
		{ .addr = 0x277a2c, .byte = 0x25 },
		{ .addr = 0x277a2d, .byte = 0x01 },
		{ .addr = 0x1a7f4a, .byte = 0x32 },
		{ .addr = 0x1a7f4b, .byte = 0x3d },
		{ .addr = 0x277a2e, .byte = 0xf9 },
		{ .addr = 0x277a2f, .byte = 0x0f }
};

static const SST_Transaction movew_transactions_0[] = {
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1736522, .data = 12861, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2587182, .data = 63759, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_1[] = {
		{ .addr = 0x0e085e, .byte = 0x35 },
		{ .addr = 0x0e085f, .byte = 0xab },
		{ .addr = 0x0e0860, .byte = 0x34 },
		{ .addr = 0x0e0861, .byte = 0xf6 },
		{ .addr = 0x0e0862, .byte = 0x58 },
		{ .addr = 0x0e0863, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0xe2 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x72e254, .byte = 0xad },
		{ .addr = 0x72e255, .byte = 0x8f },
		{ .addr = 0x72e256, .byte = 0x8b },
		{ .addr = 0x72e257, .byte = 0x1a }
};

static const SST_RamByte movew_final_ram_1[] = {
		{ .addr = 0x0e085e, .byte = 0x35 },
		{ .addr = 0x0e085f, .byte = 0xab },
		{ .addr = 0x0e0860, .byte = 0x34 },
		{ .addr = 0x0e0861, .byte = 0xf6 },
		{ .addr = 0x0e0862, .byte = 0x58 },
		{ .addr = 0x0e0863, .byte = 0x2a },
		{ .addr = 0xe51018, .byte = 0x08 },
		{ .addr = 0xe51019, .byte = 0x60 },
		{ .addr = 0xe51014, .byte = 0xa7 },
		{ .addr = 0xe51015, .byte = 0x14 },
		{ .addr = 0xe51016, .byte = 0x00 },
		{ .addr = 0xe51017, .byte = 0x0e },
		{ .addr = 0xe51012, .byte = 0x35 },
		{ .addr = 0xe51013, .byte = 0xab },
		{ .addr = 0xe51010, .byte = 0xe4 },
		{ .addr = 0xe51011, .byte = 0x23 },
		{ .addr = 0xe5100c, .byte = 0x35 },
		{ .addr = 0xe5100d, .byte = 0xb5 },
		{ .addr = 0xe5100e, .byte = 0x25 },
		{ .addr = 0xe5100f, .byte = 0xa5 },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0xe2 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x72e254, .byte = 0xad },
		{ .addr = 0x72e255, .byte = 0x8f },
		{ .addr = 0x72e256, .byte = 0x8b },
		{ .addr = 0x72e257, .byte = 0x1a }
};

static const SST_Transaction movew_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 919650, .data = 22570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10871842, .data = 19747, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15011864, .data = 2144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15011860, .data = 42772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15011862, .data = 14, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15011858, .data = 13739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15011856, .data = 58403, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15011852, .data = 13749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15011854, .data = 9637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61298, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7529044, .data = 44431, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7529046, .data = 35610, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_2[] = {
		{ .addr = 0xa68782, .byte = 0x3a },
		{ .addr = 0xa68783, .byte = 0x9d },
		{ .addr = 0xa68784, .byte = 0x68 },
		{ .addr = 0xa68785, .byte = 0x90 },
		{ .addr = 0x4eedd0, .byte = 0x25 },
		{ .addr = 0x4eedd1, .byte = 0x98 },
		{ .addr = 0xa68786, .byte = 0x52 },
		{ .addr = 0xa68787, .byte = 0xfd }
};

static const SST_RamByte movew_final_ram_2[] = {
		{ .addr = 0xa68782, .byte = 0x3a },
		{ .addr = 0xa68783, .byte = 0x9d },
		{ .addr = 0xa68784, .byte = 0x68 },
		{ .addr = 0xa68785, .byte = 0x90 },
		{ .addr = 0x4eedd0, .byte = 0x25 },
		{ .addr = 0x4eedd1, .byte = 0x98 },
		{ .addr = 0x4eedd2, .byte = 0x25 },
		{ .addr = 0x4eedd3, .byte = 0x98 },
		{ .addr = 0xa68786, .byte = 0x52 },
		{ .addr = 0xa68787, .byte = 0xfd }
};

static const SST_Transaction movew_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5172688, .data = 9624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5172690, .data = 9624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10913670, .data = 21245, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_3[] = {
		{ .addr = 0xbb2eb2, .byte = 0x37 },
		{ .addr = 0xbb2eb3, .byte = 0x1f },
		{ .addr = 0xbb2eb4, .byte = 0x57 },
		{ .addr = 0xbb2eb5, .byte = 0x67 },
		{ .addr = 0x996f76, .byte = 0x5b },
		{ .addr = 0x996f77, .byte = 0xee },
		{ .addr = 0xbb2eb6, .byte = 0xa9 },
		{ .addr = 0xbb2eb7, .byte = 0x38 },
		{ .addr = 0x00000c, .byte = 0x2a },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0xa6 },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0x28a6ae, .byte = 0x23 },
		{ .addr = 0x28a6af, .byte = 0x9f },
		{ .addr = 0x28a6b0, .byte = 0x27 },
		{ .addr = 0x28a6b1, .byte = 0x17 }
};

static const SST_RamByte movew_final_ram_3[] = {
		{ .addr = 0xbb2eb2, .byte = 0x37 },
		{ .addr = 0xbb2eb3, .byte = 0x1f },
		{ .addr = 0xbb2eb4, .byte = 0x57 },
		{ .addr = 0xbb2eb5, .byte = 0x67 },
		{ .addr = 0x996f76, .byte = 0x2e },
		{ .addr = 0x996f77, .byte = 0xb6 },
		{ .addr = 0xbb2eb6, .byte = 0xa9 },
		{ .addr = 0xbb2eb7, .byte = 0x38 },
		{ .addr = 0x996f72, .byte = 0xa3 },
		{ .addr = 0x996f73, .byte = 0x00 },
		{ .addr = 0x996f74, .byte = 0x00 },
		{ .addr = 0x996f75, .byte = 0xbb },
		{ .addr = 0x996f70, .byte = 0x57 },
		{ .addr = 0x996f71, .byte = 0x67 },
		{ .addr = 0x996f6e, .byte = 0xd5 },
		{ .addr = 0x996f6f, .byte = 0x5d },
		{ .addr = 0x996f6a, .byte = 0x57 },
		{ .addr = 0x996f6b, .byte = 0x65 },
		{ .addr = 0x996f6c, .byte = 0x66 },
		{ .addr = 0x996f6d, .byte = 0xa3 },
		{ .addr = 0x00000c, .byte = 0x2a },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0xa6 },
		{ .addr = 0x00000f, .byte = 0xae },
		{ .addr = 0x28a6ae, .byte = 0x23 },
		{ .addr = 0x28a6af, .byte = 0x9f },
		{ .addr = 0x28a6b0, .byte = 0x27 },
		{ .addr = 0x28a6b1, .byte = 0x17 }
};

static const SST_Transaction movew_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055542, .data = 23534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12267190, .data = 43320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10736988, .data = 23534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055542, .data = 11958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055538, .data = 41728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055540, .data = 187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055536, .data = 22375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055534, .data = 54621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055530, .data = 22373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10055532, .data = 26275, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 10792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2664110, .data = 9119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2664112, .data = 10007, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_4[] = {
		{ .addr = 0x1c17ea, .byte = 0x3a },
		{ .addr = 0x1c17eb, .byte = 0x83 },
		{ .addr = 0x1c17ec, .byte = 0xe9 },
		{ .addr = 0x1c17ed, .byte = 0xcd },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x88 },
		{ .addr = 0x00000e, .byte = 0x20 },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x882016, .byte = 0x08 },
		{ .addr = 0x882017, .byte = 0xe8 },
		{ .addr = 0x882018, .byte = 0xd7 },
		{ .addr = 0x882019, .byte = 0xdf }
};

static const SST_RamByte movew_final_ram_4[] = {
		{ .addr = 0x1c17ea, .byte = 0x3a },
		{ .addr = 0x1c17eb, .byte = 0x83 },
		{ .addr = 0x1c17ec, .byte = 0xe9 },
		{ .addr = 0x1c17ed, .byte = 0xcd },
		{ .addr = 0xb8707c, .byte = 0x17 },
		{ .addr = 0xb8707d, .byte = 0xee },
		{ .addr = 0xb87078, .byte = 0xa1 },
		{ .addr = 0xb87079, .byte = 0x10 },
		{ .addr = 0xb8707a, .byte = 0x00 },
		{ .addr = 0xb8707b, .byte = 0x1c },
		{ .addr = 0xb87076, .byte = 0x3a },
		{ .addr = 0xb87077, .byte = 0x83 },
		{ .addr = 0xb87074, .byte = 0x56 },
		{ .addr = 0xb87075, .byte = 0x61 },
		{ .addr = 0xb87070, .byte = 0x3a },
		{ .addr = 0xb87071, .byte = 0x85 },
		{ .addr = 0xb87072, .byte = 0xb3 },
		{ .addr = 0xb87073, .byte = 0xcb },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x88 },
		{ .addr = 0x00000e, .byte = 0x20 },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x882016, .byte = 0x08 },
		{ .addr = 0x882017, .byte = 0xe8 },
		{ .addr = 0x882018, .byte = 0xd7 },
		{ .addr = 0x882019, .byte = 0xdf }
};

static const SST_Transaction movew_transactions_4[] = {
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13325920, .data = 4219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087420, .data = 6126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087416, .data = 41232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087418, .data = 28, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087414, .data = 14979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087412, .data = 22113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087408, .data = 14981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12087410, .data = 46027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8921110, .data = 2280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8921112, .data = 55263, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_5[] = {
		{ .addr = 0xdf304a, .byte = 0x38 },
		{ .addr = 0xdf304b, .byte = 0xf9 },
		{ .addr = 0xdf304c, .byte = 0x0b },
		{ .addr = 0xdf304d, .byte = 0x7a },
		{ .addr = 0xdf304e, .byte = 0x6e },
		{ .addr = 0xdf304f, .byte = 0x7a },
		{ .addr = 0xdf3050, .byte = 0x8b },
		{ .addr = 0xdf3051, .byte = 0x16 },
		{ .addr = 0x7a6e7a, .byte = 0x21 },
		{ .addr = 0x7a6e7b, .byte = 0xd0 },
		{ .addr = 0xdf3052, .byte = 0x48 },
		{ .addr = 0xdf3053, .byte = 0x00 }
};

static const SST_RamByte movew_final_ram_5[] = {
		{ .addr = 0xdf304a, .byte = 0x38 },
		{ .addr = 0xdf304b, .byte = 0xf9 },
		{ .addr = 0xdf304c, .byte = 0x0b },
		{ .addr = 0xdf304d, .byte = 0x7a },
		{ .addr = 0xdf304e, .byte = 0x6e },
		{ .addr = 0xdf304f, .byte = 0x7a },
		{ .addr = 0xdf3050, .byte = 0x8b },
		{ .addr = 0xdf3051, .byte = 0x16 },
		{ .addr = 0x7a6e7a, .byte = 0x21 },
		{ .addr = 0x7a6e7b, .byte = 0xd0 },
		{ .addr = 0x67b856, .byte = 0x21 },
		{ .addr = 0x67b857, .byte = 0xd0 },
		{ .addr = 0xdf3052, .byte = 0x48 },
		{ .addr = 0xdf3053, .byte = 0x00 }
};

static const SST_Transaction movew_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14626894, .data = 28282, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14626896, .data = 35606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8023674, .data = 8656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6797398, .data = 8656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14626898, .data = 18432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_6[] = {
		{ .addr = 0x6fe5d2, .byte = 0x37 },
		{ .addr = 0x6fe5d3, .byte = 0xa7 },
		{ .addr = 0x6fe5d4, .byte = 0x7a },
		{ .addr = 0x6fe5d5, .byte = 0x8d },
		{ .addr = 0xd84cc0, .byte = 0xda },
		{ .addr = 0xd84cc1, .byte = 0xa9 },
		{ .addr = 0x6fe5d6, .byte = 0x3e },
		{ .addr = 0x6fe5d7, .byte = 0x1e },
		{ .addr = 0x00000c, .byte = 0x29 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0x969540, .byte = 0xf8 },
		{ .addr = 0x969541, .byte = 0x1d },
		{ .addr = 0x969542, .byte = 0xcb },
		{ .addr = 0x969543, .byte = 0x7a }
};

static const SST_RamByte movew_final_ram_6[] = {
		{ .addr = 0x6fe5d2, .byte = 0x37 },
		{ .addr = 0x6fe5d3, .byte = 0xa7 },
		{ .addr = 0x6fe5d4, .byte = 0x7a },
		{ .addr = 0x6fe5d5, .byte = 0x8d },
		{ .addr = 0xd84cc0, .byte = 0xda },
		{ .addr = 0xd84cc1, .byte = 0xa9 },
		{ .addr = 0x6fe5d6, .byte = 0x3e },
		{ .addr = 0x6fe5d7, .byte = 0x1e },
		{ .addr = 0xecd486, .byte = 0xe5 },
		{ .addr = 0xecd487, .byte = 0xd6 },
		{ .addr = 0xecd482, .byte = 0x82 },
		{ .addr = 0xecd483, .byte = 0x08 },
		{ .addr = 0xecd484, .byte = 0x00 },
		{ .addr = 0xecd485, .byte = 0x6f },
		{ .addr = 0xecd480, .byte = 0x37 },
		{ .addr = 0xecd481, .byte = 0xa7 },
		{ .addr = 0xecd47e, .byte = 0x5b },
		{ .addr = 0xecd47f, .byte = 0x4f },
		{ .addr = 0xecd47a, .byte = 0x37 },
		{ .addr = 0xecd47b, .byte = 0xa1 },
		{ .addr = 0xecd47c, .byte = 0x52 },
		{ .addr = 0xecd47d, .byte = 0x0c },
		{ .addr = 0x00000c, .byte = 0x29 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0x969540, .byte = 0xf8 },
		{ .addr = 0x969541, .byte = 0x1d },
		{ .addr = 0x969542, .byte = 0xcb },
		{ .addr = 0x969543, .byte = 0x7a }
};

static const SST_Transaction movew_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14175424, .data = 55977, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7333334, .data = 15902, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 809806, .data = 55977, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15520902, .data = 58838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15520898, .data = 33288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15520900, .data = 111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15520896, .data = 14247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15520894, .data = 23375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15520890, .data = 14241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15520892, .data = 21004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 10646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9868608, .data = 63517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9868610, .data = 52090, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_7[] = {
		{ .addr = 0x349e9a, .byte = 0x3c },
		{ .addr = 0x349e9b, .byte = 0x87 },
		{ .addr = 0x349e9c, .byte = 0x3c },
		{ .addr = 0x349e9d, .byte = 0x45 },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x92 },
		{ .addr = 0x00000e, .byte = 0x11 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x921198, .byte = 0xaa },
		{ .addr = 0x921199, .byte = 0x20 },
		{ .addr = 0x92119a, .byte = 0x95 },
		{ .addr = 0x92119b, .byte = 0x19 }
};

static const SST_RamByte movew_final_ram_7[] = {
		{ .addr = 0x349e9a, .byte = 0x3c },
		{ .addr = 0x349e9b, .byte = 0x87 },
		{ .addr = 0x349e9c, .byte = 0x3c },
		{ .addr = 0x349e9d, .byte = 0x45 },
		{ .addr = 0x6ee3de, .byte = 0x9e },
		{ .addr = 0x6ee3df, .byte = 0x9e },
		{ .addr = 0x6ee3da, .byte = 0x05 },
		{ .addr = 0x6ee3db, .byte = 0x10 },
		{ .addr = 0x6ee3dc, .byte = 0x00 },
		{ .addr = 0x6ee3dd, .byte = 0x34 },
		{ .addr = 0x6ee3d8, .byte = 0x3c },
		{ .addr = 0x6ee3d9, .byte = 0x87 },
		{ .addr = 0x6ee3d6, .byte = 0x6c },
		{ .addr = 0x6ee3d7, .byte = 0xff },
		{ .addr = 0x6ee3d2, .byte = 0x3c },
		{ .addr = 0x6ee3d3, .byte = 0x81 },
		{ .addr = 0x6ee3d4, .byte = 0xc8 },
		{ .addr = 0x6ee3d5, .byte = 0xfa },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x92 },
		{ .addr = 0x00000e, .byte = 0x11 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x921198, .byte = 0xaa },
		{ .addr = 0x921199, .byte = 0x20 },
		{ .addr = 0x92119a, .byte = 0x95 },
		{ .addr = 0x92119b, .byte = 0x19 }
};

static const SST_Transaction movew_transactions_7[] = {
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16411902, .data = 25418, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7267294, .data = 40606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7267290, .data = 1296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7267292, .data = 52, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7267288, .data = 15495, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7267286, .data = 27903, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7267282, .data = 15489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7267284, .data = 51450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9572760, .data = 43552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9572762, .data = 38169, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_8[] = {
		{ .addr = 0x7df10c, .byte = 0x3b },
		{ .addr = 0x7df10d, .byte = 0x61 },
		{ .addr = 0x7df10e, .byte = 0xc4 },
		{ .addr = 0x7df10f, .byte = 0x02 },
		{ .addr = 0x00000c, .byte = 0xf1 },
		{ .addr = 0x00000d, .byte = 0xc4 },
		{ .addr = 0x00000e, .byte = 0x34 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xc43454, .byte = 0x8b },
		{ .addr = 0xc43455, .byte = 0xf7 },
		{ .addr = 0xc43456, .byte = 0xe2 },
		{ .addr = 0xc43457, .byte = 0x93 }
};

static const SST_RamByte movew_final_ram_8[] = {
		{ .addr = 0x7df10c, .byte = 0x3b },
		{ .addr = 0x7df10d, .byte = 0x61 },
		{ .addr = 0x7df10e, .byte = 0xc4 },
		{ .addr = 0x7df10f, .byte = 0x02 },
		{ .addr = 0xcf3dd8, .byte = 0xf1 },
		{ .addr = 0xcf3dd9, .byte = 0x10 },
		{ .addr = 0xcf3dd4, .byte = 0x25 },
		{ .addr = 0xcf3dd5, .byte = 0x08 },
		{ .addr = 0xcf3dd6, .byte = 0x00 },
		{ .addr = 0xcf3dd7, .byte = 0x7d },
		{ .addr = 0xcf3dd2, .byte = 0x3b },
		{ .addr = 0xcf3dd3, .byte = 0x61 },
		{ .addr = 0xcf3dd0, .byte = 0xc3 },
		{ .addr = 0xcf3dd1, .byte = 0xef },
		{ .addr = 0xcf3dcc, .byte = 0x3b },
		{ .addr = 0xcf3dcd, .byte = 0x75 },
		{ .addr = 0xcf3dce, .byte = 0x85 },
		{ .addr = 0xcf3dcf, .byte = 0x3d },
		{ .addr = 0x00000c, .byte = 0xf1 },
		{ .addr = 0x00000d, .byte = 0xc4 },
		{ .addr = 0x00000e, .byte = 0x34 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xc43454, .byte = 0x8b },
		{ .addr = 0xc43455, .byte = 0xf7 },
		{ .addr = 0xc43456, .byte = 0xe2 },
		{ .addr = 0xc43457, .byte = 0x93 }
};

static const SST_Transaction movew_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4047854, .data = 9883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13581784, .data = 61712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13581780, .data = 9480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13581782, .data = 125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13581778, .data = 15201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13581776, .data = 50159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13581772, .data = 15221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13581774, .data = 34109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12858452, .data = 35831, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12858454, .data = 58003, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_9[] = {
		{ .addr = 0xab304a, .byte = 0x3a },
		{ .addr = 0xab304b, .byte = 0xae },
		{ .addr = 0xab304c, .byte = 0xa0 },
		{ .addr = 0xab304d, .byte = 0x72 },
		{ .addr = 0xab304e, .byte = 0x02 },
		{ .addr = 0xab304f, .byte = 0x12 },
		{ .addr = 0xcaa15c, .byte = 0xe7 },
		{ .addr = 0xcaa15d, .byte = 0x6a },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x5d },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x4a5de4, .byte = 0xc3 },
		{ .addr = 0x4a5de5, .byte = 0x65 },
		{ .addr = 0x4a5de6, .byte = 0x84 },
		{ .addr = 0x4a5de7, .byte = 0x5b }
};

static const SST_RamByte movew_final_ram_9[] = {
		{ .addr = 0xab304a, .byte = 0x3a },
		{ .addr = 0xab304b, .byte = 0xae },
		{ .addr = 0xab304c, .byte = 0xa0 },
		{ .addr = 0xab304d, .byte = 0x72 },
		{ .addr = 0xab304e, .byte = 0x02 },
		{ .addr = 0xab304f, .byte = 0x12 },
		{ .addr = 0xcaa15c, .byte = 0xe7 },
		{ .addr = 0xcaa15d, .byte = 0x6a },
		{ .addr = 0x46aa74, .byte = 0x30 },
		{ .addr = 0x46aa75, .byte = 0x50 },
		{ .addr = 0x46aa70, .byte = 0xa7 },
		{ .addr = 0x46aa71, .byte = 0x08 },
		{ .addr = 0x46aa72, .byte = 0x00 },
		{ .addr = 0x46aa73, .byte = 0xab },
		{ .addr = 0x46aa6e, .byte = 0x3a },
		{ .addr = 0x46aa6f, .byte = 0xae },
		{ .addr = 0x46aa6c, .byte = 0xe7 },
		{ .addr = 0x46aa6d, .byte = 0x2d },
		{ .addr = 0x46aa68, .byte = 0x3a },
		{ .addr = 0x46aa69, .byte = 0xa5 },
		{ .addr = 0x46aa6a, .byte = 0x5c },
		{ .addr = 0x46aa6b, .byte = 0x51 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x5d },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x4a5de4, .byte = 0xc3 },
		{ .addr = 0x4a5de5, .byte = 0x65 },
		{ .addr = 0x4a5de6, .byte = 0x84 },
		{ .addr = 0x4a5de7, .byte = 0x5b }
};

static const SST_Transaction movew_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11219022, .data = 530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13279580, .data = 59242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5367596, .data = 59242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4631156, .data = 12368, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4631152, .data = 42760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4631154, .data = 171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4631150, .data = 15022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4631148, .data = 59181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4631144, .data = 15013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4631146, .data = 23633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4873700, .data = 50021, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4873702, .data = 33883, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_10[] = {
		{ .addr = 0x4f6c2e, .byte = 0x31 },
		{ .addr = 0x4f6c2f, .byte = 0x4b },
		{ .addr = 0x4f6c30, .byte = 0x64 },
		{ .addr = 0x4f6c31, .byte = 0x7d },
		{ .addr = 0x4f6c32, .byte = 0xd0 },
		{ .addr = 0x4f6c33, .byte = 0xf5 },
		{ .addr = 0x4f6c34, .byte = 0x0a },
		{ .addr = 0x4f6c35, .byte = 0x42 }
};

static const SST_RamByte movew_final_ram_10[] = {
		{ .addr = 0x4f6c2e, .byte = 0x31 },
		{ .addr = 0x4f6c2f, .byte = 0x4b },
		{ .addr = 0x4f6c30, .byte = 0x64 },
		{ .addr = 0x4f6c31, .byte = 0x7d },
		{ .addr = 0x4f6c32, .byte = 0xd0 },
		{ .addr = 0x4f6c33, .byte = 0xf5 },
		{ .addr = 0xc37f58, .byte = 0xb9 },
		{ .addr = 0xc37f59, .byte = 0x33 },
		{ .addr = 0x4f6c34, .byte = 0x0a },
		{ .addr = 0x4f6c35, .byte = 0x42 }
};

static const SST_Transaction movew_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5205042, .data = 53493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12812120, .data = 47411, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5205044, .data = 2626, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_11[] = {
		{ .addr = 0xdd1a4e, .byte = 0x3f },
		{ .addr = 0xdd1a4f, .byte = 0x91 },
		{ .addr = 0xdd1a50, .byte = 0x3c },
		{ .addr = 0xdd1a51, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0x75 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x6a0746, .byte = 0x94 },
		{ .addr = 0x6a0747, .byte = 0x20 },
		{ .addr = 0x6a0748, .byte = 0x5a },
		{ .addr = 0x6a0749, .byte = 0xbb }
};

static const SST_RamByte movew_final_ram_11[] = {
		{ .addr = 0xdd1a4e, .byte = 0x3f },
		{ .addr = 0xdd1a4f, .byte = 0x91 },
		{ .addr = 0xdd1a50, .byte = 0x3c },
		{ .addr = 0xdd1a51, .byte = 0x97 },
		{ .addr = 0x8e9680, .byte = 0x1a },
		{ .addr = 0x8e9681, .byte = 0x50 },
		{ .addr = 0x8e967c, .byte = 0x24 },
		{ .addr = 0x8e967d, .byte = 0x12 },
		{ .addr = 0x8e967e, .byte = 0x00 },
		{ .addr = 0x8e967f, .byte = 0xdd },
		{ .addr = 0x8e967a, .byte = 0x3f },
		{ .addr = 0x8e967b, .byte = 0x91 },
		{ .addr = 0x8e9678, .byte = 0x16 },
		{ .addr = 0x8e9679, .byte = 0x0d },
		{ .addr = 0x8e9674, .byte = 0x3f },
		{ .addr = 0x8e9675, .byte = 0x95 },
		{ .addr = 0x8e9676, .byte = 0xe6 },
		{ .addr = 0x8e9677, .byte = 0xd5 },
		{ .addr = 0x00000c, .byte = 0x75 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x6a0746, .byte = 0x94 },
		{ .addr = 0x6a0747, .byte = 0x20 },
		{ .addr = 0x6a0748, .byte = 0x5a },
		{ .addr = 0x6a0749, .byte = 0xbb }
};

static const SST_Transaction movew_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13964812, .data = 34821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9344640, .data = 6736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9344636, .data = 9234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9344638, .data = 221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9344634, .data = 16273, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9344632, .data = 5645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9344628, .data = 16277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9344630, .data = 59093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 30058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6948678, .data = 37920, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6948680, .data = 23227, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_12[] = {
		{ .addr = 0x98b704, .byte = 0x34 },
		{ .addr = 0x98b705, .byte = 0x32 },
		{ .addr = 0x98b706, .byte = 0x33 },
		{ .addr = 0x98b707, .byte = 0x13 },
		{ .addr = 0x98b708, .byte = 0x1c },
		{ .addr = 0x98b709, .byte = 0xa7 },
		{ .addr = 0x4af004, .byte = 0xe1 },
		{ .addr = 0x4af005, .byte = 0x83 },
		{ .addr = 0x98b70a, .byte = 0x5a },
		{ .addr = 0x98b70b, .byte = 0xae }
};

static const SST_RamByte movew_final_ram_12[] = {
		{ .addr = 0x98b704, .byte = 0x34 },
		{ .addr = 0x98b705, .byte = 0x32 },
		{ .addr = 0x98b706, .byte = 0x33 },
		{ .addr = 0x98b707, .byte = 0x13 },
		{ .addr = 0x98b708, .byte = 0x1c },
		{ .addr = 0x98b709, .byte = 0xa7 },
		{ .addr = 0x4af004, .byte = 0xe1 },
		{ .addr = 0x4af005, .byte = 0x83 },
		{ .addr = 0x98b70a, .byte = 0x5a },
		{ .addr = 0x98b70b, .byte = 0xae }
};

static const SST_Transaction movew_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10008328, .data = 7335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4911108, .data = 57731, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10008330, .data = 23214, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_13[] = {
		{ .addr = 0x346c3c, .byte = 0x33 },
		{ .addr = 0x346c3d, .byte = 0x4d },
		{ .addr = 0x346c3e, .byte = 0xf7 },
		{ .addr = 0x346c3f, .byte = 0xa9 },
		{ .addr = 0x346c40, .byte = 0x69 },
		{ .addr = 0x346c41, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0xf2 },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0xf23afa, .byte = 0xc1 },
		{ .addr = 0xf23afb, .byte = 0x17 },
		{ .addr = 0xf23afc, .byte = 0x0a },
		{ .addr = 0xf23afd, .byte = 0x17 }
};

static const SST_RamByte movew_final_ram_13[] = {
		{ .addr = 0x346c3c, .byte = 0x33 },
		{ .addr = 0x346c3d, .byte = 0x4d },
		{ .addr = 0x346c3e, .byte = 0xf7 },
		{ .addr = 0x346c3f, .byte = 0xa9 },
		{ .addr = 0x346c40, .byte = 0x69 },
		{ .addr = 0x346c41, .byte = 0x32 },
		{ .addr = 0xb16bee, .byte = 0x6c },
		{ .addr = 0xb16bef, .byte = 0x40 },
		{ .addr = 0xb16bea, .byte = 0x24 },
		{ .addr = 0xb16beb, .byte = 0x10 },
		{ .addr = 0xb16bec, .byte = 0x00 },
		{ .addr = 0xb16bed, .byte = 0x34 },
		{ .addr = 0xb16be8, .byte = 0x33 },
		{ .addr = 0xb16be9, .byte = 0x4d },
		{ .addr = 0xb16be6, .byte = 0xf6 },
		{ .addr = 0xb16be7, .byte = 0xcf },
		{ .addr = 0xb16be2, .byte = 0x33 },
		{ .addr = 0xb16be3, .byte = 0x45 },
		{ .addr = 0xb16be4, .byte = 0xcb },
		{ .addr = 0xb16be5, .byte = 0xe8 },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0xf2 },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0xf23afa, .byte = 0xc1 },
		{ .addr = 0xf23afb, .byte = 0x17 },
		{ .addr = 0xf23afc, .byte = 0x0a },
		{ .addr = 0xf23afd, .byte = 0x17 }
};

static const SST_Transaction movew_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3435584, .data = 26930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15267534, .data = 13639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11627502, .data = 27712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11627498, .data = 9232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11627500, .data = 52, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11627496, .data = 13133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11627494, .data = 63183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11627490, .data = 13125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11627492, .data = 52200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45554, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15874810, .data = 49431, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15874812, .data = 2583, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_14[] = {
		{ .addr = 0xd31478, .byte = 0x32 },
		{ .addr = 0xd31479, .byte = 0x24 },
		{ .addr = 0xd3147a, .byte = 0x84 },
		{ .addr = 0xd3147b, .byte = 0xc5 },
		{ .addr = 0x00000c, .byte = 0xc5 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x7ee050, .byte = 0xb2 },
		{ .addr = 0x7ee051, .byte = 0xff },
		{ .addr = 0x7ee052, .byte = 0x18 },
		{ .addr = 0x7ee053, .byte = 0x45 }
};

static const SST_RamByte movew_final_ram_14[] = {
		{ .addr = 0xd31478, .byte = 0x32 },
		{ .addr = 0xd31479, .byte = 0x24 },
		{ .addr = 0xd3147a, .byte = 0x84 },
		{ .addr = 0xd3147b, .byte = 0xc5 },
		{ .addr = 0x379b16, .byte = 0x14 },
		{ .addr = 0x379b17, .byte = 0x7c },
		{ .addr = 0x379b12, .byte = 0x83 },
		{ .addr = 0x379b13, .byte = 0x09 },
		{ .addr = 0x379b14, .byte = 0x00 },
		{ .addr = 0x379b15, .byte = 0xd3 },
		{ .addr = 0x379b10, .byte = 0x32 },
		{ .addr = 0x379b11, .byte = 0x24 },
		{ .addr = 0x379b0e, .byte = 0xf5 },
		{ .addr = 0x379b0f, .byte = 0x57 },
		{ .addr = 0x379b0a, .byte = 0x32 },
		{ .addr = 0x379b0b, .byte = 0x31 },
		{ .addr = 0x379b0c, .byte = 0x84 },
		{ .addr = 0x379b0d, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0xc5 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x7ee050, .byte = 0xb2 },
		{ .addr = 0x7ee051, .byte = 0xff },
		{ .addr = 0x7ee052, .byte = 0x18 },
		{ .addr = 0x7ee053, .byte = 0x45 }
};

static const SST_Transaction movew_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14480726, .data = 60259, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3644182, .data = 5244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3644178, .data = 33545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3644180, .data = 211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3644176, .data = 12836, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3644174, .data = 62807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3644170, .data = 12849, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3644172, .data = 34012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8314960, .data = 45823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8314962, .data = 6213, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_15[] = {
		{ .addr = 0x7b2836, .byte = 0x3a },
		{ .addr = 0x7b2837, .byte = 0xf8 },
		{ .addr = 0x7b2838, .byte = 0x1e },
		{ .addr = 0x7b2839, .byte = 0xd8 },
		{ .addr = 0x7b283a, .byte = 0xf1 },
		{ .addr = 0x7b283b, .byte = 0x2f },
		{ .addr = 0x001ed8, .byte = 0xe6 },
		{ .addr = 0x001ed9, .byte = 0x4b },
		{ .addr = 0x7b283c, .byte = 0x8a },
		{ .addr = 0x7b283d, .byte = 0xef }
};

static const SST_RamByte movew_final_ram_15[] = {
		{ .addr = 0x7b2836, .byte = 0x3a },
		{ .addr = 0x7b2837, .byte = 0xf8 },
		{ .addr = 0x7b2838, .byte = 0x1e },
		{ .addr = 0x7b2839, .byte = 0xd8 },
		{ .addr = 0x7b283a, .byte = 0xf1 },
		{ .addr = 0x7b283b, .byte = 0x2f },
		{ .addr = 0x001ed8, .byte = 0xe6 },
		{ .addr = 0x001ed9, .byte = 0x4b },
		{ .addr = 0xc7859e, .byte = 0xe6 },
		{ .addr = 0xc7859f, .byte = 0x4b },
		{ .addr = 0x7b283c, .byte = 0x8a },
		{ .addr = 0x7b283d, .byte = 0xef }
};

static const SST_Transaction movew_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8071226, .data = 61743, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7896, .data = 58955, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13075870, .data = 58955, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8071228, .data = 35567, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t MOVEW_TEST_COUNT = 16;
static const SST_TestCase movew[] = {
	{
		.name = "000 MOVE.w A1, (A2)+ 34c9",
		.initial = {
			.regs = {
				2530484584, 1196838788, 1081950822, 3801932641, 2878138451, 3686490039, 1277231700, 2281846656, 4128152544, 1087582781, 35290954, 3940833032, 2199530306, 2003700646, 70651068, 2822166, 11411026, 775, 2587182
			},
			.prefetch0 = 13513,
			.prefetch1 = 9473,
			.ram = movew_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2530484584, 1196838788, 1081950822, 3801932641, 2878138451, 3686490039, 1277231700, 2281846656, 4128152544, 1087582781, 35290956, 3940833032, 2199530306, 2003700646, 70651068, 2822166, 11411026, 768, 2587184
			},
			.prefetch0 = 9473,
			.prefetch1 = 63759,
			.ram = movew_final_ram_0,
			.ram_len = 8,
		},
		.transactions = movew_transactions_0,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "001 MOVE.w (d16, A3), (d8, A2, Xn) 35ab",
		.initial = {
			.regs = {
				2415059706, 4181566539, 3210589961, 3672409201, 4018727243, 3804880718, 331753696, 953834799, 3370734708, 1263089474, 1299814577, 631615277, 3040283982, 2142272391, 1324443805, 655778, 15011866, 42772, 919650
			},
			.prefetch0 = 13739,
			.prefetch1 = 13558,
			.ram = movew_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2415059706, 4181566539, 3210589961, 3672409201, 4018727243, 3804880718, 331753696, 953834799, 3370734708, 1263089474, 1299814577, 631615277, 3040283982, 2142272391, 1324443805, 655778, 15011852, 10004, 4017283672
			},
			.prefetch0 = 44431,
			.prefetch1 = 35610,
			.ram = movew_final_ram_1,
			.ram_len = 28,
		},
		.transactions = movew_transactions_1,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "002 MOVE.w (A5)+, (A5) 3a9d",
		.initial = {
			.regs = {
				460373915, 3858662613, 1676535225, 1584500603, 1006669584, 2398681836, 3831882683, 3835196215, 3845371999, 2251110891, 399653394, 1576592065, 262703772, 1733225936, 1254528325, 7497948, 9390866, 8732, 10913670
			},
			.prefetch0 = 15005,
			.prefetch1 = 26768,
			.ram = movew_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				460373915, 3858662613, 1676535225, 1584500603, 1006669584, 2398681836, 3831882683, 3835196215, 3845371999, 2251110891, 399653394, 1576592065, 262703772, 1733225938, 1254528325, 7497948, 9390866, 8720, 10913672
			},
			.prefetch0 = 26768,
			.prefetch1 = 21245,
			.ram = movew_final_ram_2,
			.ram_len = 10,
		},
		.transactions = movew_transactions_2,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "003 MOVE.w (A7)+, -(A3) 371f",
		.initial = {
			.regs = {
				3117042868, 151853288, 2127567020, 1424798427, 3880738187, 1832311397, 1347443877, 4227116107, 3515698975, 3462552206, 181836404, 1722013023, 2377764134, 1703032755, 3746830128, 4230396, 10055542, 41741, 12267190
			},
			.prefetch0 = 14111,
			.prefetch1 = 22375,
			.ram = movew_initial_ram_3,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3117042868, 151853288, 2127567020, 1424798427, 3880738187, 1832311397, 1347443877, 4227116107, 3515698975, 3462552206, 181836404, 1722013021, 2377764134, 1703032755, 3746830128, 4230396, 10055530, 8960, 707307186
			},
			.prefetch0 = 9119,
			.prefetch1 = 10007,
			.ram = movew_final_ram_3,
			.ram_len = 28,
		},
		.transactions = movew_transactions_3,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "004 MOVE.w D3, (A5) 3a83",
		.initial = {
			.regs = {
				2192591041, 2229158669, 1058157280, 3052408955, 476218210, 112430480, 1118784000, 970750641, 3416260042, 1440085802, 1092652454, 1222402483, 3848933304, 3016447585, 3099096193, 11039620, 12087422, 41233, 1841134
			},
			.prefetch0 = 14979,
			.prefetch1 = 59853,
			.ram = movew_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2192591041, 2229158669, 1058157280, 3052408955, 476218210, 112430480, 1118784000, 970750641, 3416260042, 1440085802, 1092652454, 1222402483, 3848933304, 3016447585, 3099096193, 11039620, 12087408, 8464, 596123674
			},
			.prefetch0 = 2280,
			.prefetch1 = 55263,
			.ram = movew_final_ram_4,
			.ram_len = 26,
		},
		.transactions = movew_transactions_4,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "005 MOVE.w (xxx).l, (A4)+ 38f9",
		.initial = {
			.regs = {
				679054068, 3185698225, 273510489, 2752580068, 3459173377, 2735671073, 1098094527, 3055568852, 3987403831, 4189615254, 3809898129, 3370055323, 493336662, 1244828939, 1044502087, 12305314, 3016232, 42258, 14626894
			},
			.prefetch0 = 14585,
			.prefetch1 = 2938,
			.ram = movew_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				679054068, 3185698225, 273510489, 2752580068, 3459173377, 2735671073, 1098094527, 3055568852, 3987403831, 4189615254, 3809898129, 3370055323, 493336664, 1244828939, 1044502087, 12305314, 3016232, 42256, 14626900
			},
			.prefetch0 = 35606,
			.prefetch1 = 18432,
			.ram = movew_final_ram_5,
			.ram_len = 14,
		},
		.transactions = movew_transactions_5,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "006 MOVE.w -(A7), (d8, A3, Xn) 37a7",
		.initial = {
			.regs = {
				272659133, 3363247435, 3297478796, 4158657127, 1059951220, 2969545336, 3050738976, 3589230555, 871108597, 2084533627, 1771001081, 2082278375, 4174902893, 2607660790, 3209992856, 14175426, 15520904, 33295, 7333334
			},
			.prefetch0 = 14247,
			.prefetch1 = 31373,
			.ram = movew_initial_ram_6,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				272659133, 3363247435, 3297478796, 4158657127, 1059951220, 2969545336, 3050738976, 3589230555, 871108597, 2084533627, 1771001081, 2082278375, 4174902893, 2607660790, 3209992856, 14175424, 15520890, 8712, 697734468
			},
			.prefetch0 = 63517,
			.prefetch1 = 52090,
			.ram = movew_final_ram_6,
			.ram_len = 30,
		},
		.transactions = movew_transactions_6,
		.transactions_len = 18,
		.lenght = 70,
	},
	{
		.name = "007 MOVE.w D7, (A6) 3c87",
		.initial = {
			.regs = {
				83168683, 5346501, 2104956674, 3312669488, 4274189649, 925112004, 2952647342, 1684824906, 2718814038, 294740076, 590895473, 2447228533, 3958947676, 3488095139, 3371855103, 8822088, 7267296, 1311, 3448478
			},
			.prefetch0 = 15495,
			.prefetch1 = 15429,
			.ram = movew_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				83168683, 5346501, 2104956674, 3312669488, 4274189649, 925112004, 2952647342, 1684824906, 2718814038, 294740076, 590895473, 2447228533, 3958947676, 3488095139, 3371855103, 8822088, 7267282, 9488, 1049760156
			},
			.prefetch0 = 43552,
			.prefetch1 = 38169,
			.ram = movew_final_ram_7,
			.ram_len = 26,
		},
		.transactions = movew_transactions_7,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "008 MOVE.w -(A1), (d16, A5) 3b61",
		.initial = {
			.regs = {
				1510849915, 585884742, 3057277460, 747810229, 3815548434, 3028944717, 3648106863, 851810, 4143672542, 2235417585, 1741051016, 964993690, 2795575480, 589508627, 56474766, 5570286, 13581786, 9480, 8253712
			},
			.prefetch0 = 15201,
			.prefetch1 = 50178,
			.ram = movew_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1510849915, 585884742, 3057277460, 747810229, 3815548434, 3028944717, 3648106863, 851810, 4143672542, 2235417583, 1741051016, 964993690, 2795575480, 589508627, 56474766, 5570286, 13581772, 9480, 4056167512
			},
			.prefetch0 = 35831,
			.prefetch1 = 58003,
			.ram = movew_final_ram_8,
			.ram_len = 26,
		},
		.transactions = movew_transactions_8,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "009 MOVE.w (d16, A6), (A5) 3aae",
		.initial = {
			.regs = {
				2784107668, 522417043, 1294564579, 2795121861, 3558261627, 2339169757, 1398014596, 3678564598, 1976421301, 2663799156, 2962382329, 1247005559, 383045271, 1548871469, 3637182698, 4001446, 4631158, 42761, 11219022
			},
			.prefetch0 = 15022,
			.prefetch1 = 41074,
			.ram = movew_initial_ram_9,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2784107668, 522417043, 1294564579, 2795121861, 3558261627, 2339169757, 1398014596, 3678564598, 1976421301, 2663799156, 2962382329, 1247005559, 383045271, 1548871469, 3637182698, 4001446, 4631144, 9992, 3779747304
			},
			.prefetch0 = 50021,
			.prefetch1 = 33883,
			.ram = movew_final_ram_9,
			.ram_len = 30,
		},
		.transactions = movew_transactions_9,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "010 MOVE.w A3, (d16, A0) 314b",
		.initial = {
			.regs = {
				3912282788, 55772969, 1430850671, 560462690, 38950071, 2557305830, 430717960, 2926285171, 1120082651, 3161538110, 3610703137, 2466429235, 255671561, 463083353, 3779857897, 837182, 134230, 8, 5205042
			},
			.prefetch0 = 12619,
			.prefetch1 = 25725,
			.ram = movew_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3912282788, 55772969, 1430850671, 560462690, 38950071, 2557305830, 430717960, 2926285171, 1120082651, 3161538110, 3610703137, 2466429235, 255671561, 463083353, 3779857897, 837182, 134230, 8, 5205046
			},
			.prefetch0 = 53493,
			.prefetch1 = 2626,
			.ram = movew_final_ram_10,
			.ram_len = 10,
		},
		.transactions = movew_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 MOVE.w (A1), (d8, A7, Xn) 3f91",
		.initial = {
			.regs = {
				1631291112, 1813157634, 3649158666, 4256243963, 3190306592, 1528862134, 387487711, 312742789, 3589575091, 3872724493, 117325364, 3084241226, 4018691121, 2463366088, 4029074165, 16568570, 9344642, 9234, 14490194
			},
			.prefetch0 = 16273,
			.prefetch1 = 15511,
			.ram = movew_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1631291112, 1813157634, 3649158666, 4256243963, 3190306592, 1528862134, 387487711, 312742789, 3589575091, 3872724493, 117325364, 3084241226, 4018691121, 2463366088, 4029074165, 16568570, 9344628, 9234, 1969882954
			},
			.prefetch0 = 37920,
			.prefetch1 = 23227,
			.ram = movew_final_ram_11,
			.ram_len = 26,
		},
		.transactions = movew_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 MOVE.w (d8, A2, Xn), D2 3432",
		.initial = {
			.regs = {
				2863981261, 2929360964, 2658446130, 1222328864, 2267881076, 3653563740, 662825116, 2300952376, 1686955705, 2442506549, 2236263889, 1733862321, 229100001, 997448339, 2944390819, 14170686, 8325888, 34065, 10008328
			},
			.prefetch0 = 13362,
			.prefetch1 = 13075,
			.ram = movew_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2863981261, 2929360964, 2658460035, 1222328864, 2267881076, 3653563740, 662825116, 2300952376, 1686955705, 2442506549, 2236263889, 1733862321, 229100001, 997448339, 2944390819, 14170686, 8325888, 34072, 10008332
			},
			.prefetch0 = 7335,
			.prefetch1 = 23214,
			.ram = movew_final_ram_12,
			.ram_len = 10,
		},
		.transactions = movew_transactions_12,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "013 MOVE.w A5, (d16, A1) 334d",
		.initial = {
			.regs = {
				1959561959, 3761191295, 2042350423, 133666830, 4101608334, 2256956571, 2668841733, 2979825683, 1962102187, 3421044518, 3259948461, 1648878608, 3327072, 1528313159, 1378794847, 10275694, 11627504, 9247, 3435584
			},
			.prefetch0 = 13133,
			.prefetch1 = 63401,
			.ram = movew_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1959561959, 3761191295, 2042350423, 133666830, 4101608334, 2256956571, 2668841733, 2979825683, 1962102187, 3421044518, 3259948461, 1648878608, 3327072, 1528313159, 1378794847, 10275694, 11627490, 9232, 2985442046
			},
			.prefetch0 = 49431,
			.prefetch1 = 2583,
			.ram = movew_final_ram_13,
			.ram_len = 28,
		},
		.transactions = movew_transactions_13,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "014 MOVE.w -(A4), D1 3224",
		.initial = {
			.regs = {
				3280538995, 2465922019, 2690536041, 944129594, 3797113344, 352520050, 4131613430, 269824997, 2518223674, 2849769873, 3422614367, 3516478973, 2229073241, 2370920354, 2251156022, 9218176, 3644184, 33545, 13833340
			},
			.prefetch0 = 12836,
			.prefetch1 = 33989,
			.ram = movew_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3280538995, 2465922019, 2690536041, 944129594, 3797113344, 352520050, 4131613430, 269824997, 2518223674, 2849769873, 3422614367, 3516478973, 2229073239, 2370920354, 2251156022, 9218176, 3644170, 8969, 3313426516
			},
			.prefetch0 = 45823,
			.prefetch1 = 6213,
			.ram = movew_final_ram_14,
			.ram_len = 26,
		},
		.transactions = movew_transactions_14,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "015 MOVE.w (xxx).w, (A5)+ 3af8",
		.initial = {
			.regs = {
				1450902108, 2656473132, 1406762724, 2416935440, 522396208, 1463031277, 3480620729, 2402845179, 112238856, 1810437361, 1871928285, 2403328776, 20832029, 1120372126, 768894807, 10404600, 6210674, 1541, 8071226
			},
			.prefetch0 = 15096,
			.prefetch1 = 7896,
			.ram = movew_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1450902108, 2656473132, 1406762724, 2416935440, 522396208, 1463031277, 3480620729, 2402845179, 112238856, 1810437361, 1871928285, 2403328776, 20832029, 1120372128, 768894807, 10404600, 6210674, 1544, 8071230
			},
			.prefetch0 = 61743,
			.prefetch1 = 35567,
			.ram = movew_final_ram_15,
			.ram_len = 12,
		},
		.transactions = movew_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
};

#endif /* RBT_MOVEW_H */