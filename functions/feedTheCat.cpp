#include <iostream>

std::string feed_the_cat() {
  return "Cat is fed!";
}

int main() {
  std::string cat_message = feed_the_cat();

  std::cout << cat_message << "\n";

  return 0;
}