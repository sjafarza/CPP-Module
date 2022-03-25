#include "DiamondTrap.hpp"

/*DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	return ;
}*/

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clapName"),ScavTrap(name), FragTrap(name)
{

	ClapTrap::_name = this->_name + "_clap_name";
	this->_name = name;
	this->_HitPoints = this->FragTrap::_HitPoints;
	this->_EnergyPoints = this->ScavTrap::_EnergyPoints;
	this->_HitPoints = this->FragTrap::_HitPoints;
	this->_AttackDamage = this->FragTrap::_AttackDamage;
	/*this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage= 20;*/
	std::cout << "DiamondTrap constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap constructor Copy called" << std::endl;
	*this = other;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rval)
{
	if (*this != rval)
	{
		this->_name = rval._name;
		this->_HitPoints = rval._HitPoints;
		this->_EnergyPoints = rval._EnergyPoints;
		this->_AttackDamage = rval._AttackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is : "<< this->_name<<" and my claptrap name is : "<< this->ClapTrap::_name + "_clapName"<< std::endl;
}
