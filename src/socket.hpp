#if !defined(__EMSCRIPTEN__) && !defined(__pnacl__)
#ifndef SOCKET_HPP
#define SOCKET_HPP

// includes

#include <string>

#include "libmy.hpp"

namespace socket_ { // HACK: "socket" creates a conflict on macOS

// functions

void init ();

std::string read  ();
void        write (const std::string & s);

}

#endif // !defined SOCKET_HPP
#endif
