#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    this->_Brain = new Brain;
    std::cout << "Constructor Cat call !" << std::endl;
}

Cat::~Cat()
{
    delete  this->_Brain;
    std::cout << "DeConstructor Cat call !" << std::endl;
}

Cat::Cat(const Cat& other)
{
    
    std::cout << "Constructor Copy Cat call !" << std::endl;
}

Cat& Cat::operator = (const Cat& rval)
{
    if (*this != rval) 
    {
        this->_type = rval._type;
    }
    return (*this);
}

void    Cat::makeSound(void) const
{
    std:: cout << "Mioo ! Mioo ... I am Cat" << std::endl;
}

Brain*  Cat::getBrain(void) const
{
    return(this->_Brain);
}
