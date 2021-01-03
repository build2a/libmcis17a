#include <cassert>
import cis17a;
import std.core;

int main()
{
    using namespace std;
    using namespace cis17a;

    // Basics.
    //
    {
        ostringstream o;
        say_hello(o, "World");
        assert(o.str() == "Hello, World!\n");
    }

    // Empty name.
    //
    try
    {
        ostringstream o;
        say_hello(o, "");
        assert(false);
    }
    catch (const invalid_argument& e)
    {
        assert(e.what() == string("empty name"));
    }
}
