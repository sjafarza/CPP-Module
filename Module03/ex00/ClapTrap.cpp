#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :_name("Unnamed"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
   std::cout<<"Constructor default  called  with Energy 10 !"<<std::endl; 
}

ClapTrap::ClapTrap(std::string  name)
{
    this->_name = name;
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
    std::cout<<" Constructor with Parametre called for " << this->_name << " with Energy 10 !"<<std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout<<"Deconstructor ClapTrap for " << this->_name << " called !"<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
    *this = other;
    std::cout<<"Copy Constructor called !"<<std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rval)
{
    if (this != &rval)
    {
        this->_name = rval._name;
        this->_AttackDamage = rval._AttackDamage;
        this->_EnergyPoints = rval._EnergyPoints;
        this->_HitPoints = rval._HitPoints;
    }
    return(*this);
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

unsigned int ClapTrap::getHitpoints(void) const
{
    return (this->_HitPoints);
}

unsigned int ClapTrap::getEnergypoints(void) const
{
    return (this->_EnergyPoints);
}

unsigned int ClapTrap::getAttackdamage(void) const
{
    return (this->_AttackDamage);
}

void ClapTrap::attack(std::string const & target)
{
    if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
    {
        std::cout<<"ClapTrap "<< getName() <<" attack " <<target<<", causing "<< getAttackdamage()<< " point of damage!"<<std::endl;
        this->_EnergyPoints -= 1;
    }
    else if (this->_HitPoints < 1)
        std::cout<<"ClapTrap "<< getName() <<" can't attack!"<<std::endl;
    if (this->_EnergyPoints < 1)
        std::cout<<"ClapTrap "<< getName() <<" Not have Energy !"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPoints > 0)
	{
		std::cout << this->_name << " takes " << amount << " damage !\n";
		if (amount > (unsigned int)this->_HitPoints)
			amount = this->_HitPoints;
		this->_HitPoints -= amount;
		if (this->_HitPoints == 0)
			std::cout << "ClapTrap " << this->_name << " is K.O !" << std::endl;
	}
	else
		std::cout << this->_name << " is already Finished" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " can't repair, it is K.O." << std::endl;
		return ;
	}
	if (this->_EnergyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " tries to repair, but instead, says : \"NoT EnougH ManA !\"" << std::endl;
		return ;
	}
	if (amount > 100 - (unsigned int)this->_HitPoints)
		amount = 100 - this->_HitPoints;
	if (this->_HitPoints < 100)
	{
        std::cout<<"ClapTrap "<<getName()<<" is repaired and gained " <<amount<<" points of energy!"<<std::endl;
        this->_HitPoints += amount;
		this->_EnergyPoints -= 1;
		if (this->_HitPoints == 100)
			std::cout << "ClapTrap " << this->_name << " has fully recovered.";
	}
	else
		std::cout << this->_name << " has nothing to be repaired.";
}

std::ostream&   operator<<(std::ostream& o, ClapTrap const& i)
{
	o << *((ClapTrap *)(&i));
    return (o);
}