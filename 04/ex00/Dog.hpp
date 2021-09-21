#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class	Dog: public AAnimal{
	public:
		Dog(void);
		virtual ~Dog(void);
		Dog	&operator=(Dog const &rhs);
		Dog(Dog const &rhs);

		virtual void	makeSound(void);
};

#endif