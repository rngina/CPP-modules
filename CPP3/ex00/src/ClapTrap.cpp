#include "../includes/ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(std::string name) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	this->name = name;
	std::cout << "ClapTrap constructor called for " << this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << this->name << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	
}