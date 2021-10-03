#include "Array.hpp"

int			main()
{
	Array<char> arr(5);

	std::cout <<"arr alloc: "<< arr.alloc() << std::endl;
	arr.Debug();
	arr.Add('h');
	arr.Add('e');
	arr.Add('l');
	arr.Add('l');
	arr.Add('o');
	arr.Debug();
	std::cout <<"arr length: "<< arr.size() << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << arr[5] << std::endl;

	return 0;
}