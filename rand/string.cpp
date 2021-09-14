#include <string>
#include <iostream>

int		main(void)
{
	std::string	buffer;
	std::string	delim;

	std::cout << "Enter delimiter: ";
	std::cin >> delim;
	while (buffer != delim)
	{
		std::cin >> buffer;
		std::cout << buffer << std::endl;
	}

	return (EXIT_SUCCESS);
}