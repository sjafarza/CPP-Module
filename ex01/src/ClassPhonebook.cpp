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
#include <iostream>
#include <iomanip>

Phonebook::Phonebook(void)
{
	this->_nbContact = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

bool	Phonebook::isFull(void) const
{
	if (this->_nbContact == 8)
		return (true);
	return (false);
}

void	Phonebook::addContact(void)
{
	std::string	first, last, nick, phone, secret;

	if (this->isFull())
	{
		std::cout << "Phonebook is FULL." << std::endl;
		this->_nbContact = 0;
		return ;
	}
	std::cout << std::endl;
	std::cout << "First name: ";
	if (!std::getline(std::cin, first))
		return ;
	std::cout << "Last name: ";
	if (!std::getline(std::cin, last))
		return ;
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, nick))
		return ;
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, phone))
		return ;
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, secret))
		return ;
	this->_contact[this->_nbContact].setContact(first, last, nick, phone, secret, this->_nbContact);
	this->_nbContact++;
	return ;
}

void	Phonebook::listContact(void) const
{
	std::cout
	<< std::endl
	<< std::setw(10) << (std::string)"Firstname" << "|"
	<< std::setw(10) << (std::string)"Last name" << "|"
	<< std::setw(10) << (std::string)"Nickname" << "|"
	<< std::setw(10) << (std::string)"Index"
	<< std::endl
	<< "--------------------------------------------"
	<< std::endl;
	for (int i = 0; i < this->_nbContact; i++)
	{
		this->_contact[i].truncDisplay();
	}
}

void	Phonebook::displayContact(std::string index) const
{
	int	idx;

	idx = atoi(index.c_str());
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
