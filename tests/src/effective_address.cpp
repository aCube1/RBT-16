#include "emu/EffectiveAddress.hpp"
#include "emu/Mmu.hpp"

#include <catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Dn", "AddressMode") {
	emu::Mmu mmu { 1 };

	auto ea = emu::EffectiveAddress::decode(0b000, 0b000, mmu, 0x00);

	REQUIRE(ea);
	REQUIRE(ea->mode == emu::AddressMode::DirectData);
	REQUIRE(ea->reg_type == emu::RegisterType::Data);
	REQUIRE(ea->reg == 0b000);
	REQUIRE(ea->bytes_read == 0);
	REQUIRE(ea->offset == 0);
	REQUIRE(ea->absolute == 0);
	REQUIRE(!ea->index);
}
