#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "WrongCat";
    std::cout << "Constructor WrongCat call !" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "DeConstructor WrongCat call !" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) :  WrongAnimal(other)
{
    
    std::cout << "Constructor Copy WrongCat call !" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator = (const WrongCat& rval)
{
    if (this != &rval) 
    {
        this->_type = rval._type;
    }
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std:: cout << "Mioooooo ! Mioooooo ... I am WrongCat" << std::endl;
}