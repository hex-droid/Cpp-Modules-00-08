#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form{
	public:
		ShrubberyCreationForm(std::string const &target);
		virtual ~ShrubberyCreationForm(void);

		virtual void	execute(Bureaucrat const &executor) const;
		void			xExec(void) const;
	
	private:
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
		ShrubberyCreationForm(void);

};


#endif