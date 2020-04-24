#include "marnav/geo/my_class.hpp"

namespace marnav {
namespace geo {
  
MyParentClass::MyParentClass(int v) {
  this->v_ = v;
}

int MyParentClass::getV() {
  return this->v_;
}

MyClass::MyClass(int v) : MyParentClass(v) {
  
}

}
}
