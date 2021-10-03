#include "span.hpp"

int		main()
{
	Span	A(10);
//	int d[] = {1, 2, 3, 4, 6, 8, 9, 6, 6};
//	int len = 9;

	int d[] = {5, 3, 17, 9, 11};
	int len = 5;

//	A.addNumber(42);
//	A.debug();

//	std::cout << "len: "<<A.getLen()<<std::endl;
//	std::cout << "alloc: "<<A.getAlloc()<<std::endl;

	A.addRange(d, (d+len));
	A.debug();
	
	std::cout << "len: "<<A.getLen()<<std::endl;
	std::cout << "alloc: "<<A.getAlloc()<<std::endl;
	std::cout << "----------------------------------"<<std::endl<<std::endl;
	std::cout << "lspan: "<< A.longestSpan() << std::endl;
	std::cout << "sspan: "<< A.shortestSpan() << std::endl;

	return 0;
}