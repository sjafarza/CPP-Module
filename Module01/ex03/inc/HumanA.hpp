#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      &_Weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void    attack() const;

};

#endif