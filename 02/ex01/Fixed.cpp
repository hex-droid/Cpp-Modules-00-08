#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) 
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(int const nb) : _value(nb), _F_flag(1)
{
	_I_flag = 0;
	std::cout << "Int Constructor Called" << std::endl;
}

Fixed::Fixed(float const nb) : _I_flag(1)
{
	_F_flag = 0;
	_value = round(nb * (1 << _bits));
	std::cout << "Float Constructor Called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator Called" << std::endl;
	setRawBits(rhs.getRawBits());

	_I_flag = rhs.getIflag();
	(_I_flag == 1) ? _F_flag = 0 : _F_flag = 1;
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
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	if (!rhs.getIflag())
		o << rhs.toInt();
	else
		o << rhs.toFloat();
	return o;
}

int				Fixed::getIflag(void) const
{
	return _I_flag;
}

int				Fixed::toInt(void) const
{
	if(!_I_flag)
		return _value;
	return ((int)toFloat());
}

float			Fixed::toFloat(void) const
{
	return (float)_value / (float)(1 << _bits);
}