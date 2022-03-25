#include <iostream>

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main(void)
{
	std::cout<<"**********building objects*********"<<std::endl;

	ScavTrap clap("Human");
	ScavTrap scarv("Saray");
	FragTrap frag("fragoo");

	std::cout<<"**********methods*********"<<std::endl;


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

	std::cout<<"*******************"<<std::endl;

	DiamondTrap diamonds("shineandbright");
	diamonds.whoAmI();
	diamonds.attack("youandi");
	diamonds.getEnergypoints();
	diamonds.guardGate();
	diamonds.highFivesGuys();
	diamonds.beRepaired(6);
	std::cout<<"*******************"<<std::endl;

	std::cout<<"\n**********destructions*********"<<std::endl;
	return (0);
}
