#include <iostream>

int main()
{
    // std::cout << "Hello world!" << std::endl;
    // std::cout << "Hello world!";

    // return 0; // tells if the program ended successfully to OS

    // understanding runtime errors
    std::cout << "Hello world!" << std::endl;
    int value = 7/0;
    std::cout << "Value" << value << std::endl;

    return 0;
}
/*
->std:: endl prints a newline and flushes the output buffer
 ->main is the entry point of the program
*/
/*
errors - compile time and runtime errors 
warnings - potential issues in the code that we might encounter at runtime
*/