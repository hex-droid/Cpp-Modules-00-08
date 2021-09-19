#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class	ClapTrap{
	public:
		ClapTrap(std::string const &name); //Parametric Constructor
		ClapTrap(void); //Default Constructor
		~ClapTrap(void); //Destructor
		ClapTrap(ClapTrap const &rhs); //Copy Constructor
		ClapTrap	&operator=(ClapTrap const &rhs);

		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
};
/*

You will also give it a few public functions to make it more life-like:
•void attack(std::string const & target)
•void takeDamage(unsigned int amount)
•void beRepaired(unsigned int amount)
*/
#endif