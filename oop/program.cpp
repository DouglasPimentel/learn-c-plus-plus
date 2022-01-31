#include <iostream>
#include "class/fruit.cpp"
#include "class/car.cpp"

using namespace std;

int main() {
  Fruit fruit;
  Car car("Ford", "Mustang", 1969);

  fruit.name = "Apple";

  cout << "Fruit name: " << fruit.name << endl;
  car.print();

  return 0;
}