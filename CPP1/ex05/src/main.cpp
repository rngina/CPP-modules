#include "../includes/Harl.hpp"
#include <iostream>

int	main(void) {
	Harl harl;

	std::cout << "__________________________________________________________________________________________________________________________________________" <<std::endl;
	harl.complain("DEBUG");
	std::cout << "__________________________________________________________________________________________________________________________________________" <<std::endl;
	harl.complain("INFO");
	std::cout << "__________________________________________________________________________________________________________________________________________" <<std::endl;
	harl.complain("WARNING");
	std::cout << "__________________________________________________________________________________________________________________________________________" <<std::endl;
	harl.complain("ERROR");
	std::cout << "__________________________________________________________________________________________________________________________________________" <<std::endl;
	harl.complain("TESTCASE");
	std::cout << "__________________________________________________________________________________________________________________________________________" <<std::endl;

	return 0;
}