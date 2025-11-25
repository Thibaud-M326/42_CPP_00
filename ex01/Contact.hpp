#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>

class Contact {
	private:
		int id;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;
	public:
		void		setId(int id);
		int			getId() const;
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkSecret();
		void		readFirstName();
		void		readLastName();
		void		readNickName();
		void		readPhoneNumber();
		void		readDarkSecret();
};

#endif