#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> lastJedi;

  lastJedi.push_back("kylo");
  lastJedi.push_back("rey");
  lastJedi.push_back("luke");
  lastJedi.push_back("finn");

  std::cout << lastJedi[0] << " ";
  std::cout << lastJedi[1] << " ";
  std::cout << lastJedi[2] << " ";
  std::cout << lastJedi[3] << "\n";

  return 0;
}
