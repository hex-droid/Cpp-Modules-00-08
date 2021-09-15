#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : _index(0){
	std::cout << "PhoneBook Constructor Called" << std::endl;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook Destructor Called" << std::endl;
}

void	PhoneBook::add_contact(std::string *value){
	this->_contact[_index].set_first_name(value[0]);
	this->_contact[_index].set_last_name(value[1]);
	this->_contact[_index].set_nickname(value[2]);
	this->_contact[_index].set_phone_number(value[3]);
	this->_contact[_index].set_darkest_secret(value[4]);

	this->_index++;
}

void	PhoneBook::debugg(void)	const {	

	this->_contact[0].debugg();
}

int		PhoneBook::get_index(void){
	return (this->_index);
}

/*
first name, last name, nickname,
phone number,darkest secret.
*/