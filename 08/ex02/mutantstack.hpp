#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <algorithm>
# include <list>

template <typename T>
class	MutantStack : public std::stack<T>{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack(void);
		~MutantStack(void);
		MutantStack(MutantStack const &rhs);
		void operator=(MutantStack const &rhs);
		
		iterator begin(void);
		iterator end(void);
};

template <typename T>
MutantStack<T>::MutantStack(void)
{

}

template <typename T>
MutantStack<T>::~MutantStack(void)
{

}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &rhs)
{
	this->c = rhs.c;
}

template <typename T>
void MutantStack<T>::operator=(MutantStack const &rhs)
{
	*this = rhs;
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end(void)
{
	return this->c.end();
}
#endif