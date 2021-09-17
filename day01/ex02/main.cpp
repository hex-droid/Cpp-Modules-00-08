#include <iostream>
#include <string>
#include <iomanip>

int		main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << std::left << std::setw(25) << "string Memory Address" << ": " << stringPTR << std::endl;
	std::cout << std::setw(25) << "string Memory Address" << ": " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << std::setw(25) << "string" << ": " << *stringPTR << std::endl;
	std::cout << std::setw(25) << "string" << ": " << stringREF << std::endl;
	return (0);
}