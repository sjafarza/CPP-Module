/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:29:49 by saray             #+#    #+#             */
/*   Updated: 2022/02/14 10:29:51 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_H
#define CLASSPHONEBOOK_H

#include "ClassContact.hpp"
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

class   Phonebook
{
	private:
		int		_nbContact;
		Contact	_contact[8];
	
	public:
		Phonebook(void);
		~Phonebook(void);

		void	addContact(void);
		void	listContact(void) const;
		void	displayContact(std::string index) const;
		bool	is_number(std::string str) const;

};

#endif 
