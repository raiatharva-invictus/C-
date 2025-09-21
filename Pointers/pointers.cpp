#include <iostream>
using namespace std; // we dont have to write std again and again

int main()
{
    //a pointer is a variable that stores the memory address of another variable

    // int* point {}; // deafult is nullptr
    // int* point2 {nullptr}; // explicit nullptr

    // all datatypes pointers have the same size 
    // if it is a int pointer it will point to an int variable not other datatypes, true for all datatypes

    // position of pointer in declaration does not matter it can beeither on end of datatype or start of var name or anywhere in between but good practice is to put on the left(as per my preference)

    // int* point, point2; // both here not pointers the point is pointer but point2 is normal int variable to avoid thi confusino do it in diff lines but if we rigth like this -> int *point, *point2;// both are pointers since now point 2 also has * before it.

    // we can also do reassignment like int*point {&int_var}; can be reassigned to point = &int_var2

    // we cannot initialize a pointer with value like int* point {42} it is wrong.
    

     /// Char pointer /// 
    //  char* point {"Hello"}; // warning will be given does not allow conversion from string literal to 'char *'
    //  std::cout << point << std::endl; // output is Hello
    //  std::cout << *point << std::endl; // dereferencing , output is : H

     // but if we performed below statement
    //  *point = 'b'; // error
    //  std::cout << point << std::endl;


    // to fix the above warning we can do it like below telling it cannot be changed(ie const char* )
    // const char* point {"Hello"};

    // // *point = "Vello"; // compiler error
    // point = "Vello"; // this is basically making point point to a different string literal first character
    // cout << point << endl; // output Vello
    // cout << *point << endl; // output V


    /// If we really want to make modifiable char array of whom we can change first character
    // char m[] {"Tello"};
    // m[0] = 'H';
    // cout << m << endl;

    // char a {'a'};
    // char * p {&a};
    // *p = 3; // we are changing the memory address to anonymous it will contain a garbage value

    // cout << *p << endl;


    // the below program illustrates that we shouldn't just write into a random allocated memory address that we havent provided adn write up value in it it can corrupt data it is a bad thing 
    // int * n;
    // cout << *n << endl;
    // *n = 9;
    // cout << *n << endl;




    /// Allocate Dynamic memory through 'new'

    // int* point {};
    // point = new int; // this now is controlled not by system but it belongs to us since it is not allocated in stack rather it is allocated in heap, size is going to be that of the pointer datatype which in this case is int.

    // *point = 4;
    // cout << *point << endl;

    ///  Releasing and Resetting 
    // int* point{}; // initialized to nullptr
    // point = new int;
    // // whatever operations we are going to perform 

    // delete point; // releasing the memory 
    // point = nullptr; // resetting it to null pointer should do it to avoid bad things


    // we can also do above steps of dynamic memory allocation after declaring the pointer and initilizing it with new instead of nullptr
    // int* p1 {new int}; // Memory location contains junk value
    // int* p2 {new int(23)}; // using direct initialization
    // int* p3 {new int{22}}; // using uniform initialization
    // cout << p1 << endl;
    // cout << *p1 << endl; // going to give garbage value
    // cout << p2 << endl;
    // cout << *p2 << endl;
    // cout << p3 << endl;
    // cout << *p3 << endl;
    // delete p1;
    // p1 = nullptr;
    // delete p2;
    // p2 = nullptr;
    // delete p3;
    // // delete p3; // system terminates the program at this point nothing after it will execute 
    // cout << "hello" << endl;
    // p3 = nullptr;

    /* IMP  never use delete twice for releasing the same pointer , i.e.
     delete p1;
     delete p1;
     it will cause bad things to occur*/


     ///////////////////
     /// Dangling pointers ///
     // it can occur in three cases that is uninitialized pointer, deleted pointer, multiple pointer pointing to the same memory.

    // basically checking every time if the pointer in nullptr or not via if else will help if it id not nullptr we can use it but if it is not we cannot use it for all three cases



    // when new fails to allocate memory//
    //we can do two things first is use try-catch exception and second use no throw before initialization

    // exception approach
    // for (size_t i {0}; i < 10; ++i){
    //     try {
    //         int* data = new int[10000000000];
    // } catch(exception& exp) {
    //     cout << "something went bad!" << exp.what() << endl;
    // }
    // }
    
    // no throw appproach
    // for (size_t i {0}; i < 10; ++i){
    //     int * data = new(nothrow) int[10000000000];
    //      if(data != nullptr){
    //         cout << "data allocation success" << endl;
    //     }else{
    //          cout << "data allocation failed" << endl;

    //      }
    // }
    


    // // verbose pointer safety
    // int* pointer {}; // initialized to nullptr
    
    // if(!(pointer == nullptr)){
    //     cout << "Pointer points to a VALID address" << endl;
    // }else {
    //     cout << "Pointer points to a INVALID address" << endl;
        
    // }
    
    // // compact pointer safety can be written 
    // int* pointer {};
    // pointer = new int {24};
    // if(pointer){
    //     cout << "Pointer points to a VALID address " << pointer << endl;
    //     cout << "Pointer points to a VALID address " << *pointer << endl;
    // }else{
    //     cout << "Pointer points to a INVALID address" << endl;

    // }

    // int* pointer1 {};// initialized to nullptr
    // delete pointer1;
    // pointer1 = nullptr;// their is no need to do this if pointer is already a nullptr


//////////////////////////////////////////////////////

    ///Memory Leaks ///

    // case 1
    // int* point {new int {24}}; // dynamically allocated memory at address : a

    // // should have deletd and reset here itself

    // int number{2}; // is present at adress : b
    // point = &number; // now the pointer point points to address : b and our program still uses the address : a but lost access to it // this is a memory leak
    
    // // case 2 : double allocation
    // int* point {new int{24}};
    // // should have used it and then delete & reset it here itself. 
    // point = new int{7}; // memory containing int{24} leaked


    // // case 3 : pointer is present in a local scope
    // {
    //     int* pointer {new int {24}};
    //     // after this scope the above pointer will die but allocated memory wont so this is also a memory leak
    // }
    // // memory leaked that contained int{24}


    ///////////////////////////////////

    /// Dynamic Arrays ///

    // // dynamic array allocation
    // size_t size{10};
    // // int* point {new int[size]}; // this array point will contain all garbage values
    // // // but if we use nothrow for new
    // // int* pointer {new(nothrow) int[size]{}};// this will intialize all the values to 0
    
    // int* pointer1 {new int[size]{1,2,3,4,5,6,7,8,9,10}};// this will intialize all the other remaining values to 0
    // for(int el : pointer1){
    //     cout << "Value in array at index"<< " is " << el << endl;
    // }

    // we can also check for nullptr safety here
    // if(pointer){
    //     // do things with the array
    // }

    // /// we should also like we did in pointers free the memory and reset it do point to nullptr to be a better c++ developing practice
    // int* pointer {new int[10]};
    //  // do things with the array and then 

    // delete[] pointer; // array version of freeing memory is delete[].
    // pointer = nullptr;


     /* imp points:
        range based for loop ie -> (for (auto e : array){}) & std::size(array0 doesnt work with dynamic arrays like it worked for static arrays. static array lives on the stack while dynamic arrays live on the heap.
     */




}