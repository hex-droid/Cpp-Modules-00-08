#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
Form("PresidentialPardon", 25, 5, target)
{
	std::cout << "<PresidentPardon>Parametric Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "Default Constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "<PresidentialPardon>Default Destructor" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &rhs)
{
	*this = rhs;
}

void				PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try{
		if (!this->getSign())
			throw NotSigned();
		if (executor.getGrade() > this->getexecGrade())
			throw GradeTooLowException();
		pardon();
		executor.executeForm(*this, 1);
	}
	catch (NotSigned &e){
		std::cout << "PresidentialPardonForm::execute: " << e.what() << std::endl;
	}
	catch (GradeTooLowException &e){
		std::cout << "PresidentialPardonForm::execute: " << e.what() << std::endl;
		executor.executeForm(*this, 0);
	}
}

void				PresidentialPardonForm::pardon(void) const
{
	std::cout << "<"<<_target<<"> has been pardoned by Zafod Beeblebrox"<<std::endl;
}