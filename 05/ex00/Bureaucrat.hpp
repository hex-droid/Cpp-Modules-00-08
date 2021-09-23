#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class	Bureaucrat{
	public:
		Bureaucrat(std::string const &name, int const grade);
		Bureaucrat(void);
		~Bureaucrat(void);
	
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Grade Too High.");
				}
		};
		class GradeTooLowException: public std::exception{
			public:
				virtual const char *what() const throw(){
					return ("Grade Too Low.");
				}
		};

		std::string const	&getName(void) const;
		int	const			&getGrade(void) const;
		
		void				incrementGrade(void);
		void				decrementGrade(void);

	private:
		Bureaucrat &operator=(Bureaucrat const &rhs);
		Bureaucrat(Bureaucrat const &rhs);
		std::string const	_name;
		int					_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif