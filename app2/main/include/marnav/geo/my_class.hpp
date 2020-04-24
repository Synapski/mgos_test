#ifndef CLASS__HPP
#define CLASS__HPP

namespace marnav {
namespace geo {

class MyParentClass {
 public:
  MyParentClass(int v);
  int getV();
 private:
  int v_; 
};

class MyClass : public MyParentClass {
 public:
  MyClass(int v);
};

}
}

#endif