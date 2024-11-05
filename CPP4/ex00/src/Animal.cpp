#include <string>
#include <iostream>
#include "../includes/Colours.hpp"
#include "../includes/Animal.hpp"

Animal::Animal()
{
	this->type = "";
	std::cout << BOLD_WHITE << "Default Animal constuctor" << RESET << std::endl;
}

Animal::Animal(Animal &copy) : type(copy.type)
{
	std::cout << BOLD_WHITE << "Animal copy constuctor for " << type << RESET << std::endl;
}

Animal &Animal::operator=(Animal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << BOLD_WHITE << "Animal copy assignment operator for " << type << RESET << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << BOLD_WHITE << "Default Animal destuctor" << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << BOLD_WHITE << "Generic animal sound" << RESET << std::endl;
}