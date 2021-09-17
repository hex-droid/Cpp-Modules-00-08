#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie{
	public:
		Zombie(std::string name) : _name(name){
			std::cout << "Zombie " << _name << " is coming to get you" << std::endl;
		}
		Zombie(void){
			std::cout << "Unknown Zombie is coming to get you" << std::endl;
		}
		~Zombie(void){
			std::cout << "Zombie " << _name << " died" << std::endl;
		}

		void	annouce(void){
			std::cout << "<" << _name << ">" << " BraaaaiiiiinzzzzzzZZZ" << std::endl;
		}

		void	set_name(std::string name){
			_name = name;
		}
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );


#endif