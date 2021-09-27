FLAGS = -Wall -Wextra -Werror

NAME = convert

SRCS =	main.cpp\
		Class.cpp\

all: $(NAME)

$(NAME) : $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm convert

re : clean all