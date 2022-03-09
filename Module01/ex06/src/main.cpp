# include <iostream>
# include <fstream>
# include <string>
# include "../inc/Karen.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "Error: number of args is not correct !\n";
		return (1);
	}
	Karen k;
	k.complain(av[1]);
	return (0);
}