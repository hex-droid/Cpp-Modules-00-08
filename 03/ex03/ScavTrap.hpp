#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &rhs);
		ScavTrap	&operator=(ScavTrap const &rhs);

		void		guardGate(void);
		void		attack(std::string const &target);

	private:
		int	_energyPoint;
};
#endif