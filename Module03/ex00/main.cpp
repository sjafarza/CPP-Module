#include <iostream>
# include "ClapTrap.hpp"


int main(void)
{
	ClapTrap	qq("Saray");
	ClapTrap	d(qq);
	ClapTrap	t("cpp03 module");

	std::cout << "********* Attack 1 *************" <<std::endl;
	qq.attack("cpp03 module");
	t.takeDamage(3);
	std::cout<< "Poin energi " << qq.getName() << " is "<< qq.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << qq.getName() << " is "<< qq.getHitpoints()<<std::endl;
	std::cout << "Poin hit " << t.getName() << " is " <<t.getHitpoints() << std::endl;

	std::cout << "********* Attack 2 *************" <<std::endl;

	t.attack("saray");
	qq.takeDamage(1);
	d.takeDamage(4);
	qq.beRepaired(5);

	std::cout<< "Poin energy " << qq.getName() << " is "<< qq.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << qq.getName() << " is "<< qq.getHitpoints()<<std::endl;
	std::cout << "Poin hit " << t.getName() << " is " << t.getHitpoints() << std::endl;
	std::cout << "Poin hit for Copy " << d.getName() << " is " << d.getHitpoints() << std::endl;

	std::cout << "********* Attack 3 *************" <<std::endl;

	qq.attack("cpp03 module");
	t.takeDamage(7);

	std::cout<< "Poin energi " << qq.getName() << " is "<< qq.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << qq.getName() << " is "<< qq.getHitpoints()<<std::endl;

	std::cout<< "Poin energi of Coppy " << t.getName() << " is "<< t.getEnergypoints()<<std::endl;
	std::cout << "Poin hit of Coppy " << t.getName() << " is "<< t.getHitpoints()<<std::endl;
	
	std::cout << "********* Finish *************" <<std::endl;	
	return (0);
}
