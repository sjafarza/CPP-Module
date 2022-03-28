#include "Animal.hpp"

Animal::Animal() : _type("")
{
    //this->_type = "";
    std::cout << "Constructor Animal call !" << std::endl;
}

Animal::~Animal()
{
    std::cout << "DeConstructor Animal call !" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
    //*this = other;
    std::cout << "Constructor Copy Animal call !" << std::endl;
}

Animal& Animal::operator = (const Animal& rval)
{
    if (this != &rval)
    {
        this->_type = rval._type;
    }
    return (*this);
}

/*bool    Animal::operator != (const Animal& rhv) const
{
    return (this->_type != rhv._type);
}*/

std::ostream&   operator<<(std::ostream& o, Animal const& i)
{
    o << *((Animal*)(&i));
    return (o);
}

const std::string&  Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal Sound !" << std::endl;
}