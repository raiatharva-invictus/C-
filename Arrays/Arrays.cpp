#include <iostream>

int main()
{
    ///Arrays ///
    // it is a collection of elements of the same datatype
    /*
    int arr[5];
    for (int i = 0; i < 5; i ++){
        arr[i] = i*2;
    }
    
    for (int i = 0; i < 5; i ++){
        std::cout << arr[i] << std::endl;
    }

    //manually assigning value to an index
    arr[4] = 10;
    std::cout << arr[4] << std::endl;

    // giving value to an index which is out of bounds it will print the assigned value only but it is undefined behavior and is unsafe
    // arr[10] = 20;
    // std::cout << arr[10] << std::endl;
    // std::cout << arr[10] << std::endl;

    std::cout << arr[15] << std::endl; // garbage value will be printed

    */
/*
    ///initializing an array at the time of declaration///
    
    // int arr[7] = {1,2,3,4}; // rest of the elements will be initialized to 0
    // for (int i = 0; i < 7; i++){
    //     std::cout << arr[i] << std::endl;
    // }
*/
    // we also dont have to specify the size of the array if we are initializing it at the time of declaration
    // int arr[] = {1,2,3,4,1,2,3}; 
    // for (auto e : arr){
    //     std::cout << e << std::endl;
    // }

/*
    //we can also use the keyword 'const' to make the array immutable
    int n = 5; 
    const int arr[n] = {1,2,3,4,5};
    n = 10;
    // arr[4] = 10;// this will give an error as the array is immutable
    for (auto e : arr){
        std::cout << e << std::endl;
    }
    std::cout << (sizeof(arr) / sizeof(arr[0])) << std::endl; // to get the size of the array
    return 0;

    /// variable length arrays are not part of c++ standard but some compilers(eg Clang & gcc) support it as an extension 
*/

    // int arr[] {1,2,1,3,4,5};

    // for (int i {0}; i < std::size(arr); i++) {
    //     std::cout << arr[i] << std::endl;
    // }
    // std::cout << std::size(arr) << std::endl;
    // std::cout << sizeof(arr)/sizeof(arr[0]) << std::endl;

/*
    /// ARRAYS OF CHARACTERS ///
    // we can do all things we did above for character arrays too
    //but here we can directly print it on the console as shown below
    char arr[] {'h','e','l','l','o'};
    std::cout << arr << std::endl;
    // above will print hello plus some garbage value too so we add \0 to make it a C String(it is as we know in C lang string is a seq of characters terminated by a null character)
    //so correct way to do it is:-
    
    char arr2[] {'h','e','l','l','o','\0'};// as you can see we added \0 at the end
    std::cout << arr2 << std::endl;

    char arr3[6] {'h','e','l','l','o'};// in this we specify size so that at last index \0 is added automatically
    char arr4[] {'h','e','l','l','o'}; // this may look but it is decieving since it is not a C string as it is not null terminated will get unwanted value when printed
    std::cout << arr3 << std::endl;
    std::cout << arr4 << std::endl;
    std::cout << std::size(arr) << std::endl;
    std::cout << std::size(arr2) << std::endl;
    std::cout << std::size(arr3) << std::endl;
    std::cout << std::size(arr4) << std::endl;
*/
    /// STRING LITERALS (literals c string)///
    // it is a string enclosed in double quotes
    char msg[] {"Hello"}; // automatically null terminated
    char msg2[] {"Hello World!"}; // automatically null terminated, we can also add spaces(means noramal string stuff)
    std::cout << msg << std::endl;
    std::cout << msg2 << std::endl;
    std::cout << std::size(msg) << std::endl; // size of pointer
    std::cout << std::size(msg2) << std::endl; // length of string

    // this direct printing of char array is possible only with char arrays not with other datatypes

    // weshould poerate in array in bounds only not out of bonunds(the size f the arra not try to access beofre or after it but in it)
    return 0;

}