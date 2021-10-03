#include "easyfind.hpp"

int		main()
{
	int s[] = {65, 12, 25, 36, 69, 100};

	if (easyfind<int>(*s, *(s+6), 65))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
}