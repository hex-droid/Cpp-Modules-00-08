#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{}

FragTrap::~FragTrap(void)
{
	std::cout << "R.I.P <"<<_name<<">"<<std::endl;
}
FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	this->_name = name;
	std::cout<<"FragTrap <"<<this->_name<<"> Wake up!"<<std::endl;
}

FragTrap::FragTrap(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	_name = rhs._name;
	_hitPoint = rhs._hitPoint;
	_energyPoint = rhs._energyPoint;
	_attackDamage = rhs._attackDamage;

	return *this;
}

void		FragTrap::highFivesGuys(void)
{
std::cout
<< "<" << _name << "> is requesting a" << std::endl
<< "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << std::endl
<< "██ ██ █▄ ▄██ ▄▄ ██ ██ ████ ▄▄▄█▄ ▄██ ███ ██ ▄▄▄" << std::endl
<< "██ ▄▄ ██ ███ █▀▀██ ▄▄ ████ ▄▄███ ████ █ ███ ▄▄▄" << std::endl
<< "██ ██ █▀ ▀██ ▀▀▄██ ██ ████ ████▀ ▀███▄▀▄███ ▀▀▀" << std::endl
<< "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀" <<
std::endl;


}

