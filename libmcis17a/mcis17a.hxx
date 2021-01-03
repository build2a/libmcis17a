#pragma once

#include <iosfwd>
#include <string>

#include <libmcis17a/export.hxx>

namespace cis17a
{
    // Print a greeting for the specified name into the specified
    // stream. Throw std::invalid_argument if the name is empty.
    //
    LIBMCIS17A_SYMEXPORT void
        say_hello(std::ostream&, const std::string& name);
}
