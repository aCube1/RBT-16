#pragma once

#include "rbt/mmu.h"

// F  E  D C B A  9  8  7 6 5 4 3 2 1 0
// T0 T1 S M 0 I2 I1 I0 0 0 0 X N Z V C
typedef struct RBT_StatusRegister {
	bool carry;
	bool overflow;
	bool zero;
	bool negative;
	bool extend;
	u8 interrupt_priority;
	// bool master; // M68020+
	bool supervisor;
	// bool trace0; // M68020+
	bool trace1;
} RBT_StatusRegister;

typedef union RBT_GeneralRegisters {
	u32 flat[16]; // D0-D7 + A0-A7

	struct {
		u32 data[8]; // D0-D7
		u32 addr[8]; // A0-A7
	};
	struct {
		u32 __padding[15];
		u32 sp; // A7 - Stack Pointer
	};
} RBT_GeneralRegisters;

typedef struct RBT_Registers {
	u32 pc;	 // Current Program Counter
	u32 usp; // User Stack Pointer
	u32 ssp; // System Stack Pointer

	RBT_StatusRegister sr;
	RBT_GeneralRegisters gpr;

	// M68010+
	u32 vbr; // Vector Base Register
	u8 dfc;	 // Destination Function Code
	u8 sfc;	 // Source Function Code
} RBT_Registers;

typedef struct RBT_Cpu {
	RBT_GeneralRegisters regs;
	RBT_MemoryBus *bus;
} RBT_Cpu;

RBT_ErrorCode rbt_init_cpu(RBT_Cpu *cpu);
void rbt_deinit_cpu(RBT_Cpu *cpu);

[[nodiscard]] u16 rbt_pack_sr(const RBT_StatusRegister *sr);
void rbt_unpack_sr(RBT_StatusRegister *sr, u16 word);
