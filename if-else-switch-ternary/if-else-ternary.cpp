#include <iostream>

int main()
{
    // if - else statement
    /*
    Syntax:
    if (condition) {
        //code to be executed
        
    } else {
        // code to be exceuted if if condition is false 
    }

    we can introduce to this else if statement
    if (condition) {
        //code to be executed
        
    } else if (condition) {
        // code to be exceuted if if condition is false 
    } else {
        // code to be exceuted if both if and else if condition are false 
    }
    */

    // const is used to declare constant variables once it is declared and initialized it cannot be changed
    // const int n {10};    
    
    // std::cout << n << std::endl;

    /*
    // switch - case statement
    switch (expresion) {
        case constant1: {
            // code to be executed if expresion == constant1        
        }
        break;
        case constant2: {
            // code to be executed if expresion == constant2        
        }
        break;
        default : {
            // code to be executed if expresion doesn't match any case constant        
        }
        
    }

    !!imp point : expression must be of integral or enum type and the case constants must be of sae type as expression

    */
//    example of switch case  //
/*

    const int day1 {1};
    const int day2 {2};
    const int day3 {3};
    const int day4 {4};
    const int day5 {5};
    const int day6 {6};
    const int day7 {7};

    int day {day5};
     
    switch (day){
        case 1: {
            std::cout << "Monday" << std::endl;
        }
        break;
        case 2: {
            std::cout << "Tuesday" << std::endl;
        }
        break;

        // grouping of cases//
        case 5:
        case 6:
        case 7:{
            std::cout << "Weekend" << std::endl;
        }
        break;
        default: {
            std::cout << "No case matched" << std::endl;
        }
    }
        */


    /// ternary expression ///
    //  Syntax : 
    // (condition) ? expression1 : expression2;
    // if condition is true expression1 is evaluated otherwise expression2 is evaluated
    //expression1 and expression2 must be of same type or be onvertible to same type eg int max = condition ? int : float (implicit conversion to int here) but  if you would try auto max = condition ? int : float it would be converted implicitly to float
    // we can also initialize a variable using ternary expression eg. int var = (condition) ? exp1 : exp2;




    return 0;


}