#include "person.h"
using namespace std;

Person::Person(){}

Person::Person (string& f_name_param, string& l_name_param) : first_name(f_name_param), last_name(l_name_param){}

std::ostream& operator<< (std::ostream& out, const Person& person){
    out << "Person first name is : " << person.first_name << " and last name is : " << person.last_name ;
    return out;
}
Person::~Person(){}