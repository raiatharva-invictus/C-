#include <iostream>
// #include <string>
int main()
{
    // std::cerr << "Hello this is cerr!" << std::endl;
    // std::clog << "Hello this is clog!" << std::endl;

    // int age;
    // std::string name;
    // std::cout << "Enter your name and your age : ";; 
    // std::cin >> name >> age ;
    
    // std::cout << "Your name is " << name << " and your age is " << age << std::endl;

    //the getline function
    int age;
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Your name is " << name << " and your age is " << age << std::endl;

    return 0;
}