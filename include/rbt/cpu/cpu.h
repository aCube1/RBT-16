#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

typedef RBT_ErrorCode (*RBT_CpuDebugHook)(void *userdata, const RBT_Instruction *instr);

typedef struct RBT_CpuConfig {
	RBT_CpuModel model;

	RBT_CpuDebugHook hook;
	void *userdata;
} RBT_CpuConfig;

typedef struct RBT_Cpu RBT_Cpu;

[[nodiscard]] RBT_Cpu *rbt_create_cpu(const RBT_CpuConfig *config);
void rbt_destroy_cpu(RBT_Cpu *cpu);

void rbt_cpu_attach_bus(RBT_Cpu *cpu, RBT_MemoryBus *bus);

RBT_ErrorCode rbt_cpu_reset(RBT_Cpu *cpu);
RBT_ErrorCode rbt_cpu_step(RBT_Cpu *cpu, u16 *out_cycles);
