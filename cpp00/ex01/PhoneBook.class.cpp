#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void){
	std::cout << "PhoneBook Constructor Called" << std::endl;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook Destructor Called" << std::endl;
}

void	PhoneBook::add_contact(int index, Contact contact){
	this->_contact[index] =	contact;
}

void	PhoneBook::debugg(void)	const {

}

//string.length