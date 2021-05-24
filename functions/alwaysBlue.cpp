#include <iostream>

std::string always_blue() {
  return "blue\n";
}

int main() {
  std::string res = always_blue();

  std::cout << res;

  return 0;
}