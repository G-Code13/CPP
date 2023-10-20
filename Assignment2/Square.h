#ifndef Square_H
#define Square_H

#include "FigureGeometry.h"
#include "Point.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Square : public FigureGeometry{

    private:
        Point point;
    
    public:
        Square(Point p1){
            point = p1;
        }

        int getSideLength() const{
            return point.getWidth();
        } 
        
        virtual float getArea() const{
            return getSideLength() * getSideLength();
        }

        virtual float getPerimeter() const{
            return getSideLength() * 4;
        }

        void setPoint(Point p1){
            point = p1;
        }

    // return 0;
};
#endif