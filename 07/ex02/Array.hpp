#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array{
	public:	
		Array(void);
		~Array(void);
		Array(unsigned int n);
		Array &operator=(Array const &rhs);
		Array(Array const &rhs);
		T	operator[](int idx);

		void Add(T n);

		void Debug(void);
		int	size(void) const;
		int alloc(void) const;
	
	private:
		T	*_data;
		int _alloc;
		int _len;
};

template <typename T>
Array<T>::Array(void): _alloc(2), _len(0)
{
	_data = new T[2];
}

template <typename T>
Array<T>::Array(unsigned int n):_alloc(n), _len(0)
{
	_data = new T[_alloc];
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] _data;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		this->_data = new T[rhs._alloc];
		for(int i=0; i<_alloc; i++)
		{
			this->_data[i] = rhs._data[i];
		}
	}
	return *this;
}

template <typename T>
Array<T>::Array(Array const &rhs)
{
	*this = rhs;
}

template <typename T>
T	Array<T>::operator[](int idx)
{
	if (idx >= _alloc)
		throw std::exception();
	return _data[idx];
}

template <typename T>
int	Array<T>::size(void) const
{
	return _len;
}

template <typename T>
int Array<T>::alloc(void) const
{
	return _alloc;
}

template <typename T>
void Array<T>::Add(T n)
{
	if (_len+1 > _alloc)
		throw std::exception();
	_data[_len++] = n;
}

template <typename T>
void Array<T>::Debug(void)
{
	int i;
	std::cout << "[";
	for (i=0; i<_len-1; i++)
		std::cout << _data[i] <<", ";
	std::cout << _data[i] << "]" << std:: endl;
}

#endif