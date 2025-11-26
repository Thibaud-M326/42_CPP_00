#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main() {
	PhoneBook myPhoneBook;
	std::string user_input;
	int contactCurrent;

	if (MAX_CONTACT < 1 || MAX_CONTACT > 9) {
		std::cout << "MAX_CONTACT must be beetween [1 - 9]" << std::endl;
		return (0);
	}
	myPhoneBook.welcomeMessage();
	contactCurrent = 0;
	while (user_input != "EXIT" && !std::cin.fail()) {
		std::cout << ": ";
		getline(std::cin, user_input);
		if (user_input == "ADD") {
			myPhoneBook.addContact(contactCurrent);
			contactCurrent++;
			if (contactCurrent == MAX_CONTACT)
				contactCurrent = 0;
		}
		if (user_input == "SEARCH")
			myPhoneBook.searchContact();
	}
	return (0);
}
