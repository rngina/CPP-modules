#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "Weapon constructor for" << type << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor for "<< type << std::endl;
}

const std::string	&Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}