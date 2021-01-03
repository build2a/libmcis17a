module cis17a;

namespace cis17a
{
    void say_hello(std::ostream& o, const std::string& n)
    {
        if (n.empty())
            throw std::invalid_argument("empty name");

        o << "Hello, " << n << '!' << std::endl;
    }
}
