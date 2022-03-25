#ifndef CLAPTRAP_HPP
# define    CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _HitPoints;
        unsigned int    _EnergyPoints;
        unsigned int    _AttackDamage;
        ClapTrap(void);

    public:
    /* constructor */
        ClapTrap(std::string    name);

    /* Destructor */
        ~ClapTrap(void);

    /* copy Constructor*/
        ClapTrap(const ClapTrap& other);

    /* operation  overload */
       ClapTrap& operator=(ClapTrap const& rval);
       
       
       void attack(std::string const & target);
       void takeDamage(unsigned int amount);
       void beRepaired(unsigned int amount);
       unsigned int getHitpoints(void);
       unsigned int getEnergypoints(void);
       unsigned int getAttackdamage(void);
       std::string  getName(void);

       bool    operator !=(const ClapTrap& other) const;
};
       
std::ostream&   operator<<(std::ostream& o, ClapTrap const& i);

#endif
