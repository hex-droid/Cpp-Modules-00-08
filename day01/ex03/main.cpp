#include "HumanA.hpp"

int		main()
{
	{
		Weapon	club = Weapon("crude spiked club");

		// club reference
		HumanA bob("Bob", club);
		bob.attack();
		std::cout << club.getType() << std::endl;
		club.setType("some other type of club");
		bob.attack();
		std::cout << club.getType() << std::endl;
		std::string &str = club.getType();
		str = "Hello, world!";
		std::cout << club.getType() << std::endl;
	}
}