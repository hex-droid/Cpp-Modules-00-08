#include "Cat.hpp"

Cat::Cat(void) : AAnimal(), _brainz(NULL)
{
	this->_type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::~Cat(void)
{
	if (_brainz)
		delete _brainz;
	std::cout << "Cat Destructor" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		_brainz = new Brain();
		if (rhs._brainz)
		{
			*_brainz = *rhs._brainz;
		}
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
	std::cout << "Setting up a brain" << std::endl;
	_brainz = ref;
}

void	Cat::sayIdeas(void)
{
	std::cout << getType() << " is saying something" << std::endl;
	if (_brainz)
		_brainz->debugg();	
}

void	*Cat::getBrainAddress(void)
{
	return (void *)_brainz;
}