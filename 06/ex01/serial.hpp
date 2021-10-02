#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>
# include <vector>

using namespace std;

struct Data{
	int num;
	int po;
};

uintptr_t		serialize(Data *ptr);
Data		*deserialize(uintptr_t);

#endif