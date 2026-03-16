// RBT-16 - Fantasy Retro-Computer Inspired by the Amiga 500 and Atari ST.
// Copyright (C) 2026  aCube
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, see
// <https://www.gnu.org/licenses/>.

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
