/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:28:28 by saray             #+#    #+#             */
/*   Updated: 2022/02/14 10:28:31 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

std::string truncateEntry(std::string str, size_t width)
{
    if (str.length() > width)
        return (str.substr(0, width - 1) + ".");
    else
		return (str);
}

int main(void)
{
	Phonebook	phonebook;
	std::string	input;
	std::string	index;

	while (1)
	{
		std::cout << "\n Type ADD or SEARCH or EXIT pleas .";
		std::cout << std::endl << "> ";
		if (!(std::getline(std::cin, input)) ||
			input.compare("EXIT") == 0)
		{
			std::cout << "Good Bye !" << std::endl;
			break ;
		}
		else if (input.compare("ADD") == 0)
			phonebook.addContact();
		else if (input.compare("SEARCH") == 0)
		{
			phonebook.listContact();
			std::cout << std::endl << "Type an index to display: ";
			if (!std::getline(std::cin, index))
			{
				std::cout << "Error , Leaving...  !" << std::endl;
				break ;
			}
			phonebook.displayContact(index);
		}
		else
			std::cout << "Command not found." << std::endl;
	}
	return (0);
}
