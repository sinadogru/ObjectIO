#ifndef IO_OBJ_H
#define IO_OBJ_H

#include <string>
#include <istream>
#include <functional>


/////////////////////
/// Type Declarations
class Io_obj {
public:
    virtual Io_obj* clone() const = 0;
    virtual ~Io_obj() = default;
};

template<typename T>
class Io : public T, public Io_obj {
public:
    Io* clone() const override { return new Io{*this}; }
    Io(std::istream&);
    static Io_obj* new_io(std::istream& s) { return new Io{s}; }
};

#ifdef USE_STD_FUNCTION
using PF = std::function<Io_obj*(std::istream&)>;
#else
using PF = Io_obj*(*)(std::istream&);
#endif

/////////////////////
/// Function Declarations
Io_obj* get_obj(std::istream&);
void register_obj(const std::string&, PF);

#endif // IO_OBJ_H
