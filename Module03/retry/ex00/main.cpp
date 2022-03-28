#include <iostream>
# include "ClapTrap.hpp"


int main(void)
{
	
	ClapTrap	qq("Saray");
	ClapTrap	d(qq);

	qq.attack("cpp03 module");
	qq.takeDamage(3);
	std::cout<<qq.getEnergypoints()<<std::endl;
	qq.beRepaired(5);
	std::cout<<qq.getEnergypoints()<<std::endl;
	qq.takeDamage(12);
	std::cout<<qq.getEnergypoints()<<std::endl;
	qq.takeDamage(1);
	std::cout<<qq.getEnergypoints()<<std::endl;
	
	return (0);
}
