#include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void)
{
	std::cout<<"\n**********building objects*********\n"<<std::endl;

	ClapTrap clap("Human");
	ClapTrap clapCopy(clap);
	std::cout << "***" << std::endl;
	ScavTrap scarv("Saray");
	ScavTrap scarvCopy(scarv);
	std::cout << "***" << std::endl;
	FragTrap frag("fragoo");
	FragTrap fragCopy(frag);

	std::cout<<"\n**********methods*********\n"<<std::endl;

	scarv.attack("cpp03 module");
	clap.attack("badones");
	frag.attack("others");
	frag.attack("nonfragoo");
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
