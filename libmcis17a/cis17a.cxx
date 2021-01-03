module cis17a;

import std.core;

namespace cis17a
{
    void say_hello(std::ostream& o, const std::string& n)
    {
        if (n.empty())
            throw std::invalid_argument("empty name");

        o << "Hello, " << n << '!' << std::endl;
    }

    template<typename... Args>
    std::string format(const std::string& format, Args... args)
    {
        int size = std::snprintf(nullptr, 0, format.c_str(), args...) + 1; // Extra space for '\0'
        if (size <= 0) { throw std::runtime_error("Error during formatting."); }
        // use std::unique_ptr?
        char* buf{ new char[size] };
        try {
            std::snprintf(buf, size, format.c_str(), args...);
        }
        catch (...)
        {
            delete[] buf;
            throw;
        }
        return std::string(buf, buf + size - 1); // We don't want the '\0' inside
    }
}
