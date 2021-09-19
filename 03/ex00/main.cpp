#include "ClapTrap.hpp"

int		main()
{
	ClapTrap trap1("skerakef");
	ClapTrap trap2(trap1);
	ClapTrap trap3("PlaceHolder");

	trap3 = trap1;
	trap1.attack("Mr. quiet hard to come up with something");
	trap2.attack("Ms. i know everything");
	trap3.attack("Mr. Worldwide");

	trap1.takeDamage(3);
	trap2.takeDamage(2);
	trap3.takeDamage(1);

	trap1.beRepaired(100);
	trap2.beRepaired(50);
	trap3.beRepaired(30);


	return (0);
}