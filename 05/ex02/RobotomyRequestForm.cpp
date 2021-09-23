#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
: Form("RobotomyRequest", 72, 45, target)
{
	std::cout << "<Robotomy>Parametric Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout << "Default Constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "<Robotomy>Default Destructor" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rhs)
{
	*this = rhs;
}

void		RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try{
		if (!this->getSign())
			throw NotSigned();
		if (executor.getGrade() > this->getexecGrade())
			throw GradeTooLowException();
		robotomize();
		executor.executeForm(*this, 1);
	}
	catch(GradeTooLowException &e){
		std::cout << "RobotomyRequestForm::execute: "<<e.what()<<std::endl;
		executor.executeForm(*this, 0);
	}
	catch(NotSigned &e){
		std::cout << "RobotomyRequestForm::execute: "<<e.what()<<std::endl;
	}
}

void		RobotomyRequestForm::robotomize(void) const
{
	srand (time(NULL));
	if (rand() % 2)
		std::cout << "<"<<_target<<"> has been robotomized successfully"<<std::endl;
	else
		std::cout << "*-*-*-*-*-drilling noises*-**--*-**-*-*-*-"<<std::endl;
}