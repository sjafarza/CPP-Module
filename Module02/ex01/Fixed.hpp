#ifndef FIXED_HPP
# define    FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                      _n;
        int const static      _bits=8;
          

    public:
    /* constructor */
        Fixed(void);
        Fixed(int const n);
        Fixed(float const f);

    /* Destructor */
        ~Fixed(void);

    /* copy Constructor*/
        Fixed(const Fixed& other);

    /* operation  overload */
       Fixed& operator=(Fixed const& rval);

       int getRawBits(void) const;
       void setRawBits(int const raw);
       float toFloat( void ) const;
       int toInt( void ) const;
};
       
std::ostream&   operator<<(std::ostream& o, Fixed const& i);
int ft_calcul_pow(int b, int nb_bits); 

#endif
