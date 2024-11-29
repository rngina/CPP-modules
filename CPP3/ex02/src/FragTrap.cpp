#include <iostream>
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << BOLD_MAGENTA << "[FragTrap] " << RESET << "Default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = ClapTrap::hitPoints;
	this->attackDamage = ClapTrap::attackDamage;
	this->energyPoints = ClapTrap::energyPoints;
	std::cout << BOLD_MAGENTA << "[FragTrap] " << RESET << "Constructor called for " << this->name << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
	std::cout << BOLD_MAGENTA << "[FragTrap] " << RESET << "Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << BOLD_MAGENTA << "[FragTrap] " << RESET << "Destructor called for " << this->name << std::endl;
}

// FragTrap &FragTrap::operator=(FragTrap &copy)
// {
// 	if (this != &copy)
// 	{
// 		this->name = copy.name;
// 		this->attackDamage = copy.attackDamage;
// 		this->hitPoints = copy.hitPoints;
// 		this->energyPoints = copy.energyPoints;
// 		std::cout << "FragTrap copy assignment operator called" << std::endl;
// 	}
// 	return *this;
// }

void FragTrap::highFivesGuys(void)
{
	std::cout << BOLD_MAGENTA << "[FragTrap] " << RESET << "High fives to FragTrap?... Guys..." << std::endl;
}
