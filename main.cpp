#include <iostream>
#define pi 3.14
using namespace std;

class shape {
    private:
        double x;
        double y;

    public:
        void get_display(double x, double y=0) {
            this->x = x;
            this->y = y;
        }

        virtual void display_area(double x, double y) {
            cout << "Displays the area" << endl;
        }
};

class rectangle : public shape {
    public:
        void display_area(double x, double y) {
            cout << "Area of rectangle is: " << x*y << endl;
        }
};

class triangle : public shape {
    public:
        void display_area(double x, double y) {
            cout << "Area of triangle is: " << 0.5*x*y << endl;
        }
};

class circle : public shape {
    public:
        void display_area(double x, double y)  {
            cout << "Area of Circle is: " << pi*x*x << endl;
        }
};


int main() {

    shape *s;
    rectangle r;
    triangle t;
    circle c;
    s = &r;
    s->display_area(4, 5);
    s = &t;
    s->display_area(4, 5);
    s = &c;
    s->display_area(4, 0);



    return 0;
}
