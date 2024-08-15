#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
private:
	std::string	name;

public:
	Zombie(std::string);
	~Zombie();
	void	announce(void);
};

#endif