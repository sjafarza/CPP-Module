#ifndef Cat_HPP
# define Cat_HPP

# include <iostream>
#include "Animal.hpp"
#include  "Brain.hpp"

class Cat : virtual public Animal
{
    private:
        Brain*   _Brain;

    public:
        Cat();
        virtual ~Cat();

        Cat(const Cat& other);

        Cat& operator = (const Cat& rval);

        void    makeSound(void) const;
        Brain*  getBrain(void) const;
};

#endif