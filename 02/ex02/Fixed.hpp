#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class	Fixed{
	public:
		Fixed(void);							//Default Constructor
		Fixed(int const	nb);					//Parametric Constructor
		Fixed(float const nb);					//Parametric Constructor
		Fixed(Fixed const &rhs);				//Copy Contructor
		~Fixed(void);							//Destructor
		
		Fixed	&operator=(Fixed const &rhs);	//Operator= Overload
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		static Fixed	&max(Fixed const &a, Fixed const &b);
		static Fixed	&min(Fixed const &a, Fixed const &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getIflag(void) const;

	private:
		int					_value;
		static int const	_bits = 8;
		int					_F_flag;
		int					_I_flag;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif