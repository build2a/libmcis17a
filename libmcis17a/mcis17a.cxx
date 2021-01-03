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
}
