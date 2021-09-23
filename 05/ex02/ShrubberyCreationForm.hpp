#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(void);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);

		virtual void	execute(Bureaucrat const &executor) const;
		void			xExec(void) const;
};


#endif