#include "Brainz.hpp"

void    creatRandomZombie(void)
{
    std::string name;

    name = "Saray";
    randomChump(name);
   
} 

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    Zombie *zombie;

    if (ac > 2)
    {
        std::cout<< "This program can't creat more than one Zombie !\n";
    }
    else if (ac == 1)
    {
        creatRandomZombie(); 
    }
    else
    {
        zombie = newZombie(av[1]);
        delete zombie;
    }
}