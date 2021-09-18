#include "Karen.hpp"

Karen::Karen(char **av): _log_level(av[1]){
}

Karen::~Karen(void){}

void	Karen::complain(std::string level)
{
	switch (getI(level))
	{
		case DEBUG:
			debug();
			break;
		case INFO:
			info();
			break;
		case WARNING:
			warning();
			break;
		case ERROR:
			error();
			break;
		default:
			break;
	}
}

int		Karen::getI(std::string level)
{
	int i;
	std::string key[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(i = 0; i < 4; i++)
		if (!level.compare(key[i].c_str()))
			return (i);
	return (-1);
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
	std::cout << std::endl;
}
void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extrabacon cost more money.\nYou don’t put enough!\nIf you did I would not have to askfor it!" << std::endl;
	std::cout << std::endl;
}
void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve beencoming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}
void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Karen::logFilter(void)
{
	switch (getI(_log_level))
	{
		case -1:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
		default:
			break;
	}
}
