#include "../inc/Karen.hpp"

Karen::Karen()
{
}

Karen::Karen(Karen const & src )
{
	(void)src;
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl 
				<< DEBUG << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl 
			  << INFO << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl 
	<< WARNING << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl 
			  << ERROR << std::endl;
}

bool Karen::compare(std::string s1, std::string s2)
{
	int i = 0;
	if (s1.length() != s2.length())
		return false;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (toupper(s1[i]) != toupper(s2[i]))
			return (false);
		i++;
	}	
	return (true);	
}

void Karen::complain(std::string level)
{
	int i;
	std::string		levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (i = 0 ; i < 4; i++)
		if (compare(level,levels[i]))
				break;
	switch (i)
	{
		case (0):
				this->debug();
		case (1):
				this->info();
		case (2):
				this->warning();
		case (3):
		{
				this->error();
				break ;
		}
		default:
				std::cout << "[ Probably complaining about insignificant problem ]"	<< std::endl;					

	}			

}