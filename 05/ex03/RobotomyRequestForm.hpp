#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm(std::string const &target);
		~RobotomyRequestForm(void);

		virtual void	execute(Bureaucrat const &executor) const;
		void			robotomize(void) const;
	
	private:
		RobotomyRequestForm(RobotomyRequestForm const &rhs);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		RobotomyRequestForm(void);
};
#endif