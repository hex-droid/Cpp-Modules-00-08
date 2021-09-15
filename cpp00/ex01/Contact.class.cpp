#include "Contact.class.hpp"

Contact::Contact(void) : _flag(0){
	std::cout << "Contact Constructor Called" << std::endl;
}

Contact::~Contact(){
	std::cout << "Contact Destructor Called" << std::endl;
}

void	Contact::debugg(void) const {
	std::cout << "first name 	 : " << this->_first_name << std::endl;
	std::cout << "last name 	 : " << this->_last_name << std::endl;
	std::cout << "nickname 		 : " << this->_nickname << std::endl;
	std::cout << "phone number   : " << this->_phone_number << std::endl;
	std::cout << "darkest secret : " << this->_darkest_secret << std::endl;

}

