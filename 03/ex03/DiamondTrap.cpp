#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void){}

DiamondTrap::DiamondTrap(std::string const &name): FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	ClapTrap::_name = (name + "_clap_name");
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout <<"<"<<_name<<"> Born to life!"<<std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout<<"R.I.P <"<<_name<<">"<<std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &rhs)
{
	if (this != &rhs){
		*this = rhs;
	}
}

DiamondTrap		&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	_name = rhs._name;
	return *this;
}

void			DiamondTrap::whoAmI(void)
{
	std::cout << std::left <<std::setw(14) <<"Name"<<": "<< _name << std::endl;
	std::cout << std::setw(14) <<"ClapTrap Name"<<": "<< ClapTrap:: _name << std::endl;

}

/* void	attack(std::string const &name)
{
	ScavTrap::attack(name);
} */