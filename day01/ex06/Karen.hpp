#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

enum	Complains{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen{
	public:
		Karen(char **av) : _log_lvl(av[1]){}
		~Karen(void){}

		void	complain(std::string level){
			switch (getI(level))
			{
				case DEBUG:
					debug();
					break;
				case INFO:
					info();
					break;
				case WARNING:
					warning();
					break;
				case ERROR:
					error();
					break;
				default:
					break;
			}
		}
		int		getI(std::string level){
			int i;
			std::string key[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

			for(i = 0; i < 4; i++)
				if (!level.compare(key[i].c_str()))
					break;
			return (i);
		}
		
	private:
		std::string	_log_lvl;
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