#include "Class.hpp"

int		main(int ac, char **av)
{
	if (ac == 4 && av[1][0] && av[2][0] && av[3][0])
	{
		Class rawdaw(av);
	}else{
		std::cerr << "[usage]: ./replace FILENAME STRING1 STRING2\n(!empty strings)" << std::endl;
		return (1);
	}
	return (0);
}