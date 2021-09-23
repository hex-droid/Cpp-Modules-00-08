#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "<Intern>Default Constructor" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "<Intern>Default Destructor" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

Intern::Intern(Intern const &rhs)
{
	*this = rhs;
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	int i;
	std::string table[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	void	(Intern::*ptr[])(std::string const &target) = {&Intern::Shrubbery, &Intern::Robotomy, &Intern::President};

	for (i = 0; i < 3; i++)
		if(!name.compare(table[i]))
			(this->*ptr[i])(target);
	return form;
}

void	Intern::Shrubbery(std::string const &target)
{
	form = new ShrubberyCreationForm(target);
}

void	Intern::Robotomy(std::string const &target)
{
	form = new RobotomyRequestForm(target);
}

void	Intern::President(std::string const &target)
{
	form = new PresidentialPardonForm(target);
}