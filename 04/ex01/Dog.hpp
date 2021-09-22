#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Dog: public AAnimal{
	public:
		Dog(void);
		virtual ~Dog(void);
		virtual Dog	&operator=(Dog const &rhs);
		Dog(Dog const &rhs);

		virtual void	makeSound(void);
		virtual void	setBrain(Brain *ref);
		virtual void	sayIdeas(void);
		void			*getBrainAddress(void);

	private:
		Brain	*_brainz;
};

#endif