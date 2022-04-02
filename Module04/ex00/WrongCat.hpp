#ifndef WrongCat_HPP
# define    WrongCat_HPP

# include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:  
       
    public:
        WrongCat();
        virtual ~WrongCat();

        WrongCat(const WrongCat& other);
        WrongCat& operator = (const WrongCat& rval);

       void makeSound(void) const;
};

#endif