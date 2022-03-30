#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "A wild ScavTrap appears. Serial number : " << this->_name << std::endl;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;

	std::cout<<"scarvTrap constructor called with 50 energyPoints !"<<std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"scarvTrap destructor " << this->_name << " called"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & other) : ClapTrap(other)
{
   //*this = other;
   std::cout<<"Copy Constructor of ScavTrap called !"<<std::endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap is being assigned from other with " << rhs << std::endl;

	if ( this != &rhs )
		(ClapTrap)(*this) = (ClapTrap)(rhs);
	return (*this);
}

void ScavTrap::attack(std::string const & target)
{
	if (this->_HitPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name <<  " can't attack. It was finish. " << std::endl;
		return ;
	}
	if (this->_EnergyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
		this->_EnergyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << this->_name << " tries to attack " << target << ", but instead, says : \"NoT EnougH ManA\"" << std::endl;
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