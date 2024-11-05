#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog &copy);
	Dog &operator=(Dog &copy);
	~Dog();

	void makeSound() const;
	std::string getType() const;
};

#endif