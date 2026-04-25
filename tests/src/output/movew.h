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

static const SST_RamByte movew_initial_ram_16[] = {
		{ .addr = 0xbc54fe, .byte = 0x3d },
		{ .addr = 0xbc54ff, .byte = 0x96 },
		{ .addr = 0xbc5500, .byte = 0x1d },
		{ .addr = 0xbc5501, .byte = 0x1c },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0xe896de, .byte = 0xd8 },
		{ .addr = 0xe896df, .byte = 0x09 },
		{ .addr = 0xe896e0, .byte = 0x98 },
		{ .addr = 0xe896e1, .byte = 0xdd }
};

static const SST_RamByte movew_final_ram_16[] = {
		{ .addr = 0xbc54fe, .byte = 0x3d },
		{ .addr = 0xbc54ff, .byte = 0x96 },
		{ .addr = 0xbc5500, .byte = 0x1d },
		{ .addr = 0xbc5501, .byte = 0x1c },
		{ .addr = 0x0e939c, .byte = 0x55 },
		{ .addr = 0x0e939d, .byte = 0x00 },
		{ .addr = 0x0e9398, .byte = 0xa2 },
		{ .addr = 0x0e9399, .byte = 0x08 },
		{ .addr = 0x0e939a, .byte = 0x00 },
		{ .addr = 0x0e939b, .byte = 0xbc },
		{ .addr = 0x0e9396, .byte = 0x3d },
		{ .addr = 0x0e9397, .byte = 0x96 },
		{ .addr = 0x0e9394, .byte = 0x32 },
		{ .addr = 0x0e9395, .byte = 0xe5 },
		{ .addr = 0x0e9390, .byte = 0x3d },
		{ .addr = 0x0e9391, .byte = 0x95 },
		{ .addr = 0x0e9392, .byte = 0x36 },
		{ .addr = 0x0e9393, .byte = 0x95 },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0xe896de, .byte = 0xd8 },
		{ .addr = 0xe896df, .byte = 0x09 },
		{ .addr = 0xe896e0, .byte = 0x98 },
		{ .addr = 0xe896e1, .byte = 0xdd }
};

