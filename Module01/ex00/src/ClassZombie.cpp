#include "ClassZombie.hpp"

ClassZombie::ClassZombie(std::string name)
{
    this->_name = name;
}

ClassZombie::~ClassZombie()
{
}

void    ClassZombie::announceName(void) const
{
    std::cout << this->_name
    << " : "
    << "BraiiiiiinnnzzzZ...\n";
}
