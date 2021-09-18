#include "Zombie.hpp"

int		main()
{
//	stack
	std::cout << std::setw(50) << std::left << std::setfill('*') << "STACK" << std::endl << std::endl;
	Zombie	zombie("khafni");
	zombie.annouce();

// heap
	std::cout << std::endl << std::setw(50) << std::left << std::setfill('*') << "HEAP" << std::endl << std::endl;
	Zombie	*zombiep = newZombie("ztaouil");
	zombiep->annouce();
	delete zombiep;

	randomChump("Skeldor");
	randomChump("Popsoda");
	randomChump("Duquese");

	return (0);
}