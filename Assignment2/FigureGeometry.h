#ifndef FigureGeometry_H
#define FigureGeometry_H

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class FigureGeometry{

    public:
        virtual float getArea() const = 0;
        virtual float getPerimeter() const = 0;
};      
        static const float PI = 3.14f;     
#endif


//declare an interface  //class child : public GFG 