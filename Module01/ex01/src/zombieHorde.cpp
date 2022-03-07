#include "../inc/brainz.hpp"

Zombie*     zombieHorde(int N, std::string name)
{
    Zombie* zombie= new Zombie[N];

    while (--N > -1)
    {
        zombie[N].set_name(name);
    }
    return (zombie);
}