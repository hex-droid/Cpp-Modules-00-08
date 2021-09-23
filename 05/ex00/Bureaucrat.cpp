#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int const grade) : _name(name)
{
	std::cout << "Parametric Contructor Called" << std::endl;
	try{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		_grade = grade;
	}
	catch (GradeTooLowException &e){
		std::cout << "Parametric Contructor: " << e.what() << std::endl; 
		this->~Bureaucrat();
		exit(1);
	}
	catch(GradeTooHighException &e){
		std::cout << "Parametric Contructor: " << e.what() << std::endl;
		this->~Bureaucrat();
		exit(1);
	}
}

Bureaucrat::Bureaucrat(void): _name(0), _grade(0) 
{
	std::cout << "Default Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Called" << std::endl; 
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs)
{
	*this = rhs;
}

std::string const	&Bureaucrat::getName(void) const
{
	return _name;
}

int const			&Bureaucrat::getGrade(void) const
{
	return _grade;
}

void				Bureaucrat::incrementGrade(void)
{
	try {
		if (!(_grade - 1))
			throw GradeTooHighException();
		this->_grade -= 1;
	}
	catch (GradeTooHighException &r){
		std::cout << "Bureaucrat::incrementGrade: " << r.what() << std::endl;
	}
}

void				Bureaucrat::decrementGrade(void)
{
	try{
		if ((150 - (_grade + 1)) < 0)
			throw GradeTooLowException();
		this->_grade += 1;
	}
	catch(GradeTooLowException &r){
		std::cout << "Bureaucrat::decrementGrade: " << r.what() << std::endl;
	}
}

std::ostream		&operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << "<" << rhs.getName() << ">, bureaucrat grade <"<<rhs.getGrade()<<">." <<std::endl;
	return o;
}