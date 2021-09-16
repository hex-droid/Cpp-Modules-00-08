#include "Sample.Class.hpp"

int		main()
{
	Sample	instance;
	Sample	*instancep = &instance;

	// pointer of type int on a interger member of class Sample
	int		Sample::*p = NULL;

	void	(Sample::*f)(void) const;
	
	// Sample::nb <int>
	// p <int *>
	//
	p = &Sample::nb;
	
	std::cout << "Value of member nb: " << instance.nb << std::endl;
	instance.*p = 42;
	//instance.nb = 42;
	std::cout << "Value of member nb: " << instance.nb << std::endl;
	instancep->*p = 21;
	//instancep->nb = 21;
	std::cout << "Value of member nb: " << instance.nb << std::endl;

	f = &Sample::foo;

	(instance.*f)();
	//(instance.foo)();
	(instancep->*f)();
	//(instancep->foo)();
	return (0);
}
