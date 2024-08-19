#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
private:
	std::string	name;

public:
	Zombie();
	Zombie(std::string);
	~Zombie();
	void	setName(std::string name);
	void	announce(void);
};

#endif