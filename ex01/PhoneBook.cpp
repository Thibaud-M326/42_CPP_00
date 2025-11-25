#include "PhoneBook.hpp"
#include <string>
#include <iostream>

void	PhoneBook::welcomeMessage() {
	std::cout << "Welcome in my awesome phone book ! :0)" << std::endl;
	std::cout << "Usage :" << std::endl;
	std::cout << "    ADD: add contact to your phone book" << std::endl;
	std::cout << "    SEARCH: display information from contact ID" << std::endl;
}

void	PhoneBook::addContact(int contactCurrent) {
	this->contact[contactCurrent].setId(contactCurrent);
	this->contact[contactCurrent].readFirstName();
	this->contact[contactCurrent].readLastName();
	this->contact[contactCurrent].readNickName();
	this->contact[contactCurrent].readPhoneNumber();
	this->contact[contactCurrent].readDarkSecret();
}


void	PhoneBook::printContact(Contact contact) {
	std::cout << contact.getId();
	std::cout << " ";
	std::cout << contact.getFirstName() << std::endl;
}

void	PhoneBook::printPhoneBook() {
	int i;

	i = 0;
	while (i < 8 && !this->contact[i].getFirstName().empty()) {
		printContact(this->contact[i]);
		i++;
	}
}

void	PhoneBook::searchContact() {
	printPhoneBook();
}