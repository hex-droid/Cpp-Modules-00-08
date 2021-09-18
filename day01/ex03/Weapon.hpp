#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
	public:
		Weapon(std::string	type) : _type(type){

		}
		Weapon(void){
			std::cout << "Constructor Called" << std::endl;
		}
		~Weapon(void){
			std::cout << "Deconstructor Called" << std::endl;
		}
		void				setType(std::string type){
			_type = type;
		}
		std::string	const	&getType(void){
			return _type;
		}
	private:
		std::string _type;
};

#endif