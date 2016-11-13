#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"


class Triangle : public Shape {
public:
    Triangle() = default;
    Triangle(double, double, double);
    void set_sides(double, double, double);
    void draw() const override;
private:
    double x_;
    double y_;
    double z_;
};

#endif // TRIANGLE_H
