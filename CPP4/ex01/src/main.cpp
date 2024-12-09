#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include <iostream>

int	main()
{
	const int num = 10;
	const Animal* animals[num];
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	for (int i = 0; i < num; i++)
	{
		if (i < num / 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int i = 0; i < num; i++)
		delete animals[i];


	delete j;//should not create a leak
	delete i;

	Cat cat1;
	Cat cat2(cat1);

	std::cout << "cat1 idea: " << cat1.getIdea(1) << std::endl;
	std::cout << "cat2 idea: " << cat2.getIdea(1) << std::endl;
	cat1.setIdea(1, "hello");
	std::cout << "cat1 idea: " << cat1.getIdea(1) << std::endl;
	std::cout << "cat2 idea: " << cat2.getIdea(1) << std::endl;

	return 0;
}
