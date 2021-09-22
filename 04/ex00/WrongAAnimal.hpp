#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAAnimal{
	protected:
		std::string	_type;
	public:
		WrongAAnimal(void);
		virtual ~WrongAAnimal(void);
		WrongAAnimal	&operator=(WrongAAnimal const &rhs);
		WrongAAnimal(WrongAAnimal const &rhs);

		void	makeSound(void);
		std::string		getType(void);
};

#endif