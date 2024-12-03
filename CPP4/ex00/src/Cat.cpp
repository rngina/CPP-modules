#include <string>
#include <iostream>
#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << BOLD_MAGENTA << "Default Cat constuctor" << RESET << std::endl;
}

Cat::Cat(Cat &copy)
{
	this->type = copy.getType();
	std::cout << BOLD_MAGENTA << "Cat copy constuctor for " << type << RESET << std::endl;
}

Cat &Cat::operator=(Cat &copy)
{
	if (this != &copy)
		this->type = copy.getType();
	std::cout << BOLD_MAGENTA << "Cat copy assignment operator for " << type << RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << BOLD_MAGENTA << "Default Cat destuctor" << RESET << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << BOLD_MAGENTA << "Meow" << RESET << std::endl;
}
