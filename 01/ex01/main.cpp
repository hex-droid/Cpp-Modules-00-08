#include "Zombie.hpp"

int		main()
{
	int	N = 10;
	Zombie	*zombiehorde = zombieHorde(N, "placeholder");

	for (int i = 0; i < N; i++)
		zombiehorde[i].annouce();
	delete [] zombiehorde;
	return (0);
}