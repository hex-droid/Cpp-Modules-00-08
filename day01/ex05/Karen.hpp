#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen{
	public:
		Karen(void){}
		~Karen(void){}

		void	complain(std::string level){
		}
	private:
		void	debug(void){
			std::cout << "debug" << std::endl;
		}
		void	info(void){
			std::cout << "info" << std::endl;
		}
		void	warning(void){
			std::cout << "warning" << std::endl;
		}
		void	error(void){
			std::cout << "error" << std::endl;
		}
};

#endif