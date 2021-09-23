FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

SRCS =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\


all:	$(NAME)

$(NAME):	$(SRCS)
	clang++ $(FLAGS) $(SRCS)

clean:
	rm $(NAME)

re: clean all