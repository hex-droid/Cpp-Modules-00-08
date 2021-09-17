#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon weapon) : _name(name), _weapon(weapon){

		}
		~HumanA(void){
			std::cout << "Deconstructor Called" << std::endl;
		}
		void	attack(void){
			std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
		}

	private:
		std::string _name;
		Weapon	_weapon;
};


#endif