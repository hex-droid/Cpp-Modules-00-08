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

#endif