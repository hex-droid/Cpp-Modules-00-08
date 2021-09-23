#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm(std::string const &target);
		~PresidentialPardonForm(void);

		virtual void execute(Bureaucrat const &executor) const;
		void		 pardon(void) const;
	
	private:
		PresidentialPardonForm(PresidentialPardonForm const &rhs);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		PresidentialPardonForm(void);

};
#endif