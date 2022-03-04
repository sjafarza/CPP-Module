#include "Brainz.hpp"

ClassZombie* newZombie( std::string name)
{
    ClassZombie *zombie = new ClassZombie(name);

    zombie->announceName();

    return(zombie);
}