#include "WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal(void)
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAAnimal::~WrongAAnimal(void)
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

WrongAAnimal	&WrongAAnimal::operator=(WrongAAnimal const &rhs)
{
	if (this != &rhs){
		this->_type = rhs._type;
	}
	return *this;
}

WrongAAnimal::WrongAAnimal(WrongAAnimal const &rhs)
{
	*this = rhs;
}

void		WrongAAnimal::makeSound(void)
{
	std::cout << "WrongAAnimal Sound" << std::endl;
}

std::string	WrongAAnimal::getType(void)
{
	return _type;
}