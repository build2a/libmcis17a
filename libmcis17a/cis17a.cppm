export module cis17a;

import std.core;
import std.memory;

namespace cis17a
{
    // Print a greeting for the specified name into the specified
    // stream. Throw std::invalid_argument if the name is empty.
    //
    export __symexport void
        say_hello(std::ostream&, const std::string& name);

    export template<typename... Args>
        std::string format(const std::string& format, Args... args);
}
