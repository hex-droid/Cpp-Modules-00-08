#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>

class Span{
	public:
		Span(unsigned int n);
		Span(void);
		~Span(void);
		Span &operator=(Span const &rhs);
		Span(Span const &rhs);
		
		void	addNumber(int nb);

		void	addRange(int *begin, int *end);

		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		void	debug(void) const;

		int		getLen(void) const;
		int		getAlloc(void) const;
		class outBounds : public std::exception{
			public:
				virtual const char *what() const throw(){
				return "reached max size";
			}
		};
		class noSpan : public std::exception{
			public:
				virtual const char *what() const throw(){
				return "no span for <2 elements";
			}
		};

	private:
		int 		*_data;
		unsigned int _len;
		unsigned int _alloc;
};

#endif

//				virtual const char *what() const throw(){
