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

void	PhoneBook::debugg(int index) const
{	

	if (_contact[index].get_flag() == 1)
	{
		_contact[index].debugg();
		std::cout << std::endl;
	}
}

void	PhoneBook::ext_debugg(void) const
{
//	int	index;

	std::cout << "index     |" << "first name|" << "last name |" << "nickname  " << std::endl;
	for (int i = 0; (_contact[i].get_flag() == 1); i++)
	{
		std::cout << i << _contact[i].get_firstname() << _contact[i].get_lastname() << _contact[i].get_nickname() << std::endl;
	}
//	std::cout << std::endl << "Enter an index : ";
//	std::cin >> index;
//	if (_contact[index].get_flag() == 1)
//		this->debugg(index);
}

void	PhoneBook::op_search(void)
{
	std::cout << "SEARCH!" << std::endl;
	
	this->ext_debugg();
	std::cout << "_index : " << _index << std::endl;
}

void	PhoneBook::print_err(void)
{
	std::cout << "PhoneBook is Full" << std::endl;
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
	
	if (_index < 8)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << "Enter " << key[i] << " : ";
			std::cin >> value[i];
		}
		this->add_contact(value);
	}
	else
		print_err();
}

/*
first name, last name, nickname,
phone number,darkest secret.
*/