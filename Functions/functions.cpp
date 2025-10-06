#include <iostream>
#include <cstring>
using namespace std;

template <typename T> T maximum (T a, T b){
    return (a>b)? a : b;
}
// this is template specialization : It is a way to deal with certain types of data that cannot be dealt by our general template structure for example below we wrote it for const char * which cannot be handled correctly by general template
template<>
const char* maximum<const char*> (const char* a, const char* b){
    return (strcmp(a,b) > 0) ? a : b;
}   

int main() {
    const char* g{"car"};
    const char* h{"cat"};

    cout << maximum(g,h) << endl;

}