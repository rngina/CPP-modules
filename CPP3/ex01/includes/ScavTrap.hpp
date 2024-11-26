#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap(void);
	ScavTrap &operator=(ScavTrap &copy);

	void guardGate();
	void attack(std::string const &target);
};

#endif