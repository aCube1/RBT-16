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

	u16 cycles = 4; // TODO: Calculate instruction cycles timing

	return cycles;
}
