#include <iostream>

class BaseClass {
 public:
    bool functA(int X) { return false; }
    
    BaseClass() { std::cout << "base\n"; }
};

class DerivedClass : public BaseClass {
 public:
    DerivedClass() { std::cout << "derived\n"; }
};

int main() {
  DerivedClass *myDerived2 = new DerivedClass();
  
  std::cout << "calling base:\n";
  
  BaseClass *myBase = new BaseClass();
  
  std::cout << "calling derived:\n";
  
  DerivedClass *myDerived = new DerivedClass();
  
  std::cout << "Casting base to derived:\n";
  
  myDerived = static_cast<DerivedClass>(myBase);
  
  std::cout << "Casting derived to base:\n";
  
  myBase = static_cast<BaseClass>(myDerived);
  
  return 0;
}