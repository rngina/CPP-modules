#include <iostream>
#include "../includes/ClapTrap.hpp"
#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("")
{
	this->_name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "[DiamondTrap] Default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newname) : ClapTrap(newname + "_clap_trap")
{
	this->_name = newname;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 30;
	std::cout << "[DiamondTrap] " << _name << " created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] " << _name << " destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy)
{
	this->_name = copy._name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "[DiamondTrap] " << "Copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	std::cout << "[DiamondTrap] " << "Copy assignment constructor called" << std::endl;
	if (this != &copy)
	{
		_name = copy._name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << std::endl;
	std::cout << "My parent name is " << ClapTrap::_name << std::endl;
}