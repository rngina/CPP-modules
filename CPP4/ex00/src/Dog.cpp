#include <string>
#include <iostream>
#include "../includes/Colours.hpp"
#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << BOLD_YELLOW << "Default Dog constuctor" << RESET << std::endl;
}

Dog::Dog(Dog &copy)
{
	this->type = copy.getType();
	std::cout << BOLD_YELLOW << "Dog copy constuctor for " << type << RESET << std::endl;
}

Dog &Dog::operator=(Dog &copy)
{
	if (this != &copy)
		this->type = copy.getType();
	std::cout << BOLD_YELLOW << "Dog copy assignment operator for " << type << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << BOLD_YELLOW << "Default Dog destuctor" << RESET << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << BOLD_YELLOW << "Woof" << RESET << std::endl;
}
