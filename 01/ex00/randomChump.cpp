#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	*zombiep = newZombie(name);
	zombiep->annouce();
	delete zombiep;
}