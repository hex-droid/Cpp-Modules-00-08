#ifndef DIAMONDTRAP.HPP
# define DIAMONDTRAP.HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap{
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(std::string const &name);
		DiamondTrap(DiamondTrap const &rhs);
		Diamond &operator=(DiamondTrap const &rhs);

		void	whoAmI(void);
	private:
		std::string _name;
};

//diamong multiple inheritance

#endif