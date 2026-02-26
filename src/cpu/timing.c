#include "rbt/cpu/timing.h"

#include "rbt/cpu/decode.h"
#include "rbt/cpu/effective_address.h"

// NOTE: For now, I won't encode cycle accurate fetching. Always assume
// worst case scenario when calculating cycles. There's no need to be
// accurate here, but for the future...
// TODO: Improve cycle timing accuracy.

u16 rbt_calculate_timing(const RBT_Instruction *instr) {
	assert(instr);

	u16 cycles = 0;

	return cycles;
}
