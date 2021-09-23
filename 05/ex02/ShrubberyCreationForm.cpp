#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
Form("ShrubberyCreation", 145, 137, target)
{
	std::cout << "<Shrubbery>Parametric Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "Default Constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "<Shrubbery>Default Destructor" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		(void)rhs;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &rhs)
{
	*this = rhs;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try{
		if (!this->getSign())
			throw NotSigned();
		if (executor.getGrade() > this->getexecGrade())
			throw GradeTooLowException();
		this->xExec();
		executor.executeForm(*this, 1);
	}
	catch(GradeTooLowException &e){
		std::cout << "ShrubberyCreationForm::execute: "<<e.what()<<std::endl;
		executor.executeForm(*this, 0);
	}
	catch(NotSigned &e){
		std::cout << "ShrubberyCreationForm::execute: "<<e.what()<<std::endl;
	}
}

void	ShrubberyCreationForm::xExec(void) const
{
	std::ofstream ofs(_target + "_shrubbery");
	ofs 
	<< "    oxoxoo    ooxoo\n"
	<< "  ooxoxo oo  oxoxooo\n"
	<< " oooo xxoxoo ooo ooox\n"
	<< " oxo o oxoxo  xoxxoxo\n"
	<< "  oxo xooxoooo o ooo\n"
	<< "    ooo\\oo\\  /o/o\n"
	<<	"        \\  \\/ /\n"
	<<	"         |   /\n"
	<<"         |  |\n"
	<<"         | D|\n"
	<<"         |  |\n"
	<<"         |  |\n"
	<<"  ______/____\\____\n";

	ofs.close();
}

/*
"    oxoxoo    ooxoo\n"
"  ooxoxo oo  oxoxooo\n"
" oooo xxoxoo ooo ooox\n"
" oxo o oxoxo  xoxxoxo\n"
"  oxo xooxoooo o ooo\n"
"    ooo\oo\  /o/o\n"
"        \  \/ /\n"
"         |   /\n"
"         |  |\n"
"         | D|\n"
"         |  |\n"
"         |  |\n"
"  ______/____\____\n"
*/