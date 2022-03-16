#ifndef FIXED_HPP
# define    FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                      _n;
        int const static      _bits=8;

    public:
    /* constructor */
        Fixed(void);

    /* Destructor */
        ~Fixed(void);

    /* copy Constructor*/
        Fixed(const Fixed& other);

    /* operation  overload */
       Fixed& operator=(Fixed const& rval);

       int getRawBits(void) const;
       void setRawBits(int const raw);
};
       
std::ostream&   operator<<(std::ostream& o, Fixed const& i);

#endif
