// The body mass index (BMI)

#include <iostream>

int main() {
  double height, weight, bmi;

  std::cout << "Type in your height (m): ";
  std::cin >> height;

  std::cout << "Type in your weight (kg): ";
  std::cin >> weight;

  bmi = weight / (height * height);

  std::cout << "Your is BMI is " << bmi << "\n";

  return 0;
}