#include "Brain.hpp"

Brain::Brain() : _ideas()
{
    std::cout << "Constructor Brain call !" << std::endl;
}

Brain::~Brain()
{
    std::cout << "DeConstructor Brain call !" << std::endl;
}

Brain::Brain(const Brain& other)
{
    *this = other;
    std::cout << "Constructor Copy Brain call !" << std::endl;
}

Brain& Brain::operator = (const Brain& rval)
{
    if (this != &rval) 
    {
        for (int i = 0; i<100; i++)
            this->_ideas[i] = rval._ideas[i];
    }
    return (*this);
}

std::ostream&   operator<<(std::ostream& o, Brain const& i)
{
    o << *((Brain*)(&i));
    return (o);
}

const std::string*  Brain::getBrain(void) const
{
    return (this->_ideas);
}

