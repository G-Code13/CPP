#ifndef Point_H
#define Point_H

#include "FigureGeometry.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Point {
    private:
        int width;
        int height;

    public:
        Point(){
            width = 0;
            height = 0;
        }

        Point(int theWidth, int theHeight){
            width = theWidth;
            height = theHeight;
        }

        int getWidth() const{
            return width;
        }

        int getHeight() const{
            return height;
        }

        void setWidth(int theWidth){
            width = theWidth;
        }

        void setHeight(int theHeight){
            height = theHeight;
        }
};
#endif
