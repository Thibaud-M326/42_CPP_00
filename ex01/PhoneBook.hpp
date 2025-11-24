#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook {
	public:
	int		contactMax;
	int		contactId;
	Contact contact[8];
	Contact addContact();

	private:
	
};

#endif