#ifndef FUNCTIONS__HPP
#define FUNCTIONS__HPP

#include "marnav/geo/my_class.hpp"
#include <string>

namespace marnav {
namespace nmea {  

void function_a();

void print_my_class(marnav::geo::MyClass c);

std::string to_string(marnav::geo::MyClass c);

}
}

#endif
