#include <iostream>
#include <vector>

int main() {
  std::vector<double> deliveryOrder;

  deliveryOrder.push_back(8.99);
  deliveryOrder.push_back(3.75);
  deliveryOrder.push_back(0.99);
  deliveryOrder.push_back(5.99);

  double total = 0.0;

  for(int i = 0; i < deliveryOrder.size(); i++) {
    total += deliveryOrder[i];
  }

  std::cout << total << "\n";

  return 0;
}
