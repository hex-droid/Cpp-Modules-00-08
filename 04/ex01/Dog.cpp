#include "Dog.hpp"

Dog::Dog(void) : AAnimal(), _brainz(NULL)
{
	_type = ("Dog");
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog(void)
{
	if (_brainz)
		delete _brainz;
	std::cout << "Dog Destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog operator= overload" << std::endl;
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

Dog::Dog(Dog const &rhs)
{
	*this = rhs;
}

void	Dog::makeSound(void)
{
	std::cout << "Dog Sound" << std::endl;
}

void	Dog::setBrain(Brain *ref)
{
	std::cout << "Setting up a braiin" << std::endl;
	_brainz = ref;
}

void	Dog::sayIdeas(void)
{
	std::cout << getType() << " is saying something" << std::endl;
	if (_brainz)
		_brainz->debugg();
}

void	*Dog::getBrainAddress(void)
{
	return (void *)_brainz;
}