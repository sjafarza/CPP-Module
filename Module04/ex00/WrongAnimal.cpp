#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "";
    std::cout << "Constructor WrongAnimal call !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "DeConstructor WrongAnimal call !" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
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

bool    WrongAnimal::operator != (const WrongAnimal& rhv) const
{
    return (this->_type != rhv._type);
}

std::ostream&   operator<<(std::ostream& o, WrongAnimal const& i)
{
    o << *((WrongAnimal*)(&i));
    return (o);
}

const std::string&  WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound !" << std::endl;
}