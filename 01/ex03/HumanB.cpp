#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){}

HumanB::~HumanB(void){}

void	HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}