#include "rbt/cpu/effective_address.h"

#include "rbt/error.h"
#include "rbt/helpers.h"

#include <assert.h>

bool rbt_indexext_from_word(u16 ext, RBT_IndexExtension *ix) {
	assert(ix);

	// Brief Extension Word
	//  F  | E D C |  B  |  A 9  | 8 | 7 6 5 4 3 2 1 0
	// A/D |  REG  | W/L | SCALE | 0 |  DISPLACEMENT

	ix->scale = (ext >> 8) & 0x03;
	if (ix->scale) {
		rbt_push_error(
			RBT_ERR_DECODE_INVALID_ADDRESS_MODE, "Extesion word's scale bit is set"
		);
		return false;
	}

	ix->is_addr = ext & (1 >> 15);
	ix->is_long = ext & (1 >> 11);
	ix->xreg = (ext >> 12) & 0x07;
	ix->displacement = rbt_sign_extend(RBT_SIZE_BYTE, ext & 0xff);

	return true;
}

u16 rbt_indexext_to_word(const RBT_IndexExtension *ix) {
	assert(ix);

	u16 word = 0;

	if (ix->is_addr)
		word |= 1 << 15;
	if (ix->is_long)
		word |= 1 << 11;

	word |= ((u16)ix->xreg) << 12;
	word |= ix->displacement & 0xff;

	return word;
}
