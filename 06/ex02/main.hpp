#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>

using namespace std;

class	Base{
	public:
		virtual ~Base(void);
};

class A: public Base{
	public:
		~A(void);
};

class B: public Base{
	public:
		~B(void);
};

class C: public Base{
	public:
		~C(void);
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

bool	isA(Base *p);
bool	isB(Base *p);
bool	isC(Base *p);

#endif