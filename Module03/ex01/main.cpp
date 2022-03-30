#include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"


int main(void)
{
	ClapTrap	qq("Student 42");
	ClapTrap	d(qq);
	ScavTrap	s("Saray");
	ClapTrap	t("cpp03 module");
	

	std::cout << "********* Attack 1 *************" <<std::endl;
	qq.attack("cpp03 module");
	t.takeDamage(3);
	std::cout<< "Poin energy " << qq.getName() << " is "<< qq.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << qq.getName() << " is "<< qq.getHitpoints()<<std::endl;
	std::cout << "Poin hit " << t.getName() << " is " <<t.getHitpoints() << std::endl;

	s.attack("cpp03 module");
	t.takeDamage(3);
	std::cout<< "Poin energi " << s.getName() << " is "<< s.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << s.getName() << " is "<< s.getHitpoints()<<std::endl;
	std::cout << "Poin hit " << t.getName() << " is " <<t.getHitpoints() << std::endl;

	std::cout << "********* Attack 2 *************" <<std::endl;

	t.attack("Student 42");
	qq.takeDamage(4);

	std::cout<< "Poin energy " << qq.getName() << " is "<< qq.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << qq.getName() << " is "<< qq.getHitpoints()<<std::endl;
	std::cout << "Poin hit " << t.getName() << " is " << t.getHitpoints() << std::endl;
	std::cout << "Poin hit  " << s.getName() << " is " << s.getHitpoints() << std::endl;

	std::cout << "********* Attack 3 *************" <<std::endl;

	qq.attack("cpp03 module");
	t.takeDamage(7);
	s.attack("cpp03 module");
	t.takeDamage(10);

	std::cout<< "Poin energi " << qq.getName() << " is "<< qq.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << qq.getName() << " is "<< qq.getHitpoints()<<std::endl;

	std::cout<< "Poin energi " << s.getName() << " is "<< s.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << s.getName() << " is "<< s.getHitpoints()<<std::endl;


	std::cout<< "Poin energi  " << t.getName() << " is "<< t.getEnergypoints()<<std::endl;
	std::cout << "Poin hit " << t.getName() << " is "<< t.getHitpoints()<<std::endl;
	
	std::cout << "********* Finish *************" <<std::endl;	
	return (0);
}
