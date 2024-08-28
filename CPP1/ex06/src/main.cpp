#include "../includes/Harl.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 2) 
	{
		Harl		harl;
		std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		int 		i = 0;
		std::string level = argv[1];

		while (levels[i] != level && i < 4)
			i++;
		switch (i)
		{
			/* fallthrough */
			case 0:
				std::cout << "[DEBUG]" << std::endl;
				harl.complain("DEBUG");
				std::cout << std::endl;
			/* fallthrough */
			case 1:
				std::cout << "[INFO]" << std::endl;
				harl.complain("INFO");
				std::cout << std::endl;
			/* fallthrough */
			case 2:
				std::cout << "[WARNING]" << std::endl;
				harl.complain("WARNING");
				std::cout << std::endl;
			/* fallthrough */
			case 3:
				std::cout << "[ERROR]" << std::endl;
				harl.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
		}
	}
	else 
		std::cout << "Error : Enter one level of complaint" << std::endl;

	return 0;
}