#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>

class Contact {
	private:
		std::string const _first_name;
		std::string	const _last_name;
		std::string	const _nickname;
		std::string	const _phone_number;
		std::string	const _darkest_secret;
	public:
		Contact(void);
		Contact(std::string first_name
				, std::string last_name
				, std::string nickname
				, std::string phone_number
				, std::string darkest_secret);
		~Contact(void);

		void	debugg(void) const;
};

#endif