static const SST_Transaction movew_transactions_16[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9777892, .data = 22876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955292, .data = 21760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955288, .data = 41480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955290, .data = 188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955286, .data = 15766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955284, .data = 13029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955280, .data = 15765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955282, .data = 13973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15242974, .data = 55305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15242976, .data = 39133, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_17[] = {
		{ .addr = 0xb6c6aa, .byte = 0x34 },
		{ .addr = 0xb6c6ab, .byte = 0x37 },
		{ .addr = 0xb6c6ac, .byte = 0x06 },
		{ .addr = 0xb6c6ad, .byte = 0x55 },
		{ .addr = 0xb6c6ae, .byte = 0x7a },
		{ .addr = 0xb6c6af, .byte = 0x8f },
		{ .addr = 0x4ae098, .byte = 0x51 },
		{ .addr = 0x4ae099, .byte = 0x8d },
		{ .addr = 0xb6c6b0, .byte = 0x60 },
		{ .addr = 0xb6c6b1, .byte = 0x83 }
};

static const SST_RamByte movew_final_ram_17[] = {
		{ .addr = 0xb6c6aa, .byte = 0x34 },
		{ .addr = 0xb6c6ab, .byte = 0x37 },
		{ .addr = 0xb6c6ac, .byte = 0x06 },
		{ .addr = 0xb6c6ad, .byte = 0x55 },
		{ .addr = 0xb6c6ae, .byte = 0x7a },
		{ .addr = 0xb6c6af, .byte = 0x8f },
		{ .addr = 0x4ae098, .byte = 0x51 },
		{ .addr = 0x4ae099, .byte = 0x8d },
		{ .addr = 0xb6c6b0, .byte = 0x60 },
		{ .addr = 0xb6c6b1, .byte = 0x83 }
};

static const SST_Transaction movew_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11978414, .data = 31375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4907160, .data = 20877, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11978416, .data = 24707, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_18[] = {
		{ .addr = 0xb4c7b6, .byte = 0x30 },
		{ .addr = 0xb4c7b7, .byte = 0xc6 },
		{ .addr = 0xb4c7b8, .byte = 0x07 },
		{ .addr = 0xb4c7b9, .byte = 0xa2 },
		{ .addr = 0xb4c7ba, .byte = 0xb3 },
		{ .addr = 0xb4c7bb, .byte = 0x4f }
};

static const SST_RamByte movew_final_ram_18[] = {
		{ .addr = 0xb4c7b6, .byte = 0x30 },
		{ .addr = 0xb4c7b7, .byte = 0xc6 },
		{ .addr = 0xb4c7b8, .byte = 0x07 },
		{ .addr = 0xb4c7b9, .byte = 0xa2 },
		{ .addr = 0x40b46e, .byte = 0xa0 },
		{ .addr = 0x40b46f, .byte = 0x2e },
		{ .addr = 0xb4c7ba, .byte = 0xb3 },
		{ .addr = 0xb4c7bb, .byte = 0x4f }
};

static const SST_Transaction movew_transactions_18[] = {
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4240494, .data = 41006, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11847610, .data = 45903, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_19[] = {
		{ .addr = 0x335110, .byte = 0x3e },
		{ .addr = 0x335111, .byte = 0x02 },
		{ .addr = 0x335112, .byte = 0x28 },
		{ .addr = 0x335113, .byte = 0x71 },
		{ .addr = 0x335114, .byte = 0x5b },
		{ .addr = 0x335115, .byte = 0x6f }
};

static const SST_RamByte movew_final_ram_19[] = {
		{ .addr = 0x335110, .byte = 0x3e },
		{ .addr = 0x335111, .byte = 0x02 },
		{ .addr = 0x335112, .byte = 0x28 },
		{ .addr = 0x335113, .byte = 0x71 },
		{ .addr = 0x335114, .byte = 0x5b },
		{ .addr = 0x335115, .byte = 0x6f }
};

static const SST_Transaction movew_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3363092, .data = 23407, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_20[] = {
		{ .addr = 0xbdc2c2, .byte = 0x30 },
		{ .addr = 0xbdc2c3, .byte = 0x88 },
		{ .addr = 0xbdc2c4, .byte = 0x20 },
		{ .addr = 0xbdc2c5, .byte = 0xae },
		{ .addr = 0xbdc2c6, .byte = 0x57 },
		{ .addr = 0xbdc2c7, .byte = 0xa1 }
};

static const SST_RamByte movew_final_ram_20[] = {
		{ .addr = 0xbdc2c2, .byte = 0x30 },
		{ .addr = 0xbdc2c3, .byte = 0x88 },
		{ .addr = 0xbdc2c4, .byte = 0x20 },
		{ .addr = 0xbdc2c5, .byte = 0xae },
		{ .addr = 0x7b4b16, .byte = 0x4b },
		{ .addr = 0x7b4b17, .byte = 0x16 },
		{ .addr = 0xbdc2c6, .byte = 0x57 },
		{ .addr = 0xbdc2c7, .byte = 0xa1 }
};

static const SST_Transaction movew_transactions_20[] = {
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8080150, .data = 19222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12436166, .data = 22433, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_21[] = {
		{ .addr = 0x38b826, .byte = 0x32 },
		{ .addr = 0x38b827, .byte = 0x87 },
		{ .addr = 0x38b828, .byte = 0xe0 },
		{ .addr = 0x38b829, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0x51 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xd4904e, .byte = 0x64 },
		{ .addr = 0xd4904f, .byte = 0xae },
		{ .addr = 0xd49050, .byte = 0xec },
		{ .addr = 0xd49051, .byte = 0x6d }
};

static const SST_RamByte movew_final_ram_21[] = {
		{ .addr = 0x38b826, .byte = 0x32 },
		{ .addr = 0x38b827, .byte = 0x87 },
		{ .addr = 0x38b828, .byte = 0xe0 },
		{ .addr = 0x38b829, .byte = 0x26 },
		{ .addr = 0x87ba58, .byte = 0xb8 },
		{ .addr = 0x87ba59, .byte = 0x2a },
		{ .addr = 0x87ba54, .byte = 0x83 },
		{ .addr = 0x87ba55, .byte = 0x00 },
		{ .addr = 0x87ba56, .byte = 0x00 },
		{ .addr = 0x87ba57, .byte = 0x38 },
		{ .addr = 0x87ba52, .byte = 0x32 },
		{ .addr = 0x87ba53, .byte = 0x87 },
		{ .addr = 0x87ba50, .byte = 0x84 },
		{ .addr = 0x87ba51, .byte = 0x9d },
		{ .addr = 0x87ba4c, .byte = 0x32 },
		{ .addr = 0x87ba4d, .byte = 0x81 },
		{ .addr = 0x87ba4e, .byte = 0xae },
		{ .addr = 0x87ba4f, .byte = 0x5d },
		{ .addr = 0x00000c, .byte = 0x51 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xd4904e, .byte = 0x64 },
		{ .addr = 0xd4904f, .byte = 0xae },
		{ .addr = 0xd49050, .byte = 0xec },
		{ .addr = 0xd49051, .byte = 0x6d }
};

static const SST_Transaction movew_transactions_21[] = {
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6128796, .data = 16138, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8895064, .data = 47146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8895060, .data = 33536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8895062, .data = 56, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8895058, .data = 12935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8895056, .data = 33949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8895052, .data = 12929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8895054, .data = 44637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13930574, .data = 25774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13930576, .data = 60525, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_22[] = {
		{ .addr = 0xa0f2e0, .byte = 0x36 },
		{ .addr = 0xa0f2e1, .byte = 0xcd },
		{ .addr = 0xa0f2e2, .byte = 0x85 },
		{ .addr = 0xa0f2e3, .byte = 0x06 },
		{ .addr = 0xa0f2e4, .byte = 0x72 },
		{ .addr = 0xa0f2e5, .byte = 0x1e }
};

static const SST_RamByte movew_final_ram_22[] = {
		{ .addr = 0xa0f2e0, .byte = 0x36 },
		{ .addr = 0xa0f2e1, .byte = 0xcd },
		{ .addr = 0xa0f2e2, .byte = 0x85 },
		{ .addr = 0xa0f2e3, .byte = 0x06 },
		{ .addr = 0x6c7d18, .byte = 0xa7 },
		{ .addr = 0x6c7d19, .byte = 0x80 },
		{ .addr = 0xa0f2e4, .byte = 0x72 },
		{ .addr = 0xa0f2e5, .byte = 0x1e }
};

static const SST_Transaction movew_transactions_22[] = {
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7109912, .data = 42880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10547940, .data = 29214, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_23[] = {
		{ .addr = 0x5fc142, .byte = 0x36 },
		{ .addr = 0x5fc143, .byte = 0xb8 },
		{ .addr = 0x5fc144, .byte = 0xba },
		{ .addr = 0x5fc145, .byte = 0x13 },
		{ .addr = 0x5fc146, .byte = 0x38 },
		{ .addr = 0x5fc147, .byte = 0xfc },
		{ .addr = 0x00000c, .byte = 0xde },
		{ .addr = 0x00000d, .byte = 0xa6 },
		{ .addr = 0x00000e, .byte = 0x0f },
		{ .addr = 0x00000f, .byte = 0xa8 },
		{ .addr = 0xa60fa8, .byte = 0xa4 },
		{ .addr = 0xa60fa9, .byte = 0x12 },
		{ .addr = 0xa60faa, .byte = 0xf0 },
		{ .addr = 0xa60fab, .byte = 0x71 }
};

static const SST_RamByte movew_final_ram_23[] = {
		{ .addr = 0x5fc142, .byte = 0x36 },
		{ .addr = 0x5fc143, .byte = 0xb8 },
		{ .addr = 0x5fc144, .byte = 0xba },
		{ .addr = 0x5fc145, .byte = 0x13 },
		{ .addr = 0x5fc146, .byte = 0x38 },
		{ .addr = 0x5fc147, .byte = 0xfc },
		{ .addr = 0x374f6a, .byte = 0xc1 },
		{ .addr = 0x374f6b, .byte = 0x46 },
		{ .addr = 0x374f66, .byte = 0x03 },
		{ .addr = 0x374f67, .byte = 0x13 },
		{ .addr = 0x374f68, .byte = 0x00 },
		{ .addr = 0x374f69, .byte = 0x5f },
		{ .addr = 0x374f64, .byte = 0x36 },
		{ .addr = 0x374f65, .byte = 0xb8 },
		{ .addr = 0x374f62, .byte = 0xba },
		{ .addr = 0x374f63, .byte = 0x13 },
		{ .addr = 0x374f5e, .byte = 0x36 },
		{ .addr = 0x374f5f, .byte = 0xb1 },
		{ .addr = 0x374f60, .byte = 0xff },
		{ .addr = 0x374f61, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0xde },
		{ .addr = 0x00000d, .byte = 0xa6 },
		{ .addr = 0x00000e, .byte = 0x0f },
		{ .addr = 0x00000f, .byte = 0xa8 },
		{ .addr = 0xa60fa8, .byte = 0xa4 },
		{ .addr = 0xa60fa9, .byte = 0x12 },
		{ .addr = 0xa60faa, .byte = 0xf0 },
		{ .addr = 0xa60fab, .byte = 0x71 }
};

static const SST_Transaction movew_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6275398, .data = 14588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16759314, .data = 9433, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3624810, .data = 49478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3624806, .data = 787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3624808, .data = 95, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3624804, .data = 14008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3624802, .data = 47635, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3624798, .data = 14001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3624800, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10882984, .data = 42002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10882986, .data = 61553, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_24[] = {
		{ .addr = 0xd4921c, .byte = 0x3d },
		{ .addr = 0xd4921d, .byte = 0x96 },
		{ .addr = 0xd4921e, .byte = 0x49 },
		{ .addr = 0xd4921f, .byte = 0xd0 },
		{ .addr = 0x30af44, .byte = 0x4c },
		{ .addr = 0x30af45, .byte = 0xef },
		{ .addr = 0xd49220, .byte = 0xb5 },
		{ .addr = 0xd49221, .byte = 0xaf },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x464ce2, .byte = 0xba },
		{ .addr = 0x464ce3, .byte = 0xa6 },
		{ .addr = 0x464ce4, .byte = 0xdf },
		{ .addr = 0x464ce5, .byte = 0x8e }
};

static const SST_RamByte movew_final_ram_24[] = {
		{ .addr = 0xd4921c, .byte = 0x3d },
		{ .addr = 0xd4921d, .byte = 0x96 },
		{ .addr = 0xd4921e, .byte = 0x49 },
		{ .addr = 0xd4921f, .byte = 0xd0 },
		{ .addr = 0x30af44, .byte = 0x4c },
		{ .addr = 0x30af45, .byte = 0xef },
		{ .addr = 0xd49220, .byte = 0xb5 },
		{ .addr = 0xd49221, .byte = 0xaf },
		{ .addr = 0x3d6e58, .byte = 0x92 },
		{ .addr = 0x3d6e59, .byte = 0x20 },
		{ .addr = 0x3d6e54, .byte = 0xa6 },
		{ .addr = 0x3d6e55, .byte = 0x10 },
		{ .addr = 0x3d6e56, .byte = 0x00 },
		{ .addr = 0x3d6e57, .byte = 0xd4 },
		{ .addr = 0x3d6e52, .byte = 0x3d },
		{ .addr = 0x3d6e53, .byte = 0x96 },
		{ .addr = 0x3d6e50, .byte = 0x36 },
		{ .addr = 0x3d6e51, .byte = 0xaf },
		{ .addr = 0x3d6e4c, .byte = 0x3d },
		{ .addr = 0x3d6e4d, .byte = 0x85 },
		{ .addr = 0x3d6e4e, .byte = 0x61 },
		{ .addr = 0x3d6e4f, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x464ce2, .byte = 0xba },
		{ .addr = 0x464ce3, .byte = 0xa6 },
		{ .addr = 0x464ce4, .byte = 0xdf },
		{ .addr = 0x464ce5, .byte = 0x8e }
};

static const SST_Transaction movew_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3190596, .data = 19695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13931040, .data = 46511, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6436526, .data = 19695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4025944, .data = 37408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4025940, .data = 42512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4025942, .data = 212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4025938, .data = 15766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4025936, .data = 13999, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4025932, .data = 15749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4025934, .data = 24930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 19682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4607202, .data = 47782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4607204, .data = 57230, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_25[] = {
		{ .addr = 0xf742a6, .byte = 0x36 },
		{ .addr = 0xf742a7, .byte = 0x83 },
		{ .addr = 0xf742a8, .byte = 0x51 },
		{ .addr = 0xf742a9, .byte = 0x26 },
		{ .addr = 0xf742aa, .byte = 0x26 },
		{ .addr = 0xf742ab, .byte = 0x8a }
};

static const SST_RamByte movew_final_ram_25[] = {
		{ .addr = 0xf742a6, .byte = 0x36 },
		{ .addr = 0xf742a7, .byte = 0x83 },
		{ .addr = 0xf742a8, .byte = 0x51 },
		{ .addr = 0xf742a9, .byte = 0x26 },
		{ .addr = 0x8fd0c2, .byte = 0x92 },
		{ .addr = 0x8fd0c3, .byte = 0x9c },
		{ .addr = 0xf742aa, .byte = 0x26 },
		{ .addr = 0xf742ab, .byte = 0x8a }
};

static const SST_Transaction movew_transactions_25[] = {
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9425090, .data = 37532, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16204458, .data = 9866, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_26[] = {
		{ .addr = 0xb3cf52, .byte = 0x3e },
		{ .addr = 0xb3cf53, .byte = 0x18 },
		{ .addr = 0xb3cf54, .byte = 0x95 },
		{ .addr = 0xb3cf55, .byte = 0xda },
		{ .addr = 0x5ed68e, .byte = 0x59 },
		{ .addr = 0x5ed68f, .byte = 0x90 },
		{ .addr = 0xb3cf56, .byte = 0x14 },
		{ .addr = 0xb3cf57, .byte = 0xcc }
};

static const SST_RamByte movew_final_ram_26[] = {
		{ .addr = 0xb3cf52, .byte = 0x3e },
		{ .addr = 0xb3cf53, .byte = 0x18 },
		{ .addr = 0xb3cf54, .byte = 0x95 },
		{ .addr = 0xb3cf55, .byte = 0xda },
		{ .addr = 0x5ed68e, .byte = 0x59 },
		{ .addr = 0x5ed68f, .byte = 0x90 },
		{ .addr = 0xb3cf56, .byte = 0x14 },
		{ .addr = 0xb3cf57, .byte = 0xcc }
};

static const SST_Transaction movew_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6215310, .data = 22928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11784022, .data = 5324, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_27[] = {
		{ .addr = 0xf02070, .byte = 0x37 },
		{ .addr = 0xf02071, .byte = 0x06 },
		{ .addr = 0xf02072, .byte = 0x70 },
		{ .addr = 0xf02073, .byte = 0xc0 },
		{ .addr = 0xf02074, .byte = 0x38 },
		{ .addr = 0xf02075, .byte = 0x25 },
		{ .addr = 0x00000c, .byte = 0xc2 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0xce },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0xcece6e, .byte = 0x2e },
		{ .addr = 0xcece6f, .byte = 0xdd },
		{ .addr = 0xcece70, .byte = 0x0b },
		{ .addr = 0xcece71, .byte = 0x5c }
};

static const SST_RamByte movew_final_ram_27[] = {
		{ .addr = 0xf02070, .byte = 0x37 },
		{ .addr = 0xf02071, .byte = 0x06 },
		{ .addr = 0xf02072, .byte = 0x70 },
		{ .addr = 0xf02073, .byte = 0xc0 },
		{ .addr = 0xf02074, .byte = 0x38 },
		{ .addr = 0xf02075, .byte = 0x25 },
		{ .addr = 0x96cbd0, .byte = 0x20 },
		{ .addr = 0x96cbd1, .byte = 0x74 },
		{ .addr = 0x96cbcc, .byte = 0xa2 },
		{ .addr = 0x96cbcd, .byte = 0x10 },
		{ .addr = 0x96cbce, .byte = 0x00 },
		{ .addr = 0x96cbcf, .byte = 0xf0 },
		{ .addr = 0x96cbca, .byte = 0x70 },
		{ .addr = 0x96cbcb, .byte = 0xc0 },
		{ .addr = 0x96cbc8, .byte = 0x9c },
		{ .addr = 0x96cbc9, .byte = 0x99 },
		{ .addr = 0x96cbc4, .byte = 0x70 },
		{ .addr = 0x96cbc5, .byte = 0xc5 },
		{ .addr = 0x96cbc6, .byte = 0x04 },
		{ .addr = 0x96cbc7, .byte = 0x9c },
		{ .addr = 0x00000c, .byte = 0xc2 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0xce },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0xcece6e, .byte = 0x2e },
		{ .addr = 0xcece6f, .byte = 0xdd },
		{ .addr = 0xcece70, .byte = 0x0b },
		{ .addr = 0xcece71, .byte = 0x5c }
};

static const SST_Transaction movew_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15736948, .data = 14373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10263704, .data = 32741, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9882576, .data = 8308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9882572, .data = 41488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9882574, .data = 240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9882570, .data = 28864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9882568, .data = 40089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9882564, .data = 28869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9882566, .data = 1180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 49870, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13553262, .data = 11997, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13553264, .data = 2908, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_28[] = {
		{ .addr = 0x4061c4, .byte = 0x30 },
		{ .addr = 0x4061c5, .byte = 0xc6 },
		{ .addr = 0x4061c6, .byte = 0x91 },
		{ .addr = 0x4061c7, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0x79 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0xf8 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0xd0f806, .byte = 0x38 },
		{ .addr = 0xd0f807, .byte = 0x2e },
		{ .addr = 0xd0f808, .byte = 0xc9 },
		{ .addr = 0xd0f809, .byte = 0xdf }
};

static const SST_RamByte movew_final_ram_28[] = {
		{ .addr = 0x4061c4, .byte = 0x30 },
		{ .addr = 0x4061c5, .byte = 0xc6 },
		{ .addr = 0x4061c6, .byte = 0x91 },
		{ .addr = 0x4061c7, .byte = 0x64 },
		{ .addr = 0xb13308, .byte = 0x61 },
		{ .addr = 0xb13309, .byte = 0xc8 },
		{ .addr = 0xb13304, .byte = 0x25 },
		{ .addr = 0xb13305, .byte = 0x18 },
		{ .addr = 0xb13306, .byte = 0x00 },
		{ .addr = 0xb13307, .byte = 0x40 },
		{ .addr = 0xb13302, .byte = 0x30 },
		{ .addr = 0xb13303, .byte = 0xc6 },
		{ .addr = 0xb13300, .byte = 0x6c },
		{ .addr = 0xb13301, .byte = 0xe5 },
		{ .addr = 0xb132fc, .byte = 0x30 },
		{ .addr = 0xb132fd, .byte = 0xc5 },
		{ .addr = 0xb132fe, .byte = 0x94 },
		{ .addr = 0xb132ff, .byte = 0x7b },
		{ .addr = 0x00000c, .byte = 0x79 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0xf8 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0xd0f806, .byte = 0x38 },
		{ .addr = 0xd0f807, .byte = 0x2e },
		{ .addr = 0xd0f808, .byte = 0xc9 },
		{ .addr = 0xd0f809, .byte = 0xdf }
};

static const SST_Transaction movew_transactions_28[] = {
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8088804, .data = 49044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11612936, .data = 25032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11612932, .data = 9496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11612934, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11612930, .data = 12486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11612928, .data = 27877, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11612924, .data = 12485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11612926, .data = 38011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13694982, .data = 14382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13694984, .data = 51679, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_29[] = {
		{ .addr = 0xf6f04a, .byte = 0x3a },
		{ .addr = 0xf6f04b, .byte = 0x86 },
		{ .addr = 0xf6f04c, .byte = 0x88 },
		{ .addr = 0xf6f04d, .byte = 0x73 },
		{ .addr = 0xf6f04e, .byte = 0xe2 },
		{ .addr = 0xf6f04f, .byte = 0xca }
};

static const SST_RamByte movew_final_ram_29[] = {
		{ .addr = 0xf6f04a, .byte = 0x3a },
		{ .addr = 0xf6f04b, .byte = 0x86 },
		{ .addr = 0xf6f04c, .byte = 0x88 },
		{ .addr = 0xf6f04d, .byte = 0x73 },
		{ .addr = 0x8f7212, .byte = 0x9b },
		{ .addr = 0x8f7213, .byte = 0xc2 },
		{ .addr = 0xf6f04e, .byte = 0xe2 },
		{ .addr = 0xf6f04f, .byte = 0xca }
};

static const SST_Transaction movew_transactions_29[] = {
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9400850, .data = 39874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16183374, .data = 58058, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_30[] = {
		{ .addr = 0x0c65f6, .byte = 0x32 },
		{ .addr = 0x0c65f7, .byte = 0x95 },
		{ .addr = 0x0c65f8, .byte = 0x5c },
		{ .addr = 0x0c65f9, .byte = 0xde },
		{ .addr = 0x510424, .byte = 0xf1 },
		{ .addr = 0x510425, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0x8d },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0xd090f0, .byte = 0x75 },
		{ .addr = 0xd090f1, .byte = 0xbf },
		{ .addr = 0xd090f2, .byte = 0x96 },
		{ .addr = 0xd090f3, .byte = 0xe9 }
};

static const SST_RamByte movew_final_ram_30[] = {
		{ .addr = 0x0c65f6, .byte = 0x32 },
		{ .addr = 0x0c65f7, .byte = 0x95 },
		{ .addr = 0x0c65f8, .byte = 0x5c },
		{ .addr = 0x0c65f9, .byte = 0xde },
		{ .addr = 0x510424, .byte = 0xf1 },
		{ .addr = 0x510425, .byte = 0x53 },
		{ .addr = 0xfc3ae2, .byte = 0x65 },
		{ .addr = 0xfc3ae3, .byte = 0xfa },
		{ .addr = 0xfc3ade, .byte = 0x27 },
		{ .addr = 0xfc3adf, .byte = 0x18 },
		{ .addr = 0xfc3ae0, .byte = 0x00 },
		{ .addr = 0xfc3ae1, .byte = 0x0c },
		{ .addr = 0xfc3adc, .byte = 0x32 },
		{ .addr = 0xfc3add, .byte = 0x95 },
		{ .addr = 0xfc3ada, .byte = 0xe0 },
		{ .addr = 0xfc3adb, .byte = 0x31 },
		{ .addr = 0xfc3ad6, .byte = 0x32 },
		{ .addr = 0xfc3ad7, .byte = 0x85 },
		{ .addr = 0xfc3ad8, .byte = 0x21 },
		{ .addr = 0xfc3ad9, .byte = 0xb7 },
		{ .addr = 0x00000c, .byte = 0x8d },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0x90 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0xd090f0, .byte = 0x75 },
		{ .addr = 0xd090f1, .byte = 0xbf },
		{ .addr = 0xd090f2, .byte = 0x96 },
		{ .addr = 0xd090f3, .byte = 0xe9 }
};

static const SST_Transaction movew_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5309476, .data = 61779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12050480, .data = 61779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16530146, .data = 26106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16530142, .data = 10008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16530144, .data = 12, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16530140, .data = 12949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16530138, .data = 57393, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16530134, .data = 12933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16530136, .data = 8631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 36304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13668592, .data = 30143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13668594, .data = 38633, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movew_initial_ram_31[] = {
		{ .addr = 0x1f05a4, .byte = 0x39 },
		{ .addr = 0x1f05a5, .byte = 0x94 },
		{ .addr = 0x1f05a6, .byte = 0x1e },
		{ .addr = 0x1f05a7, .byte = 0x39 },
		{ .addr = 0xd7cca6, .byte = 0x62 },
		{ .addr = 0xd7cca7, .byte = 0x07 },
		{ .addr = 0x1f05a8, .byte = 0x8b },
		{ .addr = 0x1f05a9, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0xc6 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xd8 },
		{ .addr = 0xc62fd8, .byte = 0x67 },
		{ .addr = 0xc62fd9, .byte = 0x57 },
		{ .addr = 0xc62fda, .byte = 0x27 },
		{ .addr = 0xc62fdb, .byte = 0x47 }
};

static const SST_RamByte movew_final_ram_31[] = {
		{ .addr = 0x1f05a4, .byte = 0x39 },
		{ .addr = 0x1f05a5, .byte = 0x94 },
		{ .addr = 0x1f05a6, .byte = 0x1e },
		{ .addr = 0x1f05a7, .byte = 0x39 },
		{ .addr = 0xd7cca6, .byte = 0x62 },
		{ .addr = 0xd7cca7, .byte = 0x07 },
		{ .addr = 0x1f05a8, .byte = 0x8b },
		{ .addr = 0x1f05a9, .byte = 0xc4 },
		{ .addr = 0xc07082, .byte = 0x05 },
		{ .addr = 0xc07083, .byte = 0xa8 },
		{ .addr = 0xc0707e, .byte = 0xa3 },
		{ .addr = 0xc0707f, .byte = 0x10 },
		{ .addr = 0xc07080, .byte = 0x00 },
		{ .addr = 0xc07081, .byte = 0x1f },
		{ .addr = 0xc0707c, .byte = 0x39 },
		{ .addr = 0xc0707d, .byte = 0x94 },
		{ .addr = 0xc0707a, .byte = 0x55 },
		{ .addr = 0xc0707b, .byte = 0x71 },
		{ .addr = 0xc07076, .byte = 0x39 },
		{ .addr = 0xc07077, .byte = 0x85 },
		{ .addr = 0xc07078, .byte = 0x25 },
		{ .addr = 0xc07079, .byte = 0x8c },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0xc6 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0xd8 },
		{ .addr = 0xc62fd8, .byte = 0x67 },
		{ .addr = 0xc62fd9, .byte = 0x57 },
		{ .addr = 0xc62fda, .byte = 0x27 },
		{ .addr = 0xc62fdb, .byte = 0x47 }
};

static const SST_Transaction movew_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14142630, .data = 25095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2033064, .data = 35780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_WE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9196912, .data = 25095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611714, .data = 1448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611710, .data = 41744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611712, .data = 31, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611708, .data = 14740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611706, .data = 21873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611702, .data = 14725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611704, .data = 9612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12988376, .data = 26455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12988378, .data = 10055, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 MOVE.w (A6), (d8, A6, Xn) 3d96",
		.initial = {
			.regs = {
				2997280839, 3373529174, 1102780040, 4259590761, 1937462308, 4032456411, 309225879, 1522423633, 3465195990, 3325070552, 157562339, 2701353996, 874927940, 1878607523, 915747557, 12638474, 955294, 41480, 12342530
			},
			.prefetch0 = 15766,
			.prefetch1 = 7452,
			.ram = movew_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2997280839, 3373529174, 1102780040, 4259590761, 1937462308, 4032456411, 309225879, 1522423633, 3465195990, 3325070552, 157562339, 2701353996, 874927940, 1878607523, 915747557, 12638474, 955280, 8712, 2347276002
			},
			.prefetch0 = 55305,
			.prefetch1 = 39133,
			.ram = movew_final_ram_16,
			.ram_len = 26,
		},
		.transactions = movew_transactions_16,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "017 MOVE.w (d8, A7, Xn), D2 3437",
		.initial = {
			.regs = {
				620934845, 1655384649, 172568059, 1420125814, 1010649963, 4186287763, 4236782560, 3365100509, 1086082516, 2883947862, 3758849656, 3530363539, 3028242917, 4211573774, 3471961361, 528058, 4925830, 42507, 11978414
			},
			.prefetch0 = 13367,
			.prefetch1 = 1621,
			.ram = movew_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				620934845, 1655384649, 172577165, 1420125814, 1010649963, 4186287763, 4236782560, 3365100509, 1086082516, 2883947862, 3758849656, 3530363539, 3028242917, 4211573774, 3471961361, 528058, 4925830, 42496, 11978418
			},
			.prefetch0 = 31375,
			.prefetch1 = 24707,
			.ram = movew_final_ram_17,
			.ram_len = 10,
		},
		.transactions = movew_transactions_17,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "018 MOVE.w D6, (A0)+ 30c6",
		.initial = {
			.regs = {
				3825335176, 808381794, 3453858472, 685654062, 3678823158, 3955611145, 835362862, 2674403406, 1212200046, 1451756612, 12855768, 3480911343, 2647510871, 3926389179, 2834001495, 4885394, 3788630, 33565, 11847610
			},
			.prefetch0 = 12486,
			.prefetch1 = 1954,
			.ram = movew_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3825335176, 808381794, 3453858472, 685654062, 3678823158, 3955611145, 835362862, 2674403406, 1212200048, 1451756612, 12855768, 3480911343, 2647510871, 3926389179, 2834001495, 4885394, 3788630, 33560, 11847612
			},
			.prefetch0 = 1954,
			.prefetch1 = 45903,
			.ram = movew_final_ram_18,
			.ram_len = 8,
		},
		.transactions = movew_transactions_18,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "019 MOVE.w D2, D7 3e02",
		.initial = {
			.regs = {
				1335942478, 104434796, 533830181, 573346364, 124253045, 2936022628, 2069414006, 1118489753, 2267770486, 94056474, 1370389985, 2420501602, 1007484123, 591882819, 907001668, 11818854, 11287120, 33034, 3363092
			},
			.prefetch0 = 15874,
			.prefetch1 = 10353,
			.ram = movew_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1335942478, 104434796, 533830181, 573346364, 124253045, 2936022628, 2069414006, 1118476837, 2267770486, 94056474, 1370389985, 2420501602, 1007484123, 591882819, 907001668, 11818854, 11287120, 33032, 3363094
			},
			.prefetch0 = 10353,
			.prefetch1 = 23407,
			.ram = movew_final_ram_19,
			.ram_len = 6,
		},
		.transactions = movew_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 MOVE.w A0, (A0) 3088",
		.initial = {
			.regs = {
				2671941725, 1520567680, 4037653873, 1346618160, 2843493820, 4244574948, 734323514, 116514104, 1148930838, 2488785199, 2434828324, 3598432091, 628913235, 2421044669, 2438237744, 1062172, 2271504, 41755, 12436166
			},
			.prefetch0 = 12424,
			.prefetch1 = 8366,
			.ram = movew_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2671941725, 1520567680, 4037653873, 1346618160, 2843493820, 4244574948, 734323514, 116514104, 1148930838, 2488785199, 2434828324, 3598432091, 628913235, 2421044669, 2438237744, 1062172, 2271504, 41744, 12436168
			},
			.prefetch0 = 8366,
			.prefetch1 = 22433,
			.ram = movew_final_ram_20,
			.ram_len = 8,
		},
		.transactions = movew_transactions_20,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "021 MOVE.w D7, (A1) 3287",
		.initial = {
			.regs = {
				2846770680, 3277081777, 2721349680, 2993707910, 2170394312, 2232925565, 4026931069, 2511486730, 1252923828, 2925364381, 2112524480, 1613951633, 3732083994, 1515703548, 2528385661, 13938006, 8895066, 33543, 3717162
			},
			.prefetch0 = 12935,
			.prefetch1 = 57382,
			.ram = movew_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2846770680, 3277081777, 2721349680, 2993707910, 2170394312, 2232925565, 4026931069, 2511486730, 1252923828, 2925364381, 2112524480, 1613951633, 3732083994, 1515703548, 2528385661, 13938006, 8895052, 8960, 1372885074
			},
			.prefetch0 = 25774,
			.prefetch1 = 60525,
			.ram = movew_final_ram_21,
			.ram_len = 26,
		},
		.transactions = movew_transactions_21,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "022 MOVE.w A5, (A3)+ 36cd",
		.initial = {
			.regs = {
				2455653367, 3097514333, 1750399056, 3064424468, 778108622, 4117709086, 1067371122, 1588031117, 3168974126, 3296619718, 90438066, 2272034072, 2113271325, 242001792, 249288479, 13100460, 16717880, 9986, 10547940
			},
			.prefetch0 = 14029,
			.prefetch1 = 34054,
			.ram = movew_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2455653367, 3097514333, 1750399056, 3064424468, 778108622, 4117709086, 1067371122, 1588031117, 3168974126, 3296619718, 90438066, 2272034074, 2113271325, 242001792, 249288479, 13100460, 16717880, 9992, 10547942
			},
			.prefetch0 = 34054,
			.prefetch1 = 29214,
			.ram = movew_final_ram_22,
			.ram_len = 8,
		},
		.transactions = movew_transactions_22,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "023 MOVE.w (xxx).w, (A3) 36b8",
		.initial = {
			.regs = {
				1191922627, 2484920945, 666647994, 1635651995, 3044978834, 2477268139, 1409322146, 2639107777, 942334791, 3762982804, 3409469604, 4180229587, 242854336, 4065908702, 1459139428, 5041090, 3624812, 787, 6275398
			},
			.prefetch0 = 14008,
			.prefetch1 = 47635,
			.ram = movew_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1191922627, 2484920945, 666647994, 1635651995, 3044978834, 2477268139, 1409322146, 2639107777, 942334791, 3762982804, 3409469604, 4180229587, 242854336, 4065908702, 1459139428, 5041090, 3624798, 8979, 3735424940
			},
			.prefetch0 = 42002,
			.prefetch1 = 61553,
			.ram = movew_final_ram_23,
			.ram_len = 28,
		},
		.transactions = movew_transactions_23,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "024 MOVE.w (A6), (d8, A6, Xn) 3d96",
		.initial = {
			.regs = {
				1456101807, 3120949087, 875718540, 3342727064, 1932625819, 2815473103, 672670956, 2896900321, 3548999814, 4253213504, 1804587913, 1077471010, 483694341, 2829457895, 3996168004, 8187046, 4025946, 42522, 13931040
			},
			.prefetch0 = 15766,
			.prefetch1 = 18896,
			.ram = movew_initial_ram_24,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1456101807, 3120949087, 875718540, 3342727064, 1932625819, 2815473103, 672670956, 2896900321, 3548999814, 4253213504, 1804587913, 1077471010, 483694341, 2829457895, 3996168004, 8187046, 4025932, 9744, 3695594726
			},
			.prefetch0 = 47782,
			.prefetch1 = 57230,
			.ram = movew_final_ram_24,
			.ram_len = 30,
		},
		.transactions = movew_transactions_24,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "025 MOVE.w D3, (A3) 3683",
		.initial = {
			.regs = {
				1546796705, 2244940678, 1283870312, 1809355420, 2095130489, 3018496072, 1834652893, 3634809574, 2374348455, 2527409983, 815576317, 2056245442, 2038322909, 2888051999, 781343025, 5500774, 7948850, 33560, 16204458
			},
			.prefetch0 = 13955,
			.prefetch1 = 20774,
			.ram = movew_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1546796705, 2244940678, 1283870312, 1809355420, 2095130489, 3018496072, 1834652893, 3634809574, 2374348455, 2527409983, 815576317, 2056245442, 2038322909, 2888051999, 781343025, 5500774, 7948850, 33560, 16204460
			},
			.prefetch0 = 20774,
			.prefetch1 = 9866,
			.ram = movew_final_ram_25,
			.ram_len = 8,
		},
		.transactions = movew_transactions_25,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "026 MOVE.w (A0)+, D7 3e18",
		.initial = {
			.regs = {
				4107924372, 2105054134, 2510000291, 299013019, 4123386862, 2200000195, 3190241299, 4001106586, 2489243278, 2864500192, 4147636483, 3372436196, 1105937572, 428528223, 1978417246, 7681204, 4172468, 8202, 11784022
			},
			.prefetch0 = 15896,
			.prefetch1 = 38362,
			.ram = movew_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4107924372, 2105054134, 2510000291, 299013019, 4123386862, 2200000195, 3190241299, 4001126800, 2489243280, 2864500192, 4147636483, 3372436196, 1105937572, 428528223, 1978417246, 7681204, 4172468, 8192, 11784024
			},
			.prefetch0 = 38362,
			.prefetch1 = 5324,
			.ram = movew_final_ram_26,
			.ram_len = 8,
		},
		.transactions = movew_transactions_26,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "027 MOVE.w D6, -(A3) 3706",
		.initial = {
			.regs = {
				183751754, 2926855103, 4078655751, 2617716365, 3530705059, 2493695104, 3785785317, 3179027228, 3886786461, 1696739476, 2581084801, 77372571, 218360211, 1661807568, 2630249345, 5066692, 9882578, 41500, 15736948
			},
			.prefetch0 = 14086,
			.prefetch1 = 28864,
			.ram = movew_initial_ram_27,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				183751754, 2926855103, 4078655751, 2617716365, 3530705059, 2493695104, 3785785317, 3179027228, 3886786461, 1696739476, 2581084801, 77372569, 218360211, 1661807568, 2630249345, 5066692, 9882564, 8720, 3268333170
			},
			.prefetch0 = 11997,
			.prefetch1 = 2908,
			.ram = movew_final_ram_27,
			.ram_len = 28,
		},
		.transactions = movew_transactions_27,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "028 MOVE.w D6, (A0)+ 30c6",
		.initial = {
			.regs = {
				466997527, 2860898655, 2014701574, 1312257423, 2727681483, 4127495770, 4280270740, 3131049140, 2491116773, 3695518748, 2285438856, 3488394961, 2269980140, 2033512412, 3480028506, 319378, 11612938, 9502, 4219336
			},
			.prefetch0 = 12486,
			.prefetch1 = 37220,
			.ram = movew_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				466997527, 2860898655, 2014701574, 1312257423, 2727681483, 4127495770, 4280270740, 3131049140, 2491116773, 3695518748, 2285438856, 3488394961, 2269980140, 2033512412, 3480028506, 319378, 11612924, 9496, 2043738122
			},
			.prefetch0 = 14382,
			.prefetch1 = 51679,
			.ram = movew_final_ram_28,
			.ram_len = 26,
		},
		.transactions = movew_transactions_28,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "029 MOVE.w D6, (A5) 3a86",
		.initial = {
			.regs = {
				3301773821, 1625439980, 3574915851, 3745004219, 101743674, 1258898492, 2730400706, 3051850883, 2441340444, 1256131524, 1155428728, 2648675553, 549630912, 4103041554, 3064920127, 4471894, 11932664, 8718, 16183374
			},
			.prefetch0 = 14982,
			.prefetch1 = 34931,
			.ram = movew_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3301773821, 1625439980, 3574915851, 3745004219, 101743674, 1258898492, 2730400706, 3051850883, 2441340444, 1256131524, 1155428728, 2648675553, 549630912, 4103041554, 3064920127, 4471894, 11932664, 8712, 16183376
			},
			.prefetch0 = 34931,
			.prefetch1 = 58058,
			.ram = movew_final_ram_29,
			.ram_len = 8,
		},
		.transactions = movew_transactions_29,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "030 MOVE.w (A5), (A1) 3295",
		.initial = {
			.regs = {
				2099900453, 1514072997, 1564288874, 10657279, 1606826925, 1550221196, 1494953010, 3877784951, 2626005091, 565698609, 1875447614, 2923737341, 3031649385, 458294308, 572037067, 10958810, 16530148, 10008, 812538
			},
			.prefetch0 = 12949,
			.prefetch1 = 23774,
			.ram = movew_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2099900453, 1514072997, 1564288874, 10657279, 1606826925, 1550221196, 1494953010, 3877784951, 2626005091, 565698609, 1875447614, 2923737341, 3031649385, 458294308, 572037067, 10958810, 16530134, 10008, 2379256052
			},
			.prefetch0 = 30143,
			.prefetch1 = 38633,
			.ram = movew_final_ram_30,
			.ram_len = 28,
		},
		.transactions = movew_transactions_30,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "031 MOVE.w (A4), (d8, A4, Xn) 3994",
		.initial = {
			.regs = {
				48861697, 4290021522, 627861150, 3901831343, 1325787220, 1116244655, 2627490762, 3484008884, 981149110, 2662957954, 201619352, 1809373416, 634899622, 4235973885, 2852735765, 10480072, 12611716, 41746, 2033064
			},
			.prefetch0 = 14740,
			.prefetch1 = 7737,
			.ram = movew_initial_ram_31,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				48861697, 4290021522, 627861150, 3901831343, 1325787220, 1116244655, 2627490762, 3484008884, 981149110, 2662957954, 201619352, 1809373416, 634899622, 4235973885, 2852735765, 10480072, 12611702, 8976, 3032887260
			},
			.prefetch0 = 26455,
			.prefetch1 = 10055,
			.ram = movew_final_ram_31,
			.ram_len = 30,
		},
		.transactions = movew_transactions_31,
		.transactions_len = 17,
		.lenght = 68,
	},
};

#endif /* RBT_MOVEW_H */