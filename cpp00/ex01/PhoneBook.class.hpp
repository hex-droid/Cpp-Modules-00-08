#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"
# include <stdlib.h>

class PhoneBook{
	private:
		Contact _contact[8];
		int		_index;
		void	print_err(void);
		void	add_contact(std::string *value);

	public:
		PhoneBook(void);
		~PhoneBook(void);


		void	op_add(void);
		void	op_search(void);
		void	print_usage(void);

		void	debugg(int index) const;
		void	ext_debugg(void) const;
};



void	phonebook(void);

#endif

/*

index,first name,last nameandnickname.
*/