#include "Contact.class.hpp"

Contact::Contact(void) : _flag(0){
}

Contact::~Contact(){
}

void	Contact::debugg(void) const {
	std::cout << std::left << std::setw(15) << "first name" << std::setw(3) << ":" << this->_first_name << std::endl;
	std::cout << std::setw(24) << "last name" << std::setw(3) << ":" << this->_last_name << std::endl;
	std::cout << std::setw(24) << "nickname" << std::setw(3) << ":" << this->_nickname << std::endl;
	std::cout << std::setw(24) << "phone number" << std::setw(3) << ":" << this->_phone_number << std::endl;
	std::cout << std::setw(24) << "darkest secret" << std::setw(3) << ":" << this->_darkest_secret << std::endl;

}

