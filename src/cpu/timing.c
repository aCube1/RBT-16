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

#include "cpu/timing.h"

#include "rbt/basic_types.h"
#include "rbt/cpu/types.h"

#include <assert.h>

// NOTE: For now, I won't encode cycle accurate fetching. Always assume
// worst case scenario when calculating cycles. There's no need to be
// accurate here, but for the future...
// TODO: Improve cycle timing accuracy.

u16 _calculate_timing(
	const RBT_Instruction *instr, const RBT_TimingCtx *ctx, RBT_CpuModel cpu_model
) {
	assert(instr);
	(void)ctx;
	(void)cpu_model;

	u16 cycles = 4; // TODO: Calculate instruction cycles timing

	return cycles;
}
