/*
Class ClapTrap is implemented in Orthodox Canonical Form (destructor, copy constructor, copy assignment operator)
*/ 
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name); 
	~ClapTrap();
	ClapTrap(ClapTrap &copy);
	ClapTrap		&operator=(const ClapTrap &copy);
	
	void			attack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
};

#endif