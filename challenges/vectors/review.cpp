#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9, 11, 10};
  int sum = 0;
  int product = 1;

  for(int i = 0; i < numbers.size(); i++) {
    if(numbers[i] % 2 == 0)
      sum += numbers[i];
    else 
      product *= numbers[i];  
  }

  std::cout << "Sum of even numbers is " << sum << "\n";
  std::cout << "Product of odd numbers is " << product << "\n";

  return 0;
}
