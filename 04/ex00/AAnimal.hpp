#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	AAnimal{
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal	&operator=(AAnimal const &rhs);
		AAnimal(AAnimal const &rhs);

		virtual	void	makeSound(void);
		std::string		getType(void);
};

#endif