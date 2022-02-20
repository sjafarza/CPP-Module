/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:28:14 by saray             #+#    #+#             */
/*   Updated: 2022/02/14 10:28:17 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"


Phonebook::Phonebook(void)
{
	this->_nbContact = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::addContact(void)
{
	std::string	first, last, nick, phone, secret;

	if (this->_nbContact == 8)
	{
		std::cout << "Phonebook is FULL, new contact will be replaced the first Contact ." << std::endl;
		this->_nbContact = 0;
	}
	std::cout << std::endl;
	std::cout << "First name: ";
	if (!std::getline(std::cin, first))
		return ;
	while (first.empty())
	{
		std::cout << "\nError : First name is empty .\n";
		std::cout << "First name: ";
		if (!std::getline(std::cin, first))
			return ;
	}
	std::cout << "Last name: ";
	if (!std::getline(std::cin, last))
		return ;
	while (last.empty())
	{
		std::cout << "\nError : Last name is empty .\n";
		std::cout << "Last name: ";
		if (!std::getline(std::cin, last))
			return ;
	}	
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, nick))
		return ;
	while (nick.empty())
	{
		std::cout << "\nError : Nick name is empty .\n";
		std::cout << "Nick name: ";
		if (!std::getline(std::cin, nick))
			return ;
	}	
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, phone))
		return ;
	while (phone.empty())
	{
		std::cout << "\nError : Phone number is empty .\n";
		std::cout << "Phone number: ";
		if (!std::getline(std::cin, first))
			return ;
	}	
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, secret))
		return ;
	while (secret.empty())
	{
		std::cout << "\nError : Secret is empty .\n";
		std::cout << "Secret name: ";
		if (!std::getline(std::cin, secret))
			return ;
	}	
	this->_contact[this->_nbContact].setContact(first, last, nick, phone, secret, this->_nbContact);
	this->_nbContact++;
	std::cout << "\n\n\tADD is Done .\n";
	return ;
}

void	Phonebook::listContact(void) const
{
	int i = -1;

	std::cout
	<< std::endl
	<< std::setw(10) << (std::string)"Index"<<"|"
	<< std::setw(10) << (std::string)"Firstname" << "|"
	<< std::setw(10) << (std::string)"Last name" << "|"
	<< std::setw(10) << (std::string)"Nickname" << std::endl
	<< "--------------------------------------------"
	<< std::endl;
	while (++i < this->_nbContact)
        this->_contact[i].truncDisplay();
}

bool	Phonebook::is_number(std::string str) const
{
	std::string::const_iterator		t = str.begin();
	while (t != str.end() && std::isdigit(*t))
		t++;
	return (!str.empty() && t == str.end());	
}

void	Phonebook::displayContact(std::string index) const
{
	int	idx;

	idx = atoi(index.c_str());
	if (!(this->is_number(index)))
	{
		std::cout << "Bad index ! \n";
		return ;
	}
	
	printf("inx = %d\n", idx);
	std::cout << std::endl;
	if (this->_nbContact == 0)
	{
		std::cout << "No contact saved yet." << std::endl;
	}
	else if (idx < 0 || idx > (this->_nbContact - 1))
	{
		std::cout << "Index not valid." << std::endl;
	}
	else
	{
		this->_contact[idx].fullDisplay();
	}
	return ;
}
