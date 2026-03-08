#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/cpu/types.h"
#include "rbt/helpers.h"

bool _indexext_from_word(u16 ext, RBT_IndexExtension *ix);
u16 _indexext_to_word(const RBT_IndexExtension *ix);

// return UINT32_MAX as an error
u32 _decode_effective_address(
	u8 mode,
	u8 reg,
	RBT_OperandSize size,
	RBT_MemoryBus *bus,
	u32 pc,
	RBT_EffectiveAddress *ea
);
