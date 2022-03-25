#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	DiamondTrap(void);
	std::string _name;
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& rhs);

	void attack(std::string const & target);
	void whoAmI();
};
#endif
