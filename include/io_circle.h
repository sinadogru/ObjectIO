#ifndef IO_CIRCLE_H
#define IO_CIRCLE_H

#include "circle.h"
#include "io_obj.h"


class Io_circle : public Circle, public Io_obj {
public:
    Io_circle* clone() const;
    Io_circle(std::istream&);
    static Io_obj* new_circle(std::istream& s);
};

#endif // IO_CIRCLE_H
