#include <iostream>
using namespace std;

class shape {
    private:
        double x;
        double y;

    public:
        void get_display() {
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


int main() {

    shape *s;
    rectangle r;
    triangle t;
    s = &r;
    s->display_area(4, 5);
    s = &t;
    s->display_area(4, 5);



    return 0;
}
