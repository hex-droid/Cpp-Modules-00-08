#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	{
		std::cout<<"-------------------------------------------"<<std::endl;
		ShrubberyCreationForm form1("chjra");
		RobotomyRequestForm		form2("Bender");
		PresidentialPardonForm	form3("Niba");

		std::cout << form1;
		std::cout << form2;
		std::cout << form3;
		std::cout<<"-------------------------------------------"<<std::endl;

	}
	{
		std::cout<<"-------------------------------------------"<<std::endl;

		Bureaucrat	bibi("bibi", 10);
		PresidentialPardonForm form("Hamid Skafandri");
		std::cout << form;
		
		form.beSigned(bibi);
		form.execute(bibi);
		std::cout<<"-------------------------------------------"<<std::endl;
	}
	return 0;
}

/*
-------------------------------------------
*/