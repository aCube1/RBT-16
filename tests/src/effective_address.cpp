#include "core/EffectiveAddress.hpp"
#include "core/Mmu.hpp"

#include <catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("effective_address - Dn", "[AddressMode]") {
	rbt::Mmu mmu { 1 };

	constexpr rbt::EffectiveAddress expected = {
		.mode = rbt::AddressMode::DirectData,
		.reg_type = rbt::RegisterType::Data,
		.reg = 0b000,
		.bytes_read = 0,
		.offset = 0,
		.absolute = 0,
		.index = std::nullopt,
	};

	auto ea = rbt::EffectiveAddress::decode(0b000, 0b000, mmu, 0x00);

	REQUIRE(ea);
	REQUIRE(*ea == expected);
}
