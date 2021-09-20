#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) 
{
}

Fixed::Fixed(int const nb) : _value(nb), _F_flag(1), _I_flag(0)
{
	_I_flag = 0;
}

Fixed::Fixed(float const nb) : _F_flag(0), _I_flag(1)
{
	_value = round(nb * (1 << _bits));
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	setRawBits(rhs.getRawBits());

	_I_flag = rhs._I_flag;
	_F_flag = rhs._F_flag;
	return (*this);
}

Fixed::Fixed(Fixed const &rhs)
{
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

Fixed			Fixed::operator+(Fixed const &rhs) const
{
	switch (this->getIflag())
	{
		case 0:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toInt() + rhs.toInt()));
				case 1:
					return (Fixed(this->toInt() + rhs.toFloat()));
			}
		case 1:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toFloat() + rhs.toInt()));
				case 1:
					return (Fixed(this->toFloat() + rhs.toFloat()));
			}

	}
	return (Fixed(-420));
}

Fixed			Fixed::operator-(Fixed const &rhs) const
{
	switch (this->getIflag())
	{
		case 0:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toInt() - rhs.toInt()));
				case 1:
					return (Fixed(this->toInt() - rhs.toFloat()));
			}
		case 1:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toFloat() - rhs.toInt()));
				case 1:
					return (Fixed(this->toFloat() - rhs.toFloat()));
			}

	}
	return (Fixed(-420));
}

Fixed			Fixed::operator*(Fixed const &rhs) const
{
	switch (this->getIflag())
	{
		case 0:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toInt() * rhs.toInt()));
				case 1:
					return (Fixed(this->toInt() * rhs.toFloat()));
			}
		case 1:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toFloat() * rhs.toInt()));
				case 1:
					return (Fixed(this->toFloat() * rhs.toFloat()));
			}

	}
	return (Fixed(-420));
}

Fixed			Fixed::operator/(Fixed const &rhs) const
{
	switch (this->getIflag())
	{
		case 0:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toInt() / rhs.toInt()));
				case 1:
					return (Fixed(this->toInt() / rhs.toFloat()));
			}
		case 1:
			switch(rhs.getIflag())
			{
				case 0:
					return (Fixed(this->toFloat() / rhs.toInt()));
				case 1:
					return (Fixed(this->toFloat() / rhs.toFloat()));
			}

	}
	return (Fixed(-420));
}

bool		Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool		Fixed::operator>(Fixed const &rhs) const
{
	return this->getRawBits() > rhs.getRawBits();
}

bool		Fixed::operator>=(Fixed const &rhs) const
{
	return this->getRawBits() >= rhs.getRawBits();
}

bool		Fixed::operator<=(Fixed const &rhs) const
{
	return this->getRawBits() <= rhs.getRawBits();
}

bool		Fixed::operator==(Fixed const &rhs) const
{
	return this->getRawBits() == rhs.getRawBits();
}

bool		Fixed::operator!=(Fixed const &rhs) const
{
	return this->getRawBits() != rhs.getRawBits();
}

Fixed		Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_value++;
	return tmp;
}

Fixed		&Fixed::operator++()
{
	++_value;
	return *this;
}

Fixed	const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	switch ((int)(a > b))
	{
		case 0:
			return b;
		case 1:
			return a;
	}
	std::cout << "a & b are equal." << std::endl;
	return (a);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	switch ((int)(a > b))
	{
		case 0:
			return a;
		case 1:
			return b;
	}
	std::cout << "a & b are equal." << std::endl;
	return (a);
}