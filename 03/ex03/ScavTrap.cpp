#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	std::cout <<"ScavTrap <"<<name<<"> brought to life"<<std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	this->_name = name;
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
	_name = rhs._name;
	_hitPoint = rhs._hitPoint;
	_energyPoint = rhs._energyPoint;
	_attackDamage = rhs._attackDamage;
	return *this;
}

void		ScavTrap::guardGate(void)
{
	std::cout << "<"<<this->_name<<"> Entered in Gate Keeper mode!"<<std::endl;
}

void		ScavTrap::attack(std::string const &target)
{
	std::cout<<"ScavTrap <"<<this->_name<<"> attack "<<target<<", causing <"<<_attackDamage<<"> points of damage!"<<std::endl;;
}