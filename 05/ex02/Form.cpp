#include "Form.hpp"

Form::Form(std::string const &name, int const sign_grade, int const exec_grade, std::string const &target):
_target(target), _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade), _signed(false)
{
	try{
		if (sign_grade > 150 || sign_grade < 1)
			throw OutOfBounds();
		if (exec_grade > 150 || exec_grade < 1)
			throw OutOfBounds();
	}
	catch(OutOfBounds &e){
		std::cout << "Form::Form: " << e.what() << std::endl;
		this->~Form();
		exit(1);
	}
	std::cout << "<Form>Parametric Constructor Called" << std::endl;
}

Form::Form(void): _name(0), _sign_grade(0), _exec_grade(0), _signed(false)
{
	std::cout << "Default Constructor" << std::endl;
}

Form::~Form(void)
{
	std::cout << "<Form>Default Destructor" << std::endl;
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

Form::Form(Form const &rhs):_name(0),_sign_grade(0),_exec_grade(0)
{
	*this = rhs;
}

std::string 	Form::getName(void) const
{
	return _name;
}

int				Form::getsignGrade(void) const
{
	return _sign_grade;
}

int				Form::getexecGrade(void) const
{
	return _exec_grade;
}

bool			Form::getSign(void) const
{
	return _signed;
}

std::ostream	&operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form  	<"<<rhs.getName()<<">" << std::endl;
	o << "SignGrade: <"<<rhs.getsignGrade()<<">"<<std::endl;
	o<<  "ExecGrade: <"<<rhs.getexecGrade()<<">"<< std::endl;
	o<<  "Signed   : <"<<rhs.getSign()<<">"<<std::endl<<std::endl;
	return o;
}

void			Form::beSigned(Bureaucrat  &rhs)
{
	try{
		if (this->getSign())
			throw SignedAlready();
		if (rhs.getGrade() > this->getsignGrade())
			throw GradeTooLowException();
		this->_signed = true;
		rhs.signForm(this->_name, 1);
	}
	catch(GradeTooLowException &e){
		std::cout << "Form::beSigned: " << e.what() << std::endl;
		rhs.signForm(this->_name, 0);
	}
	catch(SignedAlready &e){
		std::cout << "Form::beSigned: " << e.what() << std::endl;
	}
}