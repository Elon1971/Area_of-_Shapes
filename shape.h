#ifndef SHAPE_H
#define SHAPE_H

class shape {
private:
    double x;
    double y;

public:
    void get_data(double xVal, double yVal = 0);
    virtual void display_area();
    double get_x() const { return x; }
    double get_y() const { return y; }
};

class rectangle : public shape {
public:
    void display_area() override;
};

class triangle : public shape {
public:
    void display_area() override;
};

class circle : public shape {
public:
    void display_area() override;
};

#endif
