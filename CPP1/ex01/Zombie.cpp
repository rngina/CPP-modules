#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::Zombie(std::string name) : name(name)
{
	return;
}

Zombie::~Zombie()
{
	std::cout << "Destructor for " << this->name << " is called" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	return ;
}