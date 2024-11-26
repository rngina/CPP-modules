/*
Class ClapTrap is implemented in Orthodox Canonical Form (destructor, copy constructor, copy assignment operator)
*/
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif