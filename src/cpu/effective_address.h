#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/cpu.h"
#include "rbt/cpu/mmu.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

bool _indexext_from_word(u16 ext, RBT_IndexExtension *ix);
u16 _indexext_to_word(const RBT_IndexExtension *ix);

// return next_pc, or UINT32_MAX as an error
u32 _ea_decode(
	u8 mode,
	u8 reg,
	RBT_OperandSize size,
	RBT_MemoryBus *bus,
	u32 pc,
	RBT_EffectiveAddress *ea
);

RBT_ErrorCode _ea_read(
	const RBT_EffectiveAddress *ea, RBT_OperandSize size, RBT_Cpu *cpu, u32 *out
);
RBT_ErrorCode _ea_write(
	const RBT_EffectiveAddress *ea, RBT_OperandSize size, RBT_Cpu *cpu, u32 in
);
