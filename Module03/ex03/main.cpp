#include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int main(void)
{
	std::cout<<"\n**********building objects*********\n"<<std::endl;

	ClapTrap clap("Human");
	std::cout << "1***" << std::endl;
	ScavTrap scarv("Saray");
	std::cout << "2***" << std::endl;
	FragTrap frag("fragoo");
	std::cout << "3***" << std::endl;
	DiamondTrap	dim("dimoo");
	std::cout << "4***" << std::endl;
	ClapTrap clap2(clap);
	std::cout << "5***" << std::endl;
	ScavTrap scarv2(scarv);
	std::cout << "6***" << std::endl;
	FragTrap frag2(frag);
	std::cout << "7***" << std::endl;
	DiamondTrap d2(dim);

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
	std::cout << "***" << std::endl;
	dim.attack("cpluscplus");
	std::cout<< "point energi :" << dim.getEnergypoints() << std::endl;
	std::cout <<"hit point : " << dim.getHitpoints() << std::endl;
	dim.whoAmI();
	dim.takeDamage(5);
	std::cout <<"hit point : " << dim.getHitpoints() << std::endl;
	

	std::cout<<"\n**********destructions*********"<<std::endl;
	return (0);
	
}
