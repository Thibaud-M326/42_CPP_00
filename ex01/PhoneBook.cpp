#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

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

std::string		PhoneBook::trimAndAddDot(std::string str) {
	if (str.size() > 9) {
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	PhoneBook::printHeader() {
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "firstname";
	std::cout << "|";
	std::cout << std::setw(10) << "lastname";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
}

void	PhoneBook::printContact(Contact contact) {
	std::cout << "|";
	std::cout << std::setw(10) << contact.getId();
	std::cout << "|";
	std::cout << std::setw(10) << trimAndAddDot(contact.getFirstName());
	std::cout << "|";
	std::cout << std::setw(10) << trimAndAddDot(contact.getLastName());
	std::cout << "|";
	std::cout << std::setw(10) << trimAndAddDot(contact.getNickName());
	std::cout << "|" << std::endl;
}

void	PhoneBook::printPhoneBook() {
	int i;

	i = 0;
	while (i < 8 && !this->contact[i].getFirstName().empty()) {
		printContact(this->contact[i]);
		i++;
	}
	std::cout << " ___________________________________________ " << std::endl;
}

bool	PhoneBook::emptyPhoneBook() {
	if (this->contact[0].getFirstName().empty())
		return (true);
	else
		return (false);
}

void	PhoneBook::printEmptyPhoneBook() {
	std::cout << "Your Phone Book is empty, use ADD to add contact ;)" << std::endl;
}

std::string	PhoneBook::userInputLoop() {
	std::string userInput;

	while (userInput.empty() && !std::cin.eof()) {
		std::cout << "Please enter the ID to display" << std::endl;
		std::cout << "-> ";
		getline(std::cin, userInput);
	}
	return (userInput);
}

int		PhoneBook::askUserForIdToDisplay() {
	std::string idToDisplay;
	int	userInputValid;
	int	index;

	userInputValid = 0;
	index = 0;
	while (userInputValid != 1) {
		idToDisplay = userInputLoop();
		if (idToDisplay.size() != 1) {
			std::cout << "Error: Must be a digit [0 - 9]" << std::endl;
			continue;
		}
		if (!(idToDisplay[0] >= '1' && idToDisplay[0] <= '8')) {
			std::cout << "Error: Must be a digit [1 - 8]" << std::endl;
			continue;
		}
		index = ((int)idToDisplay[0] - '0') - 1;
		if (this->contact[index].getFirstName().empty()) {
			std::cout << "Error: No user at ID : " << idToDisplay << std::endl;
			continue;
		}
		userInputValid = 1;
	}
	return (index);
}

void	PhoneBook::displayId(int id) {
	std::cout << "firstname :";
	std::cout << this->contact[id].getFirstName() << std::endl;
	std::cout << "lastname  :";
	std::cout << this->contact[id].getLastName() << std::endl;
	std::cout << "nickname  :";
	std::cout << this->contact[id].getNickName() << std::endl;
	std::cout << "phone     :";
	std::cout << this->contact[id].getPhoneNumber() << std::endl;
	std::cout << "secret    :";
	std::cout << this->contact[id].getDarkSecret() << std::endl;
}

void	PhoneBook::searchContact() {
	int idToDisplay;

	idToDisplay = 0;
	if (!emptyPhoneBook()) {
		printHeader();
		printPhoneBook();
		idToDisplay = askUserForIdToDisplay();
		displayId(idToDisplay);
	}
	else
		printEmptyPhoneBook();
}
