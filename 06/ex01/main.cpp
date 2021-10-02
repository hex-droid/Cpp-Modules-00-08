#include "serial.hpp"


uintptr_t		serialize(Data *ptr)
{
	uintptr_t n = reinterpret_cast<uintptr_t>(ptr);
	return n;
}
Data		*deserialize(uintptr_t s)
{
	Data *d;
	d = reinterpret_cast<Data*>(s);
	return d;
}

int		main()
{
	Data *p = new Data;
	p->num = 16;
	p->po = 42;
	p->p = 3.14f;
	p->x = 4.76;
	std::cout << p->num << std::endl;
	std::cout << p->po << std::endl;
	std::cout << p->p << std::endl;
	std::cout << p->x << std::endl;
	std::cout << "-----------------------"<<std::endl;
	std::cout << "p addr: " << p << std::endl;
	std::cout << "-----------------------"<<std::endl;

	uintptr_t i = serialize(p);
	std::cout << "i addr: " << i << std::endl;
	Data *c = deserialize(i);
	std::cout << "-----------------------"<<std::endl;
	std::cout << "c addr: " << c << std::endl;
	std::cout << "-----------------------"<<std::endl;

	std::cout << c->num << std::endl;
	std::cout << c->po << std::endl;
	std::cout << c->p << std::endl;
	std::cout << c->x << std::endl;
	delete p;
	return 0;
}