#include <iostream>

int main() {
  srand(time(NULL));

  int theAmazingRandomNumber = rand() % 25;

  std::cout << theAmazingRandomNumber << "\n";

  return 0;
}