#ifndef _RBT_CORE_CPU_HPP
#define _RBT_CORE_CPU_HPP

#include "core/EffectiveAddress.hpp"
#include "core/Mmu.hpp"
#include "core/decoder.hpp"
#include "types.hpp"

namespace rbt {

// | F | E | D | C | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
// | T | 0 | S | 0 | 0 | I | I | I | 0 | 0 | 0 | X | N | Z | V | C |
enum class StatusFlag : u8 {
	Carry = 0,
	Overflow = 1,
	Zero = 2,
	Negative = 3,
	Extend = 4,
	InterruptMask0 = 8,
	InterruptMask1 = 9,
	InterruptMask2 = 10,
	SupervisorMode = 13,
	TraceMode = 15,
};

struct CpuState {
	u32 pc;	 // Program Counter
	u32 vbr; // Vector Base Register
	u16 sr;	 // Status Register

	u32 reg_data[8];
	u32 reg_addr[7];
	u32 reg_usp; // User Stack Pointer
	u32 reg_ssp; // Supervisor Stack Pointer

	constexpr bool get_flag(StatusFlag flag) const {
		return (sr >> static_cast<u8>(flag)) & 0x01;
	}

	constexpr bool set_flag(StatusFlag flag) {
		bool old = get_flag(flag);

		sr |= 1 << static_cast<u8>(flag);
		return old;
	}

	constexpr bool clear_flag(StatusFlag flag) {
		bool old = get_flag(flag);

		sr &= ~(1 << static_cast<u8>(flag));
		return old;
	}

	constexpr bool toggle_flag(StatusFlag flag) {
		bool old = get_flag(flag);

		sr ^= 1 << static_cast<u8>(flag);
		return old;
	}

	u32& get_address_register(u8 reg) {
		if (get_flag(StatusFlag::SupervisorMode)) {
			return reg == 7 ? reg_ssp : reg_addr[reg];
		}
		return reg == 7 ? reg_usp : reg_addr[reg];
	}
};

class Cpu {
public:
	Cpu();

private:
	Mmu m_mmu;
	CpuState m_state;

	void op_or(const Instruction& instr);
	void op_and(const Instruction& instr);
	void op_sub(const Instruction& instr);
	void op_add(const Instruction& instr);
	void op_eor(const Instruction& instr);
	void op_cmp(const Instruction& instr);
	void op_btst(const Instruction& instr);
	void op_bchg(const Instruction& instr);
	void op_bclr(const Instruction& instr);
	void op_bset(const Instruction& instr);
	void op_moves(const Instruction& instr);
	void op_movep(const Instruction& instr);
};

} // namespace rbt

#endif
