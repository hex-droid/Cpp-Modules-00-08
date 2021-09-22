NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRCS =	AAnimal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp\
		main.cpp\
		
all:$(NAME)

$(NAME) : $(SRCS)
	clang++ $(FLAGS) $(SRCS)

clean:
	rm a.out

re: clean all