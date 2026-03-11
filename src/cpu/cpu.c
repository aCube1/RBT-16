#include "rbt/cpu/cpu.h"

#include "cpu/cpu_internal.h"
#include "error.h"
#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

#include <assert.h>
#include <stdlib.h>
#include <string.h>

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

	RBT_ErrorCode err = rbt_cpu_reset(cpu);
	if (err != RBT_ERR_SUCCESS) {
		_push_fatal(err, "Failed to initialize CPU");
		free(cpu);
		return nullptr;
	}
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

	(void)out_cycles;

	return RBT_ERR_SUCCESS;
}
