#include <iostream>
#include <sstream>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

std::string	check_input(void);

int	main(void) {
	std::string	input;
	PhoneBook	phonebook;

	while (1) {
		std::cout << "Enter a command: ";
		input = check_input();
		if (input == "ADD") {
			phonebook.add();
		}
		else if (input == "SEARCH") {
			phonebook.search();
		}
		else if (input == "EXIT") {
			phonebook.exit();
			break;
		}
		else {
			std::cout << "Invalid command" << std::endl;
		}
	}
	return (0);
}