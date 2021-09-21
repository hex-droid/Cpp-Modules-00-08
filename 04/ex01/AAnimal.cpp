#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal Constructor" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Desconstructor" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return *this;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	*this = rhs;
}

void	AAnimal::makeSound(void)
{
	std::cout << "Animal sound" << std::endl;
}

std::string	AAnimal::getType(void)
{
	return _type;
}