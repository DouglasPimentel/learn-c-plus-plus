#include <iostream>

void name_x_times(std::string name, int x) {
  while(x > 0) {
    std::cout << name << "\n";
    x--;
  }
}

int main() {
  std::string myName = "John";
  int someNumber = 10;

  name_x_times(myName, someNumber);

  return 0;
}