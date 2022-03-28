#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout<<"FragTrap constructor called with 100 energypoints !"<<std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    //*this = other;
    std::cout << "Copy Constructor of FragTrap called !"<<std::endl;
}
 
FragTrap::~FragTrap()
{
	std::cout<<"FragTrap destructor called"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout<<"hi fives guys :D" <<std::endl;
}

void FragTrap::attack(std::string const & target)
{ 
	std::cout<<"Fragtrap "<<_name<<" attack " <<target<<", causing "<< getAttackdamage()<< " of damage!"<<std::endl;
}

FragTrap&   FragTrap::operator=(FragTrap const& rhs)
{
    std::cout << "FragTrap is being assigned from other with " << rhs << std::endl;

	if ( this != &rhs )
	{
		(ClapTrap)(*this) = (ClapTrap)(rhs);
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_HitPoints = rhs._HitPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}

std::ostream&   operator<<(std::ostream& o, FragTrap const& i)
{
    o << *((FragTrap *)(&i));
	return (o);
}