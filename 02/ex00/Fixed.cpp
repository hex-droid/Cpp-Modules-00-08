#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) 
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator Called" << std::endl;
	setRawBits(rhs.getRawBits());

	return (*this);
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "Copy Constructor Called" << std::endl;
	if (this != &rhs){
		*this = rhs;
	}
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.getRawBits();
	return (o);
}