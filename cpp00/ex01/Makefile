FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all:
	clang++ $(FLAGS) main.cpp Contact.class.cpp -o Phonebook

clean:
	rm Phonebook

re: clean all