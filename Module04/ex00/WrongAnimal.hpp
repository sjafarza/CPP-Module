#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal();
        virtual ~WrongAnimal();

        WrongAnimal(const WrongAnimal& other);

        virtual WrongAnimal& operator = (const WrongAnimal& rval);

        std::string  getType(void) const;
        void makeSound(void) const;
};

std::ostream&   operator<<(std::ostream& o, WrongAnimal const& i);

#endif