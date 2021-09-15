FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRCS =	main.cpp\
		Contact.class.cpp\
		PhoneBook.class.cpp\

all:
	clang++ $(FLAGS) $(SRCS) -o Phonebook

clean:
	rm Phonebook

re: clean all