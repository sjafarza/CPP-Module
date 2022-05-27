# include <stdint.h>
#include <iostream>
# include "iter.hpp"


int main(int ac, char **av)
{
	int n[3] = {1, 2, 3};

	std::string t[3] = { "hi", "saray", "it's cpp07."};

	iter(n, 3, print);

	std::cout << std::endl << "Test 2" << std::endl;
	iter(t, 3, print);

	std::cout << std::endl << "Test 3" << std::endl;
	int tab[] = {0,1,2,3,4};
	A	tab2[5];

	iter(tab,5, print);
	iter(tab2, 5, print);

	return (0);
}