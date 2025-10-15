// Topic : - Destructors

/*
1 destructors are special methods that are called when an object dies  
*/

#include <iostream>
#include "cylinder.h"
using namespace std;

class Dog{
    public:
        Dog(string_view _name, string_view _breed, int _age);
        ~Dog();
    private:
        string name;
        string breed;
        int *age{nullptr};

};
Dog::Dog(string_view _name, string_view _breed, int _age){
    name = _name;
    breed = _breed;
    age = new int; //dynamic allocation
    *age = _age;
    cout << "Constructor is called for " << name << endl;
}
Dog::~Dog(){
    delete age;
    cout << "Destructor is called for " << name << endl;
}

int main()
{
    Dog dog("Jack", "Labrador", 3);
    cout << "Done ! created the object " << endl;
    // destructor will be called at the end of the scope of current function it is in(here it is in main) even after the above print statment  by this statement i mean that if the object was created in main function it will only call destructor when it is about to exit the main function scope but if it will exit other function in which it was called then it will call destructor at the end of that function scope( you can see this by taking a function and creating the object in it and try to print done in main you will see that first const. is called then at the end dest. is called out of the function now it will proceed) you get it 
    return 0;
}       







