#include "PhoneBook.class.hpp"

void	phonebook(void)
{
	PhoneBook phonebook;
	std::string	line;

	while (42)
	{
		std::cout << std::endl << "Enter Command: ";
		std::getline(std::cin, line);
		if (!line.compare("ADD"))
			phonebook.op_add();
		else if (!line.compare("SEARCH"))
			phonebook.op_search();
		else if (!line.compare("QUIT"))
			break;
		else
			phonebook.print_usage();
	}
}

int		main()
{
	phonebook();
	return (EXIT_SUCCESS);
}

