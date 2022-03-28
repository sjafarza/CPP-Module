#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class FragTrap: virtual public ClapTrap
{
    private:

    public:
	    FragTrap(std::string name);
	    ~FragTrap();
        FragTrap(const FragTrap& other);
        FragTrap&   operator=(FragTrap const& rhs);

	    void highFivesGuys(void);
	    void attack(std::string const & target);
};

std::ostream&   operator<<(std::ostream& o, FragTrap const& i);

# endif