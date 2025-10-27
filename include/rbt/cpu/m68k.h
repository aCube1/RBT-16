#ifndef _RBT_M68K_H
#define _RBT_M68K_H

#include "rbt/basic_types.h"

typedef struct RBT_StatusRegister {
	bool carry;
	bool overflow;
	bool zero;
	bool negative;
	bool extend;
	u8 interrupt_priority;
	// bool master;
	bool supervisor;
	// bool trace0;
	bool trace1;
} RBT_StatusRegister;

typedef struct RBT_Registers {
	u32 pc;	 // Current Program Counter
	u32 usp; // User Stack Pointer
	u32 ssp; // System Stack Pointer

	RBT_StatusRegister sr;
} RBT_Registers;

#endif
