#include "Dog.hpp"

Dog::Dog()
{
    this->_Brain = new Brain();
    this->_type = "Dog";
    std::cout << "Constructor Dog call !" << std::endl;
}

Dog::~Dog()
{
    delete this->_Brain;
    std::cout << "DeConstructor Dog call !" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    
    std::cout << "Constructor Copy Dog call !" << std::endl;
    this->_Brain = new Brain();
    *this = other;
}

Dog& Dog::operator = (const Dog& rval)
{
    if (this != &rval) 
    {
        this->_type = rval._type;
        *(this->_Brain) = *(rval._Brain);
    }
    std::cout << "Passing through Dog operator=() overload" << std::endl;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std:: cout << "Hop ! Hop ... I am Dog" << std::endl;
}