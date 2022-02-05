/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saray <saray.jafarzade@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:22:47 by saray             #+#    #+#             */
/*   Updated: 2022/02/05 15:05:17 by saray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j;

	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		while (++i < ac )
		{
			j = -1;
			while (av[i][++j])
				std::cout<<(char)toupper(av[i][j]);
			std::cout<<" ";
		}	
		std::cout<<std::endl;
	}
	return (0);
}
