/// Classes ///
#include <iostream>
#define PI 3.14;

int main(){

}
class Cylinder {
    public:
        double base_radius {12.2};
        double height {22};
    public:
        double volume(){
            return PI * base_radius * base_radius * height;
        }
};
