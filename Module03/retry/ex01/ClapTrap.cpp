#include "ClapTrap.hpp"

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

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout<<"Copy Constructor ClaTrap called !"<<std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& rval)
{
    if (this != &rval)
    {
        this->_name = rval._name;
        this->_HitPoints = rval._HitPoints;
        this->_AttackDamage = rval._AttackDamage;
        this->_EnergyPoints = rval._EnergyPoints;
    }
    return(*this);
}

std::string ClapTrap::getName(void)
{
    return (this->_name);
}

unsigned int ClapTrap::getHitpoints(void)
{
    return (this->_HitPoints);
}

unsigned int ClapTrap::getEnergypoints(void)
{
    return (this->_EnergyPoints);
}

unsigned int ClapTrap::getAttackdamage(void)
{
    return (this->_AttackDamage);
}

void ClapTrap::attack(std::string const & target)
{
    std::cout<<"ClapTrap "<< getName() <<" attack " <<target<<", causing "<< getAttackdamage()<< " of damage!"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"ClapTrap "<<getName()<<" has been attacked and lost " <<amount<< " of energy!"<<std::endl;
	if (this->getEnergypoints() < amount) 
    {
		std::cout << "ClapTrap " << getName() << " cannot take this amount of damage he has not enough energy!" << std::endl;
		return ;
	}
    this->_EnergyPoints =getEnergypoints() - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<<"ClapTrap "<<getName()<<" is repaired and gained " <<amount<<" points of energy!"<<std::endl;
	this->_EnergyPoints = getEnergypoints() + amount;
}

bool    ClapTrap::operator !=(const ClapTrap& other) const
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
}

std::ostream&   operator<<(std::ostream& o, ClapTrap const& i)
{
    o << *((ClapTrap *)(&i));
    return (o);
}
