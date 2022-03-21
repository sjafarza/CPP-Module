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

       bool operator > (Fixed const& other) const;
       bool operator < (Fixed const& other) const;
       bool operator >= (Fixed const& other) const;
       bool operator <= (Fixed const& other) const;
       bool operator == (Fixed const& other) const;
       bool operator != (Fixed const& other) const;

       Fixed operator + (Fixed const& other) const;
       Fixed operator - (Fixed const& other) const;
       Fixed operator * (Fixed const& other) const;
       Fixed operator / (Fixed const& other) const;

       Fixed operator++(int);//post increment
       Fixed& operator++(void);//pre increment
       Fixed operator--(int);//post decrement
       Fixed& operator--(void);//pre decrement

    /* method */
       int getRawBits(void) const;
       void setRawBits(int const raw);
       float toFloat( void ) const;
       int toInt( void ) const;

       static Fixed& min(Fixed& inst1, Fixed& inst2);
       static Fixed& max(Fixed& inst1, Fixed& inst2);
       static Fixed const& min(Fixed const& inst1, Fixed const& inst2);
       static Fixed const& max(Fixed const& inst1, Fixed const& inst2);
};
       
std::ostream&   operator<<(std::ostream& o, Fixed const& i);
int ft_calcul_pow(int b, int nb_bits); 

#endif
