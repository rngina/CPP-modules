#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "Weapon constructor" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor" << std::endl;
}

const std::string	&Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}