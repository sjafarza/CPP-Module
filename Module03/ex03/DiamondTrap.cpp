#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name)
{

	ClapTrap::_name = this->_name + "_clap_name";
	this->_name = name;
	this->_HitPoints = FragTrap::Hitpoints;
	this->_EnergyPoints = ScavTrap::Energypoints;
	this->_AttackDamage= FragTrap::Attackdamage;
	std::cout << "DiamondTrap constructor called" << std::endl;
	return;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(){
	std::cout << "my name is : "<< Name<<" and my claptrap name is : "<<Name + "_clap_name"<< std::endl;
}
