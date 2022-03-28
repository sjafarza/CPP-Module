#include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Human");
	std::cout << "**********1**************" << std::endl;
	ScavTrap scarv("saray");
	ScavTrap sc(scarv);
	std::cout << "***********2*************" << std::endl;

	scarv.attack("cpp03 module");
	clap.ClapTrap::attack("Cplusplus");

	std::cout << "*************3***********" << std::endl;

	scarv.takeDamage(3);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	clap.ClapTrap::takeDamage(5);
	std::cout<<clap.ClapTrap::getEnergypoints()<<std::endl;

	std::cout << "***************4*********" << std::endl;
	
	scarv.beRepaired(5);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	clap.ClapTrap::beRepaired(2);
	std::cout<<clap.ClapTrap::getEnergypoints()<<std::endl;

	std::cout << "***************5*********" << std::endl;

	scarv.takeDamage(12);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.takeDamage(1);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	std::cout << std::endl;
	clap.ClapTrap::takeDamage(2);
	std::cout<<clap.ClapTrap::getEnergypoints()<<std::endl;
	clap.ClapTrap::takeDamage(1);
	std::cout<<clap.ClapTrap::getEnergypoints()<<std::endl;

	std::cout << "***************6*********" << std::endl;

	scarv.guardGate();

	std::cout << "***************7*********" << std::endl;

	return (0);
}
