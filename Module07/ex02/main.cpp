#include "Array.hpp"
#include <iostream>
#include <cstdlib>

#define MAX_VAL 750


int		main(void)
{
    std::cout << "=====> Test empty array <=====" << std::endl;
	std::cout << std::endl;

    Array<int>  a = Array<int>();
    std::cout << "Array size: " << a.size() << std::endl;

	try {
            std::cout << "a[0] = " << a[0] << std::endl;
        }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "=====> Test array  int and copy <=====" << std::endl;
	std::cout << std::endl;

    unsigned size = 4;
	Array<int> intArray(size);
	
	for (unsigned i = 0; i < size; i++)
        intArray[i] = i;

    Array<int> intArrayCopy;
    std::cout << "size of intArrayCopy before copy assignment	: " << intArrayCopy.size() << std::endl;
    intArrayCopy = intArray;
    std::cout << "size of intArrayCopy after copy assignment	: " << intArrayCopy.size() << std::endl;
    std::cout << std::endl;
    try
    {
        for (unsigned i = 0; i < size; i++)
			{
				std::cout << "Array[" << i << "]		: " << intArray[i] << std::endl;
				std::cout << "intArrayCopy[" << i << "]		: " << intArrayCopy[i] << std::endl;
			}
	
			//intArray[size];
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "=====> Test array  char and copy <=====" << std::endl;
	std::cout << std::endl;
    try
    {
        std::cout<<" *****CharArry empty*****"<<std::endl;
        Array<std::string> charArray;
        std::cout << "size of charArray : " << charArray.size() << std::endl;
        //std::cout << charArray[0] << std::endl;
        std::cout<<" *****CharArry with value*****"<<std::endl;
        std::string str[] = {"salam","Khobi", "saray", "Arnika", "Abtin", "sanaz", "saman", "love", "me", "fin" };
        Array<std::string> strArray(10);
        for (unsigned i = 0; i < 10; i++)
		{
			strArray[i] = str[i];
		}
        std::cout << "Display array1 entries:" << std::endl;
        for (unsigned i = 0; i < 10; i++)
		{
			std::cout << "strArray[" << i << "] ="<< strArray[i];
            std::cout << std::endl;
		}
        std::cout << std::endl;
        std::cout<<" *****CharArry  copy*****"<<std::endl;
        Array<std::string> CopyArray(strArray);
        std::cout << "Display CopyArray entries:" << std::endl;
        for (unsigned i = 0; i < 10; i++)
		{
			std::cout << "CopyArray[" << i << "] =" << CopyArray[i];
            std::cout << std::endl;
		}    
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl << "Test 42 =====================================================================" << std::endl;
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
        return 0;
    }
}