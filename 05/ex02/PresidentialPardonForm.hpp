#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARIDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form{
	public:
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);

		virtual void execute(Bureaucrat const &executor) const;
		void		 pardon(void);
};
#endif