#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    private:
        

    public:
        Dog();
        virtual ~Dog();

        Dog(const Dog& other);
        Dog& operator = (const Dog& rval);

        virtual void    makeSound(void) const;

};

#endif