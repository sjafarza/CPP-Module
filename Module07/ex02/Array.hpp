#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
    private:
        unsigned int _sizeArry;
        T           *_arry;

    public:
        Array() : _sizeArry(0), _arry(new  T[0]) {};
        Array(unsigned int n) :_sizeArry(n), _arry(new T[n]) 
        {
            for (unsigned int i=0; i < n, i++)
            {
                _arry[i] = t();
            }
        }; 
        

};

#endif