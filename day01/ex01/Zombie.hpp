#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	annouce(void);
		void	set_name(std::string name);
	
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );


#endif