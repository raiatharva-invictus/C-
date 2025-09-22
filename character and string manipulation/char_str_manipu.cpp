#include <iostream>
#include <cstring>
using namespace std;

int main()
{
     /// Character manipulation ///
    // /// std::isalnum() : give non zero value if the character is alphaumeric and zero if it is not alphanumeric
    // char a {'A'};
    // char b {'2'};
    // char c {'&'};

    // cout << isalnum(a) << endl;
    // cout << isalnum(b) << endl;
    // cout << isalnum(c) << endl;


    // /// std::isalpha() : give non zero value if the character is alphabetic and 0 if it is not alphabetic
    // char a {'A'};
    // char d {'A'};
    // char b {'2'};
    // char c {'&'};

    // cout << isalpha(a) << endl;
    // cout << isalpha(d) << endl;
    // cout << isalpha(b) << endl;
    // cout << isalpha(c) << endl;

    // /// std::isblank() : give non zero value if the character is blank and 0 if not 
    // char a {' '};
    // cout << isblank(a) << endl;

    // /// std::islower() : give non zero value if the character is is in lower case and 0 if not 
    // char a {'t'};
    // cout << islower(a) << endl;

    // /// std::isupper() : give non zero value if the character is in upper case and 0 if not 
    // char a {'A'};
    // cout << isupper(a) << endl;
    
    // /// std::isdigit() : give non zero value if the character is digit and 0 if not 
    // char a {'6'};
    // cout << isdigit(a) << endl;
    
    /// both tolower() and toupper() works for character to use it for string we need to loop through each to convert them as shown below
    /// std::tolower() : changes the case of the given teext to lower case  
    // char a[] {"Hello my name is Atharva Rai"};
    // char b[size(a)];

    
    // // Convert each character to lowercase
    // for (size_t i = 0; i < size(a); ++i) {
    //     b[i] = tolower(a[i]);
    // }
    // cout << a << endl;
    // cout << b << endl;
    // // Convert each character to uppercase
    // for (size_t i = 0; i < size(a); ++i) {
    //     b[i] = toupper(a[i]);
    // }
    // cout << a << endl;
    // cout << b << endl;

    /// std:strlen is used ot give the size of c-string ///

    // const char s[] {"Hello my name is Atharva Rai"};
    // // Array decays into a pointer when const char* is used
    // const char* p {"Hello my name is Atharva Rai"} ; 

    // // give me the size of string excluding the null character
    // cout << "size is : " << strlen(s) << endl;
    // //gives the size inlcudidng null character 
    // cout << "size is : " << sizeof(s) << endl;
    // // strlen works even with decayed arrays
    // cout << "size is : " << strlen(p) << endl;
    // //prints the size of pointer
    // cout << "size is : " << sizeof(p) << endl;


    /// std::strcmp and std::strncmp ///

    /// std::strcmp compares two given strings say const char* s, const char* s2 in lexicographical order that is it gives zero in case when both strings are same else it gives negative value if first string is behind the second string and positive if first string is ahead of the second string

    // const char* s {"Atharva"};
    // const char* p {"Atharva"};
    // cout << strcmp(s,p) << endl;

    /// strncmp is used with an addn. parameter that is how many character i have to compare
    // const char* s {"Atharva"};
    // const char* p {"ATharva"};

    // cout << strncmp(s,p,2) << endl;    


    /// std::strchr helps in finding the first occurence of a character returns a pointer to where it found the first occurence///
    // const char* p {"Hello my name is Atharva. My name is Atharva because name is mine"};
    // char target {'n'};
    // const char* result = p;
    // int iter{}; 

    // while((result = strchr(result, target))!=nullptr){
    //     cout << "Found " << target << " starting at " << result << endl;

    //     ++result;
    //     ++iter;
    // }
    // cout << "iterations " << iter << endl;

    /// std:strrchr helps in finding the last occurence of character///
    // char p[] {"C:/Users/admin/desktop/c++.txt"};
    // const char* p2[] {"C:/Users/admin/desktop/c++.txt"}; 
    // char* points = strrchr(p, '/');
    // if(points){
    //     cout << "The file is present in " << points+1 << endl;
    // }


    /// std::strcat it is used to concatenate strings ///
    // char d[50] {"Hello "}; // make sure you have enough space
    // char p[50] {"World"};
    // // strcat(d, p);// going to concatenate on the d string that is d = d + p we can print this out directly since it returns the concatenated string or print d itself
    // cout << strcat(d, p) << endl;
    // // cout << d << endl;
    // cout << p << endl;
    
    /// std::strncat it is used to concatenate n characters of second_param to first_param , the third parameter is n ///
    // char d[50] {"Hello "}; // make sure you have enough space
    // char p[50] {"World"};
    // // strncat(d, p, n);// going to concatenate on the d string that is d = d + p(n char's) we can print this out directly since it returns the concatenated string or print d itself
    // cout << strncat(d, p, 1) << endl;
    // cout << p << endl;


    ///std::strcpy(dest, source) and std::strncpy(dest, source, no_of_chars);
    // char p [60] {"Hello world this is going to be overwritten"};
    // char c [10] {"I am C++"};
    // strcpy(p,c); // this overwrites the string in p with s and in array to it overwrites the prev we can use this to create a new string or char array and copy some predefined array or string
    // cout << p << endl;


    // /// std::strncpy ///
    // char a[]{'a','b','c','d','e','\0'};
    // char b[]{'t','u','v','w','x','\0'};

    // strncpy(a,b,3); // it going to overwrite the dest with specified n in the third parameter from b
    // cout << a << endl;

//////////////////////////////////////////////////////////////////////////////////////////
    /// std:string makes worjking with string very easy ///
    


}