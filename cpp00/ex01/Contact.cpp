/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <jvander-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:41:17 by jvander-          #+#    #+#             */
/*   Updated: 2022/03/09 15:44:12 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
}
//======DESTRUCTOR=====
Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
}

//=====GETTERS=====
std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkSecret(std::string darkSecret)
{
	this->_darkSecret = darkSecret;
}

void	Contact::display(void) const
{
	std::cout << "Last Name = " + this->_lastName << std::endl;
	std::cout << "First Name = " + this->_firstName << std::endl;
	std::cout << "Nick Name = " + this->_nickName << std::endl;
	std::cout << "Phone Number = " + this->_phoneNumber << std::endl;
	std::cout << "Dark Secret = " + this->_darkSecret << std::endl;
}