#include "Sample.Class.hpp"

// reference sur std::string
void	foo(std::string	&strRef)
{
	strRef += "zrireq ";
}

int		main()
{
	std::string	str = "Hello my is ";
	
	//std::string	&getRef(void);
	//std::string	*getPtr(void);
	//std::string const	&getConstRef(void);
	//std::string const *getConstRef(void);
	//std::string	
	// reference sur int
	std::cout << str << std::endl;
	foo (str);
	std::cout << str << std::endl;
	foo (str);
	std::cout << str << std::endl;
	return (0);
}