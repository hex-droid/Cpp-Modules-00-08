#include "mutantstack.hpp"

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