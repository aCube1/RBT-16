#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/helpers.h"

typedef enum RBT_AddressMode {
	RBT_EA_DIRECT_DATA,			  // mode:000, reg:Dn  | Dn
	RBT_EA_DIRECT_ADDR,			  // mode:001, reg:An  | An
	RBT_EA_INDIRECT,			  // mode:010, reg:An  | (An)
	RBT_EA_INDIRECT_POSTINC,	  // mode:011, reg:An  | (An)+
	RBT_EA_INDIRECT_PREDEC,		  // mode:100, reg:An  | -(An)
	RBT_EA_INDIRECT_DISPLACEMENT, // mode:101, reg:An  | (d16, An)
	RBT_EA_INDIRECT_INDEXED,	  // mode:110, reg:An  | (d8, Xi, An)
	RBT_EA_ABSOLUTE_SHORT,		  // mode:111, reg:000 | (xxx).w
	RBT_EA_ABSOLUTE_LONG,		  // mode:111, reg:001 | (xxx).l
	RBT_EA_PC_DISPLACEMENT,		  // mode:111, reg:010 | (d16, PC)
	RBT_EA_PC_INDEXED,			  // mode:111, reg:011 | (d8, Xi, PC)
	RBT_EA_IMMEDIATE,			  // mode:111, reg:100 | #imm
} RBT_AddressMode;

typedef enum RBT_AddressClass {
	RBT_EA_CLASS_DREG = 1 << 0, // Dn
	RBT_EA_CLASS_AREG = 1 << 1, // An
	RBT_EA_CLASS_IND = 1 << 2,	// (An) / (An)+ / -(An) / (d16, An) / (d8, Xi, An)
	RBT_EA_CLASS_IDX = 1 << 3,	// (d8, Xi, An) / (d8, Xi, PC)
	RBT_EA_CLASS_ABS = 1 << 4,	// (xxx).w / (xxx).l
	RBT_EA_CLASS_PCR = 1 << 5,	// (d16, PC) / (d8, Xi, PC)
	RBT_EA_CLASS_DSP = 1 << 6,	// (d16, An/PC) / (d8, Xi, An/PC)
	RBT_EA_CLASS_IMM = 1 << 7,	// #imm
	RBT_EA_CLASS_REL = 1 << 8,	// (An)+ / -(An)
} RBT_AddressClass;

typedef struct RBT_IndexExtension {
	bool is_addr;
	bool is_long;
	u8 xreg;
	u8 scale; // M68020+; Must always be 0 on M68000/MC68008/MC68010
	i32 displacement;
} RBT_IndexExtension;

typedef struct RBT_IndirectDisp {
	u8 areg; // An
	i32 disp;
} RBT_IndirectDisp;

typedef struct RBT_IndirectIndexed {
	u8 areg; // An
	RBT_IndexExtension ix;
} RBT_IndirectIndexed;

typedef struct RBT_EffectiveAddress {
	RBT_AddressMode mode;
	RBT_OperandSize size;
	RBT_AddressClass class;
	u32 start_pc;

	union {
		u8 dreg;							  // EA = Dn
		u8 areg;							  // EA = An
		u8 indirect;						  // EA = (An) / (An) + SIZE / (An) - SIZE
		RBT_IndirectDisp indirect_disp;		  // EA = (An) + d16
		RBT_IndirectIndexed indirect_indexed; // EA = (An) + (Xi) + d8
		u32 absolute_short;					  // EA = (xxx).w | Sign Extended
		u32 absolute_long;					  // EA = (xxx).l
		i32 pc_disp;						  // EA = (PC) + d16
		RBT_IndexExtension pc_indexed;		  // EA = (PC) + (Xi) + d8
		u32 imm;							  // EA = #imm
	};
} RBT_EffectiveAddress;

bool rbt_indexext_from_word(u16 ext, RBT_IndexExtension *ix);
u16 rbt_indexext_to_word(const RBT_IndexExtension *ix);

// return UINT32_MAX as an error
u32 rbt_decode_effective_address(
	u8 mode,
	u8 reg,
	RBT_OperandSize size,
	RBT_MemoryBus *bus,
	u32 pc,
	RBT_EffectiveAddress *ea
);

// return words count or 0 if none
u8 rbt_encode_effective_address(const RBT_EffectiveAddress *ea, u16 *words);
