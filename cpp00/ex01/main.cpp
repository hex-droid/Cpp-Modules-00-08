#include "Contact.class.hpp"

int		main()
{
	std::string	first_name("zakaria");
	std::string last_name("taouil");
	std::string nickname("skerakef");
	std::string phone_number("0708271169");
	std::string darkest_secret("I fucked your mom");
	
	Contact contact(first_name,
					last_name,
					nickname,
					phone_number,
					darkest_secret);

	contact.debugg();

	Contact	contact2;
	contact2.debugg();
	return (0);
}

/*
first name, last name, nickname,
phone number,darkest secret.
*/