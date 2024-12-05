#include <iostream>
#include <string>
#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	std::cout << BOLD_GREEN << "CORRECT IMPLEMENTATION" << RESET << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << "-----------------------------------------------------------" << std::endl;
	std::cout << BOLD_RED << "WRONG IMPLEMENTATION" << RESET << std::endl;
	std::cout << "-----------------------------------------------------------" << std::endl;

	const WrongAnimal *WrongMeta = new WrongAnimal();
	const WrongAnimal *WrongI = new WrongCat();

	std::cout << WrongI->getType() << " " << std::endl;

	WrongI->makeSound(); // will output the WrongAnimal sound!
	WrongMeta->makeSound();

	delete WrongMeta;
	delete WrongI;

	std::cout << "-----------------------------------------------------------" << std::endl;
	return 0;
}