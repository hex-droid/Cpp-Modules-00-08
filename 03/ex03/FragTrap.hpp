#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &rhs);
		FragTrap &operator=(FragTrap const &rhs);

		void	highFivesGuys(void);
	private:
		int		_hitPoint;
		int		_attackDamage;

};

#endif