#include "DiamondTrap.hpp"

int		main()
{
	DiamondTrap trap1("skerakef");
	DiamondTrap	trap2("oel-ouar");

	trap1.whoAmI();
	trap2.whoAmI();
	trap1.beRepaired(20);
	trap1.guardGate();
	trap1.takeDamage(10); 
	return (0);
}