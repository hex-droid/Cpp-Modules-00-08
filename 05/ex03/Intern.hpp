#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
	public:
		Intern(void);
		~Intern(void);
		Intern &operator=(Intern const &rhs);
		Intern(Intern const &rhs);

		Form	*makeForm(std::string const &name, std::string const &target);
		
	
	private:
		Form	*form;
		void	President(std::string const &target);
		void	Robotomy(std::string const &target);
		void	Shrubbery(std::string const &target);
};
#endif