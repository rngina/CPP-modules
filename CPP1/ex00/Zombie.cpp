#include "Zombie.hpp"

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
