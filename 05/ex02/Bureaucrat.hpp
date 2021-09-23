#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class	Form;

class	Bureaucrat{
	public:
		Bureaucrat(std::string const &name, int const grade);
		~Bureaucrat(void);
	
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Grade too high.");
				}
		};
		class GradeTooLowException: public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Grade too low.");
				}
		};

		std::string const	&getName(void) const;
		int	const			&getGrade(void) const;
		
		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signForm(std::string const &name, int flag);
		void				executeForm(Form const &form, int flag) const;

	private:
		Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		Bureaucrat(Bureaucrat const &rhs);
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif