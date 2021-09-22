NAME = a.out

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	AAnimal.cpp\
		WrongAAnimal.cpp\
		WrongCat.cpp\
		Dog.cpp\
		Cat.cpp\
		main.cpp\
		
all: $(NAME)

$(NAME) : $(SRCS)
	clang++ $(FLAGS) $(SRCS)

clean:
	rm a.out

re: clean all