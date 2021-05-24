#include <iostream>

std::string make_sandwich(std::string ingredient_1, std::string ingredient_2) {
  std::string sandwich = "";

  sandwich += "bread\n";
  sandwich += ingredient_1 + "\n";
  sandwich += ingredient_2 + "\n";
  sandwich += "bread\n";

  return sandwich;
}

int main() {
  std::string sandwich = make_sandwich("peanut butter", "jelly");

  std::cout << sandwich;

  return 0;
}