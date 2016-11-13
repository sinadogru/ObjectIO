#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


class Circle : public Shape
{
public:
    Circle() = default;
    void draw() const override;
};

#endif // CIRCLE_H
