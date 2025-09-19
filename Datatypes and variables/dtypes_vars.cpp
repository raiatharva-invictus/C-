#include <iostream>
#include <iomanip>
int main()
{
    // datatypes
    // int, flaot, double, char, bool, auto, void,etc
    //vars

    // number systems
    // int n1 = 15; decimal
    // int n2 = 017; octal
    // int n3 = 0x0F; hexadecimal
    // int n4 = 0b1111; binary
    // std::cout << n1 << "\n"
    //           << n2 << "\n"
    //           << n3 << "\n"
    //           << n4 << "\n";


    // int value = 25;
    // std::cout << "Value" << value << std::endl;

    // std::cout << sizeof(int) << std::endl;
    // std::cout << sizeof(value) << std::endl;// same output as above for int
    


    //integer modifiers
    /*
    signed int a = -4;
    unsigned int c = -3;
    short c = 12;
    signed short d = 23;
    unsigned short d = 23;

    long c = 12;
    signed long d = 23;
    unsigned long d = 23;

    long long c = 12;
    signed long long d = 23;
    unsigned long long d = 23;
    
    std::cout << a << " " << c << std::endl;
    */

    // std::cout << std::setprecision(20);
    // float f  =  22.0/7.0f;
    // int pi = 22/7;
    // double pi2 = 22.0/7.0;
    // long double pi3 = 22.0/7.0L;
    // std::cout << pi << " " << pi2 << " " << pi3 << " " << f << std::endl;

    //scientific notation

    // double e = 1.2003e4; // can use with float and long double too
    // std::cout << e << std::endl;

    //will print +inf/-inf depending on the dividend
    // double c {};
    // double d {};
    // double a = 1.0/c;
    // std::cout << a << std::endl;
    // double b = -1.0/c;
    // std::cout << b << std::endl;

    // std::cout << c/d << std::endl;


    //// boolean types

    // bool a = true;
    // bool b = false;
    
    // std::cout << std::endl;
    // std::cout << std::boolalpha; // to print true/false instead of 1/0.

    // std::cout << "a says: " << a << std::endl;
    // std::cout << "b says: " << b << std::endl;

    ///char type

    // char c {'A'};
    // int c1 {65};

    // std::cout << c << std::endl;
    // std::cout << sizeof(c) << std::endl;
    // std::cout << "c(int) : " << static_cast<int>(c) << std::endl;
    // std::cout << "c1(char) : " << static_cast<char>(c1) << std::endl;


    ///auto keyword

    auto a = 14;
    auto b = 31.567f;
    auto c = 31.576;
    auto d = 'A';
    auto e = true;

    //using integer modifiers suffixes
    auto f = 123u;
    auto g = 1234ul;
    auto h = 12345ll;
    std::cout << a << " " 
             << b << " " 
             << c << " " 
             << d << " " << e << " " << f << " " << g << " " << h << " " << std::endl;

   
    return 0;

}