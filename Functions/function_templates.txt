#include <iostream>
using namespace std;

// Syntax of template is :-
template <typename T> T function_name(T a, T b){
   // body
}

// template is not a real C++ function but a blueprint the real C++ fucntion is the instance created using it by the compiler
// The parameter we are passing ie T should be of same datatype like int,int not double,int
// we should be careful while passing pointer to the template parameters it can turn out ot be disaster


template <typename T> T maximum(T a, T b){
    cout << "address of a " << &a << endl;
    return (a > b )? a : b;
}

// above is template parameters by value and just below is template parameters by reference

// template <typename T> T& maximumref(T& a, T& b){
//     cout << "address of a " << &a << endl;
//     return (a > b )? a : b;

// }
// you can even confuse confuse your compiler if you define two templates with same name but different template paramter ie one by value other by reference. we avoided that above by naming the function that worked by value as maximum and other as maximumref

template <typename T> const T& maximumrefconst(const T& a, const T& b){
    // ++a; // this wont work since parameters are set constant we can't change or modify values
    cout << "address of a " << &a << endl;
    return (a > b )? a : b;

}



int main() {
   int a {3};
   int b {5};   
   double e {5.4565};
   double f {5};

   string c {"Hello"};
   string d {"World"};
    // cout << maximum(a, b) << endl; // the address given by this is not same as given by instance function in case of template function by value it will be same in case of template function by reference
    // cout << maximumref(a, b) << endl; // template parameters by reference this will give the same address as that of parameter in this case as we can see for address of a parameter


    cout << maximumrefconst(a, b) << endl;

    // cout << "address of a " << &a << endl;  
    // cout << maximum(c, d) << endl;

    // above two function call uses automatic type deduction which compiler automatically by seeing parameters
    // below is Explicit type deduction in which we provide what datatype to return like if we pass int,double in above calls it will error but if we call int, double in explicit as shown below and give double it wont give error and return double
    
    // cout << maximum<double>(a,e) << endl;

    // we can pass template parameters by value and template parameters by reference(syntax for both are above main function)
    
    return 0;
}