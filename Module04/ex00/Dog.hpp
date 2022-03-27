#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
#include "Animal.hpp"

class Dog : virtual public Animal
{
    private:
        

    public:
        Dog();
        ~Dog();

        Dog(const Dog& other);

        Dog& operator = (const Dog& rval);

        void    makeSound(void) const;

};

#endif