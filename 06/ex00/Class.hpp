#ifndef CLASS_HPP
# define CLASS_HPP

# include <string>
# include <iostream>

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

		class NotPrintableException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Char: Non displayable");
				}
		};

		char  get_str(void) const;

	private:
		std::string const _str;

};

void		Scalar(Class const &hs);


#endif