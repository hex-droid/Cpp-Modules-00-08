#include "FragTrap.hpp"

int		main()
{
	FragTrap trap1("skerakef");
	FragTrap trap2("anzoul");
	FragTrap trap3(trap1);
	FragTrap trap4;

	trap4 = trap2;

	trap1.highFivesGuys();
	trap2.highFivesGuys();
	trap3.highFivesGuys();
	trap4.highFivesGuys();
	trap1.attack("skerakef");
	trap2.takeDamage(33);
	return (0);
}

/*
▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
██ ██ █▄ ▄██ ▄▄ ██ ██ ████ ▄▄▄█▄ ▄██ ███ ██ ▄▄▄
██ ▄▄ ██ ███ █▀▀██ ▄▄ ████ ▄▄███ ████ █ ███ ▄▄▄
██ ██ █▀ ▀██ ▀▀▄██ ██ ████ ████▀ ▀███▄▀▄███ ▀▀▀
▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
*/