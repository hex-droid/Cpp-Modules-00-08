#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int		main()
{
	Bureaucrat birokrat("ztaouil", 140);
	Bureaucrat biro("skerakef", 1);
	ShrubberyCreationForm form("tmp");
	
//	std::cout << form;
	form.beSigned(birokrat);
	std::cout << form;
	form.execute(birokrat);
	form.execute(biro);
	std::cout << form;
	

	return 0;
}