#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        ~Animal();

        Animal(const Animal& other);

        Animal& operator = (const Animal& rval);
        bool    operator != (const Animal& rhv) const;

        const std::string&  getType(void) const;
        virtual void makeSound(void) const;
        virtual Brain		*getBrain( void ) const = 0;
};
std::ostream&   operator<<(std::ostream& o, Animal const& i);

#endif
