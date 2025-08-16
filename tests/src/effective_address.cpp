#include "core/EffectiveAddress.hpp"
#include "core/Mmu.hpp"

#include <catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>

static rbt::Mmu _mmu { 4 };
static u32 _program_counter = 0x00;

namespace Catch {
template <>
struct StringMaker<rbt::EffectiveAddress> {
	static std::string convert(const rbt::EffectiveAddress& ea) {
		return std::format("{}", ea);
	}
};
} // namespace Catch

TEST_CASE("effective_address - Dn", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::DirectData,
		.reg_type = rbt::RegisterType::Data,
		.reg = 0b000,
		.bytes_read = 0,
		.offset = 0,
		.absolute = 0,
		.index = std::nullopt,
	};

	auto ea = rbt::EffectiveAddress::decode(0b000, 0b000, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 2;
}

TEST_CASE("effective_address - An", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::DirectAddress,
		.reg_type = rbt::RegisterType::Address,
		.reg = 0b001,
		.bytes_read = 0,
		.offset = 0,
		.absolute = 0,
		.index = std::nullopt,
	};

	auto ea = rbt::EffectiveAddress::decode(0b001, 0b001, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 2;
}

TEST_CASE("effective_address - (An)", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::Indirect,
		.reg_type = rbt::RegisterType::Address,
		.reg = 0b010,
		.bytes_read = 0,
		.offset = 0,
		.absolute = 0,
		.index = std::nullopt,
	};

	auto ea = rbt::EffectiveAddress::decode(0b010, 0b010, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 2;
}

TEST_CASE("effective_address - (An)+", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::IndirectPostInc,
		.reg_type = rbt::RegisterType::Address,
		.reg = 0b011,
		.bytes_read = 0,
		.offset = 0,
		.absolute = 0,
		.index = std::nullopt,
	};

	auto ea = rbt::EffectiveAddress::decode(0b011, 0b011, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 2;
}

TEST_CASE("effective_address - -(An)", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::IndirectPreDec,
		.reg_type = rbt::RegisterType::Address,
		.reg = 0b100,
		.bytes_read = 0,
		.offset = 0,
		.absolute = 0,
		.index = std::nullopt,
	};

	auto ea = rbt::EffectiveAddress::decode(0b100, 0b100, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 2;
}

TEST_CASE("effective_address - (d16, An)", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::IndirectOffset,
		.reg_type = rbt::RegisterType::Address,
		.reg = 0b101,
		.bytes_read = 2,
		.offset = 0xf00f,
		.absolute = 0,
		.index = std::nullopt,
	};

	_mmu.write_be16(_program_counter, 0xf00f);

	auto ea = rbt::EffectiveAddress::decode(0b101, 0b101, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 4;
}

TEST_CASE("effective_address - (d8, An, Xn)", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::IndirectIndexed,
		.reg_type = rbt::RegisterType::Address,
		.reg = 0b110,
		.bytes_read = 2,
		.offset = 0,
		.absolute = 0,
		.index =
			rbt::IndexExtension {
				.mode = true,
				.size = true,
				.reg = 0b100,
				.scale = 0b000,
				.offset = 0x7c,
			},
	};

	_mmu.write_be16(_program_counter, expected.index->encode());

	auto ea = rbt::EffectiveAddress::decode(0b110, 0b110, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 4;
}

TEST_CASE("effective_address - (xxx).W", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::AbsoluteShort,
		.reg_type = rbt::RegisterType::None,
		.reg = 0b000,
		.bytes_read = 2,
		.offset = 0,
		.absolute = 0xc0fe,
		.index = std::nullopt,
	};

	_mmu.write_be16(_program_counter, 0xc0fe);

	auto ea = rbt::EffectiveAddress::decode(0b111, 0b000, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 4;
}

TEST_CASE("effective_address - (xxx).L", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::AbsoluteLong,
		.reg_type = rbt::RegisterType::None,
		.reg = 0b001,
		.bytes_read = 4,
		.offset = 0,
		.absolute = 0xc0febabe,
		.index = std::nullopt,
	};

	_mmu.write_be32(_program_counter, 0xc0febabe);

	auto ea = rbt::EffectiveAddress::decode(0b111, 0b001, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 8;
}

TEST_CASE("effective_address - (d16, PC)", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::ProgramCounterOffset,
		.reg_type = rbt::RegisterType::ProgramCounter,
		.reg = 0b010,
		.bytes_read = 2,
		.offset = 0xbabe,
		.absolute = 0,
		.index = std::nullopt,
	};

	_mmu.write_be16(_program_counter, 0xbabe);

	auto ea = rbt::EffectiveAddress::decode(0b111, 0b010, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 4;
}

TEST_CASE("effective_address - (d8, PC, Xn)", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::ProgramCounterIndexed,
		.reg_type = rbt::RegisterType::ProgramCounter,
		.reg = 0b011,
		.bytes_read = 2,
		.offset = 0,
		.absolute = 0,
		.index =
			rbt::IndexExtension {
				.mode = true,
				.size = true,
				.reg = 0b011,
				.scale = 0b000,
				.offset = 0x1f,
			},
	};

	_mmu.write_be16(_program_counter, expected.index->encode());

	auto ea = rbt::EffectiveAddress::decode(0b111, 0b011, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 4;
}

TEST_CASE("effective_address - #imm", "[AddressMode]") {
	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::Immediate,
		.reg_type = rbt::RegisterType::None,
		.reg = 0b100,
		.bytes_read = 0,
		.offset = 0,
		.absolute = 0,
		.index = std::nullopt,
	};

	auto ea = rbt::EffectiveAddress::decode(0b111, 0b100, _mmu, _program_counter);

	REQUIRE(ea);
	CHECK(*ea == expected);
	INFO(std::format("expected:{}\nactual:{}", expected, *ea));

	_program_counter += 2;
}
