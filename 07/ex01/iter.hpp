#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *addr, int length, void (func)(T a))
{
	for(int i=0; i < length; i++)
	{
		func(addr[i]);
	}
}

template <typename T>
void	func(T a)
{
	std::cout << a << std::endl;
}

#endif