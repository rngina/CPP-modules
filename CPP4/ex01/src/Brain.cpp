#include <iostream>
#include "../includes/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "a";
	std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain(Brain &toCopy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = toCopy.ideas[i];
	std::cout << "Copy Constructor for Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain" << std::endl;
}

Brain &Brain::operator=(Brain &toCopy)
{
	if (this != &toCopy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = toCopy.ideas[i];
	}
	std::cout << "Brain Copy Assignment operator" << std::endl;
	return (*this);
}