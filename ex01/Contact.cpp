#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void Contact::setId(int id) {
	this->id = id + 1;
}

int		Contact::getId() const {
	return (this->id);
}

std::string	Contact::getFirstName() {
	return (this->firstName);
}

std::string	Contact::getLastName() {
	return (this->lastName);
}

std::string	Contact::getNickName() {
	return (this->nickName);
}

std::string	Contact::getPhoneNumber() {
	return (this->phoneNumber);
}

void 		Contact::readFirstName() {
	std::string firstName;

	while (firstName.empty() && !std::cin.eof())
	{
		std::cout << "contact first name : ";
		getline(std::cin, firstName);
	}
	this->firstName = firstName;
}

void Contact::readLastName() {
	std::string lastName;

	while (lastName.empty() && !std::cin.eof())
	{
		std::cout << "contact last name : ";
		getline(std::cin, lastName);
	}
	this->lastName = lastName;
}

void Contact::readNickName() {
	std::string nickName;

	while (nickName.empty() && !std::cin.eof())
	{
		std::cout << "contact nickname : ";
		getline(std::cin, nickName);
	}
	this->nickName = nickName;
}

void Contact::readPhoneNumber() {
	std::string phoneNumber;

	while (phoneNumber.empty() && !std::cin.eof())
	{
		std::cout << "contact phone number : ";
		getline(std::cin, phoneNumber);
	}
	this->phoneNumber = phoneNumber;
}

void Contact::readDarkSecret() {
	std::string darkSecret;

	while (darkSecret.empty() && !std::cin.eof())
	{
		std::cout << "contact dark secret : ";
		getline(std::cin, darkSecret);
	}
	this->darkSecret = darkSecret;
}
