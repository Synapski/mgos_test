#include "marnav/nmea/my_class.hpp"
#include "mgos.h"

namespace marnav {
namespace nmea {  

void function_a() {
  LOG(LL_INFO, ("Function 1"));
}

void print_my_class(marnav::geo::MyClass c) {
  LOG(LL_INFO, ("MyClass value : %d", c.getV()));
}

std::string to_string(marnav::geo::MyClass c) {
  char buffer [100];
  snprintf(buffer, 100, "%d", c.getV());
  return std::string(buffer);
}

}
}
