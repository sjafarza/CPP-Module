# include <iostream>
# include <fstream>
# include <string>
# include "../inc/Karen.hpp"

int main(int ac, char **av)
{
	Karen k;

	k.complain("DEBUG");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("ERROR");
	//k.complain("lol");

	return (0);
}