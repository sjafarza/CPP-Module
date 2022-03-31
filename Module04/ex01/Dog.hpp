#ifndef Dog_HPP
# define Dog_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
         Brain*  _Brain;

    public:
        Dog();
        virtual ~Dog();

        Dog(const Dog& other);
        Dog& operator = (const Dog& rval);

        virtual void    makeSound(void) const;

};

#endif