FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

all:
	clang++ $(FLAGS) megaphone.cpp -o megaphone
clean:
	rm -rf *.o
fclean: clean
	rm megaphone
re: fclean all