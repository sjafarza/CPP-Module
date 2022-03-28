#ifndef Cat_HPP
# define Cat_HPP

# include <iostream>
#include "Animal.hpp"

class Cat : virtual public Animal
{
    private:
        

    public:
        Cat();
        virtual ~Cat();

        Cat(const Cat& other);

        Cat& operator = (const Cat& rval);

        void    makeSound(void) const;
};

#endif