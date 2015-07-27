#include <iostream>

class BaseClass {
 public:
    bool functA(int X) { return false; }
    
    BaseClass() { std::cout << "base\n"; }
};

class DerivedClass : public BaseClass {
 public:
    int x;
    int a = 1;
    DerivedClass() { std::cout << "derived\n"; x = 2; }
};

int main() {
  
  BaseClass *myBase = new BaseClass();
  DerivedClass *myDerived;
  
  std::cout << "Casting base to derived:\n";
  
  myDerived = static_cast<DerivedClass*>(myBase);
  
  //std::cout << myDerived->x << std::endl;
  
  return 0;
}