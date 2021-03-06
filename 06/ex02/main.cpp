#include "main.hpp"

Base	*generate(void)
{
	srand (time(NULL));
	int t = (rand() % 3);
	Base *p;
	switch(t)
	{
		case 0:
			p = new A;
			break;
		case 1:
			p = new B;
			break;
		case 2:
			p = new C;
			break;
	}
	return p;
}

void	identify(Base *p)
{
	if (isA(p))
		std::cout << "A" << std::endl;
	else if (isB(p))
		std::cout << "B" << std::endl;
	else if (isC(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A &s = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)s;

	}
	catch(std::exception &e){}
	try
	{
		B &s = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)s;

	}
	catch(std::exception &e){}
	try
	{
		C &s = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)s;

	}
	catch(std::exception &e){
	}
}

bool	isA(Base *p)
{
	A *s = dynamic_cast<A*>(p);
	if (s == NULL)
		return false;
	return true;
}

bool	isB(Base *p)
{
	B *s = dynamic_cast<B*>(p);
	if (s == NULL)
		return false;
	return true;	
}

bool	isC(Base *p)
{
	C *s = dynamic_cast<C*>(p);
	if (s == NULL)
		return false;
	return true;
}

int	main()
{
	Base *p = generate();

	identify(p);
	identify(*p);

	delete p;
	return 0;
}