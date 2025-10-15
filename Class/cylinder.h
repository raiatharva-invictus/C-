#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"
class Cylinder {
    double radius;
    double height;

    public :
        Cylinder();
        Cylinder (double r, double h);
        // Setter for radius
        void setRadius(double r);
        void setHeight(double h);
        // Getter for radius
        double getRadius();
        double getHeight();
        
        double volume();
};
#endif