#include "shape.h"

int main() {
    shape *s;
    rectangle r;
    triangle t;
    circle c;
    s = &r;
    s->get_display(4, 5);
    s->display_area(4, 5);
    s = &t;
    s->get_display(4, 5);
    s->display_area(4, 5);
    s = &c;
    s->get_display(4, 0);
    s->display_area(4, 0);

    return 0;
}

