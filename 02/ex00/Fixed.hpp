#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class	Fixed{
	public:
		Fixed(void);	//Default Constructor
		Fixed(Fixed const &rhs);	//Copy Contructor
		~Fixed(void);	//	Destructor
		Fixed	&operator=(Fixed const &rhs); // Operator= Overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_value;
		static int const	_bits = 8;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif