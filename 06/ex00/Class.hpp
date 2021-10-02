#ifndef CLASS_HPP
# define CLASS_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <limits>
# include <float.h>

class	Class{
	public:
		Class(std::string const &str);
		Class(void);
		~Class(void);
		Class &operator=(Class const &rhs);
		Class(Class const &rhs);

		operator	int();
		operator	char();
		operator	float();
		operator	double();
		void		Scalar();

		class NotPrintableException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("char: Non displayable");
				}
		};

	private:
		std::string const _str;

};



#endif