#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return *this;
}

Cat::Cat(Cat const &rhs)
{
	*this = rhs;
}

void	Cat::makeSound(void)
{
	std::cout << "Cat Sound" << std::endl;
}