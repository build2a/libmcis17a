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

    export template<typename ... Args>
        std::string format(const std::string& format, Args ... args)
    {
        int size = std::snprintf(nullptr, 0, format.c_str(), args ...) + 1; // Extra space for '\0'
        if (size <= 0) { throw std::runtime_error("Error during formatting."); }
        // use std::unique_ptr?
        char* buf{ new char[size] };
        try {
            std::snprintf(buf, size, format.c_str(), args ...);
        }
        catch (...)
        {
            delete[] buf;
            throw;
        }
        return std::string(buf, buf + size - 1); // We don't want the '\0' inside
    }
}
