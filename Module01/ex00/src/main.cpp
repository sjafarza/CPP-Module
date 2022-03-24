/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjafarza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 10:41:25 by sjafarza          #+#    #+#             */
/*   Updated: 2022/03/11 11:06:11 by sjafarza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brainz.hpp"

void    creatRandomZombie(void)
{
    std::string name;

    name = "Saray";
    randomChump(name);
   
} 

int main(int ac, char **av)
{
    (void)ac;
    (void)av;


    if (ac > 2)
    {
        std::cout<< "This program can't creat more than one Zombie !\n";
    }
    else if (ac == 1)
    {
        creatRandomZombie(); 
    }
    else
    {
    	Zombie *zombie;
        zombie = newZombie(av[1]);
        delete zombie;
    }
    return (0);
}
