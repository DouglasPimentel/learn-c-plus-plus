#include <iostream>
#include "class/fruit.cpp"
#include "class/car.cpp"
#include "class/person.cpp"

using namespace std;

int main() {
  Fruit fruit;
  Car car("Ford", "Mustang", 1969);
  Person person("John", 30);

  fruit.name = "Apple";

  cout << "Fruit name: " << fruit.name << endl;
  car.print();
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;

  return 0;
}