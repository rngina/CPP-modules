#include <iostream>
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << BOLD_CYAN << "[ScavTrap] "<< RESET << "Default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = ClapTrap::hitPoints;
	this->attackDamage = ClapTrap::attackDamage;
	this->energyPoints = ClapTrap::energyPoints;
	std::cout << BOLD_CYAN << "[ScavTrap] "<< RESET << "Constructor called for " << this->name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << BOLD_CYAN <<"[ScavTrap] "<< RESET << "Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << BOLD_CYAN <<"[ScavTrap] "<< RESET << "Destructor called for " << this->name << std::endl;
}

// ScavTrap &ScavTrap::operator=(ScavTrap &copy)
// {
// 	if (this != &copy)
// 	{
// 		this->name = copy.name;
// 		this->attackDamage = copy.attackDamage;
// 		this->hitPoints = copy.hitPoints;
// 		this->energyPoints = copy.energyPoints;
// 		std::cout << BOLD_CYAN <<"[ScavTrap] "<< RESET << "Copy assignment operator called" << std::endl;
// 	}
// 	return *this;
// }

void ScavTrap::attack(std::string const &target)
{
	if (this->energyPoints > 0)
	{
		if (this->hitPoints > 0)
		{
			this->energyPoints--;
			std::cout << BOLD_CYAN <<"[ScavTrap] "<< RESET << this->name 
			<< " attacks " << target << ", causing " << this->attackDamage 
			<< " points of damage! " << "ENERGY:" << this->energyPoints 
			<< " HEALTH:" << this->hitPoints <<std::endl;
			return;
		}
		std::cout << BOLD_CYAN << "[ScavTrap] "<< RESET << this->name << " has no health points to attack " << target << std::endl;
		return;
	}
	std::cout << BOLD_CYAN << "[ScavTrap] "<< RESET << this->name << "has no energy to attack" << target << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << BOLD_CYAN <<"[ScavTrap] "<< RESET << this->name << " is now in Gate keeper mode" << std::endl;
}