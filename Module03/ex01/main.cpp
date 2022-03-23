#include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Human");
	ScavTrap scarv("saray");

	scarv.attack("cpp03 module");
	clap.ClapTrap::attack("badone");
	scarv.takeDamage(3);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.beRepaired(5);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.takeDamage(12);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.takeDamage(1);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.guardGate();

	return (0);
}
