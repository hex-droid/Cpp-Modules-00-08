#include "ScavTrap.hpp"

int		main()
{
	ScavTrap trap1("ztaouil");
	ScavTrap trap2("khafni");

	trap1.guardGate();
	trap2.attack("ztaouil");
	trap1.takeDamage(9);
	trap1.beRepaired(20);
	trap1.attack("khafni");
	trap1.takeDamage(10);

	trap2.guardGate();

	return (0);
}