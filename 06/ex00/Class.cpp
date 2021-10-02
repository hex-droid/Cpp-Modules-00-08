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
	try
	{
		char c = std::stoi(_str);
		if (!std::isprint(c))
			throw NotPrintableException();
		std::cout << "char: '"<<c<<"'"<<std::endl;
		return c;
	}
	catch(NotPrintableException &e){
		std::cout << e.what() << std::endl;
	}
	catch(std::exception &e){
		std::cout << "char: impossible" << std::endl;
	}
	return 0;
}

Class::operator int ()
{
	try
	{
		int i = std::stoi(this->_str);
		std::cout << "int: " << i << std::endl;
		return i;
	}
	catch(std::exception &e){
		std::cout << "int: impossible" << std::endl;
	}
	return 0;
}

Class::operator float()
{
	try
	{
		float f = std::stof(_str);
		if (f != (int)f)
			std::cout << "float: " << f << "f" << std::endl;
		else
			std::cout << "float: " << f << ".0f" << std::endl;
		return f;
	}
	catch(std::exception &e){
		std::cout << "float: impossible" <<std::endl;
	}
	return 0;
}

Class::operator double()
{
	try
	{
		double d = std::stod(_str);
		if (d != (int)d)
			std::cout << "double: " << d << std::endl;
		else
			std::cout << "double: " << d << ".0"<<std::endl;
	}
	catch(std::exception &e){
		std::cout << "double: impossible" << std::endl;
	}
	return 0;
}

void	Class::Scalar()
{
	(void)static_cast<char>(*this);
	(void)static_cast<int>(*this);
	(void)static_cast<float>(*this);
	(void)static_cast<double>(*this);
	
}

/*
char int float double
*/