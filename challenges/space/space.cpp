#include <iostream>

int main() {
  double weight;
  int numberPlanet;

  std::cout << "Enter your earth weight? ";
  std::cin >> weight;

  std::cout << "\n\n#   Planet\n";
  std::cout << "1   Venus\n";
  std::cout << "2   Mars\n";
  std::cout << "3   Jupiter\n";
  std::cout << "4   Saturn\n";
  std::cout << "5   Uranus\n";
  std::cout << "6   Neptune\n\n";

  std::cout << "Enter number planet you want fight? ";
  std::cin >> numberPlanet;

  if(numberPlanet == 1) {
    weight = weight * 0.78;
  } else if(numberPlanet == 2) {
    weight = weight * 0.39;
  } else if(numberPlanet == 3) {
    weight = weight * 2.65;
  } else if(numberPlanet == 4) {
    weight = weight * 1.17;
  } else if(numberPlanet == 5) {
    weight = weight * 1.05;
  } else if(numberPlanet == 6) {
    weight = weight * 1.23;
  }

  std::cout << "\n Your weight: " << weight << "\n";

  return 0; 

}