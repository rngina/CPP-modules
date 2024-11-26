#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100), energyPoints(50), attackDamage(20)
{
	std::cout << "ClapTrap constructor called for " << this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << this->name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage)
{
	std::cout << "Copy contructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
		this->attackDamage = copy.attackDamage;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		std::cout << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	if (this->energyPoints > 0)
	{
		if (this->hitPoints > 0)
		{
			std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
			this->energyPoints--;
			return;
		}
		std::cout << this->name << " has no health points to attack " << target << std::endl;
		return;
	}
	std::cout << this->name << "has no energy to attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " regained " << amount << " of points" << std::endl;
		this->hitPoints += amount;
	}
	std::cout << this->name << " has no energy to repair" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= amount)
	{
		this->hitPoints = 0;
		std::cout << this->name << " lost all health points" << std::endl;
		return;
	}
	this->hitPoints -= amount;
	std::cout << this->name << " lost " << amount << " health points and now has " << this->hitPoints << std::endl;
}