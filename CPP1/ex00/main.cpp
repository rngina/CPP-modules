#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie	zombie0("Zombie0");
	Zombie*	zombie1;

	zombie0.announce();
	zombie1 = newZombie("Zombie1");
	zombie1->announce();
	delete zombie1;
	randomChump("Zombie2");
	return (0);
}