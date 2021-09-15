#include "PhoneBook.class.hpp"

void	op_add(void)
{
	PhoneBook	phonebook;
	
	std::cout << "ADD!" << std::endl;
	std::string	key[5];
	std::string	value[5];
	std::string buffer;

	key[0] = "first name";
	key[1] = "last name";
	key[2] = "nickname";
	key[3] = "phone number";
	key[4] = "darkest secret";
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << key[i] << " : " << std::endl;
		std::cin >> buffer;
		value[i] = buffer;
	}
	if (phonebook.get_index() < 8)
		phonebook.add_contact(value);
	else
		print_err();
}
void	op_search(void)
{
	std::cout << "SEARCH!" << std::endl;
}

void	print_err(void)
{
	return;
}

void	print_usage(void)
{
	std::cout << "usage:" << std::endl;
	std::cout << "[ADD]" << std::endl;
	std::cout << "[SEARCH]" << std::endl;
	std::cout << "[QUIT]" << std::endl;
}

void	phonebook(void)
{
	std::string	line;

	while (42)
	{
		std::cout << "Enter Command: ";
		std::cin >> line;
		if (!line.compare("ADD"))
			op_add();
		else if (!line.compare("SEARCH"))
			op_search();
		else if (!line.compare("QUIT"))
			break;
		else
			print_usage();
	}
}

int		main()
{
	phonebook();
	return (EXIT_SUCCESS);
}

/*
first name, last name, nickname,
phone number,darkest secret.
*/