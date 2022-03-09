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
	std::cout << DEBUG << std::endl;
}

void Karen::info(void)
{
	std::cout << INFO << std::endl;
}

void Karen::warning(void)
{
	std::cout << WARNING << std::endl;
}

void Karen::error(void)
{
	std::cout << ERROR << std::endl;
}

void Karen::complain(std::string level)
{
	void (Karen::* funcPTR [])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
		if(level == array[i])
			(this->*funcPTR[i])();
}