#include <iostream>
#include <string>

using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
    Car(string _brand, string _model, int _year) {
      brand = _brand;
      model = _model;
      year = _year;
    }
    void print() {
      cout << "Brand: " << brand << ", model: " << model << ", year: " << year << endl;
    }
};