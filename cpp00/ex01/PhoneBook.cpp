/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <jvander-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:36:48 by jvander-          #+#    #+#             */
/*   Updated: 2022/03/10 11:44:17 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructor called" << std::endl;
	this->_nbr_contact = 0;
	this->_oldest = -1;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor called" << std::endl;
}

void	PhoneBook::addContact(void)
{
	std::string	input;
	std::string	lastName;
	std::string	firstName;
	std::string	nickName;
	std::string	phone;
	std::string	secret;
	
	if (this->_nbr_contact < 8)
		this->_nbr_contact++;
	this->_oldest++;
	if (this->_oldest == 8)
		this->_oldest = 0;
	
	if (!_askFirstName())
		return ;
	if (!_askLastName())
		return ;
	if (!_askNickName())
		return ;
	if (!_askPhoneNumber())
		return ;
	if (!_askDarkSecret())
		return ;
}

void	PhoneBook::searchContact(void)
{
	std::string	index;
	int			number;

	if (this->_nbr_contact == 0)
	{
		std::cout << "No contact in the phonebook" << std::endl;
		return ;
	}
	PhoneBook::_printAll();
	std::cout << "Index du contact : ";
	std::getline(std::cin, index);
	if (std::cin.eof())
		return ;
	number = std::atoi(index.c_str());
	while (number < 1 || number > 8 || number > this->_nbr_contact)
	{	
		std::cout << "Index incorrect" << std::endl;
		std::cout << "Index du contact : ";
		std::getline(std::cin, index);
		if (std::cin.eof())
			return ;
		number = std::atoi(index.c_str());
	}
	this->_phonebook[number - 1].display();
}

/*========PRIVATE=========*/

int	PhoneBook::_askDarkSecret(void)
{
	std::string	secret;

	std::cout << "Enter Dark Secret: ";
	std::getline(std::cin, secret);
	if (std::cin.eof())
		return (0);
	while (secret.empty())
	{
		std::cout << "Enter Dark Secret: ";
		std::getline(std::cin, secret);
		if (std::cin.eof())
			return (0);
	}
	this->_phonebook[this->_oldest].setDarkSecret(secret);
	return (1);
}

int	PhoneBook::_askPhoneNumber(void)
{
	std::string	phone;
	
	std::cout << "Enter Phone Number : ";
	std::getline(std::cin, phone);
	if (std::cin.eof())
		return (0);
	while (phone.find_first_not_of("0123456789") != std::string::npos
		|| phone.length() != 10 || phone.empty())
	{
		std::cout << "Only numbers for phone number or size 10" << std::endl;
		std::cout << "Enter Phone Number : ";
		std::getline(std::cin, phone);
		if (std::cin.eof())
			return (0);
	}
	this->_phonebook[this->_oldest].setPhoneNumber(phone);
	return (1);
}

int	PhoneBook::_askNickName(void)
{
	std::string	nickName;

	std::cout << "Enter Nick Name : ";
	std::getline(std::cin, nickName);
	if (std::cin.eof())
		return (0);
	while(nickName.empty())
	{
		std::cout << "Enter Nick Name : ";
		std::getline(std::cin, nickName);
		if (std::cin.eof())
			return (0);
	}
	this->_phonebook[this->_oldest].setNickName(nickName);
	return (1);
}

int	PhoneBook::_askLastName(void)
{
	std::string	lastName;
	
	std::cout << "Enter Last Name : ";
	std::getline(std::cin, lastName);
	if (std::cin.eof())
		return (0);
	while (lastName.empty())
	{
		std::cout << "Enter Last Name : ";
		std::getline(std::cin, lastName);
		if (std::cin.eof())
			return (0);
	}
	this->_phonebook[this->_oldest].setLastName(lastName);
	return (1);
}

int	PhoneBook::_askFirstName(void)
{
	std::string	firstName;

	std::cout << "Enter First Name : ";
	std::getline(std::cin, firstName);
	if (std::cin.eof())
		return (0);
	while (firstName.empty())
	{
		std::cout << "Enter First Name : ";
		std::getline(std::cin, firstName);
		if (std::cin.eof())
			return (0);
	}
	this->_phonebook[this->_oldest].setFirstName(firstName);
	return (1);
}

void	PhoneBook::_printAll(void) const
{
	std::string firstName;
	std::string lastName;
	std::string nickName;

	std::cout << std::setw(10) << "Index" << "|" 
		<< std::setw(10) << "First name" << "|"
		<< std::setw(10) << "Last name" << "|"
		<< std::setw(10) << "Nick name" << std::endl;
	for (int i = 0; i < this->_nbr_contact; i++)
	{
		firstName = this->_phonebook[i].getFirstName();
		lastName = this->_phonebook[i].getLastName();
		nickName = this->_phonebook[i].getNickName();
		if (firstName.length() > 10)
		{
			firstName.resize(9);
			firstName.resize(10, '.');
		}
		if (lastName.length() > 10)
		{
			lastName.resize(9);
			lastName.resize(10, '.');
		}
		if (nickName.length() > 10)
		{
			nickName.resize(9);
			nickName.resize(10, '.');
		}
		std::cout << std::setw(10) << i + 1  << "|" 
		<< std::setw(10) << firstName << "|"
		<< std::setw(10) << lastName << "|"
		<< std::setw(10) << nickName << std::endl;
	}
}