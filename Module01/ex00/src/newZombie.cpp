#include "Brainz.hpp"

Zombie* newZombie( std::string name)
{
    Zombie *zombie = new Zombie(name);

    zombie->announceName();

    return(zombie);
}