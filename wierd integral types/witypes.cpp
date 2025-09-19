#include <iostream>

int main()
{
    short int a {97};
    short int b {10};

    char c {'a'};
    char d {'c'};

    auto r1 = a + b;
    auto r2 = c + d;
    
    // both above r1 r3 gets converted to int since int is smallest on which we can perform these arithmetic opertations.
    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;

}