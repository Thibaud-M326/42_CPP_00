#include "PhoneBook.hpp"
#include <string>
#include <iostream>

//lire l'input user en boucle
//tant que l'user input != EXIT
//si ADD : 
	//on cree un nouveau contact
	//on met a l'interieur en boucle tant
	//qu'on a pas les input de toutes les attr de contact
	//on ajoute a l'attr contact de PhoneBook:: le Contact:: qu'on vient de creer
	//
int main() {
	PhoneBook myPhoneBook;
	std::string user_input;
	int	contactId;
	int	contactMax;

	while (user_input != "EXIT") {
		std::cin >> user_input;
		if (user_input == "ADD") {
			contactId = myPhoneBook.contactId;
			contactMax = myPhoneBook.contactMax;
			myPhoneBook.contact[contactId % contactMax] = myPhoneBook.addContact();
			myPhoneBook.contactId++;
		}
	}


	// myPhoneBook.add_contact();
	return (0);
}