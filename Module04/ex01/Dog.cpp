#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    this->_Brain = new Brain;
    std::cout << "Constructor Dog call !" << std::endl;
}

Dog::~Dog()
{
    delete  this->_Brain;
    std::cout << "DeConstructor Dog call !" << std::endl;
}

Dog::Dog(const Dog& other)
{
    
    std::cout << "Constructor Copy Dog call !" << std::endl;
}

Dog& Dog::operator = (const Dog& rval)
{
    if (*this != rval) 
    {
        this->_type = rval._type;
    }
    return (*this);
}

void    Dog::makeSound(void) const
{
    std:: cout << "Hop ! Hop ... I am Dog" << std::endl;
}

Brain*  Dog::getBrain(void) const
{
    return(this->_Brain);
}