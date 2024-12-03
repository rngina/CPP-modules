#include "../includes/ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void)
{
	std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << "Constructor called for " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << "Destructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy) : _name(copy._name),  _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
	std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << "Copy contructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_attackDamage = copy._attackDamage;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << "Copy assignment operator called" << std::endl;
	}
	return *this;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_energyPoints > 0)
	{
		if (this->_hitPoints > 0)
		{
			this->_energyPoints--;
			std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << this->_name 
			<< " attacks " << target << ", causing " << this->_attackDamage 
			<< " points of damage! " << "ENERGY:" << this->_energyPoints 
			<< " HEALTH:" << this->_hitPoints <<std::endl;
			return ;
		}
		std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << this->_name << " has no health points to attack " << target <<std::endl;
		return ;
	}
	std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << this->_name <<" has no energy to attack "  << target << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << "ClapTrap " <<this->_name << " regained " << amount << " points" << std::endl;
		this->_hitPoints += amount;
	}
	std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << this->_name <<"does not have enough energy to repair" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= amount)
	{
		this->_hitPoints = 0;
		std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << this->_name << " lost all health points" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << BOLD_WHITE <<"[ClapTrap] " << RESET << this->_name << " lost " << amount << " health points and now has " << this->_hitPoints << std::endl;
}