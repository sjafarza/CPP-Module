#include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void)
{
	std::cout<<"\n**********building objects*********\n"<<std::endl;

	ScavTrap clap("Human");
	ScavTrap scarv("Saray");
	FragTrap frag("frag_Name");

	std::cout<<"\n**********methods*********\n"<<std::endl;

	scarv.attack("cpp03 module");
	clap.ClapTrap::attack("Cpp04");
	frag.attack("others");
	frag.ClapTrap::attack("non fragoo");
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
