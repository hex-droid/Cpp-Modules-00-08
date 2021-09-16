#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class	Sample{

	public:
		Sample(void) : nb(0){
			std::cout << "Constructor Called" << std::endl;
			return;
		}
		~Sample(void){ 
			std::cout << "Destructor Called" << std::endl;
			return;
		}
	
		void		foo(void) const{
			std::cout << "MemberFunction Called" << std::endl;
			return;
		}
	
		int	nb;

};

#endif
