#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->_type = "Dog";
	brainz = new Brain();
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog(void)
{
	delete brainz;
	std::cout << "Dog Destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		setBrain(rhs.brainz);
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
	brainz = ref;
}