#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat		pizza("khafni", 5);
	Bureaucrat		fail("failure", 67);

	std::cout << fail;
	std::cout << pizza;
	pizza.incrementGrade();	 
	std::cout << pizza;
	pizza.decrementGrade();
	std::cout << pizza;


	return 0;
}