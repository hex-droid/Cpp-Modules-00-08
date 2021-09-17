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
		~Zombie(void){
			std::cout << "Zombie " << _name << " died" << std::endl;
		}

		void	annouce(void){
			std::cout << "<" << _name << ">" << " BraaaaiiiiinzzzzzzZZZ" << std::endl;
		}
	private:
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif