#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

class Brain
{
    protected:
        

    public:
        Brain();
        ~Brain();

        Brain(const Brain& other);

        Brain& operator = (const Brain& rval);
        bool    operator != (const Brain& rhv) const;

        std::string _ideas[100];

        const std::string*  getBrain(void) const;
        virtual void makeSound(void) const;
};
std::ostream&   operator<<(std::ostream& o, Brain const& i);

#endif
