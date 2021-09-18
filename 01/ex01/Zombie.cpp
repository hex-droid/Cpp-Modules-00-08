#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Zombie " << _name << " is coming to get you!" << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << "Unknown Zombie is coming to ge you!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " died" << std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << "<"<<_name<<">" << " BraaaaaaaaaainzzzzZZZ" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}