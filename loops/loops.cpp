#include <iostream>

int main()
{
    ///syntax : for loop///
    /*
    for (initialization; condition; increment/decrement) {
        // code to be executed
    }

    // type alias for unsigned int a = 0 can be written as size_t a = 0 in the for loop initialization i.e. aliag for ungsigned int is size_t.
    */
    // for (int i = 0; i < 10; i++) {
    //     std::cout << "Iteration: " << i << std::endl;
    // }
    // we can also leave the declaration part empty if the variable is declared outside the loop.
    // size_t i = 0;
    // for (; i < 10; i++) {
    //     std::cout << "Iteration: " << i << std::endl;
    // }


    /// while loop ///
    // const unsigned int count = 10;

    // size_t i {0};
    // while(i < count) {
        
    //     std::cout << "Hello World! : "  << i << std::endl;
    //     i++;
    // }

    /// do while loop ///
    // it does not check the condition at first it executes the code block once and then checks the condition.
    // const unsigned int count = 10;

    // size_t i {11};
    // do {
        
    //     std::cout << "Hello World! : "  << i << std::endl;
    //     i++;
    // } while(i < count);

    return 0;
}