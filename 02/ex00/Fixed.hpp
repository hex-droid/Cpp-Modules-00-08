#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class	Fixed{
	public:
		// Default Constructor
		Fixed(void);
		// Constructor
		Fixed(int value);
		// Destructor
		~Fixed(void);
		// Copy Constructor
		Fixed(Fixed const &rhs);
		// Operator= overload
		Fixed	&operator=(Fixed const &rhs);
		// Operator+ overload
		Fixed	operator+(Fixed const &rhs) const;

		int		getValue(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					_value;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif