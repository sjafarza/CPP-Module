#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name):_name(name)
{

}

HumanB::~HumanB()
{
    
}

void    HumanB::attack() const
 {
     std::cout << this->_name << " attack with their " << this->_Weapon->getType() << std::endl;
 }

  void    HumanB::setWeapon(Weapon &weapon)
  {
      this->_Weapon = &weapon;
  }