#include <string>
#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	private:
		std::string type;

	public:
		Weapon(std::string type);
		~Weapon();
		const std::string &getType();
		void setType(std::string type);
};

#endif