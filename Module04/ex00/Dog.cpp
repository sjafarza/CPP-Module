#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << "Constructor Dog call !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "DeConstructor Dog call !" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    
    std::cout << "Constructor Copy Dog call !" << std::endl;
    *this = other;
}

Dog& Dog::operator = (const Dog& rval)
{
    if (this != &rval) 
    {
        this->_type = rval._type;
    }
    std::cout << "Passing through Dog operator=() overload" << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std:: cout << "Hop ! Hop ... I am Dog" << std::endl;
}