#include <string>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include "../includes/PhoneBook.hpp"
#include "../includes/Contact.hpp"

std::string trunc_string(std::string str) {
	if (str.length() > 10) {
		str = str.substr(0, 9);
		str += ".";
	}
	if (str.length() < 10) {
		while (str.length() < 10) {
			str = " " + str;
		}
	}
	return (str);
}

void	show_contact(Contact contact, std::string index) {
	std::cout << "|" << trunc_string(index) << "|";
	std::cout << trunc_string(contact.get_first_name()) << "|";
	std::cout << trunc_string(contact.get_last_name()) << "|";
	std::cout << trunc_string(contact.get_nickname()) << "|" << std::endl;
}

void	show_specific(Contact contact)
{
	std::cout << "First name: " << contact.get_first_name() << std::endl;
	std::cout << "Last name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl;
}

void	replace_old_contact(Contact contacts[8], Contact new_contact) {
	for (int i = 0; i < 7; i++) {
		contacts[i] = contacts[i + 1];
	}
	contacts[7] = new_contact;
}

bool	is_valid(std::string& str) {
	bool	valid = false;

	if (str.empty()) {
		return false;
	}
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		if (*it != ' ' && *it != '\t' && *it != '\n' && *it != '\v' && *it != '\f' && *it != '\r') {
			valid = true;
			break;
		}
	}
	return valid;
}

std::string	check_input(void)
{
	while (1)
	{
		std::string	input;
		std::getline(std::cin, input);
		if (std::cin.eof())
			std::exit(0);
		if (!is_valid(input)) {
			std::cout << "Invalid input, enter again: " << std::endl;
			continue;
		}
		else
			return input;
	}
}

PhoneBook::PhoneBook(void) {
	this->contact_count = 0;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::add(void) {
	Contact	new_contact;
	std::string	input;

	std::cout << "Enter first name: ";
	input = check_input();
	new_contact.set_first_name(input);
	std::cout << "Enter last name: ";
	input = check_input();
	new_contact.set_last_name(input);
	std::cout << "Enter nickname: ";
	input = check_input();
	new_contact.set_nickname(input);
	std::cout << "Enter phone number: ";
	input = check_input();
	new_contact.set_phone_number(input);
	std::cout << "Enter darkest secret: ";
	input = check_input();
	new_contact.set_darkest_secret(input);
	if (this->contact_count < 8) {
		this->contacts[this->contact_count] = new_contact;
		this->contact_count++;
	}
	else
		replace_old_contact(this->contacts, new_contact);
}

void	PhoneBook::search(void){
	int	number;

	for (int i = 0; i < this->contact_count; i++) {
		std::stringstream ss;
		ss << i;
		std::string index = ss.str();
		show_contact(this->contacts[i], index);
	}

	std::string	input;
	std::cout << "Enter index of the contact you want to see: ";
	input = check_input();
	std::stringstream ss(input);
    ss >> number;
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7') {
		if (number >= this->contact_count) {
			std::cout << "Contact does not exist" << std::endl;
			return;
		}
		show_specific(this->contacts[input[0] - '0']);
	}
	else {
		std::cout << "Invalid index" << std::endl;
	}
}

void	PhoneBook::exit(void) {
	std::cout << "Exit" << std::endl;
}