FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
all:
	clang++ main.cpp Zombie.cpp newZombie.cpp randomChump.cpp $(FLAGS) -o zombie
clean:
	rm zombie
re : all clean
