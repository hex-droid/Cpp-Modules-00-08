#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>
# include <vector>

struct Data{
	int num;
	int po;
	float p;
	double x;
};

uintptr_t		serialize(Data *ptr);
Data		*deserialize(uintptr_t);

#endif