#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);

int	main()
{
	Zombie* zombies = zombieHorde(10, "Regina");
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}