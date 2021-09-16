#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>
# include <string>

class	Student{
	public:
		Student (std::string	login) : _login(login){
			std::cout << "New Student : " << _login << std::endl;
		}
		Student(void) : _login("ldefault"){
			std::cout << "New Student : " << _login << std::endl;
		}
		~Student(void){
			std::cout << "Student " << _login << " Deleted" << std::endl;
		}
		void	debug(void) const{
			std::cout << _login << std::endl;
		}
	private:
		std::string	_login;
};

void	foo(int	&numRef);

#endif