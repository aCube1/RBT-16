#include "rbt/cpu/effective_address.h"

#include "rbt/error.h"
#include "rbt/helpers.h"

#include <assert.h>
#include <string.h>

bool rbt_indexext_from_word(u16 ext, RBT_IndexExtension *ix) {
	assert(ix);

	// Brief Extension Word
	//  F  | E D C |  B  | A 9 8 | 7 6 5 4 3 2 1 0
	// A/D |  REG  | W/L | SCALE |  DISPLACEMENT

	ix->scale = rbt_bits(ext, 10, 8);
	if (ix->scale) {
		rbt_push_error(RBT_ERR_DECODE_INVALID_EA, "Extension word's scale bit is set");
		return false;
	}

	ix->is_addr = RBT_BIT(ext, 15);
	ix->is_long = RBT_BIT(ext, 11);
	ix->xreg = rbt_bits(ext, 12, 14);
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

u32 rbt_decode_effective_address(
	u8 mode,
	u8 reg,
	RBT_OperandSize size,
	RBT_MemoryBus *bus,
	u32 pc,
	RBT_EffectiveAddress *ea
) {
	assert(bus);
	assert(ea);

	memset(ea, 0, sizeof(RBT_EffectiveAddress));
	ea->size = size;
	ea->start_pc = pc;

	mode &= 0x07;
	reg &= 0x07;

	u32 bytes = 0;
	switch (mode) {
	case 0b000: // Dn
		ea->mode = RBT_EA_DIRECT_DATA;
		ea->dreg = reg;
		break;
	case 0b001: // An
		ea->mode = RBT_EA_DIRECT_ADDR;
		ea->areg = reg;
		break;
	case 0b010: // (An)
		ea->mode = RBT_EA_INDIRECT;
		ea->indirect = reg;
		break;
	case 0b011: // (An)+
		ea->mode = RBT_EA_INDIRECT_POSTINC;
		ea->indirect = reg;
		break;
	case 0b100: // -(An)
		ea->mode = RBT_EA_INDIRECT_PREDEC;
		ea->indirect = reg;
		break;
	case 0b101: { // (d16, An)
		u16 disp = rbt_bus_read_word(bus, pc);
		if (bus->error_code) {
			goto decoding_error;
		}
		bytes = 2;

		ea->mode = RBT_EA_INDIRECT_DISPLACEMENT;
		ea->indirect_disp.areg = reg;
		ea->indirect_disp.disp = rbt_sign_extend(RBT_SIZE_WORD, disp);
	} break;
	case 0b110: { // (d8, Xi, An)
		u16 ext = rbt_bus_read_word(bus, pc);
		if (bus->error_code) {
			goto decoding_error;
		}
		bytes = 2;

		ea->mode = RBT_EA_INDIRECT_INDEXED;
		ea->indirect_indexed.areg = reg;
		if (!rbt_indexext_from_word(ext, &ea->indirect_indexed.ix)) {
			goto decoding_error;
		}
	} break;
	case 0b111:
		switch (reg) {
		case 0b000: { // (xxx).w
			u16 abs = rbt_bus_read_word(bus, pc);
			if (bus->error_code) {
				goto decoding_error;
			}
			bytes = 2;

			ea->mode = RBT_EA_ABSOLUTE_SHORT;
			ea->absolute_short = rbt_sign_extend(RBT_SIZE_WORD, abs);
		} break;
		case 0b001: { // (xxx).l
			u32 abs = rbt_bus_read_long(bus, pc);
			if (bus->error_code) {
				goto decoding_error;
			}
			bytes = 4;

			ea->mode = RBT_EA_ABSOLUTE_LONG;
			ea->absolute_long = abs;
		} break;
		case 0b010: { // (d16, PC)
			u16 disp = rbt_bus_read_word(bus, pc);
			if (bus->error_code) {
				goto decoding_error;
			}
			bytes = 2;

			ea->mode = RBT_EA_PC_DISPLACEMENT;
			ea->pc_disp = rbt_sign_extend(RBT_SIZE_WORD, disp);
		} break;
		case 0b011: { // (d8, Xi, PC)
			u16 ext = rbt_bus_read_word(bus, pc);
			if (bus->error_code) {
				goto decoding_error;
			}
			bytes = 2;

			ea->mode = RBT_EA_PC_INDEXED;
			if (!rbt_indexext_from_word(ext, &ea->pc_indexed)) {
				goto decoding_error;
			}
		} break;
		case 0b100: { // #imm
			ea->mode = RBT_EA_IMMEDIATE;
			ea->imm = rbt_bus_load(bus, size, pc);
			if (bus->error_code) {
				goto decoding_error;
			}

			bytes = size;
		} break;
		default: goto decoding_error;
		}
	}

	return ea->start_pc + bytes;

decoding_error:
	rbt_push_error(
		RBT_ERR_DECODE_INVALID_EA, "Failed to decode effective address at: 0x%06x", pc
	);
	return UINT32_MAX;
}

u8 rbt_encode_effective_address(const RBT_EffectiveAddress *ea, u16 *words) {
	assert(ea);

	switch (ea->mode) {
	case RBT_EA_INDIRECT_DISPLACEMENT:
		if (words)
			words[0] = ea->indirect_disp.disp & 0xffff;
		return 1;
	case RBT_EA_INDIRECT_INDEXED:
		if (words)
			words[0] = rbt_indexext_to_word(&ea->indirect_indexed.ix);
		return 1;
	case RBT_EA_ABSOLUTE_SHORT:
		if (words)
			words[0] = ea->absolute_short & 0xffff;
		return 1;
	case RBT_EA_ABSOLUTE_LONG:
		if (words) {
			words[0] = (ea->absolute_long >> 16) & 0xffff;
			words[1] = ea->absolute_long & 0xffff;
		}
		return 2;
	case RBT_EA_PC_DISPLACEMENT:
		if (words)
			words[0] = ea->pc_disp & 0xffff;
		return 1;
	case RBT_EA_PC_INDEXED:
		if (words)
			words[0] = rbt_indexext_to_word(&ea->pc_indexed);
		return 1;
	case RBT_EA_IMMEDIATE:
		if (words) {
			if (ea->size == RBT_SIZE_LONG) {
				words[0] = (ea->imm >> 16) & 0xffff;
				words[1] = ea->imm & 0xffff;
			} else {
				words[0] = ea->imm & 0xffff;
			}
		}

		return ea->size == RBT_SIZE_LONG ? 2 : 1;
	default: break;
	}

	return 0;
}
