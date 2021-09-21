#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class	Cat : public AAnimal{
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat &operator=(Cat const &rhs);
		Cat(Cat const &rhs);

		virtual void	makeSound(void);
};

#endif