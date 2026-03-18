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
#include "rbt/cpu/bus.h"
#include "rbt/cpu/cpu.h"
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
