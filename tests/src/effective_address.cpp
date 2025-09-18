#include "core/EffectiveAddress.hpp"
#include "core/Mmu.hpp"

#include <catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators.hpp>
#include <functional>

namespace Catch {
template <>
struct StringMaker<rbt::EffectiveAddress> {
	static std::string convert(const rbt::EffectiveAddress& ea) {
		return std::format("{}", ea);
	}
};
} // namespace Catch

struct EffectiveAddressTest {
	const char *label;
	u8 mode;
	u8 reg;
	u8 size;
	std::function<rbt::EffectiveAddress(u32, rbt::Mmu&)> make_expected = nullptr;
};

TEST_CASE("effective_address", "[AddressMode]") {
	auto test = GENERATE(
		EffectiveAddressTest {
			.label = "Dn",
			.mode = 0b000,
			.reg = 0b000,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				_UNUSED(mmu);
				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::DirectData,
					.reg_type = rbt::RegisterType::Data,
					.size = rbt::OperandSize::None,
					.reg = 0b000,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 0,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "An",
			.mode = 0b001,
			.reg = 0b001,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				_UNUSED(mmu);
				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::DirectAddress,
					.reg_type = rbt::RegisterType::Address,
					.size = rbt::OperandSize::None,
					.reg = 0b001,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 0,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(An)",
			.mode = 0b010,
			.reg = 0b010,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				_UNUSED(mmu);
				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::Indirect,
					.reg_type = rbt::RegisterType::Address,
					.size = rbt::OperandSize::None,
					.reg = 0b010,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 0,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(An)+",
			.mode = 0b011,
			.reg = 0b011,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				_UNUSED(mmu);
				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::IndirectPostInc,
					.reg_type = rbt::RegisterType::Address,
					.size = rbt::OperandSize::None,
					.reg = 0b011,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 0,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "-(An)",
			.mode = 0b100,
			.reg = 0b100,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				_UNUSED(mmu);
				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::IndirectPreDec,
					.reg_type = rbt::RegisterType::Address,
					.size = rbt::OperandSize::None,
					.reg = 0b100,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 0,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(d16, An)",
			.mode = 0b101,
			.reg = 0b101,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				mmu.write_be16(pc, 0xbeef);

				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::IndirectDisplacement,
					.reg_type = rbt::RegisterType::Address,
					.size = rbt::OperandSize::None,
					.reg = 0b101,
					.displacement = (i16)0xbeef,
					.absolute = 0,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 2,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(d8, An, Xn)",
			.mode = 0b110,
			.reg = 0b110,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				auto ix = rbt::IndexExtension {
					.is_addr = true,
					.is_long = false,
					.reg = 0b001,
					.scale = 0,
					.displacement = (i8)0xea,
				};
				mmu.write_be16(pc, ix.encode());

				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::IndirectIndex,
					.reg_type = rbt::RegisterType::Address,
					.size = rbt::OperandSize::None,
					.reg = 0b110,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0,
					.index = ix,
					.program_counter = pc,
					.bytes_read = 2,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(xxx).W",
			.mode = 0b111,
			.reg = 0b000,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				mmu.write_be16(pc, 0xbeef);

				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::AbsoluteShort,
					.reg_type = rbt::RegisterType::None,
					.size = rbt::OperandSize::None,
					.reg = 0b000,
					.displacement = 0,
					.absolute = 0xbeef,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 2,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(xxx).L",
			.mode = 0b111,
			.reg = 0b001,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				mmu.write_be32(pc, 0xdeadbeef);

				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::AbsoluteLong,
					.reg_type = rbt::RegisterType::None,
					.size = rbt::OperandSize::None,
					.reg = 0b001,
					.displacement = 0,
					.absolute = 0xdeadbeef,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 4,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(d16, PC)",
			.mode = 0b111,
			.reg = 0b010,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				mmu.write_be16(pc, 0xbeef);

				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::ProgramCounterDisplacement,
					.reg_type = rbt::RegisterType::ProgramCounter,
					.size = rbt::OperandSize::None,
					.reg = 0b010,
					.displacement = (i16)0xbeef,
					.absolute = 0,
					.immediate = 0,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 2,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "(d8, PC, Xn)",
			.mode = 0b111,
			.reg = 0b011,
			.size = 0b11,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				auto ix = rbt::IndexExtension {
					.is_addr = true,
					.is_long = false,
					.reg = 0b011,
					.scale = 0,
					.displacement = (i8)0xea,
				};
				mmu.write_be16(pc, ix.encode());

				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::ProgramCounterIndex,
					.reg_type = rbt::RegisterType::ProgramCounter,
					.size = rbt::OperandSize::None,
					.reg = 0b011,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0,
					.index = ix,
					.program_counter = pc,
					.bytes_read = 2,
				};
			}),
		},
		EffectiveAddressTest {
			.label = "#imm",
			.mode = 0b111,
			.reg = 0b100,
			.size = 0b00,
			.make_expected = ([](u32 pc, rbt::Mmu& mmu) {
				mmu.write_be16(pc, 0x00ad);

				return rbt::EffectiveAddress {
					.mode = rbt::AddressMode::Immediate,
					.reg_type = rbt::RegisterType::None,
					.size = rbt::OperandSize::Byte,
					.reg = 0b100,
					.displacement = 0,
					.absolute = 0,
					.immediate = 0x00ad,
					.index = std::nullopt,
					.program_counter = pc,
					.bytes_read = 2,
				};
			}),
		}
	);

	rbt::Mmu mmu { 4 };
	u32 pc = 0x00;

	DYNAMIC_SECTION("Mode: " << test.label) {
		auto expected = test.make_expected(pc, mmu);

		auto ea = rbt::EffectiveAddress::decode(test.mode, test.reg, test.size, mmu, pc);
		REQUIRE(ea);

		CHECK(*ea == expected);
	}
}
