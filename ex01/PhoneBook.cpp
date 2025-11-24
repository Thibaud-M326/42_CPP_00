#include "PhoneBook.hpp"
#include <string>
#include <iostream>

Contact PhoneBook::addContact() {
	Contact newContact;

	newContact.readFirstName();
	return (newContact);
}