#include <string>

using namespace std;

class Person {
  private:
    string name;
    int age;

  public:
    Person(string _name, int _age) {
      name = _name;
      age = _age;
    }
    string getName() {
      return name;
    }
    int getAge() {
      return age;
    }  
};