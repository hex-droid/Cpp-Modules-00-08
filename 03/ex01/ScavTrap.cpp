#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout <<"ScavTrap <"<<name<<"> brought to life"<<std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap R.I.P <"<<this->_name<<">"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (&rhs != this)
	{
		*this = rhs;
	}
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	(void)rhs;
	return *this;
}

void		ScavTrap::guardGate(void)
{
	std::cout << "<"<<this->_name<<"> Entered in Gate Keeper mode!"<<std::endl;
}