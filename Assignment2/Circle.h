#ifndef Circle_H
#define Circle_H

#include "FigureGeometry.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Circle : public FigureGeometry{

    private:
        float radius;

    public:
        Circle(){;}

        Circle(float theRadius){
            radius = theRadius;
        }

        float getRadius() const{
            return radius;
        }

        float getArea() const{
            return getRadius() * getRadius() * PI;
        }

        float getPerimeter() const{
            return getRadius() * 2 * PI;
        }

        void setRadius(float theRadius){
            radius = theRadius;
        }
};
#endif