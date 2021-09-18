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
		Karen(char **av);
		~Karen(void);

		void		complain(std::string level);
		int			getI(std::string level);
		void		logFilter(void);
		
	private:
		std::string	_log_level;
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif