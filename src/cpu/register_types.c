#include "rbt/cpu/register_types.h"

#include <assert.h>

inline u16 rbt_pack_sr(const RBT_StatusRegister *sr) {
	assert(sr);

	u16 word = 0;

	if (sr->carry)
		word |= 1 << 0;
	if (sr->overflow)
		word |= 1 << 1;
	if (sr->zero)
		word |= 1 << 2;
	if (sr->negative)
		word |= 1 << 3;
	if (sr->extend)
		word |= 1 << 4;

	word |= (sr->interrupt_priority & 0x07) << 8;

	// if (sr->master)
	//	word |= 1 << 12;
	if (sr->supervisor)
		word |= 1 << 13;
	// if (sr->trace0)
	//	word |= 1 << 14;
	if (sr->trace1)
		word |= 1 << 15;

	return word;
}

inline void rbt_unpack_sr(RBT_StatusRegister *sr, u16 word) {
	assert(sr);

	sr->carry = word & (1 << 0);
	sr->overflow = word & (1 << 1);
	sr->zero = word & (1 << 2);
	sr->negative = word & (1 << 3);
	sr->extend = word & (1 << 4);
	sr->interrupt_priority = (word >> 8) & 0x07;
	// sr->master = word & (1 << 12);
	sr->supervisor = word & (1 << 13);
	// sr->trace0 = word & (1 << 14);
	sr->trace1 = word & (1 << 15);
}
