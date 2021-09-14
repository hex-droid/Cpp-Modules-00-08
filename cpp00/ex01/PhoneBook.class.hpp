#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook{
	private:
		Contact _contact[7];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add_contact(int index, Contact contact);

		void	debugg(void) const;
}

#endif