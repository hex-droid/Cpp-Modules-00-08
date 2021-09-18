#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie "<<_name<<" is coming to get you!" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie "<<_name<<" died"<<std::endl;
}

void	Zombie::annouce(void)
{
	std::cout << "<" << _name << ">" << " BraaaaiiiiinzzzzzzZZZ" << std::endl;	
}