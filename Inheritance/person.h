#ifndef PERSON_h
#define PERSON_h

#include<iostream>
#include<string>
using namespace std;

class Person{
    // just below line is basically overloading the operator<< , so that we define how it works for our class
    friend std::ostream& operator << (std::ostream& out, const Person& person);
    public:
        Person();
        Person(string& f_name_param, string& l_name_param);
        ~Person();

        // Getters
        string get_fname() const {
            return first_name;
        }
        string get_lname() const {
            return last_name;
        }
/*
 this is code for first_try_on_inherit
    private:
        string first_name{"Private"};
        string last_name{"Person"};
*/
    protected:
        string first_name{"Private"};
        string last_name{"Person"};
};
#endif