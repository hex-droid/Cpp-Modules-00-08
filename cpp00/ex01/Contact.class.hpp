#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>

class Contact {
	private:
		std::string  _first_name;
		std::string	 _last_name;
		std::string	 _nickname;
		std::string	 _phone_number;
		std::string	 _darkest_secret;
		int			_flag;
	public:
		Contact(void);
		~Contact(void);

		void	set_first_name(std::string value){
			this->_first_name = value;
		}
		void	set_last_name(std::string value){
			this->_last_name = value;
		}
		void	set_nickname(std::string value){
			this->_nickname = value;
		}
		void	set_phone_number(std::string value){
			this->_phone_number = value;
		}
		void	set_darkest_secret(std::string value){
			this->_darkest_secret = value;
			this->_flag = 1;
		}

		std::string	get_firstname(void) const{
			return (_first_name);
		}

		std::string get_lastname(void) const{
			return (_last_name);
		}

		std::string	get_nickname(void) const{
			return (_nickname);
		}

		int		get_flag(void) const{
			return (this->_flag);
		}

		void	debugg(void) const;
};

#endif

/*
index,first name,last name and nickname.
*/