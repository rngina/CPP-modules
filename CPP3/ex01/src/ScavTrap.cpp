#include <iostream>
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = ClapTrap::hitPoints;
	this->attackDamage = ClapTrap::attackDamage;
	this->energyPoints = ClapTrap::energyPoints;
	std::cout << "ScavTrap constructor called for " << this->name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << this->name << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->attackDamage = copy.attackDamage;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		std::cout << "ScavTrap copy assignment operator called" << std::endl;
	}
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->energyPoints > 0)
	{
		if (this->hitPoints > 0)
		{
			std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
			this->energyPoints--;
			return;
		}
		std::cout << this->name << " has no health points to attack " << target << std::endl;
		return;
	}
	std::cout << this->name << "has no energy to attack" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}