#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;

	std::cout<<"scarvTrap constructor called with 50 energyPoints !"<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"scarvTrap destructor called"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & other) : ClapTrap(other._name)
{
  // *this = other;
   std::cout<<"Copy Constructor of ScavTrap called !"<<std::endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap is being assigned from other with " << rhs << std::endl;

	if ( this != &rhs )
	{
		(ClapTrap)(*this) = (ClapTrap)(rhs);
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_HitPoints = rhs._HitPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return *this;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout<<"ScarvTrap "<<_name<<" attack " <<target<<", causing "<< getAttackdamage()<< " of damage!"<<std::endl;
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<_name<< " have enterred in Gate keeper mode"<< std::endl;
}

std::ostream&   operator<<(std::ostream& o, ScavTrap const& i)
{
	o << *((ScavTrap *)(&i));
	return (o);
}