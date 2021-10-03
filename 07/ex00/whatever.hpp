#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
T		min(T a, T b)
{
	return (a >= b)? b : a;
}

template <typename T>
T		max(T a, T b)
{
	if(a==b)
		return b;
	return (b <= a)? a : b;
}

template <typename T>
void	swap(T &a, T &b)
{
	T tmp = b;
	b = a;
	a = tmp;
}

#endif