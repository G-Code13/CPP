#include "Point.h"
#include "Circle.h"
#include "Rectangle.h"
#include "FigureGeometry.h"
#include "Square.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

        Circle c1(5);
        Square s1(Point(5, 5));
        Rectangle r1(Point(5, 7));

        cout << "Circle Radius: " << c1.getRadius() << endl;
        cout << "Circle Area: " << c1.getArea() << endl;
        cout << "Circle Perimeter: " << c1.getPerimeter() << endl;

        cout << "Square Length: " << s1.getSideLength() << endl;
        cout << "Square Area: " << s1.getArea() << endl;
        cout << "Square Perimeter: " << s1.getPerimeter() << endl;

        cout << "Rectangle Width: " << r1.getWidth() << endl;
        cout << "Rectangle Height: " << r1.getHeight() << endl;
        cout << "Rectangle Area: " << r1.getArea() << endl;
        cout << "Rectangle Perimeter: " << r1.getPerimeter() << endl;

    return 0;
};

