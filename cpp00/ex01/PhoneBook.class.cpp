#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _index(0)
{
	std::cout << "PhoneBook Constructor Called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook Destructor Called" << std::endl;
}

void	PhoneBook::add_contact(std::string *value)
{
	this->_contact[_index].set_first_name(value[0]);
	this->_contact[_index].set_last_name(value[1]);
	this->_contact[_index].set_nickname(value[2]);
	this->_contact[_index].set_phone_number(value[3]);
	this->_contact[_index].set_darkest_secret(value[4]);

	this->_index++;
}

void	PhoneBook::debugg(void)	const
{	
	int		i = 0;

	while (_contact[i].get_flag())
	{
		_contact[i].debugg();
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::op_search(void)
{
	std::cout << "SEARCH!" << std::endl;
	this->debugg();

}

void	PhoneBook::print_err(void)
{
	return;
}

void	PhoneBook::print_usage(void)
{
	std::cout << "usage:" << std::endl;
	std::cout << "[ADD]" << std::endl;
	std::cout << "[SEARCH]" << std::endl;
	std::cout << "[QUIT]" << std::endl;
}

void	PhoneBook::op_add(void)
{
	std::cout << "ADD" << std::endl;
	std::string		key[5];
	std::string		value[5];

	key[0] = "firstname";
	key[1] = "lastname";
	key[2] = "nickname";
	key[3] = "phonenumber";
	key[4] = "darkestsecret";
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << key[i] << " : ";
		std::cin >> value[i];
	}
	if (_index < 8)
		this->add_contact(value);
	else
		print_err();
}

/*
first name, last name, nickname,
phone number,darkest secret.
*/