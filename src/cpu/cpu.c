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

	return RBT_ERR_SUCCESS;
}

RBT_ErrorCode rbt_cpu_step(RBT_Cpu *cpu, u16 *out_cycles) {
	assert(cpu);

	(void)out_cycles;

	return RBT_ERR_SUCCESS;
}
