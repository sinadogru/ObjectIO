#include "triangle.h"
#include <iostream>

using namespace std;


Triangle::Triangle(double x, double y, double z)
    : x_{x},
      y_{y},
      z_{z}
{}

void Triangle::set_sides(double x, double y, double z)
{
    x_ = x;
    y_ = y;
    z_ = z;
}

void Triangle::draw() const
{
    cout << "Triangle => x: " << x_ << ", y: " << y_ << ", z: " << z_ << endl;
}
