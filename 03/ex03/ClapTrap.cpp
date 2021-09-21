#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){}

ClapTrap::ClapTrap(std::string const &name) :	_name(name),
												_hitPoint(10),
												_energyPoint(10),
												_attackDamage(0)
{
	std::cout << "ClapTrap <"<<_name<<"> is brought to life" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap <"<<_name<<"> is dead" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
	std::cout << "Copy Constructor Call"<<std::endl;
	if (&rhs != this)
	{
		*this = rhs;
	}
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	_name = rhs._name;
	_hitPoint = rhs._hitPoint;
	_energyPoint = rhs._energyPoint;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void		ClapTrap::attack(std::string const &target)
{
	std::cout<<"ClapTrap <"<<_name<<"> attack "<<target<<", causing <"<<_attackDamage<<"> points of damage!"<<std::endl;;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	std::cout<<"ClapTrap <"<<_name<<"> took <"<<amount<<"> damage points!"<<std::endl;
	_energyPoint -= amount;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout<<"ClapTrap <"<<_name<<"> restored <"<<amount<<"> energy points!"<<std::endl;
	_energyPoint += amount;
}