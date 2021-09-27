#include "Class.hpp"

Class::Class(std::string const &str) : _str(str)
{
}

Class::Class(void){};

Class::~Class(void){};

Class	&Class::operator=(Class const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

Class::Class(Class const &rhs)
{
	*this = rhs;
}

Class::operator char()
{
	std::cout << "test" << std::endl;
	if (_str.length() == 1 && !std::isdigit(_str[0]))
	{
		char c = (char)_str[0];
		try
		{
			if (!std::isprint(c))
				throw NotPrintableException();
			std::cout << "char: " << c << std::endl;
		}
		catch (NotPrintableException &e)
		{	
			std::cout << e.what() << std::endl;
		}
		return c;
	}
	return 1;
}

char 	Class::get_str(void) const
{
	return _str[0];
}

void	Scalar(Class const &hs)
{
	(void)static_cast<char>(hs.get_str());
	//(void)static_cast<int>(hs.get_str());
	//(void)static_cast<float>(hs.get_str());
	//(void)static_cast<double>(hs.get_str());
	
}

/*
char int float double
*/