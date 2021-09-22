#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	AAnimal{
	protected:
		std::string	_type;
		AAnimal(void);
		AAnimal(AAnimal const &rhs);
	public:
		virtual ~AAnimal(void);
		virtual AAnimal	&operator=(AAnimal const &rhs);

		virtual	void	makeSound(void) = 0;
		virtual void	setBrain(Brain *ref);
		virtual void	sayIdeas(void);
		std::string		getType(void);

};

#endif