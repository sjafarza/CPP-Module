#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        virtual ~Animal();

        Animal(const Animal& other);

        virtual Animal& operator = (const Animal& rval);
        //bool    operator != (const Animal& rhv) const;

        const std::string&  getType(void) const;
        virtual void makeSound(void) const;
};
std::ostream&   operator<<(std::ostream& o, Animal const& i);

#endif
