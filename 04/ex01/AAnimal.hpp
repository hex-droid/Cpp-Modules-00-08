#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class	AAnimal{
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		virtual AAnimal	&operator=(AAnimal const &rhs);
		AAnimal(AAnimal const &rhs);

		virtual	void	makeSound(void);
		virtual void	setBrain(Brain *ref);
		virtual void	sayIdeas(void);
		std::string		getType(void);

};

#endif