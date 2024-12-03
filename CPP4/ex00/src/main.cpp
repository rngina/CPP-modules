#include <iostream>
#include <string>
#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "meta id" << &meta << std::endl;
	std::cout << "i id" << &i << std::endl;
	std::cout << "j id" << &j << std::endl;

	std::cout << &j << " ";
	std::cout << j->getType() << " " << std::endl;
	std::cout << &i << " ";
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}