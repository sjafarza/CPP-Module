#ifndef CLASSZOMBIE_HPP
# define CLASSZOMBIE_HPP

# include <iostream>

class ClassZombie
{
private:
    std::string _name;

public:
    ClassZombie(std::string name);
    ~ClassZombie();

    void    announceName(void) const;

};




#endif