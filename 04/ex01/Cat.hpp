#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"


class	Cat : public AAnimal{
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat &operator=(Cat const &rhs);
		Cat(Cat const &rhs);

		virtual void	makeSound(void);
		virtual void	setBrain(Brain *ref);
		virtual void	sayIdeas(void){
			std::cout << getType() << " is saying something" << std::endl;
			brainz->debugg();
		}
		
	private:
		Brain	*brainz;
};

#endif