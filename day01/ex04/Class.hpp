#ifndef CLASS_HPP
# define CLASS_HPP

# include <fstream>
# include <string>
# include <iostream>

class Class{
	public:
		Class(char **av) : _filename(av[1]), _s1(av[2]), _s2(av[3]) {
			std::cout << "Class Constructor" << std::endl;
			parseLine();
			searchReplace();
			ofsWrite();
		}
		~Class(void){
			std::cout << "Class Destructor" << std::endl;
		}
		void	parseLine(void);
		void	searchReplace(void);
		void	ofsWrite(void);
	private:
		std::string _filename;
		std::string _s1;
		std::string _s2;
		std::string	line;
};
#endif