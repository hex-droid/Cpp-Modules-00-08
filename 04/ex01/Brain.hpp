#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain{
	public:
		Brain(void);
		Brain(std::string const &placeholder);
		~Brain(void);
		Brain &operator=(Brain const &rhs);
		Brain(Brain const &rhs);

		std::string		*ideas;	
		void	debugg(void);
	private:
		void	newFill(std::string const &placeholder);	
};


#endif