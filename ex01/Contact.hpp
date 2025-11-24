#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact {
	public :
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkSecret;
		void readFirstName();
		// std::string readLastName();
		// std::string readNicktName();
		// std::string readPhoneNumber();
		// std::string readDarkSecret();
};

#endif