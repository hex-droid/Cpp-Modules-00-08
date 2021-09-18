#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>

class HumanB{
	public:
		HumanB(std::string name) : _name(name) , _weapon(NULL){
			
		}
		~HumanB(void){
			std::cout << "Destructor Called" << std::endl;
		}
		void	setWeapon(Weapon *weapon){
			_weapon = weapon;
		}
		void	attack(void) const{
			std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
		}
	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif