#include <iostream>

int add(int a, int b){
    return a +b;
}

int prod(int a, int b){
    return a * b;
}

int main()
{
    int c {14};
    int d {15};
    // int c = 10;
    // int d = 15;
    // int sum = add(c,d);
    int prodt = prod(2,3);

    // std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product is: " << prodt << std::endl;
    return 0;
}