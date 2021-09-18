#include <iostream>

static char		*getBuffed(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac > 1)
	{ 
		while (av[i])
		{
			std::cout << getBuffed(av[i]);
			i++;
		}
		std::cout << "\n";
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}