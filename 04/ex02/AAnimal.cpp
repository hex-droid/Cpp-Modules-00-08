#include "AAnimal.hpp"

AAnimal::AAnimal(void): _type("Animal")
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
	std::cout <<"AAnimal sound" << std::endl;
}

std::string	AAnimal::getType(void)
{
	return _type;
}

void		AAnimal::sayIdeas(void)
{
	std::cout << 
	"AAnimal got nothing to say"
	<< std::endl;
}

void		AAnimal::setBrain(Brain *ref)
{
	(void)ref;
	std::cout << "AAnimal got no brain" << std::endl;
}