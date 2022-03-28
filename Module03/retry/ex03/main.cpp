#include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main(void)
{
	std::cout<<"\n**********building objects*********\n"<<std::endl;

	ClapTrap clap("Human");
	ScavTrap scarv("Saray");
	FragTrap frag("fragoo");
	DiamondTrap	dim("dimoo");
	ClapTrap clap2(clap);
	ScavTrap scarv2(scarv);
	FragTrap frag2(frag);
	

	std::cout<<"\n**********methods*********\n"<<std::endl;



	scarv.attack("cpp03 module");
	clap.ClapTrap::attack("badones");
	frag.attack("others");
	frag.ClapTrap::attack("nonfragoo");
	frag.highFivesGuys();
	scarv.takeDamage(3);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.beRepaired(5);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.takeDamage(12);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.takeDamage(1);
	std::cout<<scarv.getEnergypoints()<<std::endl;
	scarv.guardGate();

	std::cout<<"\n**********destructions*********"<<std::endl;
	return (0);
}
