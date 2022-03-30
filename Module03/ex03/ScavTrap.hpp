#ifndef SCAVTRAP_H
#define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap:virtual  public ClapTrap
{
    private:
    
    public:
        ScavTrap();
        ScavTrap(std::string name);
	    ~ScavTrap();

        ScavTrap(ScavTrap const & other);

        ScavTrap &		operator=(ScavTrap const & rhs);

	    void attack(std::string const & target);
	    void guardGate();
};

std::ostream&   operator<<(std::ostream& o, ScavTrap const& i);

#endif