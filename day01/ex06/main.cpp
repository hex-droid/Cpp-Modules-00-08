#include "Karen.hpp"

int		main(int ac, char **av)
{
	if (ac == 2 && av[1][0])
	{
		Karen karen(av);
		karen.logFilter();
	}
	return (0);
}