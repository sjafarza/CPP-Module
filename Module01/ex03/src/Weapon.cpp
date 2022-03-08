#include "../inc/Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
    
}

std::string& Weapon::getType(void)
{
    std::string&    ref= this->_type;
    return(ref);

}

void   Weapon::setType(std::string type)
{
    this->_type = type;
}
