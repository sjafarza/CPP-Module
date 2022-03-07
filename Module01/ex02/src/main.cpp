#include<iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string*    stringPTR = &var;
    std::string&    stringREF = var;
    std::cout << "L’adresse de la string en mémoire : " << &var << std::endl
              << "L’adresse stockée dansstringPTR   : " << stringPTR << std::endl 
              << "L’adresse stockée dans stringREF  : "   << &stringREF  << std::endl
              << "La valeur de la string : " << var << std::endl
              << "La valeur pointée parstringPTR : " << *stringPTR << std::endl 
              << "La valeur pointée parstringREF : " << stringREF  << std::endl;


    return (0);
}