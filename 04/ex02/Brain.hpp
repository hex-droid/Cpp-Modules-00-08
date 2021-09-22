#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain{
	public:
		Brain(void);
		Brain(std::string const &placeholder);
		virtual ~Brain(void);
		virtual Brain &operator=(Brain const &rhs);
		Brain(Brain const &rhs);

		void	debugg(void);
	private:
		std::string		*_ideas;	
		void	newFill(std::string const &placeholder);	
};


#endif