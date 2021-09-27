#include "Class.hpp"

int		main(int ac, char **av)
{
	if (ac == 2 && av[1][0])
	{
		Class	toto(av[1]);
		Scalar(toto);
	}
	return 0;
}