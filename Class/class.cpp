#include <iostream>
using namespace std;
// #define PI 3.14159 //or we can use const double PI {3.14159};
const double PI {3.14159};
class Cylinder {
    public:
        double base_radius{2.4};
        double height{5.0};
    public :
        double volume(){
            return PI * base_radius  * base_radius * height ;
        }
};
int main()
{
    Cylinder cylinder;
    cout <<"Vol of Cylinder having " << "Base_Radius : " << cylinder.base_radius << " and Height : " << cylinder.height << " is " <<  cylinder.volume() << endl;
}   


