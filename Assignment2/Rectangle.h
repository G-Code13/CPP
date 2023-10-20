#ifndef Rectangle_H
#define Rectangle_H

#include "FigureGeometry.h"
#include "Point.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle : public FigureGeometry{

    private:
        Point point;

    public:
        Rectangle(Point p1){
            point = p1;
        }

        int getWidth() const{
            return point.getWidth();
        }

        int getHeight() const{
            return point.getHeight();
        }

        float getArea() const{
            return getWidth() * getHeight();
        }

        float getPerimeter() const{
            return (getWidth() + getHeight()) * 2;
        }

        void setPoint(int theWidth, int theHeight){
            point.setWidth(theWidth);
            point.setHeight(theHeight);
        }
    // return 0;
};
#endif