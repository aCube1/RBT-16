#include "log.hpp"
#include "utils.hpp"

#include <cstdlib>

int main(int argc, char *argv[]) {
	RBT_UNUSED(argc);
	RBT_UNUSED(argv);

	rbt::log::debug("HI!");

	return EXIT_SUCCESS;
}
