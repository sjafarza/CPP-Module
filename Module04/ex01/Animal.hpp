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
        virtual ~Animal();

        Animal(const Animal& other);

        virtual Animal& operator = (const Animal& rval);

        virtual std::string  getType(void) const;
        virtual void makeSound(void) const;

        virtual Brain* getBrain(void) const;
};
std::ostream&   operator<<(std::ostream& o, Animal const& i);

#endif
