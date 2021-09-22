#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"


class	Cat : public AAnimal{
	public:
		Cat(void);
		virtual ~Cat(void);
		virtual Cat &operator=(Cat const &rhs);
		Cat(Cat const &rhs);

		virtual void	makeSound(void);
		virtual void	setBrain(Brain *ref);
		virtual void	sayIdeas(void);
		void			*getBrainAddress(void);
		
	private:
		Brain	*_brainz;
};

#endif