#include "Dog.hpp"

Dog::Dog(void) : AAnimal()
{
	this->_type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
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