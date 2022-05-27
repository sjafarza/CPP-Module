#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<class T>
class Array {
    private:
    unsigned int arr_size;
    T *array;

    public:
    Array(void) {
        this->array = NULL;
        this->arr_size = 0;
    };

    Array(unsigned int n) {
        this->arr_size = n;
        this->array = new T[n];
        for (unsigned int i = 0; i < n; i++) {
            this->array[i] = T();
        }
    };
    
    Array(const Array &f) {
        this->arr_size = f.size();
        this->array = new T[f.size()];
        for (unsigned int i = 0; i < f.size(); i++) {
            this->array[i] = f[i];
        }
    }

	Array &operator=( const Array &f ) {
        this->arr_size = f.size();
        this->array = new T[f.size()];
        for (unsigned int i = 0; i < f.size(); i++) {
            this->array[i] = f[i];
        }
    }

    ~Array(void) {
        delete [] this->array;
    }

    unsigned int size(void) const {
        return this->arr_size;
    }

    T &operator[](unsigned int idx) {
        if (idx >= this->arr_size)
            throw std::exception();
        return this->array[idx];
    }

    T operator[](unsigned int idx) const {
        if (idx >= this->arr_size)
            throw std::exception();
        return this->array[idx];
    }
};

template <typename T>
void print(T &value)
{
	std::cout << value << std::endl;
}

template <typename A, typename T>
void iter(A &a, int length, T &func)
{
	for (int i = 0; i < length; i++)
		func(a[i]);
}

#endif