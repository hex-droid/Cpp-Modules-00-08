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
	cout << "d addr: " << d << endl;
	return d;
}

int		main()
{
	Data *p = new Data;
	p->num = 16;
	p->po = 42;
	cout << "p addr: " << p << endl;

	cout << p->num << endl;
	uintptr_t i = serialize(p);
	Data *c = deserialize(i);

	cout << c->num << endl;
	cout << c->po << endl;

	delete p;
	return 0;
}