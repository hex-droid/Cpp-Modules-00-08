#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Zombie{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	annouce(void);
		
	private:
		std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);


#endif