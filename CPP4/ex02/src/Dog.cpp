#include <string>
#include <iostream>
#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << BOLD_YELLOW << "Default Dog constuctor" << RESET << std::endl;
}

Dog::Dog(Dog &toCopy)
{
	this->type = toCopy.getType();
	this->brain = new Brain(*toCopy.brain);
	std::cout << BOLD_YELLOW << "Dog copy constuctor for " << type << RESET << std::endl;
}

Dog &Dog::operator=(Dog &toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.getType();
		this->brain = new Brain(*toCopy.brain);
	}
	std::cout << BOLD_YELLOW << "Dog copy assignment operator for " << type << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
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
