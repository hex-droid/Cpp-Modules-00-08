#include "span.hpp"

Span::Span(unsigned int n): _alloc(n), _len(0)
{
	_data = new int[_alloc];
}

Span::Span(void):_alloc(0), _len(0){}

Span::~Span(void)
{
	delete [] _data;
}

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_alloc = rhs._alloc;
		this->_data = new int[rhs._alloc];
		for(int i=0; i<rhs._len; i++)
			this->_data[_len++] = rhs._data[i];
	}
	return *this;
}

Span::Span(Span const &rhs)
{
	*this = rhs;
}

void	Span::addNumber(int nb)
{
	try{
		if (_len == _alloc)
			throw outBounds();
		_data[_len++] = nb;
	}catch(outBounds &e){
		std::cout <<"Span::addNumber: "<< e.what() << std::endl;
	}
}

int		Span::shortestSpan(void) const
{
	try{
		if (_len < 2)
			throw noSpan();
		int min = _data[1] - _data[0];
		if(_len>2)
		{
			for(int i=1; i<_len; i++)
			{
				if ((_data[i] - _data[i-1]) < min)
					min = (_data[i] - _data[i-1]);
			}
		}
		return min;
	}catch(noSpan &e){
		std::cout << "Span::longestSpan: "<<e.what() << std::endl;
	}
	return -1;
}

int		Span::longestSpan(void) const
{
	try{
		if (_len < 2)
			throw noSpan();
		std::sort(_data, (_data+_len));
		return _data[_len-1]-_data[0];
	}catch(noSpan &e){
		std::cout << "Span::longestSpan: "<<e.what() << std::endl;
	}
	return -1;
}

void	Span::addRange(int *begin, int *end)
{
	int len = (end - begin);

	for (int *it=begin; it!=(begin+len); it++)
	{
		addNumber(*it);
	}
}

void	Span::debug(void) const
{
	int i;
	std::cout << "----------------------------------"<<std::endl;
	if (_len > 0)
	{
		for (i=0; i<_len-1; i++)
		{
			std::cout << _data[i] <<" ,";
		}
		std::cout << _data[i] << "."<<std::endl;	
	}
	std::cout << "----------------------------------"<<std::endl;
}

int		Span::getLen(void) const
{
	return _len;
}

int		Span::getAlloc(void) const
{
	return _alloc;
}