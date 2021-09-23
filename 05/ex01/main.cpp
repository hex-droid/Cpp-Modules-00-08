#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat birokrat("ztaouil", 1);
	Form form("Marriage form", 50, 20);
//	Form fail("test", -50, 965);

	std::cout << form;
	form.beSigned(birokrat);
	std::cout << form;
	form.beSigned(birokrat);
	std::cout << form;
//	std::cout << fail;
	return 0;
}