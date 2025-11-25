#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main() {
	PhoneBook myPhoneBook;
	std::string user_input;
	int contactCurrent;

	myPhoneBook.welcomeMessage();
	contactCurrent = 0;
	while (user_input != "EXIT" && !std::cin.eof()) {
		std::cout << ": ";
		getline(std::cin, user_input);
		if (user_input == "ADD") {
			myPhoneBook.addContact(contactCurrent);
			contactCurrent++;
			if (contactCurrent == 8)
				contactCurrent = 0;
		}
		if (user_input == "SEARCH")
			myPhoneBook.searchContact();
	}
	return (0);
}
