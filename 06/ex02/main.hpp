#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>

class	Base{
	public:
		virtual ~Base(void);
};

class A: public Base{
	public:
};

class B: public Base{
	public:
};

class C: public Base{
	public:
};
class D: public Base{
	public:
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

bool	isA(Base *p);
bool	isB(Base *p);
bool	isC(Base *p);

#endif