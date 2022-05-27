#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

//for using in test
class A 
{
	private :
			int _n;

	public :
		A(void) : _n(42) {return;}
		int get() const {return this->_n;}
		
};
std::ostream &operator << (std::ostream &o, const A &a) {o << a.get(); return o; }


template<typename T>
void    print(T const &val)
{
    std::cout << val << std::endl;
    return ;
}

template<typename T>
void    iter(T *arry,size_t len, void(*f)(const T &elem))
{
    for (size_t i = 0; i < len; ++i)
        f(arry[i]);
    return ;
}

#endif