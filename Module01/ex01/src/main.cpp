#include "../inc/brainz.hpp"

int main(int ac, char **av)
{
    Zombie     *zombie;
    int         i = -1;

    zombie = zombieHorde(NumberZombie, "Saray");
    while (++i < NumberZombie)
    {
        zombie->announceName();
      
    }

    delete[] zombie;
    std::cout<<"Finish !\n";
    return (0);
}