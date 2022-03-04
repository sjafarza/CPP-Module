/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:29:09 by saray             #+#    #+#             */
/*   Updated: 2022/02/14 10:29:11 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSCONTACT_H
#define CLASSCONTACT_H

# include <iomanip>
# include <iostream>
# include "main.hpp"

class   Contact
{
    private:
        int         _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        Contact(void);
        ~Contact(void);

        void    setContact(std::string first, std::string last, std::string nick, std::string phone, std::string secret, int index);
        void    truncDisplay(void) const;
        void    fullDisplay(void) const;
};

#endif  //!__CLASSCONTACT__H__
