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

#include "rbt/cpu/cpu.h"

#include "cpu/cpu_internal.h"
#include "cpu/decode.h"
#include "cpu/timing.h"
#include "error.h"
#include "rbt/basic_types.h"
#include "rbt/cpu/bus.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

// source-inline-begin
#include "cpu/cpu_execute.inc"
// source-inline-end

static RBT_ErrorCode _cpu_check_exception(RBT_Cpu *cpu) {
	assert(cpu);

	// Exception Processing: Group 0
	// 0: Reset - asserted at startup
	// 1: Address Error - Thrown by bus
	// 2: Bus Error - Thrown by bus
	if (cpu->pending.address_error) {
		cpu->pending.address_error = false;
		return _cpu_raise_exception(cpu, _VEC_ADDR_ERROR);
	}
	if (cpu->pending.bus_error) {
		cpu->pending.bus_error = false;
		return _cpu_raise_exception(cpu, _VEC_BUS_ERROR);
	}

	// Exception Processing: Group 1
	// 3: Trace
	// 4: Interrupt
	// 5: Illegal - Check at decode or Instruction
	// 6: Privilege - Check at execute
	if (cpu->state.sr.trace1) {
		return _cpu_raise_exception(cpu, _VEC_TRACE);
	}
	if (cpu->pending.interrupt
		&& cpu->pending.interrupt_level > cpu->state.sr.interrupt_priority) {
		RBT_CpuVector autovec = _VEC_AUTOVEC_L1 + (cpu->pending.interrupt_level - 1);
		RBT_ErrorCode err = _cpu_raise_exception(cpu, autovec);
		if (err)
			return err;

		cpu->pending.interrupt = false;
		cpu->state.sr.interrupt_priority = cpu->pending.interrupt_level;
	}

	// Exception Processing: Group 2
	// 7: TRAP/TRAVP - Instruction
	// 8: CHK - Instruction
	// 9: Zero Div - Instruction

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode _cpu_raise_exception(RBT_Cpu *cpu, RBT_CpuVector vec) {
	assert(cpu);

	// TODO: Raise exception and push stack frame

	return RBT_ERR_SUCCESS;
}

RBT_Cpu *rbt_create_cpu(const RBT_CpuConfig *config) {
	RBT_Cpu *cpu = malloc(sizeof(RBT_Cpu));
	if (!cpu) {
		_push_fatal(
			RBT_ERR_SYS_OUT_OF_MEMORY, "Failed to allocate memory for CPU object"
		);
		return nullptr;
	}
	memset(cpu, 0, sizeof(RBT_Cpu));
	cpu->cfg.model = config ? config->model : RBT_CPU_M68000;
	cpu->cfg.hook = config ? config->hook : nullptr;
	cpu->cfg.userdata = config ? config->userdata : nullptr;

	return cpu;
}

void rbt_destroy_cpu(RBT_Cpu *cpu) {
	if (!cpu)
		return;
	free(cpu);
}

void rbt_cpu_attach_bus(RBT_Cpu *cpu, RBT_MemoryBus *bus) {
	assert(cpu);
	cpu->bus = bus;
}

RBT_ErrorCode rbt_cpu_reset(RBT_Cpu *cpu) {
	assert(cpu);
	assert(cpu->bus);

	memset(&cpu->state, 0, sizeof(RBT_CpuState));
	cpu->state.vbr = 0;

	u32 ssp_vec_addr = _get_vector_address(&cpu->state, _VEC_INITIAL_SSP);
	u32 pc_vec_addr = _get_vector_address(&cpu->state, _VEC_INITIAL_PC);

	RBT_ErrorCode err = rbt_bus_read_long(cpu->bus, ssp_vec_addr, &cpu->state.ssp);
	if (err)
		return err;

	err = rbt_bus_read_long(cpu->bus, pc_vec_addr, &cpu->state.pc);
	if (err)
		return err;

	cpu->state.sr.supervisor = true;	  // CPU is forced into supervisor
	cpu->state.sr.trace1 = false;		  // Disable tracing
	cpu->state.sr.interrupt_priority = 7; // Interrupt mask is set to 7

	// Mirror SSP into A7 since we are in supervisor mode
	cpu->state.gpr.sp = cpu->state.ssp;
	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_cpu_step(RBT_Cpu *cpu, u16 *out_cycles) {
	assert(cpu);
	assert(cpu->bus);

	RBT_ErrorCode err = _cpu_check_exception(cpu);
	if (err)
		return err;

	RBT_Instruction instr;
	err = _decode_instruction(cpu->bus, cpu->state.pc, &instr);
	if (err)
		return err;

	// Increment PC before executing next instruction
	cpu->state.pc += instr.len;

	err = _cpu_execute(&instr, cpu);
	if (err)
		return err;

	if (out_cycles)
		*out_cycles = _calculate_timing(&instr, &cpu->timing, cpu->cfg.model);
	memset(&cpu->timing, 0, sizeof(RBT_TimingCtx));

	return RBT_ERR_SUCCESS;
}
