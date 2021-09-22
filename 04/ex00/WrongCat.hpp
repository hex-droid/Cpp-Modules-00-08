#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAAnimal.hpp"

class	WrongCat : public WrongAAnimal{
	public:
		WrongCat(void);
		virtual ~WrongCat(void);
		WrongCat &operator=(WrongCat const &rhs);
		WrongCat(WrongCat const &rhs);

		void	makeSound(void);
};

#endif