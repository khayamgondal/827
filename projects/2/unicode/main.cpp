#include <iostream>
#include <string>
#include <map>

int main() {
  std::string letter = u8"\u0250";
  std::cout << "ch is: " << letter << std::endl;

  std::map<char, std::string> letters;
  letters['a'] = letter;
  std::cout << "ch is: " << letters['a'] << std::endl;
}
