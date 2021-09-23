#include "Intern.hpp"

int		main()
{
	Bureaucrat birokrat("abounak", 2);
	Intern someRandomIntern;
	Form	*rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf;
	rrf->beSigned(birokrat);
	rrf->execute(birokrat);
	delete rrf;
	return 0;
}

/*
-------------------------------------------
*/