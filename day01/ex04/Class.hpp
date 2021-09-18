#ifndef CLASS_HPP
# define CLASS_HPP

# include <fstream>
# include <string>
# include <iostream>

class Class{
	public:
		Class(char **av);
		~Class(void);
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