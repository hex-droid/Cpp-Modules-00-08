#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &rhs);
		FragTrap &operator=(FragTrap const &rhs);

		void	highFivesGuys(void);
};

class	test : public ClapTrap{
	public:
		test(std::string const &name): ClapTrap(name){
			std::cout << "test const" << std::endl;
		}
		~test(void){
			std::cout << "test destruct" << std::endl;
		}
		
};


#endif