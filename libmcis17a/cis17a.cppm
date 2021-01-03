export module cis17a;

import std.core;
import std.memory;

export namespace cis17a
{
    // Print a greeting for the specified name into the specified
    // stream. Throw std::invalid_argument if the name is empty.
    //
    __symexport void
        say_hello(std::ostream&, const std::string& name);

    template<typename ... Args>
    __symexport std::string format(const std::string& format, Args ... args);
}
