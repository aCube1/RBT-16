#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/error_codes.h"

typedef RBT_ErrorCode (*RBT_CpuTraceHook)(void *userdata, u32 pc, u16 opcode);

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

typedef struct RBT_CpuState {
	u32 pc;	 // Current Program Counter
	u32 usp; // User Stack Pointer
	u32 ssp; // System Stack Pointer

	RBT_StatusRegister sr;
	RBT_GeneralRegisters gpr;

	// M68010+
	u32 vbr; // Vector Base Register
	u8 dfc;	 // Destination Function Code
	u8 sfc;	 // Source Function Code
} RBT_CpuState;

typedef struct RBT_CpuConfig {
	void *userdata;
	RBT_CpuTraceHook hook;
} RBT_CpuConfig;

typedef struct RBT_Cpu RBT_Cpu;

[[nodiscard]] RBT_Cpu *rbt_create_cpu(const RBT_CpuConfig *config);
void rbt_destroy_cpu(RBT_Cpu *cpu);

void rbt_cpu_attach_bus(RBT_Cpu *cpu, RBT_MemoryBus *bus);

RBT_ErrorCode rbt_cpu_reset(RBT_Cpu *cpu);
RBT_ErrorCode rbt_cpu_step(RBT_Cpu *cpu, u16 *out_cycles);
