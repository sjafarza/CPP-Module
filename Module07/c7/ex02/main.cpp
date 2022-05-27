#include <Array.hpp>
#include <iostream>
#include <cstdlib>

#define MAX_VAL 750
int main(void)
{
    std::cout << "Test empty array =====================================================================" << std::endl;
    {
        Array<int> arr = Array<int>();
        std::cout << "Array size: " << arr.size() << "." << std::endl;

        try {
            std::cout << "arr[0] = " << arr[0] << "." << std::endl;
        } catch (std::exception &e) {
            std::cout << "Cant display arr[0]." << std::endl;
        }
    }

    std::cout << std::endl << "Test 5 int array =====================================================================" << std::endl;
    {
        Array<int> arr = Array<int>(5);
        std::cout << "Array size: " << arr.size() << "." << std::endl;

        try {
            std::cout << "Display array entries:" << std::endl;
            iter(arr, 5, print<int>);
        } catch (std::exception &e) {
            std::cout << "Cant display arr[0]." << std::endl;
        }
    }

    std::cout << std::endl << "Test 10 string array =====================================================================" << std::endl;
    {
        Array<std::string> arr = Array<std::string>(10);
        std::cout << "Array size: " << arr.size() << "." << std::endl;

        try {
            std::cout << "Display array entries:" << std::endl;
            iter(arr, 10, print<std::string>);
        } catch (std::exception &e) {
            std::cout << "Cant display arr[0]." << std::endl;
        }
    }

    std::cout << std::endl << "Test 10 const string array =====================================================================" << std::endl;
    {
        Array<std::string> arr = Array<std::string>(10);
        std::cout << "Array size: " << arr.size() << "." << std::endl;

        try {
            std::cout << "Display array entries:" << std::endl;
            iter(arr, 10, print<std::string>);
        } catch (std::exception &e) {
            std::cout << "Cant display arr[0]." << std::endl;
        }
    }

    std::cout << std::endl << "Test copy array =====================================================================" << std::endl;
    {
        Array<std::string> arr = Array<std::string>(10);
        std::cout << "Array size: " << arr.size() << "." << std::endl;
        arr[1] = "coucou";
        
        Array<std::string> arr2 = arr;
        std::cout << "Array size: " << arr.size() << "." << std::endl;
        arr2[1] = "salut";
        arr2[2] = "coucou";
        
        try {
            std::cout << "Display array1 entries:" << std::endl;
            iter(arr, arr.size(), print<std::string>);
            std::cout << "Display array2 entries:" << std::endl;
            iter(arr2, arr2.size(), print<std::string>);
        } catch (std::exception &e) {
            std::cout << "Cant display arr[0]." << std::endl;
        }
    }

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