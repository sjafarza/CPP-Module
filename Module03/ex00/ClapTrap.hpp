#ifndef CLAPTRAP_HPP
# define    CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        unsigned int    _HitPoints;
        unsigned int    _EnergyPoints;
        unsigned int    _AttackDamage;

    public:
    /* constructor */
        ClapTrap();
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
       
       unsigned int getHitpoints(void) const;
       unsigned int getEnergypoints(void) const;
       unsigned int getAttackdamage(void)const;
       std::string  getName(void) const;

       //bool    operator !=(const ClapTrap& other) const;
};
       
std::ostream&   operator<<(std::ostream& o, ClapTrap const& i);

#endif
