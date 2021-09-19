#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(int value) : _value(value){}

Fixed::~Fixed(void){}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Operator= overload" << std::endl;
	this->_value = rhs.getValue();

	return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	std::cout << "Operator+ overload" << std::endl;
	return (Fixed(this->_value + rhs.getValue()));
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "Copy Constructor" << std::endl;
	if (this != &rhs){
		*this = rhs;
	}
}

int		Fixed::getValue(void) const
{
	return (_value);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.getValue();
	return (o);
}