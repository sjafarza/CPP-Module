#ifndef ClassZOMBIE_HPP
# define ClassZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
            std::string _name;
    public:
            Zombie();
            ~Zombie();

            void    announceName(void) const;
            void    set_name(std::string name);
};

#endif