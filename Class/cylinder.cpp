/*
This file contains the implementation of the header file "cylinder.h"
*/

#include "cylinder.h"

// constructors of the class
Cylinder::Cylinder(){};
Cylinder::Cylinder(double r, double h){
    radius = r;
    height = h;
}

// Setter for radius
void Cylinder::setRadius(double r){
    radius = r;
}
void Cylinder::setHeight(double h){
    height = h;
}
// Getter for radius
double Cylinder::getRadius(){
    return radius;
}
double Cylinder::getHeight(){
    return height;
}
// method of the class
double Cylinder::volume(){
    return PI*radius*radius*height;
}