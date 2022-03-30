#ifndef WrongCat_HPP
# define    WrongCat_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
    private:
        

    public:
        WrongCat();
        ~WrongCat();

        WrongCat(const WrongCat& other);

        WrongCat& operator = (const WrongCat& rval);

        void    makeSound(void) const;
};

#endif