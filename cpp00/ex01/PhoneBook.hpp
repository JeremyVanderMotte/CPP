#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iomanip>
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _phonebook[8];
	int		_nbr_contact;
	int		_oldest;
	void		_printAll(void) const;
	int		_askFirstName(void);
	int		_askLastName(void);
	int		_askNickName(void);
	int		_askPhoneNumber(void);
	int		_askDarkSecret(void);

public:
	PhoneBook(void);
	~PhoneBook(void);
	
	void		addContact(void);
	void	searchContact(void);
};


#endif