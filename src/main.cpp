#include <iostream>
#include <sstream>

#include "io_obj.h"
#include "io_circle.h"
#include "shape.h"
#include "triangle.h"

using Io_triangle = Io<Triangle>;
template<>
Io_triangle::Io(std::istream& is)
{
    double x;
    double y;
    double z;
    is >> x >> y >> z;
    set_sides(x, y, z);
}

void register_shape_types()
{
    register_obj("Circle", &Io_circle::new_circle);
    register_obj("Triangle", &Io_triangle::new_io);
}

void user()
{
    std::istringstream iss{"Triangle 3 4 5"};

    auto p = get_obj(iss);

    /** hide different class hierarchies behind the Io_obj interface
      * and get access to a concrete class as you need it.
      */
    if (auto sp = dynamic_cast<Shape*>(p))
        sp->draw();
    else
        std::cout << "Non-shape in Shape file!!" << std::endl;
}

int main()
{
    register_shape_types();
    user();
}
