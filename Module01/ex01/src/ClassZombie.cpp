#include"../inc/ClassZombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{

}

void    Zombie::set_name(std::string name)
{
    this->_name = name;
}

void    Zombie::announceName(void) const
{
    std::cout << this->_name
              << " : "
              << "BraiiiiiinnnzzzZ...\n";
}
