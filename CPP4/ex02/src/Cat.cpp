#include <string>
#include <iostream>
#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << BOLD_MAGENTA << "Default Cat constuctor" << RESET << std::endl;
}

Cat::Cat(Cat &toCopy)
{
	this->type = toCopy.getType();
	this->brain = new Brain(*toCopy.brain);
	std::cout << BOLD_MAGENTA << "Cat copy constuctor for " << type << RESET << std::endl;
}

Cat &Cat::operator=(Cat &toCopy)
{
	if (this != &toCopy)
	{
		this->type = toCopy.getType();
		this->brain = new Brain(*toCopy.brain);
	}
	std::cout << BOLD_MAGENTA << "Cat copy assignment operator for " << type << RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
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

std::string Cat::getIdea(int num)
{
	if (num < 0 || num > 99)
		return "Idea does not exist: Out of range";
	else
		return this->brain->getIdea(num);
}

void Cat::setIdea(int num, std::string idea)
{
	if ((num < 0 || num > 99) || (idea.length() == 0))
		return ;
	else 
		this->brain->setIdea(num, idea);
}