#include <iostream>
using namespace std;
int main()
{
    //// References ////
    ///declaring and intializing references///
    // int num {10};
    // int& ref {num}; //referencing via intialization
    // int& ref2 = num; //referencing via assignment

    // if we modify the oiginal variable then the changes are going to be visible in the reference varible too and if we modify via reference variable then changes are also going to be visible in original variable// 

    // // for example
    // num = 20;
    // cout << num << endl;
    // cout << ref << endl;
    
    // ref = 30;
    // cout << num << endl;
    // cout << ref << endl;
///////
    // // if we try to print the address of both ref and original variable both are going to be same as shown below
    // cout << &num << endl;
    // cout << &ref << endl;


    // pointers vs references

    // // below is an example of how we cannot change reference variable to point a different memory address as we did in the case of pointers
    // int num {19};
    // int num2 {20};
    // int& ref {num};
    // cout << ref << endl;
    // cout << num << endl;
    // ref = num2;
    // cout << ref << endl;
    // cout << num2 << endl;

    // cout << "address of ref : "<< &ref << endl;
    // cout << "address ofe num : "<< &num << endl;
    // cout << "address of num2 : " << &num2 << endl;

    /*
    references can be referred to as const pointers since they cannot reference something else other than what they have be initialized with at the time of declaration, references are much more of a friendlier syntax since they dont require to deference it every time we read or write through references data as we had to do in case of pointers. 
    This doesnt mean that pointers are verbose or say not good infact pointers have great applications as we have already seen and will see further.
    */


    /// references and constants ///

    // int num {24};
    // int& ref {num}; // in this we are able to change the value of original 

    // // but if we define a const reference like
    // const int& ref2 {num}; // const reference
    // // ref2 = 25; // gives error we cannot modify the value

    // // we can mimic the same behaviour via cont point const var name ie: 
    // const int* const point {new int{26}};
    // // since we know that reference if written in terms of pointer is basically const int* pointer

    // imp point:
    // their is no such thing as const int* const ref it will give error and it doesnt make any sense
    // the const keyword used with ref doesnt mean that original variable is also constant ie const int& ref {original_var}; will only affect ref not orginal_var   






}
