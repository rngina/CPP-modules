#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "HumanB constructor for " << name << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor for " << this->name << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}