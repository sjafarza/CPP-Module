#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
    private:
        Brain*   _Brain;

    public:
        Dog();
        ~Dog();

        Dog(const Dog& other);

        Dog& operator = (const Dog& rval);

        void    makeSound(void) const;
        Brain*  getBrain(void) const;

};

#endif