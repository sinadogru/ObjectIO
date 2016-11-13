#include "io_obj.h"

#include <istream>
#include <map>
#include <string>

using namespace std;

namespace
{
auto io_map = map<string, PF>{}; // map strings to creation functions
string get_word(istream& is)
{
    string s;
    is >> s;
    return s;
}
} // anonymous namespace

Io_obj* get_obj(istream& s)
{
    auto str = get_word(s);

    auto f = io_map[str];
    if (f)
        return f(s);
    return nullptr;
}

void register_obj(const string& str, PF pf)
{
    io_map[str] = pf;
}
