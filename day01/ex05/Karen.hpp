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
		Karen(void);
		~Karen(void);

		int		getI(std::string level);
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif