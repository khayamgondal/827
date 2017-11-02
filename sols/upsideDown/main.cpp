#include <iostream>
int yylex();

int main() {
  yylex();
  std::cout << std::endl<< "Translation complete" << std::endl;
  return 0;
}
