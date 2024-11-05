#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(Animal &copy);
	virtual ~Animal();
	Animal &operator=(Animal &copy);

	virtual std::string getType() const;
	virtual void makeSound() const;
};

#endif