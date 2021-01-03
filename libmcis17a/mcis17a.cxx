module cis17a;

using namespace std;

namespace cis17a
{
    void say_hello(ostream& o, const string& n)
    {
        if (n.empty())
            throw invalid_argument("empty name");

        o << "Hello, " << n << '!' << endl;
    }

    template<typename ... Args>
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
