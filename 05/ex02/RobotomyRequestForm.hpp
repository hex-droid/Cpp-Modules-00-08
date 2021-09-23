#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form{
	public:
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);

		virtual void	execute(Bureaucrat const &executor) const;
		void			robotomize(void);
};
#endif