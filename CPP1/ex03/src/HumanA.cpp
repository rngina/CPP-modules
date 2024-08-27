#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA constructor for " << name << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor for " << this->name << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
