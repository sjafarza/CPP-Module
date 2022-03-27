#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal();
        ~WrongAnimal();

        WrongAnimal(const WrongAnimal& other);

        WrongAnimal& operator = (const WrongAnimal& rval);
        bool    operator != (const WrongAnimal& rhv) const;

        const std::string&  getType(void) const;
        void makeSound(void) const;
};
std::ostream&   operator<<(std::ostream& o, WrongAnimal const& i);

#endif