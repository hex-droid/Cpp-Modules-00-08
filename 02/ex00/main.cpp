#include "Fixed.hpp"

int		main()
{
	Fixed	p1(42);
	Fixed	p2(10);
	Fixed p3 = p1 + 50;
	Fixed p4(p3);

	std::cout << "p1: " << p1.getValue() << std::endl;
	std::cout << "p2: " << p2.getValue() << std::endl;
	p2 = p1;
	std::cout << "p2: " << p2.getValue() << std::endl;
	std::cout << "p3: " << p3.getValue() << std::endl;
	std::cout << "p4: " << p3.getValue() << std::endl;
	std::cout << p1 << std::endl;
	
	return (0);
}