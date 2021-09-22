#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout<<"WrongCat Destructor" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	if (this != &rhs)
	{
		_type = rhs._type;
	}
	return *this;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	*this = rhs;
}

void	WrongCat::makeSound(void)
{
	std::cout << "WrongCat Sound" << std::endl;
}