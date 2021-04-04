#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> grocery = {
    "Hot Pepper Jam",
    "Dragon Fruit",
    "Brussel Sprouts"
  };

  grocery.push_back("Cabbage");
  grocery.push_back("Carrot");
  grocery.push_back("Beef");

  std::cout << grocery.size() << "\n";

  return 0;
}
