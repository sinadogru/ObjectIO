#include "io_circle.h"


using namespace std;

Io_circle::Io_circle(istream& s)
{}

Io_circle* Io_circle::clone() const
{
    return new Io_circle(*this);
}

Io_obj* Io_circle::new_circle(istream &s)
{
    return new Io_circle(s);
}
