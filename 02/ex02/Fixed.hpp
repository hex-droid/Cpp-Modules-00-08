#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class	Fixed{
	public:
		Fixed(void);
		Fixed(int const	nb);					
		Fixed(float const nb);
		Fixed(Fixed const &rhs);				
		~Fixed(void);
		Fixed	&operator=(Fixed const &rhs);	
	
		Fixed	operator+(Fixed const &rhs) const;
		Fixed	operator-(Fixed const &rhs) const;
		Fixed	operator*(Fixed const &rhs) const;
		Fixed	operator/(Fixed const &rhs) const;

		Fixed	operator++(int);
		Fixed	&operator++();

		bool	operator>(Fixed const &rhs) const;
		bool	operator<(Fixed const &rhs) const;
		bool	operator>=(Fixed const &rhs) const;
		bool	operator<=(Fixed const &rhs) const;
		bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;

		static Fixed const	&max(Fixed const &a, Fixed const &b){
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
		static Fixed const	&min(Fixed const &a, Fixed const &b){
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