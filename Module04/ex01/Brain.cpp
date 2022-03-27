#include "Brain.hpp"

Brain::Brain()
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
    if (*this != rval) 
    {
        for (int i = 0; i<100; i++)
            this->_ideas[i] = rval._ideas[i];
    }
    return (*this);
}

bool    Brain::operator != (const Brain& rhv) const
{
   for (int i = 0; i<100; i++)
   {
        if (this->_ideas[i] != rhv._ideas[i])
            return (false);
   }
    return (true);
}

std::ostream&   operator<<(std::ostream& o, Brain const& i)
{
    o << *((Brain*)(&i));
}

const std::string*  Brain::getBrain(void) const
{
    return (this->_ideas);
}

void Brain::makeSound(void) const
{
    std::cout << "Brain Sound !" << std::endl;
}
