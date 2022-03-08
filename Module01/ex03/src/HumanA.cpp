#include "../inc/HumanA.hpp"

 HumanA::HumanA(std::string name, Weapon &weapon): _Weapon(weapon) ,_name(name)
 {
     
 }

HumanA::~HumanA()
{
    
}

 void    HumanA::attack() const
 {
     std::cout << this->_name << " attack with their " << this->_Weapon.getType() << std::endl;
 }