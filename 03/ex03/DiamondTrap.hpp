#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iomanip>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : virtual public FragTrap, virtual public ScavTrap{
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &rhs);
		DiamondTrap &operator=(DiamondTrap const &rhs);

	//	void	attack(std::string const &name);
		void	whoAmI(void);
	private:
		std::string _name;
};

//diamong multiple inheritance

#endif