#include <iostream>

double get_tip(double price) {
  return price * 0.2;
}

int main() {
  double tip = get_tip(18.25);

  std::cout << "Tip would be " << tip << "\n";

  return 0;
}