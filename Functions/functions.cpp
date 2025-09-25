#include <iostream>
using namespace std;

// int sum (int a, int b); // declaration of the function
// // if we are using function like here in two parts first is declaration or prototype and second is the definition of our function the prototype always meed to come before the function is called else it will give error

//we can also skip to write variable name in the argument while declaring function but it is better to write to keep it well documented
int min(int , int );

int main()
{
    int f{4}, b {3};
    cout << min(f,b) << endl;
    return 0;
}

// int sum(int a, int b){ // definition of the function
//     return a + b;
// }


int min(int a, int b){
    return a > b ? b : a;
}