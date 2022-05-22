#include "Convert.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Convert	Convert;
		std::string s;

    	s = av[1];
		Convert.fetchValue(s);
		std::cout << Convert;
	}
	else
	{
		std::cout << "Usage: ./convert [NUMBER]" << std::endl;
		return 1;
	}
	return (0);
}