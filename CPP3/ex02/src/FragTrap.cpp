#include <iostream>
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = ClapTrap::hitPoints;
	this->attackDamage = ClapTrap::attackDamage;
	this->energyPoints = ClapTrap::energyPoints;
	std::cout << "FragTrap constructor called for " << this->name << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->attackDamage = copy.attackDamage;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		std::cout << "FragTrap copy assignment operator called" << std::endl;
	}
	return *this;
}

void FragTrap::attack(std::string const &target)
{
	if (this->energyPoints > 0)
	{
		if (this->hitPoints > 0)
		{
			std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
			this->energyPoints--;
			return;
		}
		std::cout << "FragTrap " << this->name << " has no health points to attack " << target << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << "has no energy to attack" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High fives to FragTrap?... Guys..." << std::endl;
}
