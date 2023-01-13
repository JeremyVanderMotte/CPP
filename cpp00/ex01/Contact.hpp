#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class Contact
{
private:
	int	id;
	std::string	_lastName;
	std::string	_firstName;
	std::string	_nickName;
	std::string	_phoneNumber;
	std::string	_darkSecret;

public:
	Contact(void);
	~Contact(void);
	std::string getLastName(void) const;
	std::string getFirstName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkSecret(void) const;
	void		setLastName(std::string lastName);
	void		setFirstName(std::string firstName);
	void		setNickName(std::string nickName);
	void		setPhoneNumber(std::string phoneNumber);
	void		setDarkSecret(std::string darkSecret);
	void		display(void) const;
};


#endif