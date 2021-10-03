#include "iter.hpp"


int	main()
{
	int a[5] = {1,2,3,4,5};

	iter<int>(a, 5, func);
	return 0;
}