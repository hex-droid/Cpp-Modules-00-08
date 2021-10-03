#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
bool	easyfind(T &begin, T &end,int val)
{
	T *f = std::find(&begin, &end, val);
	if (f != &end)
		return true;
	else
		return false;
}

#endif