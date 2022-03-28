#include "ClapTrap.hpp"

ClapTrap::ClapTrap() _name("Unnamed"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
   std::cout<<"Constructor default  called  with Energy 10 !"<<std::endl; 
}

ClapTrap::ClapTrap(std::string  name)
{
    this->_name = name;
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDamage = 0;
    std::cout<<"Constructor called  with Energy 10 !"<<std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout<<"Deconstructor called !"<<std::endl;
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
        this->_EnergyPoints -= -1;
    }
    else if (this->_HitPoints < 1)
        std::cout<<"ClapTrap "<< getName() <<" can't attack!"<<std::endl;
    if (this->_EnergyPoints < 1)
        std::cout<<"ClapTrap "<< getName() <<" Not have Energy !"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitpoints() < amount) 
    {
		std::cout << "ClapTrap " << getName() << " cannot take this amount of damage he has not enough energy!" << std::endl;
		return ;
	}
    std::cout<<"ClapTrap "<<getName()<<" takes " << amount << " damage !"<<std::endl;
    this->_HitPoints -= amount;
    if (this->_HitPoints == 0)
        std::cout << this->_name << "HitPoints finish !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<<"ClapTrap "<<getName()<<" is repaired and gained " <<amount<<" points of energy!"<<std::endl;
	this->_HitPoints += amount;
}

/*bool    ClapTrap::operator !=(const ClapTrap& other) const
{
    if (this->_name != other._name)
        return (false);
    if (this->_AttackDamage != other._AttackDamage)
        return (false);
    if (this->_EnergyPoints != other._EnergyPoints)
        return (false);
    if (this->_HitPoints != other._HitPoints)
        return (false);
    return (true);       
}*/

std::ostream&   operator<<(std::ostream& o, ClapTrap const& i)
{
	o << *((ClapTrap *)(&i));
    return (o);
}