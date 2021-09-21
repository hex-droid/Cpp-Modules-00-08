#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	brainz = new Brain();
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat(void)
{
	delete brainz;
	std::cout << "Cat Destructor" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->brainz = rhs.brainz;
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

void	Cat::setBrain(Brain *ref)
{
	brainz = ref;
}