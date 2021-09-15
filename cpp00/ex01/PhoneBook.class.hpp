#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <stdlib.h>
# include <iomanip>

class PhoneBook{
	private:
		Contact _contact[8];
		int		_index;
		void	print_err(const char *str) const {
			std::cerr << str << std::endl;
		}
		void	add_contact(std::string *value);
		void	ext_formatter(std::string value) const{
			if (value.length() > 10)
			{	
				value = value.substr(0, 9);
				value.append(".");
			}
			std::cout << std::right << std::setw(10) << value << "|";
		}
		bool	is_num(char c) const {
			if (c >= 48 && c <= 57)
				return (true);
			return (false);
		}
		bool	valid_buffer(std::string index) const {
			if (index.length() != 1)
				return (false);
			if (!is_num(index[0]))
				return (false);
			return (true);
		}
		bool	valid_index(int index) const {
			if (_contact[index].get_flag() == 1)
				if (index >= 0 && index <= 7)
					return (true);
			return (false);
		}
		void	debugg(int index) const;
		void	ext_debugg(void) const;

	public:
		PhoneBook(void);
		~PhoneBook(void);


		void	op_add(void);
		void	op_search(void);
		void	print_usage(void);

};

void	phonebook(void);

#endif

/*
op_add
op_search
print_usage
*/