#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap(void);
	// FragTrap &operator=(FragTrap &copy);

	void highFivesGuys(void);
};

#endif