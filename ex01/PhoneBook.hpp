#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>

#define MAX_CONTACT 2

class PhoneBook {
	public:
		void	welcomeMessage();
		void	addContact(int contactCurrent);
		void	searchContact();;

	private:
		Contact 	contact[MAX_CONTACT];
		void		printPhoneBook();
		void		printContact(Contact contact);
		bool		emptyPhoneBook();
		void		printEmptyPhoneBook();
		std::string trimAndAddDot(std::string str);
		void		printHeader();
		int			askUserForIdToDisplay();
		std::string	userInputLoop();
		void		displayId(int id);
};

#endif
