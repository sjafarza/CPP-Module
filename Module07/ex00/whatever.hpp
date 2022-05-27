#ifndef SWAP_HPP
# define SWAP_HPP

# include<iostream>
# include <cmath>

template<typename T>
void    swap(T &var1, T &var2)
{
    T tmp;

    tmp = var1;
    var1 = var2;
    var2 = tmp;
}

template<typename T>
const T   &min(T &var1, T &var2)
{
    return(var1 < var2 ? var1 : var2);
}

template<typename T>
const T     &max(T &var1, T &var2)
{
    return(var1 > var2 ? var1 : var2);
}
#endif