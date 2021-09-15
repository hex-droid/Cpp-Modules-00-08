#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _index(0)
{
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::_add_contact(std::string *value)
{
	this->_contact[_index].set_first_name(value[0]);
	this->_contact[_index].set_last_name(value[1]);
	this->_contact[_index].set_nickname(value[2]);
	this->_contact[_index].set_phone_number(value[3]);
	this->_contact[_index].set_darkest_secret(value[4]);

	this->_index++;
}

void	PhoneBook::_debugg(int index) const
{	

	if (_contact[index].get_flag() == 1)
	{
		_contact[index].debugg();
		std::cout << std::endl;
	}
}

void	PhoneBook::_ext_debugg(void) const
{
	std::string	buffer;
	int			index;

	_ext_formatter("index");_ext_formatter("first name");
	_ext_formatter("last name");_ext_formatter("nickname");std::cout << std::endl;
	for (int i = 0; (_contact[i].get_flag() == 1); i++)
	{
		std::cout << std::setw(10) << i << "|";
		_ext_formatter(_contact[i].get_firstname());_ext_formatter(_contact[i].get_lastname());_ext_formatter(_contact[i].get_nickname());
		std::cout << std::endl;
	}
	std::cout << std::endl << "Enter an index : ";
	std::getline(std::cin, buffer);
	std::cout << std::endl;
	if (!_valid_buffer(buffer))
	{	
		_print_err("Invalid index");
		_ext_debugg();
	}
	index = std::stoi(buffer);
	if (_valid_index(index))
	{
		if (_contact[index].get_flag() == 1)
			this->_debugg(index);
	}
	else
	{
		_print_err("Invalid index");
		_ext_debugg();
	}
}

void	PhoneBook::op_search(void)
{
	this->_ext_debugg();
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
			std::cout << "Enter " << std::left << std::setw(15) << key[i] << ": ";
			std::getline(std::cin, value[i]);
		}
		this->_add_contact(value);
	}
	else
		_print_err("PhoneBook is full");
}