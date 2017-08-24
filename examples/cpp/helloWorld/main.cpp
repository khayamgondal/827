#include <iostream>
int i = 19;

namespace MySpace {
  int i = 7;

  void f(int& x) {
    ++x;
  }
}

void f(int x) {
    ++x;
}

int main() {
  int i = 99;
  f(i);
  std::cout << "i is: " << i << std::endl;
  MySpace::f(i);
  std::cout << "i is: " << i << std::endl;
}
