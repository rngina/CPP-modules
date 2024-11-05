#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(Cat &copy);
	Cat &operator=(Cat &copy);
	~Cat();

	void makeSound() const;
	std::string getType() const;
};

#endif