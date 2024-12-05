#include <string>
#include <iostream>
#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "";
	std::cout << BOLD_WHITE << "Default Animal constuctor" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy) : type(copy.type)
{
	std::cout << BOLD_WHITE << "Animal copy constuctor for " << type << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << BOLD_WHITE << "WrongAnimal copy assignment operator for " << type << RESET << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BOLD_WHITE << "Default WrongAnimal destuctor" << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << BOLD_WHITE << "Generic WrongAnimal sound" << RESET << std::endl;
}