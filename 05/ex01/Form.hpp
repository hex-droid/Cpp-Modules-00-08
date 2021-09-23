#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Form{
	public:
		Form(std::string const &name, int const sign_grade, int const exec_grade);
		Form(void);
		~Form(void);
		Form &operator=(Form const &rhs);
		Form(Form const &rhs);

		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Grade too low.");
				}
		};
		class OutOfBounds : public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Grade out of bounds [1-150].");
				}	
		};

		std::string 	getName(void) const;
		int				getsignGrade(void) const;
		int				getexecGrade(void) const;
		bool			getSign(void) const;

		void				beSigned(Bureaucrat &rhs);
	private:
		std::string const	_name;
		int			const	_sign_grade;
		int			const	_exec_grade;
		bool				_signed;
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif

/*
	name, boolean, grade required to sign it

	memfunc:
		beSigned(Bureaucrat const &rhs);
	
	Bureaucrat::signForm(void);

Form::GradeTooLowException

sign_grade = 40;

bureaucrat_grade = 40 39 38 37 
*/