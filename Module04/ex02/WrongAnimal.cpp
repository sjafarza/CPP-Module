#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "WrongAnimal";
    std::cout << "Constructor WrongAnimal call !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "DeConstructor WrongAnimal call !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
    //*this = other;
    std::cout << "Constructor Copy WrongAnimal call !" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& rval)
{
    if (this != &rval) /* *thsi != rval */
    {
        this->_type = rval._type;
    }
    return (*this);
}

std::ostream&   operator<<(std::ostream& o, WrongAnimal const& i)
{
    o << *((WrongAnimal*)(&i));
    return (o);
}

std::string  WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound !" << std::endl;
}