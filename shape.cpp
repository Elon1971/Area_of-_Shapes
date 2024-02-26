#include "shape.h"
#include <iostream>
#define pi 3.14
using namespace std;

void shape::get_display(double x, double y) {
    this->x = x;
    this->y = y;
}

void shape::display_area(double x, double y) {
    cout << "Displays the area" << endl;
}

void rectangle::display_area(double x, double y) {
    cout << "Area of rectangle is: " << x * y << endl;
}

void triangle::display_area(double x, double y) {
    cout << "Area of triangle is: " << 0.5 * x * y << endl;
}

void circle::display_area(double x, double y) {
    cout << "Area of Circle is: " << pi * x * x << endl;
}

