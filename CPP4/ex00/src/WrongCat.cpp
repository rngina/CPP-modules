#include <string>
#include <iostream>
#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << BOLD_MAGENTA << "Default WrongCat constuctor" << RESET << std::endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
	this->type = copy.getType();
	std::cout << BOLD_MAGENTA << "WrongCat copy constuctor for " << type << RESET << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &copy)
{
	if (this != &copy)
		this->type = copy.getType();
	std::cout << BOLD_MAGENTA << "WrongCat copy assignment operator for " << type << RESET << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << BOLD_MAGENTA << "Default WrongCat destuctor" << RESET << std::endl;
}

std::string WrongCat::getType() const
{
	return (this->type);
}

void WrongCat::makeSound() const
{
	std::cout << BOLD_MAGENTA << "Meow" << RESET << std::endl;
}
